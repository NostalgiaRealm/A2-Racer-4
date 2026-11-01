// The standard Windows controls of TfrmDisplaySettings, which menu.exe left as a plain VCL dialog
// with tabs and no game art. Drawn on the canvas in the classic Windows look, at the DFM's
// coordinates. Classes follow the DFM: TButton, TCheckBox, TRadioButton, TComboBox, TGroupBox,
// TPageControl. PlainStepper and PlainTrack are the port's, for its own tab.
import { applyCaptions, delphiColor } from './base-forms.js';
import { Button, CheckBox, Component, Form, Label, RadioButton } from './framework.js';

const FONT = 'Arial, Helvetica, sans-serif';
const FACE = delphiColor('clBtnFace');
const HIGHLIGHT = '#FFFFFF';
const SHADOW = '#808080';
const DARK = '#404040';
const GREY_TEXT = '#808080';
/** Non-client area of a sizeable window: the DFM's Width and Height include it, children's Left and Top do not. */
const CLIENT_X = 4;
const CLIENT_Y = 23;
const CAPTION_H = 18;
/** TPageControl's sheets: TTabSheet coordinates start here within the control. */
const SHEET_X = 4;
const SHEET_Y = 24;
const TAB_H = 22;

function edge(g, x, y, w, h, topLeft, bottomRight) {
  g.fillStyle = topLeft;
  g.fillRect(x, y, w - 1, 1);
  g.fillRect(x, y, 1, h - 1);
  g.fillStyle = bottomRight;
  g.fillRect(x, y + h - 1, w, 1);
  g.fillRect(x + w - 1, y, 1, h);
}

function raised(g, x, y, w, h) {
  edge(g, x, y, w, h, HIGHLIGHT, DARK);
  edge(g, x + 1, y + 1, w - 2, h - 2, FACE, SHADOW);
}

function sunken(g, x, y, w, h) {
  edge(g, x, y, w, h, SHADOW, HIGHLIGHT);
  edge(g, x + 1, y + 1, w - 2, h - 2, DARK, FACE);
}

function focusBox(g, x, y, w, h) {
  g.save();
  g.strokeStyle = '#000000';
  g.lineWidth = 1;
  g.setLineDash([1, 1]);
  g.strokeRect(x + 0.5, y + 0.5, w - 1, h - 1);
  g.restore();
}

function text(g, string, x, y, font, color, align = 'left') {
  g.font = `${font.bold ? 'bold ' : ''}${font.size}px ${FONT}`;
  g.fillStyle = color;
  g.textAlign = align;
  g.textBaseline = 'middle';
  g.fillText(string, x, y);
  g.textAlign = 'left';
}

/** Small DFM fonts would be unreadable on a phone, where the whole dialog is drawn smaller. */
function readableSize(form, size) {
  return Math.max(size, Math.ceil(11 / form.rt.toScreenRect(form, 0, 0, 1, 1).scale));
}

/** A finger needs more than the 13 pixels a box shows. */
function inRect(c, px, py, margin = 6) {
  const m = c.parent && c.parent.rt.touchInput ? margin : 0;
  return c.visible && px >= c.x - m && py >= c.y - m && px < c.x + c.w + m && py < c.y + c.h + m;
}

/** TButton. Caption, its size and colour come from the caption engine. */
export class PlainButton extends Button {
  constructor(x, y, w, h, options = {}) {
    super(null, x, y, options);
    this.w = w;
    this.h = h;
    this.font = { size: 15, color: '#000000' };
  }

  hit(px, py) {
    return inRect(this, px, py);
  }

  draw(g) {
    const { x, y, w, h } = this;
    const focused = this.parent && this.parent.focus === this;
    g.fillStyle = FACE;
    g.fillRect(x, y, w, h);
    if (this.pressed) {
      edge(g, x, y, w, h, DARK, DARK);
      edge(g, x + 1, y + 1, w - 2, h - 2, SHADOW, SHADOW);
    } else if (focused) {
      edge(g, x, y, w, h, '#000000', '#000000');
      raised(g, x + 1, y + 1, w - 2, h - 2);
    } else {
      raised(g, x, y, w, h);
    }
    const shift = this.pressed ? 1 : 0;
    if (this.enabled) {
      text(g, this.caption, x + w / 2 + shift, y + h / 2 + shift, this.font, this.font.color, 'center');
    } else {
      text(g, this.caption, x + w / 2 + 1, y + h / 2 + 1, this.font, HIGHLIGHT, 'center');
      text(g, this.caption, x + w / 2, y + h / 2, this.font, GREY_TEXT, 'center');
    }
    if (focused) focusBox(g, x + 4, y + 4, w - 8, h - 8);
  }
}

