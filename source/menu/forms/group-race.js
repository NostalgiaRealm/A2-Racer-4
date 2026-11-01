// The screens around a race: the garage before it, the results and verdicts after it.
// Specification: docs/research/menu-forms.md sections 5, 7, 10 and 12, game-progression.md
// section 3. Addresses are menu.exe.
import { ImageBox, Label } from '../framework.js';
import { CoolDialog, OneWayScreen, TwoWayScreen, buttonDef } from '../base-forms.js';
import * as forms from './index.js';

/** FUN_00480b08: at least two digits. */
const two = (n) => String(n).padStart(2, '0');

/** FUN_00489e40: name plus two-digit index. A member MenuRcs lacks leaves the control empty. */
async function loadIndexed(rt, box, stem, index) {
  box.setImage(await rt.assets.image(stem + two(index) + '.tga'));
}

/** FUN_00480448: stops the current voice. A member MenuRcs lacks then plays nothing, the original only logs it. */
function playVoice(rt, name) {
  if (rt.assets.has(name + '.wav')) rt.sound.playVoice(name);
  else rt.sound.stopVoice();
}

/** FUN_00480584 and FUN_004806b0: prefix, then one of n numbered variants. */
function playVariant(rt, prefix, n) {
  playVoice(rt, `${prefix}_${two(Math.floor(Math.random() * n))}`);
}

/** TabOrder of the flattened DFM, first to last. The shipped DFMs only list some of them. */
function setTabOrder(...buttons) {
  buttons.forEach((button, i) => {
    button.tabOrder = i;
  });
}

/** Portrait layout of the screens after a race: Help and Einde, the panel with the text, then the picture with Verder. */
const OUTCOME_ZONES = [[600, 0, 200, 50], [10, 22, 385, 480], [400, 60, 400, 540]];

/** The same where the baked title reaches past the panel: TfrmQualify and TfrmWinNormal. */
const LONG_TITLE_ZONES = [[600, 0, 200, 50], [10, 22, 490, 480], [400, 70, 400, 530]];

/** TStatusIndicator 0x491520: a row of pips, created hidden. */
class StatusIndicator {
  constructor(form, count, image) {
    this.image = image;
    this.pips = [];
    for (let i = 0; i < count; i++) {
      const pip = form.add(new ImageBox(0, 0, image));
      pip.visible = false;
      this.pips.push(pip);
    }
  }

  // FUN_004916a4
  place(x, y, dx) {
    this.pips.forEach((pip, i) => {
      pip.x = x + i * dx;
      pip.y = y;
    });
  }

  // FUN_00491710: the first n show.
  show(n) {
    this.pips.forEach((pip, i) => {
      pip.setImage(this.image);
      pip.visible = i < n;
    });
  }
}

/** TMultiIndicator 0x491580: a value with a previewed change, in three images. */
class MultiIndicator extends StatusIndicator {
  constructor(form, count, image, lossImage, gainImage) {
    super(form, count, image);
    this.lossImage = lossImage;
    this.gainImage = gainImage;
  }

  // FUN_0049180c
  show(value, delta) {
    this.pips.forEach((pip, i) => {
      const after = i < value + delta;
      if (i < value) pip.setImage(after ? this.image : this.lossImage);
      else if (after) pip.setImage(this.gainImage);
      pip.visible = i < value || after;
    });
  }
}

/** TfrmGarage: buy tune-ups before a Tour race. The selection is the form's own (+0x34C), Motor at each visit. */
export class TfrmGarage extends TwoWayScreen {
  static className = 'TfrmGarage';
  static dfm = 'TFRMGARAGE';

  // FormCreate 0x498d8c and FormShow 0x4990a0, without the voice.
  async create() {
    await super.create();
    const { assets } = this.rt;
    setTabOrder(this.btnNext, this.btnPrevTU, this.btnBuyTuneUp, this.btnNextTU, this.btnHelp, this.btnClose, this.btnPrevious);
    const images = (stem) => Promise.all([0, 1, 2, 3, 4].map((i) => assets.image(stem + two(i) + '.tga')));
    [this.names, this.pictures] = await Promise.all([images('tune_'), images('tuneup')]);
    await this.createRows();
    this.selectTuneUp(0);
  }

