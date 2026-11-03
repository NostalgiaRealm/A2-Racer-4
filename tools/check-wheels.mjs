#!/usr/bin/env node
// Wheels between ticks, in a browser with the bot driving Amsterdam. Every car's four wheels have
// their own world matrix, which turns about 60 degrees per tick at speed. Per presented frame this
// reads the matrices the renderer draws with for every pair that turns more than 20 degrees in a
// tick, and reports the shortest and longest row: 1 is a wheel at its own size and shape. Blended
// element by element, as up to 1.1.2, the rows shrink between ticks and the wheel pulses.
//   node tools/check-wheels.mjs [--seconds 15] [--hz 144] [--url http://127.0.0.1:4180/] [--out evidence/wheels/summary.json]
import { mkdirSync, writeFileSync } from 'node:fs';
import { dirname } from 'node:path';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const seconds = Number(opt('seconds', 15));
const hz = Number(opt('hz', 0));
const base = opt('url', 'http://127.0.0.1:4180/');
const browser = await chromium.launch({
  headless: true,
  args: ['--autoplay-policy=no-user-gesture-required', '--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist'],
});
const page = await browser.newPage({ viewport: { width: 1280, height: 720 } });
const errors = [];
page.on('pageerror', (e) => errors.push(e.message));
if (hz) {
  await page.addInitScript((rate) => {
    const t0 = performance.now();
    let n = 0;
    window.requestAnimationFrame = (cb) => {
      n++;
      const due = t0 + n * 1000 / rate;
      return setTimeout(() => cb(performance.now()), Math.max(0, due - performance.now()));
    };
  }, hz);
}
await page.goto(base + '?race=1&bot=1&bench=1');
await page.waitForFunction(() => window.__race && window.__race.m && window.__renderer, null, { timeout: 180000 });
await page.waitForTimeout(10000);
const out = await page.evaluate(async (ms) => {
  const r = window.__renderer;
  const cosTurn = (a, q, b, o) => {
    let tr = 0;
    for (let k = 0; k < 12; k += 4) {
      const la = Math.hypot(a[q + k], a[q + k + 1], a[q + k + 2]), lb = Math.hypot(b[o + k], b[o + k + 1], b[o + k + 2]);
      if (!la || !lb) return 1;
      tr += (a[q + k] * b[o + k] + a[q + k + 1] * b[o + k + 1] + a[q + k + 2] * b[o + k + 2]) / (la * lb);
    }
    return (tr - 1) / 2;
  };
  const cut = Math.cos(20 * Math.PI / 180);
  let pairs = 0, minRow = Infinity, maxRow = 0, sumMin = 0, frames = 0, turnSum = 0;
  const orig = r.blendPalette.bind(r);
  r.blendPalette = (alpha) => {
    orig(alpha);
    const B = r.frameB, A = r.frameA, pal = r.palette;
    if (alpha >= 1) return;
    frames++;
    for (let k = 1; k < B.matrixCount; k++) {
      const q = B.prevRow[k];
      if (q < 0) continue;
      const c = cosTurn(A.matrices, q * 16, B.matrices, k * 16);
      if (c >= cut) continue;
      const o = k * 16;
      const len = (m, s, row) => Math.hypot(m[s + row], m[s + row + 1], m[s + row + 2]);
      const lb = len(B.matrices, o, 0) || 1;
      let mn = Infinity, mx = 0;
      for (let row = 0; row < 12; row += 4) { const l = len(pal, o, row) / lb; mn = Math.min(mn, l); mx = Math.max(mx, l); }
      pairs++; sumMin += mn; minRow = Math.min(minRow, mn); maxRow = Math.max(maxRow, mx); turnSum += Math.acos(Math.max(-1, Math.min(1, c))) * 180 / Math.PI;
    }
  };
  await new Promise((res) => setTimeout(res, ms));
  return { frames, pairs, meanTurnDegPerTick: +(turnSum / Math.max(1, pairs)).toFixed(1), rowLength: { lowest: +minRow.toFixed(3), meanLowest: +(sumMin / Math.max(1, pairs)).toFixed(3), highest: +maxRow.toFixed(3) } };
}, seconds * 1000);
await browser.close();
const result = { hz: hz || 'display', errors, ...out };
console.log(JSON.stringify(result, null, 1));
if (opt('out')) {
  mkdirSync(dirname(opt('out')), { recursive: true });
  writeFileSync(opt('out'), JSON.stringify(result, null, 1) + '\n');
}