/** The title bar's x. Closing a modal form is ModalResult mrCancel. */
class CaptionClose extends PlainButton {
  draw(g) {
    const { x, y, w, h } = this;
    g.fillStyle = FACE;
    g.fillRect(x, y, w, h);
    if (this.pressed) sunken(g, x, y, w, h);
    else raised(g, x, y, w, h);
    const shift = this.pressed ? 1 : 0;
    g.strokeStyle = '#000000';
    g.lineWidth = 1.5;
    g.beginPath();
    g.moveTo(x + 4 + shift, y + 3 + shift);
    g.lineTo(x + w - 5 + shift, y + h - 4 + shift);
    g.moveTo(x + w - 5 + shift, y + 3 + shift);
    g.lineTo(x + 4 + shift, y + h - 4 + shift);
    g.stroke();
  }
}

/** TCheckBox. A disabled box keeps its tick, greyed. */
export class PlainCheck extends CheckBox {
  constructor(x, y, w, h, options = {}) {
    super(null, x, y, options);
    this.w = w;
    this.h = h;
    this.font = { size: 16, color: '#000000' };
  }

  hit(px, py) {
    return inRect(this, px, py);
  }

  draw(g) {
    const x = this.x;
    const y = Math.round(this.y + (this.h - 13) / 2);
    g.fillStyle = this.enabled && !this.pressed ? HIGHLIGHT : FACE;
    g.fillRect(x, y, 13, 13);
    sunken(g, x, y, 13, 13);
    if (this.checked) {
      g.strokeStyle = this.enabled ? '#000000' : GREY_TEXT;
      g.lineWidth = 2;
      g.beginPath();
      g.moveTo(x + 3, y + 6);
      g.lineTo(x + 5.5, y + 9);
      g.lineTo(x + 10, y + 3.5);
      g.stroke();
    }
    if (this.caption) text(g, this.caption, x + 19, this.y + this.h / 2, this.font, this.enabled ? this.font.color : GREY_TEXT);
    if (this.parent && this.parent.focus === this) focusBox(g, this.x - 2, this.y, this.caption ? this.w + 2 : 18, this.h);
  }
}

/**
 * TRadioButton. Arrow keys move within its group and select, as in Windows, and leave it at the ends.
 * Port: from a pad they only move, and A selects: a pad has no Tab to get past a group untouched.
 */
export class PlainRadio extends RadioButton {
  constructor(x, y, w, h, options = {}) {
    super(null, x, y, options);
    this.w = w;
    this.h = h;
    this.font = { size: 15, color: '#000000' };
  }

  hit(px, py) {
    return inRect(this, px, py);
  }

  keyDown(code) {
    const dir = code === 'ArrowRight' || code === 'ArrowDown' ? 1 : code === 'ArrowLeft' || code === 'ArrowUp' ? -1 : 0;
    if (!dir) return super.keyDown(code);
    if (this.parent.rt.lastInputPad) return false;
    const group = this.parent.components.filter((c) => c instanceof PlainRadio && c.group === this.group && c.enabled && c.visible);
    const next = group[group.indexOf(this) + dir];
    if (!next) return false;
    this.parent.setFocus(next);
    next.click();
    return true;
  }

