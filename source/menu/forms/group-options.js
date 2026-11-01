// TfrmOptions and the dialogs it opens. docs/research/menu-forms.md section 12, nos. 38 to 42 and 45,
// docs/research/input.md C9, C13, H9. Options edits a copy of the player's settings; only its three
// volume sliders also write straight into the player's settings, for the live preview.
import { CoolDialog, loadDfm } from '../base-forms.js';
import { Component, Label } from '../framework.js';
import { PlainCheck, PlainDialog, PlainRadio, PlainStepper, PlainTrack, loadPlainDfm } from '../plain-controls.js';
import { vkOf } from '../../input/keyboard.js';
import { modeGrid, softwareMode, useTouch } from '../../settings.js';
import { RESOLUTIONS } from '../../ui/settings-panel.js';
import * as forms from './index.js';

const FONT_BLACK = { size: 16, color: '#000000', bold: false };
const FONT_SMALL = { size: 13, color: '#000000', bold: false };
const COLOR_GREY = '#63614B';
const PANEL1_X = 7;
const PANEL1_Y = 93;

/** The port's own settings in source/settings.js, as a value to put back. */
const PORT_KEYS = ['resolution', 'renderScale', 'volume', 'showFps', 'fullscreen', 'touch', 'deadzone'];

function portValues(settings) {
  return Object.fromEntries(PORT_KEYS.map((key) => [key, settings.get(key)]));
}

function restorePortValues(settings, saved) {
  for (const key of Object.keys(saved)) {
    if (settings.get(key) !== saved[key]) settings.set(key, saved[key]);
  }
}

/** FUN_00487514 with table 0x4ab4d8: 0, 1, 2 and 5 have no bit depth there, so no 3D card. */
const isMode3d = (resolution) => ![0, 1, 2, 5].includes(resolution);

/** MessageBeep(0), FUN_0040be6c: Windows played its default sound. A short tone stands in for it. */
function messageBeep(rt) {
  const c = rt.sound.getContext();
  if (!c) return;
  const osc = c.createOscillator();
  const gain = c.createGain();
  gain.gain.value = rt.sound.volumes.fx;
  osc.frequency.value = 880;
  osc.connect(gain);
  gain.connect(rt.sound.output());
  osc.start();
  osc.stop(c.currentTime + 0.12);
}

const NOTE_LOW = 'Laag kan alleen als 3D kaart uit staat.';
const NOTE_NEEDS_3D = 'Dit kan alleen als 3D kaart aan staat: kies dat bij Opties.';
const NOTE_VIDEO_HIGH = 'In de browser bepaalt 3D-resolutie hoe groot het beeld is: kies Geavanceerd en dan het tabblad Browser. Daarom is Hoog hier niet beschikbaar.';

/**
 * TfrmOptions, FormOptions 0x49504c. Resolution mapping: Laag 3D?6:0, Normaal 3D?3:1, Hoog 4; any
 * other value is custom, shown as Hoog and kept. RESOLUTION 0 and 1 are the race's 8-bit software
 * path. Port: Hoog is off with 3D kaart as well. Its 800x600 display mode has no effect on the
 * browser's picture, and the size class of spel.dat FUN_0044bd10 no other live effect in 3D modes.
 * A save with 4 or a custom value still shows it chosen and keeps its value: both ran a race.
 */
export class TfrmOptions extends CoolDialog {
  static className = 'TfrmOptions';
  static dfm = 'TFRMOPTIONS';

  // GDIFormCreate 0x4967fc
  async create() {
    await super.create();
    const rt = this.rt;
    // CopyBackGroundOntoPanel 0x481990 only made the panels look transparent. The canvas already does.
    this.remove(this.imgPanel1);
    this.remove(this.imgPanel2);
    // menucaps gives btnControls Left 53, Top 258, relative to pnlBack1.
    this.btnControls.x = PANEL1_X + 53;
    this.btnControls.y = PANEL1_Y + 258;
    this.btnOk1.modalResult = 0;
    // These two definitions live on this form. Unlike TData's they have no OnButtonStateChange.
    this.btnControls.def.onState = null;
    this.btnVideoAdvanced.def.onState = null;
    for (const radio of [this.optKeyboard, this.optJoyPad, this.optJoystick, this.optWheel]) radio.group = 'control';
    for (const radio of [this.optVideoLow, this.optVideoMedium, this.optVideoHigh]) radio.group = 'video';
    // TabOrder was per panel in the VCL. Flattened here in the order Tab walks them.
    [this.btnOk1, this.btnHelp, this.btnClose, this.btnControls, this.optKeyboard, this.optJoyPad, this.optJoystick,
      this.optWheel, this.chkStartInfoOn, this.btnVideoAdvanced, this.sldrMusic, this.sldrSound, this.sldrVoice,
      this.chkVideo3d, this.optVideoLow, this.optVideoMedium, this.optVideoHigh, this.btnCancel].forEach((c, k) => {
      c.tabOrder = k;
    });
    this.images = {};
    for (const name of ['opt_keyb.bmp', 'opt_gpad.bmp', 'opt_joys.bmp', 'opt_whee.bmp', 'opt_lowr.bmp', 'opt_midr.bmp', 'opt_higr.bmp']) {
      this.images[name] = await rt.assets.image(name);
    }
    // These two came with GDIFormShow 0x496a8c.
    this.imgSound.setImage(await rt.assets.image('opt_soun.bmp'));
    this.imgVideo3d.setImage(await rt.assets.image('opt_3dfx.tga'));
    // Disabled it would lose its dot too, on a save that has it chosen.
    this.optVideoHigh.state = () => (this.optVideoHigh.checked ? 1 : 4);
    this.savedPort = portValues(rt.data.app.settings);
    this.temp = rt.data.player.settings.clone();
    this.copySettingsToControls();
  }

