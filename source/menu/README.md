# Menu port: how a form is written

`menu.exe` is rewritten by hand. Each original form is one class in `source/menu/forms/`. Original coordinates stay as they are: everything is in the 800x600 form space, and `framework.js` handles scaling and portrait layout.

Specification: `docs/research/menu-forms.md`, `startup-flow.md`, `game-progression.md`, plus the decoded forms in `original-game-decompiled/decompiled/game__menu.exe/delphi/forms/` and the decompiled handlers (addresses in the research file; Ghidra's C drops code after `try..finally`, so read `disassembly.asm` where the C stops short).

## Rules

- State lives in `rt.data` (`source/menu/data.js`), never in a form instance: every visit creates the form anew, as the original did.
- Component positions come from the DFM through `loadDfm`. Do not retype them. `static dfm = 'TFRMGARAGE'` and `static className = 'TfrmGarage'` are required.
- Handlers named in the DFM bind to methods of the same name: `btnBuyTuneUpClick(sender)`, `sldrMusicChange(sender, value)`.
- Timers in the DFM become `{interval, enabled, handler}` on the form under their name. Start them with `this.setTimer(ms, fn, repeat)`; they are cleared when the form closes.
- Images: `await this.rt.assets.image('chara_00.tga')` resolves to null when MenuRcs lacks the member (the original only logs that). Put them in an `ImageBox` from the DFM (`this.imgItem.setImage(img)`).
- Sound: `this.rt.sound.playVoice(name)`, `playFx(name)`, names without extension.
- Dutch text stays exact. Label captions come from `menucaps.ini` (done by `loadDfm`), or from code.
- Forward navigation: `this.rt.goTo(TfrmTrack)`. Dialogs: `const r = await this.rt.showModal(TfrmNoMoney)`.
- Cycles between form modules are fine as long as classes are only used at run time, not at module load.
- Options that cannot apply in a browser stay visible but disabled, with a clear note (`this.rt.data.notApplicable(text)` shows it): see `docs/research/menu-forms.md` section 13. Do not disable anything just because it is unfinished.
- Evidence: put the original handler address in a short comment above each handler.
- `TfrmDisplaySettings` is the one menu form with no game art: a `PlainDialog` built by `loadPlainDfm` from its DFM with the standard Windows controls in `plain-controls.js`. `HelpWindow` and `TfrmException2` are HTML panels in the overlay, so they scroll on a phone and work when a canvas form fails.
- A press belongs to one pointer and to the form it began on (`MenuRuntime.press`). `pointerCancel()` undoes a press without acting: give a component one if its `pointerDown` starts something.
- Every screen overrides `portraitZones()` with the `[x, y, w, h]` regions of its art to stack on a portrait phone, in reading order, so nothing important gets tiny. Regions must cover every component the player uses. Dialogs scale by themselves.

## Pattern

```js
import { TwoWayScreen, buttonDef } from '../base-forms.js';

export class TfrmGarage extends TwoWayScreen {
  static className = 'TfrmGarage';
  static dfm = 'TFRMGARAGE';

  async create() {
    await super.create();
    this.lblPoints.setText(String(this.rt.data.player.euro));
  }

  onShow() {
    super.onShow();
    // voices, focus, timers
  }

  // 0x499524
  previous() {
    this.rt.goTo(TfrmTrack);
  }

  portraitZones() {
    return [[0, 0, 800, 300], [0, 300, 800, 300]];
  }
}
```

Try one form alone: `http://127.0.0.1:4180/?form=TfrmGarage`, with `node tools/shot.mjs --url "http://127.0.0.1:4180/?form=TfrmGarage" --out evidence/forms/garage.png --size 1280x720 --wait 2500`. Portrait: add `--size 390x844`.