  draw(g) {
    const cx = this.x + 6.5;
    const cy = this.y + this.h / 2;
    g.fillStyle = this.enabled && !this.pressed ? HIGHLIGHT : FACE;
    g.beginPath();
    g.arc(cx, cy, 6, 0, Math.PI * 2);
    g.fill();
    g.lineWidth = 1;
    for (const [r, a, b] of [[5.5, SHADOW, HIGHLIGHT], [4.5, DARK, FACE]]) {
      g.strokeStyle = a;
      g.beginPath();
      g.arc(cx, cy, r, Math.PI * 0.75, Math.PI * 1.75);
      g.stroke();
      g.strokeStyle = b;
      g.beginPath();
      g.arc(cx, cy, r, Math.PI * 1.75, Math.PI * 0.75);
      g.stroke();
    }
    if (this.checked) {
      g.fillStyle = this.enabled ? '#000000' : GREY_TEXT;
      g.beginPath();
      g.arc(cx, cy, 2, 0, Math.PI * 2);
      g.fill();
    }
    if (this.caption) text(g, this.caption, this.x + 19, cy, this.font, this.enabled ? this.font.color : GREY_TEXT);
    if (this.parent && this.parent.focus === this) focusBox(g, this.x - 2, this.y, this.caption ? this.w + 2 : 18, this.h);
  }
}

/** TGroupBox: an etched frame with its caption in it. */
class PlainGroup extends Component {
  constructor(x, y, w, h) {
    super(x, y, w, h);
    this.caption = '';
  }

  hit() {
    return false;
  }

  draw(g) {
    const { x, w } = this;
    const y = this.y + 7;
    const h = this.h - 7;
    g.lineWidth = 1;
    g.strokeStyle = SHADOW;
    g.strokeRect(x + 0.5, y + 0.5, w - 2, h - 2);
    g.strokeStyle = HIGHLIGHT;
    g.strokeRect(x + 1.5, y + 1.5, w - 2, h - 2);
    const font = { size: readableSize(this.parent, 13) };
    g.font = `${font.size}px ${FONT}`;
    g.fillStyle = FACE;
    g.fillRect(x + 8, this.y, g.measureText(this.caption).width + 6, 14);
    text(g, this.caption, x + 11, this.y + 7, font, '#000000');
  }
}

/** TComboBox as this port needs it: the list cannot open, it only shows what the browser decides. */
export class PlainCombo extends Component {
  constructor(x, y, w, h) {
    super(x, y, w, h);
    this.enabled = false;
    this.text = '';
  }

  hit(px, py) {
    return inRect(this, px, py);
  }

  draw(g) {
    const { x, y, w, h } = this;
    g.fillStyle = FACE;
    g.fillRect(x, y, w, h);
    sunken(g, x, y, w, h);
    text(g, this.text, x + 5, y + h / 2, { size: 13 }, GREY_TEXT);
    const bx = x + w - 18;
    g.fillStyle = FACE;
    g.fillRect(bx, y + 2, 16, h - 4);
    raised(g, bx, y + 2, 16, h - 4);
    g.fillStyle = GREY_TEXT;
    g.beginPath();
    g.moveTo(bx + 4, y + h / 2 - 2);
    g.lineTo(bx + 12, y + h / 2 - 2);
    g.lineTo(bx + 8, y + h / 2 + 2);
    g.fill();
  }
}

/** TPageControl: the tabs and the page around its sheets. Controls on a sheet carry its number as .page. */
export class PlainTabs extends Component {
  constructor(x, y, w, h) {
    super(x, y, w, h);
    this.captions = [];
    this.active = 0;
    this.tabStop = true;
  }

  rects() {
    const form = this.parent;
    const g = form.rt.g;
    const size = readableSize(form, 11);
    g.font = `${size}px ${FONT}`;
    let x = this.x + 2;
    return this.captions.map((caption) => {
      const w = Math.ceil(g.measureText(caption).width) + 14;
      const r = { x, y: this.y + 2, w, h: TAB_H - 2, size };
      x += w;
      return r;
    });
  }

  tabAt(px, py) {
    const m = this.parent.rt.touchInput ? 6 : 0;
    return this.rects().findIndex((r) => px >= r.x && px < r.x + r.w && py >= r.y - m && py < r.y + r.h + m);
  }

  hit(px, py) {
    return this.tabAt(px, py) >= 0;
  }

  /** Port: the page's controls show or hide by their .page, and focus never stays on a hidden one. */
  select(k) {
    const form = this.parent;
    this.active = k;
    for (const c of form.components) {
      if (c.page !== undefined) c.visible = c.page === k;
    }
    if (form.focus && !form.focus.visible) form.setFocus(this);
    this.invalidate();
  }

  pointerDown(px, py) {
    const k = this.tabAt(px, py);
    this.parent.setFocus(this);
    if (k >= 0) this.select(k);
  }