  // GDIFormShow 0x496a8c: Annuleren goes back to the volumes as they are after create.
  onShow() {
    super.onShow();
    const s = this.rt.data.player.settings;
    this.savedFx = s.fxVolume;
    this.savedVoices = s.voicesVolume;
    this.savedMusic = s.musicVolume;
  }

  /** Annuleren and x drop the copy of the settings, so the port's render settings go back as well. */
  onClose() {
    if (this.modalResult !== 1) restorePortValues(this.rt.data.app.settings, this.savedPort);
  }

  closeWith(result) {
    this.modalResult = result;
    this.finishModal();
  }

  // CopySettingsToControls 0x495d6c. set_Position fires OnChange, so the sliders sound trin on opening.
  copySettingsToControls() {
    const t = this.temp;
    const res = t.resolution;
    this.chkVideo3d.checked = isMode3d(res);
    this.optVideoLow.setChecked(res === 0 || res === 6);
    this.optVideoMedium.setChecked(res === 1 || res === 3);
    this.optVideoHigh.setChecked(res === 4 || this.isCustomResolution());
    this.showVideoChoice();
    this.enableVideoChoices();
    this.chkStartInfoOn.checked = t.startInfoOn;
    this.sldrMusic.setPosition(t.musicVolume);
    if (!t.musicOn) this.sldrMusic.setPosition(0);
    this.sldrSound.setPosition(t.fxVolume);
    if (!t.fxOn) this.sldrSound.setPosition(0);
    this.sldrVoice.setPosition(t.voicesVolume);
    const radios = [this.optKeyboard, this.optJoystick, this.optJoyPad, this.optWheel];
    radios[t.controls.controlType].click();
  }

  // CopyControlsToSettings 0x4960fc
  copyControlsToSettings() {
    const t = this.temp;
    if (!this.isCustomResolution()) {
      if (this.optVideoLow.checked) t.resolution = this.chkVideo3d.checked ? 6 : 0;
      else if (this.optVideoMedium.checked) t.resolution = this.chkVideo3d.checked ? 3 : 1;
      else if (this.optVideoHigh.checked) t.resolution = 4;
    }
    t.startInfoOn = this.chkStartInfoOn.checked;
    t.musicVolume = this.sldrMusic.position;
    t.musicOn = this.sldrMusic.position > 0;
    t.fxVolume = this.sldrSound.position;
    t.fxOn = this.sldrSound.position > 0;
    t.voicesVolume = this.sldrVoice.position;
    if (this.optKeyboard.checked) t.controls.controlType = 0;
    else if (this.optJoyPad.checked) t.controls.controlType = 2;
    else if (this.optJoystick.checked) t.controls.controlType = 1;
    else if (this.optWheel.checked) t.controls.controlType = 3;
  }

  // 0x4967d4
  isCustomResolution() {
    return ![0, 6, 1, 3, 4].includes(this.temp.resolution);
  }

  // 0x4966c8
  showVideoChoice() {
    if (this.optVideoLow.checked) this.imgVideo.setImage(this.images['opt_lowr.bmp']);
    else if (this.optVideoMedium.checked) this.imgVideo.setImage(this.images['opt_midr.bmp']);
    else if (this.optVideoHigh.checked) this.imgVideo.setImage(this.images['opt_higr.bmp']);
    this.imgVideo3d.visible = this.chkVideo3d.checked;
  }

  // 0x4959c4
  chkVideo3dClick() {
    this.enableVideoChoices();
    this.showVideoChoice();
    const { optVideoLow: low, optVideoHigh: high } = this;
    if ((!low.enabled && low.checked) || (!high.enabled && high.checked)) this.optVideoMedium.click();
  }

  // 0x496684, with Hoog off in the browser as well.
  enableVideoChoices() {
    this.optVideoLow.enabled = !this.chkVideo3d.checked;
    this.optVideoHigh.enabled = false;
  }

  // 0x495808
  btnOkClick() {
    const d = this.rt.data;
    this.copyControlsToSettings();
    d.player.settings.assign(this.temp);
    d.saveProgress();
    // Port only: LoadPlayer takes the mode from raser.ini, which the original wrote when a race started.
    d.vfs.iniSet('raser.ini', 'PROGRAM', 'RESOLUTION', String(this.temp.resolution));
    this.closeWith(1);
  }

