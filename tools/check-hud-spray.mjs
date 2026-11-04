#!/usr/bin/env node
// The HUD under dense mud and water spray. Each spray particle takes a world-matrix row, and the
// HUD's 87 draws come after them in every tick. This takes EXTRA rows at the start of each tick,
// as a dense spray does, then samples the HUD's SCHADE box in every presented frame.
// Up to 1.1.4, from about 940 rows on the HUD shared the last row and vanished.
//   node tools/check-hud-spray.mjs [EXTRA=900] [screenshot.png]   (npm start running)
import { chromium } from 'playwright';
const extra = Number(process.argv[2] || 900), shot = process.argv[3] || 'evidence/hud/spray.png';
const b = await chromium.launch({ headless: true, args: ['--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required'] });
const p = await b.newPage({ viewport: { width: 960, height: 540 } });
await p.goto('http://127.0.0.1:4180/?race=1&bot=1&bench=1&etappe=7');
await p.waitForFunction(() => window.__race && window.__race.m && window.__renderer, null, { timeout: 180000 });
await p.waitForTimeout(3000);
const res = await p.evaluate(async (extra) => {
  const r = window.__renderer, gl = r.three.getContext(); let first = true;
  const pad = () => { if (first) { first = false; const f = r.capturing; for (let k = 0; k < extra; k++) { f.matrixCount++; } } };
  const odp = r.drawPrimitive.bind(r), odi = r.drawIndexed.bind(r);
  r.drawPrimitive = (...a) => { pad(); return odp(...a); };
  r.drawIndexed = (...a) => { pad(); return odi(...a); };
  const oe = r.endFrame.bind(r); r.endFrame = () => { oe(); first = true; };
  const rows = []; const op = r.present.bind(r);
  r.present = (a) => { op(a); const px = new Uint8Array(4); const W = gl.drawingBufferWidth, H = gl.drawingBufferHeight; gl.readPixels(Math.round(W * 0.935), Math.round(H * (1 - 0.655)), 1, 1, gl.RGBA, gl.UNSIGNED_BYTE, px); rows.push([px[0], px[1], px[2]]); };
  await new Promise((res) => setTimeout(res, 4000));
  const hudLike = rows.filter((c) => Math.abs(c[0] - 52) + Math.abs(c[1] - 106) + Math.abs(c[2]) < 40).length;
  return { presents: rows.length, schadeBoxSeen: hudLike, maxMatrices: r.frameB.matrixCount };
}, extra);
await p.screenshot({ path: shot });
console.log(JSON.stringify(res));
await b.close();
