// The shared base forms of menu.exe, the DFM loader and the caption engine.
// Specification: docs/research/menu-forms.md sections 6, 7, 8 and 9.
import { Form, Button, CheckBox, RadioButton, Label, ImageBox, Slider, EditBox, ButtonDef } from './framework.js';

/** TGDIButtonDefinition names to file stems. Table in menu-forms.md section 8. */
const STEMS = {
  gdfBtnHelp: 'helpm', gdfBtnClose: 'end', gdfBtnNext: 'nextm', gdfBtnNextSingle: 'nexts', gdfBtnPrevious: 'backm',
  gdfBtnOkDlg: 'okay', gdfBtnOkSingleDlg: 'okas', gdfBtnCancelDlg: 'cance', gdfBtnCloseDlg: 'cross', gdfBtnYesDlg: 'ryes',
  gdfBtnNoDlg: 'lno', gdfBtnNextItem: 'next2', gdfBtnPreviousItem: 'back2', gdfRadioBtn: 'radio', gdfCheckBox: 'check',
  gdfBtnTour: 'tour', gdfBtnQR: 'quick', gdfBtnInternet: 'inter', gdfBtnPlayer: 'playe', gdfBtnOptions: 'optio',
  gdfBtnEasy: 'easy', gdfBtnMedium: 'norma', gdfBtnHard: 'hard', gdfBtnChoose: 'newch', gdfBtnPrevious3: 'back3',
  gdfBtnNext3: 'next3', gdfBtnBuyTU: 'buy', gdfBtnAdvVideo: 'advan', gdfBtnCtrlSettings: 'setti', gdfBtnDefault: 'defau',
  gdfBtnKey: 'key', gdfBtnDeletePlayer: 'delet', defEmpty: 'butp1', gdfBigRadioBtnMain: 'radhm', gdfRadioBtnExit: 'radex',
};

const defCache = new Map();

/** Loads a button definition by its Delphi name, with or without the 'Data.' prefix. */
export async function buttonDef(rt, name) {
  const key = name.replace(/^Data\./, '');
  if (defCache.has(key)) return defCache.get(key);
  const stem = STEMS[key] || key;
  const radioLike = key === 'gdfRadioBtn' || key === 'gdfCheckBox';
  const def = await ButtonDef.load(rt.assets, stem, {
    factor: radioLike ? 150 : 255,
    onState: radioLike ? radioState : combinedState,
  });
  defCache.set(key, def);
  return def;
}

/** gdfRadioBtnButtonStateChange: Down plays wavRadioBtn. */
function radioState(button, state) {
  if (state === 1) button.parent?.rt.sound.playFx('start');
}

/** CombinedBtnStateChange: on Down or Focused the button comes to the front; Down plays wavBtnDown. */
function combinedState(button, state) {
  if (state === 1 || state === 2) button.parent?.bringToFront(button);
  if (state === 1) button.parent?.rt.sound.playFx('start');
}

const COLORREF = (v) => {
  const n = typeof v === 'number' ? v : parseInt(String(v).replace(/^\$|^0x/i, ''), 16);
  return `rgb(${n & 255},${(n >> 8) & 255},${(n >> 16) & 255})`;
};

/** Delphi colour names and $00BBGGRR values in DFMs. */
export function delphiColor(v) {
  const names = { clWhite: '#FFFFFF', clBlack: '#000000', clYellow: '#FFFF00', clRed: '#FF0000', clLime: '#00FF00', clBlue: '#0000FF', clMaroon: '#800000', clNavy: '#000080', clGray: '#808080', clSilver: '#C0C0C0', clWindowText: '#000000', clBtnFace: '#D4D0C8' };
  if (typeof v === 'string' && names[v]) return names[v];
  return COLORREF(v);
}

/**
 * Creates or updates the form's components from its DFM. Existing components with the
 * same name (made by a base class) only take the properties the DFM sets.
 * Handlers named in the DFM, such as OnClick = btnNextClick, bind to form methods.
 */
