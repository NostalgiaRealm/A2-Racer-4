#!/usr/bin/env node
// Launch check of a desktop build on Linux: the menu's first screen opens from the game:// files,
// then a race on Amsterdam runs under the bot with its files read by byte ranges. This is a
// launch check: it does not play a race through, and it says nothing about Windows or macOS.
//   DISPLAY=:174 node tools/check-desktop.mjs --exe release/linux-unpacked/a2racer4 [--out evidence/desktop/linux]
import { mkdirSync, mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { _electron as electron } from 'playwright';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const exe = opt('exe');
const out = opt('out', 'evidence/desktop/linux');
const seconds = Number(opt('seconds', 30));
mkdirSync(out, { recursive: true });
const report = { exe, errors: [], http: [], checks: {} };
const graphics = ['--no-sandbox', '--ozone-platform=x11', '--disable-dev-shm-usage', '--use-angle=swiftshader',
  '--enable-unsafe-swiftshader', '--ignore-gpu-blocklist', '--autoplay-policy=no-user-gesture-required'];

async function start(query) {
  const profile = mkdtempSync(join(tmpdir(), 'a2r4-desktop-'));
  const env = { ...process.env, A2R4_USER_DATA: profile };
  delete env.ELECTRON_RUN_AS_NODE;
  delete env.WAYLAND_DISPLAY;
  const args = [...graphics, ...(query ? ['--game-query=' + query] : [])];
  const app = await electron.launch({ ...(exe ? { executablePath: resolve(exe) } : {}), args: exe ? args : ['.', ...args], env, timeout: 180000 });
  const page = await app.firstWindow({ timeout: 60000 });
  page.on('pageerror', (e) => report.errors.push('pageerror: ' + e.message));
  page.on('console', (m) => { if (m.type() === 'error') report.errors.push('console: ' + m.text().slice(0, 300)); });
  page.on('response', (r) => { if (r.status() >= 400) report.http.push(`${r.status()} ${r.url()}`); });
  return { app, page, profile };
}

// The menu.
{
  const { app, page, profile } = await start('');
  const info = await app.evaluate(({ app }) => ({ packaged: app.isPackaged, version: app.getVersion(), name: app.getName(), electron: process.versions.electron, chrome: process.versions.chrome }));
  Object.assign(report, info);
  await page.waitForFunction(() => {
    const m = window.__app?.menu;
    return m && (m.modals.at(-1) || m.screen);
  }, null, { timeout: 120000 });
  await page.waitForTimeout(3000);
  report.checks.menuForm = await page.evaluate(() => {
    const m = window.__app.menu;
    const f = m.modals.at(-1) || m.screen;
    return f.constructor.className || f.constructor.name;
  });
  await page.screenshot({ path: join(out, 'menu.png') });
  await app.close();
  rmSync(profile, { recursive: true, force: true });
}

// A race, by the bot.
{
  const { app, page, profile } = await start('race=1&bot=1&bench=1');
  await page.waitForFunction(() => window.__race && window.__race.m, null, { timeout: 300000 });
  await page.waitForTimeout(seconds * 1000);
  report.checks.race = await page.evaluate(() => {
    const r = window.__renderer;
    const gl = r.three.getContext();
    const dbg = gl.getExtension('WEBGL_debug_renderer_info');
    return { stats: r.stats, gpu: dbg ? gl.getParameter(dbg.UNMASKED_RENDERER_WEBGL) : 'unknown', bot: window.__bot?.state ? { chunk: window.__bot.state.chunk, speed: window.__bot.state.speed } : null };
  });
  await page.screenshot({ path: join(out, 'race.png') });
  await app.close();
  rmSync(profile, { recursive: true, force: true });
}

report.pass = report.errors.length === 0 && report.http.length === 0 && !!report.checks.menuForm && !!report.checks.race;
writeFileSync(join(out, 'summary.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
process.exit(report.pass ? 0 : 1);
