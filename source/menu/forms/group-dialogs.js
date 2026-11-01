// The small dialogs of menu.exe and its Help. docs/research/menu-forms.md section 12, nos. 11 and
// 28 to 37, 43, 44. Result 1 is OK or Ja, 2 is Annuleren, Nee or x, unless a form says otherwise.
import { CoolDialog, buttonDef, delphiColor, loadDfm } from '../base-forms.js';
import { Component, Form, Label, wrapLines } from '../framework.js';
import { useTouch } from '../../settings.js';

const FONT_ARIAL = 'Arial, Helvetica, sans-serif';

/** Height of a word-wrapped label at its width, as AutoSize gives it. Label.draw uses the same line height. */
function wrappedHeight(g, label) {
  const f = label.font;
  g.font = `${f.bold ? 'bold ' : ''}${f.size}px ${f.name}`;
  return wrapLines(g, label.text, label.w).length * Math.round(f.size * 1.2);
}

/** The look shared by the two name fields: no border, colour 36546, MaxLength 12, Enter is OK. */
class NameDialog extends CoolDialog {
  async create() {
    await super.create();
    this.txtName.background = delphiColor(this.rt.forms[this.constructor.dfm].children.find((c) => c.name === 'txtName').props.Color);
    this.txtName.onEnter = () => this.txtNameKeyDown();
    this.txtName.setText(this.args.name || '');
  }

  onShow() {
    super.onShow();
    this.setFocus(this.txtName);
  }

  // TfrmNewPlayer 0x494d44, TfrmHighScoreDlg 0x494fb0.
  txtNameKeyDown() {
    this.modalResult = 1;
    this.finishModal();
  }

  /** ShowNewPlayerDlg FUN_00498414 and ShowHighScoreDlg FUN_004984f0 read the text after ShowModal. */
  onClose() {
    this.args.name = this.txtName.text;
  }
}

/** TfrmCloseDlg, FormCloseDlg 0x49de64. Result 1 main menu, 3 quit, 2 stay: flow.closeRequested. */
export class TfrmCloseDlg extends CoolDialog {
  static className = 'TfrmCloseDlg';
  static dfm = 'TFRMCLOSEDLG';

  async create() {
    await super.create();
    this.optMainScreen.setChecked(true);
  }

  // 0x49e078
  btnOk1Click() {
    this.modalResult = this.optMainScreen.checked ? 1 : 3;
    this.finishModal();
  }
}

/** TfrmNoMoney, FormNoMoney 0x496f28. Garage Kopen, launcher FUN_004986d0. */
export class TfrmNoMoney extends CoolDialog {
  static className = 'TfrmNoMoney';
  static dfm = 'TFRMNOMONEY';
}

/** TfrmHighScoreDlg, FormHighScoreDlg 0x494de0. args.name is the player name, then the text typed. */
export class TfrmHighScoreDlg extends NameDialog {
  static className = 'TfrmHighScoreDlg';
  static dfm = 'TFRMHIGHSCOREDLG';

  async create() {
    await super.create();
    this.btnOk1.setDef(await buttonDef(this.rt, 'gdfBtnOkSingleDlg'));
  }

  // GDIFormShow 0x494f50: the field selects its text when focused.
  onShow() {
    super.onShow();
    this.txtName.element?.select();
    this.rt.sound.playVoice('aud2');
  }
}

/** TfrmCDRequest, FormCDRequest 0x497108. Never shown: the port has no disc. */
export class TfrmCDRequest extends CoolDialog {
  static className = 'TfrmCDRequest';
  static dfm = 'TFRMCDREQUEST';

  // GDIFormShow 0x497260.
  async create() {
    await super.create();
    this.btnCancel.setDef(await buttonDef(this.rt, 'gdfBtnCancelDlg'));
    this.btnCancel.tabStop = false;
  }
}

/** TfrmInternetDlg, FormInternetDlg 0x497320. Ja was result 1, then the site. Not reached: TfrmMainScreen keeps Internet off. */
export class TfrmInternetDlg extends CoolDialog {
  static className = 'TfrmInternetDlg';
  static dfm = 'TFRMINTERNETDLG';

  backgroundName() {
    return 'popempty.tga';
  }

}

/** TfrmNewPlayer, FormNewPlayer 0x494ba4. args.name returns the text; callers loop on an empty name. */
export class TfrmNewPlayer extends NameDialog {
  static className = 'TfrmNewPlayer';
  static dfm = 'TFRMNEWPLAYER';
}