  keyDown(code) {
    if (code === 'ArrowLeft') {
      if (this.active > 0) this.select(this.active - 1);
      return true;
    }
    if (code === 'ArrowRight') {
      if (this.active < this.captions.length - 1) this.select(this.active + 1);
      return true;
    }
    return false;
  }

  draw(g) {
    const { x, w } = this;
    const y = this.y + TAB_H;
    const h = this.h - TAB_H;
    g.fillStyle = FACE;
    g.fillRect(x, y, w, h);
    raised(g, x, y, w, h);
    const rects = this.rects();
    rects.forEach((r, k) => {
      if (k === this.active) return;
      g.fillStyle = FACE;
      g.fillRect(r.x, r.y, r.w, r.h);
      edge(g, r.x, r.y, r.w + 1, r.h + 1, HIGHLIGHT, DARK);
      g.fillStyle = HIGHLIGHT;
      g.fillRect(r.x, y, r.w, 1);
      text(g, this.captions[k], r.x + r.w / 2, r.y + r.h / 2 + 1, { size: r.size }, '#000000', 'center');
    });
    const r = rects[this.active];
    if (!r) return;
    const ax = r.x - 2;
    const aw = r.w + 4;
    g.fillStyle = FACE;
    g.fillRect(ax, this.y, aw, TAB_H + 2);
    g.fillStyle = HIGHLIGHT;
    g.fillRect(ax, this.y, aw - 1, 1);
    g.fillRect(ax, this.y, 1, TAB_H + 1);
    g.fillStyle = DARK;
    g.fillRect(ax + aw - 1, this.y, 1, TAB_H + 1);
    g.fillStyle = SHADOW;
    g.fillRect(ax + aw - 2, this.y + 1, 1, TAB_H);
    text(g, this.captions[this.active], r.x + r.w / 2, this.y + (TAB_H + 1) / 2, { size: r.size }, '#000000', 'center');
    if (this.parent.focus === this) focusBox(g, ax + 2, this.y + 2, aw - 4, TAB_H - 3);
  }
}

/** Port: a value with an arrow button on each side, in one tab stop. Left and right change it. */
export class PlainStepper extends Component {
  constructor(x, y, w, h, options = {}) {
    super(x, y, w, h);
    this.tabStop = true;
    this.tabOrder = options.tabOrder ?? 1000;
    this.onStep = options.onStep;
    this.text = '';
    this.canDown = true;
    this.canUp = true;
    this.side = 0;
    this.armed = 0;
  }

  hit(px, py) {
    return inRect(this, px, py);
  }

  sideAt(px, py) {
    if (!inRect(this, px, py)) return 0;
    const b = this.h + 8;
    if (px < this.x + b) return -1;
    if (px >= this.x + this.w - b) return 1;
    return 0;
  }

  step(dir) {
    if (dir < 0 ? this.canDown : this.canUp) this.onStep(dir);
  }

  pointerDown(px, py) {
    this.parent.setFocus(this);
    this.side = this.armed = this.sideAt(px, py);
    this.invalidate();
  }

  pointerMove(px, py) {
    if (!this.armed) return;
    const over = this.sideAt(px, py) === this.armed ? this.armed : 0;
    if (over !== this.side) {
      this.side = over;
      this.invalidate();
    }
  }

  pointerUp(px, py) {
    const armed = this.armed;
    this.pointerCancel();
    if (armed && this.sideAt(px, py) === armed) this.step(armed);
  }

  pointerCancel() {
    this.side = 0;
    this.armed = 0;
    this.invalidate();
  }

  keyDown(code) {
    if (code === 'ArrowLeft') this.step(-1);
    else if (code === 'ArrowRight') this.step(1);
    else return false;
    return true;
  }

