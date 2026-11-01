// Fetches the race's files for the virtual file system. INI and small files load at start.
// Track files and archive members load per race, from the lists in race-files.json, so a
// race downloads only what it reads. The game reads synchronously, so everything it needs
// must be in memory before it boots; a member missing from the lists falls back to one
// synchronous request.
const BASE = 'assets/game/';
// fread fills its buffer with at most this many bytes. Anything it reads into the caller's
// memory directly is exactly what the caller asked for: FUN_00558b35, FUN_0055fb61.
const CRT_BUFFER = 4096;

function syncRange(url, start, length) {
  const x = new XMLHttpRequest();
  x.open('GET', url, false);
  x.overrideMimeType('text/plain; charset=x-user-defined');
  x.setRequestHeader('Range', `bytes=${start}-${start + length - 1}`);
  x.send();
  if (x.status >= 400) throw new Error(`${url}: HTTP ${x.status}`);
  const s = x.responseText;
  // The server ignored the range: use the part we asked for.
  const from = x.status === 206 ? 0 : start;
  const out = new Uint8Array(Math.max(0, Math.min(length, s.length - from)));
  for (let k = 0; k < out.length; k++) out[k] = s.charCodeAt(from + k) & 0xFF;
  return out;
}

async function fetchRange(url, start, length) {
  const r = await fetch(url, { headers: { Range: `bytes=${start}-${start + length - 1}` } });
  if (r.status === 206) return new Uint8Array(await r.arrayBuffer());
  // The server ignored the range: use the part we asked for.
  const all = new Uint8Array(await r.arrayBuffer());
  return all.subarray(start, start + length);
}

/** rcs.ind: i16 count, then name[20] and u32 start (FUN_004c5e90). rc.ind: u16 count, then u32 start (FUN_004cc0b0). */
function memberStarts(name, ind) {
  const v = new DataView(ind.buffer, ind.byteOffset, ind.byteLength);
  const [record, at] = /^rcs/i.test(name) ? [24, 20] : [4, 0];
  const starts = [];
  for (let k = 0, n = v.getUint16(0, true); k < n; k++) starts.push(v.getUint32(2 + k * record + at, true));
  return starts;
}

/** Sparse view of a big archive. Spans are sorted by start and may overlap: [start, end, bytes]. */
class SparseFile {
  constructor(url, size, starts) {
    this.url = url;
    this.size = size;
    this.starts = starts;
    this.spans = [];
    this.misses = 0;
  }

  has(start, end) {
    return this.spans.some((s) => s.start <= start && s.end >= end);
  }

  addSpan(start, bytes) {
    this.spans.push({ start, end: start + bytes.length, bytes });
    this.spans.sort((a, b) => a.start - b.start);
  }

  /** A member ends where the next starts, or at the end of the file: FUN_004c5e90. */
  memberEnd(pos) {
    let lo = 0;
    let hi = this.starts.length;
    while (lo < hi) {
      const mid = (lo + hi) >> 1;
      if (this.starts[mid] <= pos) lo = mid + 1;
      else hi = mid;
    }
    return lo < this.starts.length ? this.starts[lo] : this.size;
  }

  /** The parts of start..end that no span holds. */
  gaps(start, end) {
    const out = [];
    let p = start;
    for (const s of this.spans) {
      if (s.end <= p) continue;
      if (s.start >= end) break;
      if (s.start > p) out.push([p, s.start]);
      p = s.end;
    }
    if (p < end) out.push([p, end]);
    return out;
  }

  /**
   * A buffer fill can run past its member. Each member is opened with a seek, which drops the
   * buffer (FUN_004c62c0, FUN_004cc0b0, FUN_0055a06b), so the game never looks at those bytes
   * and they stay 0. All else must be here when the call returns: the game keeps what it read.
   */
  read(pos, n, dst, at) {
    const end = pos + n;
    const wanted = n > CRT_BUFFER ? end : Math.min(end, this.memberEnd(pos));
    for (const [a, b] of this.gaps(pos, wanted)) {
      // The lists missed this member. The game reads on, so one request takes the rest of it.
      this.misses++;
      this.addSpan(a, syncRange(this.url, a, this.memberEnd(b - 1) - a));
    }
    dst.fill(0, at, at + n);
    for (const s of this.spans) {
      if (s.end <= pos) continue;
      if (s.start >= end) break;
      const a = Math.max(pos, s.start);
      const b = Math.min(end, s.end);
      dst.set(s.bytes.subarray(a - s.start, b - s.start), at + a - pos);
    }
  }
}

const LATE_PIECE = 1 << 20;

export class GameFiles {
  constructor(vfs) {
    this.vfs = vfs;
    this.list = [];
    this.lists = null;
    this.sparse = new Map();
  }

