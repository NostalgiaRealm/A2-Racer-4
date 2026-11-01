// The menu's user interface layer: what menu.exe's Delphi VCL and Davilex components did.
// Forms are drawn on an 800x600 canvas in original coordinates. docs/research/menu-forms.md
// sections 2, 6, 7, 9 and 11 are the specification. See source/menu/README.md for how to
// write a form.

import { safeAreaInsets } from '../ui/safe-area.js';
export const SCREEN_W = 800;
export const SCREEN_H = 600;

const STATE_UP = 0;
const STATE_DOWN = 1;
const STATE_FOCUSED = 2;
const STATE_HOVERED = 3;
const STATE_DISABLED = 4;

/** Loads and caches menu images and click regions. Names follow the original: 'mainscre.bmp', 'chara_00.tga'. */
export class MenuAssets {
  constructor(base = 'assets/menu/') {
    this.base = base;
    this.images = new Map();
    this.regions = new Map();
    this.index = null;
  }

  async init() {
    this.index = await (await fetch(this.base + 'index.json')).json();
  }

  has(name) {
    return Object.prototype.hasOwnProperty.call(this.index, name.toLowerCase());
  }

  /** Resolves to an image, or null when MenuRcs has no such member: the original only logs that. */
  image(name) {
    const key = name.toLowerCase();
    let p = this.images.get(key);
    if (p) return p;
    const file = this.index[key];
    if (!file) return Promise.resolve(null);
    p = new Promise((resolve) => {
      const img = new Image();
      img.onload = () => resolve(img);
      img.onerror = () => resolve(null);
      img.src = this.base + file;
    });
    this.images.set(key, p);
    return p;
  }

  /** Click region: the bottom-left pixel's colour means outside. */
  async region(name) {
    const key = name.toLowerCase();
    if (this.regions.has(key)) return this.regions.get(key);
    const img = await this.image(key);
    let r = null;
    if (img) {
      const c = document.createElement('canvas');
      c.width = img.width;
      c.height = img.height;
      const g = c.getContext('2d', { willReadFrequently: true });
      g.drawImage(img, 0, 0);
      const d = g.getImageData(0, 0, img.width, img.height).data;
      const w = img.width;
      const h = img.height;
      const bl = (h - 1) * w * 4;
      const key0 = (d[bl] << 16) | (d[bl + 1] << 8) | d[bl + 2];
      const mask = new Uint8Array(w * h);
      for (let k = 0; k < w * h; k++) {
        mask[k] = ((d[k * 4] << 16) | (d[k * 4 + 1] << 8) | d[k * 4 + 2]) !== key0 ? 1 : 0;
      }
      r = { w, h, mask };
    }
    this.regions.set(key, r);
    return r;
  }
}

/** A shared button look: TGDIButtonDefinition with its load-order quirk. */
export class ButtonDef {
  /**
   * stem: file stem, e.g. 'nextm'. Files <stem>_up/_do/_hi/_di/_fo.tga and <stem>_re.bmp.
   * A missing state keeps the last loaded image, not Up: menu-forms.md section 8.
   */
  static async load(assets, stem, options = {}) {
    const def = new ButtonDef();
    def.stem = stem;
    def.factor = options.factor ?? 255;
    def.onState = options.onState || null;
    const order = [['up', STATE_UP], ['do', STATE_DOWN], ['hi', STATE_HOVERED], ['di', STATE_DISABLED], ['fo', STATE_FOCUSED]];
    const imgs = await Promise.all(order.map(([s]) => assets.image(`${stem}_${s}.tga`)));
    def.images = [];
    let last = null;
    order.forEach(([, state], k) => {
      if (imgs[k]) last = imgs[k];
      def.images[state] = last;
    });
    def.width = imgs[0] ? imgs[0].width : 0;
    def.height = imgs[0] ? imgs[0].height : 0;
    def.region = await assets.region(`${stem}_re.bmp`);
    return def;
  }
}

export class Component {
  constructor(x = 0, y = 0, w = 0, h = 0) {
    this.x = x;
    this.y = y;
    this.w = w;
    this.h = h;
    this.visible = true;
    this.enabled = true;
    this.parent = null;
    this.tabStop = false;
    this.tabOrder = 1000;
    this.hint = '';
  }

  hit(px, py) {
    return px >= this.x && py >= this.y && px < this.x + this.w && py < this.y + this.h;
  }

  invalidate() {
    if (this.parent) this.parent.invalidate();
  }

  draw() {}

  pointerDown() {}

  pointerUp() {}

  pointerMove() {}

  /** Port: a cancelled touch is no press. Clears what pointerDown started, without acting. */
  pointerCancel() {}

  keyDown() {
    return false;
  }

  keyUp() {
    return false;
  }
}

/** TImage or TGDIGraphic. image may be set later; size follows the image unless fixed. */
export class ImageBox extends Component {
  constructor(x, y, image = null, options = {}) {
    super(x, y, image ? image.width : options.w || 0, image ? image.height : options.h || 0);
    this.image = image;
    this.factor = options.factor ?? 255;
    this.stretch = options.stretch ?? false;
    this.onClick = options.onClick || null;
  }

