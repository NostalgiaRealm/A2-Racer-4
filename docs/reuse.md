# Reuse from the reference ports

This is what the port took from RedCat SuperKarts and RedCat Spookkasteel, as brief section 4 asks: what was reused, the evidence for compatibility, the adaptations, and what differs on purpose. It belongs with [feature-parity.md](feature-parity.md); A2 Racer 4's own files stay the authority, see [original-behavior.md](original-behavior.md). Nothing here is evidence of how A2 Racer 4 behaves. Both projects were read read-only; nothing in them changed.

Result in one line: two SVG files with their licence text, and the wheel's interaction logic, come from RedCat SuperKarts. No code, data or behaviour comes from RedCat Spookkasteel.

How that was established, on the final source:

- Byte comparison: SHA-256 of all 75 files in this project's `source/`, `tools/` and `public/assets/touch/` against 675 distinct hashes of the same folders in SuperKarts and of `source/`, `tools/`, `src/` in Spookkasteel. The only matches are `steering-wheel.svg`, `brake-pedal.svg` and `CC0-1.0.txt`, each in `source/assets/touch/` and `public/assets/touch/`, all against SuperKarts.
- Name search: `source/`, `tools/`, `package.json` mention SuperKarts only in the header of `source/input/touch.js`, in `source/assets/touch/ATTRIBUTION.md` and in `TOUCH_REFERENCE` of `tools/prepare-assets.py`. Nothing mentions Spookkasteel.

These are comparisons of files. They do not verify behaviour: for that see [parity/input-platform.md](parity/input-platform.md).

## RedCat SuperKarts

Path: `/home/rick/Documents/Rebuilds/RedCat Superkarts/`. Read at git head `5bfe0b62` (2026-10-31), package version 1.0.3.

**Editable source and generated output** (`docs/runtime-layout.md`, `source/README.md`):

| Location | Kind |
|---|---|
| `source/` | Editable modules, HTML template, stylesheet. Not loaded directly by the game |
| `tools/`, `tests/`, `electron/`, `docs/` | Editable tools, checks, desktop wrapper, documents |
| `public/assets/touch/` | Maintained by hand: the two extracted SVGs, `bonus.png`, attribution, licence, source sheet, manifest |
| `public/assets/` other folders | Prepared from the original game by `tools/prepare.mjs` |
| `src/`, root `index.html`, `runtime-manifest.json` | Generated runtime, `npm run bundle`. Do not edit |
| `dist/`, `release/` | Generated website and packages |
| `original-source/` | Recovered C and assembly, reference only |
| `work/`, `raw/`, `evidence/` | Local analysis and retained evidence |

**Reused here:**

