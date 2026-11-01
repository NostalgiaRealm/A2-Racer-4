#!/usr/bin/env node
// rcs.img is over GitHub's 100 MB limit per file, so git holds it in two pieces under large-files/.
//   node tools/large-files.mjs split    pieces from original/install/rcs.img, with checksums
//   node tools/large-files.mjs restore  the three working copies from the pieces (runs on npm ci)
import { createHash } from 'node:crypto';
import { copyFileSync, existsSync, linkSync, mkdirSync, readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = fileURLToPath(new URL('..', import.meta.url));
const STORE = join(ROOT, 'large-files');
const PIECE = 64 * 1024 * 1024;
const NAME = 'rcs.img';
const SUMS = join(STORE, 'SHA256SUMS');
const TARGETS = [
  'public/assets/game/rcs.img',
  'original-game-decompiled/original/install/rcs.img',
  'original-game-decompiled/original/disc/Data/rcs.IMG',
];
const sha = (bytes) => createHash('sha256').update(bytes).digest('hex');
const isDone = (file, size) => existsSync(file) && statSync(file).size === size;

if (process.argv[2] === 'split') {
  const whole = readFileSync(join(ROOT, TARGETS[1]));
  mkdirSync(STORE, { recursive: true });
  const lines = [`${sha(whole)}  ${NAME}`];
  for (let k = 0, at = 0; at < whole.length; k++, at += PIECE) {
    const name = `${NAME}.part-${String(k).padStart(2, '0')}`;
    const piece = whole.subarray(at, at + PIECE);
    writeFileSync(join(STORE, name), piece);
    lines.push(`${sha(piece)}  ${name}`);
  }
  writeFileSync(SUMS, lines.join('\n') + '\n');
  console.log(lines.join('\n'));
} else if (process.argv[2] === 'restore') {
  if (!existsSync(SUMS)) process.exit(0);
  const want = new Map(readFileSync(SUMS, 'utf8').trim().split('\n').map((l) => l.split('  ').reverse()));
  const parts = readdirSync(STORE).filter((n) => n.startsWith(NAME + '.part-')).sort();
  const size = parts.reduce((a, n) => a + statSync(join(STORE, n)).size, 0);
  const missing = TARGETS.filter((t) => !isDone(join(ROOT, t), size));
  // A release archive of the port alone has no decompile folder.
  const usable = missing.filter((t) => existsSync(join(ROOT, t.startsWith('public') ? 'public' : 'original-game-decompiled')));
  if (!usable.length) process.exit(0);
  const whole = Buffer.concat(parts.map((n) => readFileSync(join(STORE, n))));
  if (sha(whole) !== want.get(NAME)) throw new Error(`${NAME}: the pieces in large-files/ do not match SHA256SUMS`);
  let first = null;
  for (const t of usable) {
    const file = join(ROOT, t);
    mkdirSync(dirname(file), { recursive: true });
    if (!first) { writeFileSync(file, whole); first = file; continue; }
    try { linkSync(first, file); } catch { copyFileSync(first, file); }
  }
  console.log(`${NAME} restored: ${usable.join(', ')}`);
} else {
  console.error('Usage: node tools/large-files.mjs split|restore');
  process.exit(1);
}