  setImage(image) {
    this.image = image;
    if (!this.stretch) {
      this.w = image ? image.width : 0;
      this.h = image ? image.height : 0;
    }
    this.invalidate();
  }

  draw(g) {
    if (!this.image) return;
    g.globalAlpha = this.factor / 255;
    if (this.stretch) g.drawImage(this.image, this.x, this.y, this.w, this.h);
    else g.drawImage(this.image, this.x, this.y);
    g.globalAlpha = 1;
  }

  pointerUp(px, py) {
    if (this.onClick && this.hit(px, py)) this.onClick(this);
  }
}

const FONT_DEFAULT = { name: 'Arial, Helvetica, sans-serif', size: 16, color: '#F1D240', bold: true };

/** TLabel. size in pixels (the DFM's negative Height). The default matches menucaps [DEFAULT]. */
export class Label extends Component {
  constructor(x, y, w, h, text = '', font = {}, options = {}) {
    super(x, y, w, h);
    this.text = text;
    this.font = { ...FONT_DEFAULT, ...font };
    this.wordWrap = options.wordWrap ?? false;
    this.align = options.align || 'left';
    this.layout = options.layout || 'top';
    this.autoSize = options.autoSize ?? false;
    this.onClick = options.onClick || null;
  }

  pointerUp(px, py) {
    if (this.onClick && this.hit(px, py)) this.onClick(this);
  }

  setText(t) {
    if (this.text !== t) {
      this.text = t;
      this.invalidate();
    }
  }

  draw(g) {
    if (!this.text) return;
    const f = this.font;
    g.font = `${f.bold ? 'bold ' : ''}${f.size}px ${f.name}`;
    g.fillStyle = f.color;
    g.textBaseline = 'top';
    g.textAlign = this.align;
    const ax = this.align === 'center' ? this.x + this.w / 2 : this.align === 'right' ? this.x + this.w : this.x;
    const lines = this.wordWrap ? wrapLines(g, String(this.text), this.w) : String(this.text).split('\n');
    const lh = Math.round(f.size * 1.2);
    let y = this.y;
    if (this.layout === 'center') y = this.y + (this.h - lines.length * lh) / 2;
    g.save();
    if (!this.autoSize && this.w > 0 && this.h > 0) {
      g.beginPath();
      g.rect(this.x, this.y, this.w, this.h);
      g.clip();
    }
    for (const line of lines) {
      g.fillText(line, ax, y);
      y += lh;
    }
    g.restore();
    g.textAlign = 'left';
  }
}

export function wrapLines(g, text, width) {
  const out = [];
  for (const para of text.split(/\r?\n/)) {
    let line = '';
    for (const word of para.split(/\s+/)) {
      const t = line ? line + ' ' + word : word;
      if (g.measureText(t).width > width && line) {
        out.push(line);
        line = word;
      } else {
        line = t;
      }
    }
    out.push(line);
  }
  return out;
}

/** TGDIButton. Size is the Up image's, whatever the DFM says. */
export class Button extends Component {
  constructor(def, x, y, options = {}) {
    super(x, y, def ? def.width : 0, def ? def.height : 0);
    this.def = def;
    this.tabStop = options.tabStop ?? true;
    this.tabOrder = options.tabOrder ?? 1000;
    this.onClick = options.onClick || null;
    this.modalResult = options.modalResult || 0;
    this.isDefault = options.default || false;
    this.isCancel = options.cancel || false;
    this.pressed = false;
    this.armed = false;
    this.hovered = false;
    this.checked = false;
    this.lastState = STATE_UP;
    this.caption = options.caption || '';
    this.captionFont = options.font || null;
  }

  state() {
    if (!this.enabled) return STATE_DISABLED;
    if (this.pressed || this.checked) return STATE_DOWN;
    if (this.hovered) return STATE_HOVERED;
    if (this.parent && this.parent.focus === this) return STATE_FOCUSED;
    if (this.isDefault && this.parent && !this.parent.focus) return STATE_FOCUSED;
    return STATE_UP;
  }

  setDef(def) {
    this.def = def;
    this.w = def ? def.width : 0;
    this.h = def ? def.height : 0;
    this.invalidate();
  }

  hit(px, py) {
    if (!this.visible || !this.def) return false;
    const lx = px - this.x;
    const ly = py - this.y;
    if (lx < 0 || ly < 0) return false;
    const r = this.def.region;
    if (r) {
      if (lx >= r.w || ly >= r.h) return false;
      return r.mask[Math.floor(ly) * r.w + Math.floor(lx)] === 1;
    }
    return lx < this.w && ly < this.h;
  }

