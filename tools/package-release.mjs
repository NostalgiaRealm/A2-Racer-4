#!/usr/bin/env node
// The non-desktop release assets, from the committed tree, into release/<version>/:
//   -web.zip                       dist/, the static site
//   -source.tar.gz                 the commit without original-game-decompiled/
//   -original-game-decompiled.tar.gz, .manifest.json, .sha256
//                                  the committed decompile plus the whole rcs.img
//   CHANGELOG-<version>.md, BUILD-INFO-<version>.json
//   --sums writes SHA256SUMS.txt over everything in the folder and does nothing else.
//   node tools/package-release.mjs [--ref HEAD] [--sums]
import { execFileSync, spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { createReadStream, existsSync, mkdirSync, readdirSync, readFileSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { join, relative } from 'node:path';
import { fileURLToPath } from 'node:url';

const ROOT = fileURLToPath(new URL('..', import.meta.url));
const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const ref = opt('ref', 'HEAD');
const pkg = JSON.parse(readFileSync(join(ROOT, 'package.json'), 'utf8'));
const version = pkg.version;
const prefix = `A2-Racer-4-${version}`;
const out = join(ROOT, 'release', version);
mkdirSync(out, { recursive: true });
const sh = (cmd, args, options = {}) => execFileSync(cmd, args, { cwd: ROOT, encoding: 'utf8', maxBuffer: 1 << 30, ...options });
const must = (cmd, args, options = {}) => {
  const r = spawnSync(cmd, args, { cwd: ROOT, stdio: 'inherit', ...options });
  if (r.status !== 0) throw new Error(`${cmd} ${args.slice(0, 3).join(' ')} failed`);
};
async function sha(file) {
  const h = createHash('sha256');
  for await (const c of createReadStream(file)) h.update(c);
  return h.digest('hex');
}

if (process.argv.includes('--sums')) {
  const skip = (n) => n === 'SHA256SUMS.txt' || n.endsWith('.blockmap') || n.endsWith('.yml') || n === 'builder-debug.yml';
  const names = readdirSync(out).filter((n) => statSync(join(out, n)).isFile() && !skip(n)).sort();
  const lines = [];
  for (const n of names) lines.push(`${await sha(join(out, n))}  ${n}`);
  writeFileSync(join(out, 'SHA256SUMS.txt'), lines.join('\n') + '\n');
  console.log(lines.join('\n'));
  process.exit(0);
}

const commit = sh('git', ['rev-parse', ref]).trim();
const stamp = sh('git', ['log', '-1', '--format=%cI', ref]).trim();
if (sh('git', ['status', '--porcelain']).trim() && ref === 'HEAD') throw new Error('Commit the release first: the working tree is not clean');

// Static site. Files in a fixed order with the commit's time, so a rebuild gives the same zip.
{
  const file = join(out, `${prefix}-web.zip`);
  rmSync(file, { force: true });
  must('python3', ['-I', '-c', `
import os, sys, zipfile, datetime
root, target, stamp = sys.argv[1:4]
when = datetime.datetime.fromisoformat(stamp).timetuple()[:6]
with zipfile.ZipFile(target, 'w', zipfile.ZIP_DEFLATED, compresslevel=6) as z:
    names = sorted(os.path.relpath(os.path.join(d, n), root) for d, _, ns in os.walk(root) for n in ns)
    for n in names:
        info = zipfile.ZipInfo('${prefix}-web/' + n.replace(os.sep, '/'), when)
        info.compress_type = zipfile.ZIP_DEFLATED
        info.external_attr = 0o644 << 16
        with open(os.path.join(root, n), 'rb') as f:
            z.writestr(info, f.read())
`, join(ROOT, 'dist'), file, stamp]);
}

// The port's source: public/ and large-files/ are in it, so it builds and runs by itself.
{
  const file = join(out, `${prefix}-source.tar.gz`);
  const tar = join(out, `${prefix}-source.tar`);
  must('git', ['archive', '--format=tar', `--prefix=${prefix}/`, '-o', tar, ref, '--', '.', ':(exclude)original-game-decompiled']);
  rmSync(file, { force: true });
  must('pigz', ['-9', '-n', tar]);
  if (!existsSync(file)) throw new Error('source archive missing');
}

// The decompile: everything committed under original-game-decompiled/, and rcs.img whole.
{
  const name = `${prefix}-original-game-decompiled.tar.gz`;
  const file = join(out, name);
  const tracked = sh('git', ['ls-tree', '-r', '--name-only', '-z', ref, '--', 'original-game-decompiled']).split('\0').filter(Boolean);
  const list = [...tracked, 'original-game-decompiled/original/install/rcs.img'].sort();
  const listFile = join(out, '.decompile-files');
  writeFileSync(listFile, list.join('\0') + '\0');
  const tar = file.replace(/\.gz$/, '');
  must('tar', ['--create', '--file', tar, '--null', '--files-from', listFile, '--no-recursion', '--sort=name', '--format=gnu',
    `--mtime=${stamp}`, '--owner=0', '--group=0', '--numeric-owner', '--mode=u+rw,go+r,a+X', '--directory', ROOT]);
  rmSync(listFile);
  rmSync(file, { force: true });
  must('pigz', ['-9', '-n', tar]);
  const files = [];
  let bytes = 0;
  for (const n of list) {
    const size = statSync(join(ROOT, n)).size;
    bytes += size;
    files.push({ path: n, size, sha256: await sha(join(ROOT, n)) });
  }
  const digest = await sha(file);
  writeFileSync(`${file}.sha256`, `${digest}  ${name}\n`);
  writeFileSync(join(out, `${prefix}-original-game-decompiled.manifest.json`), JSON.stringify({
    version, commit, archive: name, sha256: digest, archiveBytes: statSync(file).size, fileCount: files.length, contentBytes: bytes,
    leftOut: 'docs/releasing.md: disc image, third-party redistributables and installers, Wine prefix files, installer logs',
    files,
  }) + '\n');
}

// Changelog section and the build's identity.
{
  const changelog = readFileSync(join(ROOT, 'CHANGELOG.md'), 'utf8');
  const start = changelog.indexOf(`## ${version}`);
  if (start < 0) throw new Error(`CHANGELOG.md has no section for ${version}`);
  const next = changelog.indexOf('\n## ', start + 3);
  writeFileSync(join(out, `CHANGELOG-${version}.md`), changelog.slice(start, next < 0 ? undefined : next).trim() + '\n');
  const tree = createHash('sha256');
  const walk = (dir) => readdirSync(dir, { withFileTypes: true }).sort((a, b) => (a.name < b.name ? -1 : 1))
    .flatMap((e) => (e.isDirectory() ? walk(join(dir, e.name)) : [join(dir, e.name)]));
  const dist = walk(join(ROOT, 'dist'));
  for (const f of dist) tree.update(`${relative(join(ROOT, 'dist'), f)}\0${await sha(f)}\n`);
  const meta = JSON.parse(readFileSync(join(ROOT, 'public/game/spel.meta.json'), 'utf8'));
  writeFileSync(join(out, `BUILD-INFO-${version}.json`), JSON.stringify({
    product: 'A2 Racer 4 port', version, tag: `v${version}`, commit, commitDate: stamp,
    node: process.version, electron: pkg.devDependencies.electron, electronBuilder: pkg.devDependencies['electron-builder'],
    three: pkg.dependencies.three, esbuild: pkg.devDependencies.esbuild,
    distFiles: dist.length, distTreeSha256: tree.digest('hex'),
    spelWasmSha256: await sha(join(ROOT, 'public/game/spel.wasm')), spelDatSha256: meta.sha256 ?? meta.inputSha256 ?? null,
  }, null, 2) + '\n');
}
console.log(readdirSync(out).join('\n'));