/** TfrmDeletePlayer, FormDeletePlayer 0x496c14. args.name is the player in the question. */
export class TfrmDeletePlayer extends CoolDialog {
  static className = 'TfrmDeletePlayer';
  static dfm = 'TFRMDELETEPLAYER';

  backgroundName() {
    return 'popempty.tga';
  }

  // GDIFormShow 0x496e14.
  async create() {
    await super.create();
    this.lblSure.setText(this.rt.data.menuFormat(4, this.args.name));
    this.btnCancel.tabStop = false;
  }
}

/** TfrmDoubleKeys, FormDoubleKeys 0x4948a8. args.key is the key name, launcher FUN_00498828. */
export class TfrmDoubleKeys extends CoolDialog {
  static className = 'TfrmDoubleKeys';
  static dfm = 'TFRMDOUBLEKEYS';

  backgroundName() {
    return 'popempty.tga';
  }

  // GDIFormShow 0x494a90.
  async create() {
    await super.create();
    this.btnOk1.setDef(await buttonDef(this.rt, 'gdfBtnOkSingleDlg'));
    this.lblDouble.setText(this.rt.data.menuFormat(6, this.args.key));
  }
}

/** The caption strip on a portrait: Arial in the VCL default size and colour, FUN_004946e8. */
const PORTRAIT_CAPTION = { rect: [10, 135, 115, 155], font: { size: 11, color: '#000000', bold: false } };

/**
 * TfrmPlayer, FormPlayer 0x4930d0, launcher FUN_00498634. The current player on the left, up to
 * four others or Nieuwe speler on the right. Result 2 puts every save back.
 */
export class TfrmPlayer extends CoolDialog {
  static className = 'TfrmPlayer';
  static dfm = 'TFRMPLAYER';

  // InitDlg 0x49354c, GDIFormCreate 0x494658, GDIFormShow 0x4946b8.
  async create() {
    await super.create();
    this.remove(this.imgBack);
    this.btn0.tabStop = false;
    this.rt.data.beginPlayerDialog();
    await this.refresh();
  }

  /** ExitDlg 0x493658. */
  onClose() {
    this.rt.data.endPlayerDialog(this.modalResult);
  }

  /** Refresh FUN_00493ed0 with the portraits of FUN_0049421c. */
  async refresh() {
    const d = this.rt.data;
    const others = d.otherPlayers();
    const empty = await buttonDef(this.rt, 'defEmpty');
    const slots = await Promise.all([1, 2, 3, 4].map((n) => (others[n - 1] ? this.portraitDef(others[n - 1].tourChar) : empty)));
    this.others = others;
    this.btn0.setDef(await this.portraitDef(d.player.tourChar));
    this.setCaption(this.btn0, d.player.name);
    slots.forEach((def, k) => {
      const btn = this['btn' + (k + 1)];
      btn.setDef(def);
      btn.tag = others[k] ? k : -1;
      this.setCaption(btn, others[k] ? others[k].name : d.menuString(17));
    });
    this.btnDeletePlayer.enabled = others.length > 0;
    this.invalidate();
  }

  portraitDef(char) {
    return buttonDef(this.rt, 'pch' + String(char.indexInGame).padStart(2, '0'));
  }

  setCaption(btn, text) {
    btn.caption = text;
    btn.captionRect = PORTRAIT_CAPTION.rect;
    btn.captionFont = PORTRAIT_CAPTION.font;
  }

  // 0x4943bc, on btn1 to btn4.
  async btn1Click(sender) {
    if (sender.tag === -1) await this.addNewPlayer();
    else this.rt.data.loadPlayer(this.others[sender.tag].number);
    await this.refresh();
  }

  /** AddNewPlayer FUN_00493754. Annuleren with text typed makes no player here, unlike at start-up. */
  async addNewPlayer() {
    const d = this.rt.data;
    const { result, name } = await d.flow.askPlayerName(this.rt);
    if (result === 1) d.createPlayer(name);
  }

  // 0x4944fc: the first other player takes over, through btn1's own OnClick.
  async btnDeletePlayerClick() {
    const d = this.rt.data;
    const answer = await this.rt.showModal(TfrmDeletePlayer, { name: d.player.name });
    if (answer !== 1) return;
    d.deletePlayer(d.menuIni.currentPlayer);
    await this.btn1Click(this.btn1);
  }
}

/**
 * Port addition below the original art, docs/intentional-differences.md, Input. The labels are
 * the ones on the on-screen controls in source/index.html.
 */