  draw(g) {
    if (!this.def) return;
    const s = this.state();
    if (s !== this.lastState) this.stateChanged(s);
    const img = this.def.images[s] || this.def.images[STATE_UP];
    if (img) {
      g.globalAlpha = this.def.factor / 255;
      g.drawImage(img, this.x, this.y);
      g.globalAlpha = 1;
    }
    if (this.caption) {
      const f = this.captionFont || { size: 15, color: '#62280E', bold: true };
      g.font = `${f.bold ? 'bold ' : ''}${f.size}px ${FONT_DEFAULT.name}`;
      g.fillStyle = this.enabled ? f.color : '#63614B';
      g.textAlign = 'center';
      g.textBaseline = 'middle';
      const r = this.captionRect || [0, 0, this.w, this.h];
      g.fillText(this.caption, this.x + (r[0] + r[2]) / 2, this.y + (r[1] + r[3]) / 2);
      g.textAlign = 'left';
    }
  }

  /** OnButtonStateChange of the definition: CombinedBtnStateChange brings the button up on Down or Focused. */
  stateChanged(s) {
    const old = this.lastState;
    this.lastState = s;
    if (this.def && this.def.onState) this.def.onState(this, s, old);
  }

  click() {
    if (!this.enabled || !this.visible) return;
    const form = this.parent;
    if (this.modalResult && form) form.modalResult = this.modalResult;
    if (this.onClick) this.onClick(this);
    if (this.modalResult && form && form.finishModal) form.finishModal();
  }

  pointerDown() {
    this.pressed = true;
    this.armed = true;
    if (this.parent) this.parent.setFocus(this);
    this.invalidate();
  }

  pointerMove(px, py) {
    if (this.armed) {
      const inside = this.hit(px, py);
      if (inside !== this.pressed) {
        this.pressed = inside;
        this.invalidate();
      }
    }
  }

  pointerUp(px, py) {
    const was = this.armed && this.hit(px, py);
    this.armed = false;
    this.pressed = false;
    this.invalidate();
    if (was) this.click();
  }

  pointerCancel() {
    this.armed = false;
    this.pressed = false;
    this.invalidate();
  }

  keyDown(code) {
    if (code === 'Space') {
      this.pressed = true;
      this.invalidate();
      return true;
    }
    return false;
  }

  keyUp(code) {
    if (code === 'Space' && this.pressed) {
      this.pressed = false;
      this.invalidate();
      this.click();
      return true;
    }
    return false;
  }
}

/** TGDICheckBox: click toggles before OnClick. Checked shows the Down image. */
export class CheckBox extends Button {
  click() {
    if (!this.enabled || !this.visible) return;
    this.checked = !this.checked;
    super.click();
  }
}

/** TGDIRadioButton: click only sets. One group per parent unless group is given. */
export class RadioButton extends Button {
  constructor(def, x, y, options = {}) {
    super(def, x, y, options);
    this.group = options.group || null;
    this.tabStop = false;
  }

  setChecked(v) {
    this.checked = v;
    this.tabStop = v;
    if (v && this.parent) {
      for (const c of this.parent.components) {
        if (c !== this && c instanceof RadioButton && c.group === this.group) {
          c.checked = false;
          c.tabStop = false;
        }
      }
    }
    this.invalidate();
  }

  click() {
    if (!this.enabled || !this.visible) return;
    this.setChecked(true);
    super.click();
  }
}

/** TDaviGraphicSlider: background image plus needle. */
export class Slider extends Component {
  constructor(x, y, background, needle, options = {}) {
    super(x, y, options.w || (background ? background.width : 100), options.h || (background ? background.height : 15));
    this.background = background;
    this.needle = needle;
    this.min = options.min ?? 0;
    this.max = options.max ?? 100;
    this.position = options.position ?? this.min;
    this.largeStep = options.largeStep ?? 5;
    this.onChange = options.onChange || null;
    this.tabStop = options.tabStop ?? true;
    this.tabOrder = options.tabOrder ?? 1000;
    this.drag = false;
  }

  range() {
    return this.w - (this.needle ? this.needle.width : 6);
  }

  setPosition(v, fire = true) {
    const p = Math.max(this.min, Math.min(this.max, Math.round(v)));
    if (p !== this.position) {
      this.position = p;
      this.invalidate();
      if (fire && this.onChange) this.onChange(p);
    }
  }

  draw(g) {
    if (this.background) g.drawImage(this.background, this.x, this.y);
    if (this.needle) g.drawImage(this.needle, this.needleX(), this.y);
    if (this.parent && this.parent.focus === this) {
      g.strokeStyle = '#F1D240';
      g.lineWidth = 1;
      g.strokeRect(this.x - 1.5, this.y - 1.5, this.w + 3, this.h + 3);
    }
  }

  /** 0x46ac70. */
  needleX() {
    return this.x + Math.trunc((this.range() * (this.position - this.min)) / (this.max - this.min));
  }

  /** Port: a finger needs more than a 15-pixel track and a 6-pixel needle. */
  touchMargin(px) {
    return this.parent && this.parent.rt.touchInput ? px : 0;
  }

  hit(px, py) {
    const m = this.touchMargin(12);
    return px >= this.x && px < this.x + this.w && py >= this.y - m && py < this.y + this.h + m;
  }

  onNeedle(px) {
    const m = this.touchMargin(10);
    const nx = this.needleX();
    return px >= nx - m && px < nx + this.w - this.range() + m;
  }

