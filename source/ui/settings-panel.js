// The port's own settings during a race: 3D resolution, render scale, volume, frame counter, full
// screen and controls. The race keeps running behind it only as a still image: opening it stops the
// clock. See docs/intentional-differences.md. The menu's Geavanceerd dialog edits the same values.
import { onRelease } from '../input/touch.js';

export const RESOLUTIONS = [
  ['auto', 'Automatisch (scherm)'], ['360', '360p'], ['480', '480p'], ['600', '600p'], ['720', '720p'],
  ['900', '900p'], ['1080', '1080p'], ['1440', '1440p'],
];
const TOUCH_MODES = [['auto', 'Automatisch'], ['on', 'Aan'], ['off', 'Uit']];

export class SettingsPanel {
  constructor(root, settings, { onOpenChange }) {
    this.root = root;
    this.settings = settings;
    this.onOpenChange = onOpenChange;
    const options = (list) => list.map(([v, t]) => `<option value="${v}">${t}</option>`).join('');
    root.innerHTML = `
      <h2>Instellingen</h2>
      <label>3D-resolutie <select id="set-res">${options(RESOLUTIONS)}</select></label>
      <label>Renderschaal <input id="set-scale" type="range" min="25" max="200" step="5"><output id="set-scale-out"></output></label>
      <p id="set-effective"></p>
      <label>Volume <input id="set-volume" type="range" min="0" max="100" step="1"><output id="set-volume-out"></output></label>
      <label>Aanraakbediening <select id="set-touch">${options(TOUCH_MODES)}</select></label>
      <label>Deadzone gamepad <input id="set-dead" type="range" min="0" max="50" step="1"><output id="set-dead-out"></output></label>
      <label class="check"><input id="set-fps" type="checkbox"> Beeldjes per seconde tonen</label>
      <label class="check"><input id="set-full" type="checkbox"> Volledig scherm</label>
      <button id="set-close">Sluiten</button>`;
    const $ = (id) => root.querySelector('#' + id);
    this.$ = $;
    $('set-res').addEventListener('change', (e) => this.apply('resolution', e.target.value));
    $('set-scale').addEventListener('input', (e) => this.apply('renderScale', Number(e.target.value)));
    $('set-volume').addEventListener('input', (e) => this.apply('volume', Number(e.target.value)));
    $('set-touch').addEventListener('change', (e) => this.apply('touch', e.target.value));
    $('set-dead').addEventListener('input', (e) => this.apply('deadzone', Number(e.target.value) / 100));
    $('set-fps').addEventListener('change', (e) => this.apply('showFps', e.target.checked));
    $('set-full').addEventListener('change', (e) => this.apply('fullscreen', e.target.checked));
    // No such switch on an iPhone: the row goes, with nothing else to say about it.
    const page = document.documentElement;
    if (!page.requestFullscreen && !page.webkitRequestFullscreen) $('set-full').closest('label').hidden = true;
    onRelease($('set-close'), () => this.close());
    for (const type of ['keydown', 'keyup']) {
      root.addEventListener(type, (e) => {
        // The up of the key that closed it still belongs to the race's key state.
        if (root.hidden) return;
        e.stopPropagation();
        if (type === 'keydown' && (e.code === 'Escape' || e.code === 'F9')) {
          e.preventDefault();
          if (!e.repeat) this.close(e.code);
        }
      });
    }
  }

  apply(key, value) {
    this.settings.set(key, value);
    this.refresh();
  }

  refresh(effective = this.effective) {
    const s = this.settings;
    const $ = this.$;
    $('set-res').value = String(s.get('resolution'));
    $('set-scale').value = s.get('renderScale');
    $('set-scale-out').textContent = s.get('renderScale') + '%';
    $('set-volume').value = s.get('volume');
    $('set-volume-out').textContent = s.get('volume') + '%';
    $('set-touch').value = s.get('touch');
    $('set-dead').value = Math.round(s.get('deadzone') * 100);
    $('set-dead-out').textContent = Math.round(s.get('deadzone') * 100) + '%';
    $('set-fps').checked = s.get('showFps');
    $('set-full').checked = s.get('fullscreen');
    this.effective = effective;
    if (effective) $('set-effective').textContent = `3D-beeld: ${effective.width} × ${effective.height} pixels${effective.limited ? ' · GPU-limiet' : ''}`;
  }

  get isOpen() {
    return !this.root.hidden;
  }

  open(effective) {
    this.refresh(effective);
    this.root.hidden = false;
    // Esc and F9 reach this panel only with the focus inside it.
    this.$('set-res').focus({ preventScroll: true });
    if (this.onOpenChange) this.onOpenChange(true);
  }

  /** closedBy: the code of the key that closed it, which then is not the game's until released. */
  close(closedBy = null) {
    if (this.root.hidden) return;
    this.root.hidden = true;
    if (this.onOpenChange) this.onOpenChange(false, closedBy);
  }
}