const TOUCH_NOTE = 'Op een aanraakscherm: het stuur links op het scherm stuurt naar links en rechts, boven op het stuur is gas, onder is remmen en achteruit. Knoppen: Claxon, Turbo, Handrem, Camera, Terugkijken, Reset, Pauze, Stop, Roepen, Dashboard, Detail. Liggend staan de laatste drie onder Meer.';
const TOUCH_NOTE_FONT = { color: '#F1D240', bold: true };

/** TfrmStartInfo, FormStartInfo 0x4975f0. The reminder before a race for joystick, gamepad or wheel. */
export class TfrmStartInfo extends CoolDialog {
  static className = 'TfrmStartInfo';
  static dfm = 'TFRMSTARTINFO';

  // vmt_0e4 0x497818: ControlType 1 joystick, 2 gamepad, 3 wheel, otherwise the keyboard's.
  backgroundName() {
    const art = ['popstrt0', 'popstrt2', 'popstrt1', 'popstrt3'];
    return art[this.rt.data.player.settings.controls.controlType] + '.tga';
  }

  async create() {
    await super.create();
    this.chkStartInfo.checked = this.rt.data.player.settings.startInfoOn;
    if (useTouch(this.rt.data.app.settings)) this.addTouchNote();
  }

  /** The form grows by the note: the art keeps its place and its proportions. */
  addTouchNote() {
    const margin = 10;
    // Dialogs scale down to the width of a phone: the wide art gets larger text to stay readable there.
    const font = { ...TOUCH_NOTE_FONT, size: this.width > 400 ? 20 : 15 };
    const note = new Label(margin, this.height + margin, this.width - 2 * margin, 0, TOUCH_NOTE, font, { wordWrap: true });
    note.h = wrappedHeight(this.rt.g, note);
    this.add(note);
    this.artHeight = this.height;
    this.height += note.h + 2 * margin;
  }

  draw(g) {
    if (this.artHeight) {
      g.fillStyle = '#000000';
      g.fillRect(0, this.artHeight, this.width, this.height - this.artHeight);
    }
    super.draw(g);
  }

  // 0x4978d0
  lblClickAreaClick() {
    this.chkStartInfo.click();
  }

  // 0x4977e0
  btnOkClick() {
    this.rt.data.player.settings.startInfoOn = this.chkStartInfo.checked;
    this.modalResult = 1;
    this.finishModal();
  }
}

/** TfrmStartInfoKeyBoard 0x49796c, a descendant in the DFM too. Shows the keys on POPSTRT0's caps. */
export class TfrmStartInfoKeyBoard extends TfrmStartInfo {
  static className = 'TfrmStartInfoKeyBoard';

  // GDIFormShow 0x4980d4, key names by FUN_00497f54.
  async create() {
    await super.create();
    await loadDfm(this, 'TFRMSTARTINFOKEYBOARD');
    const d = this.rt.data;
    const keys = d.player.settings.controls;
    this.lblSetGas.setText(d.keyName(keys.up));
    this.lblSetBrake.setText(d.keyName(keys.down));
    this.lblSetLeft.setText(d.keyName(keys.left));
    this.lblSetRight.setText(d.keyName(keys.right));
    this.lblSetParkingBrake.setText(d.keyName(keys.extra2));
    this.lblSetTurbo.setText(d.keyName(keys.extra1));
    this.lblSetHorn.setText(d.keyName(keys.extra3));
  }
}

/** Hunny.acs, 75x150 per frame, in rows of 19 on hunny_agent.png: tools/prepare-assets.py. */
const AGENT = { w: 75, h: 150, perRow: 19, rest: 20, idleEvery: 10000 };

const countUp = (a, b) => Array.from({ length: b - a + 1 }, (_, k) => a + k);
const countDown = (a, b) => countUp(b, a).reverse();

/** The animations of Hunny.acs: frame numbers, and the frame time in ms. The file has no sound. */
const AGENT_ANIMATIONS = {
  Showing: { ms: 50, frames: countUp(0, 20) },
  Hiding: { ms: 50, frames: countDown(20, 0) },
  IdlingLevel1: { ms: 100, frames: [...countUp(21, 32), ...countDown(31, 21)] },
  IdlingLevel2: { ms: 40, frames: [33, 34, 35, 36, 37, 36, 35, 34, 33, 33, 34, 35, 37, 36, 36, 35, 34, 33, 33, 34, 35, 36, 37, 36, 35, 34, 33] },
  IdlingLevel3: { ms: 100, frames: [...countUp(38, 56), ...countDown(55, 38)] },
};
const IDLE_ORDER = ['IdlingLevel1', 'IdlingLevel2', 'IdlingLevel3'];

