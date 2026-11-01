#!/usr/bin/env node
// The same scripted scenario on the browser port, headless: real source files, fixed 60 Hz tick.
// Anchors work as in refwine.py: go+X is X seconds after the tick where the overlay state turns 11.
//   node tools/reference-wine/port-launch.mjs --name launch-go --gas-at go+0 --gas-for 12 --out dir
import { readFileSync, readdirSync, statSync, writeFileSync, mkdirSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { Vfs } from '../../source/host/vfs.js';
import { Race } from '../../source/host/race.js';
import { pinRace } from '../../source/host/race-setup.js';
import { GameInput } from '../../source/input/keyboard.js';

const ROOT = join(dirname(fileURLToPath(import.meta.url)), '..', '..');
const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const flag = (name) => process.argv.includes('--' + name);
const name = opt('name', 'port');
const outDir = opt('out', join(ROOT, 'evidence/reference-wine/raw'));
const tickHz = Number(opt('tick', 60));
const dt = 1 / tickHz;
const installDir = join(ROOT, 'public/assets/game');
const gameDir = join(ROOT, 'public/game');
const meta = JSON.parse(readFileSync(join(gameDir, 'spel.meta.json'), 'utf8'));
const vfs = new Vfs();
for (const file of readdirSync(installDir)) {
  const p = join(installDir, file);
  if (statSync(p).isFile()) vfs.addLazy(file, statSync(p).size, () => readFileSync(p));
}
// Etappe 0, car 0, opponents on, as the disc's game.ini has them in the Wine run.
pinRace(vfs);
const nullRender = new Proxy({}, { get: () => () => {} });
const host = {
  vfs, render: nullRender, audio: null, screen: { width: 640, height: 480 }, tickSeconds: dt, clockStart: Number(opt('clock-start', 1)),
  fixedDate: 971434016000 + Number(opt('seed', 0)) * 1000, onFlip() {}, onMessageBox: (c, t) => console.log('message', c, t), onStdout() {},
};
const race = new Race(meta, host);
await race.instantiate(new WebAssembly.Module(readFileSync(join(gameDir, 'spel.wasm'))));
const m = race.m;
if (flag('whole-push')) m.f32[0x003f1000 >> 2] = 1;
const input = new GameInput(m);
host.input = input;
race.boot();
const v = m.view;

const COLUMNS = ['t', 'tick', 'gtime', 'dt', 'raw', 'ema', 'overlay', 'phase', 'started', 'state',
  'steer', 'brake', 'gas', 'hud', 'fwd', 'side', 'vert', 'gear', 'rpm',
  'om0', 'om1', 'om2', 'om3', 'lim0', 'lim2', 'tq0', 'tq2',
  'x', 'y', 'z', 'fwd_y', 'mstate', 'core_y', 'core_speed', 'core_rot', 'air', 'contact', 'ms0', 'ms1', 'ms2', 'ms3'];
const f32 = (a) => v.getFloat32(a, true);
const i32 = (a) => v.getInt32(a, true);
const u32 = (a) => v.getUint32(a, true);
const readRow = (t) => {
  const r = {
    t, tick: u32(0x6fb8dc), gtime: f32(0x7128b8), dt: f32(0x7128bc), ema: f32(0x715b20), overlay: i32(0x71277c),
    phase: i32(0x6c3b9c), started: i32(0x6fba9c), state: i32(0x6fb8a0), steer: f32(0x6fbabc), brake: f32(0x6fbac0), gas: f32(0x6fbac4),
    hud: i32(0x6fba64), air: f32(0x6fbaec),
  };
  const ringP = u32(0x712868);
  r.raw = ringP ? f32(ringP + 4 * ((i32(0x7128c0) - 1) & 3)) : null;
  const index = i32(0x6fba58);
  const car = u32(0x715e50) + index * 0xF0;
  r.fwd = f32(car + 0xC4); r.side = f32(car + 0xBC); r.vert = f32(car + 0xC0);
  const obj = u32(0x73b0d0) + i32(car + 0x24) * 0xA9;
  r.fwd_y = f32(obj + 0x34); r.x = f32(obj + 0x40); r.y = f32(obj + 0x44); r.z = f32(obj + 0x48);
  const phys = u32(car + 0x10);
  if (phys) {
    r.gear = i32(phys + 0xE4); r.rpm = f32(phys + 0xBC);
    const ivp = u32(phys + 0x30);
    const core = u32(u32(phys + 8) + 0xA4);
    r.mstate = m.u8[core + 0x5C];
    const hyp = (a) => Math.hypot(f32(a), f32(a + 4), f32(a + 8));
    r.core_speed = hyp(core + 0xA4); r.core_rot = hyp(core + 0x94);
    r.core_y = v.getFloat64(core + 0x190, true);
    let contact = 0;
    for (let i = 0; i < 4; i++) {
      const act = u32(ivp + 0x44 + 4 * i);
      r['om' + i] = f32(act + 0x94);
      if (i === 0 || i === 2) { r['lim' + i] = f32(act + 0x70); r['tq' + i] = f32(act + 0x74); }
      const wheel = u32(phys + 0x34 + 4 * i);
      contact |= (m.u8[wheel + 0x25] & 1) << i;
      r['ms' + i] = m.u8[u32(u32(wheel + 8) + 0xA4) + 0x5C];
    }
    r.contact = contact;
  }
  return COLUMNS.map((c) => (r[c] === undefined ? null : Number.isInteger(r[c]) ? r[c] : Number(r[c].toPrecision(8))));
};

const parseAt = (spec) => {
  if (!spec || spec === 'none') return null;
  const hit = /^([a-z0-9]+)([+-][0-9.]+)?$/.exec(spec);
  return [hit[1], Number(hit[2] || 0)];
};
const DIK = { UP: 0xC8, DOWN: 0xD0 };
const held = new Set();
const apply = () => {
  input.dik.fill(0);
  for (const k of held) input.dik[k] = 0x80;
};
const gasAt = parseAt(opt('gas-at', 'none'));
const gasFor = Number(opt('gas-for', 12));
let downAt = parseAt(opt('down-at', 'none'));
const downFor = Number(opt('down-for', 6));
const downAfterGas = opt('down-after-gas', null);
const after = Number(opt('after', 1));
const seconds = Number(opt('seconds', 0));
const racersOn = flag('racers');
const trafficOn = flag('traffic');
const out = { name, port: true, tickHz, argv: process.argv.slice(2), columns: COLUMNS, events: [], overlay: [], rows: [] };
const anchors = {};
let gasOn = null; let gasOff = null; let downOn = null; let downOff = null; let endAt = null;
let lastOverlay = null; let racers = null; let lastRacers = -1;
const due = (spec, now) => spec && anchors[spec[0]] !== undefined && now >= anchors[spec[0]] + spec[1] - 1e-9;
const carSnapshot = (i) => {
  const car = u32(0x715e50) + i * 0xF0;
  const obj = u32(0x73b0d0) + i32(car + 0x24) * 0xA9;
  return [f32(car + 0xC4), f32(obj + 0x40), f32(obj + 0x44), f32(obj + 0x48), f32(obj + 0x34)].map((x) => +x.toFixed(3));
};
const maxTicks = 200 * tickHz;
for (let k = 1; k <= maxTicks; k++) {
  if (!race.tick(dt)) { out.ended = k; break; }
  input.endTick();
  const now = k * dt;
  const row = readRow(now);
  out.rows.push(row);
  const ov = row[COLUMNS.indexOf('overlay')];
  if (ov !== lastOverlay) {
    out.overlay.push([now, k, ov]);
    lastOverlay = ov;
    if (anchors['ov' + ov] === undefined) anchors['ov' + ov] = now;
    if (ov === 11 && anchors.go === undefined) anchors.go = now;
  }
  if (row[COLUMNS.indexOf('started')] === 1 && anchors.start === undefined) anchors.start = now;
  if (gasAt && gasOn === null && due(gasAt, now)) {
    held.add(DIK.UP); apply(); gasOn = now; gasOff = now + gasFor;
    out.events.push(['gas_on', now, k]);
  }
  if (gasOff !== null && now >= gasOff - 1e-9 && held.has(DIK.UP)) {
    held.delete(DIK.UP); apply();
    out.events.push(['gas_off', now, k]);
    if (downAfterGas !== null) { anchors.abs = now + Number(downAfterGas); downAt = ['abs', 0]; }
  }
  if (downAt && downOn === null && due(downAt, now)) {
    held.add(DIK.DOWN); apply(); downOn = now; downOff = now + downFor;
    out.events.push(['down_on', now, k]);
  }
  if (downOff !== null && now >= downOff - 1e-9 && held.has(DIK.DOWN)) {
    held.delete(DIK.DOWN); apply();
    out.events.push(['down_off', now, k]);
  }
  const keysDone = (!gasAt || (gasOff !== null && !held.has(DIK.UP))) && (!downAt || (downOff !== null && !held.has(DIK.DOWN)));
  if (endAt === null && keysDone && (gasAt || downAt)) endAt = now + after;
  if (endAt === null && seconds && anchors.go !== undefined && now >= anchors.go + seconds) endAt = now;
  if (racersOn && k > 5 && now - lastRacers >= 0.1 - 1e-9) {
    lastRacers = now;
    if (!racers) {
      racers = [];
      for (let i = 0; i < 1500; i++) {
        const car = u32(0x715e50) + i * 0xF0;
        if (car + 0xF0 > v.byteLength) break;
        const phys = u32(car + 0x10);
        if (!phys || phys + 0x34 > v.byteLength || i32(car + 0x18) !== 1) continue;
        const ivp = u32(phys + 0x30);
        if (ivp && ivp + 4 < v.byteLength && u32(ivp) === 0x578568) racers.push(i);
      }
      out.racerIndices = racers;
      out.racers = [];
    }
    out.racers.push([+now.toFixed(3), ...racers.map(carSnapshot)]);
    if (trafficOn) {
      const list = [+now.toFixed(3)];
      for (let s = 0; s < 50; s++) {
        const i = i32(0x5d1ba8 + s * 0x38);
        if (i > 0) list.push([s, ...carSnapshot(i)]);
      }
      (out.traffic ||= []).push(list);
    }
  }
  if (endAt !== null && now >= endAt - 1e-9) break;
}
out.anchors = anchors;
mkdirSync(outDir, { recursive: true });
writeFileSync(join(outDir, name + '.json'), JSON.stringify(out));
console.log(name, 'ticks', out.rows.length, 'events', JSON.stringify(out.events));
