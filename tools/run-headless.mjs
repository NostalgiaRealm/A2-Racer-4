#!/usr/bin/env node
// Runs the recompiled race without a browser, against a directory of game files.
// For quick boot checks, listing the files a race reads, and driving tests.
//   node tools/run-headless.mjs [--game public/game] [--ticks 300] [--dt 0.0333] [--gas 1]
import { readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { Vfs } from '../source/host/vfs.js';
import { Race } from '../source/host/race.js';
import { pinRace } from '../source/host/race-setup.js';

const ROOT = join(dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const gameDir = opt('game', join(ROOT, 'public/game'));
const installDir = opt('install', join(ROOT, 'public/assets/game'));
const ticks = Number(opt('ticks', 300));
const dt = Number(opt('dt', 1 / 60));

const meta = JSON.parse(readFileSync(join(gameDir, 'spel.meta.json'), 'utf8'));
const vfs = new Vfs();
for (const name of readdirSync(installDir)) {
  const p = join(installDir, name);
  if (statSync(p).isFile()) vfs.addLazy(name, statSync(p).size, () => readFileSync(p));
}
pinRace(vfs, { etappe: Number(opt('etappe', 0)), car: Number(opt('car', 0)), resolution: opt('resolution', null) });
const texSizes = {};
const stateCount = {};
const primCount = {};
const stats = { draws: 0, indexed: 0, verts: 0, tris: 0, states: 0, flips: 0, textures: 0, clears: 0, blits: 0 };
const render = {
  freeTexture() {}, fillScreen() {}, blitToScreen() { stats.blits++; }, loadTexture(d, src) { stats.textures++; const k = d.width + 'x' + d.height + (src.colorKey >= 0 ? 'k' : ''); texSizes[k] = (texSizes[k] || 0) + 1; },
  setBackground() {}, clear() { stats.clears++; }, setViewport(v) { console.log('viewport', JSON.stringify(v)); },
  beginScene() {}, endScene() {}, setRenderState(st, v) { stats.states++; const k = st + ':' + (st === 1 ? 'tex' : v); stateCount[k] = (stateCount[k] || 0) + 1; }, setLightState() {}, setTransform() {},
  drawPrimitive(p, t, v, n) { stats.draws++; stats.verts += n; const k = 'dp' + p + '/' + t; primCount[k] = (primCount[k] || 0) + 1; },
  drawIndexed(p, t, v, nv, i, ni) { stats.indexed++; stats.verts += nv; stats.tris += ni / 3; const k = 'dip' + p + '/' + t; primCount[k] = (primCount[k] || 0) + 1; },
};
const keys = new Set();
const input = {
  mouseX: 0, mouseY: 0,
  keyDown: (vk) => keys.has(vk),
  fillDeviceState(kind, p, size) {
    race.m.u8.fill(0, p, p + size);
    if (kind === 'keyboard') for (const k of dikDown) race.m.u8[p + k] = 0x80;
  },
};
const dikDown = new Set();
const filesRead = new Set();
vfs.onRead = (p) => filesRead.add(p);
const host = {
  vfs, render, input, audio: null, screen: { width: 640, height: 480 }, tickSeconds: dt, clockStart: 1,
  onFlip() { stats.flips++; },
  onMessageBox: (c, t) => console.log('MessageBox:', c, '|', t),
  onStdout: (t) => process.stdout.write('[stdout] ' + t),
};
const race = new Race(meta, host);
await race.instantiate(new WebAssembly.Module(readFileSync(join(gameDir, 'spel.wasm'))));
const m = race.m;
globalThis.m = m;
m.onTrace = (addr, esp, eax, ecx, edx) => {
  const a = [1, 2, 3, 4].map((k) => m.u32[(esp + k * 4) >> 2].toString(16));
  console.log('trace', addr.toString(16), 'ecx', ecx.toString(16), 'edx', edx.toString(16), 'args', a.join(' '));
};
try {
  let t0 = performance.now();
  race.boot();
  if (process.argv.includes('--hud')) {
    const { HudLayout } = await import('../source/host/hud-layout.js');
    const l = new HudLayout(m);
    l.scan();
    console.log('HUD', JSON.stringify(l.names), JSON.stringify(Object.fromEntries(Object.entries(l.groups).map(([k, v]) => [k, v.length]))));
  }
  console.log('boot ms', (performance.now() - t0).toFixed(0), 'heap', (host.heap.bytesInUse / 1048576).toFixed(1), 'MB', JSON.stringify(stats));
  writeFileSync(join(gameDir, 'files-read.txt'), [...filesRead].join('\n'));
  Object.keys(stats).forEach((k) => { stats[k] = 0; });
  t0 = performance.now();
  let n = 0;
  dikDown.add(0xC8);   // up arrow: keyboard device, scan code
  for (; n < ticks && race.tick(dt); n++) {
    if (n % 30 === 0) {
      console.log('tick', n, 'ms/tick', ((performance.now() - t0) / (n + 1)).toFixed(2), JSON.stringify(stats));
    }
  }
  console.log('ran', n, 'ticks, avg ms', ((performance.now() - t0) / n).toFixed(2), JSON.stringify(stats));
  console.log('textures', JSON.stringify(texSizes));
  console.log('states', JSON.stringify(stateCount));
  console.log('prims', JSON.stringify(primCount));
} catch (e) {
  console.log('stopped:', e.message, 'last indirect target', m.exports.g_a.value.toString(16));
  console.log(e.stack.split('\n').slice(0, 24).join('\n'));
}
