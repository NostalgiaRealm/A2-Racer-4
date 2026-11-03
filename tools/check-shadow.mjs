#!/usr/bin/env node
// The player's shadow against its car, per presented frame, in a browser with the bot driving
// Amsterdam. Per frame it takes the centre of the shadow's polygons of the latest tick and puts it in
// the car's frame, two ways: under the car as drawn (blended between the last two ticks), and under
// the car of that tick. The first is where 1.1.1 drew the shadow relative to the car, the second
// where it is drawn now. How far that point moves from one frame to the next is the jitter.
// The centre is weighted by area, as the polygons gain and lose vertices where they are cut.
// --hz stands in for a display rate other than the tick's, so frames fall between ticks.
//   node tools/check-shadow.mjs [--seconds 20] [--hz 144] [--url http://127.0.0.1:4180/] [--out evidence/shadow/summary.json]
import { writeFileSync } from 'node:fs';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const seconds = Number(opt('seconds', 20));
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
await page.waitForTimeout(8000);
await page.evaluate(() => {
  const r = window.__renderer;
  const rec = (window.__shadowRec = []);
  const inv = (p) => {
    const m = new r.shadowMove.constructor();
    m.fromArray(p).invert();
    return m.elements;
  };
  const apply = (e, x, y, z) => [e[0] * x + e[4] * y + e[8] * z + e[12], e[1] * x + e[5] * y + e[9] * z + e[13], e[2] * x + e[6] * y + e[10] * z + e[14]];
  const orig = r.blendPalette.bind(r);
  r.blendPalette = (alpha) => {
    orig(alpha);
    const b = r.frameB;
    const a = r.frameA;
    if (!b.shadowParts.length || !b.hasShadowPose || !a.hasShadowPose) return;
    // Area-weighted centre of the fans, in x and z; y is the mean height.
    let x = 0, y = 0, z = 0, area = 0, n = 0;
    const d = b.dynFloats;
    for (const part of b.shadowParts) {
      const o0 = part.offset;
      for (let k = 2; k < part.count; k++) {
        const o1 = o0 + (k - 1) * 3, o2 = o0 + k * 3;
        const w = Math.abs((d[o1] - d[o0]) * (d[o2 + 2] - d[o0 + 2]) - (d[o2] - d[o0]) * (d[o1 + 2] - d[o0 + 2])) / 2;
        x += w * (d[o0] + d[o1] + d[o2]) / 3;
        z += w * (d[o0 + 2] + d[o1 + 2] + d[o2 + 2]) / 3;
        area += w;
      }
      for (let k = 0, o = o0; k < part.count; k++, o += 3, n++) y += d[o + 1];
    }
    if (!area) return;
    x /= area; z /= area; y /= n;
    const drawn = new Float32Array(16);
    for (let j = 0; j < 16; j++) drawn[j] = a.shadowPose[j] + (b.shadowPose[j] - a.shadowPose[j]) * alpha;
    rec.push({ alpha, area, tick: r.stats.ticksCaptured, old: apply(inv(drawn), x, y, z), now: apply(inv(b.shadowPose), x, y, z) });
  };
});
await page.waitForTimeout(seconds * 1000);
const rows = await page.evaluate(() => window.__shadowRec);
await browser.close();
const step = (key) => {
  const d = [];
  for (let k = 1; k < rows.length; k++) {
    const p = rows[k - 1][key], q = rows[k][key];
    d.push(Math.hypot(q[0] - p[0], q[1] - p[1], q[2] - p[2]));
  }
  d.sort((a, b) => a - b);
  const mean = d.reduce((s, v) => s + v, 0) / d.length;
  return { mean: +mean.toFixed(4), p95: +d[Math.floor(d.length * 0.95)].toFixed(4), max: +d[d.length - 1].toFixed(4) };
};
const alphas = rows.map((r) => r.alpha);
// The same, only between frames of one tick: there the shadow of the original would not move at all.
const within = (key) => {
  const d = [];
  for (let k = 1; k < rows.length; k++) if (rows[k].tick === rows[k - 1].tick) {
    const p = rows[k - 1][key], q = rows[k][key];
    d.push(Math.hypot(q[0] - p[0], q[2] - p[2]));
  }
  d.sort((a, b) => a - b);
  return { frames: d.length, mean: +(d.reduce((s, v) => s + v, 0) / Math.max(1, d.length)).toFixed(4), max: +(d[d.length - 1] || 0).toFixed(4) };
};
const out = {
  frames: rows.length, errors,
  alpha: { min: Math.min(...alphas), max: Math.max(...alphas), below1: alphas.filter((a) => a < 0.999).length },
  hz: hz || 'display', shadowStepInCarFrame: { asIn111: step('old'), now: step('now') },
  withinOneTick: { asIn111: within('old'), now: within('now') },
};
console.log(JSON.stringify(out, null, 1));
if (opt('out')) writeFileSync(opt('out'), JSON.stringify(out, null, 1) + '\n');
