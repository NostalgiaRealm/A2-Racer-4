#!/usr/bin/env node
// Bundles source/ into public/src/ and copies the page shell.
import { build } from 'esbuild';
import { cpSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = fileURLToPath(new URL('..', import.meta.url));
const out = join(ROOT, 'public');
mkdirSync(join(out, 'src'), { recursive: true });
await build({
  entryPoints: [join(ROOT, 'source/main.js')],
  bundle: true,
  format: 'esm',
  target: 'es2022',
  sourcemap: true,
  minify: process.argv.includes('--minify'),
  outfile: join(out, 'src/main.js'),
  legalComments: 'none',
  logLevel: 'warning',
});
cpSync(join(ROOT, 'source/index.html'), join(out, 'index.html'));
cpSync(join(ROOT, 'source/style.css'), join(out, 'src/style.css'));
console.log('bundled source/ to public/src/');
