#!/usr/bin/env node
// Headless check of the owner's A2-Racer-4-Fixes parts 11 to 13 in spel.wasm: the bot drives whole
// races and this reads the state the added code keeps (spel_patch.asm, its memory at 0x751F00).
//   node tools/check-owner-fixes.mjs [--etappes 0,1,...] [--seconds 400] [--game public/game] [--out file.json]
// Reports per race: how the race ended, the share of ticks with a 25 Hz tick, the camera factors,
// whether the colour sequence and flash timer ran, and the cars that hung_check put back.
import { readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
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
const gameDir = opt('game', join(ROOT, 'public/game'));
const etappes = opt('etappes', '0,1,2,3,4,5,6,7,8,9').split(',').map(Number);
const seconds = Number(opt('seconds', 400));
const meta = JSON.parse(readFileSync(join(gameDir, 'spel.meta.json'), 'utf8'));
const wasm = new WebAssembly.Module(readFileSync(join(gameDir, 'spel.wasm')));
const dt = 1 / 60;
const HUNG_TIMES = 0x751f40;
const TICK = 0x751f90;
const CAMERA_K = 0x751f98;
const COLOR_SEQUENCE = 0x751fa4;
const FLASH_TIME = 0x751fa8;

const results = [];
for (const etappe of etappes) {
  const vfs = new Vfs();
  for (const name of readdirSync(installDir)) {
    const p = join(installDir, name);
    if (statSync(p).isFile()) vfs.addLazy(name, statSync(p).size, () => readFileSync(p));
  }
  pinRace(vfs, { etappe, car: 0 });
  const messages = [];
  const host = {
    vfs, render: new Proxy({}, { get: () => () => {} }), audio: null, screen: { width: 640, height: 480 }, tickSeconds: dt,
    clockStart: 1, fixedDate: 971434016000, onFlip() {}, onMessageBox: (c, t) => messages.push(`${c} | ${t}`), onStdout() {},
  };
  const race = new Race(meta, host);
  await race.instantiate(wasm);
  const input = new GameInput(race.m);
  host.input = input;
  const m = race.m;
  const r = { etappe, ownerFixes: meta.ownerFixes?.version ?? null, messages, hungResets: [], error: null };
  let tickOnes = 0;
  let counted = 0;
  let flashSeen = false;
  const hung = new Float32Array(20);
  try {
    race.boot();
    const bot = new Bot(race, input);
    const seq0 = m.u32[COLOR_SEQUENCE >> 2];
    let tick = 0;
    for (; tick < seconds * 60; tick++) {
      bot.tick();
      if (!race.tick(dt)) break;
      input.endTick();
      if (tick >= 600) {
        counted++;
        tickOnes += m.u8[TICK] ? 1 : 0;
      }
      if (m.f32[FLASH_TIME >> 2] > 0) flashSeen = true;
      for (let k = 0; k < 20; k++) {
        const v = m.f32[(HUNG_TIMES >> 2) + k];
        if (hung[k] >= 2.9 && v === 0) r.hungResets.push({ second: +(tick / 60).toFixed(1), slot: k === 19 ? 'player' : `racer slot ${k}` });
        hung[k] = v;
      }
    }
    r.seconds = +(tick / 60).toFixed(1);
    r.tickShare = counted ? +(tickOnes / counted).toFixed(4) : null;
    r.cameraK = [0, 1, 2].map((k) => +m.f32[(CAMERA_K >> 2) + k].toFixed(5));
    r.colourSteps = (m.u32[COLOR_SEQUENCE >> 2] - seq0) >>> 0;
    r.flashSeen = flashSeen;
    const g = (k) => vfs.parsedIni('game.ini').get('PLAYER', k);
    r.result = Object.fromEntries(['FINISHED', 'Out_Of_Time', 'Total_Loss', 'TRACKTIME', 'LAP_1_TIME', 'LAP_2_TIME', 'DAMAGE'].map((k) => [k, g(k)]));
  } catch (e) {
    r.error = e.message;
    r.stack = (e.stack || "").split("\n").slice(0, 14).join(" | ");
    r.at = race.clock ? +race.clock.seconds.toFixed(2) : null;
  }
  results.push(r);
  console.log(JSON.stringify(r));
}
if (opt('out')) writeFileSync(opt('out'), JSON.stringify(results, null, 1) + '\n');