  draw(g) {
    const { x, y, w, h } = this;
    const b = h + 8;
    g.fillStyle = HIGHLIGHT;
    g.fillRect(x + b, y, w - 2 * b, h);
    sunken(g, x + b, y, w - 2 * b, h);
    text(g, this.text, x + w / 2, y + h / 2, { size: 15 }, '#000000', 'center');
    for (const [dir, bx, can] of [[-1, x, this.canDown], [1, x + w - b, this.canUp]]) {
      g.fillStyle = FACE;
      g.fillRect(bx, y, b, h);
      if (this.side === dir) sunken(g, bx, y, b, h);
      else raised(g, bx, y, b, h);
      g.fillStyle = can ? '#000000' : GREY_TEXT;
      const mx = bx + b / 2 + (this.side === dir ? 1 : 0);
      const my = y + h / 2 + (this.side === dir ? 1 : 0);
      g.beginPath();
      g.moveTo(mx - 3 * dir, my - 6);
      g.lineTo(mx + 4 * dir, my);
      g.lineTo(mx - 3 * dir, my + 6);
      g.fill();
    }
    if (this.parent.focus === this) focusBox(g, x + b + 3, y + 3, w - 2 * b - 6, h - 6);
  }
}

/** Port: a TTrackBar. Touch or drag anywhere sets it, left and right move it by keyStep. */
export class PlainTrack extends Component {
  constructor(x, y, w, h, options = {}) {
    super(x, y, w, h);
    this.tabStop = true;
    this.tabOrder = options.tabOrder ?? 1000;
    this.min = options.min ?? 0;
    this.max = options.max ?? 100;
    this.step = options.step ?? 1;
    this.keyStep = options.keyStep ?? this.step;
    this.onChange = options.onChange;
    this.value = this.min;
    this.drag = false;
  }

  hit(px, py) {
    return inRect(this, px, py);
  }

  thumbX() {
    return this.x + 6 + ((this.value - this.min) / (this.max - this.min)) * (this.w - 12);
  }

  setValue(v, fire = true) {
    const next = Math.max(this.min, Math.min(this.max, v));
    if (next === this.value) return;
    this.value = next;
    this.invalidate();
    if (fire) this.onChange(next);
  }

  fromX(px) {
    const f = Math.max(0, Math.min(1, (px - this.x - 6) / (this.w - 12)));
    this.setValue(this.min + Math.round((f * (this.max - this.min)) / this.step) * this.step);
  }

  pointerDown(px) {
    this.parent.setFocus(this);
    this.drag = true;
    this.fromX(px);
  }

  pointerMove(px) {
    if (this.drag) this.fromX(px);
  }

  pointerUp() {
    this.drag = false;
  }

  pointerCancel() {
    this.drag = false;
  }

  keyDown(code) {
    const k = this.keyStep;
    if (code === 'ArrowLeft') this.setValue((Math.ceil(this.value / k) - 1) * k);
    else if (code === 'ArrowRight') this.setValue((Math.floor(this.value / k) + 1) * k);
    else if (code === 'Home') this.setValue(this.min);
    else if (code === 'End') this.setValue(this.max);
    else return false;
    return true;
  }

  draw(g) {
    const { x, y, w, h } = this;
    const my = y + h / 2;
    g.fillStyle = HIGHLIGHT;
    g.fillRect(x + 6, my - 2, w - 12, 4);
    sunken(g, x + 6, my - 2, w - 12, 4);
    const tx = this.thumbX();
    g.fillStyle = FACE;
    g.fillRect(tx - 6, y + 2, 12, h - 4);
    raised(g, tx - 6, y + 2, 12, h - 4);
    if (this.parent.focus === this) focusBox(g, x, y, w, h);
  }
}

/** A plain form: window frame, title bar and x around the DFM's controls. */
export class PlainDialog extends Form {
  /** rt.showModal accepts it, and the ?form= route treats it as a dialog. */
  static modal = true;

  addCaptionClose() {
    this.add(new CaptionClose(this.width - CLIENT_X - 18, 6, 16, 14, { modalResult: 2, tabStop: false }));
  }

  /** The title bar's x is no control of the form. */
  focusables(all = false) {
    return super.focusables(all).filter((c) => !(c instanceof CaptionClose));
  }

  draw(g) {
    const w = this.width;
    const h = this.height;
    g.fillStyle = FACE;
    g.fillRect(0, 0, w, h);
    raised(g, 0, 0, w, h);
    const bar = g.createLinearGradient(CLIENT_X, 0, w - CLIENT_X, 0);
    bar.addColorStop(0, '#0A246A');
    bar.addColorStop(1, '#A6CAF0');
    g.fillStyle = bar;
    g.fillRect(CLIENT_X, CLIENT_X, w - 2 * CLIENT_X, CAPTION_H);
    text(g, this.title ?? '', CLIENT_X + 4, CLIENT_X + CAPTION_H / 2 + 1, { size: readableSize(this, 11), bold: true }, '#FFFFFF');
    super.draw(g);
  }
}