  // FUN_00498df8. Top to bottom: Speed, Accell, Handling, Brakes, Turbo.
  async createRows() {
    const { assets } = this.rt;
    const [normal, gain, loss] = await Promise.all(['klrondje', 'blind_up', 'redin_up'].map((n) => assets.image(n + '.tga')));
    const anchor = this.lblAncInd00;
    const dx = this.lblAncInd01.x - anchor.x;
    const dy = this.lblAncInd10.y - anchor.y;
    this.rows = [0, 1, 2, 3, 4].map((r) => {
      const row = new MultiIndicator(this, 9, normal, loss, gain);
      row.place(anchor.x, anchor.y + dy * r, dx);
      return row;
    });
  }

  // FormShow 0x4990a0, FUN_00499538.
  onShow() {
    super.onShow();
    const { data } = this.rt;
    if (data.menuIni.prevState !== 2) return;
    if (data.resultFlags & data.RR.QUALIFY) playVariant(this.rt, 'CGR07', 3);
    else playVariant(this.rt, 'CBR07', 6);
  }

  // FUN_004993d4
  selectTuneUp(i) {
    this.selected = i;
    this.imgItemName.setImage(this.names[i]);
    this.imgItem.setImage(this.pictures[i]);
    this.showTexts();
    this.showRows();
    this.showBuyButton();
  }

  // FUN_00499464
  showTexts() {
    const { data } = this.rt;
    const tuneUp = data.static.tuneUps[this.selected];
    this.lblPoints.setText(String(data.player.euro));
    this.lblTextBlock.setText(tuneUp.text);
    this.lblPrice.setText(data.menuFormat(13, String(tuneUp.price)));
  }

  // FUN_004996a0. Turbo and a bought tune-up preview nothing on the four stats.
  showRows() {
    const { player, static: statics } = this.rt.data;
    const result = player.result;
    const char = player.tourChar;
    const tuneUp = statics.tuneUps[this.selected];
    const turbo = this.selected === 4;
    const preview = (field) => (turbo || result.hasTuneUp(this.selected) ? 0 : tuneUp[field]);
    this.rows[0].show(char.speed + result.speedBonus, preview('dSpeed'));
    this.rows[1].show(char.accell + result.accellBonus, preview('dAccell'));
    this.rows[2].show(char.handling + result.handlingBonus, preview('dHandling'));
    this.rows[3].show(char.brakes + result.brakesBonus, preview('dBrakes'));
    this.rows[4].show(Math.trunc((result.turbo * 9) / 100), turbo ? 1 : 0);
    this.invalidate();
  }

  // FUN_00499600
  showBuyButton() {
    this.btnBuyTuneUp.enabled = this.rt.data.canBuyTuneUp(this.selected);
    this.invalidate();
  }

  // 0x4995b0
  btnNextTUClick() {
    this.selectTuneUp(this.selected === 4 ? 0 : this.selected + 1);
  }

  // 0x4998cc
  btnPrevTUClick() {
    this.selectTuneUp(this.selected === 0 ? 4 : this.selected - 1);
  }

  // 0x4991f4
  async btnBuyTuneUpClick() {
    const outcome = this.rt.data.buyTuneUp(this.selected);
    if (outcome === 'noMoney') {
      await this.rt.showModal(forms.TfrmNoMoney);
    } else if (outcome === 'bought') {
      this.rt.sound.playFx('PEEP');
      this.showTexts();
      this.showRows();
      this.showBuyButton();
    }
  }

  // 0x4991ac
  next() {
    return this.rt.data.flow.startInfoThenRace(this.rt);
  }

  // 0x499524
  previous() {
    return this.rt.goTo(forms.TfrmTrack);
  }

  portraitZones() {
    return [[600, 0, 200, 50], [10, 22, 385, 545], [410, 60, 390, 390], [570, 510, 230, 90]];
  }
}

/** The screens after a race. Their DFMs do not list imgItem, so it keeps TGameMenuScreen's @456,96 under the buttons. */
class OutcomeScreen extends OneWayScreen {
  async create() {
    await super.create();
    this.imgItem = this.add(new ImageBox(456, 96), 0);
    this.imgItem.name = 'imgItem';
    setTabOrder(this.btnHelp, this.btnClose, this.btnNext);
  }