  // 0x4956b4. The x button keeps the volumes, this one puts them back.
  btnCancelClick() {
    const d = this.rt.data;
    const s = d.player.settings;
    d.previewMusicVolume(this.savedMusic);
    s.musicVolume = this.savedMusic;
    s.voicesVolume = this.savedVoices;
    s.fxVolume = this.savedFx;
    d.applySoundSettings({ music: false });
    this.closeWith(2);
  }

  // 0x496480
  optKeyboardClick() {
    this.imgControl.setImage(this.images['opt_keyb.bmp']);
    this.btnControls.enabled = true;
  }

  // 0x4964c8: a gamepad has nothing to set.
  optJoypadClick() {
    this.imgControl.setImage(this.images['opt_gpad.bmp']);
    this.btnControls.enabled = false;
  }

  // 0x496510
  optJoystickClick() {
    this.imgControl.setImage(this.images['opt_joys.bmp']);
    this.btnControls.enabled = true;
  }

  // 0x496558
  optWheelClick() {
    this.imgControl.setImage(this.images['opt_whee.bmp']);
    this.btnControls.enabled = true;
  }

  // 0x495b78
  lblKeyboardClick() {
    this.optKeyboard.click();
  }

  // 0x495b90
  lblJoypadClick() {
    this.optJoyPad.click();
  }

  // 0x495ba8
  lblJoystickClick() {
    this.optJoystick.click();
  }

  // 0x495bc0
  lblWheelClick() {
    this.optWheel.click();
  }

  // 0x496b78
  lblClickAreaClick() {
    this.chkStartInfoOn.click();
  }

  // 0x4965a0: FUN_00498378, FUN_004982b4, FUN_004981f0 with the copy's controls.
  btnControlsClick() {
    const controls = this.temp.controls;
    if (this.optKeyboard.checked) this.rt.showModal(forms.TfrmKeySettings, { controls });
    else if (this.optJoystick.checked) this.rt.showModal(forms.TfrmJoyStickSettings, { controls });
    else if (this.optWheel.checked) this.rt.showModal(forms.TfrmWheelSettings, { controls });
  }

  // 0x49591c
  optVideoLowClick() {
    this.imgVideo.setImage(this.images['opt_lowr.bmp']);
  }

  // 0x495954
  optVideoMediumClick() {
    this.imgVideo.setImage(this.images['opt_midr.bmp']);
  }

  // 0x49598c
  optVideoHighClick() {
    this.imgVideo.setImage(this.images['opt_higr.bmp']);
  }

  // 0x495bd8
  lblVideo3dClick() {
    this.chkVideo3d.click();
  }

  // 0x495bf0: clicks only if the radio is enabled. Here it says why not.
  lblVideoLowClick() {
    if (this.optVideoLow.enabled) this.optVideoLow.click();
    else this.rt.data.notApplicable(NOTE_LOW);
  }

  // 0x495c18
  lblVideoMediumClick() {
    if (this.optVideoMedium.enabled) this.optVideoMedium.click();
  }

  // 0x495c40: clicks only if the radio is enabled. Here it says why not.
  lblVideoHighClick() {
    if (this.optVideoHigh.enabled) this.optVideoHigh.click();
    else this.rt.data.notApplicable(NOTE_VIDEO_HIGH);
  }

  /** Port: disabled controls take no clicks, so the form explains them. */
  onBackgroundClick(px, py) {
    if (!this.optVideoLow.enabled && this.optVideoLow.hit(px, py)) this.rt.data.notApplicable(NOTE_LOW);
    else if (this.optVideoHigh.hit(px, py)) this.rt.data.notApplicable(NOTE_VIDEO_HIGH);
  }

  // 0x495a2c
  async btnVideoAdvancedClick() {
    this.copyControlsToSettings();
    const result = await this.rt.showModal(forms.TfrmDisplaySettings, { settings: this.temp });
    if (result === 1) this.copySettingsToControls();
  }

  // 0x495c68
  sldrMusicChange(sender, value) {
    const d = this.rt.data;
    d.previewMusicVolume(value);
    d.player.settings.musicVolume = value;
    this.temp.musicVolume = value;
  }

  // 0x495cc8. The sound plays before the new value is stored, so at the old FX volume.
  sldrSoundChange(sender, value) {
    const d = this.rt.data;
    this.rt.sound.playFx('trin');
    d.player.settings.fxVolume = value;
    this.temp.fxVolume = value;
    d.applySoundSettings({ music: false });
  }

  // 0x495d1c. Plays the same FX sample, at FX volume.
  sldrVoiceChange(sender, value) {
    const d = this.rt.data;
    this.rt.sound.playFx('trin');
    d.player.settings.voicesVolume = value;
    this.temp.voicesVolume = value;
    d.applySoundSettings({ music: false });
  }
}

/** txtKey: 17x19, no border, colour 10670034 like the key itself, so what shows is its caret. */
class KeyCaret extends Component {
  constructor() {
    super(0, 0, 17, 19);
    this.visible = false;
    this.caretOn = true;
  }

