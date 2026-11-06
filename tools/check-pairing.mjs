#!/usr/bin/env node
// How the renderer pairs every draw with the tick before, in a browser with the bot driving. Between
// ticks it blends world matrices (rows) and moving vertices (blob shadows, skid marks, the flag) from
// the draw it pairs with. For every row and every moving-vertex draw of each tick this compares the
// draw it was paired with against the nearest draw of the same mesh in the tick before that no other
// draw of this tick was paired with:
//   swappedBlended  paired with another draw within 30 units: drawn partway to that draw
//   swappedTeleport paired with a draw beyond 30 units while a near one existed: drawn at the latest
//                   tick, a tick ahead of the rest
// Results per mesh, worst first.
//   node tools/check-pairing.mjs [--etappe 0] [--seconds 10] [--url http://127.0.0.1:4180/] [--out file.json]
import { mkdirSync, writeFileSync } from 'node:fs';
import { dirname } from 'node:path';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const etappe = Number(opt('etappe', 0));
const seconds = Number(opt('seconds', 10));
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
  const info = new Map();   // mesh -> what it is
  const wrap = (name) => {
    const o = r[name].bind(r);
    r[name] = (...a) => {
      const verts = a[2];
      if (!info.has(verts)) {
        const s = r.state;
        info.set(verts, { call: name, verts: a[3], blend: s[27] ? `${s[19]}/${s[20]}` : 'off', zbias: s[47] });
      }
      return o(...a);
    };
  };
  wrap('drawPrimitive');
  wrap('drawIndexed');
  const per = new Map();
  const bump = (kind, verts, field) => {
    const k = kind + ' ' + verts.toString(16);
    let e = per.get(k);
    if (!e) per.set(k, e = { kind, mesh: verts.toString(16), ...(info.get(verts) || {}), draws: 0, swappedBlended: 0, swappedTeleport: 0 });
    e[field]++;
  };
  let ticks = 0;
  const oe = r.endFrame.bind(r);
  r.endFrame = () => {
    const had = r.capturing.batches.length;
    oe();
    if (!had) return;
    ticks++;
    const B = r.frameB, A = r.frameA;
    // World rows.
    const rowMesh = new Map();
    for (const [key, row] of B.matKeys) rowMesh.set(row, Math.floor(key / 64));
    const aRows = new Map();
    for (const [key, row] of A.matKeys) { const v = Math.floor(key / 64); let l = aRows.get(v); if (!l) aRows.set(v, l = []); l.push(row); }
    const td = (o, q) => Math.hypot(B.matrices[o + 12] - A.matrices[q + 12], B.matrices[o + 13] - A.matrices[q + 13], B.matrices[o + 14] - A.matrices[q + 14]);
    const scale = (M, row) => Math.hypot(M[row * 16], M[row * 16 + 1], M[row * 16 + 2]);
    // Rows of the tick before that a draw of this tick was paired with: taken, unless by the draw itself.
    const usedRows = new Map();
    for (const [row] of rowMesh) { const q = B.prevRow[row]; if (q >= 0) usedRows.set(q, row); }
    for (const [row, v] of rowMesh) {
      bump('row', v, 'draws');
      // Off in both ticks (scaled to nothing): nothing to see whatever it pairs with.
      const q0 = B.prevRow[row];
      if (scale(B.matrices, row) < 1e-6 && (q0 < 0 || scale(A.matrices, q0) < 1e-6)) continue;
      const cands = (aRows.get(v) || []).filter((q) => !usedRows.has(q) || usedRows.get(q) === row);
      if (!cands.length) continue;
      let nearest = Infinity;
      for (const q of cands) nearest = Math.min(nearest, td(row * 16, q * 16));
      const q = B.prevRow[row];
      if (q < 0) { if (nearest <= 30) bump('row', v, 'swappedTeleport'); continue; }
      const d = td(row * 16, q * 16);
      if (d > nearest + 0.5) bump('row', v, d <= 30 ? 'swappedBlended' : 'swappedTeleport');
    }
    // Moving vertices, by their first vertex.
    const aDyn = new Map();
    for (const [key, e] of A.dynamic) { const v = Math.floor(key / 64); let l = aDyn.get(v); if (!l) aDyn.set(v, l = []); l.push(e); }
    const fd = (eb, ea) => Math.hypot(B.dynFloats[eb.offset] - A.dynFloats[ea.offset], B.dynFloats[eb.offset + 1] - A.dynFloats[ea.offset + 1], B.dynFloats[eb.offset + 2] - A.dynFloats[ea.offset + 2]);
    // The pair the renderer blends from: since 1.1.7 its own (dynPair), before that the same key.
    const pairOf = (key) => (B.dynPair ? B.dynPair.get(key) : A.dynamic.get(key));
    const usedDyn = new Map();
    for (const [key, e] of B.dynamic) { const p = pairOf(key); if (p && p.count === e.count) usedDyn.set(p, key); }
    for (const [key, e] of B.dynamic) {
      const v = Math.floor(key / 64);
      bump('verts', v, 'draws');
      const cands = (aDyn.get(v) || []).filter((c) => c.count === e.count && (!usedDyn.has(c) || usedDyn.get(c) === key));
      if (!cands.length) continue;
      let nearest = Infinity;
      for (const c of cands) nearest = Math.min(nearest, fd(e, c));
      const p = pairOf(key);
      const d = p && p.count === e.count ? fd(e, p) : Infinity;
      if (d > nearest + 0.5) bump('verts', v, d <= 30 ? 'swappedBlended' : 'swappedTeleport');
    }
  };
  await new Promise((res) => setTimeout(res, ms));
  const rows = [...per.values()].filter((e) => e.swappedBlended || e.swappedTeleport).sort((x, y) => (y.swappedBlended + y.swappedTeleport) - (x.swappedBlended + x.swappedTeleport));
  const total = (f) => [...per.values()].reduce((s, e) => s + e[f], 0);
  return { ticks, draws: total('draws'), swappedBlended: total('swappedBlended'), swappedTeleport: total('swappedTeleport'), meshes: rows.slice(0, 12) };
}, seconds * 1000);
await browser.close();
const result = { etappe, errors, ...out };
console.log(JSON.stringify(result, null, 1));
if (opt('out')) {
  mkdirSync(dirname(opt('out')), { recursive: true });
  writeFileSync(opt('out'), JSON.stringify(result, null, 1) + '\n');
}