  portraitZones() {
    return OUTCOME_ZONES;
  }
}

/** TfrmResults: five rows, created here as in FormShow, in Quick Race on another background. */
export class TfrmResults extends OutcomeScreen {
  static className = 'TfrmResults';
  static dfm = 'TFRMRESULTS';

  // vmt_0e4 0x4a0b5c
  backgroundName() {
    return this.rt.data.menuIni.prevState === 1 ? 'quickres.bmp' : super.backgroundName();
  }

  // FormShow 0x4a0624, without the voice.
  async create() {
    await super.create();
    const { rt } = this;
    const { rankList, playerPos, static: statics } = rt.data;
    setTabOrder(this.btnNext, this.btnClose, this.btnHelp);
    this.imgFocus.setImage(await rt.assets.image('focus.tga'));
    await loadIndexed(rt, this.imgItem, 'win_ch', rankList[0].charIx);
    const step = this.lbl2ndImage.y - this.lblTopImage.y;
    for (let r = 0; r < statics.tour.charCount; r++) {
      const image = this.add(new ImageBox(this.lblTopImage.x, this.lblTopImage.y + step * r));
      await loadIndexed(rt, image, 'res_ch', rankList[r].charIx);
      this.add(this.timeLabel(r, this.lblTime.y + step * r));
    }
    this.imgFocus.x = this.lblFocus.x;
    this.imgFocus.y = this.lblFocus.y + step * playerPos;
    this.bringToFront(this.imgFocus);
  }

  /** Made after the caption engine ran: only size and colour come from lblTime, so not bold, in the form's font. */
  timeLabel(r, y) {
    const { data } = this.rt;
    const { rankList } = data;
    const text = r === 0 ? data.formatTime(rankList[0].time) : ' + ' + data.formatTime(rankList[r].time - rankList[0].time);
    const { size, color } = this.lblTime.font;
    return new Label(this.lblTime.x, y, 0, 0, text, { name: "'MS Sans Serif', Arial, Helvetica, sans-serif", size, color, bold: false });
  }

  // FormShow 0x4a0624
  onShow() {
    super.onShow();
    playVoice(this.rt, 'aud2');
  }

  // 0x4a0a20
  next() {
    const { data } = this.rt;
    const { RR, resultFlags } = data;
    if (data.menuIni.prevState === 1) return this.rt.goTo(forms.TfrmQuickRace);
    if (resultFlags & RR.WINTRACK) return this.rt.goTo(forms.TfrmWinNormal);
    if (resultFlags & RR.QUALIFY) return this.rt.goTo(forms.TfrmQualify);
    return this.rt.goTo(forms.TfrmLoseNormal);
  }

  portraitZones() {
    return [[600, 0, 200, 50], [10, 22, 385, 540], [400, 60, 400, 540]];
  }
}

/** TfrmLoseNormal: below the qualifying place. */
export class TfrmLoseNormal extends OutcomeScreen {
  static className = 'TfrmLoseNormal';
  static dfm = 'TFRMLOSENORMAL';

  // FormShow 0x49f50c, without the voice.
  async create() {
    await super.create();
    const { player } = this.rt.data;
    await loadIndexed(this.rt, this.imgTrackName, 'trname', player.tourTrack.index);
    this.lblPoints.setText(String(player.euro));
    this.lblTextBlock.setText(player.tourTrack.loseText);
    await loadIndexed(this.rt, this.imgItem, 'los_ch', player.tourChar.index);
    setTabOrder(this.btnHelp, this.btnNext, this.btnClose);
  }

  // FormShow 0x49f50c
  onShow() {
    super.onShow();
    playVariant(this.rt, 'CDL' + two(this.rt.data.player.tourChar.index), 2);
    this.setTimer(4500, () => this.timSampleTimer());
  }

  // 0x49f6fc
  timSampleTimer() {
    playVoice(this.rt, 'CDL07_' + two(this.rt.data.player.trackToDrive));
  }

  // 0x49f4f8
  next() {
    return this.rt.goTo(forms.TfrmTrack);
  }
}