  draw(g) {
    g.fillStyle = '#D2CFA2';
    g.fillRect(this.x, this.y, this.w, this.h);
    if (this.caretOn) {
      g.fillStyle = '#000000';
      g.fillRect(this.x + 1, this.y + 2, 1, this.h - 4);
    }
  }
}

/** FUN_004925dc: 0 or the key used twice. The last pair found wins, as in its loops. */
function duplicateKey(keys) {
  let found = 0;
  for (let i = 0; i < 6; i++) {
    for (let j = i + 1; j < 7; j++) {
      if (keys[j] === keys[i]) {
        found = keys[i];
        break;
      }
    }
  }
  return found;
}

/**
 * TfrmKeySettings, FormKeySettings 0x4919f4. args.controls is the Options copy's TControls, launcher
 * FUN_00498378. Only keys in [CONTROLKEYS] can be bound.
 */
export class TfrmKeySettings extends CoolDialog {
  static className = 'TfrmKeySettings';
  static dfm = 'TFRMKEYSETTINGS';

  // FormCreate 0x4921c4. d.controlKeys holds [CONTROLKEYS], FUN_00491fa4.
  async create() {
    await super.create();
    this.controls = this.args.controls ?? this.rt.data.player.settings.controls;
    this.btnOk1.modalResult = 0;
    // These two definitions live on this form. Unlike TData's they have no OnButtonStateChange.
    this.btnDefaults.def.onState = null;
    this.btnGas.def.onState = null;
    // In the order of GetKeySettingByIndex 0x4a6a80.
    this.caps = [['up', this.btnGas], ['down', this.btnBreak], ['left', this.btnLeft], ['right', this.btnRight],
      ['extra1', this.btnTurbo], ['extra2', this.btnParkingBrake], ['extra3', this.btnHorn]];
    // gdfBtnKey's own font: the caption engine leaves it alone. Arial stands in for MS Sans Serif.
    for (const [, cap] of this.caps) cap.captionFont = { size: 11, color: '#000000', bold: false };
    // The hidden TEdit only took the keyboard focus. No input element, so no second key handler.
    this.remove(this.txtKey);
    this.txtKey = this.add(new KeyCaret());
    this.capturing = false;
    this.current = null;
    this.keyPreview = (code) => this.formKeyDown(code);
    // Keys like Alt, / or ' have browser meanings. While capturing they are only keys.
    this.holdBrowserKeys = (e) => e.preventDefault();
  }

  // GDIFormShow 0x491f10
  onShow() {
    super.onShow();
    this.copyControlsToCaps();
  }

  onClose() {
    window.removeEventListener('keydown', this.holdBrowserKeys, true);
  }

  // FUN_0049245c
  copyControlsToCaps() {
    for (const [key, cap] of this.caps) this.setCap(cap, this.controls[key]);
  }

  // FUN_00492404, FUN_00491e0c: Tag is the key code, Caption its name.
  setCap(cap, vk) {
    cap.tag = vk;
    cap.caption = this.rt.data.keyName(vk);
    cap.invalidate();
  }

  // 0x491d84
  btnClick(sender) {
    this.current = sender;
    this.setCapturing(true);
  }

  // FUN_00491c7c. A cancelled capture leaves the caption empty and the Tag as it was, as the code does.
  setCapturing(on) {
    this.capturing = on;
    const cap = this.current;
    const caret = this.txtKey;
    if (on) {
      caret.x = cap.x + Math.trunc((cap.w - caret.w) / 2);
      caret.y = cap.y + Math.trunc((cap.h - caret.h) / 2);
      caret.visible = true;
      this.bringToFront(caret);
      this.setFocus(caret);
      cap.caption = '';
      cap.enabled = false;
      this.caretTimer = this.setTimer(500, () => {
        caret.caretOn = !caret.caretOn;
        this.invalidate();
      }, true);
      window.addEventListener('keydown', this.holdBrowserKeys, true);
    } else {
      cap.enabled = true;
      this.setFocus(cap);
      this.current = null;
      caret.visible = false;
      this.clearTimer(this.caretTimer);
      window.removeEventListener('keydown', this.holdBrowserKeys, true);
    }
    this.invalidate();
  }

  /**
   * FormKeyDown 0x491e64. KeyPreview: the form sees the key first. In the original Enter and Esc may
   * reach the dialog keys before this (CN_KEYDOWN, not traced); here they are keys outside the list.
   * vkOf gives the same code the race will look for and never 108, input.md H9.
   */
  formKeyDown(code) {
    if (!this.capturing) return false;
    const vk = vkOf(code);
    if (this.rt.data.isControlKey(vk)) this.setCap(this.current, vk);
    else messageBeep(this.rt);
    this.setCapturing(false);
    return true;
  }

  // txtKeyExit 0x491ef8: a click elsewhere takes the focus from the hidden edit.
  pointerDown(px, py) {
    if (this.capturing) this.setCapturing(false);
    super.pointerDown(px, py);
  }

