#!/usr/bin/env node
// The same flow on a phone profile, with taps: intro, new player, Quick Race on Amsterdam, a race
// held on the touch wheel, Stop and Ja back to the menu, a rotation, and the Tour's screens up to
// the Garage without starting another level. Emulated touch in Chromium: not a real phone.
//   node tools/check-phone-flow.mjs [--out evidence/flow-phone] [--url http://127.0.0.1:4180/]
import { mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const out = opt('out', 'evidence/flow-phone');
const base = opt('url', 'http://127.0.0.1:4180/');
mkdirSync(out, { recursive: true });

const browser = await chromium.launch({
  headless: true,
  args: ['--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist'],
});
const context = await browser.newContext({ viewport: { width: 844, height: 390 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true });
const page = await context.newPage();
const client = await context.newCDPSession(page);
const errors = [];
page.on('console', (m) => {
  if (m.type() === 'error') {
    errors.push(m.text());
    console.log('  [error]', m.text().slice(0, 300));
  }
});
page.on('pageerror', (e) => {
  errors.push(e.message);
  console.log('  [pageerror]', e.message);
});
page.on('response', (r) => {
  if (r.status() >= 400) console.log('  [http]', r.status(), r.url());
});

const form = () => page.evaluate(() => {
  const m = window.__app?.menu;
  if (!m) return 'none';
  const top = m.modals.at(-1) || m.screen;
  return window.__app.mode === 'race' ? 'race' : top ? top.constructor.className || top.constructor.name : 'none';
});
const waitForm = async (name, ms = 60000) => {
  const t0 = Date.now();
  while (Date.now() - t0 < ms) {
    if ((await form()) === name) return;
    await page.waitForTimeout(100);
  }
  throw new Error(`waited for ${name}, on ${await form()}`);
};
const tap = async (name) => {
  const r = await page.evaluate((n) => {
    const m = window.__app.menu;
    const f = m.modals.at(-1) || m.screen;
    const c = f[n];
    if (!c) return { missing: Object.keys(f).filter((k) => /^(btn|opt|rb)/.test(k)) };
    for (let dy = 0.5; dy > 0.05; dy -= 0.1) for (let dx = 0.5; dx > 0.05; dx -= 0.1) {
      const fx = c.x + c.w * dx;
      const fy = c.y + c.h * dy;
      if (c.hit(fx, fy) && f.topAt(fx, fy) === c) {
        const q = m.toScreenRect(f, fx, fy, 1, 1);
        return { x: q.x, y: q.y };
      }
    }
    return { blocked: true };
  }, name);
  if (r.missing || r.blocked) throw new Error(`tap ${name}: ${JSON.stringify(r)}`);
  await page.touchscreen.tap(r.x, r.y);
  await page.waitForTimeout(400);
};
const shot = (name) => page.screenshot({ path: join(out, name + '.png') });
const results = {};
const record = (name, ok, detail) => {
  results[name] = { ok, detail };
  console.log(ok ? 'ok  ' : 'FAIL', name, JSON.stringify(detail));
};

await page.goto(base);
await waitForm('TfrmIntro');
await page.waitForTimeout(1200);
await page.touchscreen.tap(400, 200);
await page.waitForTimeout(400);
const unmuted = await form();
if (unmuted === 'TfrmIntro') await page.touchscreen.tap(400, 200);
await waitForm('TfrmNewPlayer');
await page.waitForTimeout(500);
await shot('01-new-player');
await page.keyboard.type('Rick');
await tap('btnOk1');
await waitForm('TfrmMainScreen');
await page.waitForTimeout(600);
await shot('02-main');
record('new player by tap', true, { form: await form() });

// Rotate on a menu screen and tap on through in portrait.
await page.evaluate(() => window.__app.settings.set('fullscreen', false));
await page.setViewportSize({ width: 390, height: 844 });
await page.waitForTimeout(500);
await shot('03-main-portrait');
await tap('optQuickRace');
await tap('btnNext');
await waitForm('TfrmDifficulty');
await page.waitForTimeout(300);
await shot('04-difficulty-portrait');
await tap('btnNext');
await waitForm('TfrmQuickRace');
await page.waitForTimeout(400);
await tap('btnNextTrack');
await page.waitForTimeout(500);
await shot('05-quickrace-portrait');
record('portrait menu by tap', (await page.evaluate(() => window.__app.data.player.trackToDrive)) === 0, { track: await page.evaluate(() => window.__app.data.player.trackToDrive) });

// Back to landscape for the race.
await page.setViewportSize({ width: 844, height: 390 });
await page.waitForTimeout(400);
await tap('btnNext');
await page.waitForTimeout(500);
const info = await form();
await shot('06-start-info');
if (info !== 'race') await tap('btnOk1');
await waitForm('race', 30000);
await page.waitForFunction(() => window.__race && document.getElementById('loading').hidden, null, { timeout: 180000 });
await page.waitForTimeout(6000);
const wheel = await page.locator('#touch-wheel').boundingBox();
record('race starts with the wheel', wheel !== null, { wheel, device: await page.evaluate(() => window.__app.runner.input.device) });
await client.send('Input.dispatchTouchEvent', { type: 'touchStart', touchPoints: [{ x: wheel.x + wheel.width * 0.55, y: wheel.y + wheel.height * 0.08, id: 0 }] });
await page.waitForTimeout(5000);
const speed = await page.evaluate(() => {
  const r = window.__race;
  const { m } = r;
  return m.view.getFloat32(m.u32[0x715e50 >> 2] + m.i32[0x6fba58 >> 2] * 0xF0 + 0xC4, true);
});
await shot('07-race');
await client.send('Input.dispatchTouchEvent', { type: 'touchEnd', touchPoints: [] });
record('wheel drives the car', speed > 5, { speed });
await page.locator('#touch-quit').tap();
await page.waitForTimeout(500);
await shot('08-quit');
await page.locator('#dlg-yes').tap();
await waitForm('TfrmQuickRace', 15000);
await page.waitForTimeout(600);
await shot('09-back-in-menu');
const finished = await page.evaluate(() => window.__app.vfs.parsedIni('game.ini').get('PLAYER', 'FINISHED'));
record('Stop and Ja return to the menu, finished=0', finished === '0', { form: await form(), finished });

// The Tour's screens, by tap, up to the Garage. No race: verification stays on one level.
await tap('btnPrevious');
await waitForm('TfrmDifficulty');
await page.waitForTimeout(300);
await tap('btnPrevious');
await waitForm('TfrmMainScreen');
await page.waitForTimeout(300);
await tap('optTour');
await tap('btnNext');
const seen = [];
for (let k = 0; k < 10; k++) {
  await page.waitForTimeout(900);
  const f = await form();
  seen.push(f);
  await shot(`10-tour-${k}-${f}`);
  if (f === 'TfrmGarage') break;
  await tap('btnNext').catch((e) => seen.push(String(e.message).slice(0, 80)));
}
record('Tour screens by tap reach the Garage', seen.includes('TfrmGarage'), { seen });
record('no console errors', errors.length === 0, { errors: errors.length });
await browser.close();
const failed = Object.values(results).filter((r) => !r.ok).length;
console.log(`${Object.keys(results).length - failed} of ${Object.keys(results).length} checks passed`);
