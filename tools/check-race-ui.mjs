#!/usr/bin/env node
// Brief input, focus, settings and layout checks in a browser, on one level (etappe 0, Amsterdam).
// Each line prints what was measured; the summary goes to --out. docs/validation.md lists the
// results. Screenshots land next to the summary.
//   node tools/check-race-ui.mjs [--out evidence/race-ui/summary.json] [--url http://127.0.0.1:4180/] [--only touch,keyboard,touchsetting,results,gameover,gamepad,failure,intro]
import { mkdirSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { chromium } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const out = opt('out', 'evidence/race-ui/summary.json');
const dir = dirname(out);
const base = opt('url', 'http://127.0.0.1:4180/');
const only = opt('only', '');
const section = (name) => !only || only.split(',').includes(name);
mkdirSync(dir, { recursive: true });
const results = {};
const record = (name, ok, detail) => {
  results[name] = { ok, detail };
  console.log(ok ? 'ok  ' : 'FAIL', name, JSON.stringify(detail));
};

const browser = await chromium.launch({
  headless: true,
  args: ['--autoplay-policy=no-user-gesture-required', '--use-angle=vulkan', '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--ignore-gpu-blocklist'],
});

const STATE = `(() => {
  const r = window.__race;
  if (!r) return null;
  const m = r.m;
  const v = m.view;
  const car = m.u32[0x715e50 >> 2] + m.i32[0x6fba58 >> 2] * 0xF0;
  const a = window.__app;
  const i = a.runner.input;
  return {
    speed: v.getFloat32(car + 0xC4, true),
    steer: v.getFloat32(0x6fbabc, true),
    brake: v.getFloat32(0x6fbabc + 4, true),
    gas: v.getFloat32(0x6fbabc + 8, true),
    clock: r.clock.seconds,
    device: i ? i.device : null,
    touch: i ? { ...i.touch } : null,
    pad: i ? { ...i.pad } : null,
    suspended: a.runner.suspended,
    audio: a.audioContext ? a.audioContext.state : 'none',
    pause: r.pause ? r.pause.kind : 0,
    ended: r.ended,
    mode: a.mode,
    effective: a.runner.effectiveSize,
    drawing: [a.runner.renderer.three.getContext().drawingBufferWidth, a.runner.renderer.three.getContext().drawingBufferHeight],
    target: a.runner.renderer.renderTarget ? [a.runner.renderer.renderTarget.width, a.runner.renderer.renderTarget.height] : null,
    view: m.i32[0x599c80 >> 2],
    overlay: r.overlayState,
    gameState: m.i32[0x6fb8a0 >> 2],
    resetStamp: m.f32[0x5d1b00 >> 2],
    trackTime: m.call(0x448470, [3]),
    dashboard: m.i32[0x712784 >> 2],
    detail: m.i32[0x6fb924 >> 2],
  };
})()`;

async function openRace(page, query) {
  await page.goto(`${base}?race=1&bench=1${query}`);
  await page.waitForFunction(() => window.__race && window.__race.m && document.getElementById('loading').hidden, null, { timeout: 180000 });
}
function watch(page) {
  page.on('pageerror', (e) => console.log('  [pageerror]', e.message));
  page.on('console', (m) => {
    if (m.type() === 'error') console.log('  [console error]', m.text().slice(0, 200));
  });
  return page;
}
async function startRace(context, query) {
  const page = watch(await context.newPage());
  await openRace(page, query);
  return page;
}
const state = (page) => page.evaluate(STATE);
const wait = (page, s) => page.waitForTimeout(s * 1000);
// Game state 0: the countdown is over, so camera keys and the driving controls count.
const racing = (page) => page.waitForFunction(() => window.__race.m.i32[0x6fb8a0 >> 2] === 0, null, { timeout: 60000 });
const held = (page, id) => page.evaluate((i) => document.getElementById(i).classList.contains('held'), id);
const visible = (page, id) => page.locator('#' + id).isVisible();
const middle = (box, id) => ({ x: box.x + box.width / 2, y: box.y + box.height / 2, id });
// The game's own ways into its result screens: FUN_0044cda0 with state 3, and state 6 after a mode.
const toFinish = (page) => page.evaluate(() => window.__race.m.call(0x44cda0, [3]));
const toGameOver = (page) => page.evaluate(() => {
  const { m } = window.__race;
  m.u32[0x59a190 >> 2] = 0;
  m.call(0x44cda0, [6]);
});
const overlayIs = (page, n) => page.waitForFunction((k) => window.__race.overlayState === k, n, { timeout: 30000 });

/**
 * What is on screen at the current size, against the HUD's canvas rectangles (hud-overlay.md section
 * 9): no control over the Communicator, Speedometer, statistics or chase timer; in portrait all
 * controls below the view.
 */
const LAYOUT = `(() => {
  const unit = parseFloat(getComputedStyle(document.documentElement).getPropertyValue('--hud-unit'));
  const portrait = document.documentElement.classList.contains('race-portrait');
  const panelTop = parseFloat(getComputedStyle(document.documentElement).getPropertyValue('--panel-top'));
  const W = innerWidth;
  const H = portrait ? panelTop : innerHeight;
  const hud = window.__app.runner.host.hudLayout;
  const shift = (hud.leftShift / (2 * hud.xr)) * W;
  const parts = {
    speedometer: [W - 205 * unit, H - 178 * unit, W, H],
    communicator: [shift, H - 178 * unit, shift + 207.2 * unit, H],
    statistics: [W - 135 * unit, 0, W, 99 * unit],
    timer: [W / 2 + (211 - 320) * unit, 10 * unit, W / 2 + (441 - 320) * unit, 52 * unit],
  };
  const rects = {};
  for (const e of document.querySelectorAll('#touch-controls button, #touch-wheel, #race-settings')) {
    const r = e.getBoundingClientRect();
    if (r.width) rects[e.id] = [r.left, r.top, r.right, r.bottom];
  }
  const hits = [];
  for (const [id, a] of Object.entries(rects)) {
    if (a[0] < 0 || a[1] < 0 || a[2] > innerWidth || a[3] > innerHeight) hits.push(id + ' off screen');
    if (portrait && id !== 'race-settings' && a[1] < panelTop) hits.push(id + ' over the view');
    for (const [name, b] of Object.entries(parts)) {
      if (a[0] < b[2] && b[0] < a[2] && a[1] < b[3] && b[1] < a[3]) hits.push(id + ' on ' + name);
    }
    for (const [other, b] of Object.entries(rects)) {
      if (id < other && a[0] < b[2] - 1 && b[0] < a[2] - 1 && a[1] < b[3] - 1 && b[1] < a[3] - 1) hits.push(id + ' on ' + other);
    }
  }
  // The wheel is round: the fifth rank portrait may reach into its corner, not under its rim.
  const w = rects['touch-wheel'];
  const r = (w[2] - w[0]) / 2;
  const dx = w[0] + r - 70 * unit;
  const dy = w[1] + r - 292 * unit;
  if (!portrait && dx > 0 && dy > 0 && Math.hypot(dx, dy) < r - 1) hits.push('touch-wheel on rank portraits');
  return { hits, wheel: w, lifted: document.documentElement.classList.contains('actions-lifted') };
})()`;

// --- Touch, in the mobile profile ------------------------------------------------------------
if (section('touch')) {
  const context = await browser.newContext({ viewport: { width: 800, height: 360 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true });
  const page = await startRace(context, '');
  const client = await context.newCDPSession(page);
  await racing(page);
  const first = await state(page);
  record('touch: device 2 at race start, wheel shown', first.device === 2 && await page.locator('#touch-wheel').isVisible(), { device: first.device });
  const wheel = await page.locator('#touch-wheel').boundingBox();
  record('touch: wheel at the reference size', Math.abs(wheel.width - 158.4) < 0.5, { width: wheel.width });
  const turbo = await page.locator('#touch-turbo').boundingBox();
  const at = (fx, fy) => ({ x: wheel.x + wheel.width * fx, y: wheel.y + wheel.height * fy, id: 0 });
  const turboPoint = middle(turbo, 1);
  const touch = (type, touchPoints) => client.send('Input.dispatchTouchEvent', { type, touchPoints });
  await touch('touchStart', [at(0.5, 0.05)]);
  await wait(page, 4);
  const gas = await state(page);
  record('touch: wheel up is gas, car accelerates', gas.touch.gas && gas.speed > 5, { speed: gas.speed, gas: gas.gas });
  await touch('touchMove', [at(0.9, 0.05)]);
  await touch('touchStart', [at(0.9, 0.05), turboPoint]);
  await wait(page, 0.5);
  const both = await state(page);
  record('touch: steering and turbo together', both.touch.steer > 0.5 && (both.touch.buttons & 1) === 1 && both.touch.gas && both.steer !== 0, { steer: both.steer, wheel: both.touch.steer, buttons: both.touch.buttons });
  await page.screenshot({ path: join(dir, 'touch-landscape.png') });
  await touch('touchCancel', []);
  await wait(page, 0.2);
  const cancelled = await state(page);
  record('touch: cancel releases everything', !cancelled.touch.gas && !cancelled.touch.brake && cancelled.touch.steer === 0 && cancelled.touch.buttons === 0 && !(await held(page, 'touch-wheel')) && !(await held(page, 'touch-turbo')), { touch: cancelled.touch });
  await touch('touchStart', [at(0.5, 0.95)]);
  // Sampled, because the car may meet something behind it before the time is up.
  let backward = 0;
  for (let k = 0; k < 24; k++) {
    await wait(page, 0.25);
    backward = Math.min(backward, (await state(page)).speed);
  }
  const reverse = await state(page);
  record('touch: wheel down brakes, then reverses', reverse.touch.brake && backward < -1, { fastestBackward: backward, brake: reverse.brake });
  await touch('touchEnd', []);

  // Reset and look back with a second finger, the wheel held by the first: section 7's simultaneous input.
  const resetPoint = middle(await page.locator('#touch-reset').boundingBox(), 1);
  await touch('touchStart', [at(0.5, 0.05)]);
  await wait(page, 0.3);
  const beforeReset = await state(page);
  await touch('touchStart', [at(0.5, 0.05), resetPoint]);
  await wait(page, 0.4);
  const afterReset = await state(page);
  await touch('touchEnd', [resetPoint]);
  await wait(page, 0.2);
  const wheelStill = await state(page);
  record('touch: Reset places the car back, with the wheel held and still held after', afterReset.resetStamp !== beforeReset.resetStamp && afterReset.touch.gas && wheelStill.touch.gas && !(await held(page, 'touch-reset')), { stamp: [beforeReset.resetStamp, afterReset.resetStamp] });
  const lookPoint = middle(await page.locator('#touch-lookback').boundingBox(), 1);
  const viewBefore = (await state(page)).view;
  await touch('touchStart', [at(0.5, 0.05), lookPoint]);
  await wait(page, 0.3);
  const looking = await state(page);
  await touch('touchEnd', [lookPoint]);
  await wait(page, 0.3);
  const looked = await state(page);
  record('touch: Terugkijken holds view 4, the release restores', looking.view === 4 && looked.view === viewBefore && looked.touch.gas, { views: [viewBefore, looking.view, looked.view] });
  const handbrakePoint = middle(await page.locator('#touch-handbrake').boundingBox(), 2);
  await touch('touchStart', [at(0.5, 0.05), turboPoint, handbrakePoint]);
  await wait(page, 0.2);
  const three = await state(page);
  await touch('touchEnd', [turboPoint]);
  await wait(page, 0.2);
  const two = await state(page);
  record('touch: wheel, turbo and handbrake together, each lifted by itself', three.touch.gas && three.touch.buttons === 9 && two.touch.gas && two.touch.buttons === 8, { buttons: [three.touch.buttons, two.touch.buttons] });
  await touch('touchEnd', []);

  // The camera cycle follows the view in use.
  const cameraPoint = middle(await page.locator('#touch-camera').boundingBox(), 0);
  const views = [];
  for (let k = 0; k < 3; k++) {
    await touch('touchStart', [cameraPoint]);
    await touch('touchEnd', []);
    await wait(page, 0.2);
    views.push((await state(page)).view);
  }
  await page.keyboard.press('Digit4');
  await wait(page, 0.2);
  const fromKey = (await state(page)).view;
  await touch('touchStart', [cameraPoint]);
  await touch('touchEnd', []);
  await wait(page, 0.2);
  const afterKey = (await state(page)).view;
  record('touch: Camera goes through 2, 4, 1, and on from what a key chose', views[0] === 0 && views[1] === 3 && views[2] === viewBefore && fromKey === 3 && afterKey === viewBefore, { views, fromKey, afterKey });

  // Less used buttons behind Meer: their effect in the game's own state.
  const morePoint = middle(await page.locator('#touch-more').boundingBox(), 0);
  const extraHidden = !(await visible(page, 'touch-dashboard'));
  await touch('touchStart', [morePoint]);
  await touch('touchEnd', []);
  await wait(page, 0.1);
  const extraShown = await visible(page, 'touch-dashboard') && await visible(page, 'touch-taunt') && await visible(page, 'touch-detail');
  await page.screenshot({ path: join(dir, 'touch-more.png') });
  const tapOn = async (id) => {
    await touch('touchStart', [middle(await page.locator('#' + id).boundingBox(), 0)]);
    await wait(page, 0.1);
    const during = await page.evaluate(() => [...window.__app.runner.input.dik].map((v, k) => (v ? k : -1)).filter((k) => k >= 0));
    await touch('touchEnd', []);
    await wait(page, 0.1);
    return during;
  };
  const dash0 = (await state(page)).dashboard;
  await tapOn('touch-dashboard');
  const dash1 = (await state(page)).dashboard;
  await tapOn('touch-dashboard');
  const dash2 = (await state(page)).dashboard;
  const detail0 = (await state(page)).detail;
  await tapOn('touch-detail');
  const detail1 = (await state(page)).detail;
  await tapOn('touch-detail');
  const detail2 = (await state(page)).detail;
  const tauntKeys = await tapOn('touch-taunt');
  record('touch: Meer shows Roepen, Dashboard and Detail, which work', extraHidden && extraShown && dash1 !== dash0 && dash2 === dash0 && detail1 !== detail0 && detail2 !== detail1 && tauntKeys.includes(0x14), { dashboard: [dash0, dash1, dash2], detail: [detail0, detail1, detail2], tauntKeys });
  await touch('touchStart', [morePoint]);
  await touch('touchEnd', []);

  // A right click is no press, as in the reference.
  const box = await page.locator('#touch-turbo').boundingBox();
  await page.mouse.move(box.x + 10, box.y + 10);
  await page.mouse.down({ button: 'right' });
  const rightClick = await state(page);
  await page.mouse.up({ button: 'right' });
  record('touch: a right mouse button presses no on-screen control', rightClick.touch.buttons === 0, { buttons: rightClick.touch.buttons });

  // Focus loss, with one touch held when it happens.
  await touch('touchStart', [at(0.5, 0.05)]);
  await wait(page, 0.5);
  await page.evaluate(() => window.dispatchEvent(new Event('blur')));
  await wait(page, 0.2);
  const lost = await state(page);
  await wait(page, 2);
  const stillLost = await state(page);
  record('focus: clock stops, sound suspends, input clears', stillLost.clock === lost.clock && lost.suspended && stillLost.audio === 'suspended' && !lost.touch.gas && !(await held(page, 'touch-wheel')), { clock: [lost.clock, stillLost.clock], audio: stillLost.audio });
  await touch('touchEnd', []);
  await page.evaluate(() => window.dispatchEvent(new Event('focus')));
  await wait(page, 1);
  const back = await state(page);
  const jump = back.clock - stillLost.clock;
  record('focus: resumes without a jump', !back.suspended && jump > 0.5 && jump < 1.6 && back.audio === 'running', { clockAfter1s: jump, audio: back.audio });

  // Tab hidden and shown.
  await page.evaluate(() => {
    Object.defineProperty(document, 'hidden', { value: true, configurable: true });
    document.dispatchEvent(new Event('visibilitychange'));
  });
  const hid = await state(page);
  await wait(page, 1);
  const hid2 = await state(page);
  await page.evaluate(() => {
    Object.defineProperty(document, 'hidden', { value: false, configurable: true });
    document.dispatchEvent(new Event('visibilitychange'));
  });
  await wait(page, 0.5);
  const shown = await state(page);
  record('hidden tab: clock stops and resumes', hid.suspended && hid.clock === hid2.clock && !shown.suspended && shown.clock - hid2.clock < 1.2, { hidden: hid2.clock - hid.clock, after: shown.clock - hid2.clock });

  // A second finger opens the panel, while the first holds the wheel: no click comes for that finger.
  const gearPoint = middle(await page.locator('#race-settings').boundingBox(), 1);
  await touch('touchStart', [at(0.5, 0.05)]);
  await wait(page, 0.2);
  await touch('touchStart', [at(0.5, 0.05), gearPoint]);
  await touch('touchEnd', [gearPoint]);
  await wait(page, 0.2);
  const secondFinger = await page.locator('#settings-panel').isVisible();
  const panelHold = await state(page);
  record('settings: gear works with a second finger, and the panel releases the wheel', secondFinger && !panelHold.touch.gas && !(await held(page, 'touch-wheel')), { open: secondFinger, gas: panelHold.touch.gas });
  await touch('touchEnd', []);
  await page.locator('#set-volume').tap();
  await wait(page, 0.2);
  const heldSound = await state(page);
  record('settings: touching the panel does not start the sound again', heldSound.audio === 'suspended', { audio: heldSound.audio });
  const volume = await page.evaluate(() => {
    const a = window.__app;
    a.settings.set('volume', 50);
    const half2 = a.masterGain.gain.value;
    a.settings.set('volume', 100);
    return [half2, a.masterGain.gain.value, a.runner.audio.master.gain.value];
  });
  record('settings: Volume sets the master gain, once', volume[0] === 0.5 && volume[1] === 1 && volume[2] === 1, { volume });
  await page.locator('#set-close').tap();
  await wait(page, 0.3);
  const closedSound = await state(page);
  record('settings: closing the panel does', closedSound.audio === 'running', { audio: closedSound.audio });

  // Settings during a race, then a restart.
  const native = await state(page);
  record('settings: Auto at 100% gives 1600x720', native.effective.width === 1600 && native.effective.height === 720 && native.drawing[0] === 1600, { effective: native.effective, drawing: native.drawing, target: native.target });
  await page.locator('#race-settings').tap();
  await page.selectOption('#set-res', '480');
  await page.locator('#set-scale').fill('50');
  const half = await state(page);
  const text = await page.locator('#set-effective').textContent();
  record('settings: 480p at 50% applies at once, drawing buffer stays native', half.effective.height === 240 && half.effective.width === 533 && half.target && half.target[1] === 240 && half.drawing[0] === 1600, { effective: half.effective, target: half.target, text });
  await page.screenshot({ path: join(dir, 'settings-480p-50.png') });
  await page.locator('#set-close').tap();
  await wait(page, 0.5);
  await page.screenshot({ path: join(dir, 'race-480p-50.png') });
  await page.reload();
  await page.waitForFunction(() => window.__race && window.__race.m && document.getElementById('loading').hidden, null, { timeout: 180000 });
  await wait(page, 1);
  const reloaded = await state(page);
  record('settings: survive a restart', reloaded.effective.height === 240 && reloaded.target && reloaded.target[1] === 240, { effective: reloaded.effective });
  await page.evaluate(() => {
    const s = window.__app.settings;
    s.set('resolution', 'auto');
    s.set('renderScale', 200);
    window.__app.runner.layout();
  });
  await wait(page, 0.5);
  const big = await state(page);
  record('settings: Auto at 200% renders 3200x1440', big.effective.width === 3200 && big.target && big.target[0] === 3200, { effective: big.effective, target: big.target, drawing: big.drawing });
  // A device that allows less: the size stays within it and the panel says so.
  const limited = await page.evaluate(() => {
    const r = window.__app.runner;
    Object.defineProperty(r.renderer, 'maxTextureSize', { value: 2048, configurable: true });
    r.layout();
    r.panel.open(r.effectiveSize);
    const line = document.getElementById('set-effective').textContent;
    r.panel.close();
    delete r.renderer.maxTextureSize;
    return { size: r.effectiveSize, line };
  });
  record('settings: the GPU limit is applied and shown', limited.size.width === 2048 && limited.size.limited && limited.line.includes('GPU-limiet'), limited);
  await page.evaluate(() => {
    const s = window.__app.settings;
    s.set('renderScale', 100);
    window.__app.runner.layout();
  });

  // Orientation change during a race, with a finger on the wheel when it happens. Playwright
  // cannot resize a full-screen window, so that is left: the keyboard section has its own checks.
  await page.evaluate(() => window.__app.settings.set('fullscreen', false));
  await racing(page);
  await touch('touchStart', [at(0.5, 0.05)]);
  await wait(page, 0.2);
  const heldBefore = await state(page);
  await page.setViewportSize({ width: 360, height: 800 });
  await wait(page, 1);
  const tall = await state(page);
  const tallWheel = await page.locator('#touch-wheel').boundingBox();
  await page.screenshot({ path: join(dir, 'touch-portrait.png') });
  record('orientation: portrait keeps the controls on screen', tallWheel.y + tallWheel.height <= 800 && tall.effective.width === 720, { effective: tall.effective, wheel: tallWheel });
  record('orientation: the gesture ends with the rotation', heldBefore.touch.gas && !tall.touch.gas && !(await held(page, 'touch-wheel')), { before: heldBefore.touch.gas, after: tall.touch.gas });
  await touch('touchEnd', []);
  await page.setViewportSize({ width: 800, height: 360 });
  await wait(page, 1);
  const wide = await state(page);
  record('orientation: back to landscape', wide.effective.width === 1600 && wide.effective.height === 720, { effective: wide.effective });

  // Nothing important covered, at the sizes that matter. Near-square uses the same rule throughout.
  for (const [w, h] of [[800, 360], [640, 360], [1024, 768], [360, 800], [800, 880], [844, 390], [390, 844], [360, 640]]) {
    await page.setViewportSize({ width: w, height: h });
    await wait(page, 0.6);
    const layout = await page.evaluate(LAYOUT);
    await page.screenshot({ path: join(dir, `layout-${w}x${h}.png`) });
    record(`layout: ${w}x${h} covers nothing important`, layout.hits.length === 0, layout);
  }
  await context.close();
}

// --- Keyboard on a desktop profile -----------------------------------------------------------
if (section('keyboard')) {
  const context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
  const page = await startRace(context, '');
  const cursor = () => page.evaluate(() => getComputedStyle(document.getElementById('game')).cursor);
  const hiddenAtStart = await cursor();
  await racing(page);
  const s0 = await state(page);
  record('keyboard: device 1', s0.device === 1, { device: s0.device });
  await page.mouse.move(640, 300);
  await page.mouse.move(650, 310);
  const moved = await cursor();
  await wait(page, 2.3);
  const idle = await cursor();
  record('pointer: none over the race, back for 2 s on a move', hiddenAtStart === 'none' && moved !== 'none' && idle === 'none', { hiddenAtStart, moved, idle });
  await page.keyboard.down('ArrowUp');
  await wait(page, 4);
  const gas = await state(page);
  record('keyboard: gas', gas.speed > 5 && gas.gas > 50, { speed: gas.speed, gas: gas.gas });
  // The race clocks start at a trigger on the road, S:0x457ab0.
  await page.waitForFunction(() => window.__race.m.call(0x448470, [3]) > 0, null, { timeout: 30000 });
  await page.keyboard.down('ArrowLeft');
  await wait(page, 0.4);
  const left = await state(page);
  record('keyboard: steering', left.steer !== 0, { steer: left.steer });
  await page.keyboard.up('ArrowLeft');
  await page.keyboard.up('ArrowUp');

  // The picture stays on one frame under a dialog, whatever the display rate.
  await page.evaluate(() => {
    const r = window.__renderer;
    r.alphas = [];
    r.presentPlain = r.present;
    r.present = function present(alpha) {
      if (window.__race.pause) this.alphas.push(alpha);
      return this.presentPlain(alpha);
    };
  });
  await page.keyboard.press('KeyP');
  await wait(page, 0.5);
  const paused = await state(page);
  await wait(page, 1);
  const paused2 = await state(page);
  await page.screenshot({ path: join(dir, 'pause.png') });
  record('pause: P stops the race clocks, the wall clock runs on', paused.pause === 1 && paused.trackTime > 0 && paused.trackTime === paused2.trackTime && paused2.clock > paused.clock + 0.5, { trackTime: [paused.trackTime, paused2.trackTime], clock: [paused.clock, paused2.clock] });
  const alphas = await page.evaluate(() => window.__renderer.alphas);
  record('pause: the picture stays still', alphas.length > 10 && alphas.every((a) => a === 1), { frames: alphas.length, distinct: [...new Set(alphas)] });
  await page.keyboard.down('Shift');
  await wait(page, 0.2);
  const shiftAlone = await state(page);
  await page.keyboard.press('Space');
  await wait(page, 0.2);
  const shiftSpace = await state(page);
  await page.keyboard.up('Shift');
  await wait(page, 0.1);
  record('pause: Shift alone resumes nothing, and masks other keys', shiftAlone.pause === 1 && shiftSpace.pause === 1, { pause: [shiftAlone.pause, shiftSpace.pause] });
  const pausedLong = await state(page);
  await page.keyboard.press('Space');
  await wait(page, 0.5);
  const resumed = await state(page);
  record('pause: any key resumes, and the race clock goes on from where it stood', resumed.pause === 0 && resumed.clock > paused2.clock && resumed.trackTime >= pausedLong.trackTime && resumed.trackTime < pausedLong.trackTime + 1000, { pause: resumed.pause, trackTime: [pausedLong.trackTime, resumed.trackTime] });
  await page.keyboard.press('KeyP');
  await wait(page, 0.3);
  await page.mouse.click(640, 300, { button: 'right' });
  await wait(page, 0.3);
  const mouseResumed = await state(page);
  await page.keyboard.press('KeyP');
  await wait(page, 0.3);
  const pausedAgain = await state(page);
  await page.mouse.move(640, 300);
  await page.mouse.down();
  await wait(page, 0.2);
  const buttonDown = await state(page);
  await page.mouse.up();
  await wait(page, 0.3);
  const buttonUp = await state(page);
  record('pause: a mouse button on the race resumes, once released', mouseResumed.pause === 0 && pausedAgain.pause === 1 && buttonDown.pause === 1 && buttonUp.pause === 0, { after: [mouseResumed.pause, pausedAgain.pause, buttonDown.pause, buttonUp.pause] });
  await page.keyboard.press('Escape');
  await wait(page, 0.5);
  const quit = await state(page);
  await page.screenshot({ path: join(dir, 'quit-dialog.png') });
  await page.keyboard.down('Shift');
  await page.keyboard.press('KeyJ');
  await wait(page, 0.2);
  const shiftJ = await state(page);
  await page.keyboard.up('Shift');
  await page.keyboard.down('KeyN');
  await wait(page, 0.5);
  const keptWhileHeld = await state(page);
  await page.keyboard.up('KeyN');
  await wait(page, 0.2);
  record('quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release', quit.pause === 2 && shiftJ.pause === 2 && !shiftJ.ended && keptWhileHeld.pause === 0 && !keptWhileHeld.ended, { asked: quit.pause, shiftJ: shiftJ.pause, afterN: keptWhileHeld.pause });

  // Browser chords: the game's unless reload, developer tools or a Command key.
  const chords = await page.evaluate(() => {
    const prevented = (init) => {
      const e = new KeyboardEvent('keydown', { cancelable: true, bubbles: true, ...init });
      window.dispatchEvent(e);
      const up = new KeyboardEvent('keyup', { cancelable: true, bubbles: true, ...init });
      window.dispatchEvent(up);
      return e.defaultPrevented;
    };
    return {
      turboKeys: ['Digit5', 'KeyD', 'KeyT'].map((code) => prevented({ code, ctrlKey: true })),
      browser: [{ code: 'KeyR', ctrlKey: true }, { code: 'KeyI', ctrlKey: true, shiftKey: true }, { code: 'F5' }, { code: 'F11' }, { code: 'F12' }].map(prevented),
    };
  });
  record('keyboard: turbo chords stay in the game, browser keys stay with the browser', chords.turboKeys.every(Boolean) && !chords.browser.some(Boolean), chords);

  // A held key that auto-repeats is seen, an up and down within one tick stays down, Shift is not spun out.
  const edge = await page.evaluate(() => {
    const i = window.__app.runner.input;
    i.clear();
    window.dispatchEvent(new KeyboardEvent('keydown', { code: 'KeyB', repeat: true, cancelable: true }));
    const repeat = i.vk[0x42] === 1;
    i.keyEvent('KeyB', false);
    i.keyEvent('KeyB', true);
    const again = i.latched.length === 0 && i.vk[0x42] === 1;
    i.clear();
    i.keyEvent('ShiftLeft', true);
    let shift = true;
    for (let k = 0; k < 20; k++) shift = i.keyDown(0x10);
    i.clear();
    return { repeat, again, shift };
  });
  record('keyboard: repeat of an unseen key, re-press in a tick, Shift read every time', edge.repeat && edge.again && edge.shift, edge);

  // A forearm on the keys: the game's list of active commands would throw at 32.
  const forearm = 'QWERTYUIOSFGHKLZXCVBM'.split('').map((c) => 'Key' + c).concat(['Tab', 'CapsLock', 'Comma', 'Period', 'Slash', 'Semicolon', 'Quote', 'BracketLeft', 'BracketRight', 'Backslash', 'Minus', 'Equal', 'Backquote', 'Insert', 'Delete', 'Home', 'End', 'PageUp', 'PageDown']);
  await page.evaluate((codes) => {
    const i = window.__app.runner.input;
    for (const c of codes) i.keyEvent(c, true);
  }, forearm);
  await wait(page, 0.5);
  await page.evaluate((codes) => {
    const i = window.__app.runner.input;
    for (const c of codes) i.keyEvent(c, false);
  }, forearm);
  await wait(page, 0.3);
  const armed = await state(page);
  record(`keyboard: ${forearm.length} keys held do not end the race`, !armed.ended, { ended: armed.ended, keys: forearm.length });

  // The panel takes the keyboard while it is open.
  await page.keyboard.press('F9');
  await wait(page, 0.1);
  const focusInside = await page.evaluate(() => document.getElementById('settings-panel').contains(document.activeElement));
  await page.keyboard.press('KeyP');
  await page.keyboard.down('Escape');
  await wait(page, 0.1);
  const closedByEsc = !(await page.locator('#settings-panel').isVisible());
  // Auto-repeat of that Esc after the panel closed.
  await page.evaluate(() => window.dispatchEvent(new KeyboardEvent('keydown', { code: 'Escape', repeat: true, cancelable: true })));
  await wait(page, 0.3);
  const afterPanel = await state(page);
  await page.keyboard.up('Escape');
  await wait(page, 0.2);
  record('settings: F9 opens with the focus inside, keys stay out of the race, Esc closes', focusInside && closedByEsc && afterPanel.pause === 0, { focusInside, closedByEsc, pause: afterPanel.pause });

  // A pad that turns up during a keyboard race, and goes again.
  await page.evaluate(() => {
    window.__padList = [{ connected: true, mapping: 'standard', id: 'test', index: 0, axes: [0, 0, 0, 0], buttons: Array.from({ length: 17 }, () => ({ pressed: false, touched: false, value: 0 })) }];
    navigator.getGamepads = () => window.__padList;
  });
  await wait(page, 0.3);
  const note = await page.locator('#status').textContent();
  await page.evaluate(() => {
    window.__padList = [];
  });
  await wait(page, 0.3);
  const padGone = await state(page);
  await page.keyboard.press('Space');
  await wait(page, 0.3);
  record('gamepad: found in a keyboard race gives a note, lost pauses', note.includes('volgende race') && padGone.pause === 1, { note, pause: padGone.pause });

  // Full screen: on at the first gesture, out when the player leaves, in again when set again.
  const fullscreen = () => page.evaluate(() => ({ inside: Boolean(document.fullscreenElement), setting: window.__app.settings.get('fullscreen'), stop: !document.getElementById('race-stop').hidden }));
  const fsOn = await fullscreen();
  record('full screen: on at the first gesture, with Stop for the mouse', fsOn.inside && fsOn.setting && fsOn.stop, fsOn);
  await page.locator('#race-stop').click();
  await wait(page, 0.4);
  const stopped = await state(page);
  const answers = await visible(page, 'dlg-no');
  await page.locator('#dlg-no').click();
  await wait(page, 0.4);
  const answered = await state(page);
  record('full screen: Stop asks, and Nee answers on screen', stopped.pause === 2 && answers && answered.pause === 0, { asked: stopped.pause, answers, after: answered.pause });
  await page.evaluate(() => document.exitFullscreen());
  await wait(page, 0.4);
  const left2 = await fullscreen();
  const prompt = await state(page);
  await page.keyboard.press('KeyN');
  await wait(page, 0.3);
  await page.mouse.click(640, 300);
  await wait(page, 0.3);
  const stayed = await fullscreen();
  record('full screen: leaving opens the quit prompt, and it stays off', !left2.inside && !left2.setting && !left2.stop && prompt.pause === 2 && !stayed.inside, { left: left2, prompt: prompt.pause, stayed });
  await page.evaluate(() => window.__app.settings.set('fullscreen', true));
  await wait(page, 0.4);
  const reentered = await fullscreen();
  record('full screen: setting it again enters', reentered.inside, reentered);

  await page.keyboard.press('Escape');
  await wait(page, 0.3);
  await page.keyboard.press('KeyJ');
  await wait(page, 1);
  const ended = await page.evaluate(() => window.__race.ended);
  const finished = await page.evaluate(() => window.__app.vfs.parsedIni('game.ini').get('PLAYER', 'FINISHED'));
  record('quit dialog: J ends the race, finished=0', ended && finished === '0', { ended, finished });
  await context.close();
}

// --- The Aanraakbediening setting, across a restart and during a race ----------------------------
if (section('touchsetting')) {
  const preset = (touch) => {
    localStorage.setItem('a2racer4.settings', JSON.stringify({ touch, fullscreen: false }));
  };
  // On, on a desktop: the wheel takes the mouse and the race binds the virtual joystick.
  let context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
  await context.addInitScript(preset, 'on');
  let page = await startRace(context, '');
  await racing(page);
  const on = await state(page);
  const box = await page.locator('#touch-wheel').boundingBox();
  await page.mouse.move(box.x + box.width / 2, box.y + 8);
  await page.mouse.down();
  await wait(page, 0.3);
  const mouse = await state(page);
  await page.mouse.up();
  record('touch setting: on gives the wheel on a desktop, and a mouse drives it', on.device === 2 && mouse.touch.gas, { device: on.device, gas: mouse.touch.gas });
  await page.evaluate(() => window.__app.settings.set('touch', 'off'));
  await wait(page, 0.2);
  const hidden = !(await visible(page, 'touch-wheel'));
  await page.evaluate(() => window.__app.settings.set('touch', 'on'));
  await wait(page, 0.2);
  const back = await visible(page, 'touch-wheel');
  record('touch setting: off and on again during a race', hidden && back, { hidden, back });
  await context.close();
  // Off, on a phone: no controls, and the keyboard device. It cannot come on during this race.
  context = await browser.newContext({ viewport: { width: 800, height: 360 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true });
  await context.addInitScript(preset, 'off');
  page = await startRace(context, '');
  await racing(page);
  const off = await state(page);
  const wheelOff = !(await visible(page, 'touch-wheel'));
  await page.evaluate(() => window.__app.settings.set('touch', 'on'));
  await wait(page, 0.2);
  const note = await page.locator('#status').textContent();
  const stillOff = !(await visible(page, 'touch-wheel'));
  record('touch setting: off on a phone gives device 1, and on waits for the next race', off.device === 1 && wheelOff && stillOff && note.includes('volgende race'), { device: off.device, note });
  await context.close();
}

// --- Result screens on touch, and the wait for release at the end ------------------------------
if (section('results')) {
  const context = await browser.newContext({ viewport: { width: 800, height: 360 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true });
  const page = await startRace(context, '');
  const client = await context.newCDPSession(page);
  const touch = (type, touchPoints) => client.send('Input.dispatchTouchEvent', { type, touchPoints });
  await racing(page);
  const before = await visible(page, 'dlg-results');
  await toFinish(page);
  await overlayIs(page, 5);
  await wait(page, 0.2);
  await page.screenshot({ path: join(dir, 'finish-touch.png') });
  const shown = await visible(page, 'dlg-results');
  const wheelGone = !(await visible(page, 'touch-wheel')) && !(await visible(page, 'touch-turbo')) && !(await visible(page, 'touch-camera'));
  record('finish: wheel and actions gone, Verder shown', !before && shown && wheelGone, { before, shown, wheelGone });
  await touch('touchStart', [middle(await page.locator('#dlg-results').boundingBox(), 0)]);
  await wait(page, 0.4);
  const pressed = await state(page);
  await page.screenshot({ path: join(dir, 'finish-held.png') });
  await touch('touchEnd', []);
  await wait(page, 0.5);
  const finished = await page.evaluate(() => ({ mode: window.__app.mode, value: window.__app.vfs.parsedIni('game.ini').get('PLAYER', 'FINISHED'), controls: !document.getElementById('touch-controls').hidden, keys: !document.getElementById('dialog-keys').hidden, classes: document.documentElement.className }));
  record('finish: Verder ends the race, which waits for the finger to lift', pressed.ended && pressed.mode === 'race' && finished.mode === 'menu' && finished.value === '1' && !finished.controls && !finished.keys && finished.classes === '', { pressed: [pressed.ended, pressed.mode], finished });
  await context.close();
}

// --- Game over on the keyboard: a held key does not reach the menu ------------------------------
if (section('gameover')) {
  const context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
  const page = await startRace(context, '');
  await racing(page);
  await toGameOver(page);
  await overlayIs(page, 6);
  await wait(page, 1.2);
  await page.keyboard.down('Enter');
  await wait(page, 0.5);
  const heldEnd = await state(page);
  await page.keyboard.up('Enter');
  await wait(page, 0.4);
  const back = await page.evaluate(() => ({ mode: window.__app.mode, ignoreRepeat: window.__app.menu.ignoreRepeat }));
  record('game over: Enter ends it, the race waits for its release, and the menu ignores repeats', heldEnd.ended && heldEnd.mode === 'race' && back.mode === 'menu' && back.ignoreRepeat === true, { held: [heldEnd.ended, heldEnd.mode], back });
  await context.close();
}

// --- Gamepad, with a stand-in for navigator.getGamepads ---------------------------------------
if (section('gamepad')) {
  const context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
  await context.addInitScript(() => {
    const button = () => ({ pressed: false, touched: false, value: 0 });
    window.__pad = { connected: true, mapping: 'standard', id: 'test', index: 0, axes: [0, 0, 0, 0], buttons: Array.from({ length: 17 }, button) };
    window.__padList = [window.__pad];
    navigator.getGamepads = () => window.__padList;
  });
  const page = await startRace(context, '');
  const padButton = (n, value) => page.evaluate(([k, v]) => {
    window.__pad.buttons[k].value = v;
  }, [n, value]);
  const padAxis = (n, value) => page.evaluate(([k, v]) => {
    window.__pad.axes[k] = v;
  }, [n, value]);
  await racing(page);
  const s0 = await state(page);
  record('gamepad: connected at start selects device 2', s0.device === 2, { device: s0.device });
  await padButton(7, 1);
  await padAxis(0, 0.09);
  await wait(page, 4);
  const gas = await state(page);
  record('gamepad: right trigger is gas, small stick stays in the deadzone', gas.pad.active && gas.speed > 5 && gas.pad.steer === 0, { speed: gas.speed, steer: gas.pad.steer });
  await padAxis(0, -1);
  await wait(page, 0.4);
  const left = await state(page);
  record('gamepad: analog steering', left.pad.steer === -1 && left.steer !== 0, { steer: left.steer });
  await padAxis(0, 0);
  await page.evaluate(() => window.__app.settings.set('deadzone', 0.5));
  await padAxis(0, 0.4);
  await wait(page, 0.2);
  const dead = await state(page);
  await page.evaluate(() => window.__app.settings.set('deadzone', 0.18));
  await wait(page, 0.2);
  const alive = await state(page);
  await padAxis(0, 0);
  record('gamepad: the deadzone follows the setting', dead.pad.steer === 0 && alive.pad.steer > 0, { at50: dead.pad.steer, at18: alive.pad.steer });
  await padButton(7, 0);

  // The added actions.
  const stampBefore = (await state(page)).resetStamp;
  await padButton(10, 1);
  await wait(page, 0.2);
  await padButton(10, 0);
  await wait(page, 0.2);
  const stampAfter = (await state(page)).resetStamp;
  record('gamepad: left stick click resets the car', stampAfter !== stampBefore, { stamp: [stampBefore, stampAfter] });
  const viewBefore = (await state(page)).view;
  await padButton(11, 1);
  await wait(page, 0.3);
  const looking = (await state(page)).view;
  await padButton(11, 0);
  await wait(page, 0.3);
  const looked = (await state(page)).view;
  record('gamepad: right stick click holds the view behind', looking === 4 && looked === viewBefore, { views: [viewBefore, looking, looked] });
  await page.evaluate(() => {
    const i = window.__app.runner.input;
    window.__pulses = [];
    const plain = i.pulseVk;
    i.pulseVk = function pulseVk(vk) {
      window.__pulses.push(vk);
      plain.call(this, vk);
    };
  });
  await padButton(12, 1);
  await wait(page, 0.2);
  await padButton(12, 0);
  await wait(page, 0.2);
  const pulses = await page.evaluate(() => window.__pulses);
  await padButton(13, 1);
  await wait(page, 0.3);
  const dpadBrake = await state(page);
  await padButton(13, 0);
  await padAxis(1, 1);
  await wait(page, 0.3);
  const stickBrake = await state(page);
  await padAxis(1, 0);
  record('gamepad: D-pad up calls, D-pad down and stick down brake', pulses.includes(0x54) && dpadBrake.pad.brake && dpadBrake.brake > 0 && stickBrake.pad.brake && stickBrake.brake > 0, { pulses, dpad: dpadBrake.brake, stick: stickBrake.brake });

  // The player's own keys in this joystick session, with the original's ramps.
  const keys = await page.evaluate(() => {
    const i = window.__app.runner.input;
    const run = (ticks) => {
      for (let k = 0; k < ticks; k++) i.updateJoystick(1 / 60);
      return i.steer;
    };
    const saved = { ...i.keys };
    i.clear();
    i.vk[0x25] = 1;
    const leftLock = run(30);
    i.vk[0x25] = 0;
    i.vk[0x27] = 1;
    const halfway = run(15);
    const rightLock = run(15);
    i.clear();
    i.keys.extra3 = 0x48;
    i.vk[0x48] = 1;
    run(1);
    const horn = i.buttons & 2;
    i.clear();
    i.keys.left = 0x41;
    i.vk[0x41] = 1;
    const ownLeft = run(30);
    i.clear();
    i.vk[0x64] = 1;
    i.keys = saved;
    const numpad = run(30);
    i.clear();
    return { leftLock, halfway, rightLock, horn, ownLeft, numpad };
  });
  record('gamepad session: the keyboard uses the player\'s keys, with lock to lock in 0.5 s', Math.abs(keys.leftLock + 1) < 1e-6 && Math.abs(keys.halfway) < 1e-6 && Math.abs(keys.rightLock - 1) < 1e-6 && keys.horn === 2 && Math.abs(keys.ownLeft + 1) < 1e-6 && Math.abs(keys.numpad + 1) < 1e-6, keys);

  // A device without the standard mapping: its buttons by number, as the game binds them.
  await page.evaluate(() => {
    window.__pad.mapping = '';
  });
  await padButton(2, 1);
  await padButton(3, 1);
  await padButton(0, 1);
  await padAxis(1, 1);
  await wait(page, 0.2);
  const plain = await state(page);
  await padButton(2, 0);
  await padButton(3, 0);
  await padButton(0, 0);
  await padAxis(1, 0);
  await page.evaluate(() => {
    window.__pad.mapping = 'standard';
  });
  record('gamepad: a non-standard device goes by button number', plain.pad.gas && plain.pad.handbrake && plain.pad.turbo && plain.pad.brake, { pad: plain.pad });

  // Lost with buttons held: nothing stays on, and the race pauses.
  await padButton(2, 1);
  await padButton(3, 1);
  await padButton(5, 1);
  await padButton(11, 1);
  await wait(page, 0.2);
  await page.evaluate(() => {
    window.__padList = [];
  });
  await wait(page, 0.4);
  const gone = await state(page);
  record('gamepad: disconnect releases the controls and pauses', !gone.pad.active && !gone.pad.gas && gone.pad.steer === 0 && !gone.pad.turbo && !gone.pad.horn && !gone.pad.handbrake && gone.pause === 1, { pad: gone.pad, pause: gone.pause });
  for (const n of [2, 3, 5, 11]) await padButton(n, 0);
  await page.evaluate(() => {
    window.__padList = [window.__pad];
  });
  await wait(page, 0.2);
  await padButton(0, 1);
  await wait(page, 0.2);
  await padButton(0, 0);
  await wait(page, 0.3);
  const again = await state(page);
  record('gamepad: found again, A resumes', again.pause === 0 && again.pad.active, { pause: again.pause });

  // The finish table: A held since driving does not count, a new press goes on as Space.
  await padButton(0, 1);
  await wait(page, 0.1);
  await toFinish(page);
  await overlayIs(page, 5);
  await wait(page, 0.4);
  const stillThere = await state(page);
  await padButton(0, 0);
  await wait(page, 0.2);
  await page.evaluate(() => {
    window.__keys = [];
    const { menu } = window.__app;
    const plainKey = menu.key.bind(menu);
    menu.key = (code, down, shift) => {
      window.__keys.push([code, down]);
      plainKey(code, down, shift);
    };
  });
  await padButton(0, 1);
  await wait(page, 0.6);
  const gone2 = await page.evaluate(() => ({ ended: window.__race.ended, mode: window.__app.mode }));
  // Still held in the menu: not a press, and its release is not one either.
  await wait(page, 0.3);
  const heldInMenu = await page.evaluate(() => window.__keys.slice());
  await padButton(0, 0);
  await wait(page, 0.2);
  const released = await page.evaluate(() => window.__keys.slice());
  await padButton(0, 1);
  await wait(page, 0.2);
  const pressedNew = await page.evaluate(() => window.__keys.slice());
  await padButton(0, 0);
  record('finish: pad A held does not skip it, a new press does', !stillThere.ended && gone2.ended && gone2.mode === 'menu', { stillThere: stillThere.ended, ended: gone2 });
  record('menu: a pad button held from the race counts only after its release', heldInMenu.length === 0 && released.length === 0 && pressedNew.length === 1 && pressedNew[0][0] === 'Enter' && pressedNew[0][1] === true, { heldInMenu, released, pressedNew });
  await context.close();
}

// --- A race that cannot load comes back to the menu ---------------------------------------------
if (section('failure')) {
  const context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
  const page = watch(await context.newPage());
  await page.route('**/game/spel.wasm', (r) => r.abort());
  await page.goto(`${base}?form=TfrmMainScreen`);
  await page.waitForFunction(() => window.__app && window.__app.menu && window.__app.menu.screen, null, { timeout: 120000 });
  // startRace goes on into the menu's flow, which waits for the player: not awaited here.
  await page.evaluate(() => {
    window.__app.vfs.iniSet('game.ini', 'PLAYER', 'FINISHED', '1');
    window.__app.startRace();
  });
  await page.waitForFunction(() => window.__app.mode === 'menu' && (window.__app.menu.screen || window.__app.menu.modals.length), null, { timeout: 60000 });
  await wait(page, 0.5);
  const failed = await page.evaluate(() => ({
    mode: window.__app.mode, loading: !document.getElementById('loading').hidden, status: document.getElementById('status').textContent,
    finished: window.__app.vfs.parsedIni('game.ini').get('PLAYER', 'FINISHED'), form: (window.__app.menu.modals.at(-1) || window.__app.menu.screen).constructor.className,
    gear: !document.getElementById('race-settings').hidden,
  }));
  await page.screenshot({ path: join(dir, 'load-failed.png') });
  record('load failure: back in the menu with a message, finished=0', failed.mode === 'menu' && !failed.loading && failed.status.length > 0 && failed.finished === '0' && !failed.gear, failed);
  await context.close();
}

// --- The intro in a hidden tab ------------------------------------------------------------------
if (section('intro')) {
  const context = await browser.newContext({ viewport: { width: 1280, height: 720 } });
  const page = watch(await context.newPage());
  await page.goto(base);
  await page.waitForFunction(() => window.__app && window.__app.menu && window.__app.menu.video && window.__app.menu.video.el.currentTime > 0.2, null, { timeout: 120000 });
  const setHidden = (value) => page.evaluate((v) => {
    Object.defineProperty(document, 'hidden', { value: v, configurable: true });
    document.dispatchEvent(new Event('visibilitychange'));
  }, value);
  await setHidden(true);
  await wait(page, 0.3);
  const hidden = await page.evaluate(() => window.__app.menu.video.el.paused);
  await setHidden(false);
  await wait(page, 0.3);
  const shown = await page.evaluate(() => window.__app.menu.video.el.paused);
  record('intro: pauses in a hidden tab, goes on when shown', hidden && !shown, { hidden, shown });
  await context.close();
}

await browser.close();
writeFileSync(out, JSON.stringify(results, null, 1));
const failed = Object.entries(results).filter(([, r]) => !r.ok);
console.log(`${Object.keys(results).length - failed.length} of ${Object.keys(results).length} checks passed`);
