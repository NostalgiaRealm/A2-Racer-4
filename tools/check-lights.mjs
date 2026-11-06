#!/usr/bin/env node
// Car lights between ticks, in a browser with the bot driving. All car lights are one 6-vertex mesh
// drawn in the alpha-blended pass, whose order the game works out per tick. For every light draw this
// takes the row of the tick before that the renderer blends it from, and compares it with the nearest
// light of that tick: a pairing more than 0.5 units worse than the nearest is a swap. Within 30 units
// the light is drawn partway to another light; beyond, it is drawn a tick ahead of its car. Up to 1.1.5
// lights paired by draw order, which shifts whenever a light enters or leaves the view.
//   node tools/check-lights.mjs [--etappe 0] [--seconds 8] [--url http://127.0.0.1:4180/] [--out evidence/lights/summary.json]
import { mkdirSync, writeFileSync } from 'node:fs';
import { dirname } from 'node:path';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const etappe = Number(opt('etappe', 0));
const seconds = Number(opt('seconds', 8));
const base = opt('url', 'http://127.0.0.1:4180/');
const browser = await chromium.launch({
  headless: true,
  args: ['--autoplay-policy=no-user-gesture-required', '--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist'],
});
const page = await browser.newPage({ viewport: { width: 960, height: 540 } });
const errors = [];
page.on('pageerror', (e) => errors.push(e.message));
await page.goto(`${base}?race=1&bot=1&bench=1&etappe=${etappe}`);
await page.waitForFunction(() => window.__race && window.__race.m && window.__renderer, null, { timeout: 180000 });
await page.waitForTimeout(8000);
const out = await page.evaluate(async (ms) => {
  const r = window.__renderer;
  // ALPHABLENDENABLE with ONE, INVSRCCOLOR: the car lights (0x436318, 0x436c8b).
  const isLight = () => r.state[27] && r.state[19] === 2 && r.state[20] === 4;
  let rows = [];
  let prevRows = null;
  const wrap = (name) => {
    const o = r[name].bind(r);
    r[name] = (...a) => {
      const res = o(...a);
      if (isLight() && a[1] !== 3) rows.push({ verts: a[2], row: r.currentWorld });
      return res;
    };
  };
  wrap('drawPrimitive');
  wrap('drawIndexed');
  let lights = 0, paired = 0, unpaired = 0, swapped = 0, teleported = 0, worst = 0;
  const oe = r.endFrame.bind(r);
  r.endFrame = () => {
    const had = r.capturing.batches.length;
    const mine = rows;
    rows = [];
    oe();
    if (!had) return;
    const B = r.frameB, A = r.frameA;
    if (prevRows) {
      for (const d of mine) {
        lights++;
        const q = B.prevRow[d.row];
        const o = d.row * 16;
        const dist = (rowA) => Math.hypot(B.matrices[o + 12] - A.matrices[rowA * 16 + 12], B.matrices[o + 13] - A.matrices[rowA * 16 + 13], B.matrices[o + 14] - A.matrices[rowA * 16 + 14]);
        let nearest = Infinity;
        for (const e of prevRows) if (e.verts === d.verts) nearest = Math.min(nearest, dist(e.row));
        if (q < 0) { unpaired++; continue; }
        paired++;
        // Paired with another light. Within 30 units it is drawn partway to that light between ticks;
        // beyond, the renderer takes it for a teleport and draws the latest tick while its car is
        // drawn between ticks, so the light jumps ahead of the car by up to a tick of motion.
        const extra = dist(q) - nearest;
        if (extra > 0.5) { if (dist(q) <= 30) swapped++; else teleported++; worst = Math.max(worst, extra); }
      }
    }
    prevRows = mine;
  };
  await new Promise((res) => setTimeout(res, ms));
  return { lights, paired, unpaired, swappedBlended: swapped, swappedAsTeleport: teleported, worstExtraDistance: +worst.toFixed(2) };
}, seconds * 1000);
await browser.close();
const result = { etappe, errors, ...out };
console.log(JSON.stringify(result));
if (opt('out')) {
  mkdirSync(dirname(opt('out')), { recursive: true });
  writeFileSync(opt('out'), JSON.stringify(result, null, 1) + '\n');
}
