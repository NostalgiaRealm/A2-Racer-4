#!/usr/bin/env node
// Lists which parts of rcs.img and rc.img each race reads, by running every track with every
// car headless for a few seconds. Output: public/assets/game/race-files.json, used by
// source/host/game-files.js so a race downloads only what it needs. Sounds loaded later in a
// race go in "late": the browser fetches them in the background. The music moves on every race,
// so each track has its own list in "music", keyed by the name in raser.ini [MUSIC].
//   node tools/build-race-lists.mjs
import { readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { IniFile, Vfs } from '../source/host/vfs.js';
import { Race } from '../source/host/race.js';
import { pinRace } from '../source/host/race-setup.js';

const ROOT = join(dirname(fileURLToPath(import.meta.url)), '..');
const gameDir = join(ROOT, 'public/game');
const installDir = join(ROOT, 'public/assets/game');
const meta = JSON.parse(readFileSync(join(gameDir, 'spel.meta.json'), 'utf8'));
const module_ = new WebAssembly.Module(readFileSync(join(gameDir, 'spel.wasm')));

function readIndexNamed(file) {
  const d = readFileSync(file);
  const n = d.readInt16LE(0);
  const out = [];
  for (let k = 0; k < n; k++) {
    const p = 2 + k * 24;
    let e = p;
    while (e < p + 20 && d[e]) e++;
    out.push({ name: d.toString('latin1', p, e), start: d.readUInt32LE(p + 20) });
  }
  return out;
}

function readIndexPlain(file, size) {
  const d = readFileSync(file);
  const n = d.readUInt16LE(0);
  const out = [];
  for (let k = 0; k < n; k++) out.push({ name: String(k), start: d.readUInt32LE(2 + k * 4) });
  void size;
  return out;
}

const SIZES = {
  'rcs.img': statSync(join(installDir, 'rcs.img')).size,
  'rc.img': statSync(join(installDir, 'rc.img')).size,
};
const INDEX = {
  'rcs.img': readIndexNamed(join(installDir, 'rcs.ind')),
  'rc.img': readIndexPlain(join(installDir, 'rc.ind')),
};
for (const [f, list] of Object.entries(INDEX)) {
  list.sort((a, b) => a.start - b.start);
  list.forEach((m, k) => { m.end = k + 1 < list.length ? list[k + 1].start : SIZES[f]; m.index = k; });
  // rc.img opens with its image count, read at every boot: FUN_004cc580.
  list[0].start = 0;
}

// Type name to WAV member, for the tracks of raser.ini [MUSIC]: FUN_0044ad40, section 6 of audio.md.
const iniAt = (name) => new IniFile(readFileSync(join(installDir, name), 'latin1'));
const raser = iniAt('raser.ini');
const sound = iniAt('sound.ini');
const wavOf = new Map(sound.keys('SndTypes').map((k) => sound.get('SndTypes', k).split(',').slice(0, 2)));
const MUSIC = new Map();
for (let k = 0; k < Number(raser.get('MUSIC', 'COUNT')); k++) {
  const type = raser.get('MUSIC', String(k));
  const wav = wavOf.get(type).toLowerCase();
  MUSIC.set(type, INDEX['rcs.img'].find((m) => m.name.toLowerCase() === wav));
}
const isMusic = new Set([...MUSIC.values()].map((m) => m.index));

function memberAt(list, pos) {
  let lo = 0;
  let hi = list.length - 1;
  while (lo < hi) {
    const mid = (lo + hi + 1) >> 1;
    if (list[mid].start <= pos) lo = mid;
    else hi = mid - 1;
  }
  return list[lo];
}

async function run(etappe, car, opponents, resolution = null) {
  const vfs = new Vfs();
  for (const name of readdirSync(installDir)) {
    const p = join(installDir, name);
    if (statSync(p).isFile()) vfs.addLazy(name, statSync(p).size, () => readFileSync(p));
  }
  const touched = { 'rcs.img': new Set(), 'rc.img': new Set() };
  for (const f of Object.keys(touched)) {
    const data = readFileSync(join(installDir, f));
    vfs.files.set(f, {
      name: f, data: null, size: data.length,
      rangeRead(pos, n, u8, at) {
        u8.set(data.subarray(pos, pos + n), at);
        // Only the member at the start of the read: the C runtime's buffer runs past its end.
        touched[f].add(memberAt(INDEX[f], pos).index);
      },
    });
  }
  pinRace(vfs, { etappe, car, resolution });
  vfs.iniSet('game.ini', 'OPTIONS', 'OPPONENTS', String(opponents));
  const nullRender = new Proxy({}, { get: () => () => {} });
  const input = { mouseX: 0, mouseY: 0, keyDown: () => false, fillDeviceState: (k, p, s) => race.m.u8.fill(0, p, p + s) };
  const host = {
    vfs, render: nullRender, input, audio: null, screen: { width: 640, height: 480 }, tickSeconds: 1 / 60, clockStart: 1,
    onFlip() {}, onMessageBox: (c, t) => console.log('  message', c, t), onStdout() {},
  };
  const race = new Race(meta, host);
  await race.instantiate(module_);
  try {
    race.boot();
    for (let k = 0; k < 120 && race.tick(1 / 60); k++);
  } catch (e) {
    console.log(`  etappe ${etappe} car ${car}: ${e.message}`);
    return null;
  }
  // Every run starts from the shipped LAST, so this is always one track: see out.music.
  for (const m of isMusic) touched['rcs.img'].delete(m);
  return touched;
}

// Etappe 9 and car 7 come with the track and car updates.
const ETAPPES = 10;
const CARS = 8;
const runs = new Map();
for (let e = 0; e < ETAPPES; e++) {
  for (let c = 0; c < CARS; c++) {
    const t = await run(e, c, 1);
    if (t) runs.set(`${e}/${c}`, t);
    process.stdout.write('.');
  }
  // Chase tracks run without opponents: the same track with car 0 is enough to cover it.
  const t = await run(e, 0, 0);
  if (t) {
    const a = runs.get(`${e}/0`);
    if (a) for (const f of Object.keys(t)) for (const m of t[f]) a[f].add(m);
  }
  process.stdout.write('\n');
}

const out = { files: {}, soft: {}, late: {}, music: {} };
const intersect = (sets) => {
  if (!sets.length) return new Set();
  const [first, ...rest] = sets;
  return new Set([...first].filter((x) => rest.every((s) => s.has(x))));
};
const toRanges = (file, members) => {
  const list = INDEX[file];
  const sorted = [...members].sort((a, b) => a - b);
  const ranges = [];
  for (const k of sorted) {
    const m = list[k];
    const last = ranges[ranges.length - 1];
    if (last && last[0] + last[1] === m.start) last[1] += m.end - m.start;
    else ranges.push([m.start, m.end - m.start]);
  }
  return ranges;
};
let summary = 0;
const carOwn = { 'rcs.img': {}, 'rc.img': {} };
for (const file of ['rcs.img', 'rc.img']) {
  const all = [...runs.values()].map((r) => r[file]);
  const common = intersect(all);
  const etappeSets = {};
  const carSets = {};
  for (let e = 0; e < ETAPPES; e++) {
    const sets = [...runs.entries()].filter(([k]) => k.startsWith(e + '/')).map(([, r]) => r[file]);
    etappeSets[e] = new Set([...intersect(sets)].filter((x) => !common.has(x)));
  }
  for (let c = 0; c < CARS; c++) {
    const sets = [...runs.entries()].filter(([k]) => k.endsWith('/' + c)).map(([, r]) => r[file]);
    carSets[c] = new Set([...intersect(sets)].filter((x) => !common.has(x)));
  }
  const pair = {};
  for (const [key, r] of runs) {
    const [e, c] = key.split('/');
    const rest = [...r[file]].filter((x) => !common.has(x) && !etappeSets[e].has(x) && !carSets[c].has(x));
    if (rest.length) pair[key] = toRanges(file, rest);
  }
  carOwn[file] = carSets;
  out.files[file] = {
    common: toRanges(file, common),
    etappe: Object.fromEntries(Object.entries(etappeSets).map(([k, v]) => [k, toRanges(file, v)])),
    car: Object.fromEntries(Object.entries(carSets).map(([k, v]) => [k, toRanges(file, v)])),
    pair,
  };
  const bytes = (rs) => rs.reduce((a, r) => a + r[1], 0);
  console.log(file, 'common', (bytes(out.files[file].common) / 1048576).toFixed(1), 'MB; etappe0', (bytes(out.files[file].etappe[0]) / 1048576).toFixed(1), 'MB; car0', (bytes(out.files[file].car[0]) / 1048576).toFixed(1), 'MB; pairs', Object.keys(pair).length);
  summary += bytes(out.files[file].common);
}
// RESOLUTION 0 and 1: the same meshes and sounds, other pictures and fonts. Cars add only sounds,
// and those are in out.files[file].car, so car 0 stands in for all and its own go out of common.
const bytes = (rs) => rs.reduce((a, r) => a + r[1], 0);
for (const resolution of [0, 1]) {
  const softRuns = [];
  for (let e = 0; e < ETAPPES; e++) {
    const t = await run(e, 0, 1, resolution);
    const u = await run(e, 0, 0, resolution);
    if (t && u) for (const f of Object.keys(t)) for (const m of u[f]) t[f].add(m);
    if (t) softRuns[e] = t;
    process.stdout.write('.');
  }
  process.stdout.write('\n');
  const lists = {};
  for (const file of ['rcs.img', 'rc.img']) {
    const carMembers = carOwn[file][0];
    const sets = softRuns.map((r) => new Set([...r[file]].filter((x) => !carMembers.has(x))));
    const common = intersect(sets);
    lists[file] = {
      common: toRanges(file, common),
      etappe: Object.fromEntries(sets.map((s, e) => [e, toRanges(file, [...s].filter((x) => !common.has(x)))])),
    };
    console.log('RESOLUTION', resolution, file, 'common', (bytes(lists[file].common) / 1048576).toFixed(1), 'MB; etappe0', (bytes(lists[file].etappe[0]) / 1048576).toFixed(1), 'MB');
  }
  out.soft[resolution] = lists;
}
for (const [type, m] of MUSIC) out.music[type] = toRanges('rcs.img', [m.index]);
// Sounds a race may load later: all other WAV members. Fetched in the background during a race.
const wavs = INDEX['rcs.img'].filter((m) => /\.wav$/i.test(m.name) && !isMusic.has(m.index)).map((m) => m.index);
out.late['rcs.img'] = toRanges('rcs.img', wavs);
const lateBytes = out.late['rcs.img'].reduce((a, r) => a + r[1], 0);
console.log('late audio', (lateBytes / 1048576).toFixed(1), 'MB');
writeFileSync(join(ROOT, 'public/assets/game/race-files.json'), JSON.stringify(out));
console.log('written; common total', (summary / 1048576).toFixed(1), 'MB');
