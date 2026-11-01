#!/usr/bin/env node
// Walks the player-facing flow in a browser with real clicks, on one level: intro, new player,
// main screen, Quick Race on Amsterdam, a race driven by the bot, results, and back to the menu.
//   node tools/check-flow.mjs [--out evidence/flow] [--speed 4] [--timeout 900] [--keep-open]
import { mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const out = opt('out', 'evidence/flow');
const speed = Number(opt('speed', 8));
const timeout = Number(opt('timeout', 900)) * 1000;
const base = opt('url', 'http://127.0.0.1:4180/');
mkdirSync(out, { recursive: true });

const browser = await chromium.launch({
  headless: true,
  args: ['--autoplay-policy=no-user-gesture-required', '--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist', '--enable-unsafe-webgpu'],
});
const context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
const page = await context.newPage();
const errors = [];
page.on('console', (m) => {
  if (m.type() === 'error' || m.type() === 'warning') {
    errors.push(m.text());
    console.log(`  [${m.type()}]`, m.text().slice(0, 300));
  }
});
page.on('pageerror', (e) => {
  errors.push(e.message);
  console.log('  [pageerror]', e.message, (e.stack || '').split('\n').slice(0, 6).join(' | '));
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
const click = async (name) => {
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
  if (r.missing || r.blocked) throw new Error(`click ${name}: ${JSON.stringify(r)}`);
  await page.mouse.click(r.x, r.y);
  await page.waitForTimeout(350);
};
const shot = (name) => page.screenshot({ path: join(out, name + '.png') });
const say = (t) => console.log(t);

await page.goto(`${base}?bot=1&bench=1&speed=${speed}`);
await waitForm('TfrmIntro');
await page.waitForTimeout(1500);
await shot('01-intro');
say('intro plays');
await page.keyboard.press('Enter');
await waitForm('TfrmNewPlayer');
await page.waitForTimeout(600);
await page.keyboard.type('Rick');
await shot('02-new-player');
await page.keyboard.press('Enter');
await waitForm('TfrmMainScreen');
await page.waitForTimeout(800);
await shot('03-main');
say('new player made, main screen');
await click('optQuickRace');
await shot('04-main-quick');
await click('btnNext');
await waitForm('TfrmDifficulty');
await page.waitForTimeout(500);
await shot('05-difficulty');
await click('btnNext');
await waitForm('TfrmQuickRace');
await page.waitForTimeout(500);
await click('btnNextTrack');
await page.waitForTimeout(800);
await shot('06-quickrace-amsterdam');
say('quick race track: ' + (await page.evaluate(() => window.__app.data.player.trackToDrive)));
await click('btnNext');
await page.waitForTimeout(500);
const dlg = await form();
say('after Verder: ' + dlg);
await shot('07-start-info');
if (dlg !== 'race') {
  await click('btnOk1').catch(async () => click('btnOk'));
}
await waitForm('race', 20000);
say('race loading');
await page.waitForFunction(() => window.__race && window.__race.booted !== false && document.getElementById('loading').hidden, null, { timeout: 120000 });
await page.waitForTimeout(3000);
await shot('08-race-start');
const raceInfo = () => page.evaluate(() => {
  const b = window.__bot?.state;
  return { chunk: b?.chunk, speed: b?.speed && Math.round(b.speed), lap: window.__app.vfs.iniGet ? undefined : undefined };
});
const t0 = Date.now();
let shots = 0;
let last = 0;
for (;;) {
  const f = await form();
  if (f !== 'race') break;
  if (Date.now() - t0 > timeout) throw new Error('race did not end in time');
  if (Date.now() - last > 15000) {
    last = Date.now();
    console.log(`  ${Math.round((Date.now() - t0) / 1000)} s`, JSON.stringify(await raceInfo()));
    if (shots < 6) await shot(`09-race-${++shots}`);
  }
  await page.waitForTimeout(500);
}
say(`race ended after ${Math.round((Date.now() - t0) / 1000)} s real time`);
const gameIni = await page.evaluate(() => {
  const v = window.__app.vfs;
  const g = (k) => v.parsedIni('game.ini').get('PLAYER', k);
  return Object.fromEntries(['FINISHED', 'Out_Of_Time', 'Total_Loss', 'MONEY', 'TRACKTIME', 'LAP_1_TIME', 'LAP_2_TIME', 'LAP_3_TIME', 'DAMAGE'].map((k) => [k, g(k)]));
});
say('game.ini: ' + JSON.stringify(gameIni));
await page.waitForTimeout(1500);
const after = await form();
say('after race: ' + after);
await shot('10-after-race');
if (after === 'TfrmHighScoreDlg') {
  await page.keyboard.press('Enter');
  await page.waitForTimeout(1000);
  await shot('11-after-highscore');
  say('then: ' + (await form()));
}
if ((await form()) === 'TfrmResults') {
  await page.waitForTimeout(1500);
  await shot('12-results');
  await click('btnNext');
  await page.waitForTimeout(1000);
  say('after results: ' + (await form()));
  await shot('13-after-results');
}
const save = await page.evaluate(() => window.__app.vfs.list().filter((p) => /savegame/i.test(p)));
say('saves: ' + JSON.stringify(save));
say(`console errors and warnings: ${errors.length}`);
await browser.close();
