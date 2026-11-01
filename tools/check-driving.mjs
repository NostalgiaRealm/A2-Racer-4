#!/usr/bin/env node
// Brief driving check on the selected level (docs/validation.md): acceleration to the speed limit,
// a representative collision, reset, cornering, braking, reversing from a standstill, sustained
// reverse, steering while reversing, forward again. Runs headless on the recompiled game, with
// fixed time and random seeds, so two runs give the same numbers. Prints one line per sample and
// a JSON summary.
//   node tools/check-driving.mjs [--etappe 0] [--car 0] [--tick 60] [--opponents 0] [--json out.json]
import { readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { Vfs } from '../source/host/vfs.js';
import { Race } from '../source/host/race.js';
import { pinRace } from '../source/host/race-setup.js';
import { GameInput } from '../source/input/keyboard.js';

const ROOT = join(dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const installDir = join(ROOT, 'public/assets/game');
const gameDir = join(ROOT, 'public/game');
const meta = JSON.parse(readFileSync(join(gameDir, 'spel.meta.json'), 'utf8'));
const tickHz = Number(opt('tick', 60));
const dt = 1 / tickHz;
const vfs = new Vfs();
for (const name of readdirSync(installDir)) {
  const p = join(installDir, name);
  if (statSync(p).isFile()) vfs.addLazy(name, statSync(p).size, () => readFileSync(p));
}
pinRace(vfs, { etappe: Number(opt('etappe', 0)), car: Number(opt('car', 0)) });
vfs.iniSet('game.ini', 'OPTIONS', 'OPPONENTS', opt('opponents', '0'));
const nullRender = new Proxy({}, { get: () => () => {} });
const host = {
  vfs, render: nullRender, audio: null, screen: { width: 640, height: 480 }, tickSeconds: dt, clockStart: 1,
  fixedDate: 971434016000, onFlip() {}, onMessageBox: (c, t) => console.log('message', c, t), onStdout() {},
};
const race = new Race(meta, host);
await race.instantiate(new WebAssembly.Module(readFileSync(join(gameDir, 'spel.wasm'))));
const m = race.m;
const input = new GameInput(m);
host.input = input;
race.boot();
const v = m.view;
// Addresses: docs/research/sim-vehicle.md C11. Damage as FUN_0044c950 reads it.
const state = () => {
  const index = m.i32[0x6fba58 >> 2];
  const car = m.u32[0x715e50 >> 2] + index * 0xF0;
  const obj = m.u32[0x73b0d0 >> 2] + v.getInt32(car + 0x24, true) * 0xA9;
  const phys = m.u32[(car + 0x10) >> 2];
  const ivp = phys ? v.getUint32(phys + 0x30, true) : 0;
  const act0 = ivp ? v.getUint32(ivp + 0x44, true) : 0;
  const f = (o) => v.getFloat32(obj + o, true);
  return {
    forward: v.getFloat32(car + 0xC4, true),
    side: v.getFloat32(car + 0xBC, true),
    hud: m.i32[0x6fba64 >> 2],
    gear: phys ? m.i32[(phys + 0xE4) >> 2] : 0,
    pos: [f(0x50), f(0x54), f(0x58)],
    yaw: Math.atan2(f(0x30), f(0x38)),
    steer: v.getFloat32(0x6fbabc, true),
    brake: v.getFloat32(0x6fbabc + 4, true),
    gas: v.getFloat32(0x6fbabc + 8, true),
    omega: act0 ? v.getFloat32(act0 + 0x94, true) : 0,
    limit: act0 ? v.getFloat32(act0 + 0x70, true) : 0,
    damage: v.getInt32(m.call(0x00426f60, [index], 0x005d3460) + 0xC, true),
    moving: phys ? m.u8[v.getUint32(v.getUint32(phys + 8, true) + 0xA4, true) + 0x5C] : 0,
  };
};
const DIK = { UP: 0xC8, DOWN: 0xD0, LEFT: 0xCB, RIGHT: 0xCD };
const hold = (...keys) => {
  input.dik.fill(0);
  for (const k of keys) input.dik[k] = 0x80;
};
const log = [];
const line = (label, t, s) => console.log(label.padEnd(16), String(t.toFixed(1)).padStart(5), 'fwd', s.forward.toFixed(2).padStart(7), 'side', s.side.toFixed(2).padStart(6), 'km/h', String(s.hud).padStart(4), 'gear', s.gear, 'gas', s.gas.toFixed(0), 'brk', s.brake.toFixed(0), 'str', s.steer.toFixed(0), 'yaw', s.yaw.toFixed(2), 'dmg', s.damage);
const run = (label, seconds, every = 1, stop = null) => {
  const n = Math.round(seconds * tickHz);
  const out = [];
  for (let k = 0; k < n; k++) {
    if (!race.tick(dt)) break;
    input.endTick();
    const s = state();
    if ((k + 1) % Math.round(every * tickHz) === 0) {
      out.push({ t: (k + 1) / tickHz, ...s });
      line(label, (k + 1) / tickHz, s);
    }
    if (stop && stop(s)) {
      out.push({ t: (k + 1) / tickHz, ...s });
      line(label, (k + 1) / tickHz, s);
      break;
    }
  }
  log.push({ label, samples: out });
  return out;
};
const summary = { tickHz };
hold();
run('countdown', 6, 2);

// Gas on the start straight, up to the wheel limit: sim-vehicle.md C6 and I6.
hold(DIK.UP);
const accel = run('gas', 8, 1);
summary.speedAfter1s = accel[0]?.forward;
summary.speedAfter4s = accel[3]?.forward;
summary.speedAfter8s = accel.at(-1)?.forward;
summary.wheelOmegaAfter8s = accel.at(-1)?.omega;
summary.wheelLimit = accel.at(-1)?.limit;
summary.movementState = accel.at(-1)?.moving;

// Still on the gas: this straight has an object near (-15020, 7570) that stops the car.
const before = state();
const crash = run('collision', 12, 0.5, (s) => s.forward < before.forward - 8);
const after = state();
run('after hit', 1.5, 0.5);
summary.collision = {
  speedBefore: before.forward, speedAfter: after.forward, position: after.pos,
  damageBefore: before.damage, damageAfter: state().damage, seconds: crash.at(-1)?.t,
};

// The game's own reset, then a corner at speed. Reset is refused within 5 s of the last one.
hold();
input.pulseVk(0x0D);
run('reset', 3, 1);
summary.resetPosition = state().pos;
hold(DIK.UP);
run('gas again', 4, 1);
const atTurnIn = state();
hold(DIK.UP, DIK.LEFT);
const corner = run('full left', 1.5, 0.5);
const turned = state();
summary.cornering = {
  speedIn: atTurnIn.forward, speedOut: turned.forward, sideSpeedOut: turned.side, steer: turned.steer,
  yawRateDegPerSecond: ((turned.yaw - atTurnIn.yaw) * 180) / Math.PI / 1.5, samples: corner.length,
};
hold();
run('coast', 1, 1);
input.pulseVk(0x0D);
run('reset', 6, 2);

// Brake to a stop and on into reverse: there is no reverse gear, sim-vehicle.md C4.
hold(DIK.UP);
run('gas', 3, 1);
hold(DIK.DOWN);
const brake = run('brake', 1.5, 0.25, (s) => s.forward <= 0);
summary.speedAtBrakeEnd = brake.at(-1)?.forward;
summary.brakeSeconds = brake.at(-1)?.t;
const rev = run('reverse', 4, 1);
summary.reverseSpeedAfter4s = rev.at(-1)?.forward;
const rs = state();
hold(DIK.DOWN, DIK.LEFT);
const revLeft = run('reverse+left', 1, 0.5);
summary.reverseSteering = { yawChange: state().yaw - rs.yaw, speed: revLeft.at(-1)?.forward, steer: revLeft.at(-1)?.steer };
hold(DIK.UP);
const forwardAgain = run('forward again', 3, 1);
summary.forwardAfter3s = forwardAgain.at(-1)?.forward;

// A hard hit: turn towards the buildings at speed and hold the gas until something stops the car.
let peak = 0;
hold();
input.pulseVk(0x0D);
run('reset', 6, 2);
hold(DIK.UP);
run('gas', 3, 1);
hold(DIK.UP, DIK.LEFT);
run('turn to wall', 1, 0.5);
hold(DIK.UP);
const wallBefore = state();
const wall = run('into wall', 12, 1, (s) => {
  peak = Math.max(peak, s.forward);
  return s.forward < peak - 10;
});
run('after wall', 1, 0.5);
summary.wallHit = { peakSpeed: peak, speedAfter: wall.at(-1)?.forward, seconds: wall.at(-1)?.t, damageBefore: wallBefore.damage, damageAfter: state().damage, position: state().pos };
console.log(JSON.stringify(summary, null, 1));
const json = opt('json', '');
if (json) writeFileSync(json, JSON.stringify({ summary, log }, null, 1));
