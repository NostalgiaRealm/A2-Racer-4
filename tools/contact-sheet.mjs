#!/usr/bin/env node
// Visual smoke check: the bot drives the first track, a screenshot every few seconds.
//   node tools/contact-sheet.mjs [--count 12] [--every 8] [--out evidence/smoke] [--size 1280x720] [--gpu]
import { chromium } from 'playwright';
import { mkdirSync } from 'node:fs';
const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const [w, h] = opt('size', '1280x720').split('x').map(Number);
const out = opt('out', 'evidence/smoke');
mkdirSync(out, { recursive: true });
const browser = await chromium.launch({ headless: true, args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', '--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE'] });
const page = await browser.newPage({ viewport: { width: w, height: h } });
page.on('pageerror', (e) => console.log('[pageerror]', e.message, (e.stack || '').split('\n').slice(0, 6).join(' | ')));
page.on('console', (m) => { if (m.type() === 'error') console.log('[console]', m.text().slice(0, 240)); });
await page.goto(opt('url', 'http://127.0.0.1:4180/?race=1&bot=1'));
await page.waitForFunction(() => window.__race && window.__race.m, null, { timeout: 120000 });
const count = Number(opt('count', 12));
const every = Number(opt('every', 8));
for (let k = 0; k < count; k++) {
  await page.waitForTimeout(every * 1000);
  const s = await page.evaluate(() => (window.__bot && window.__bot.state ? { chunk: window.__bot.state.chunk, speed: Math.round(window.__bot.state.speed * 3.6), stats: window.__renderer.stats } : null));
  console.log(k, JSON.stringify(s));
  await page.screenshot({ path: `${out}/s${String(k).padStart(2, '0')}.jpg`, type: 'jpeg', quality: 70 });
}
await browser.close();