/** TfrmQualify: through to the next track, behind this race's winner. */
export class TfrmQualify extends OutcomeScreen {
  static className = 'TfrmQualify';
  static dfm = 'TFRMQUALIFY';

  // FormShow 0x49fe68, without the voice.
  async create() {
    await super.create();
    const { player, rankList } = this.rt.data;
    const winner = rankList[0].charIx;
    await loadIndexed(this.rt, this.imgTrackName, 'trname', player.tourTrack.index);
    this.lblTextBlock.setText(player.tourTrack.qualifyText);
    await loadIndexed(this.rt, this.imgItem, 'win_ch', winner);
    await loadIndexed(this.rt, this.imgWinnerName, 'chara_', winner);
    setTabOrder(this.btnNext, this.btnClose, this.btnHelp);
  }

  // FormShow 0x49fe68
  onShow() {
    super.onShow();
    playVariant(this.rt, 'CDW' + two(this.rt.data.rankList[0].charIx), 2);
    this.setTimer(4500, () => this.timSampleTimer());
  }

  // 0x49ff90
  timSampleTimer() {
    playVoice(this.rt, 'CDQ07_' + two(this.rt.data.player.trackToDrive));
  }

  // 0x49fe54
  next() {
    return this.rt.goTo(forms.TfrmTrackIntro);
  }

  portraitZones() {
    return LONG_TITLE_ZONES;
  }
}

/** TfrmWinNormal: first place on a track. */
export class TfrmWinNormal extends OutcomeScreen {
  static className = 'TfrmWinNormal';
  static dfm = 'TFRMWINNORMAL';

  // FormShow 0x4a0218 and FUN_004a0304, without the voice.
  async create() {
    await super.create();
    const { data } = this.rt;
    const { player } = data;
    this.lblTextBlock.setText(player.trackDriven.winText);
    // AutoSize in the DFM: the caption sets the width, the design-time 49 pixels would clip it.
    this.lblBonus.w = 0;
    this.lblBonus.setText(data.menuFormat(10, data.static.firstPlaceBonus));
    await loadIndexed(this.rt, this.imgTrackName, 'trname', player.tourTrack.index);
    await loadIndexed(this.rt, this.imgItem, 'win_ch', player.tourChar.index);
  }

  // FormShow 0x4a0218
  onShow() {
    super.onShow();
    playVariant(this.rt, 'CDW' + two(this.rt.data.player.tourChar.index), 2);
    this.setTimer(4500, () => this.timSampleTimer());
  }

  // 0x4a03b0
  timSampleTimer() {
    playVoice(this.rt, 'CDW07_' + two(this.rt.data.player.trackToDrive));
  }

  // 0x4a02f0
  next() {
    return this.rt.goTo(forms.TfrmTrackIntro);
  }

  portraitZones() {
    return LONG_TITLE_ZONES;
  }
}

/** TfrmWinChase: escaped Harry. COPANGRY is not in MenuRcs, so imgItem stays empty: he is in the background. */
export class TfrmWinChase extends OutcomeScreen {
  static className = 'TfrmWinChase';
  static dfm = 'TFRMWINCHASE';

  // FormShow 0x4a0dc8, without the voice.
  async create() {
    await super.create();
    const { rt } = this;
    const { player } = rt.data;
    this.lblTextBlock.setText(player.tourTrack.winText);
    await loadIndexed(rt, this.imgTrackName, 'trname', player.tourTrack.index);
    this.imgItem.setImage(await rt.assets.image('COPANGRY.tga'));
  }

  // FormShow 0x4a0dc8
  onShow() {
    super.onShow();
    playVoice(this.rt, 'CDW05_' + two(this.rt.data.player.trackToDrive));
  }

  // 0x4a0db4
  next() {
    return this.rt.goTo(forms.TfrmTrackIntro);
  }
}

/** TfrmLoseChase: caught by Harry. cophappy is not in MenuRcs either. */
export class TfrmLoseChase extends OutcomeScreen {
  static className = 'TfrmLoseChase';
  static dfm = 'TFRMLOSECHASE';