  // 0x491f28. Duplicates: TfrmDoubleKeys, FUN_00498828, and the dialog stays.
  btnOkClick() {
    const duplicate = duplicateKey(this.caps.map(([, cap]) => cap.tag));
    if (duplicate === 0) {
      // FUN_00492524, FUN_00492580.
      for (const [key, cap] of this.caps) this.controls[key] = cap.tag;
      this.modalResult = 1;
      this.finishModal();
    } else {
      this.rt.showModal(forms.TfrmDoubleKeys, { key: this.rt.data.keyName(duplicate) });
    }
  }

  // 0x492644. Into the Options copy at once, so Annuleren here does not undo it.
  btnDefaultsClick() {
    this.controls.assign(this.rt.data.static.defaultSettings.controls);
    this.copyControlsToCaps();
  }
}

/**
 * TfrmSliderSettings, FormSliderSettings 0x492768. Abstract: only its children have art and a text.
 * args.controls is the Options copy's TControls. The launchers FUN_004982b4 and FUN_004981f0 store
 * the position on result 1; onClose does that here.
 */
export class TfrmSliderSettings extends CoolDialog {
  static className = 'TfrmSliderSettings';
  static dfm = 'TFRMSLIDERSETTINGS';
  static childDfm = null;
  static setting = 'joySensitivity';
  static padNote = '';

  /** A ?form= test of the abstract class gets a child's art. */
  backgroundName() {
    return this.constructor.childDfm ? super.backgroundName() : 'joystick.tga';
  }

  async create() {
    await super.create();
    this.controls = this.args.controls ?? this.rt.data.player.settings.controls;
    if (this.constructor.childDfm) await loadDfm(this, this.constructor.childDfm);
    // Port: under the original text, in its panel. input.md H4.
    this.add(new Label(56, 142, 170, 36, this.constructor.padNote, { size: 13 }, { wordWrap: true }));
  }

  // FormShow 0x492910: vmt_0e8, 0x492cfc and 0x492b00.
  onShow() {
    super.onShow();
    this.sldrSensitivity.setPosition(this.controls[this.constructor.setting]);
  }

  // vmt_0ec, 0x492d18 and 0x492b1c.
  onClose() {
    if (this.modalResult === 1) this.controls[this.constructor.setting] = this.sldrSensitivity.position;
  }
}

/** TfrmWheelSettings 0x4929c4. */
export class TfrmWheelSettings extends TfrmSliderSettings {
  static className = 'TfrmWheelSettings';
  static childDfm = 'TFRMWHEELSETTINGS';
  static setting = 'wheelSensitivity';
  static padNote = 'In de browser werkt een gamepad als stuur.';
}

/** TfrmJoyStickSettings 0x492bb8. */
export class TfrmJoyStickSettings extends TfrmSliderSettings {
  static className = 'TfrmJoyStickSettings';
  static childDfm = 'TFRMJOYSTICKSETTINGS';
  static setting = 'joySensitivity';
  static padNote = 'In de browser werkt een gamepad als joystick.';

  async create() {
    await super.create();
    this.sldrSensitivity.tabOrder = 2;
  }
}

let gpuLimit = 0;

/** What D3DRenderer.maxTextureSize will answer. Before the first race there is no renderer to ask. */
function maxRenderSize(app) {
  const known = app.runner?.renderer?.maxTextureSize;
  if (known) return known;
  if (!gpuLimit) {
    const gl = document.createElement('canvas').getContext('webgl2');
    gpuLimit = gl ? gl.getParameter(gl.MAX_TEXTURE_SIZE) : Infinity;
    gl?.getExtension('WEBGL_lose_context')?.loseContext();
  }
  return gpuLimit;
}

/** The 3D view's size on this screen, as RaceRunner.layout works it out. */
function viewSize(settings, maxSize, resolution) {
  const dpr = window.devicePixelRatio || 1;
  const cw = Math.max(1, Math.round(window.innerWidth * dpr));
  const ch = Math.max(1, Math.round(window.innerHeight * dpr));
  let h = ch;
  if (ch > cw * 1.15) h = useTouch(settings) ? Math.min(Math.round(ch * 0.62), Math.round(cw * 1.2)) : Math.min(ch, Math.round(cw * 1.5));
  const mode = softwareMode(resolution);
  return settings.renderSize(cw / dpr, h / dpr, dpr, maxSize, mode && modeGrid(mode.width, mode.height, cw / h));
}

const NOTE_WAITVBL = 'De browser wacht zelf op de verversing van het beeldscherm. Daarom kun je dit hier niet instellen.';
const NOTE_FOCUS = 'De browser bepaalt zelf waar het rendergeheugen staat. Daarom kun je dit hier niet instellen.';
const NOTE_DRIVER = 'De browser kiest zelf de videokaart. Daarom kun je dit hier niet instellen.';
const NOTE_RESOLUTION = 'Hoe groot de browser het beeld tekent, stel je in bij 3D-resolutie op het tabblad Browser.';
const NOTE_FULLSCREEN = 'Deze browser kan het spel niet op het volledige scherm tonen.';
const TOUCH_CHOICES = [['auto', 'Automatisch'], ['on', 'Aan'], ['off', 'Uit']];
/** FUN_00488248 with mode 3 of table 0x4ab4d8: Format '%d x %d'. */
const MODE_3D = '640 x 480';

