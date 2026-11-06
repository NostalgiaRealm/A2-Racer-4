#!/usr/bin/env node
// The player's tail-light glow against its car, per presented frame, with the bot driving and a
// stand-in for a fast display. For each frame it puts the glow drawn (the renderer's blended matrices)
// in the frame of the car body drawn, and compares that with where blending the glow's own two ticks
// would put it, each tick in its own car's frame. A light that moves against its car on a bumpy road
// does so in both; a light blended from the wrong light of the tick before, or drawn a tick ahead of
// its car, does not. The difference, in game units, is the flicker.
//   node tools/check-tail-glow.mjs [HZ=165] [ETAPPE=0] [SECONDS=5]   (npm start running)
import { chromium } from 'playwright';

const hz = Number(process.argv[2] || 165);
const etappe = Number(process.argv[3] || 0);
const seconds = Number(process.argv[4] || 5);
const b = await chromium.launch({ headless: true, args: ['--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required'] });
const p = await b.newPage({ viewport: { width: 960, height: 540 } });
if (hz) await p.addInitScript((rate) => { const t0 = performance.now(); let n = 0; window.requestAnimationFrame = (cb) => { n++; const due = t0 + n * 1000 / rate; return setTimeout(() => cb(performance.now()), Math.max(0, due - performance.now())); }; }, hz);
await p.goto(`http://127.0.0.1:4180/?race=1&bot=1&bench=1&etappe=${etappe}`);
await p.waitForFunction(() => window.__race && window.__race.m && window.__renderer && window.__bot && window.__bot.state, null, { timeout: 180000 });
await p.waitForTimeout(8000);
const out = await p.evaluate(async (ms) => {
  const r = window.__renderer, m = window.__race.m, v = m.view;
  const M = r.tmpV.constructor;
  // ALPHABLENDENABLE with ONE, INVSRCCOLOR: the car lights.
  const isLight = () => r.state[27] && r.state[19] === 2 && r.state[20] === 4;
  const pose = () => { const car = m.u32[0x715e50 >> 2] + m.u32[0x6fba58 >> 2] * 0xf0, ob = m.u32[0x73b0d0 >> 2] + v.getInt32(car + 0x24, true) * 0xa9 + 0x10; return Array.from({ length: 16 }, (_, k) => v.getFloat32(ob + k * 4, true)); };
  let cur = [], body = -1, P = null, lightRows = [], bodyRow = -1;
  const o = r.drawIndexed.bind(r);
  r.drawIndexed = (...a) => { const res = o(...a); const row = r.currentWorld; const w = r.capturing.matrices;
    if (isLight()) cur.push(row);
    else if (body < 0) { if (!P) P = pose(); let same = true; for (let j = 12; j < 15; j++) if (Math.abs(w[row * 16 + j] - P[j]) > 1e-3) same = false; if (same) body = row; }
    return res; };
  const oe = r.endFrame.bind(r);
  r.endFrame = () => { const had = r.capturing.batches.length; oe(); if (had) { lightRows = cur; bodyRow = body; } cur = []; body = -1; P = null; };
  const local = (mats, bodyAt, lightAt) => { const inv = new M().fromArray(mats.subarray(bodyAt * 16, bodyAt * 16 + 16)).invert().elements; const q = lightAt * 16, x = mats[q + 12], y = mats[q + 13], z = mats[q + 14];
    return [inv[0] * x + inv[4] * y + inv[8] * z + inv[12], inv[1] * x + inv[5] * y + inv[9] * z + inv[13], inv[2] * x + inv[6] * y + inv[10] * z + inv[14]]; };
  const dev = []; let frames = 0;
  const op = r.present.bind(r);
  r.present = (alpha) => { op(alpha);
    const B = r.frameB, A = r.frameA;
    if (bodyRow < 0) return;
    const qb = B.prevRow[bodyRow];
    frames++;
    for (const row of lightRows) {
      const s = Math.hypot(B.matrices[row * 16], B.matrices[row * 16 + 1], B.matrices[row * 16 + 2]);
      if (s < 0.5) continue;
      const drawn = local(r.palette, bodyRow, row);
      if (Math.hypot(...drawn) > 40) continue;   // another car's light
      const lb = local(B.matrices, bodyRow, row);
      const ql = B.prevRow[row];
      const la = ql >= 0 && qb >= 0 ? local(A.matrices, qb, ql) : lb;
      const want = [0, 1, 2].map((k) => la[k] + (lb[k] - la[k]) * Math.min(1, alpha));
      dev.push(Math.hypot(drawn[0] - want[0], drawn[1] - want[1], drawn[2] - want[2]));
    }
  };
  await new Promise((res) => setTimeout(res, ms));
  dev.sort((x, y) => x - y);
  return { frames, glowSamples: dev.length, over01: dev.filter((x) => x > 0.1).length, median: +(dev[dev.length >> 1] || 0).toFixed(4), p99: +(dev[Math.floor(dev.length * 0.99)] || 0).toFixed(4), max: +(dev[dev.length - 1] || 0).toFixed(4) };
}, seconds * 1000);
await b.close();
console.log(JSON.stringify({ hz, etappe, seconds, ...out }));