  /** Track click 0x46adc8: X left of the position pixel 0x46abfc is one LargeStep down, else one up. */
  pageTowards(px) {
    const posPixel = this.x + Math.trunc((this.w * (this.position - this.min)) / (this.max - this.min));
    this.setPosition(this.position + (px < posPixel ? -this.largeStep : this.largeStep));
  }

  /** FUN_0046b01c: ends when the cursor is on the needle. */
  repeatStep() {
    if (this.onNeedle(this.pointerX)) this.parent.clearTimer(this.repeat);
    else this.pageTowards(this.pointerX);
  }

  pointerDown(px) {
    const form = this.parent;
    if (form) form.setFocus(this);
    if (this.onNeedle(px)) {
      // TDaviSliderNeedle 0x46a83c.
      this.drag = true;
      this.grab = px - this.needleX();
      return;
    }
    this.pointerX = px;
    this.pageTowards(px);
    // DelayTime 250, then RepeatTime 50: 0x46afbc.
    this.repeat = form.setTimer(250, () => {
      this.repeat = form.setTimer(50, () => this.repeatStep(), true);
      this.repeatStep();
    });
  }

  /** Needle drag 0x46a894, position from its left edge 0x46ab50 by integer division. */
  pointerMove(px) {
    this.pointerX = px;
    if (!this.drag) return;
    const left = Math.max(0, Math.min(this.range(), px - this.grab - this.x));
    this.setPosition(this.min + Math.trunc((left * (this.max - this.min)) / this.range()));
  }

  pointerUp() {
    this.drag = false;
    if (this.parent) this.parent.clearTimer(this.repeat);
    this.repeat = null;
  }

  pointerCancel() {
    this.pointerUp();
  }

  keyDown(code) {
    switch (code) {
      case 'PageUp': this.setPosition(this.position + this.largeStep); return true;
      case 'PageDown': this.setPosition(this.position - this.largeStep); return true;
      case 'End': this.setPosition(this.min); return true;
      case 'Home': this.setPosition(this.max); return true;
      case 'ArrowLeft': case 'ArrowDown': this.setPosition(this.position - 1); return true;
      case 'ArrowUp': case 'ArrowRight': this.setPosition(this.position + 1); return true;
      default: return false;
    }
  }
}

/** TEdit. A real input element sits on top, so phones get their keyboard. */
export class EditBox extends Component {
  constructor(x, y, w, h, options = {}) {
    super(x, y, w, h);
    this.text = options.text || '';
    this.maxLength = options.maxLength ?? 255;
    this.onEnter = options.onEnter || null;
    this.onChange = options.onChange || null;
    this.tabStop = true;
    this.tabOrder = options.tabOrder ?? 1000;
    this.font = { size: 16, color: '#000000', ...options.font };
    this.background = options.background ?? '#FFFFFF';
    this.element = null;
  }

  draw(g) {
    // The input element draws itself.
    void g;
  }

  attach(rt) {
    if (this.element) return;
    const el = document.createElement('input');
    el.type = 'text';
    el.maxLength = this.maxLength;
    el.value = this.text;
    el.autocomplete = 'off';
    el.spellcheck = false;
    el.className = 'menu-edit';
    el.addEventListener('input', () => {
      this.text = el.value;
      if (this.onChange) this.onChange(this.text);
    });
    el.addEventListener('keydown', (e) => {
      e.stopPropagation();
      rt.lastInputPad = false;
      if (rt.staleRepeat(e)) {
        e.preventDefault();
        return;
      }
      if (e.key === 'Enter') {
        e.preventDefault();
        if (this.onEnter) this.onEnter();
      } else if (e.key === 'Escape') {
        rt.key('Escape', true);
      }
    });
    el.addEventListener('keyup', (e) => e.stopPropagation());
    rt.overlay.appendChild(el);
    this.element = el;
    this.place(rt);
  }

  place(rt) {
    const el = this.element;
    if (!el) return;
    const r = rt.toScreenRect(this.parent, this.x, this.y, this.w, this.h);
    el.style.left = r.x + 'px';
    el.style.top = r.y + 'px';
    el.style.width = r.w + 'px';
    el.style.height = r.h + 'px';
    el.style.fontSize = Math.max(14, this.font.size * r.scale) + 'px';
    el.style.color = this.font.color;
    el.style.background = this.background;
  }

  detach() {
    if (this.element) this.element.remove();
    this.element = null;
  }

  setText(t) {
    this.text = t;
    if (this.element) this.element.value = t;
  }

  focusElement() {
    if (this.element) this.element.focus();
  }
}

/** One screen (800x600) or modal dialog. Subclasses build their components in async create(). */
export class Form {
  constructor(rt, args = {}) {
    this.rt = rt;
    this.args = args;
    this.components = [];
    this.focus = null;
    this.width = SCREEN_W;
    this.height = SCREEN_H;
    this.x = 0;
    this.y = 0;
    this.modalResult = 0;
    this.capture = null;
    this.timers = new Set();
    this.background = null;
    this.keyPreview = null;
  }