/** BalloonPosition 1 of FUN_00477d64: a rounded frame with its tail down at x 67..76. W, H are the form's size. */
function balloonOutline(W, H) {
  const T = 48;
  return [
    [5, 0], [5, 1], [3, 1], [3, 2], [2, 2], [2, 3], [1, 3], [1, 5], [0, 5], [0, H - 21], [1, H - 21], [1, H - 19], [2, H - 19], [2, H - 18],
    [4, H - 18], [4, H - 17], [T + 19, H - 17], [T + 19, H - 16], [T + 20, H - 16], [T + 20, H - 14], [T + 21, H - 14], [T + 21, H - 13],
    [T + 22, H - 13], [T + 22, H - 11], [T + 23, H - 11], [T + 23, H - 9], [T + 24, H - 9], [T + 24, H - 8], [T + 25, H - 8], [T + 25, H - 6],
    [T + 26, H - 6], [T + 26, H - 5], [T + 27, H - 5], [T + 27, H - 3], [T + 28, H - 2], [T + 28, H - 1], [T + 28, H - 17], [W - 5, H - 17],
    [W - 5, H - 18], [W - 3, H - 18], [W - 3, H - 19], [W - 2, H - 19], [W - 2, H - 21], [W - 1, H - 21], [W - 1, 5], [W - 2, 5], [W - 2, 3],
    [W - 3, 3], [W - 3, 2], [W - 4, 2], [W - 4, 1], [W - 6, 1], [W - 6, 0], [5, 0],
  ];
}

/** TDaviLinkLabel 0x4771d0 as FUN_00477ab0 sets it up: underlined, $1F0674, the default font colour on hover. */
class BalloonLink extends Label {
  draw(g) {
    const f = this.font;
    g.font = `${f.size}px ${f.name}`;
    g.fillStyle = this.hovered ? '#000000' : f.color;
    g.textBaseline = 'top';
    let y = this.y;
    for (const line of wrapLines(g, this.text, this.w)) {
      g.fillText(line, this.x, y);
      g.fillRect(this.x, y + f.size + 1, g.measureText(line).width, 1);
      y += Math.round(f.size * 1.2);
    }
  }
}

/** btnClose, a TDaviSpeedButton: white face, black dark edge, and the cross of its Glyph.Data. */
class BalloonClose extends Component {
  constructor(x, y, onClick) {
    super(x, y, 12, 12);
    this.onClick = onClick;
  }

  /** Larger than the 12 pixels it shows: this has to work on a touch screen as well. */
  hit(px, py) {
    return px >= this.x - 8 && py >= this.y - 8 && px < this.x + this.w + 8 && py < this.y + this.h + 8;
  }

  draw(g) {
    g.fillStyle = '#000000';
    g.fillRect(this.x + this.w - 1, this.y, 1, this.h);
    g.fillRect(this.x, this.y + this.h - 1, this.w, 1);
    g.fillStyle = '#626092';
    for (let k = 1; k <= 8; k++) {
      g.fillRect(this.x + 1 + k, this.y + 1 + k, 1, 1);
      g.fillRect(this.x + 10 - k, this.y + 1 + k, 1, 1);
    }
  }

  pointerUp(px, py) {
    if (this.hit(px, py)) this.onClick();
  }
}

/**
 * TBalloonForm, FormBalloon 0x4776e8, and the Microsoft Agent character it belongs to (TDaviAgent
 * FUN_0047dac8), one object here as there was one per run. Help on any screen or dialog shows it
 * next to that form's Help button. It floats: the form below keeps working, and it stays until x
 * or until that form closes (GDIFormClose 0x48937c, TGameMenuScreen 0x49ecb4).
 * Coordinates are its own: the balloon at 0,0 and Hunny below it, as agent.Top = balloon bottom + 6.
 */
export class TBalloonForm extends Form {
  static className = 'TBalloonForm';
  static current = null;

  /** btnHelpClick: the voice, the balloon from agent.ini, Show. */
  static showFor(rt, owner) {
    rt.sound.playVoice('cmh07_00');
    if (TBalloonForm.current) TBalloonForm.current.open(owner);
    else rt.showModal(TBalloonForm, { owner });
  }

  async create() {
    TBalloonForm.current = this;
    this.sheet = await this.rt.assets.image('hunny_agent.png');
    this.frame = -1;
    if (!this.owner) this.open(this.args.owner ?? null);
  }