export async function loadDfm(form, dfmName) {
  const rt = form.rt;
  const tree = rt.forms[dfmName];
  if (!tree) throw new Error('No DFM ' + dfmName);
  form.dfmClass = tree.class;
  const walk = async (node, ox, oy, parentVisible) => {
    for (const ch of node.children) {
      const p = ch.props;
      let c = form[ch.name];
      const x = (p.Left ?? (c ? c.x - ox : 0)) + ox;
      const y = (p.Top ?? (c ? c.y - oy : 0)) + oy;
      const cls = ch.class;
      if (cls === 'TGDIButtonDefinition' || cls === 'TDaviWave' || cls === 'TPopupMenu' || cls === 'TMenuItem') continue;
      if (cls === 'TTimer') {
        form[ch.name] = { interval: p.Interval ?? 1000, enabled: p.Enabled !== false, handler: p.OnTimer, name: ch.name };
        continue;
      }
      if (ch.name === 'imgBackGround') continue;
      if (cls === 'TGDIButton' || cls === 'TGDICheckBox' || cls === 'TGDIRadioButton') {
        const Ctor = cls === 'TGDICheckBox' ? CheckBox : cls === 'TGDIRadioButton' ? RadioButton : Button;
        if (!c) {
          const def = p.Definition ? await buttonDef(rt, String(p.Definition)) : null;
          c = new Ctor(def, x, y);
          // TabStop defaults to False on these: the DFM only stores True.
          c.tabStop = false;
          form.add(c);
        } else {
          if (p.Definition) c.setDef(await buttonDef(rt, String(p.Definition)));
          if (p.Left !== undefined) c.x = x;
          if (p.Top !== undefined) c.y = y;
        }
        if (p.TabOrder !== undefined) c.tabOrder = p.TabOrder;
        if (p.TabStop !== undefined) c.tabStop = p.TabStop;
        if (p.Default !== undefined) c.isDefault = p.Default;
        if (p.Cancel !== undefined) c.isCancel = p.Cancel;
        if (p.ModalResult) c.modalResult = p.ModalResult;
        if (p.Enabled !== undefined) c.enabled = p.Enabled;
        if (p.Visible !== undefined) c.visible = p.Visible;
        if (p.Checked !== undefined) c.checked = p.Checked;
        if (p.OnClick) bind(form, c, 'onClick', p.OnClick);
      } else if (cls === 'TLabel') {
        if (!c) {
          // TLabel.AutoSize defaults to True: such a label grows with its text, so it never clips.
          c = new Label(x, y, p.Width ?? 0, p.Height ?? 0, '', {}, { wordWrap: p.WordWrap === true, align: alignOf(p.Alignment), layout: p.Layout === 'tlCenter' ? 'center' : 'top', autoSize: p.AutoSize !== false });
          form.add(c);
        } else {
          if (p.Left !== undefined) c.x = x;
          if (p.Top !== undefined) c.y = y;
        }
        if (p.Visible !== undefined) c.visible = p.Visible;
        if (p.OnClick) bind(form, c, 'onClick', p.OnClick);
      } else if (cls === 'TGDIGraphic' || cls === 'TImage') {
        if (!c) {
          c = new ImageBox(x, y, null, { w: p.Width ?? 0, h: p.Height ?? 0, stretch: p.Stretch === true });
          form.add(c);
        }
        if (p.Visible !== undefined) c.visible = p.Visible;
        if (p.OnClick) bind(form, c, 'onClick', p.OnClick);
      } else if (cls === 'TDaviGraphicSlider') {
        if (!c) {
          const needle = await rt.assets.image('slider.bmp');
          c = new Slider(x, y, null, needle, { w: p.Width ?? 111, h: p.Height ?? 15, min: p.Min ?? 0, max: p.Max ?? 100, position: p.Position ?? 0, largeStep: p.LargeStep ?? 5, tabOrder: p.TabOrder });
          form.add(c);
        }
        if (p.OnChange) {
          const h = p.OnChange;
          c.onChange = (v) => form[h] && form[h](c, v);
        }
      } else if (cls === 'TEdit') {
        if (!c) {
          c = new EditBox(x, y, p.Width ?? 100, p.Height ?? 24, { maxLength: p.MaxLength || 255, tabOrder: p.TabOrder });
          form.add(c);
        }
      } else if (cls === 'TPanel' || cls === 'TGroupBox' || cls === 'TPageControl' || cls === 'TTabSheet') {
        await walk(ch, x, y, parentVisible);
        continue;
      } else {
        // TMediaPlayer, TComboBox, TMemo and such: the form's code handles these.
        form[ch.name] = form[ch.name] || { name: ch.name, class: cls, props: p, x, y, w: p.Width, h: p.Height };
        continue;
      }
      c.name = ch.name;
      form[ch.name] = c;
      if (ch.children.length) await walk(ch, x, y, parentVisible);
    }
  };
  await walk(tree, 0, 0, true);
  applyCaptions(form, tree.class);
}

function alignOf(a) {
  return a === 'taCenter' ? 'center' : a === 'taRightJustify' ? 'right' : 'left';
}

function bind(form, c, slot, handler) {
  c[slot] = (...args) => {
    if (form[handler]) return form[handler](c, ...args);
    console.warn('Missing handler', handler, 'on', form.constructor.name);
    return undefined;
  };
}