/** Help on the port's own tab. Menu.hlp has nothing on it. */
const BROWSER_TOPIC = {
  title: 'Weergave: browser',
  paragraphs: [
    'Deze instellingen horen bij de browser, niet bij het originele spel. Ze gaan meteen in en gelden voor alle spelers op dit apparaat. Annuleren zet ze terug.',
    [{ t: '3D-resolutie', b: 1 }, { t: ' is de hoogte in pixels waarop het 3D-beeld wordt getekend. Automatisch volgt de grootte van het scherm, en zonder 3D kaart de resolutie van het spel. ' }, { t: 'Renderschaal', b: 1 }, { t: ' vergroot of verkleint dat beeld, in de breedte en in de hoogte. De menu\'s en het dashboard veranderen daardoor niet. Daaronder zie je hoeveel pixels dat wordt. De GPU-limiet is het grootste beeld dat de videokaart aankan.' }],
    [{ t: 'Volume', b: 1 }, { t: ' regelt al het geluid van het spel, bovenop de schuifbalken in het Opties-menu.' }],
    [{ t: 'Beeldjes per seconde tonen', b: 1 }, { t: ' laat tijdens de race zien hoe vloeiend het spel loopt.' }],
    [{ t: 'Volledig scherm', b: 1 }, { t: ' vult het hele scherm, zoals het origineel. Sommige browsers kunnen dit niet.' }],
    [{ t: 'Aanraakbediening', b: 1 }, { t: ' toont het stuur en de knoppen in de race. Automatisch doet dat alleen op een aanraakscherm.' }],
    [{ t: 'Deadzone gamepad', b: 1 }, { t: ' is hoe ver je de stick moet bewegen voordat de auto stuurt.' }],
  ],
};

/**
 * TfrmDisplaySettings, FormDisplaySettings 0x4875b8, with the title of [MENUSTRINGS] 1. A plain Windows
 * dialog with the DFM's two tabs, built from it by loadPlainDfm, as its FormShow 0x487f14 fills them:
 * captions from menucaps, tabs from MENUSTRINGS 22 and 23. Greyed: what the browser decides, with a
 * note on click. Gamma stays enabled: it is not the display adapter's, [GFX OPTIONS] gamma makes the
 * race's texture conversion square each colour (spel.dat 0x447a00, 0x4c7ed0), and the picture does
 * get darker. Mip-mapping only goes into the save, as in the original: WriteGeneralStuffToIni 0x48bcf0
 * never writes it. Added: a third tab for the port's own settings in app.settings. They apply at
 * once and Annuleren puts them back.
 */
export class TfrmDisplaySettings extends PlainDialog {
  static className = 'TfrmDisplaySettings';
  static dfm = 'TFRMDISPLAYSETTINGS';

  // FormCreate 0x487d30, FormShow 0x487f14 without the DirectDraw lists.
  async create() {
    const d = this.rt.data;
    this.settings = this.args.settings ?? d.player.settings;
    this.port = d.app.settings;
    this.savedPort = portValues(this.port);
    loadPlainDfm(this, this.constructor.dfm);
    this.title = d.menuString(1);
    this.PageControl.captions = [d.menuString(22), d.menuString(23), 'Browser'];
    this.grpTexture.caption = d.menuString(3);
    this.greyOut();
    this.addBrowserPage();
    this.copySettingsToControls();
    this.refreshPortRows();
    this.PageControl.select(0);
    // The App can change a value as well: leaving full screen by the browser's own way switches that off.
    this.onPortChange = () => this.refreshPortRows();
  }

  // FormShow ends with btnOk.SetFocus.
  onShow() {
    this.setFocus(this.btnOk);
    window.addEventListener('resize', this.onPortChange);
    this.port.listeners.add(this.onPortChange);
  }

  onClose() {
    window.removeEventListener('resize', this.onPortChange);
    this.port.listeners.delete(this.onPortChange);
    if (this.modalResult !== 1) restorePortValues(this.port, this.savedPort);
  }

  /** What the browser decides stays visible, grey, and says why when clicked. */
  greyOut() {
    const d = this.rt.data;
    this.greyed = [[this.cboDriver, NOTE_DRIVER], [this.cboResolution, NOTE_RESOLUTION], [this.btnRenderToVideoMemory, NOTE_FOCUS], [this.btnWaitVbl, NOTE_WAITVBL]];
    for (const [control] of this.greyed) control.enabled = false;
    const labels = [[this.lblDriver, NOTE_DRIVER], [this.lblDriverExplanation, NOTE_DRIVER], [this.lblResolution, NOTE_RESOLUTION], [this.lblResolutionExplanation, NOTE_RESOLUTION],
      [this.lblRenderToVideoMemory, NOTE_FOCUS], [this.lblRenderToVideoMemoryExplanation, NOTE_FOCUS], [this.lblWaitVbl, NOTE_WAITVBL], [this.lblWaitVblExplanation, NOTE_WAITVBL]];
    for (const [label, note] of labels) {
      label.font.color = COLOR_GREY;
      label.onClick = () => d.notApplicable(note);
    }
    for (const page of [0, 1]) {
      const hint = new Label(this.PageControl.x, this.btnOk.y - 6, 290, 34, 'Grijs geldt niet in de browser. Klik erop voor uitleg.', { ...FONT_SMALL, color: COLOR_GREY }, { layout: 'center', wordWrap: true });
      hint.page = page;
      this.add(hint);
    }
  }

