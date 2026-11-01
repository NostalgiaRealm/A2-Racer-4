#!/usr/bin/env node
// The 8-bit path through the real menu, on one level: 3D kaart off, Normaal and Laag, the original's
// enable rules in Opties and Weergave, a whole race by the bot at RESOLUTION 1 to its results, a
// short one at 0, and back on with the 3D card. Screenshots and a summary go to --out.
//   node tools/check-software.mjs [--out evidence/software/flow] [--speed 8] [--url http://127.0.0.1:4180/]
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const out = opt('out', 'evidence/software/flow');
const speed = Number(opt('speed', 8));
const base = opt('url', 'http://127.0.0.1:4180/');
mkdirSync(out, { recursive: true });
const results = {};
const record = (name, ok, detail) => {
  results[name] = { ok, detail };
  console.log(ok ? 'ok  ' : 'FAIL', name, JSON.stringify(detail));
};

const browser = await chromium.launch({
  headless: true,
  args: ['--autoplay-policy=no-user-gesture-required', '--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist'],
});
const page = await (await browser.newContext({ viewport: { width: 1280, height: 720 } })).newPage();
const errors = [];
page.on('console', (m) => {
  if (m.type() === 'error' || m.type() === 'warning') {
    errors.push(m.text());
    console.log(`  [${m.type()}]`, m.text().slice(0, 300));
  }
});
page.on('pageerror', (e) => {
  errors.push(e.message);
  console.log('  [pageerror]', e.message);
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
    if (!c) return { missing: Object.keys(f).filter((k) => /^(btn|opt|chk|lbl)/.test(k)) };
    for (let dy = 0.5; dy > 0.05; dy -= 0.1) {
      for (let dx = 0.5; dx > 0.05; dx -= 0.1) {
        const fx = c.x + c.w * dx;
        const fy = c.y + c.h * dy;
        if (c.hit(fx, fy) && f.topAt(fx, fy) === c) {
          const q = m.toScreenRect(f, fx, fy, 1, 1);
          return { x: q.x, y: q.y };
        }
      }
    }
    return { blocked: true };
  }, name);
  if (r.missing || r.blocked) throw new Error(`click ${name}: ${JSON.stringify(r)}`);
  await page.mouse.click(r.x, r.y);
  await page.waitForTimeout(350);
};
const shot = (name) => page.screenshot({ path: join(out, name + '.png') });
const options = () => page.evaluate(() => {
  const f = window.__app.menu.modals.at(-1);
  return {
    three: f.chkVideo3d.checked, low: f.optVideoLow.checked, medium: f.optVideoMedium.checked, high: f.optVideoHigh.checked,
    lowEnabled: f.optVideoLow.enabled, highEnabled: f.optVideoHigh.enabled, cardShown: f.imgVideo3d.visible,
  };
});
const raser = () => page.evaluate(() => window.__app.vfs.parsedIni('raser.ini').get('PROGRAM', 'RESOLUTION'));
const startQuickRace = async () => {
  await click('optQuickRace');
  await click('btnNext');
  await waitForm('TfrmDifficulty');
  await page.waitForTimeout(500);
  await click('btnNext');
  await waitForm('TfrmQuickRace');
  await page.waitForTimeout(500);
};
const go = async () => {
  await click('btnNext');
  await page.waitForTimeout(500);
  if ((await form()) !== 'race') await click('btnOk1').catch(async () => click('btnOk'));
  await waitForm('race', 20000);
  await page.waitForFunction(() => window.__race && document.getElementById('loading').hidden, null, { timeout: 120000 });
};
const backToMain = async () => {
  for (let k = 0; k < 4 && (await form()) !== 'TfrmMainScreen'; k++) {
    await click('btnPrevious');
    await page.waitForTimeout(800);
  }
  await waitForm('TfrmMainScreen', 10000);
};
const raceState = () => page.evaluate(() => {
  const r = window.__renderer;
  const c = window.__app.runner.effectiveSize;
  return { indexed: r.indexed, mode: [r.modeW, r.modeH], clipY: r.clipY, effective: [c.width, c.height], ticks: r.stats.ticksCaptured, verts: r.stats.verts };
});