/**
 * Builds a PlainDialog from its DFM: form size from Width and Height, each control as form[name],
 * with its Left and Top made absolute. Handlers in the DFM bind to methods of the same name. Radio
 * groups are per parent, as in the VCL. Then the caption engine FUN_004865e4: labels here keep
 * their regular style, and TButton and TRadioButton get their caption and font from it as well.
 */
export function loadPlainDfm(form, dfmName) {
  const tree = form.rt.forms[dfmName];
  const className = tree.class;
  form.width = tree.props.Width;
  form.height = tree.props.Height;
  const walk = (node, ox, oy, page, base, weight) => {
    for (const ch of node.children) {
      const p = ch.props;
      const x = (p.Left ?? 0) + ox;
      const y = (p.Top ?? 0) + oy;
      const w = p.Width ?? 0;
      const h = p.Height ?? 0;
      // TabOrder is per parent in the VCL. Flattened here: a child comes after its parent.
      const tabOrder = base + (p.TabOrder ?? 0) * weight;
      let c = null;
      if (ch.class === 'TButton') {
        c = new PlainButton(x, y, w, h, { modalResult: p.ModalResult, cancel: p.Cancel, default: p.Default, tabOrder });
      } else if (ch.class === 'TCheckBox') {
        c = new PlainCheck(x, y, w, h, { tabOrder });
      } else if (ch.class === 'TRadioButton') {
        c = new PlainRadio(x, y, w, h, { group: node.name, tabOrder });
      } else if (ch.class === 'TLabel') {
        c = new Label(x, y, w, h, '', {}, { wordWrap: p.WordWrap === true, autoSize: p.AutoSize !== false });
      } else if (ch.class === 'TComboBox') {
        c = new PlainCombo(x, y, w, h);
        c.items = [...String(p['Items.Strings'] ?? '').matchAll(/'([^']*)'/g)].map((m) => m[1]);
      } else if (ch.class === 'TGroupBox') {
        c = new PlainGroup(x, y, w, h);
      } else if (ch.class === 'TPageControl') {
        c = new PlainTabs(x, y, w, h);
        c.tabOrder = tabOrder;
      }
      if (!c) continue;
      c.name = ch.name;
      if (page !== null) c.page = page;
      if (p.OnClick && !(c instanceof PlainCombo)) c.onClick = () => form[p.OnClick]?.(c);
      form[ch.name] = c;
      form.add(c);
      if (ch.class === 'TPageControl') {
        ch.children.forEach((sheet, k) => walk(sheet, x + SHEET_X, y + SHEET_Y, k, tabOrder + weight / 100, weight / 100));
      } else if (ch.children.length) {
        walk(ch, x, y, page, tabOrder + weight / 100, weight / 100);
      }
    }
  };
  walk(tree, CLIENT_X, CLIENT_Y, null, 0, 10000);
  applyCaptions(form, className);
  const ini = form.rt.data.vfs.parsedIni('menucaps.ini');
  const dflt = (key, fallback) => ini.get('DEFAULT', key) ?? fallback;
  const pixels = (points) => Math.round((Number(points) * 96) / 72);
  const g = form.rt.g;
  for (const c of form.components) {
    if (!c.name) continue;
    const get = (key, fallback) => ini.get(className, `${c.name}.${key}`) ?? fallback;
    if (c instanceof PlainButton || c instanceof PlainRadio) {
      c.caption = get('Caption', '');
      c.font.size = pixels(get('FontSize', dflt('BtnFontSize', 11)));
      c.font.color = delphiColor(get('FontColor', dflt(c instanceof PlainButton ? 'BtnFontColor' : 'FontColor', '0x00000000')));
    } else if (c instanceof Label && c.autoSize) {
      // AutoSize: the label is as large as its text, for a click as much as for drawing.
      g.font = `${c.font.size}px ${FONT}`;
      c.w = Math.ceil(g.measureText(c.text).width);
      c.h = Math.round(c.font.size * 1.2);
    }
  }
  form.addCaptionClose();
}