  /** Port: disabled controls take no clicks, so the form explains them. */
  onBackgroundClick(px, py) {
    for (const [control, note] of this.greyed) {
      if (control.visible && control.hit(px, py)) this.rt.data.notApplicable(note);
    }
    for (const control of this.only3d) {
      if (control.visible && control.hit(px, py)) this.rt.data.notApplicable(NOTE_NEEDS_3D);
    }
    if (this.chkFullscreen.visible && !this.chkFullscreen.enabled && this.chkFullscreen.hit(px, py)) this.rt.data.notApplicable(NOTE_FULLSCREEN);
  }

  /** The tab named Browser: rows at the left margin of the DFM's sheets, the controls in one column. */
  addBrowserPage() {
    const page = 2;
    const left = this.PageControl.x + 4 + 21;
    const top = this.PageControl.y + 24;
    const column = this.PageControl.x + 4 + 175;
    const width = 270;
    let order = this.PageControl.tabOrder + 100;
    const place = (c) => {
      c.page = page;
      c.tabOrder = order;
      order += 100;
      return this.add(c);
    };
    const label = (y, h, text, font = FONT_BLACK) => {
      const c = new Label(left, top + y, 420, h, text, font, { layout: 'center', wordWrap: true });
      c.page = page;
      return this.add(c);
    };
    const track = (y, title, options) => {
      label(y, 30, title);
      const control = place(new PlainTrack(column, top + y, width - 56, 30, options));
      const value = new Label(column + width - 52, top + y, 52, 30, '', FONT_BLACK, { layout: 'center', align: 'right' });
      value.page = page;
      this.add(value);
      return { control, value };
    };
    label(12, 30, '3D-resolutie');
    this.rowResolution = place(new PlainStepper(column, top + 12, width, 30, { onStep: (dir) => this.stepResolution(dir) }));
    this.rowScale = track(54, 'Renderschaal', { min: 25, max: 200, step: 5, keyStep: 25, onChange: (v) => this.port.set('renderScale', v) });
    this.lblEffective = label(92, 24, '');
    this.lblLimit = label(116, 36, '', FONT_SMALL);
    this.rowVolume = track(158, 'Volume', { min: 0, max: 100, keyStep: 5, onChange: (v) => this.port.set('volume', v) });
    this.chkFps = place(new PlainCheck(left, top + 198, width + 100, 26, { onClick: () => this.port.set('showFps', this.chkFps.checked) }));
    this.chkFps.caption = 'Beeldjes per seconde tonen';
    this.chkFullscreen = place(new PlainCheck(left, top + 232, width + 100, 26, { onClick: () => this.port.set('fullscreen', this.chkFullscreen.checked) }));
    this.chkFullscreen.caption = 'Volledig scherm';
    this.chkFullscreen.enabled = Boolean(document.documentElement.requestFullscreen || document.documentElement.webkitRequestFullscreen);
    label(272, 30, 'Aanraakbediening');
    let x = column;
    this.touchChoices = TOUCH_CHOICES.map(([value, caption]) => {
      const w = caption.length > 3 ? 122 : 62;
      const radio = place(new PlainRadio(x, top + 272, w, 30, { group: 'touch', onClick: () => this.port.set('touch', value) }));
      radio.caption = caption;
      radio.value = value;
      x += w;
      return radio;
    });
    this.rowDeadzone = track(314, 'Deadzone gamepad', { min: 0, max: 50, keyStep: 2, onChange: (v) => this.port.set('deadzone', v / 100) });
    label(364, 36, 'Deze instellingen horen bij de browser, niet bij een speler. Ze gaan meteen in en Annuleren zet ze terug.', FONT_SMALL);
  }

  /** A value not in the list counts as Auto, the setting's default. */
  resolutionIndex() {
    return Math.max(0, RESOLUTIONS.findIndex(([v]) => v === String(this.port.get('resolution'))));
  }

  stepResolution(dir) {
    this.port.set('resolution', RESOLUTIONS[this.resolutionIndex() + dir][0]);
  }