await page.goto(`${base}?bot=1&bench=1&speed=${speed}`);
await waitForm('TfrmIntro');
await page.waitForTimeout(1500);
await page.keyboard.press('Enter');
await waitForm('TfrmNewPlayer');
await page.waitForTimeout(600);
await page.keyboard.type('Rick');
await page.keyboard.press('Enter');
await waitForm('TfrmMainScreen');
await page.waitForTimeout(800);

// Opties with a 3D card, as a new player has it.
await click('btnOptions');
await waitForm('TfrmOptions');
await page.waitForTimeout(500);
let o = await options();
record('options: starts with 3D kaart and Normaal, Laag off', o.three && o.medium && !o.lowEnabled && o.cardShown, o);
await shot('01-options-3d');
await click('chkVideo3d');
o = await options();
record('options: 3D kaart off opens Laag, Hoog stays off, picture of the card goes', !o.three && o.lowEnabled && !o.highEnabled && !o.cardShown, o);
await shot('02-options-no-3d');
await click('btnVideoAdvanced');
await waitForm('TfrmDisplaySettings');
await page.waitForTimeout(500);
const advanced = await page.evaluate(() => {
  const f = window.__app.menu.modals.at(-1);
  return Object.fromEntries(['chkMipMapping', 'btnBilinearFiltering', 'btnAlphaBlending', 'btnBrightnessLight', 'optLowDetail', 'optHighDetail'].map((k) => [k, f[k].enabled]));
});
record('Weergave: the 3D-only controls are off without 3D kaart', Object.values(advanced).every((v) => !v), advanced);
await shot('03-weergave-no-3d');
await click('btnCancel');
await waitForm('TfrmOptions');
await click('btnOk1');
await waitForm('TfrmMainScreen');
record('options: Normaal without 3D kaart writes RESOLUTION 1', (await raser()) === '1', { resolution: await raser() });

// A whole race at 640x480x8, by the bot.
await startQuickRace();
await click('btnNextTrack');
await page.waitForTimeout(800);
await go();
await page.waitForTimeout(2500);
let s = await raceState();
record('RESOLUTION 1: Ramp device, 640x480, view on the mode grid', s.indexed && s.mode[0] === 640 && s.effective[1] === 480, s);
await shot('04-race-640-start');
// Render scale acts on the world. The HUD stays on the mode's grid.
const scaled = await page.evaluate(async () => {
  const a = window.__app;
  const r = window.__renderer;
  a.settings.set('renderScale', 50);
  await new Promise((res) => requestAnimationFrame(res));
  const half = { world: [r.worldIndex8.width, r.worldIndex8.height], hud: [r.hud8.width, r.hud8.height], buffer: [r.three.getContext().drawingBufferWidth, r.three.getContext().drawingBufferHeight] };
  a.settings.set('renderScale', 100);
  await new Promise((res) => requestAnimationFrame(res));
  return { half, back: [r.worldIndex8.width, r.worldIndex8.height] };
});
record('RESOLUTION 1: render scale 50% halves the world only, and comes back', scaled.half.world[1] === 240 && scaled.half.hud[1] === 480 && scaled.back[1] === 480 && scaled.half.buffer[0] === 1280, scaled);
// The flitser's flash: entries 0 to 254 at 235 for one flip, FUN_0043b130.
await page.evaluate(() => {
  const r = window.__renderer;
  const next = r.nextColors.bind(r);
  window.__flash = { presents: 0, last: null };
  r.nextColors = () => {
    next();
    const d = r.colors.image.data;
    if (d[0] === 235 && d[4] === 235 && d[254 * 4] === 235) window.__flash.presents++;
    window.__flash.last = [d[0], d[4 * 15], d[4 * 255], d[4 * 255 + 2]];
  };
});
const t0 = Date.now();
let shots = 0;
let last = 0;
while ((await form()) === 'race') {
  if (Date.now() - t0 > 900000) throw new Error('race did not end in time');
  if (Date.now() - last > 15000) {
    last = Date.now();
    if (shots < 4) await shot(`05-race-640-${++shots}`);
  }
  await page.waitForTimeout(500);
}
const ini = await page.evaluate(() => {
  const g = (k) => window.__app.vfs.parsedIni('game.ini').get('PLAYER', k);
  return Object.fromEntries(['FINISHED', 'TRACKTIME', 'LAP_1_TIME', 'LAP_2_TIME'].map((k) => [k, g(k)]));
});
record('RESOLUTION 1: a whole race ends with the results written', ini.FINISHED === '1' && Number(ini.TRACKTIME) > 0, { ...ini, seconds: Math.round((Date.now() - t0) / 1000) });
const flash = await page.evaluate(() => window.__flash);
record('RESOLUTION 1: the flitser flashes the palette and it comes back', flash.presents > 0 && flash.last[0] === 0 && flash.last[1] === 255, flash);
await page.waitForTimeout(1500);
if ((await form()) === 'TfrmHighScoreDlg') {
  await page.keyboard.press('Enter');
  await page.waitForTimeout(1000);
}
await shot('06-after-race');
if ((await form()) === 'TfrmResults') {
  await click('btnNext');
  await page.waitForTimeout(1000);
}
record('RESOLUTION 1: back in the menu', (await form()) === 'TfrmQuickRace', { form: await form() });