/** FUN_004865e4: menucaps.ini by form class and component name. */
export function applyCaptions(form, className) {
  const rt = form.rt;
  const ini = rt.data.vfs.parsedIni('menucaps.ini');
  const get = (key, fallback) => {
    const v = ini.get(className, key);
    return v === null ? fallback : v;
  };
  const dflt = (key, fallback) => {
    const v = ini.get('DEFAULT', key);
    return v === null ? fallback : v;
  };
  const defSize = Number(dflt('FontSize', 12));
  const defColor = dflt('FontColor', '0x0040D2F1');
  for (const c of form.components) {
    if (!c.name) continue;
    const left = get(c.name + '.Left', null);
    const top = get(c.name + '.Top', null);
    if (left !== null) c.x = Number(left);
    if (top !== null) c.y = Number(top);
    if (c instanceof Label) {
      c.text = get(c.name + '.Caption', '');
      const size = Number(get(c.name + '.FontSize', defSize));
      c.font.size = Math.round((size * 96) / 72);
      c.font.color = delphiColor(get(c.name + '.FontColor', defColor));
      // Everywhere but in TfrmDisplaySettings, the class test in FUN_004865e4.
      c.font.bold = className !== 'TfrmDisplaySettings';
    }
    if (c instanceof Button) c.caption = '';
  }
}

/** TGameMenuScreen: every screen is 800x600 with Help and Einde buttons. */
export class GameMenuScreen extends Form {
  /** Background name: Copy(ClassName, 5, 8) lowercase, unless overridden. */
  backgroundName() {
    return this.constructor.className.slice(4, 12).toLowerCase() + '.bmp';
  }

  async create() {
    const rt = this.rt;
    this.background = await rt.assets.image(this.backgroundName()) || await rt.assets.image('currentc.bmp');
    this.btnHelp = this.add(new Button(await buttonDef(rt, 'gdfBtnHelp'), 609, 7, { tabOrder: 0, onClick: () => this.helpClick() }));
    this.btnHelp.name = 'btnHelp';
    // Tab orders as the base DFMs inherit them; TBaseFormTwoWay moves Einde to 3. A form's own DFM overrides them.
    this.btnClose = this.add(new Button(await buttonDef(rt, 'gdfBtnClose'), 685, 7, { tabOrder: this.btnPrevious ? 3 : 1, cancel: true, onClick: () => this.closeClick() }));
    this.btnClose.name = 'btnClose';
    if (this.constructor.dfm) await loadDfm(this, this.constructor.dfm);
  }

  onShow() {
    this.rt.sound.stopVoice();
  }

  // btnHelpClick 0x49e678.
  helpClick() {
    this.rt.data.flow.helpRequested(this.rt, this);
  }

  /** btnCloseClick 0x49e9bc: TfrmCloseDlg, set by the forms module to avoid an import cycle. */
  closeClick() {
    this.rt.data.flow.closeRequested(this.rt);
  }
}

/** TBaseFormOneWay: Verder at 649,518. */
export class OneWayScreen extends GameMenuScreen {
  async create() {
    const rt = this.rt;
    this.btnNext = this.add(new Button(await buttonDef(rt, 'gdfBtnNextSingle'), 649, 518, { tabOrder: 2, default: true, onClick: () => this.next() }));
    this.btnNext.name = 'btnNext';
    await super.create();
  }

  onShow() {
    super.onShow();
    this.setFocus(this.btnNext);
  }

  next() {}
}

/** TBaseFormTwoWay: adds Terug at 581,552. Verder's look changes so the two can overlap. */
export class TwoWayScreen extends OneWayScreen {
  async create() {
    const rt = this.rt;
    this.btnPrevious = this.add(new Button(await buttonDef(rt, 'gdfBtnPrevious'), 581, 552, { tabOrder: 1, onClick: () => this.previous() }));
    this.btnPrevious.name = 'btnPrevious';
    await super.create();
    this.btnNext.setDef(await buttonDef(rt, 'gdfBtnNext'));
  }

  previous() {}
}

/** TfrmCoolDialog: sized by its background TGA, with OK, x and Help defaults. */
export class CoolDialog extends Form {
  backgroundName() {
    return this.constructor.className.slice(4, 12).toLowerCase() + '.tga';
  }

  async create() {
    const rt = this.rt;
    const bg = await rt.assets.image(this.backgroundName());
    this.background = bg;
    if (bg) {
      this.width = bg.width;
      this.height = bg.height;
    }
    this.btnOk1 = this.add(new Button(await buttonDef(rt, 'gdfBtnOkDlg'), 0, 0, { default: true, modalResult: 1, tabOrder: 0 }));
    this.btnOk1.name = 'btnOk1';
    this.btnClose = this.add(new Button(await buttonDef(rt, 'gdfBtnCloseDlg'), 0, 0, { cancel: true, modalResult: 2, tabOrder: 2 }));
    this.btnClose.name = 'btnClose';
    this.btnHelp = this.add(new Button(await buttonDef(rt, 'gdfBtnHelp'), 0, 0, { tabOrder: 1, onClick: () => rt.data.flow.helpRequested(rt, this) }));
    this.btnHelp.name = 'btnHelp';
    if (this.constructor.dfm) await loadDfm(this, this.constructor.dfm);
  }

  onShow() {
    this.setFocus(this.btnOk1);
  }
}