  onClose() {
    TBalloonForm.current = null;
    this.rt.canvas.style.cursor = '';
  }

  /** The balloon of FUN_00482af8 for the owner's class, placed by the owner's Help button. */
  open(owner) {
    const rt = this.rt;
    this.owner = owner;
    this.hideOnOwnerClose(owner);
    this.layoutBalloon(owner ? owner.constructor.className : 'TfrmMainScreen');
    const k = rt.modals.indexOf(this);
    if (k >= 0 && k !== rt.modals.length - 1) {
      rt.modals.splice(k, 1);
      rt.modals.push(this);
    }
    if (this.frame < 0 || this.animation === AGENT_ANIMATIONS.Hiding) this.play('Showing', () => this.idleLater(0));
    this.invalidate();
  }

  hideOnOwnerClose(owner) {
    if (!owner || owner.helpHooked) return;
    owner.helpHooked = true;
    const close = owner.onClose;
    owner.onClose = () => {
      close.call(owner);
      const agent = TBalloonForm.current;
      if (agent && agent.owner === owner) agent.hide();
    };
  }

  /**
   * FUN_00477c98, FUN_0047e28c and FUN_00477ab0: width 150, caption at 6,6, x at 132,6, links from
   * y 42 at 3 px apart. FUN_0047d4d0 makes the height the last link's end + 30.
   */
  layoutBalloon(className) {
    const rt = this.rt;
    const ini = rt.data.vfs.parsedIni('agent.ini');
    const section = className + 'BalloonItems';
    this.components = [];
    this.focus = null;
    this.balloonVisible = true;
    const caption = new Label(6, 6, 126, 43, ini.get(className, 'Caption') ?? 'Error', { name: FONT_ARIAL, size: 12, color: '#000000', bold: true }, { wordWrap: true });
    this.add(caption);
    this.add(new BalloonClose(132, 6, () => this.hide()));
    let next = 42;
    for (const name of ini.keys(section)) {
      const context = Number(ini.get(section, name));
      const link = new BalloonLink(6, next, 138, 0, name, { name: FONT_ARIAL, size: 13, color: '#74061F', bold: false }, { onClick: () => showHelpContext(rt, context) });
      link.h = wrappedHeight(rt.g, link);
      this.add(link);
      next += link.h + 3;
    }
    this.balloonW = 150;
    this.balloonH = next + 30;
    this.width = this.balloonW;
    this.height = this.balloonH + 6 + AGENT.h;
  }

  /** Character.Hide: the balloon goes at once, Hunny turns away, then the form is gone. */
  hide() {
    this.balloonVisible = false;
    this.components = [];
    this.rt.canvas.style.cursor = '';
    this.play('Hiding', () => this.rt.closeModal(this, 0));
  }

  play(name, done) {
    const animation = AGENT_ANIMATIONS[name];
    this.clearTimers();
    this.animation = animation;
    let k = 0;
    const step = () => {
      this.frame = animation.frames[k++];
      this.invalidate();
      if (k < animation.frames.length) this.setTimer(animation.ms, step);
      else if (done) this.setTimer(animation.ms, done);
    };
    step();
  }

  /**
   * The idle timing lives in the Agent server, not in this game: nothing here settles it. Hunny
   * rests, then plays the three idle animations of her file in turn, each after the same pause.
   */
  idleLater(n) {
    this.frame = AGENT.rest;
    this.animation = null;
    this.invalidate();
    this.setTimer(AGENT.idleEvery, () => this.play(IDLE_ORDER[n], () => this.idleLater((n + 1) % IDLE_ORDER.length)));
  }

  draw(g) {
    if (this.balloonVisible) {
      const outline = balloonOutline(this.balloonW, this.balloonH);
      g.beginPath();
      outline.forEach(([x, y], k) => (k ? g.lineTo(x + 0.5, y + 0.5) : g.moveTo(x + 0.5, y + 0.5)));
      g.fillStyle = '#FFFFFF';
      g.fill();
      g.strokeStyle = '#000000';
      g.lineWidth = 1;
      g.stroke();
    }
    super.draw(g);
    if (this.sheet && this.frame >= 0) {
      const sx = (this.frame % AGENT.perRow) * AGENT.w;
      const sy = Math.floor(this.frame / AGENT.perRow) * AGENT.h;
      g.drawImage(this.sheet, sx, sy, AGENT.w, AGENT.h, 0, this.balloonH + 6, AGENT.w, AGENT.h);
    }
  }

