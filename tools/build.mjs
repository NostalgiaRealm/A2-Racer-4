#!/usr/bin/env node
// Builds the static site in dist/: minified bundle plus everything under public/.
import { execFileSync } from 'node:child_process';
import { cpSync, rmSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = fileURLToPath(new URL('..', import.meta.url));
execFileSync(process.execPath, [join(ROOT, 'tools/bundle.mjs'), '--minify'], { stdio: 'inherit' });
const dist = join(ROOT, 'dist');
rmSync(dist, { recursive: true, force: true });
mkdirSync(dist, { recursive: true });
cpSync(join(ROOT, 'public'), dist, {
  recursive: true,
  filter: (p) => !p.endsWith('.map') && !p.endsWith('files-read.txt'),
});
console.log('dist/ ready. Serve it with: node tools/serve.mjs --dist');