  /** Portrait layout: list of [x, y, w, h] regions of this form, stacked top to bottom. */
  portraitZones() {
    return null;
  }

  async create() {}

  /** After create, when the form becomes visible. */
  onShow() {}

  /** When the form goes away: stop timers, voices, anything it started. */
  onClose() {}

  add(c, z) {
    c.parent = this;
    if (z === undefined) this.components.push(c);
    else this.components.splice(z, 0, c);
    return c;
  }

  remove(c) {
    const k = this.components.indexOf(c);
    if (k >= 0) this.components.splice(k, 1);
    if (this.focus === c) this.focus = null;
  }

  bringToFront(c) {
    const k = this.components.indexOf(c);
    if (k >= 0 && k !== this.components.length - 1) {
      this.components.splice(k, 1);
      this.components.push(c);
    }
    this.invalidate();
  }

  invalidate() {
    this.rt.invalidate();
  }

  setFocus(c) {
    if (this.focus === c) return;
    this.focus = c;
    if (c instanceof EditBox) c.focusElement();
    else if (document.activeElement && document.activeElement.classList && document.activeElement.classList.contains('menu-edit')) document.activeElement.blur();
    this.invalidate();
  }

  /** Delphi TTimer: fires once unless repeat is true. Cleared when the form closes. */
  setTimer(ms, fn, repeat = false) {
    const t = { id: 0 };
    const run = () => {
      if (!repeat) this.timers.delete(t);
      fn();
    };
    t.id = repeat ? setInterval(run, ms) : setTimeout(run, ms);
    t.repeat = repeat;
    this.timers.add(t);
    return t;
  }

  clearTimer(t) {
    if (!t) return;
    if (t.repeat) clearInterval(t.id);
    else clearTimeout(t.id);
    this.timers.delete(t);
  }

  clearTimers() {
    for (const t of this.timers) {
      if (t.repeat) clearInterval(t.id);
      else clearTimeout(t.id);
    }
    this.timers.clear();
  }

  draw(g) {
    if (this.background) g.drawImage(this.background, 0, 0);
    for (const c of this.components) if (c.visible) c.draw(g);
  }

  topAt(px, py) {
    for (let k = this.components.length - 1; k >= 0; k--) {
      const c = this.components[k];
      if (c.visible && c.enabled && c.hit(px, py)) return c;
    }
    return null;
  }

  pointerDown(px, py) {
    const c = this.topAt(px, py);
    this.capture = c;
    if (c) c.pointerDown(px, py);
    else if (this.onBackgroundClick) this.onBackgroundClick(px, py);
  }

  pointerMove(px, py) {
    if (this.capture) this.capture.pointerMove(px, py);
    const over = this.topAt(px, py);
    for (const c of this.components) {
      if (c instanceof Button) {
        const h = c === over && !this.rt.touchInput;
        if (c.hovered !== h) {
          c.hovered = h;
          this.invalidate();
        }
      }
    }
  }

  pointerUp(px, py) {
    const c = this.capture;
    this.capture = null;
    if (c) c.pointerUp(px, py);
  }

  pointerCancel() {
    const c = this.capture;
    this.capture = null;
    if (c) c.pointerCancel();
  }

  /** Tab stops, or with all = true every windowed control: arrow keys ignore TabStop. */
  focusables(all = false) {
    return this.components
      .filter((c) => c.visible && c.enabled && (c.tabStop || (all && (c instanceof Button || c instanceof Slider || c instanceof EditBox))))
      .sort((a, b) => a.tabOrder - b.tabOrder);
  }

  moveFocus(dir, all = false) {
    const list = this.focusables(all);
    if (!list.length) return;
    let k = list.indexOf(this.focus);
    k = k < 0 ? (dir > 0 ? 0 : list.length - 1) : (k + dir + list.length) % list.length;
    this.setFocus(list[k]);
  }

  keyDown(code, shift) {
    if (this.keyPreview && this.keyPreview(code)) return;
    const f = this.focus;
    if (f && f.keyDown(code)) return;
    switch (code) {
      case 'Tab': this.moveFocus(shift ? -1 : 1); break;
      case 'ArrowRight': case 'ArrowDown': this.moveFocus(1, true); break;
      case 'ArrowLeft': case 'ArrowUp': this.moveFocus(-1, true); break;
      case 'Enter': {
        if (f instanceof Button) {
          f.click();
          break;
        }
        const d = this.components.find((c) => c instanceof Button && c.isDefault && c.visible && c.enabled);
        if (d) d.click();
        break;
      }
      case 'Escape': {
        const d = this.components.find((c) => c instanceof Button && c.isCancel && c.visible && c.enabled);
        if (d) d.click();
        break;
      }
      default:
        break;
    }
  }

  keyUp(code) {
    if (this.focus) this.focus.keyUp(code);
  }

  /** Dialogs: called when modalResult is set. */
  finishModal() {
    if (this.resolveModal) this.rt.closeModal(this, this.modalResult);
  }
}