  /**
   * btnHelpClick computes agent.Left = button X + 10, agent.Top = button Y + 60 + balloon height,
   * so the balloon's top is button Y + 54. On a phone the owner may be drawn small: the balloon
   * keeps at least one CSS pixel per form pixel and is moved or scaled to stay on the canvas.
   */
  canvasRect() {
    const rt = this.rt;
    const canvas = rt.canvas;
    const bounds = canvas.getBoundingClientRect();
    const css = bounds.width / canvas.width || 1;
    const help = this.owner?.btnHelp;
    const r = this.owner ? rt.toScreenRect(this.owner, help.x, help.y, 1, 1) : { x: bounds.left, y: bounds.top, scale: 1 };
    const scale = Math.min(Math.max(r.scale, 1) / css, canvas.width / this.width, canvas.height / this.height);
    const w = this.width * scale;
    const h = this.height * scale;
    const x = Math.max(0, Math.min((r.x - bounds.left) / css + 10 * (r.scale / css), canvas.width - w));
    const y = Math.max(0, Math.min((r.y - bounds.top) / css + 54 * (r.scale / css), canvas.height - h));
    return { x, y, w, h, scale };
  }

  /** Only the balloon takes the pointer. */
  passesPointer(x, y) {
    const inside = this.balloonVisible && x >= 0 && y >= 0 && x < this.balloonW && y < this.balloonH - 16;
    if (!inside) this.hover(null);
    return !inside;
  }

  hover(over) {
    for (const c of this.components) if (c instanceof BalloonLink) c.hovered = c === over;
    this.rt.canvas.style.cursor = over instanceof BalloonLink ? 'pointer' : '';
    this.invalidate();
  }

  pointerMove(px, py) {
    this.hover(this.topAt(px, py));
  }

  /** Keys belong to the form below. */
  below() {
    const rt = this.rt;
    const k = rt.modals.indexOf(this);
    return k < 0 ? null : rt.modals[k - 1] || rt.screen;
  }

  keyDown(code, shift) {
    this.below()?.keyDown(code, shift);
  }

  keyUp(code) {
    this.below()?.keyUp(code);
  }
}

const HELP_LINK = 'background:none;border:0;padding:0;margin:0;font:inherit;color:#008000;text-decoration:underline;cursor:pointer;text-align:left';
const HELP_BUTTON = 'margin:8px 0 8px 8px;padding:6px 14px;font:inherit';

/**
 * What WinHelp showed: the topic's title and text from Menu.hlp, with its jumps and, for the rest of
 * the file, the keywords of WinHelp's own Index and a way back. Without its pictures. A plain window
 * over the canvas, since a topic can be longer than a screen and must scroll on a phone as well.
 * Keys: a pad has no pointer, so Tab walks the links and buttons and Enter uses the one selected.
 * See docs/intentional-differences.md.
 */
class HelpWindow extends Form {
  onShow() {
    const panel = document.createElement('div');
    panel.setAttribute('role', 'dialog');
    panel.style.cssText = 'position:fixed;left:max(5%,env(safe-area-inset-left));right:max(5%,env(safe-area-inset-right));top:max(5%,env(safe-area-inset-top));bottom:max(5%,env(safe-area-inset-bottom));max-width:640px;margin:auto;display:flex;flex-direction:column;background:#fff;color:#000;border:1px solid #000;font:16px/1.4 Arial,Helvetica,sans-serif';
    this.titleBar = document.createElement('div');
    this.titleBar.style.cssText = 'padding:10px 14px;font-weight:bold;border-bottom:1px solid #000';
    this.body = document.createElement('div');
    this.body.style.cssText = 'flex:1;overflow-y:auto;padding:0 14px;touch-action:pan-y';
    const buttons = document.createElement('div');
    buttons.style.cssText = 'display:flex;justify-content:flex-end;padding:0 14px';
    const button = (text, onClick) => {
      const b = document.createElement('button');
      b.textContent = text;
      b.style.cssText = HELP_BUTTON;
      b.addEventListener('click', onClick);
      buttons.appendChild(b);
      return b;
    };
    button('Index', () => this.go(this.indexTopic()));
    this.btnBack = button('Terug', () => this.back());
    button('Sluiten', () => this.close());
    panel.append(this.titleBar, this.body, buttons);
    this.rt.overlay.appendChild(panel);
    this.panel = panel;
    this.history = [];
    this.show(this.args.topic);
  }

  onClose() {
    this.panel.remove();
  }

  close() {
    this.rt.closeModal(this, 2);
  }

  go(topic) {
    this.history.push(this.topic);
    this.show(topic);
  }