| What | Reference | Here | Form of reuse |
|---|---|---|---|
| Wheel graphic | `public/assets/touch/steering-wheel.svg` | `source/assets/touch/steering-wheel.svg`, copied to `public/assets/touch/` by `prepare_touch` in `tools/prepare-assets.py` | Byte-identical, SHA-256 `574cda78…ab89`. `public/assets/asset-map.json` records the reference path and the hash |
| Pedal graphic, used for `Handrem` | `public/assets/touch/brake-pedal.svg` | `source/assets/touch/brake-pedal.svg`, same step | Byte-identical, SHA-256 `16e3458f…7b87` |
| Licence and notice | `public/assets/touch/CC0-1.0.txt`, `ATTRIBUTION.md` | `source/assets/touch/` | The licence is byte-identical. The notice is the reference's, with a new first paragraph and without its bonus-button section and its links to the unmodified source drawing, which stay in that project |
| Wheel response | `touchWheelInput`, `axisDeadzone`, `source/input.js` | Same names, `source/input/touch.js` | Transcribed. Same output at all 70,531 wheel positions and 6,002 deadzone values sampled in Node from both modules |
| Wheel interaction | `bindSteeringWheel`, `source/input.js` | `TouchControls.bindWheel`, `source/input/touch.js` | Transcribed. Table below |
| Hold-button interaction | `bindTouch`, `touchReleases`, `releaseTouches`, `source/input.js` | `TouchControls.bindPress`, `releases`, `releaseAll`, `source/input/touch.js` | Transcribed, with a callback in place of the reference's action sources. Table below |
| Wheel markup and feedback | `#touch-wheel`, `#touch-wheel-help`, `source/index.html`; `#touch-wheel` rules, `source/style.css` | The same elements and rules, `source/index.html`, `source/style.css` | Same structure, gradient, rotation, drop shadow, opacity, label positions and colours, focus outline, callout rule, labels `▲ Gas`, `Achteruit ▼`, help text. The `aria-label` says `onder remmen en achteruit` where the reference has `onder achteruit` |
| Wheel size | `--wheel-size` rules, `source/style.css` | `--wheel-size`, `source/style.css` | Same values: `clamp(148px,44vmin,224px)`, portrait `clamp(148px,45vw,224px)`, 140 px at up to 600 px wide in landscape |
| Second-finger release | `touch-stop` `pointerup`, `source/main.js` | `onRelease`, `source/input/touch.js`, for the gear and `Sluiten` | Same test, as a helper |
| Stick deadzone 0.18, range 0 to 0.5, pad button numbers A0, B1, X2, LT6, RT7, D-pad 12..15, menu map | `InputController.poll`, `settings.deadzone` | `GamepadInput`, `source/input/gamepad.js`; `deadzone`, `source/settings.js` | Rewritten for this game's actions. Y and RB mean something else here |
| Setting names and meaning | `resolution: 'auto'`, `renderScale`, `showFps`, `fullscreen`, `touch` auto/on/off, `deadzone` | `source/settings.js` | Names, 25..200 range and three-way touch setting. The size formula is separate, but the GPU limit has the reference's form: `min(scale, maxSize/w, maxSize/h)`, `limited`, and the text ` · GPU-limiet` |
| Tool versions | `package.json`: Node 24, `three` 0.186.0, `esbuild` 0.28.2, `playwright` 1.58.2 | `package.json`: the same | Same pins |
| Layout convention | `source/` editable, generated runtime elsewhere | `source/` editable, `public/src/` generated | Convention only. `tools/bundle.mjs` and `tools/serve.mjs` are separate, smaller files |

**Deliberately not reused, and why:**

| What | Why not |
|---|---|
| `source/simulation/`, `race-simulation.js`, handling constants, wheel-to-physics path (`native-input.js`) | The brief forbids importing Superkarts physics. A2 Racer 4's own code runs: `spel.dat` is recompiled, and the wheel enters at `lX` of a virtual joystick |
| `InputState`, `InputController`, `KEYS`, `bindings` | That design is an action table read by a JavaScript simulation. A2's recompiled code polls `GetDeviceState` and `GetAsyncKeyState`, so the host fills key and joystick state instead |
| Proportional throttle and brake from the wheel | A2's DEVICE 2 reads gas as a button and brake through a 0.5 threshold, then applies its own 300 and 320 units/s ramps. `research/input.md` H5 records the alternative, DEVICE 4, and why it was not chosen. Required by the brief's "A2 Racer 4 steering, reversing, and acceleration" |
| `bonus.png` and its prompts | Generated for SuperKarts' power-up. A2 has turbo, shown with the text `Turbo` |
| Action button art and sizes, `--action-size` of the reference | A2 has more actions, so `Claxon`, `Turbo`, `Handrem` are smaller round buttons and the others text buttons, placed around the HUD |
| `race-hud*.js`, `hud-*.js` | A2's HUD logic runs as shipped, moved by `source/host/hud-layout.js`, from the A2 HUD research and the owner's patch |
| `native-menu.js`, `native-slider.js`, `native-tab-order.js` | They handle the same VCL component names (`TGDIButton`, `TDaviGraphicSlider`), but A2's menu was written from A2's own DFMs and handlers. Compatibility of those modules with `menu.exe` was not established |
| `tools/prepare-assets.py`, `prepare.mjs`, `native-menu-resources.py` | A2's `.img`/`.ind` layout was checked on its own files (`original-game-decompiled/scripts/rc_extract.py`, exact file-size equations). SuperKarts documents the same 24-byte record, so the layouts agree, but no code was taken. A2's race reads its archives unchanged |
| `MOBILE_AUTO_PIXELS`, `autoPixelBudget`, rectangle-fit presets of `renderDimensions` | The 1-megapixel Auto budget on phones would break the brief's 1600x720 at Auto 100%. Presets here are base heights |
| `electron/`, desktop packaging | Not in this brief |