/**
 * Draws the current form and modal stack on one canvas and routes input.
 * Forms never touch the DOM directly except through EditBox and playVideo.
 */
export class MenuRuntime {
  constructor({ canvas, overlay, assets, data, sound }) {
    this.canvas = canvas;
    this.overlay = overlay;
    this.assets = assets;
    this.data = data;
    this.sound = sound;
    this.g = canvas.getContext('2d');
    this.screen = null;
    this.modals = [];
    this.dirty = true;
    this.active = false;
    this.layout = { zones: [], scale: 1 };
    this.touchInput = false;
    this.buffer = document.createElement('canvas');
    this.bufferG = null;
    this.bufferScale = 1;
    this.video = null;
    this.onExitMenu = null;
    this.keysDown = new Set();
    // The one pointer whose press is under way, and the form it began on.
    this.press = null;
    // Set by the App's pad polling, cleared by any other input: a pad cannot type a name.
    this.lastInputPad = false;
    // Set by the App after a race: key repeats of what was held then do not count, input.md C12.
    this.ignoreRepeat = false;
    this.bind();
  }

  bind() {
    const c = this.canvas;
    c.addEventListener('pointerdown', (e) => {
      if (!this.active) return;
      e.preventDefault();
      // One pointer per press: another finger counts for nothing until this one has ended.
      if (this.press) return;
      this.lastInputPad = false;
      this.touchInput = e.pointerType === 'touch';
      const p = this.eventToForm(e);
      if (!p) return;
      this.press = { id: e.pointerId, form: p.form };
      p.form.pointerDown(p.x, p.y);
      c.setPointerCapture?.(e.pointerId);
    });
    c.addEventListener('pointermove', (e) => {
      if (!this.active) return;
      if (this.press ? e.pointerId !== this.press.id : e.pointerType === 'touch') return;
      const p = this.eventToForm(e, this.press?.form);
      if (p) p.form.pointerMove(p.x, p.y);
    });
    const end = (e, cancelled) => {
      if (!this.press || e.pointerId !== this.press.id) return;
      const { form } = this.press;
      this.press = null;
      if (cancelled) {
        form.pointerCancel();
        return;
      }
      const p = this.eventToForm(e, form);
      form.pointerUp(p.x, p.y);
    };
    c.addEventListener('pointerup', (e) => end(e, false));
    c.addEventListener('pointercancel', (e) => end(e, true));
    // Ends a press whose pointerup will not come. After a normal release there is nothing left to end.
    c.addEventListener('lostpointercapture', (e) => end(e, true));
    window.addEventListener('keydown', (e) => {
      if (!this.active) return;
      this.lastInputPad = false;
      if (!this.staleRepeat(e)) this.key(e.code, true, e.shiftKey);
      if (['Tab', 'Space', 'Enter', 'Escape', 'ArrowUp', 'ArrowDown', 'ArrowLeft', 'ArrowRight'].includes(e.code)) e.preventDefault();
    });
    window.addEventListener('keyup', (e) => {
      if (!this.active) return;
      this.key(e.code, false, e.shiftKey);
    });
    // TDaviExceptionLogger 0x4a8500 caught what nothing handled. The browser logs it to the console as well.
    const fault = (error) => {
      if (this.active) this.data.flow.unexpectedError(this, error);
    };
    window.addEventListener('error', (e) => {
      // No error object: a notice such as a ResizeObserver loop, no fault of the program.
      if (e.error) fault(e.error);
    });
    window.addEventListener('unhandledrejection', (e) => {
      // These are the browser saying no, to sound or full screen, not a fault of the program.
      if (e.reason?.name !== 'NotAllowedError' && e.reason?.name !== 'AbortError') fault(e.reason);
    });
  }

  /** True for the auto-repeat of a key held since the race. The first new key press ends the filter. */
  staleRepeat(e) {
    if (!this.ignoreRepeat) return false;
    if (e.repeat) return true;
    this.ignoreRepeat = false;
    return false;
  }

  key(code, down, shift = false) {
    const f = this.top();
    if (!f) return;
    if (down) f.keyDown(code, shift);
    else f.keyUp(code);
    this.invalidate();
  }

  top() {
    return this.modals.length ? this.modals[this.modals.length - 1] : this.screen;
  }

  invalidate() {
    this.dirty = true;
  }

  // --- screens -----------------------------------------------------------------------
  /** GoToScreen: every visit creates the form anew, state lives in the data model. */
  async goTo(FormClass, args = {}) {
    const form = new FormClass(this, args);
    form.prevClass = this.screen ? this.screen.constructor : null;
    await form.create();
    if (this.screen) this.closeForm(this.screen);
    this.screen = form;
    this.attachEdits(form);
    form.onShow();
    this.relayout();
    this.invalidate();
    return form;
  }

  closeForm(form) {
    // Its press has nowhere to go any more: a release must not click on a form that has gone.
    if (this.press?.form === form) this.press = null;
    form.clearTimers();
    form.onClose();
    for (const c of form.components) if (c instanceof EditBox) c.detach();
  }

