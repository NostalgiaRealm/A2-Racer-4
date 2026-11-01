// Keeps the files the game and menu write (menu.ini, game.ini, raser.ini, SaveGame<n>.RCR,
// best times) in IndexedDB, so they survive a restart. Falls back to memory when storage
// is refused, as in private windows.
const DB = 'a2racer4';
const STORE = 'files';

export class Persist {
  constructor() {
    this.db = null;
  }

  open() {
    return new Promise((resolve) => {
      try {
        const r = indexedDB.open(DB, 1);
        r.onupgradeneeded = () => r.result.createObjectStore(STORE);
        r.onsuccess = () => {
          this.db = r.result;
          resolve();
        };
        r.onerror = () => resolve();
        r.onblocked = () => resolve();
      } catch {
        resolve();
      }
    });
  }

  save(path, data) {
    if (!this.db) return;
    try {
      this.db.transaction(STORE, 'readwrite').objectStore(STORE).put(new Uint8Array(data), path);
    } catch {
      // Storage full or denied: the session still works from memory.
    }
  }

  restoreInto(vfs) {
    if (!this.db) return Promise.resolve();
    return new Promise((resolve) => {
      try {
        const t = this.db.transaction(STORE, 'readonly').objectStore(STORE).openCursor();
        t.onsuccess = () => {
          const c = t.result;
          if (!c) {
            resolve();
            return;
          }
          vfs.add(String(c.key), c.value);
          c.continue();
        };
        t.onerror = () => resolve();
      } catch {
        resolve();
      }
    });
  }
}
