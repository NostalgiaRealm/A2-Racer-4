#!/usr/bin/env node
// The port waiting at the start, with no keys: the state of a reference frame taken after the
// opponents have left. Canvas only, with the same view distance as the reference machine reached.
//   node tools/reference-86box/port-rest.mjs --resolution 1 --out port-640.png [--size 640x480] [--chunks 15]
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const [width, height] = opt('size', '640x480').split('x').map(Number);
const url = `${opt('url', 'http://127.0.0.1:4180/')}?race=1&bench=1&speed=8&chunks=${opt('chunks', 15)}&resolution=${opt('resolution', 1)}`;
const browser = await chromium.launch({
  args: ['--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required'],
});
const page = await browser.newPage({ viewport: { width, height } });
const errors = [];
page.on('console', (m) => {
  if (m.type() === 'error' || m.type() === 'warning') errors.push(m.text().slice(0, 300));
});
page.on('pageerror', (e) => errors.push(String(e).slice(0, 300)));
await page.goto(url, { waitUntil: 'load' });
await page.waitForFunction(() => window.__race && document.getElementById('loading').hidden, null, { timeout: 90000 });
await page.addStyleTag({ content: '#race-settings,#race-stop,#fps{display:none!important}' });
await page.waitForFunction(() => window.__race && window.__race.clock.seconds > 40, null, { timeout: 90000 });
await page.screenshot({ path: opt('out', 'port-rest.png') });
console.log(JSON.stringify({ errors, effective: await page.evaluate(() => window.__renderer.effective) }));
await browser.close();