  refreshPortRows() {
    const port = this.port;
    const k = this.resolutionIndex();
    const row = this.rowResolution;
    row.text = RESOLUTIONS[k][1];
    row.canDown = k > 0;
    row.canUp = k < RESOLUTIONS.length - 1;
    this.rowScale.control.setValue(port.get('renderScale'), false);
    this.rowScale.value.setText(port.get('renderScale') + '%');
    this.rowVolume.control.setValue(port.get('volume'), false);
    this.rowVolume.value.setText(port.get('volume') + '%');
    this.chkFps.checked = port.get('showFps');
    this.chkFullscreen.checked = this.chkFullscreen.enabled && port.get('fullscreen');
    for (const radio of this.touchChoices) radio.setChecked(radio.value === port.get('touch'));
    const percent = Math.round(port.get('deadzone') * 100);
    this.rowDeadzone.control.setValue(percent, false);
    this.rowDeadzone.value.setText(percent + '%');
    const limit = maxRenderSize(this.rt.data.app);
    const size = viewSize(port, limit, this.settings.resolution);
    this.lblEffective.setText(`3D-beeld: ${size.width} × ${size.height} pixels`);
    this.lblLimit.setText(size.limited ? `GPU-limiet: de videokaart tekent niet groter dan ${limit} pixels breed of hoog.` : '');
    this.invalidate();
  }

  // btnHelpStdClick 0x488b60: context 15 on the first tab, 14 on the other. The port's tab has its own text.
  btnHelpStdClick() {
    const page = this.PageControl.active;
    if (page === 2) return forms.showHelpTopic(this.rt, BROWSER_TOPIC);
    return forms.showHelpContext(this.rt, page === 0 ? 15 : 14);
  }

  // 0x48805c
  lblBrightnessLightClick() {
    if (this.btnBrightnessLight.enabled) this.btnBrightnessLight.click();
  }

  // 0x488074
  lblBrightnessDarkClick() {
    if (this.btnBrightnessDark.enabled) this.btnBrightnessDark.click();
  }

  // 0x488ba0: only with a 3D card.
  lblMipmappingClick() {
    if (isMode3d(this.settings.resolution)) this.chkMipMapping.click();
  }

  // 0x48808c
  lblBilinearFilteringClick() {
    if (this.btnBilinearFiltering.enabled) this.btnBilinearFiltering.click();
  }

  // 0x4880b8
  lblAlphaBlendingClick() {
    if (this.btnAlphaBlending.enabled) this.btnAlphaBlending.click();
  }

  // CopySettingsToControls FUN_004884b8, FUN_00488bd8. cboDriverChange 0x4882f4 at index below 2:
  // one fixed mode in the list, the list off. With a 3D card that is mode 3, table 0x4ab4d8.
  copySettingsToControls() {
    const s = this.settings;
    this.chkMipMapping.checked = s.mipmapping;
    this.optLowDetail.setChecked(s.textureMem === 0);
    this.optMediumDetail.setChecked(s.textureMem === 1);
    this.optHighDetail.setChecked(s.textureMem === 2);
    this.limitTextureDetail();
    this.btnBilinearFiltering.checked = s.bilinear;
    this.btnAlphaBlending.checked = s.alphaBlending;
    this.btnRenderToVideoMemory.checked = s.renderFocus === 0;
    this.btnWaitVbl.checked = s.waitVbl;
    this.btnBrightnessLight.setChecked(s.gamma === 0);
    this.btnBrightnessDark.setChecked(s.gamma === 1);
    this.cboDriver.text = this.cboDriver.items[s.driverIndex + 1] ?? '';
    this.cboResolution.text = MODE_3D;
    // FUN_004884b8: all of these only with a 3D card, FUN_00487b9c.
    this.only3d = [this.chkMipMapping, this.btnBilinearFiltering, this.btnAlphaBlending, this.btnBrightnessLight, this.btnBrightnessDark];
    if (!isMode3d(s.resolution)) {
      this.only3d.push(this.optLowDetail, this.optMediumDetail, this.optHighDetail);
      for (const control of this.only3d) control.enabled = false;
    } else {
      this.only3d.length = 0;
    }
  }

  // FUN_00488bd8: what the race measured the last time it ran, game.ini AVAILABLE_TEXTURE_MEMORY.
  limitTextureDetail() {
    const available = this.rt.data.availableTextureMemory;
    if (available <= 0 || !isMode3d(this.settings.resolution)) return;
    if (available < 0x1000000) {
      if (this.optHighDetail.checked) this.optMediumDetail.setChecked(true);
      this.optHighDetail.enabled = false;
    }
    if (available < 0x800000) {
      if (this.optMediumDetail.checked) this.optLowDetail.setChecked(true);
      this.optMediumDetail.enabled = false;
    }
  }

  // btnOkClick 0x488050, FUN_00488808: what cboDriver and cboResolution did is left out.
  btnOkClick() {
    const s = this.settings;
    s.bilinear = this.btnBilinearFiltering.checked;
    s.alphaBlending = this.btnAlphaBlending.checked;
    s.mipmapping = this.chkMipMapping.checked;
    if (this.optHighDetail.checked) s.textureMem = 2;
    else if (this.optMediumDetail.checked) s.textureMem = 1;
    else s.textureMem = 0;
    s.gamma = this.btnBrightnessLight.checked ? 0 : 1;
  }
}
