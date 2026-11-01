// Virtual file system for the game's files and INI handling. Paths are matched
// case-insensitively and any drive or directory prefix is reduced to the name
// relative to the game folder, which is what the original's files use.

export function normalizePath(path) {
  let p = path.replace(/\\/g, '/').toLowerCase();
  p = p.replace(/^[a-z]:\//, '').replace(/^\.\//, '').replace(/^\/+/, '');
  p = p.replace(/\/\.\//g, '/');
  if (p.startsWith('a2racer4/')) p = p.slice(9);
  return p;
}

export class Vfs {
  constructor() {
    this.files = new Map();     // normalized path -> { name, data: Uint8Array|null, size, loader }
    this.ini = new Map();       // normalized path -> parsed INI
    this.onWrite = null;        // (path, data) => void: persistence hook
    this.onRead = null;         // (path) => void: lets a build tool list what a race needs
    this.onMissing = null;      // (path) => Uint8Array|null: last-resort synchronous fetch
  }

  add(name, data) {
    const p = normalizePath(name);
    this.files.set(p, { name, data, size: data.length });
    this.ini.delete(p);
  }

  /** A file whose content arrives later; size must be known now. */
  addLazy(name, size, loader) {
    const p = normalizePath(name);
    if (!this.files.has(p)) this.files.set(p, { name, data: null, size, loader });
  }

  exists(path) {
    return this.files.has(normalizePath(path));
  }

  stat(path) {
    return this.files.get(normalizePath(path)) || null;
  }

  read(path) {
    const p = normalizePath(path);
    const f = this.files.get(p);
    if (this.onRead) this.onRead(p);
    if (!f) {
      if (this.onMissing) {
        const d = this.onMissing(p);
        if (d) {
          this.add(path, d);
          return d;
        }
      }
      return null;
    }
    if (!f.data && f.loader) f.data = f.loader();
    return f.data;
  }

  write(path, data) {
    this.add(path, data);
    if (this.onWrite) this.onWrite(normalizePath(path), data);
  }

  remove(path) {
    const p = normalizePath(path);
    this.files.delete(p);
    this.ini.delete(p);
  }

  list() {
    return [...this.files.keys()];
  }

  // --- INI files, with GetPrivateProfile semantics ------------------------------
  parsedIni(path) {
    const p = normalizePath(path);
    let parsed = this.ini.get(p);
    if (parsed) return parsed;
    const data = this.read(path);
    parsed = new IniFile(data ? latin1(data) : '');
    this.ini.set(p, parsed);
    return parsed;
  }

  iniGet(path, section, key) {
    return this.parsedIni(path).get(section, key);
  }

  iniSet(path, section, key, value) {
    const ini = this.parsedIni(path);
    ini.set(section, key, value);
    const p = normalizePath(path);
    const data = encodeLatin1(ini.serialize());
    const f = this.files.get(p);
    if (f) {
      f.data = data;
      f.size = data.length;
    } else {
      this.files.set(p, { name: path, data, size: data.length });
    }
    if (this.onWrite) this.onWrite(p, data);
  }
}

export function latin1(bytes) {
  let s = '';
  const chunk = 8192;
  for (let k = 0; k < bytes.length; k += chunk) {
    s += String.fromCharCode.apply(null, bytes.subarray(k, k + chunk));
  }
  return s;
}

export function encodeLatin1(s) {
  const out = new Uint8Array(s.length);
  for (let k = 0; k < s.length; k++) out[k] = s.charCodeAt(k) & 0xFF;
  return out;
}

/** An INI file that keeps its comments and order when values change. */
export class IniFile {
  constructor(text) {
    this.lines = text.split(/\r?\n/);
    this.index = new Map();
    let section = null;
    this.lines.forEach((raw, n) => {
      const line = raw.trim();
      if (!line) return;
      if (line[0] === '[') {
        const e = line.indexOf(']');
        if (e > 0) {
          section = line.slice(1, e).trim().toLowerCase();
          if (!this.index.has(section)) this.index.set(section, { line: n, name: line.slice(1, e).trim(), keys: new Map() });
        }
        return;
      }
      if (line[0] === ';' || section === null) return;
      const eq = line.indexOf('=');
      if (eq < 0) return;
      const key = line.slice(0, eq).trim();
      const s = this.index.get(section);
      const lk = key.toLowerCase();
      if (!s.keys.has(lk)) s.keys.set(lk, { line: n, name: key, value: line.slice(eq + 1).trim() });
    });
  }

  get(section, key) {
    const s = this.index.get(section.toLowerCase());
    if (!s) return null;
    const k = s.keys.get(key.toLowerCase());
    return k ? k.value : null;
  }

  sections() {
    return [...this.index.values()].map((s) => s.name);
  }

  keys(section) {
    const s = this.index.get(section.toLowerCase());
    return s ? [...s.keys.values()].map((k) => k.name) : [];
  }

  set(section, key, value) {
    const ls = section.toLowerCase();
    let s = this.index.get(ls);
    if (!s) {
      if (value === null) return;
      if (this.lines.length && this.lines[this.lines.length - 1] === '') this.lines.pop();
      this.lines.push('[' + section + ']');
      s = { line: this.lines.length - 1, name: section, keys: new Map() };
      this.index.set(ls, s);
      this.lines.push('');
    }
    if (key === null) return;
    const lk = key.toLowerCase();
    const k = s.keys.get(lk);
    if (value === null) {
      if (k) {
        this.lines[k.line] = ';' + this.lines[k.line];
        s.keys.delete(lk);
      }
      return;
    }
    if (k) {
      k.value = value;
      this.lines[k.line] = k.name + '=' + value;
      return;
    }
    // New key: right after the section's last key line.
    let at = s.line;
    for (const v of s.keys.values()) at = Math.max(at, v.line);
    at += 1;
    this.lines.splice(at, 0, key + '=' + value);
    for (const sec of this.index.values()) {
      if (sec.line >= at && sec !== s) sec.line += 1;
      for (const v of sec.keys.values()) if (v.line >= at) v.line += 1;
    }
    s.keys.set(lk, { line: at, name: key, value });
  }

  serialize() {
    return this.lines.join('\r\n');
  }
}