// Laag: 320x200x8. A short race, then Esc and Ja.
await backToMain();
await click('btnOptions');
await waitForm('TfrmOptions');
await page.waitForTimeout(500);
o = await options();
record('options: a save at 1 shows 3D kaart off and Normaal', !o.three && o.medium && o.lowEnabled, o);
await click('optVideoLow');
await click('btnOk1');
await waitForm('TfrmMainScreen');
record('options: Laag writes RESOLUTION 0', (await raser()) === '0', { resolution: await raser() });
await startQuickRace();
await go();
await page.waitForTimeout(2500);
s = await raceState();
record('RESOLUTION 0: Ramp device, 320x200, clip 0.625, 200 rows', s.indexed && s.mode[0] === 320 && Math.abs(s.clipY - 0.625) < 1e-6 && s.effective[1] === 200, s);
await shot('07-race-320');
await page.waitForTimeout(6000);
await shot('08-race-320-later');
await page.keyboard.press('Escape');
await page.waitForTimeout(800);
await shot('09-quit-320');
await page.keyboard.press('j');
await page.waitForTimeout(500);
await page.keyboard.up('j');
for (let k = 0; k < 40 && (await form()) === 'race'; k++) await page.waitForTimeout(500);
record('RESOLUTION 0: quit by Esc and J returns to the menu', (await form()) !== 'race', { form: await form() });

// Back on, with a 3D card, in the same page: nothing of the 8-bit path may stay.
await page.waitForTimeout(1000);
if ((await form()) === 'TfrmResults') {
  await click('btnNext');
  await page.waitForTimeout(800);
}
await backToMain();
await click('btnOptions');
await waitForm('TfrmOptions');
await page.waitForTimeout(500);
await click('chkVideo3d');
o = await options();
record('options: 3D kaart on from Laag goes to Normaal', o.three && o.medium && !o.lowEnabled, o);
await click('btnOk1');
await waitForm('TfrmMainScreen');
record('options: writes RESOLUTION 3', (await raser()) === '3', { resolution: await raser() });
await startQuickRace();
await go();
await page.waitForTimeout(2500);
s = await raceState();
record('RESOLUTION 3 after the 8-bit path: normal device, native view', !s.indexed && s.mode[0] === 640 && s.effective[0] === 1280, s);
await shot('10-race-3d-again');
record('no console errors', errors.length === 0, { errors: errors.length, first: errors[0] });
writeFileSync(join(out, 'summary.json'), JSON.stringify(results, null, 1));
const failed = Object.values(results).filter((r) => !r.ok).length;
console.log(`${Object.keys(results).length - failed} of ${Object.keys(results).length} checks passed`);
await browser.close();
