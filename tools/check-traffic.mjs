#!/usr/bin/env node
// Traffic nose rise on the selected level, measured the way the owner's patch notes measure it
// under Wine (A2-Racer-4-Fixes, README_technical_spel.dat.md, part 9): the y of a traffic
// vehicle's forward vector in the first 3 s after it starts from standstill, as mean and highest
// over the starts seen. The bot drives through the level so that traffic is active around it.
//   node tools/check-traffic.mjs [--hz 60] [--seconds 110] [--whole-push]
// --whole-push turns off the traffic share, which gives the unpatched pushes of the original.
import { readFileSync, readdirSync, statSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { Vfs } from '../source/host/vfs.js';
import { Race } from '../source/host/race.js';
import { pinRace } from '../source/host/race-setup.js';
import { GameInput } from '../source/input/keyboard.js';
import { Bot } from '../source/dev/bot.js';

const ROOT = join(dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const installDir = join(ROOT, 'public/assets/game');
const gameDir = join(ROOT, 'public/game');
const meta = JSON.parse(readFileSync(join(gameDir, 'spel.meta.json'), 'utf8'));
const hz = Number(opt('hz', 60));
const seconds = Number(opt('seconds', 110));
const dt = 1 / hz;
const vfs = new Vfs();
for (const name of readdirSync(installDir)) {
  const p = join(installDir, name);
  if (statSync(p).isFile()) vfs.addLazy(name, statSync(p).size, () => readFileSync(p));
}
pinRace(vfs);
const host = {
  vfs, render: new Proxy({}, { get: () => () => {} }), audio: null, screen: { width: 640, height: 480 }, tickSeconds: dt, clockStart: 1,
  fixedDate: 971434016000, onFlip() {}, onMessageBox: (c, t) => console.log('message', c, t), onStdout() {},
};
const race = new Race(meta, host);
await race.instantiate(new WebAssembly.Module(readFileSync(join(gameDir, 'spel.wasm'))));
const { m } = race;
if (process.argv.includes('--whole-push')) m.f32[0x003f1000 >> 2] = 1;
const input = new GameInput(m);
host.input = input;
race.boot();
const bot = new Bot(race, input);
const v = m.view;
const SLOTS = 0x5d1ba8;
const f = (a) => v.getFloat32(a, true);
const tracks = new Map();
const peaks = [];
let highestSeen = 0;
for (let k = 0; k < seconds * hz; k++) {
  bot.tick();
  if (!race.tick(dt)) break;
  input.endTick();
  for (let s = 0; s < 50; s++) {
    const objIndex = v.getInt32(SLOTS + s * 0x38, true);
    if (objIndex <= 0) continue;
    const car = m.u32[0x715e50 >> 2] + objIndex * 0xF0;
    const vz = f(car + 0xC4);
    const fy = Math.abs(f(m.u32[0x73b0d0 >> 2] + v.getInt32(car + 0x24, true) * 0xA9 + 0x34));
    if (!Number.isFinite(fy)) continue;
    let t = tracks.get(s);
    if (!t) {
      t = { lastV: vz, window: 0, peak: 0 };
      tracks.set(s, t);
    }
    if (t.window === 0 && t.lastV < 0.5 && vz >= 0.5) {
      t.window = 3 * hz;
      t.peak = 0;
    }
    if (t.window > 0) {
      t.peak = Math.max(t.peak, fy);
      if (--t.window === 0) peaks.push(t.peak);
    }
    highestSeen = Math.max(highestSeen, fy);
    t.lastV = vz;
  }
}
const mean = peaks.reduce((a, b) => a + b, 0) / Math.max(1, peaks.length);
console.log(JSON.stringify({
  hz, seconds, wholePush: process.argv.includes('--whole-push'), share: m.f32[0x003f1000 >> 2], starts: peaks.length,
  peakForwardY: { mean: +mean.toFixed(3), highest: +Math.max(0, ...peaks).toFixed(3) }, highestAnyTime: +highestSeen.toFixed(3),
}));
