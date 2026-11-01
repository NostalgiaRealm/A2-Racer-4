#!/usr/bin/env node
// Compares the state traces of two benchmark runs: same fixed seeds, same bot, other frame rate.
//   node tools/compare-traces.mjs evidence/performance/a.json evidence/performance/b.json
import { readFileSync } from 'node:fs';

const [a, b] = process.argv.slice(2).map((f) => JSON.parse(readFileSync(f, 'utf8')));
const n = Math.min(a.trace.length, b.trace.length);
let firstDiff = -1;
let maxPos = 0;
let maxSpeed = 0;
for (let k = 0; k < n; k++) {
  const x = a.trace[k];
  const y = b.trace[k];
  if (x.tick !== y.tick) throw new Error(`tick mismatch at entry ${k}`);
  if (firstDiff < 0 && x.cars !== y.cars) firstDiff = k;
  maxPos = Math.max(maxPos, Math.hypot(x.pos[0] - y.pos[0], x.pos[1] - y.pos[1], x.pos[2] - y.pos[2]));
  maxSpeed = Math.max(maxSpeed, Math.abs(x.speed - y.speed));
}
console.log(JSON.stringify({
  comparedSeconds: n,
  frameRate: [a.fps?.mean, b.fps?.mean],
  drawingBuffer: [a.drawingBuffer, b.drawingBuffer],
  throttle: [a.throttle, b.throttle],
  bodiesInChecksum: [a.trace[0]?.bodies, a.trace[n - 1]?.bodies],
  checksumsEqual: firstDiff < 0,
  firstDifferentSecond: firstDiff < 0 ? null : firstDiff + 1,
  maxPositionDifference: maxPos,
  maxSpeedDifference: maxSpeed,
  end: [a.trace[n - 1], b.trace[n - 1]],
}, null, 1));