  /** Loads the INI files and everything else small and shared. */
  async loadBase(progress) {
    this.list = await (await fetch(BASE + 'files.json')).json();
    const eager = this.list.filter((f) => !/^etappe\d\./i.test(f.name) && !/^(rcs|rc)\.img$/i.test(f.name));
    let done = 0;
    const queue = [...eager];
    await Promise.all(Array.from({ length: 12 }, async () => {
      while (queue.length) {
        const f = queue.shift();
        const r = await fetch(BASE + encodeURIComponent(f.name));
        this.vfs.add(f.name, new Uint8Array(await r.arrayBuffer()));
        progress(++done, eager.length);
      }
    }));
    for (const f of this.list) {
      if (/^(rcs|rc)\.img$/i.test(f.name)) {
        const ind = this.vfs.read(f.name.replace(/img$/i, 'ind'));
        const sf = new SparseFile(BASE + encodeURIComponent(f.name), f.size, memberStarts(f.name, ind));
        this.sparse.set(f.name.toLowerCase(), sf);
        this.vfs.files.set(f.name.toLowerCase(), {
          name: f.name, data: null, size: f.size,
          rangeRead: (pos, n, u8, at) => sf.read(pos, n, u8, at),
        });
      }
    }
    try {
      this.lists = await (await fetch(BASE + 'race-files.json')).json();
    } catch {
      this.lists = null;
    }
  }

  /** The track this boot will choose, as FUN_0044ad40: [MUSIC] LAST+1, or 0 once that is past COUNT. */
  raceMusic() {
    const ini = this.vfs.parsedIni('raser.ini');
    const int = (key) => parseInt(ini.get('MUSIC', key), 10) || 0;
    const k = int('LAST') + 1;
    return ini.get('MUSIC', String(k >= 0 && k < int('COUNT') ? k : 0));
  }

  /** Everything one race reads: track files and archive members. etappe and car from game.ini. */
  async prepareRace(etappe, car, progress) {
    const want = this.list.filter((f) => new RegExp(`^etappe${etappe}\\.`, 'i').test(f.name) && !this.vfs.stat(f.name)?.data);
    let total = want.length;
    let done = 0;
    const tick = () => progress && progress(++done, total);
    const jobs = want.map(async (f) => {
      const r = await fetch(BASE + encodeURIComponent(f.name));
      this.vfs.add(f.name, new Uint8Array(await r.arrayBuffer()));
      tick();
    });
    const ranges = [];
    if (this.lists) {
      const add = (file, list) => {
        for (const [start, len] of list || []) ranges.push({ file, start, len });
      };
      // The 8-bit modes read PCX and low fonts where the others read TGA: tools/build-race-lists.mjs.
      const resolution = String(parseInt(this.vfs.parsedIni('raser.ini').get('PROGRAM', 'RESOLUTION'), 10));
      const soft = this.lists.soft && this.lists.soft[resolution];
      for (const [file, sets] of Object.entries(this.lists.files)) {
        const main = soft ? soft[file] : sets;
        add(file, main.common);
        add(file, main.etappe[etappe]);
        add(file, sets.car[car]);
        add(file, sets.pair[`${etappe}/${car}`]);
      }
      add('rcs.img', this.lists.music?.[this.raceMusic()]);
    } else {
      for (const [name, sf] of this.sparse) ranges.push({ file: name, start: 0, len: sf.size });
    }
    const todo = ranges.filter((r) => !this.sparse.get(r.file).has(r.start, r.start + r.len));
    total += todo.length;
    const queue = [...todo];
    const workers = Array.from({ length: 8 }, async () => {
      while (queue.length) {
        const r = queue.shift();
        const sf = this.sparse.get(r.file);
        sf.addSpan(r.start, await fetchRange(sf.url, r.start, r.len));
        tick();
      }
    });
    await Promise.all([...jobs, ...workers]);
    this.fetchLate();
    return { misses: 0 };
  }

  /** Sounds a race loads while running: fetched quietly so they are there when asked for. */
  async fetchLate() {
    if (!this.lists || this.lateStarted) return;
    this.lateStarted = true;
    for (const [file, list] of Object.entries(this.lists.late || {})) {
      const sf = this.sparse.get(file);
      // In pieces: a sound that arrived need not wait for the rest, or it costs a synchronous read.
      const queue = [];
      for (const [start, len] of list) {
        for (let p = start; p < start + len; p += LATE_PIECE) {
          const piece = Math.min(LATE_PIECE, start + len - p);
          if (!sf.has(p, p + piece)) queue.push([p, piece]);
        }
      }
      await Promise.all(Array.from({ length: 2 }, async () => {
        while (queue.length) {
          const [start, len] = queue.shift();
          try {
            sf.addSpan(start, await fetchRange(sf.url, start, len));
          } catch {
            return;
          }
        }
      }));
    }
  }
}
