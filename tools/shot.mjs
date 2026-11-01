#!/usr/bin/env node
// Opens the game in headless Chromium, waits, saves a screenshot, prints the console.
//   node tools/shot.mjs [--wait 6000] [--out evidence/shot.png] [--size 1280x720] [--url http://127.0.0.1:4180/] [--eval "js"]
import { chromium } from 'playwright';
const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const [w, h] = opt('size', '1280x720').split('x').map(Number);
const browser = await chromium.launch({
  headless: true,
  args: ['--autoplay-policy=no-user-gesture-required', '--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist'],
});
const mobile = process.argv.includes('--mobile');
const context = await browser.newContext({ viewport: { width: w, height: h }, deviceScaleFactor: mobile ? 2 : 1, isMobile: mobile, hasTouch: mobile });
const page = await context.newPage();
page.on('console', (m) => console.log('[' + m.type() + ']', m.text().slice(0, 400)));
page.on('pageerror', (e) => console.log('[pageerror]', e.message, (e.stack || '').split('\n').slice(0, 12).join(' | ')));
await page.goto(opt('url', 'http://127.0.0.1:4180/'));
await page.waitForTimeout(Number(opt('wait', 6000)));
const hold = opt('hold', '');
if (hold) {
  await page.keyboard.down(hold);
  await page.waitForTimeout(Number(opt('holdms', 8000)));
}
const ev = opt('eval', '');
if (ev) console.log('eval:', JSON.stringify(await page.evaluate(ev)));
await page.screenshot({ path: opt('out', 'evidence/shot.png') });
console.log('status:', await page.evaluate(() => document.getElementById('status')?.textContent));
await browser.close();