  /** ShowModal: resolves to the dialog's ModalResult. */
  async showModal(DialogClass, args = {}) {
    const form = new DialogClass(this, args);
    await form.create();
    form.isDialog = true;
    form.x = Math.round((SCREEN_W - form.width) / 2);
    form.y = Math.round((SCREEN_H - form.height) / 2);
    return new Promise((resolve) => {
      form.resolveModal = resolve;
      this.modals.push(form);
      this.attachEdits(form);
      form.onShow();
      this.relayout();
      this.invalidate();
    });
  }

  closeModal(form, result) {
    const k = this.modals.indexOf(form);
    if (k < 0) return;
    this.modals.splice(k, 1);
    this.closeForm(form);
    const r = form.resolveModal;
    form.resolveModal = null;
    this.relayout();
    this.invalidate();
    r(result);
  }

  attachEdits(form) {
    for (const c of form.components) if (c instanceof EditBox) c.attach(this);
  }

  hideAll() {
    if (this.screen) this.closeForm(this.screen);
    for (const m of this.modals) this.closeForm(m);
    this.screen = null;
    this.modals = [];
    this.stopVideo();
  }

  // --- layout: maps form coordinates to the canvas ------------------------------------
  /**
   * Landscape: the whole 800x600 form, centred and scaled to fit. Portrait: when the form
   * lists zones, they stack top to bottom at full width, which keeps artwork proportions.
   */
  relayout() {
    const cw = this.canvas.width;
    const ch = this.canvas.height;
    if (!cw || !ch) return;
    const form = this.screen;
    const portrait = ch > cw * 1.1;
    const safe = this.safeRect();
    let zones = null;
    if (portrait && form) zones = form.portraitZones();
    if (zones && zones.length) {
      const totalW = Math.max(...zones.map((z) => z[2]));
      const scale = Math.min(safe.w / totalW, safe.h / zones.reduce((a, z) => a + z[3], 0));
      const totalH = zones.reduce((a, z) => a + z[3] * scale, 0);
      let y = safe.y + (safe.h - totalH) / 2;
      this.layout.zones = zones.map(([zx, zy, zw, zh]) => {
        const r = { sx: zx, sy: zy, sw: zw, sh: zh, dx: safe.x + (safe.w - zw * scale) / 2, dy: y, dw: zw * scale, dh: zh * scale };
        y += zh * scale;
        return r;
      });
      this.layout.scale = scale;
    } else {
      const scale = Math.min(safe.w / SCREEN_W, safe.h / SCREEN_H);
      const dw = SCREEN_W * scale;
      const dh = SCREEN_H * scale;
      this.layout.zones = [{ sx: 0, sy: 0, sw: SCREEN_W, sh: SCREEN_H, dx: safe.x + (safe.w - dw) / 2, dy: safe.y + (safe.h - dh) / 2, dw, dh }];
      this.layout.scale = scale;
    }
    // Text stays sharp on high-resolution screens: draw the form at up to 2x.
    const s = Math.max(1, Math.min(2, Math.ceil(this.layout.scale)));
    if (this.bufferScale !== s || this.buffer.width !== SCREEN_W * s) {
      this.bufferScale = s;
      this.buffer.width = SCREEN_W * s;
      this.buffer.height = SCREEN_H * s;
      this.bufferG = this.buffer.getContext('2d');
    }
    for (const f of [this.screen, ...this.modals]) {
      if (!f) continue;
      for (const c of f.components) if (c instanceof EditBox) c.place(this);
    }
    this.placeVideo();
    this.invalidate();
  }

  /** The part of the canvas clear of notches and home bars, in canvas pixels. */
  safeRect() {
    const a = safeAreaInsets();
    const k = this.canvas.width / (this.canvas.getBoundingClientRect().width || this.canvas.width);
    return {
      x: a.left * k, y: a.top * k,
      w: Math.max(1, this.canvas.width - (a.left + a.right) * k), h: Math.max(1, this.canvas.height - (a.top + a.bottom) * k),
    };
  }

  /** A form-space point on the canvas, in canvas pixels. Handles dialogs and zones. */
  mapPoint(fx, fy) {
    for (const z of this.layout.zones) {
      if (fx >= z.sx && fy >= z.sy && fx <= z.sx + z.sw && fy <= z.sy + z.sh) {
        const k = z.dw / z.sw;
        return { x: z.dx + (fx - z.sx) * k, y: z.dy + (fy - z.sy) * k, k };
      }
    }
    return null;
  }

  dialogRect(form) {
    if (form.canvasRect) return form.canvasRect();
    const safe = this.safeRect();
    const scale = Math.min(safe.w / form.width, safe.h / form.height, Math.max(this.layout.scale, Math.min(safe.w / form.width, 1)));
    const w = form.width * scale;
    const h = form.height * scale;
    return { x: safe.x + (safe.w - w) / 2, y: safe.y + (safe.h - h) / 2, w, h, scale };
  }