**Evidence for compatibility:**

- Graphic: same bytes. Provenance is in the reference: `Car Controls` by looneybits, CC0 1.0 (`public/assets/touch/ATTRIBUTION.md`, `docs/research-touch-controls.md`), and is carried along in `source/assets/touch/ATTRIBUTION.md`.
- Response: same numbers, as above. The function has no game constants, only a normalised position.
- Output contract: `{steer, throttle, brake}`. A2's DEVICE 2 path takes it: `lX = round((steer+1)*32767)`, button 2 for gas, `lY` full down for brake (`research/input.md` H5). check-race-ui on Amsterdam with CDP touch events: `touch: wheel up is gas, car accelerates`, `touch: steering and turbo together`, `touch: cancel releases everything`, `touch: wheel down brakes, then reverses`, `touch: wheel at the reference size`.
- Not established: feel on a real phone. Neither project was run on one for this.

**Adaptations:**

| Adaptation | Where | Effect |
|---|---|---|
| Output goes to `GameInput.touch`, then a virtual joystick on DEVICE 2 | `TouchControls.push`, `source/input/touch.js`; `GameInput.updateJoystick`, `source/input/keyboard.js` | No Superkarts constants. Steering ±100 by the game's own code |
| `throttle > 0` becomes full gas, `brake > 0` becomes full brake | `TouchControls.push` | The game's ramp shapes it. No partial throttle, as DEVICE 2 has none |
| `Handrem` uses the pedal art; `Claxon`, `Turbo`, and the column `Camera`, `Terugkijken`, `Reset`, `Pauze`, `Stop`, `Meer`, `Roepen`, `Dashboard`, `Detail` are text buttons | `source/index.html`, `source/style.css` | A2 has a horn and more actions |
| Wheel, buttons and HUD share the screen | `hud.leftShift`, `actions-lifted`, `RaceRunner.layout`, `source/race-runner.js` | The Communicator moves right of the wheel in landscape; action buttons lift above the Speedometer when they would cover it |
| Portrait: view on top, controls below | `RaceRunner.layout`; `:root.race-portrait`, `source/style.css` | Not in the reference, where the race view stays full screen. One rule, height above 1.15 times width, replaces the reference's `orientation` media query |

**`bindWheel` against the reference's `bindSteeringWheel`, step by step:**

| Step in the reference | In `TouchControls.bindWheel` | Result |
|---|---|---|
| `pointer`, `release` variables | Same | Same |
| `visual`: `data-steer`, `data-drive`, `--steer-angle` = steer × 90°, `.held` | Same | Same |
| `update`: `touchWheelInput(clientX, clientY, getBoundingClientRect())` | Same | Same; the rectangle is read on every move in both |
| Four `InputState` sources with analog values | `this.state`, then `push` | Differs on purpose: steering stays analog, the drive axis becomes on/off. Required by the brief, see above |
| Ignore mouse buttons other than the first | Same | Same |
| `preventDefault`, ignore if already owned | Same | Same |
| `touchReleases.get(id)?.()`: release whatever else holds this pointer id | `this.releases.get(e.pointerId)`, then `owner()` | Same |
| Release closure: clear owner, release sources, `visual()`, release capture | Same steps, in the port's state | Same |
| `touchAnalog` add and delete | None | Not needed: the analog path is always used here |
| Register in `touchReleases`, so `clear()` can release it | `this.releases.set` | Same |
| `setPointerCapture`, `update(e)`, `onActivity` | `setPointerCapture`, `update(e)` | Same. `onActivity` only resumes audio there; `App`'s `unlock` listener does that here on the same gesture |
| `pointermove` with `preventDefault` for the owner | Same | Same |
| `pointerup`, `pointercancel`, `lostpointercapture` | Same | Same |
| `contextmenu` prevented | In the `TouchControls` constructor | Same |
| `visual()` at bind | Same | Same |