  // FormShow 0x4a10a8, without the voice.
  async create() {
    await super.create();
    const { rt } = this;
    const { player } = rt.data;
    await loadIndexed(rt, this.imgTrackName, 'trname', player.tourTrack.index);
    this.imgItem.setImage(await rt.assets.image('cophappy.tga'));
    this.lblTextBlock.setText(player.tourTrack.loseText);
  }

  // FormShow 0x4a10a8
  onShow() {
    super.onShow();
    playVoice(this.rt, 'CDL05_' + two(this.rt.data.player.trackToDrive));
  }

  // 0x4a1094
  next() {
    return this.rt.goTo(forms.TfrmTrack);
  }
}

/** TfrmWinFinal: the Tour is won. The movie loops in pnlMovie while three voices follow each other. */
export class TfrmWinFinal extends OneWayScreen {
  static className = 'TfrmWinFinal';
  static dfm = 'TFRMWINFINAL';

  async create() {
    await super.create();
    const { rt } = this;
    const char = rt.data.player.tourChar;
    setTabOrder(this.btnNext, this.btnClose, this.btnHelp);
    this.lblTextBlock.setText(char.winRaceText);
    this.pnlMovie = {
      x: this.lblAncTopLeft.x,
      y: this.lblAncTopLeft.y,
      w: this.lblAncBottomRight.x - this.lblAncTopLeft.x,
      h: this.lblAncBottomRight.y - this.lblAncTopLeft.y,
    };
    // FUN_00482a0c needs the bytes, which come with the sample: load before the timers start.
    this.charVoice = 'CCW08_' + two(char.index);
    this.firstSeconds = await rt.sound.durationSeconds('CDW07_04');
    this.charSeconds = await rt.sound.durationSeconds(this.charVoice);
  }

  // FormShow 0x4a3f44, medWinnerNotify 0x4a4214 loops the movie. A movie that will not play leaves the panel black.
  onShow() {
    super.onShow();
    const { x, y, w, h } = this.pnlMovie;
    this.rt.playVideo(`ch${two(this.rt.data.player.tourChar.index)}.mp4`, this, x, y, w, h, { loop: true });
    this.rt.video.el.style.visibility = 'hidden';
    this.setTimer(40, () => this.invalidate(), true);
    this.showScreen();
  }

  // FormShowScreen 0x4a45b4, the event after the screen is visible.
  showScreen() {
    this.setTimer(this.firstSeconds * 1000 + 1500, () => this.timSample1Timer());
    playVoice(this.rt, 'CDW07_04');
  }

  // 0x4a4444
  timSample1Timer() {
    this.setTimer(this.charSeconds * 1000 + 1500, () => this.timSample2Timer());
    playVoice(this.rt, this.charVoice);
  }

  // 0x4a455c
  timSample2Timer() {
    playVoice(this.rt, 'CCW08_05');
  }

  /**
   * pnlMovie is a window above every graphic control. The frames go through the canvas, 25 per
   * second as in the AVI: there the dialogs lie over them as in the original, and the corners
   * match the background, which they do not in a video element under Chrome's colour management.
   */
  draw(g) {
    super.draw(g);
    const { x, y, w, h } = this.pnlMovie;
    g.fillStyle = '#000';
    g.fillRect(x, y, w, h);
    const video = this.rt.video?.el;
    if (video) g.drawImage(video, x, y, w, h);
  }

  onClose() {
    this.rt.stopVideo();
  }

  // 0x4a42e8: the timers and the movie stop with the form.
  next() {
    return this.rt.goTo(this.rt.data.player.qr.harryUnlocked ? forms.TfrmCharacter : forms.TfrmQuickRace);
  }

  portraitZones() {
    return OUTCOME_ZONES;
  }
}

/** TfrmUnlock: Harry's car is won. The launcher FUN_0049b904 runs from TfrmQuickRace, event 0x49c6a0. */
export class TfrmUnlock extends CoolDialog {
  static className = 'TfrmUnlock';
  static dfm = 'TFRMUNLOCK';

  // GDIFormShow 0x49b964
  async create() {
    await super.create();
    this.btnOk1.setDef(await buttonDef(this.rt, 'gdfBtnOkSingleDlg'));
  }
}
