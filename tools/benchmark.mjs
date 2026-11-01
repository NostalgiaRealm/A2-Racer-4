#!/usr/bin/env node
// The mobile performance measurement from docs/request.txt section 9. Same level and route
// every time: the bot drives the first track from the start, with opponents and traffic.
//   node tools/benchmark.mjs --out evidence/performance/run.json [--throttle 8] [--seconds 40]
//     [--size 800x360] [--dpr 2] [--gpu] [--frameskip 1] [--url http://127.0.0.1:4180/]
import { chromium } from 'playwright';
import { writeFileSync } from 'node:fs';

const opt = (name, def) => {
  const k = process.argv.indexOf('--' + name);
  return k < 0 ? def : process.argv[k + 1];
};
const [w, h] = opt('size', '800x360').split('x').map(Number);
const dpr = Number(opt('dpr', 2));
const throttle = Number(opt('throttle', 8));
const seconds = Number(opt('seconds', 40));
const warm = Number(opt('warm', 12));
const gpu = process.argv.includes('--gpu');
const url = opt('url', 'http://127.0.0.1:4180/?race=1&bot=1&bench=1');
const args = ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist'];
if (gpu) args.push('--use-angle=' + opt('angle', 'vulkan'), '--enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE', '--enable-gpu-rasterization');
else args.push('--use-angle=swiftshader', '--enable-unsafe-swiftshader');
const browser = await chromium.launch({ headless: true, args, executablePath: process.env.CHROME_PATH || undefined });
const context = await browser.newContext({ viewport: { width: w, height: h }, deviceScaleFactor: dpr, isMobile: dpr > 1, hasTouch: dpr > 1 });
const page = await context.newPage();
page.on('pageerror', (e) => console.log('[pageerror]', e.message));
page.on('console', (m) => { if (m.type() === 'error') console.log('[console error]', m.text().slice(0, 200)); });
await page.addInitScript((skip) => {
  // --frameskip N shows every Nth display frame: a lower rendering rate with the same game.
  if (skip > 1) {
    const real = window.requestAnimationFrame.bind(window);
    window.requestAnimationFrame = (cb) => {
      let c = 0;
      const go = (t) => {
        if (++c < skip) real(go);
        else cb(t);
      };
      return real(go);
    };
  }
  const s = { frames: [], tick: [], present: [], recording: false, last: 0 };
  window.__bench = s;
  const raf = window.requestAnimationFrame.bind(window);
  const loop = (t) => {
    if (s.recording && s.last) s.frames.push(t - s.last);
    s.last = t;
    raf(loop);
  };
  raf(loop);
}, Number(opt('frameskip', 1)));
await page.goto(url);
await page.waitForFunction(() => window.__race && window.__race.m, null, { timeout: 180000 });
const client = await context.newCDPSession(page);
// Warm-up after loading: the countdown ends and shaders settle before measuring starts.
if (throttle > 1) await client.send('Emulation.setCPUThrottlingRate', { rate: throttle });
await page.waitForTimeout(warm * 1000);
await page.evaluate(() => { window.__bench.recording = true; window.__bench.tick.length = 0; window.__bench.present.length = 0; });
await page.waitForTimeout(seconds * 1000);
const report = await page.evaluate(() => {
  const b = window.__bench;
  b.recording = false;
  const r = window.__renderer;
  const gl = r.three.getContext();
  const dbg = gl.getExtension('WEBGL_debug_renderer_info');
  const state = window.__bot && window.__bot.state;
  return {
    frames: b.frames, tick: b.tick, present: b.present,
    drawingBuffer: [gl.drawingBufferWidth, gl.drawingBufferHeight],
    gpu: dbg ? gl.getParameter(dbg.UNMASKED_RENDERER_WEBGL) : 'unknown',
    renderer: r.stats, chunk: state ? state.chunk : null, speed: state ? state.speed : null,
    dpr: window.devicePixelRatio, css: [innerWidth, innerHeight],
    info: { calls: r.three.info.render.calls, triangles: r.three.info.render.triangles },
    ua: navigator.userAgent,
    trace: window.__trace || [],
  };
});
const stat = (values) => {
  const v = [...values].sort((a, b) => a - b);
  const at = (p) => v[Math.min(v.length - 1, Math.floor(p * v.length))] ?? 0;
  const round = (x) => Math.round(x * 100) / 100;
  return { count: v.length, mean: round(v.reduce((a, b) => a + b, 0) / Math.max(1, v.length)), p50: round(at(0.5)), p95: round(at(0.95)), p99: round(at(0.99)), max: round(v[v.length - 1] ?? 0) };
};
// Frames per second in each whole second of the window.
const perSecond = [];
let acc = 0;
let n = 0;
for (const f of report.frames) {
  acc += f;
  n++;
  if (acc >= 1000) {
    perSecond.push(Math.round((n * 1000) / acc * 10) / 10);
    acc = 0;
    n = 0;
  }
}
const out = {
  date: new Date().toISOString(),
  level: 'Etappe 0, Amsterdam. The bot drives the AI waypoint route from the start grid, with opponents and traffic',
  seconds, warmSeconds: warm, throttle,
  viewportCss: report.css, dpr: report.dpr, drawingBuffer: report.drawingBuffer,
  browser: report.ua, gpu: report.gpu,
  frameMs: stat(report.frames),
  fps: { mean: Math.round((1000 / (report.frames.reduce((a, b) => a + b, 0) / report.frames.length)) * 10) / 10, worstSecond: Math.min(...perSecond), perSecond },
  tickMs: stat(report.tick), presentMs: stat(report.present),
  renderer: report.renderer, webgl: report.info, botChunkAtEnd: report.chunk, botSpeedAtEnd: report.speed,
  trace: report.trace,
};
const file = opt('out', '');
if (file) writeFileSync(file, JSON.stringify(out, null, 1));
await page.screenshot({ path: file ? file.replace(/\.json$/, '.png') : 'evidence/performance/last.png' });
console.log(JSON.stringify({ ...out, trace: out.trace.length, fps: { mean: out.fps.mean, worstSecond: out.fps.worstSecond } }, null, 1));
await browser.close();