**Around that function, in the same interaction:**

| Reference | Port | Result |
|---|---|---|
| `InputState.clear` runs `onClear` → `releaseTouches`, so every clear releases captures and styling | `GameInput.clear` runs `onClear` → `TouchControls.releaseAll` | Same |
| `bindTouch`: mouse-button filter, `held` map, another owner of the pointer id released, release removes `.held` and capture | `bindPress`: same steps. `change(on)` fires at the first pointer and the last | Same, with the callback as the only change |
| `resize()` calls `input.clear()` on every resize, so a rotated phone cannot resume an old gesture | `orientationchange` always runs `releaseAll`. A resize runs it only when the wheel's rectangle moved by more than 1 px (`TouchControls.relayout`) | Differs on purpose: a collapsing mobile address bar should not interrupt driving. That reason was not tried on a device. Spookkasteel resets on every resize too |
| Wheel left margin `max(20px, inset)`, portrait `max(16px, inset)`, bottom `max(16px, inset)` | Same, except below 600 px height: inset plus 10% of the height | Differs on purpose: the fifth rank portrait stays clear. Checked by rectangle in `layout:` of check-race-ui |
| Wheel size rules keyed on `@media (orientation:…)` | Keyed on class `race-portrait` | Same values. Differs only between 1.0 and 1.15 height to width, which counts as landscape here |
| `-webkit-touch-callout:none`, `:focus-visible` outline, hidden help text linked by `aria-describedby` | The same three | Same. Not checked on iOS |
| `settings.touch`: auto, on, off. Auto is `pointer:coarse` | `settings.touch`: auto, on, off. Auto is `pointer: coarse` and `maxTouchPoints > 0` (`useTouch`, `source/settings.js`) | Same setting. Auto is slightly stricter. A touch laptop with a mouse as primary pointer gets no wheel on Auto in both; `Aan` gives it |
| `touch-stop` handles `pointerup` of a second finger, because no `click` is synthesised while another finger holds the wheel | `Stop` and `Pauze` act on `pointerdown`. The gear and `Sluiten` use `onRelease` with that test | Same effect. `settings: gear works with a second finger, and the panel releases the wheel` in check-race-ui |
| Deadzone setting (`settings.deadzone`) | `settings.deadzone`, same default and range, read live | Same |
| `gamepaddisconnected` clears the pad and pauses if it was the active one | `GamepadInput.lost`, found by polling in `pollRace`: clears the pad and pauses unless in a dialog or on a result screen | Same effect by another mechanism |
| Pads without the standard mapping ignored | Read by button number as the game binds them on each DEVICE, stick Y as gas and brake on DEVICE 3 and 4 | Differs on purpose: the original supports joysticks and wheels. Not tried on real hardware |
| No action for reset, look back and the like | `Reset`, `Terugkijken`, `Roepen`, `Dashboard`, `Detail`; pad L3, R3, D-pad up | Added: A2's own original keys |

Nothing in `RedCat Superkarts/` was written. A read-only `git status` lists no changes, `.git/index` keeps its file time of 01:32, and no file outside `.git` and `node_modules` is newer than 02:00 on 2026-10-31.

## RedCat Spookkasteel

Path: `/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW/`. Read at git head `6cb82f733` (2026-10-31), package version 1.0.8.

**Editable source and generated output** (`source/README.md`, `src/README.md`, `docs/javascript-bundling.md`, `docs/source-layout-and-documentation-review.md`, `LOCAL_LLM_INSTRUCTIONS`):

