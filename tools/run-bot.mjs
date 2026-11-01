#!/usr/bin/env node
// Runs one race headless with the bot and prints its progress. For tuning source/dev/bot.js and
// for reading what a whole driven race writes to game.ini.
//   node tools/run-bot.mjs [--etappe 0] [--car 0] [--seconds 600] [--opponents 4]
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
const dt = 1 / 60;
const vfs = new Vfs();
for (const name of readdirSync(installDir)) {
  const p = join(installDir, name);
  if (statSync(p).isFile()) vfs.addLazy(name, statSync(p).size, () => readFileSync(p));
}
pinRace(vfs, { etappe: Number(opt('etappe', 0)), car: Number(opt('car', 0)) });
if (opt('opponents', '')) vfs.iniSet('game.ini', 'OPTIONS', 'OPPONENTS', opt('opponents', ''));
const host = {
  vfs, render: new Proxy({}, { get: () => () => {} }), audio: null, screen: { width: 640, height: 480 }, tickSeconds: dt, clockStart: 1,
  fixedDate: 971434016000, onFlip() {}, onMessageBox: (c, t) => console.log('message', c, t), onStdout() {},
};
const race = new Race(meta, host);
await race.instantiate(new WebAssembly.Module(readFileSync(join(gameDir, 'spel.wasm'))));
const input = new GameInput(race.m);
host.input = input;
race.boot();
const bot = new Bot(race, input);
const total = Number(opt('seconds', 600)) * 60;
let tick = 0;
let stuck = 0;
let last = 0;
for (; tick < total; tick++) {
  bot.tick();
  if (!race.tick(dt)) break;
  input.endTick();
  if (bot.reversing === 70) stuck++;
  if (tick % 600 === 0) {
    const s = bot.state;
    console.log(String(tick / 60).padStart(5), 'chunk', String(s.chunk).padStart(4), 'speed', s.speed.toFixed(1).padStart(6), 'side', s.side, 'reversals', stuck);
    last = s.chunk;
  }
}
const g = (k) => vfs.parsedIni('game.ini').get('PLAYER', k);
console.log('ended at', (tick / 60).toFixed(1), 's; last chunk', last, 'reversals', stuck);
console.log(Object.fromEntries(['FINISHED', 'Out_Of_Time', 'Total_Loss', 'MONEY', 'TRACKTIME', 'LAP_1_TIME', 'LAP_2_TIME', 'DAMAGE'].map((k) => [k, g(k)])));
for (let k = 0; k < 4; k++) console.log('racer', k, vfs.parsedIni('game.ini').get('RACERS', String(k)));
