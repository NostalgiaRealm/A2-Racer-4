// menu.exe's program flow: StartUp and what it does after a race, the name dialogs, the Einde
// button. docs/research/startup-flow.md sections 2 to 4, menu-forms.md sections 4 and 5.
// Form classes are used only at run time, so the import cycle with the forms does no harm.
import * as forms from './forms/index.js';
import { CoolDialog, buttonDef } from './base-forms.js';
import { RR } from './data.js';
import { wrapLines } from './framework.js';

/** A short note for what cannot apply in a browser, in the look of TfrmDoubleKeys. */
class NoteDialog extends CoolDialog {
  static className = 'TfrmDoubleKeys';
  static dfm = 'TFRMDOUBLEKEYS';

  backgroundName() {
    return 'popempty.tga';
  }

  async create() {
    await super.create();
    this.btnOk1.setDef(await buttonDef(this.rt, 'gdfBtnOkSingleDlg'));
    const label = this.lblDouble;
    label.setText(this.args.text);
    // The label was made for one short sentence: a longer note takes a smaller size to stay whole.
    const g = this.rt.g;
    const lines = () => {
      g.font = `bold ${label.font.size}px ${label.font.name}`;
      return wrapLines(g, label.text, label.w).length;
    };
    while (label.font.size > 14 && lines() * Math.round(label.font.size * 1.2) > label.h) label.font.size--;
  }
}

export function showNote(rt, text) {
  return rt.showModal(NoteDialog, { text });
}

/** ShowIntro FUN_004a50d0: modal. No file means no intro and no error. */
function showIntro(rt) {
  return rt.showModal(forms.TfrmIntro);
}

/** StartMusic 0x4820d0 at the static default volume until a player's own volume is loaded. */
function startMusic(rt) {
  rt.data.applySoundSettings();
  rt.sound.startMusic().then(() => rt.data.applySoundSettings());
}

/** ShowNewPlayerDlg FUN_00498414 and FUN_004984f0: the text comes back through the dialog's args. */
async function nameDialog(rt, Dialog, name) {
  const args = { name };
  const result = await rt.showModal(Dialog, args);
  return { result, name: args.name || '' };
}

/** Port: the lowest free default name. Speler 1 fits the field's MaxLength of 12. */
function defaultPlayerName(data) {
  const taken = new Set(data.otherPlayers().map((other) => other.name));
  if (data.player) taken.add(data.player.name);
  let n = 1;
  while (taken.has('Speler ' + n)) n++;
  return 'Speler ' + n;
}

/**
 * The loop of AddNewPlayer FUN_00493754 and AskForNewPlayer FUN_004a53d8: until a name or Annuleren.
 * Port: a pad cannot type, so OK from a pad with the field empty takes a default name instead of asking again.
 */
export async function askPlayerName(rt) {
  for (;;) {
    const answer = await nameDialog(rt, forms.TfrmNewPlayer, '');
    if (!answer.name && answer.result === 1 && rt.lastInputPad) answer.name = defaultPlayerName(rt.data);
    if (answer.name || answer.result === 2) return answer;
  }
}

/**
 * AskForNewPlayer FUN_004a53d8. A name typed before Annuleren still makes a player: the dialog
 * hands its text back in any case and the code tests only the text.
 */
async function askForNewPlayer(rt) {
  const { result, name } = await askPlayerName(rt);
  if (name) rt.data.createPlayer(name);
  return result;
}

/** GetPlayer FUN_004a525c. Modal result 2 is Application.Terminate. */
async function getPlayer(rt) {
  const data = rt.data;
  let result = 1;
  if (data.menuIni.currentPlayer >= 0) {
    try {
      data.loadPlayer(data.menuIni.currentPlayer);
    } catch (e) {
      console.warn('load player error', e);
      result = await askForNewPlayer(rt);
    }
  } else {
    result = await askForNewPlayer(rt);
  }
  if (result === 1) await rt.goTo(forms.TfrmMainScreen);
  else await data.terminate();
}

/** The name dialog of CheckIfBestLap, FUN_004984f0. */
function askHighScoreName(rt) {
  return async (name) => (await nameDialog(rt, forms.TfrmHighScoreDlg, name)).name;
}