  back() {
    if (this.history.length) this.show(this.history.pop());
  }

  show(topic) {
    this.topic = topic;
    this.selected = null;
    this.titleBar.textContent = topic.title;
    this.body.replaceChildren(...topic.paragraphs.map((paragraph) => this.paragraph(paragraph)));
    this.body.scrollTop = 0;
    this.btnBack.disabled = !this.history.length;
  }

  /** A string, or runs { t, b, to }: bold text, and to as the number of the topic a jump leads to. */
  paragraph(paragraph) {
    const p = document.createElement('p');
    // Tab stops in a few topics line up key names. This size keeps them lined up in this font.
    p.style.cssText = 'white-space:pre-wrap;tab-size:72px';
    for (const run of typeof paragraph === 'string' ? [{ t: paragraph }] : paragraph) {
      if (run.to !== undefined) {
        const link = document.createElement('button');
        link.textContent = run.t;
        link.style.cssText = HELP_LINK;
        link.addEventListener('click', () => this.go(this.args.help.topics[run.to]));
        p.appendChild(link);
      } else if (run.b) {
        p.appendChild(document.createElement('b')).textContent = run.t;
      } else {
        p.append(run.t);
      }
    }
    return p;
  }

  /** WinHelp's Index, from |KWBTREE. A keyword of several topics names them. */
  indexTopic() {
    const { topics, keywords } = this.args.help;
    const paragraphs = keywords.map(([keyword, targets]) => {
      if (targets.length === 1) return [{ t: keyword, to: targets[0] }];
      return [{ t: keyword + ': ' }, ...targets.flatMap((to, k) => [...(k ? [{ t: ', ' }] : []), { t: topics[to].title, to }])];
    });
    return { title: 'Index', paragraphs };
  }

  /** The next link or button, for what has no Tab of its own here: MenuRuntime keeps Tab from the browser. */
  select(dir) {
    const all = [...this.panel.querySelectorAll('button')].filter((b) => !b.disabled);
    const k = all.indexOf(this.selected);
    this.selected = all[k < 0 ? (dir > 0 ? 0 : all.length - 1) : (k + dir + all.length) % all.length];
    this.selected.style.outline = '2px dotted #000';
    this.selected.focus();
    for (const b of all) if (b !== this.selected) b.style.outline = '';
  }

  keyDown(code, shift) {
    const page = this.body.clientHeight;
    if (code === 'Escape') this.close();
    else if (code === 'Enter') {
      if (this.selected) this.selected.click();
      else this.close();
    } else if (code === 'Tab') this.select(shift ? -1 : 1);
    else if (code === 'ArrowDown') this.body.scrollTop += 40;
    else if (code === 'ArrowUp') this.body.scrollTop -= 40;
    else if (code === 'PageDown') this.body.scrollTop += page;
    else if (code === 'PageUp') this.body.scrollTop -= page;
  }
}

let helpFile = null;

function loadHelp(rt) {
  helpFile ||= fetch(rt.assets.base + 'menu-help.json').then((r) => r.json());
  return helpFile;
}

/** Application.HelpContext, FUN_0047df44, for the links in the balloon. Context numbers are those of agent.ini. */
export async function showHelpContext(rt, context) {
  const help = await loadHelp(rt);
  const topic = help.topics[help.contexts[context]];
  if (topic) await rt.showModal(HelpWindow, { help, topic });
}

/** The same window for a topic that is not in Menu.hlp: the port's own tab in Geavanceerd. */
export async function showHelpTopic(rt, topic) {
  await rt.showModal(HelpWindow, { help: await loadHelp(rt), topic });
}

/** [ERRORSTRINGS] of menu.ini, FUN_004a790c: Format with the title, @ is a line break, & only marks the Alt key. */
function errorString(rt, key, fallback) {
  const d = rt.data;
  const text = d.vfs.parsedIni('menu.ini').get('ERRORSTRINGS', key) ?? fallback;
  return text.replaceAll('%s', d.menuString(5)).replaceAll('&', '').split('@');
}

/**
 * TfrmException2 0x4a7568, as FUN_004a7c14 fills it, without Davi-Service: its SERVICE.EXE does not
 * exist here. So its line in the text goes and of the three choices the two others stay, the first
 * one chosen, like the first in the original. Result 7 closes the game, 5 goes on, as 0x4a7ff0 sets them.
 * The original was a plain Windows dialog. This one is plain HTML, so a fault while drawing the
 * forms on the canvas cannot take it along.
 */
