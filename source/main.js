// Page entry point.
import { App } from './app.js';

const app = new App();
window.__app = app;
app.start().catch((e) => {
  document.getElementById('status').textContent = String(e && e.stack ? e.stack : e);
  console.error(e);
});