/** FlowQR FUN_004a58a4. */
async function flowQuickRace(rt) {
  const data = rt.data;
  const results = data.gameIni.finished && !data.player.qrTrack.isChase;
  await rt.goTo(results ? forms.TfrmResults : forms.TfrmQuickRace);
}

/** FlowTour FUN_004a59cc. */
async function flowTour(rt) {
  const data = rt.data;
  const flags = data.resultFlags;
  const chase = flags & RR.CHASE;
  let next;
  if (data.gameIni.finished) {
    if (!chase) next = forms.TfrmResults;
    else if (!(flags & RR.QUALIFY)) next = forms.TfrmLoseChase;
    else next = flags & RR.WINRACE ? forms.TfrmWinFinal : forms.TfrmWinChase;
  } else if (chase && !data.gameIni.playerAborted) {
    next = forms.TfrmLoseChase;
  } else {
    next = forms.TfrmTrack;
  }
  await rt.goTo(next);
}

/**
 * StartUp FUN_004a5d70, without the CD check FUN_004a5d4c: the intro comes with the page.
 * A save that cannot be loaded after a race has no traced handling in the original; here it
 * leads to the player question, as GetPlayer does.
 */
export async function startUp(rt, { firstTime = false } = {}) {
  const data = rt.data;
  data.beginMenuRun(firstTime);
  const previous = data.menuIni.prevState;
  data.raceMode = previous;
  if (previous === 0) {
    await showIntro(rt);
    startMusic(rt);
    await getPlayer(rt);
    return;
  }
  if (previous !== 1 && previous !== 2) {
    console.error('illegal value of Previous : ' + previous);
    return;
  }
  startMusic(rt);
  try {
    data.loadPlayer(data.menuIni.currentPlayer);
  } catch (e) {
    console.warn(e);
    data.raceMode = 0;
    await getPlayer(rt);
    return;
  }
  if (previous === 1) {
    await data.fillRaceResultsQR(askHighScoreName(rt));
    data.saveProgress();
    await flowQuickRace(rt);
  } else {
    await data.fillRaceResultsTour(askHighScoreName(rt));
    data.saveProgress();
    await flowTour(rt);
  }
}

/** menu.exe /Default, which the launcher ran after every race. */
export function afterRace(rt) {
  return startUp(rt, { firstTime: false });
}

/** TGameMenuScreen.btnCloseClick 0x49e9bc. Result 2 stays on the screen. */
export async function closeRequested(rt) {
  const result = await rt.showModal(forms.TfrmCloseDlg);
  if (result === 3) {
    rt.data.raceMode = 0;
    await rt.data.doExit();
  } else if (result === 1) {
    await rt.goTo(forms.TfrmMainScreen);
  }
}

/** btnHelpClick of TGameMenuScreen 0x49e678 and TfrmCoolDialog 0x4891e0. */
export function helpRequested(rt, form) {
  return forms.TBalloonForm.showFor(rt, form);
}

let faultShown = false;

/**
 * TDaviExceptionLogger's handler FUN_004a859c with its flag DAT_004ab5c4: one dialog at a time, and
 * what goes wrong meanwhile only reaches the console. Result 7 is Application.Terminate, FUN_004a7c14.
 */
export async function unexpectedError(rt, error) {
  if (faultShown) return;
  faultShown = true;
  try {
    if ((await rt.showModal(forms.TfrmException2, { error })) === 7) await rt.data.terminate();
  } catch (e) {
    console.error(e);
    globalThis.location?.reload();
  } finally {
    faultShown = false;
  }
}

/**
 * Verder on TfrmGarage 0x4991ac and TfrmQuickRace 0x49bf18: the reminder if it is on, then the
 * race. Resolves to false when the player chose Annuleren and stays on the screen.
 */
export async function startInfoThenRace(rt) {
  const data = rt.data;
  const settings = data.player.settings;
  if (settings.startInfoOn) {
    // FUN_0049812c.
    const Dialog = settings.controls.controlType === 0 ? forms.TfrmStartInfoKeyBoard : forms.TfrmStartInfo;
    if ((await rt.showModal(Dialog)) === 2) return false;
  }
  await data.doExit();
  return true;
}