export class TfrmException2 extends Form {
  static className = 'TfrmException2';
  static modal = true;

  onShow() {
    const error = this.args.error;
    const details = String(error?.stack || error?.message || error || '');
    const panel = document.createElement('div');
    panel.setAttribute('role', 'alertdialog');
    panel.style.cssText = 'position:fixed;left:max(8px,env(safe-area-inset-left));right:max(8px,env(safe-area-inset-right));top:max(8px,env(safe-area-inset-top));bottom:max(8px,env(safe-area-inset-bottom));width:fit-content;max-width:436px;height:fit-content;max-height:calc(100% - 16px);margin:auto;overflow:auto;box-sizing:border-box;background:#D4D0C8;color:#000;border:2px outset #fff;font:14px/1.3 Arial,Helvetica,sans-serif';
    const title = document.createElement('div');
    title.textContent = this.rt.data.menuString(5);
    title.style.cssText = 'padding:3px 6px;font-weight:bold;color:#fff;background:linear-gradient(90deg,#0A246A,#A6CAF0)';
    const top = document.createElement('div');
    top.style.cssText = 'display:flex;gap:9px;padding:8px';
    const icon = document.createElement('img');
    icon.src = this.rt.assets.base + 'error_icon.png';
    icon.alt = '';
    icon.style.cssText = 'width:39px;height:41px;flex:none';
    const text = document.createElement('div');
    text.style.whiteSpace = 'pre-wrap';
    const message = errorString(this.rt, 'errormessage', 'Er is een onverwachte fout opgetreden.');
    text.textContent = message.filter((line) => !line.includes('Davi-Service')).join('\n');
    top.append(icon, text);
    const radio = (key, fallback, checked) => {
      const label = document.createElement('label');
      label.style.cssText = 'display:block;padding:5px 8px 5px 56px;text-indent:-20px';
      const input = document.createElement('input');
      input.type = 'radio';
      input.name = 'fout';
      input.checked = checked;
      input.style.marginRight = '6px';
      label.append(input, errorString(this.rt, key, fallback)[0]);
      return { label, input };
    };
    this.closeApp = radio('close', 'Afsluiten', true);
    this.ignore = radio('ignore', 'Negeren', false);
    const more = document.createElement('div');
    more.hidden = true;
    more.style.cssText = 'padding:0 8px 8px 56px';
    const memo = document.createElement('textarea');
    memo.readOnly = true;
    memo.rows = 6;
    memo.value = details;
    memo.style.cssText = 'width:100%;box-sizing:border-box;font:12px monospace';
    // lblMessage of the DFM. FormKeyPress 0x4a808c copies the text once it shows.
    more.append('Foutmelding (Toets Ctrl+C om de melding naar het klembord te kopiëren)', memo);
    const buttons = document.createElement('div');
    buttons.style.cssText = 'display:flex;justify-content:space-between;padding:8px 8px 8px 56px;border-top:1px solid #808080;margin-top:8px';
    const btnDetails = document.createElement('button');
    btnDetails.textContent = 'Details >>';
    // btnDetailsClick 0x4a8040: the rest of the form shows and the button goes.
    btnDetails.addEventListener('click', () => {
      more.hidden = false;
      btnDetails.style.visibility = 'hidden';
    });
    this.btnOk = document.createElement('button');
    this.btnOk.textContent = 'OK';
    this.btnOk.style.minWidth = '104px';
    this.btnOk.addEventListener('click', () => this.btnOkClick());
    buttons.append(btnDetails, this.btnOk);
    panel.addEventListener('keydown', (e) => {
      e.stopPropagation();
      if (e.ctrlKey && e.code === 'KeyC' && !more.hidden) navigator.clipboard?.writeText(details);
    });
    panel.addEventListener('keyup', (e) => e.stopPropagation());
    panel.append(title, top, this.closeApp.label, this.ignore.label, more, buttons);
    this.rt.overlay.appendChild(panel);
    this.panel = panel;
    this.btnOk.focus();
  }

  onClose() {
    this.panel.remove();
  }

  // btnOkClick 0x4a7ff0.
  btnOkClick() {
    this.modalResult = this.closeApp.input.checked ? 7 : 5;
    this.finishModal();
  }

  /** A pad does not reach the panel's own controls. */
  keyDown(code) {
    if (code === 'Enter') this.btnOkClick();
    else if (code === 'ArrowUp' || code === 'ArrowLeft') this.closeApp.input.checked = true;
    else if (code === 'ArrowDown' || code === 'ArrowRight') this.ignore.input.checked = true;
  }
}