  /** CSS pixels on screen for a rectangle in a form's coordinates. */
  toScreenRect(form, x, y, w, h) {
    const r = this.canvas.getBoundingClientRect();
    const css = r.width / this.canvas.width;
    if (form && form.isDialog) {
      const d = this.dialogRect(form);
      return { x: r.left + (d.x + x * d.scale) * css, y: r.top + (d.y + y * d.scale) * css, w: w * d.scale * css, h: h * d.scale * css, scale: d.scale * css };
    }
    const p = this.mapPoint(x, y) || { x: 0, y: 0, k: this.layout.scale };
    return { x: r.left + p.x * css, y: r.top + p.y * css, w: w * p.k * css, h: h * p.k * css, scale: p.k * css };
  }

  /** A pointer event in a form's own coordinates. With form given, in that one: a press stays with its form. */
  eventToForm(e, form = null) {
    const r = this.canvas.getBoundingClientRect();
    const px = ((e.clientX - r.left) * this.canvas.width) / r.width;
    const py = ((e.clientY - r.top) * this.canvas.height) / r.height;
    if (form) return this.canvasToForm(form, px, py);
    for (let k = this.modals.length - 1; k >= 0; k--) {
      const f = this.modals[k];
      const p = this.canvasToForm(f, px, py);
      // A floating form lets the pointer through where it shows nothing: TBalloonForm.
      if (!f.passesPointer || !f.passesPointer(p.x, p.y)) return p;
    }
    return this.screen ? this.canvasToForm(this.screen, px, py) : null;
  }

  /** Canvas pixels to a form's coordinates. On a screen, outside its zones is -1,-1. */
  canvasToForm(form, px, py) {
    if (form.isDialog) {
      const d = this.dialogRect(form);
      return { form, x: (px - d.x) / d.scale, y: (py - d.y) / d.scale };
    }
    for (const z of this.layout.zones) {
      if (px >= z.dx && py >= z.dy && px <= z.dx + z.dw && py <= z.dy + z.dh) {
        const k = z.sw / z.dw;
        return { form, x: z.sx + (px - z.dx) * k, y: z.sy + (py - z.dy) * k };
      }
    }
    return { form, x: -1, y: -1 };
  }

  render() {
    if (!this.active || !this.dirty) return;
    this.dirty = false;
    const g = this.g;
    const cw = this.canvas.width;
    const ch = this.canvas.height;
    g.setTransform(1, 0, 0, 1, 0, 0);
    g.fillStyle = '#000';
    g.fillRect(0, 0, cw, ch);
    if (this.screen) {
      const b = this.bufferG;
      const s = this.bufferScale;
      b.setTransform(s, 0, 0, s, 0, 0);
      b.clearRect(0, 0, SCREEN_W, SCREEN_H);
      this.screen.draw(b);
      g.imageSmoothingEnabled = true;
      g.imageSmoothingQuality = 'high';
      for (const z of this.layout.zones) {
        g.drawImage(this.buffer, z.sx * s, z.sy * s, z.sw * s, z.sh * s, z.dx, z.dy, z.dw, z.dh);
      }
    }
    for (const f of this.modals) {
      const d = this.dialogRect(f);
      g.setTransform(d.scale, 0, 0, d.scale, d.x, d.y);
      f.draw(g);
    }
    g.setTransform(1, 0, 0, 1, 0, 0);
  }

  // --- video -------------------------------------------------------------------------
  /** Plays an MP4 from assets/media over the form rectangle. Resolves when it ends or is stopped. */
  playVideo(file, form, x, y, w, h, options = {}) {
    this.stopVideo();
    const v = document.createElement('video');
    v.src = 'assets/media/' + file;
    v.playsInline = true;
    v.className = 'menu-video';
    v.muted = options.muted ?? false;
    v.loop = options.loop ?? false;
    // The movies do not pass the Web Audio master gain. iOS ignores this: there it is the device's volume.
    v.volume = (this.data.app?.settings.get('volume') ?? 100) / 100;
    this.overlay.appendChild(v);
    this.video = { el: v, form, x, y, w, h };
    this.placeVideo();
    return new Promise((resolve) => {
      this.video.resolve = resolve;
      v.onended = () => {
        if (!v.loop) this.stopVideo();
      };
      v.onerror = () => this.stopVideo();
      const p = v.play();
      if (p) {
        p.catch((e) => {
          // Stopped or paused before it started, which rejects as well.
          if (!this.video || this.video.el !== v) return;
          if (e && e.name !== 'NotAllowedError') return;
          // Autoplay with sound refused: play muted, the host offers a sound button.
          v.muted = true;
          v.play().catch(() => this.stopVideo());
          if (options.onMuted) options.onMuted();
        });
      }
    });
  }

  placeVideo() {
    if (!this.video) return;
    const { el, form, x, y, w, h } = this.video;
    const r = this.toScreenRect(form, x, y, w, h);
    el.style.left = r.x + 'px';
    el.style.top = r.y + 'px';
    el.style.width = r.w + 'px';
    el.style.height = r.h + 'px';
  }

  stopVideo() {
    if (!this.video) return;
    const { el, resolve } = this.video;
    this.video = null;
    el.pause();
    el.remove();
    if (resolve) resolve();
  }
}