| Location | Kind |
|---|---|
| `source/` | 139 editable modules, by its own README. Not loaded individually by the game |
| `tools/`, `tests/`, `electron/`, `android/`, `docs/` | Editable tools, checks, wrappers, documents |
| `src/game.bundle.js`, `.map`, and the cache revision in `index.html` | Generated by `npm run web:refresh`. Do not edit |
| `src/*.css` | Runtime stylesheets kept in `src/`; `docs/touch-controls.md` names `src/touch-controls.css` as the presentation source |
| `assets/`, `data/` | Imported from the original by `tools/import_*.py`, `extract_menu.py` |
| `dist/` | Generated packages |
| `RC_ORIGINAL_DECOMPILED/` | Recovered code, reference only |
| `RC_ACTOR_TEST`, `RC_COIN_TEST`, `RC_SHOVE_TEST` | Separate labs with their own copies |
| `temp_work/`, `artifacts/` | Retained investigation output |

**Reused here:** nothing. No file matches by hash and nothing refers to it by name.

**Deliberately not reused, and why:**

| What | Why not |
|---|---|
| Engine, renderer, `source/` game modules | Spookkasteel runs on Genesis3D BSP worlds with a new JavaScript engine. It is a first-person and third-person walker, not a racer. SuperKarts' `docs/original-behavior.md` already warns that its movement, collision and VM must not be copied wholesale. A2 runs its own recompiled code |
| Davi-Script interpreter, `docs/davi-format.md`, `davi-vm-opcodes.md` | A2's scripts run inside recompiled `spel.dat`. No interpreter is needed, and compatibility was not tested |
| `tools/import_*.py`, `extract_menu.py` | Convert Spookkasteel's formats for that engine. A2's assets come through `tools/prepare-assets.py` and the decompile package |
| `source/touch-controls.js`: left stick, look area, Spring, Schieten | Different control scheme. The brief names the SuperKarts wheel |
| Android packaging, Electron | Not in this brief |

**Consulted as a second reference for behaviour, not as a source of code:**

| Item | Spookkasteel | Here |
|---|---|---|
| Held input cleared on resize | `docs/touch-controls.md`; `source/touch-controls.js` | Cleared on rotation, and on a resize that moves the wheel. Differs on purpose, as above |
| Touch overlay setting: auto, on, off | `docs/touch-controls.md` | `Aanraakbediening`, same three values |
| Unmapped pads ignored rather than given wrong buttons | `docs/controller-support.md` | Differs on purpose: read by button number as the game binds them |
| Holding a button across a menu and level change does not fire a second action | `docs/controller-support.md` | Same effect: `GamepadInput.resync`, `MenuRuntime.staleRepeat`, `RaceRunner.endWait`. `menu: a pad button held from the race counts only after its release` in check-race-ui |
| Losing the controller in use pauses play | `docs/controller-support.md` | Same: `GamepadInput.lost`. `gamepad: disconnect releases the controls and pauses` in check-race-ui |
| A browser may expose a pad only after a button press | `docs/controller-support.md` | Not handled: a pad not yet exposed at race start does not count until the next race. Not tried |

**Evidence for compatibility:** none needed, since nothing was taken. Where this project and the references agree on a browser technique, A2's own check is the evidence, not theirs.

Nothing in `RCSPOOK_NEW/` was written. `.git/index` keeps its file time of 01:07, and no file outside `.git` and `node_modules` is newer than 02:00 on 2026-10-31. A read-only `git status` lists untracked items that are older than this work (`START_COMMAND_LOCAL`, `copy website to server`) or under `temp_work/` and `exports/`.

## What was not inherited

No gameplay rule, physics value, camera, HUD layout, AI behaviour or finding from either port was taken over. The only behaviour that comes from a reference is the wheel's input interaction, which the brief asks for by name, and its release lifecycle. The reference's unresolved items and intentional changes (stuck recovery, no-clip, MSAA, mobile pixel budget, 60 FPS phone limit) are not in this port.

## What differs on purpose, in short

Every difference from the reference's touch and pad behaviour that remains:

1. The drive axis is on/off, because DEVICE 2 reads gas as a button.
2. A resize ends gestures only when the wheel moved. A rotation always ends them.
3. Below 600 px height the wheel sits further in, clear of the rank portraits.
4. Pads without the standard mapping are used, not ignored.
5. Auto in `Aanraakbediening` also needs `maxTouchPoints > 0`.
6. `fullscreen` defaults to on, where the reference defaults to off, because the original always ran full screen.
7. The action buttons are A2's own set and sizes.
