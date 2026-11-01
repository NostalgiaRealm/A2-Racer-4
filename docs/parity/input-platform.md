# Feature parity: input and platforms

This part of [feature-parity.md](../feature-parity.md) lists every input and platform feature. "Implemented" says where the feature lives, "Verified" names a check that really ran. Evidence and reasoning are in [behavior/input-platform.md](../behavior/input-platform.md).

Checks are named by tool: check-race-ui is `tools/check-race-ui.mjs` (76 of 76 pass, `evidence/race-ui/summary.json`, sub-checks quoted in backticks in Notes), check-flow is `tools/check-flow.mjs`, check-driving is `tools/check-driving.mjs`, repeat-trace is `tools/benchmark.mjs` with `tools/compare-traces.mjs`, form check is the per-form browser checks with `evidence/forms/`, boot-all is `tools/build-race-lists.mjs`, check-phone-flow is `tools/check-phone-flow.mjs` (7 of 7, taps on an emulated touch profile, `evidence/flow-phone/`), reference-wine is `tools/reference-wine/` (the original under Wine with the same key scripts on the port, Up and Down on the keyboard device only, `evidence/reference-wine/results.md`), check-software is `tools/check-software.mjs` (the 8-bit path through the real menu, 17 of 17, `evidence/software/flow/summary.json`). Only `compared with the original: reference-wine` means a run of the original was set next to the port, for what the row's Notes say, in one setup. A fix check is a one-off script run when a fix was made; it is not in `tools/` and covers only what the row says. A check on input state is not a check of the car's response, and Notes say which it was. All checks of the port ran in headless Chromium 145, or headless Node for check-driving and boot-all, on etappe 0 (Amsterdam). None ran on a real phone, tablet or controller. In Implemented, `n/a` means the original has no reachable behaviour there, and Notes say why.

## Game actions and device paths

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `CarLeft`, `CarRight`, DEVICE 1, INI `LEFT`, `RIGHT` | `spel.dat` `0x0046d360`; input.md C5 | yes (recompiled) | checked on Amsterdam: check-race-ui, check-driving | `keyboard: steering`, left only, steer -80. check-driving: full left at 17.4 m/s, yaw rate 23.8 degrees per second, key state set directly. Right not pressed. Host: `source/input/keyboard.js` |
| `CarForward`, DEVICE 1, INI `UP` | `0x0046d360`; C5 | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-race-ui, check-driving | `keyboard: gas`, 20.64 m/s, gas 100. check-driving: 6.26 m/s at 1 s, 17.29 at 4 s, 23.70 at 8 s, regime 22222. reference-wine: means by movement state against the original under Wine, at most +2.05% at 1 s, +0.44% at 4 s, 0.18% at 8 s |
| `CarBackward`, DEVICE 1, INI `DOWN`: brake, then reverse | `0x0046d360`, `0x004a2f70`; C5, C6 | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving | Headless, key state set directly, no opponents: brake from 16.9 m/s to 0 in 1.3 s, reverse to -27.89 m/s in 3 s, steering while reversing, forward again. reference-wine: reverse limit -27.79 and -27.91 in the original under Wine, -27.79 and -27.90 in the port, by movement state |
| `CarTurbo`, DEVICE 1, INI `EXTRA1` | `0x0046d360`, `0x0046f050`; C5, C6 | yes (recompiled) | not verified | Default Ctrl. No check measured turbo on the car |
| `CarHandbrake`, DEVICE 1, INI `EXTRA2` | `0x0046d360`, `0x0046f050`; C5, C6 | yes (recompiled) | not verified | Default Alt. `preventDefault` in `bindKeyboard` |
| `CarHorn`, DEVICE 1, INI `EXTRA3` | `0x0046d360`, `0x0046f050`; C5, C6 | yes (recompiled) | not verified | `static.ini` 32 Spatie; shipped `game.ini` 72 H; the menu writes the player's value |
| Second binding LCONTROL→RCONTROL | `0x0046ced0`; C5 | yes (recompiled) | not verified | Host: `ControlRight` DIK 0x9D |
| Second binding LALT→RALT | `0x0046ced0`; C5 | yes (recompiled) | not verified | Host: `AltRight` DIK 0xB8 |
| Second binding LSHIFT→RSHIFT | `0x0046ced0`; C5 | yes (recompiled) | not verified | Host: `ShiftRight` DIK 0x36 |
| Second binding LEFT→NUMPAD4 | `0x0046ced0`; C5 | yes (recompiled) | not verified | Host: `Numpad4` DIK 0x4B. In a joystick session the host's own `SECOND_KEY` does this, see the ramps table |
| Second binding RIGHT→NUMPAD6 | `0x0046ced0`; C5 | yes (recompiled) | not verified | Host: `Numpad6` DIK 0x4D |
| Second binding UP→NUMPAD8 | `0x0046ced0`; C5 | yes (recompiled) | not verified | Host: `Numpad8` DIK 0x48 |
| Second binding DOWN→NUMPAD2 | `0x0046ced0`; C5 | yes (recompiled) | not verified | Host: `Numpad2` DIK 0x50 |
| `CarLeft`, `CarRight`, DEVICE 2, `CM_JOY_LEFT`, `CM_JOY_RIGHT`, analog | `0x0046d8a0`, `0x004ef6e0`; C4, C5 | yes (recompiled) | checked on Amsterdam: check-race-ui | `touch: steering and turbo together` (wheel 0.972, steer 97.2); `gamepad: analog steering` (steer -100). Host: `GameInput.updateJoystick` |
| `CarForward`, DEVICE 2, `CM_JOY_BUTTON3` | `0x0046d8a0`; C5 | yes (recompiled) | checked on Amsterdam: check-race-ui | `touch: wheel up is gas, car accelerates` (17.28 m/s); `gamepad: right trigger is gas, small stick stays in the deadzone` (17.32 m/s). Wall-clock waits: not a handling measurement |
| `CarBackward`, DEVICE 2, `CM_JOY_DOWN` | `0x0046d8a0`; C5 | yes (recompiled) | checked on Amsterdam: check-race-ui | `touch: wheel down brakes, then reverses` (fastest backward -12.61 m/s, brake 100); `gamepad: D-pad up calls, D-pad down and stick down brake` |
| `CarTurbo`, DEVICE 2, `CM_JOY_BUTTON1` | `0x0046d8a0`; C5 | yes (recompiled) | not verified | `touch: steering and turbo together` saw the host bit only, not turbo acting on the car |
| `CarHandbrake`, DEVICE 2, `CM_JOY_BUTTON4` | `0x0046d8a0`; C5 | yes (recompiled) | not verified | `touch: wheel, turbo and handbrake together, each lifted by itself` saw the host bit only |
| `CarHorn`, DEVICE 2, `CM_JOY_BUTTON2` | `0x0046d8a0`; C5 | yes (recompiled) | not verified | `gamepad session: ...` saw the host bit from the player's horn key only |
| DEVICE 2 with under 3 buttons: `CM_JOY_BUTTON2` gas, fatal `CM_KEYB_ALT` | `0x0046d8a0`; C5 | no | not verified | On purpose: `RaceRunner.chooseDevice` always reports 4 buttons, so the fatal cannot happen |
| `CarLeft`, `CarRight`, DEVICE 3 and 4 | `0x0046e350`; C5 | yes (recompiled) | not verified | Host: `GameInput.updateJoystick`. No race ran on DEVICE 3 or 4 |
| `CarForward`, DEVICE 3 and 4, `CM_JOY_UP` | `0x0046e350`; C5 | yes (recompiled) | not verified | Host `joyY`: `pad.y`, the larger of pedals and stick Y, or full values from keys and wheel |
| `CarBackward`, DEVICE 3 and 4, `CM_JOY_DOWN` | `0x0046e350`; C5 | yes (recompiled) | not verified | Same `joyY` |
| `CarTurbo`, DEVICE 3 and 4, `CM_JOY_BUTTON1` | `0x0046e350`; C5 | yes (recompiled) | not verified | |
| `CarHandbrake`, DEVICE 3 and 4, `CM_JOY_BUTTON3` | `0x0046e350`; C5 | yes (recompiled) | not verified | Host moves the touch button from bit 3 to bit 2 |
| `CarHorn`, DEVICE 3 and 4, `CM_JOY_BUTTON2` | `0x0046e350`; C5 | yes (recompiled) | not verified | |
| DEVICE 3 and 4 with under 3 buttons | `0x0046e350`; C5 | no | not verified | On purpose: caps always report 4 buttons |
| DEVICE 3 and 4 are the same code; `Sidewinder ForceFeedback Joystick` only a comment | `0x0046ece0`, `game.ini`; C5, C11 | yes (recompiled) | not verified | Dispatch read in the decompile |
| Illegal DEVICE, fatal `Illegal device selected` | `0x0046ece0`; C5 | yes (recompiled) | not verified | Not reachable from the menu |
| No joystick on DEVICE 2, 3, 4: fatal `Device Joystick0 does not exist!` | `0x004eaaa0`; C5 | no | not verified | On purpose: the virtual joystick is always present for these (`RaceRunner.chooseDevice`), and keys and touch feed it |
| Key value 0 or unknown VK: fatal `Value not found`, `Cannot find key(s) in keyboardmap!` | `0x0046cd60`, `0x00469ff0`; C5 | yes (recompiled) | not verified | The menu cannot store these: `vkOf` never returns 108, `isControlKey(0)` is false |
| Bindings fixed at start, no change during a race | `0x0046ee80`, `0x004580e0`; C5 | yes (recompiled) | not verified | Device chosen once by `chooseDevice`. Hence the notes `Gamepad werkt vanaf de volgende race` and `Aanraakbediening werkt vanaf de volgende race` |
| DEVICE 1 bindings made at boot, all etappes and cars | `0x0046ee80`; C5 | yes (recompiled) | boot only: boot-all | All 10 etappes, all 8 cars, 2 s on shipped `DEVICE=1` with an empty input stub. Not a gameplay check |
| Reverse: no action, CarBackward at a standstill | `0x004a2f70`; C6, Inferred | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving, check-race-ui | Also `touch: wheel down brakes, then reverses`. Down held from a standstill drives backward in the original under Wine too, to the same limit |
| Gears: automatic, no key | `0x004a2f70`; C5, C6 | yes (recompiled) | not verified | check-driving logs the gear index: 4 from the first 1 s sample on, which fits `sim-vehicle.md` I2, where the car stays in index 4 above about 11 km/h. No criterion was set |
| Control read gate until GO | `0x0044ea60`, `0x0044cda0`, `0x0043c3d0`; C6 | yes (recompiled) | not verified | |
| States 3, 6, 8 force gas, brake, turbo to 0 | `0x0044ea60` at `0x44ee99`; C6 | yes (recompiled) | not verified | |
| Turbo: state 0 only, 100 ms step, uses `DAT_006fba74`, drops at oil below 1 | `0x0044e970`; C6 | yes (recompiled) | not verified | `GetTickCount` is the virtual clock |
| Turbo forces gas 100, push below speed 60 | `0x00427b90`, `0x004a2000`; C6 | yes (recompiled) | not verified | |
| Handbrake on wheels 2 and 3, friction cap 2.0 | `0x004a2f70`, `0x00427e60`; C6, Inferred | yes (recompiled) | not verified | |
| Horn: `HORN2` each frame while held; traffic reads the action | `0x0046f050`, `0x00423040`, `0x004237b0`; C6 | yes (recompiled) | not verified | Sound checked by state only, and not for the horn |

## Ramps and sensitivity

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Digital steering, 200 units/s, full lock 0.5 s | `0x0046f530`, `0x004f0df0`; C6 | yes (recompiled) | not verified | `keyboard: steering` asserts only non-zero; it read -80 after a nominal 0.4 s. check-driving's log has steer -100 at 0.5 s. No criterion was set |
| Digital lock to lock, 400 units/s | `0x0046f530`; C6, simulation-core C6 | yes (recompiled) | not verified | DEVICE 1 only |
| The player's keys in a joystick session: two ramps at `2*dt`, second bindings, horn | Port addition; `0x0046f530` as the model | yes (host) | checked on Amsterdam: check-race-ui | `gamepad session: the keyboard uses the player's keys, with lock to lock in 0.5 s`: `GameInput.updateJoystick` called directly with VK state set: left lock after 30 ticks, centre after 15 more, right lock after 15 more; a custom left key, horn key and numpad 4 |
| Gas ramp, `(int)(gas + dt*300)`, +4 and +5 mixed at 60 | `0x0046f2a0`; C6, simulation-core I4 | yes (recompiled) | compared with the original: reference-wine | 23 ticks to full gas in the port, 21 to 23 in the original under Wine, by the last-bit alternation in `hook!updateClock`: `intentional-differences.md`, Clock ring |
| Brake ramp, `(int)(brake + dt*320)`, +5 per tick at 60 | `0x0046f2e0`; C6, simulation-core I4 | yes (recompiled) | not verified | 300 units/s in effect at 60 ticks; 320 is the nominal value. check-driving's log has brake 75 at 0.25 s. No criterion was set |
| Gas and brake drop to 0 at once on release | `0x0046f2a0`, `0x0046f2e0`; C6 | yes (recompiled) | not verified | |
| Threshold 0.5 on CarForward, CarBackward in modes 1, 2 | `0x0046f530`; C6 | yes (recompiled) | not verified | Host sends full values only |
| Brake-light flag `DAT_006fba2c`, modes 1, 2 | `0x0046f2e0`, `0x44ed63`; C6, Inferred | yes (recompiled) | not verified | |
| Mode 2 with an analog device: steer = x*100, no slew | `0x004f0c60`, `0x0046f530`; C6 | yes (recompiled) | checked on Amsterdam: check-race-ui | `touch: steering and turbo together`: wheel 0.9722, steer 97.22 |
| Mode 3: no ramps, `(int)(v*100)` gas or brake | `0x0046f960`; C6 | yes (recompiled) | not verified | Read in the decompile |
| Mode 3: no brake lights | `0x0046f960`, `0x44ed63`; C6, Inferred | yes (recompiled) | not verified | |
| Sensitivity 0: f 5, steer ±20 | `0x0046f960`; C6 | yes (recompiled) | not verified | Slider: `TfrmSliderSettings`, `source/menu/forms/group-options.js` |
| Sensitivity 25: f 4, steer ±25 | `0x0046f960`; C6 | yes (recompiled) | not verified | |
| Sensitivity 50, default: f 3, steer ±33.3 | `0x0046f960`, `static.ini`; C6, C9 | yes (recompiled) | not verified | Also applies to the pad and the touch wheel on the `Joystick` and `Stuur` radios |
| Sensitivity 75: f 2, steer ±50 | `0x0046f960`; C6 | yes (recompiled) | not verified | |
| Sensitivity 100: f 1, steer ±100 | `0x0046f960`; C6 | yes (recompiled) | not verified | |
| `f == 0` becomes 5 | `0x0046f960`; C6 | n/a | not verified | Needs SENSITIVITY 125; the slider stops at 100 |
| Setter clamps: steer ±100, brake 0..100, gas 0..100, gas 0 while +0x2c above 0 | `0x00402de0`, `0x00402e40`, `0x00402ea0`; C6 | yes (recompiled) | not verified | |
| Speed-dependent keyboard steering | `0x0046f330`, no references; C7, simulation-core C6 | n/a | not verified | Dead code in the original: no references |

## Race keys that cannot be rebound

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Key 1, VK 0x31, level, state 0: view `DAT_006fba5c + 5` | `0x00438670`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | Through `Camera`: `touch: Camera goes through 2, 4, 1, and on from what a key chose`, view 5. View id only. The keyboard's 1 itself was not pressed |
| Key 2, VK 0x32: view 0 | `0x00438670`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | Same check, view 0 |
| Key 3, VK 0x33, hold: view 4, back on release | `0x00438670`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | `touch: Terugkijken holds view 4, the release restores`, `gamepad: right stick click holds the view behind`: views 5, 4, 5. The keyboard's 3 itself was not pressed |
| Key 4, VK 0x34: view 3 | `0x00438670`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | `Camera` and a real press of Digit4, view 3 |
| Key 6, VK 0x36: view 6 | `0x00438670`; C7 | partial | not verified | Keyboard only, no touch or pad control; not in the manual |
| Key 7, VK 0x37: view 7 | `0x00438670`; C7 | partial | not verified | Same |
| Key 8, VK 0x38: view 8 | `0x00438670`; C7 | partial | not verified | Same |
| Key 9, VK 0x39: view 9 | `0x00438670`; C7 | partial | not verified | Same |
| Key 0, VK 0x30: view 10 | `0x00438670`; C7 | partial | not verified | Same |
| Key 5, `CM_KEYB_5`, edge: `Dashboard aan/uit` | `0x44d823`; C7, manual | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Dashboard`. No pad button, on purpose: every standard button is in use. `touch: Meer shows Roepen, Dashboard and Detail, which work`: `0x712784` 0, 1, 0. The keyboard's 5 itself was not pressed |
| Key D, `CM_KEYB_D`, edge: `overlay_detail` | `0x44d990`; C7 | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Detail`. No pad button, on purpose. Same check: `0x6fb924` 3, 0, 1 |
| Enter, `CM_KEYB_RETURN`, edge: reset, 5000 ms lockout, text 66 | `0x44d705`, `0x0040e5a0`; C7, gameplay-systems | yes (recompiled) | checked on Amsterdam: check-race-ui, check-driving | `touch: Reset places the car back, with the wheel held and still held after`, `gamepad: left stick click resets the car`: stamp at `0x5d1b00` changes. check-driving: Enter reset. The lockout and text 66 were not measured |
| Text 68 `DRUK ENTER/RETURN VOOR RESET` after 10 s without wheel contact | `0x44cc9f`, `ctrl+0x30`; C7, Inferred | yes (recompiled) | not verified | Text as shipped: on touch and pad the control is `Reset` or L3 |
| Key T, `CM_KEYB_T`, edge: racer voice | `0x0044ea60`, `0x0041be70`; C7, audio.md | yes (recompiled) | not verified | Touch `Roepen`, pad D-pad up. check-race-ui saw DIK 0x14 and a pulse of VK 0x54 reach the host, not the voice |
| Key F, `0x0042c710`: wheel bounce | `0x0042c710`; Inferred, reachability Unknown | yes (recompiled) | not verified | Unresolved whether this runs in retail |
| P, VK 0x50: pause, not in states 3, 6 | `0x44d9eb`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | `pause: P stops the race clocks, the wall clock runs on`. State, and `evidence/race-ui/pause.png` shows the prompt |
| Any VK while paused: resume after press and release | `0x0044c990`; C7 | yes (host) | checked on Amsterdam: check-race-ui | `pause: any key resumes, and the race clock goes on from where it stood`, with Space. `Race.pollPause` follows the sweep of `0x0044c990` |
| VK 1 and 2, mouse buttons, resume from pause | `0x0044c990` scan 0..255; C7 | yes (host) | checked on Amsterdam: check-race-ui | `pause: a mouse button on the race resumes, once released`, left and right. `RaceRunner.canvasPress`: buttons 0..4 give VK 1, 4, 2, 5, 6 |
| F9, F10, F11 while paused | `0x0044c990` scan 0..255; C7 | no | not verified | On purpose: masked for the game (`MASKED`) |
| Shift alone cannot resume, and masks other keys | `0x004c5e40`; C1, C7 | yes (host) | checked on Amsterdam: check-race-ui | `pause: Shift alone resumes nothing, and masks other keys`. `Race.pollPause` tests `vk[0x10]` |
| Esc, VK 0x1B: quit prompt, not in states 3, 6 | `0x44d9ba`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release`; `evidence/race-ui/quit-dialog.png` shows the prompt |
| J at the quit prompt | `0x0044c9f0`; C7 | yes (host) | checked on Amsterdam: check-race-ui | `quit dialog: J ends the race, finished=0`. `Race.pollPause` |
| Y at the quit prompt | `0x0044c9f0`; C7 | yes (host) | not verified | `Race.pollPause` |
| N at the quit prompt, then only Esc is waited for | `0x0044c9f0`; C7 | yes (host) | checked on Amsterdam: check-race-ui | `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release` |
| Esc at the quit prompt | `0x0044c9f0`; C7 | yes (host) | not verified | `Race.pollPause` |
| Esc at the finish screen, state 3, after 1500 ms | `0x0043ac80`; C7 | yes (recompiled) | not verified | Pad Back sends this key |
| Enter at the finish screen, state 3 | `0x0043ac80`; C7 | yes (recompiled) | not verified | check-flow left this screen after a bot race. That the bot's stuck logic pressed Enter is inferred from `Bot.tick`, `source/dev/bot.js`; check-flow did not assert it. Pad L3 sends this key |
| Space at the finish screen, state 3 | `0x0043ac80`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | `finish: Verder ends the race, which waits for the finger to lift`; `finish: pad A held does not skip it, a new press does`. VK 0x20 from the button, not the keyboard. Entered through `FUN_0044cda0` |
| Wait for release of Esc, Enter, Space at the finish screen | `0x0043ac80`; C12 | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.endWait`: `finish: Verder ends the race, which waits for the finger to lift`, `game over: Enter ends it, the race waits for its release, and the menu ignores repeats`. The 5 s safety limit is the port's |
| Esc, Enter, Space at the game-over screen, state 6, after 1000 ms | `0x0043bd60`; C7 | yes (recompiled) | checked on Amsterdam: check-race-ui | Enter only, `game over: ...`. Entered through `FUN_0044cda0` |
| CTRL+SPACE+T: timer 0xb to 100000 ms, text 44 `EXTRA TIJD` | `0x44d584`; C7 | yes (recompiled) | not verified | Ctrl+T is reserved by desktop browsers, so it may be unreachable there. In full screen keyboard lock asks for T; its effect was not checked. input.md H7, H8 |
| CTRL+SPACE+I: `DAT_006fb96c = 1`, text 46 `INVINCIBLE` | `0x44d5dd`; C7 | yes (recompiled) | not verified | `preventDefault` applies: `browserKey` |
| CTRL+F10: screenshot `lvl%2.2d_%2.2d.bmp` | `0x00458270`, `0x00458400`; C7 | no | not verified | On purpose: F10 masked. [intentional-differences.md](../intentional-differences.md), Debug keys |
| F11 spin in `0x00419600` | `0x00419600`; C7, C12 | no | not verified | On purpose: F11 masked, and it stays with the browser. Same row of intentional-differences.md |
| `0x0041db90` reads F, G, H | `0x0041db90`, caller `0x00417980` has no references; C7 | n/a | not verified | No live path |
| `0x00427d86` spin on key | no references; C7 | n/a | not verified | No live path |
| `0x004288b5` sets `DAT_006fba2c` | no references; C7 | n/a | not verified | No live path |
| `0x004702c0` mouse position read | no references; C7 | n/a | not verified | No live path |
| VK O in `0x00428c70`, result ignored | `0x00428c70`; C7 | yes (recompiled) | not verified | No effect either way |
| VK X, Z in `0x0048f250` | `communi.ini` `testmode`, `testmessages` false; C7 | n/a | not verified | Off with shipped data |

## Cameras

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| View 0, `Statische camera`: 0, 30, -80 | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Key 2. Selected in check-race-ui; the offset was not measured |
| View 1: 0, 25, -52.5, used by events | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Called by `0x0043bc20`, `0x00438d20`, `0x0043c885` |
| View 2: 0, 38, -55 | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | No key selects it directly |
| View 3, `Bumper camera`: 0, 15.5, 12, car hidden | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Key 4. Selected in check-race-ui; the offset was not measured |
| View 4, `Achteruitkijk camera`: 0, 20, 75 | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Key 3 held. Selected in check-race-ui; the offset was not measured |
| Views 5..9, 0xB: 0, 26, -33, mode 1 | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Race default per car. `evidence/race-ui/touch-landscape.png` shows a race on it; no criterion for the camera was set |
| View 0xA: 0, 33, -33, mode 1 | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Key 1 on car 5; key 0 |
| View 0xC: 0, 40, -40, mode 1 | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Key 1 on car 7, and car 7's race default. Car 7 has a route since the car update: De Schaduw in Quick Race. No check looks at this view |
| View 0xD: 0, 45, -55, mode -1, car index 8 | `0x004390d0`; simulation-core C8 | yes (recompiled) | not verified | Key 1 on car 8: no route in shipped content |
| View 0xE, free camera, key U | `0x00438670`, `0x004397f0`, `0x00439910`; C8 | n/a | not verified | Tweak mode only, off with shipped data |
| Selection only in state 0 | `0x00438670` tests `DAT_006fb8a0 == 0`; C7 | yes (recompiled) | not verified | |
| On-screen `Camera`: next of VK 1, 2, 4 from the view in use | Port addition | yes (host) | checked on Amsterdam: check-race-ui | `touch: Camera goes through 2, 4, 1, and on from what a key chose`: views 0, 3, 5, and on from a real Digit4. `GameInput.nextCameraKey` reads `DAT_00599c80` |
| Pad LB: next of VK 1, 2, 4 from the view in use | Port addition | yes (host) | not verified | Same `nextCameraKey`, `GamepadInput.pollRace`. LB itself was not pressed |

## Debug keys and console, inert with shipped data

Gate `DAT_006fb950`, `raser.ini TWEAK_MODE=0`. Input.md C8. The code runs as shipped and stays off, hence `n/a` in this table.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Comma, Period: FPSMULT ±0.01 | `0x0044cf90`, `0x004aa0c0` | n/a | not verified | Gate read in the decompile |
| M: camera target car | `0x0044cf90` | n/a | not verified | |
| Numpad + −: FOV | `0x0044cf90` | n/a | not verified | |
| F1: `ACTION_AI_DEBUG` | `0x004096b0`, `0x00409d20` | n/a | not verified | |
| F2: `BBOX_TOGGLE` | `0x004096b0`, `0x00409d20` | n/a | not verified | |
| F3: `WP_TOGGLE` | `0x004096b0`, `0x00409d20` | n/a | not verified | |
| F4: `LINE_TOGGLE` | `0x004096b0`, `0x00409d20` | n/a | not verified | |
| F5: `FSM_TOGGLE` | `0x004096b0`, `0x00409d20` | n/a | not verified | |
| F6: `POSITIONMARKER_TOGGLE` | `0x004096b0`, `0x00409d20` | n/a | not verified | |
| F7: `POLY_TOGGLE` | `0x004096b0`, `0x00409d20` | n/a | not verified | |
| F12: FPS print | `0x0044da30` | n/a | not verified | |
| Y: `0x004a4600` | `0x0044da30` | n/a | not verified | Effect not read |
| C: `0x0043fc90` | `0x0043f8a0` | n/a | not verified | Effect not read |
| F: `PICTURE.PCX` dump | `0x00427b90`, `0x00458440` | n/a | not verified | |
| CTRL+SPACE+C: tweak menus | `0x00427b90`, `0x004351f0` | n/a | not verified | |
| U, I, K, J, L, A, Z, R, T with mouse: camera 0xE offset | `0x00438670` | n/a | not verified | |
| Free camera keys: U I J K L A Z PgUp PgDn Home End Ins Del R T | `0x00439910` | n/a | not verified | |
| Console: tilde, Tab, Back, Return, Up, Down, `COM:>%s`, `Invulnerable` | `0x004706d0`, `0x00471bd0`, `0x0044c090` | n/a | not verified | Bindings always made, activation needs the gate |
| Mouse commands `CM_MOUSE_X_POS`, `Y_POS`, `Z_POS`, `X_MOVE`, `Y_MOVE`, `Z_MOVE`, `BUTTON1..4` | `0x004eede0`, `0x0046fe50`; C4 | n/a | not verified | Device exists; state is zeros: `GameInput.fillDeviceState` |

## Key rebinding: `TfrmKeySettings`

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Form, art, key names on caps | `TFRMKEYSETTINGS.dfm`, `menu 0x00491f10`, `0x0049245c`; C13 | yes (menu port) | form check | `TfrmKeySettings`, `source/menu/forms/group-options.js`; `evidence/forms/keysettings.png` |
| Click a key, then press: `KeyPreview` | `menu 0x00491d84`, `0x00491e64`; C13 | yes (menu port) | not verified | `formKeyDown`. No check pressed a key in the dialog |
| Key not in the list: `MessageBeep(0)`, edit cancelled | `menu 0x00491e64`; C13 | yes (menu port) | not verified | A short tone stands in for the Windows sound: `messageBeep`, through the master output |
| Focus loss cancels | `menu 0x00491ef8`; C13 | yes (menu port) | not verified | `pointerDown` in the form |
| Duplicate check across the seven keys, dialog stays open | `menu 0x00491f28`, `0x004925dc`; C13 | yes (menu port) | not verified | `duplicateKey`, `btnOkClick` |
| `TfrmDoubleKeys`: `De toets '%s' is dubbel gebruikt!` | `menu 0x00498828`, `0x00494a90`; C13 | yes (menu port) | form check | Form loaded on its own. `evidence/forms/doublekeys.png` |
| `Standaard` loads all ten fields from `static.ini` | `menu 0x00492644`, `menu 0x004a688c`; C13 | yes (menu port) | not verified | `btnDefaultsClick` |
| Stored per player, written to `game.ini [INPUT]` at race start | `menu 0x0048c3f0`, `0x0048b350`; C9 | yes (menu port) | form check | Options persistence. `writeControlStuff`, `source/menu/data.js` |
| Bound key acts in a race on DEVICE 1 | `0x0046cd60`, `0x00469ff0`; C5 | yes (recompiled) | not verified | No check rebound a key and drove |
| Bound key acts in a joystick session | Port: not possible in the original | yes (host) | checked on Amsterdam: check-race-ui | `gamepad session: the keyboard uses the player's keys, with lock to lock in 0.5 s`. `chooseDevice` reads the keys from `game.ini`; the check set them directly |
| Instellen disabled for Gamepad | `menu 0x004964c8`; C13 | yes (menu port) | not verified | `optJoypadClick` |

### `menu.ini [CONTROLKEYS]`, all 65 entries

"Game key" is the name `0x00469ff0` gives that VK in `spel.dat`. Browser code comes from `vkOf`, `source/input/keyboard.js`. No check pressed any of these in `TfrmKeySettings`.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `0=0,<None>` | `menu.ini`; `menu 0x00491fa4`; C10 | yes (menu port) | not verified | No key. `isControlKey(0)` is false, so it cannot be chosen; the entry stays in the list. `source/menu/data.js` |
| `1=37,links` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | checked on Amsterdam: check-race-ui | Game key LEFT, DIK 0xCB. Browser `ArrowLeft`. As the default LEFT, `keyboard: steering`. Rebinding itself not run |
| `2=38,omhoog` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | checked on Amsterdam: check-race-ui | Game key UP, DIK 0xC8. Browser `ArrowUp`. As the default UP, `keyboard: gas`. Rebinding itself not run |
| `3=40,omlaag` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key DOWN, DIK 0xD0. Browser `ArrowDown` |
| `4=39,rechts` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key RIGHT, DIK 0xCD. Browser `ArrowRight` |
| `5=45,insert` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key INSERT, DIK 0xD2. Browser `Insert` |
| `6=46,delete` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key DELETE, DIK 0xD3. Browser `Delete` |
| `7=36,home` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key HOME, DIK 0xC7. Browser `Home` |
| `8=35,end` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key END, DIK 0xCF. Browser `End` |
| `9=33,page up` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key PRIOR, DIK 0xC9. Browser `PageUp` |
| `10=34,page down` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NEXT, DIK 0xD1. Browser `PageDown` |
| `11=106,*` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key MULTIPLY, DIK 0x37. Browser `NumpadMultiply` |
| `12=107,+` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key ADD, DIK 0x4E. Browser `NumpadAdd` |
| `13=108,separ` | `menu.ini`; `0x00469ff0` has no such VK, fatal in the race; C5, C10 | no | not verified | On purpose: `vkOf` never returns 108, so it cannot be chosen. input.md H9 |
| `14=109,-` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key SUBTRACT, DIK 0x4A. Browser `NumpadSubtract` |
| `15=110,. (num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key DECIMAL, DIK 0x53. Browser `NumpadDecimal` |
| `16=111,/ (num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key DIVIDE, DIK 0xB5. Browser `NumpadDivide` |
| `17=16,shift` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key LSHIFT, DIK 0x2A. Browser `ShiftLeft`, `ShiftRight` |
| `18=17,ctrl` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key LCONTROL, DIK 0x1D. Browser `ControlLeft`, `ControlRight` |
| `19=18,alt` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key LALT, DIK 0x38. Browser `AltLeft`, `AltRight` |
| `20=32,spatie` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key SPACE, DIK 0x39. Browser `Space` |
| `21=220,\` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key BACKSLASH, DIK 0x2B. Browser `Backslash` |
| `22=8,backspace` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key BACK, DIK 0x0E. Browser `Backspace` |
| `23=9,tab` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key TAB, DIK 0x0F. Browser `Tab` |
| `24=65,a` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key A, DIK 0x1E. Browser `KeyA` |
| `25=66,b` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key B, DIK 0x30. Browser `KeyB` |
| `26=67,c` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key C, DIK 0x2E. Browser `KeyC` |
| `27=69,e` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key E, DIK 0x12. Browser `KeyE` |
| `28=70,f` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key F, DIK 0x21. Browser `KeyF` |
| `29=71,g` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key G, DIK 0x22. Browser `KeyG` |
| `30=72,h` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key H, DIK 0x23. Browser `KeyH` |
| `31=73,i` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key I, DIK 0x17. Browser `KeyI` |
| `32=74,j` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key J, DIK 0x24. Browser `KeyJ` |
| `33=75,k` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key K, DIK 0x25. Browser `KeyK` |
| `34=76,l` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key L, DIK 0x26. Browser `KeyL` |
| `35=77,m` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key M, DIK 0x32. Browser `KeyM` |
| `36=78,n` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key N, DIK 0x31. Browser `KeyN` |
| `37=79,o` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key O, DIK 0x18. Browser `KeyO` |
| `38=81,q` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key Q, DIK 0x10. Browser `KeyQ` |
| `39=82,r` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key R, DIK 0x13. Browser `KeyR` |
| `40=83,s` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key S, DIK 0x1F. Browser `KeyS` |
| `41=84,t` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key T, DIK 0x14. Browser `KeyT` |
| `42=85,u` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key U, DIK 0x16. Browser `KeyU` |
| `43=86,v` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key V, DIK 0x2F. Browser `KeyV` |
| `44=87,w` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key W, DIK 0x11. Browser `KeyW` |
| `45=88,x` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key X, DIK 0x2D. Browser `KeyX` |
| `46=89,y` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key Y, DIK 0x15. Browser `KeyY` |
| `47=90,z` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key Z, DIK 0x2C. Browser `KeyZ` |
| `48=188,komma` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key COMMA, DIK 0x33. Browser `Comma` |
| `49=190,.` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key PERIOD, DIK 0x34. Browser `Period` |
| `50=191,/` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key SLASH, DIK 0x35. Browser `Slash` |
| `51=186,;` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key SEMICOLON, DIK 0x27. Browser `Semicolon` |
| `52=222,'` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key APOSTROPHE, DIK 0x28. Browser `Quote` |
| `53=219,[` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key LBRACKET, DIK 0x1A. Browser `BracketLeft` |
| `54=221,]` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key RBRACKET, DIK 0x1B. Browser `BracketRight` |
| `55=96,0 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD0, DIK 0x52. Browser `Numpad0` |
| `56=97,1 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD1, DIK 0x4F. Browser `Numpad1` |
| `57=98,2 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD2, DIK 0x50. Browser `Numpad2` |
| `58=99,3 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD3, DIK 0x51. Browser `Numpad3` |
| `59=100,4 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD4, DIK 0x4B. Browser `Numpad4` |
| `60=101,5 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD5, DIK 0x4C. Browser `Numpad5` |
| `61=102,6 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD6, DIK 0x4D. Browser `Numpad6` |
| `62=103,7 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD7, DIK 0x47. Browser `Numpad7` |
| `63=104,8 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD8, DIK 0x48. Browser `Numpad8` |
| `64=105,9 (Num)` | `menu.ini`; `menu 0x00491fa4`; `0x00469ff0`; C10 | yes (menu port) | not verified | Game key NUMPAD9, DIK 0x49. Browser `Numpad9` |

Also in `menu.ini`, starting with `*`, so not read:

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `*37=68,d   d is used by game engine` | `menu.ini`; `menu 0x00491fa4`; C10 | n/a | not verified | Not read in the original either. Pressing D in the dialog beeps and cancels, by `isControlKey` |
| `*49=80,p   p is used by game engine` | `menu.ini`; `menu 0x00491fa4`; C10 | n/a | not verified | Same for P |

## Keyboard table in `spel.dat`, all 106 commands

Table at `0x5b7a18`, dumped from the binary and joined by script with `DIK` and `vkOf` in `source/input/keyboard.js`. VK column from input.md C10. `*` means an earlier entry shadows that VK. "Checked" means the key was pressed through a browser key event in check-race-ui and something was read from it. check-driving sets arrow keys directly, so it does not count here. Nor does `keyboard: 40 keys held do not end the race`, which calls `keyEvent` directly for 40 of these codes, or the synthetic Ctrl chords, of which only `defaultPrevented` is read. On-screen buttons and pad buttons that stand for a key are in the tables above.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `CM_KEYB_ESC`, DIK 0x01, VK 0x1B | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `Escape`. `quit dialog: Esc asks, ...`, `settings: F9 opens with the focus inside, ...` |
| `CM_KEYB_1`, DIK 0x02, VK 0x31 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit1` |
| `CM_KEYB_2`, DIK 0x03, VK 0x32 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit2` |
| `CM_KEYB_3`, DIK 0x04, VK 0x33 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit3`. `Terugkijken` and pad R3 set the same DIK |
| `CM_KEYB_4`, DIK 0x05, VK 0x34 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `Digit4`. Real press: view 3, in `touch: Camera goes through 2, 4, 1, ...` |
| `CM_KEYB_5`, DIK 0x06, VK 0x35 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit5`. `Dashboard` sets the same DIK |
| `CM_KEYB_6`, DIK 0x07, VK 0x36 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit6` |
| `CM_KEYB_7`, DIK 0x08, VK 0x37 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit7` |
| `CM_KEYB_8`, DIK 0x09, VK 0x38 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit8` |
| `CM_KEYB_9`, DIK 0x0A, VK 0x39 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit9` |
| `CM_KEYB_0`, DIK 0x0B, VK 0x30 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Digit0` |
| `CM_KEYB_MINUS`, DIK 0x0C, VK 0xBD | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Minus` |
| `CM_KEYB_EQUALS`, DIK 0x0D, VK 0xBB | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Equal` |
| `CM_KEYB_BACK`, DIK 0x0E, VK 0x08 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Backspace` |
| `CM_KEYB_TAB`, DIK 0x0F, VK 0x09 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Tab` |
| `CM_KEYB_Q`, DIK 0x10, VK 0x51 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyQ` |
| `CM_KEYB_W`, DIK 0x11, VK 0x57 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyW` |
| `CM_KEYB_E`, DIK 0x12, VK 0x45 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyE` |
| `CM_KEYB_R`, DIK 0x13, VK 0x52 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyR` |
| `CM_KEYB_T`, DIK 0x14, VK 0x54 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyT`. `Roepen` and pad D-pad up set the same DIK |
| `CM_KEYB_Y`, DIK 0x15, VK 0x59 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyY` |
| `CM_KEYB_U`, DIK 0x16, VK 0x55 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyU` |
| `CM_KEYB_I`, DIK 0x17, VK 0x49 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyI` |
| `CM_KEYB_O`, DIK 0x18, VK 0x4F | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyO` |
| `CM_KEYB_P`, DIK 0x19, VK 0x50 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `KeyP`. `pause: P stops the race clocks, the wall clock runs on` |
| `CM_KEYB_LBRACKET`, DIK 0x1A, VK 0xDB | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `BracketLeft` |
| `CM_KEYB_RBRACKET`, DIK 0x1B, VK 0xDD | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `BracketRight` |
| `CM_KEYB_RETURN`, DIK 0x1C, VK 0x0D | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `Enter`. Real press: `game over: Enter ends it, ...`, as VK. The bot and check-driving use its DIK too |
| `CM_KEYB_LCONTROL`, DIK 0x1D, VK 0x11 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `ControlLeft` |
| `CM_KEYB_A`, DIK 0x1E, VK 0x41 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyA` |
| `CM_KEYB_S`, DIK 0x1F, VK 0x53 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyS` |
| `CM_KEYB_D`, DIK 0x20, VK 0x44 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyD`. `Detail` sets the same DIK |
| `CM_KEYB_F`, DIK 0x21, VK 0x46 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyF` |
| `CM_KEYB_G`, DIK 0x22, VK 0x47 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyG` |
| `CM_KEYB_H`, DIK 0x23, VK 0x48 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyH` |
| `CM_KEYB_J`, DIK 0x24, VK 0x4A | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `KeyJ`. `quit dialog: J ends the race, finished=0` |
| `CM_KEYB_K`, DIK 0x25, VK 0x4B | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyK` |
| `CM_KEYB_L`, DIK 0x26, VK 0x4C | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyL` |
| `CM_KEYB_SEMICOLON`, DIK 0x27, VK 0xBA | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Semicolon` |
| `CM_KEYB_APOSTROPHE`, DIK 0x28, VK 0xDE | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Quote` |
| `CM_KEYB_TILDE`, DIK 0x29, VK 0xC0 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Backquote` |
| `CM_KEYB_LSHIFT`, DIK 0x2A, VK 0x10 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `ShiftLeft`. `pause: Shift alone resumes nothing, and masks other keys` |
| `CM_KEYB_BACKSLASH`, DIK 0x2B, VK 0xDC | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Backslash` |
| `CM_KEYB_Z`, DIK 0x2C, VK 0x5A | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyZ` |
| `CM_KEYB_X`, DIK 0x2D, VK 0x58 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyX` |
| `CM_KEYB_C`, DIK 0x2E, VK 0x43 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyC` |
| `CM_KEYB_V`, DIK 0x2F, VK 0x56 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyV` |
| `CM_KEYB_B`, DIK 0x30, VK 0x42 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `KeyB`. Synthetic repeat event, VK read: `keyboard: repeat of an unseen key, ...` |
| `CM_KEYB_N`, DIK 0x31, VK 0x4E | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `KeyN`. `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release` |
| `CM_KEYB_M`, DIK 0x32, VK 0x4D | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `KeyM` |
| `CM_KEYB_COMMA`, DIK 0x33, VK 0xBC | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Comma` |
| `CM_KEYB_PERIOD`, DIK 0x34, VK 0xBE | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Period` |
| `CM_KEYB_SLASH`, DIK 0x35, VK 0xBF | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Slash` |
| `CM_KEYB_RSHIFT`, DIK 0x36, VK 0xA1 | `0x5b7a18`, `0x00469ff0`; C10 | partial | not verified | Browser `ShiftRight`. VK 0x10 only; input.md H1 asks also for 0xA1. No game code polls 0xA1 |
| `CM_KEYB_MULTIPLY`, DIK 0x37, VK 0x6A | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `NumpadMultiply` |
| `CM_KEYB_LALT`, DIK 0x38, VK 0x12 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `AltLeft` |
| `CM_KEYB_SPACE`, DIK 0x39, VK 0x20 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `Space`. `pause: any key resumes, ...` |
| `CM_KEYB_CAPITAL`, DIK 0x3A, VK 0x14 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `CapsLock` |
| `CM_KEYB_F1`, DIK 0x3B, VK 0x70 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F1` |
| `CM_KEYB_F2`, DIK 0x3C, VK 0x71 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F2` |
| `CM_KEYB_F3`, DIK 0x3D, VK 0x72 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F3` |
| `CM_KEYB_F4`, DIK 0x3E, VK 0x73 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F4` |
| `CM_KEYB_F5`, DIK 0x3F, VK 0x74 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F5`. Not prevented: the browser keeps it, and the key state still reaches the game, which has no use for it with tweak mode off |
| `CM_KEYB_F6`, DIK 0x40, VK 0x75 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F6` |
| `CM_KEYB_F7`, DIK 0x41, VK 0x76 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F7` |
| `CM_KEYB_F8`, DIK 0x42, VK 0x77 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F8` |
| `CM_KEYB_F9`, DIK 0x43, VK 0x78 | `0x5b7a18`, `0x00469ff0`; C10 | partial | not verified | Browser `F9`. Masked for the game: the port's settings key. It does not end a pause either |
| `CM_KEYB_F10`, DIK 0x44, VK 0x79 | `0x5b7a18`, `0x00469ff0`; C10 | partial | not verified | Browser `F10`. Masked for the game. [intentional-differences.md](../intentional-differences.md), Debug keys. It does not end a pause either |
| `CM_KEYB_NUMLOCK`, DIK 0x45, VK 0x90 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `NumLock`. VK and DIK, so it also ends a pause |
| `CM_KEYB_SCROLL`, DIK 0x46, VK 0x91 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `ScrollLock`. VK and DIK, so it also ends a pause |
| `CM_KEYB_NUMPAD7`, DIK 0x47, VK 0x67 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad7` |
| `CM_KEYB_NUMPAD8`, DIK 0x48, VK 0x68 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad8` |
| `CM_KEYB_NUMPAD9`, DIK 0x49, VK 0x69 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad9` |
| `CM_KEYB_SUBTRACT`, DIK 0x4A, VK 0x6D | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `NumpadSubtract` |
| `CM_KEYB_NUMPAD4`, DIK 0x4B, VK 0x64 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad4` |
| `CM_KEYB_NUMPAD5`, DIK 0x4C, VK 0x65 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad5` |
| `CM_KEYB_NUMPAD6`, DIK 0x4D, VK 0x66 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad6` |
| `CM_KEYB_ADD`, DIK 0x4E, VK 0x6B | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `NumpadAdd` |
| `CM_KEYB_NUMPAD1`, DIK 0x4F, VK 0x61 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad1` |
| `CM_KEYB_NUMPAD2`, DIK 0x50, VK 0x62 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad2` |
| `CM_KEYB_NUMPAD3`, DIK 0x51, VK 0x63 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad3` |
| `CM_KEYB_NUMPAD0`, DIK 0x52, VK 0x60 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Numpad0` |
| `CM_KEYB_DECIMAL`, DIK 0x53, VK 0x6E | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `NumpadDecimal` |
| `CM_KEYB_F11`, DIK 0x57, VK 0x7A | `0x5b7a18`, `0x00469ff0`; C10 | partial | not verified | Browser `F11`. Masked for the game, and it stays with the browser. Same row of intentional-differences.md. It does not end a pause either |
| `CM_KEYB_F12`, DIK 0x58, VK 0x7B | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `F12`. Not prevented: the browser keeps it, and the key state still reaches the game, which has no use for it with tweak mode off |
| `CM_KEYB_F13`, DIK 0x64, VK 0x7C | `0x5b7a18`, `0x00469ff0`; C10 | partial | not verified | Browser `F13`. VK only; no DIK in `DIK`. No binding uses it |
| `CM_KEYB_F14`, DIK 0x65, VK 0x7D | `0x5b7a18`, `0x00469ff0`; C10 | partial | not verified | Browser `F14`. VK only; no DIK in `DIK`. No binding uses it |
| `CM_KEYB_F15`, DIK 0x66, VK 0x7E | `0x5b7a18`, `0x00469ff0`; C10 | partial | not verified | Browser `F15`. VK only; no DIK in `DIK`. No binding uses it |
| `CM_KEYB_NUMPADENTER`, DIK 0x9C, VK 0x0D* | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `NumpadEnter` |
| `CM_KEYB_RCONTROL`, DIK 0x9D, VK 0x11* | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `ControlRight` |
| `CM_KEYB_DIVIDE`, DIK 0xB5, VK 0x6F | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `NumpadDivide` |
| `CM_KEYB_SYSRQ`, DIK 0xB7, VK 0x2C | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `PrintScreen`. VK and DIK, so it also ends a pause |
| `CM_KEYB_RALT`, DIK 0xB8, VK 0x12* | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `AltRight` |
| `CM_KEYB_HOME`, DIK 0xC7, VK 0x24 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Home` |
| `CM_KEYB_UP`, DIK 0xC8, VK 0x26 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `ArrowUp`. `keyboard: gas` |
| `CM_KEYB_PRIOR`, DIK 0xC9, VK 0x21 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `PageUp` |
| `CM_KEYB_LEFT`, DIK 0xCB, VK 0x25 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | checked on Amsterdam: check-race-ui | Browser `ArrowLeft`. `keyboard: steering` |
| `CM_KEYB_RIGHT`, DIK 0xCD, VK 0x27 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `ArrowRight` |
| `CM_KEYB_END`, DIK 0xCF, VK 0x23 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `End` |
| `CM_KEYB_DOWN`, DIK 0xD0, VK 0x28 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `ArrowDown` |
| `CM_KEYB_NEXT`, DIK 0xD1, VK 0x22 | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `PageDown` |
| `CM_KEYB_INSERT`, DIK 0xD2, VK 0x2D | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Insert` |
| `CM_KEYB_DELETE`, DIK 0xD3, VK 0x2E | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `Delete` |
| `CM_KEYB_LWIN`, DIK 0xDB, VK 0x5B | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `MetaLeft`. VK and DIK, so it also ends a pause |
| `CM_KEYB_RWIN`, DIK 0xDC, VK 0x5C | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `MetaRight`. VK and DIK, so it also ends a pause |
| `CM_KEYB_APPS`, DIK 0xDD, VK 0x5D | `0x5b7a18`, `0x00469ff0`; C10 | yes (host) | not verified | Browser `ContextMenu`. VK and DIK, so it also ends a pause |

## DirectInput model the game talks to

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `DirectInputCreateA(hInst, 0x500, &di, NULL)` | `0x004f1b30`, IAT `0x00576018`; C3 | yes (host) | checked on Amsterdam: check-race-ui | Every race boots through it. `source/host/directx.js` |
| `IDirectInput::EnumDevices`, type 3, 2, 4 | `0x004f2096`, callback `0x004f1a50`; C3 | yes (host) | checked on Amsterdam: check-race-ui | Joystick only when `joystickPresent`: `touch: device 2 at race start, wheel shown`, `keyboard: device 1` |
| `IDirectInput::CreateDevice` | `0x004f1eec`; C3 | yes (host) | checked on Amsterdam: check-race-ui | Every race |
| `IDirectInput::Release` | `0x004f1c10`; C3 | yes (host) | not verified | |
| Device `QueryInterface`, `IDirectInputDevice2A` | `0x578db0`; C3 | yes (host) | checked on Amsterdam: check-race-ui | Every race. Any IID succeeds |
| Device `Release`, both interfaces | `0x004f1c40`; C3 | yes (host) | not verified | |
| Device `GetCapabilities`, dwSize 0x2C | `0x004f1e50`; C3 | yes (host) | checked on Amsterdam: check-race-ui | `dwDevType` 0x0604 ran. 0x0204 did not: no race on DEVICE 3 or 4. 2 axes, 4 buttons |
| Device `GetProperty`, `DIPROP_RANGE`, objects 0 and 4 | `0x004f0707`, `0x004f0790`; C3, C4 | yes (host) | checked on Amsterdam: check-race-ui | lMin 0, lMax 65535, divisor 32767 |
| Device `SetProperty`, mouse axis mode | `0x004eefff`; C3 | yes (host) | checked on Amsterdam: check-race-ui | Every race. No-op |
| Device `Acquire`, `Unacquire` | C3 | yes (host) | checked on Amsterdam: check-race-ui | Every race. No-ops |
| Device `GetDeviceState`, 0x100, 0x10, 0x50 | `0x004ed4d0`, `0x004ee570`, `0x004ef510`; C3 | yes (host) | checked on Amsterdam: check-race-ui | `GameInput.fillDeviceState` |
| `DIERR_INPUTLOST` retry, other HRESULT fatal | `0x004ed4d0`; C3 | n/a | not verified | The host only returns S_OK, so these paths do not run |
| Device `SetDataFormat`, `SetCooperativeLevel(hWnd, 6)` | `0x4ed7c5`, `0x4ef0d5`, `0x4f0885`, `0x4ed831`, `0x4ef141`, `0x4f08f1`; C3, win32-surface C3 | yes (host) | checked on Amsterdam: check-race-ui | Every race. No-ops |
| Device2 `Poll`, joystick | `0x004ef510`; C3 | yes (host) | checked on Amsterdam: check-race-ui | No-op. Runs only with a joystick present, as in the touch and pad sub-checks |
| No `GetDeviceData`, `SetEventNotification`, buffering | `0x4ea0c0-0x4f2110`; C1 | yes (recompiled) | not verified | Not called, so not needed |
| Command list: `CM_JOY_X_AXIS, Y_AXIS, Z_AXIS, LEFT, RIGHT, UP, DOWN, BUTTON1..32` | `0x5b8898`; C4 | yes (recompiled) | not verified | Host fills 4 buttons at most |
| Axis formula, x, y inverted, z | `0x004ef650`; C4 | yes (recompiled) | checked on Amsterdam: check-race-ui | x and y only, by the steer and reverse sub-checks. Encoding: `fillDeviceState` |
| Digital path, `dwDevType` exactly 0x404 | `0x004f0450`, `0x004f0020`, `0x004efbf0`; C4 | no | not verified | On purpose: caps never report 0x404 (`chooseDevice`), so D-pad steering is full lock at once. input.md H4 lists it as an option |
| Analog path, any other `dwDevType` | `0x004ef6e0`; C4 | yes (recompiled) | checked on Amsterdam: check-race-ui | DEVICE 2 only |
| Z axis unused | C11 | yes (recompiled) | not verified | Host `lZ` is 0 |
| Force feedback: none | C11 | n/a | not verified | Nothing to port |
| Deadzone: none in the game | C11 | yes (recompiled) | not verified | The port's setting sits in front of it, see Gamepad |
| Calibration: none in the game | C11 | n/a | not verified | Nothing to port |
| Device creation `Keyboard0`, `Mouse0`, `Joystick0` by index | `0x004eb220`, `0x004eb170`; C2 | yes (recompiled) | checked on Amsterdam: check-race-ui | Every race |
| Poll once per pass, in creation order | `0x0046fdb0`, `0x004ea7d0`; C1 | yes (recompiled) | not verified | Fixed 60 ticks. repeat-trace shows the same input gives the same race across render profiles; it does not observe poll order |
| `GetAsyncKeyState` sign bit through `0x004c5e40` | `0x004c5e40`; C1 | yes (host) | checked on Amsterdam: check-race-ui | `source/host/win32.js`, `GameInput.keyDown`. P, Esc and camera keys depend on it |
| All keys read 0 while Shift is down | `0x004c5e40`; C1 | yes (recompiled) | checked on Amsterdam: check-race-ui | `keyboard: repeat of an unseen key, re-press in a tick, Shift read every time`: 20 polls of VK 0x10 read as down. `keyDown` exempts Shift from the spin guard |
| Release spins end, `0x0043ac80`, `0x0043bd60` | `0x0043ac80`, `0x0043bd60`; C12 | yes (host) | checked on Amsterdam: check-race-ui | `keyDown`, 8 polls per key per tick, then `RaceRunner.endWait`: `finish:` and `game over:` sub-checks |
| Release spin in `0x00419600` | `0x00419600`; C12 | yes (host) | not verified | F11 is masked, so the spin cannot start |
| Pause and quit spins | `0x0044c990`, `0x0044c9f0`; C12 | yes (host) | checked on Amsterdam: check-race-ui | `hook!pauseBegin`, `Race.pollPause`; `pause:` and `quit dialog:` sub-checks |
| Active list of 32 commands, then `Illegal index m_NrCommands` | `0x004f0df0`; C2 | yes (recompiled) | checked on Amsterdam: check-race-ui | `MAX_REPORTED_KEYS` 27 in `fillDeviceState`: `keyboard: 40 keys held do not end the race`, through direct `keyEvent` calls. See the corrections in the behaviour document |
| Thrown input error ends in a fatal message | `0x00458386`, `0x004c4150`; C2 | partial | not verified | A status line `Race gestopt door een fout` and back to the menu (`RaceRunner.frame`), not a message box and `ExitProcess`. No input error was provoked |

## Menu input

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| No joystick or gamepad in the menu | No `DINPUT`, no `joyGet*`; C13 | n/a | not verified | The original has none. The port adds a pad, see Gamepad |
| `TfrmIntro`: any key except Space skips | `menu 0x004a4a78`; C13 | yes (menu port) | checked on Amsterdam: check-flow | Enter was pressed. Space was not tried. `TfrmIntro.userAction`, `source/menu/forms/group-main.js` |
| `TfrmIntro`: any mouse button skips | `menu 0x004a4ad8`; C13 | yes (menu port) | not verified | `onPointer`, window-level `pointerdown` |
| Browser sound rule: first action turns sound on | Port; intentional-differences.md, Video | yes (menu port) | not verified | `userAction`, `showSoundNote`. All checks but check-phone-flow start Chromium with autoplay allowed; check-phone-flow taps past the intro either way and records nothing about sound |
| Intro pauses in a hidden tab | Port; brief section 6 | yes (host) | checked on Amsterdam: check-race-ui | `intro: pauses in a hidden tab, goes on when shown`, with `document.hidden` stubbed. `App.start` |
| `TGDIButton`: Enter on default or focused | `menu 0x00468418`; C13 | yes (menu port) | not verified | `Form.keyDown`, `source/menu/framework.js`. Enter on new player goes through the text box, not this |
| `TGDIButton`: Esc on Cancel | `menu 0x00468380`; C13 | yes (menu port) | not verified | `Form.keyDown` |
| `TGDIButton`: Space, down then up | VCL, port reading | yes (menu port) | not verified | `Button.keyDown`, `keyUp` |
| `TGDIButton`: Tab order | DFM `TabOrder`; C13 | yes (menu port) | not verified | `Form.moveFocus`. Flattened where the VCL had panels |
| Caption accelerator | `menu 0x00468418`; only `&Details >>` on `TfrmException2` in the data | no | not verified | `TfrmException2` is an HTML panel; its `Details >>` button has no accelerator |
| `TDaviGraphicSlider`: Left, Down -1 | `menu 0x0046ad20`; C13 | yes (menu port) | not verified | `Slider.keyDown`, `source/menu/framework.js` |
| `TDaviGraphicSlider`: Up, Right +1 | `menu 0x0046ad20`; C13 | yes (menu port) | not verified | Same |
| `TDaviGraphicSlider`: PgUp +5, PgDn -5 | `menu 0x0046ad20`, `LargeStep 5`; C13 | yes (menu port) | not verified | Same |
| `TDaviGraphicSlider`: Home = Max, End = Min | `menu 0x0046ad20`; C13 | yes (menu port) | not verified | Same, as coded |
| `TDaviGraphicSlider`: repeat 50 ms after 250 ms | `menu 0x0046afbc`; C13 | yes (menu port) | not verified | `Slider.pointerDown` |
| `txtName`: MaxLength 12, Enter = OK | `menu 0x00494d44`, `0x00494fb0`; C13 | yes (menu port) | checked on Amsterdam: check-flow | Typed `Rick`, Enter. MaxLength not tried. `EditBox`, `source/menu/framework.js` |
| `TfrmOptions` radios `optKeyboard`, `optJoyPad`, `optJoystick`, `optWheel`, images `OPT_KEYB`, `OPT_GPAD`, `OPT_JOYS`, `OPT_WHEE` | `menu 0x00496480`-`0x004965a0`; C13 | yes (menu port) | form check | `TfrmOptions`. Form loaded and options persistence; a change of radio is not shown in the screenshots |
| ControlType to DEVICE and SENSITIVITY | `menu 0x004a6a38`, `0x004a6a70`, `0x004960fc`; C9 | yes (menu port) | not verified | `Controls.inputDevice`, `sensitivity`, `source/menu/data.js`. Only DEVICE 1 went through the menu in check-flow |
| `Instellen`: keyboard → `TfrmKeySettings`, joystick → `TfrmJoyStickSettings`, wheel → `TfrmWheelSettings` | `menu 0x004965a0`; C13 | yes (menu port) | not verified | `btnControlsClick`. The target forms were loaded directly in form-check |
| `TfrmJoyStickSettings`, slider on JoySensitivity | `menu 0x004982b4`; C13 | yes (menu port) | form check | `evidence/forms/joysticksettings.png`. Port note under the text |
| `TfrmWheelSettings`, slider on WheelSensitivity | `menu 0x004981f0`; C13 | yes (menu port) | form check | `evidence/forms/wheelsettings.png`. Port note under the text |
| `TfrmStartInfoKeyBoard`: current key names | `menu 0x0049812c`, `0x00497f54`; C13 | yes (menu port) | checked on Amsterdam: check-flow | Start-info dialog in the flow; `evidence/forms/startinfokeyboard.png` |
| `TfrmStartInfo`: `POPSTRT2` joystick, `POPSTRT1` gamepad, `POPSTRT3` wheel | `menu 0x00497818`; C13 | yes (menu port) | form check | `evidence/forms/startinfo.png` |
| Touch note under the start-info art | Port; intentional-differences.md, Input | yes (menu port) | not verified | `TOUCH_NOTE`, `source/menu/forms/group-dialogs.js`, shown when `useTouch` is true. It says that in landscape the last three buttons are under `Meer`. `evidence/flow-phone/06-start-info.png` shows it |
| `TfrmException2`: Ctrl+C copies | `menu 0x004a808c`; C13, menu-forms section 12 | yes (menu port) | not verified | HTML panel in `group-dialogs.js`. form-check covered the error dialog; Ctrl+C was not run |
| `PopupMenu1`: `Money = 300`, `At last track`, `Unlock supercop` | `TFRMMAINSCREEN.dfm`, no control assigns it; C13 | n/a | not verified | Unreachable in the original |
| Pointer cancel on the menu canvas: no click | Port; brief section 7 | yes (menu port) | fix check: CDP touch cancel and synthetic pointers, a slider's repeat timer | `Form.pointerCancel`, `MenuRuntime.bind`; also `lostpointercapture` |
| One pointer per press, a second finger counts for nothing | Port; brief section 7 | yes (menu port) | fix check: synthetic pointers | `MenuRuntime.press`. A CDP version of that script failed, which was put down to the test's touch events |
| Key repeat from a key held at the end of a race does nothing | `0x0043ac80`; C12; brief section 7 | yes (menu port) | checked on Amsterdam: check-race-ui | `game over: Enter ends it, the race waits for its release, and the menu ignores repeats` reads the flag. Fix check: synthetic repeat keydowns on `TfrmHighScoreDlg` and `TfrmCloseDlg`. `MenuRuntime.staleRepeat` |

## Touch

The original has no touch input. These rows carry "Port" as evidence where the brief or the reference is the source.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Wheel graphic | Port; `RedCat Superkarts/public/assets/touch/steering-wheel.svg`, same SHA-256 | yes (host) | checked on Amsterdam: check-race-ui | `touch: device 2 at race start, wheel shown`; `evidence/race-ui/touch-landscape.png`. Source `source/assets/touch/`, copied by `prepare_touch`, `tools/prepare-assets.py` |
| Wheel size from the reference | Port; reference `style.css` | yes (host) | checked on Amsterdam: check-race-ui | `touch: wheel at the reference size`, 158.4 px at 800x360. `clamp(148px,44vmin,224px)`, portrait `clamp(148px,45vw,224px)`, 140 px at up to 600 px wide |
| Wheel left margin below 600 px height | Port; differs from the reference on purpose | yes (host) | checked on Amsterdam: check-race-ui | Inset plus 10% of the height instead of 20 px, so the fifth rank portrait stays clear: `layout:` at 800x360, 640x360, 844x390 |
| Absolute X/Y response, deadzone 0.1, sensitivities 0.2, 0.65 | Port; reference `touchWheelInput`, identical on 70,531 sample points | yes (host) | checked on Amsterdam: check-race-ui | `touchWheelInput`, `source/input/touch.js`. `touch: steering and turbo together` |
| Wheel rotation `steer*90` degrees, `--steer-angle` | Port; reference `visual` | yes (host) | not verified | `touch-landscape.png` shows the wheel turned; no check asserts the angle |
| Labels `▲ Gas`, `Achteruit ▼`, highlighted by `data-drive` | Port; reference `visual`, CSS | yes (host) | not verified | `touch-landscape.png` shows `▲ Gas` lit; no check asserts it |
| Pointer capture, one contact owns the wheel | Port; reference `bindSteeringWheel` | yes (host) | fix check: 2 and 3 fingers | `TouchControls.bindWheel`. A pointer id that comes back ends its old owner (`releases`) |
| Release on `pointerup`, `pointercancel`, `lostpointercapture` | Port; reference `bindSteeringWheel` | yes (host) | checked on Amsterdam: check-race-ui | `touch: cancel releases everything` |
| Mouse: only the first button presses a control | Port; reference `bindTouch` | yes (host) | checked on Amsterdam: check-race-ui | `touch: a right mouse button presses no on-screen control` |
| Up is gas | C5, C6 through DEVICE 2 | yes (host) | checked on Amsterdam: check-race-ui | `touch: wheel up is gas, car accelerates`. `TouchControls.push`. On/off, not proportional: DEVICE 2 reads a button |
| Down is brake, then reverse | C5, C6 through DEVICE 2 | yes (host) | checked on Amsterdam: check-race-ui | `touch: wheel down brakes, then reverses`, fastest backward -12.61 m/s |
| Wheel X is steering, direct | C6 through DEVICE 2 | yes (host) | checked on Amsterdam: check-race-ui | `touch: steering and turbo together` |
| Simultaneous contacts: wheel and Turbo | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `touch: steering and turbo together`, two CDP touch points |
| Simultaneous contacts: wheel, Turbo, Handrem, each lifted by itself | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `touch: wheel, turbo and handbrake together, each lifted by itself`, masks 9 then 8 |
| `Claxon` button | C5 `CarHorn` | yes (host) | not verified | `#touch-horn`, `bindHold`. No check tapped it |
| `Turbo` button | C5 `CarTurbo` | yes (host) | checked on Amsterdam: check-race-ui | Host bit only |
| `Handrem` button, `brake-pedal.svg` | C5 `CarHandbrake`; reference art, same SHA-256 | yes (host) | checked on Amsterdam: check-race-ui | Host bit only |
| `Camera` button | C7 | yes (host) | checked on Amsterdam: check-race-ui | See Cameras |
| `Terugkijken` button, held | C7 key 3; input.md H6 | yes (host) | checked on Amsterdam: check-race-ui | `touch: Terugkijken holds view 4, the release restores`, with the wheel held |
| `Reset` button | C7 Enter; input.md H6 | yes (host) | checked on Amsterdam: check-race-ui | `touch: Reset places the car back, with the wheel held and still held after` |
| `Meer`, showing `Roepen`, `Dashboard`, `Detail` in landscape | C7 keys T, 5, D; input.md H6 | yes (host) | checked on Amsterdam: check-race-ui | `touch: Meer shows Roepen, Dashboard and Detail, which work`. For `Roepen` the DIK only, not the voice. Portrait shows them all, by `layout:` rectangles |
| `Pauze` button | C7 VK P | yes (host) | not verified | `bindKey`. Not tapped by a check |
| `Stop` button | C7 VK Esc | yes (host) | checked on Amsterdam: check-phone-flow | `bindKey`. `Stop and Ja return to the menu, finished=0`, tapped at 844x390. `#race-stop` on the same binder was clicked, see Keyboard transitions |
| `Nee` on the quit prompt | C7; intentional-differences.md, Dialog keys on touch | yes (host) | checked on Amsterdam: check-race-ui | `full screen: Stop asks, and Nee answers on screen`, by mouse on a desktop profile. `RaceRunner.updateDialogKeys`, `bindKey` |
| `Ja` on the quit prompt, `Verder` on a pause | C7; same | yes (host) | fix check: cancel and second finger on the shared binder | `Ja` was tapped in check-phone-flow, `Stop and Ja return to the menu, finished=0`. `Verder` on a pause was not pressed |
| `Verder` on the finish table and game over | Port; input.md H6 proposed Enter | yes (host) | checked on Amsterdam: check-race-ui | `finish: wheel and actions gone, Verder shown`, `finish: Verder ends the race, which waits for the finger to lift`. VK 0x20. Entered through `FUN_0044cda0` |
| Cameras 6 to 0 on touch | C7 | no | not verified | See Race keys |
| Any tap resumes from pause | C7; input.md H6 | yes (host) | checked on Amsterdam: check-race-ui | `pause: a mouse button on the race resumes, once released`: by mouse. `canvasPress` takes a tap the same way; a real tap was not run |
| Release on focus loss | Brief section 6 | yes (host) | checked on Amsterdam: check-race-ui | `focus: clock stops, sound suspends, input clears`, with a touch held. `RaceRunner.setFocus` |
| Hold buttons released on focus loss | Reference `releaseTouches` | yes (host) | fix check: release registry with 2 and 3 fingers | `TouchControls.releaseAll` runs every release closure |
| Release on rotation, and on a resize that moves the wheel | Reference `main.js` `resize()`; brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `orientation: the gesture ends with the rotation`, by viewport change. `TouchControls.relayout`. Differs on purpose: a resize that leaves the wheel where it is ends nothing |
| Release when the settings panel opens | Reference `InputState.clear` | yes (host) | checked on Amsterdam: check-race-ui | `settings: gear works with a second finger, and the panel releases the wheel`. `input.onClear` |
| Controls hidden outside a race | Reference `main.js` | yes (host) | checked on Amsterdam: check-race-ui | `finish: Verder ends the race, which waits for the finger to lift` reads them hidden in the menu. `TouchControls.setVisible` |
| Wheel, buttons and column hidden on result screens | Port | yes (host) | checked on Amsterdam: check-race-ui | `finish: wheel and actions gone, Verder shown`. Class `race-results` |
| `contextmenu` prevented on wheel and buttons | Reference | yes (host) | not verified | `TouchControls` constructor, `bindPress` |
| Touch detection: `pointer: coarse` and `maxTouchPoints > 0` | Port | yes (host) | checked on Amsterdam: check-race-ui | Mobile and desktop profiles. `useTouch`, `source/settings.js`, used in `chooseDevice`, `TfrmStartInfo` and `TfrmDisplaySettings` |
| Touch controls on, off, auto setting | Reference `settings.touch`; brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `touch setting: on gives the wheel on a desktop, and a mouse drives it`, `touch setting: off and on again during a race`, `touch setting: off on a phone gives device 1, and on waits for the next race` |
| `-webkit-touch-callout:none`, focus outline, help text | Reference `style.css`, `index.html` | yes (host) | not verified | Same rules and text. No iOS and no focus check |

## Gamepad

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Device selection at race start | Port; intentional-differences.md, Gamepad | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: connected at start selects device 2`, stand-in pad. `RaceRunner.chooseDevice` |
| Prefer a standard-mapping pad, else any pad by button number | Port; `0x0046d8a0`, `0x0046e350` for the numbers | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: a non-standard device goes by button number`, pad flags on DEVICE 2. Differs on purpose from the references, which ignore such devices. No real device |
| Left stick X steers, deadzone | Port; H4; reference `axisDeadzone` | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: analog steering`, `gamepad: right trigger is gas, small stick stays in the deadzone` |
| Deadzone setting, 0 to 0.5, default 0.18 | Reference `settings.deadzone`; brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: the deadzone follows the setting`: 0 at 0.5, 0.268 at 0.18, for a stick at 0.4. Read live by both `GamepadInput` instances |
| D-pad left, right steer, instant | Port; README | yes (host) | not verified | `GamepadInput.pollRace` |
| Stick down or D-pad down brakes | C5 `CarBackward = CM_JOY_DOWN` | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: D-pad up calls, D-pad down and stick down brake`: brake 90, then 100 |
| Joystick or wheel Y axis is gas and brake | C5, C6 mode 3 | yes (host) | fix check: pad flags with a stand-in, no race on DEVICE 3 or 4 | `pad.y` |
| RT gas | Port; H4 | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: right trigger is gas, small stick stays in the deadzone`. On/off on DEVICE 2, analog on 3 and 4 |
| A gas | Port; H4 | yes (host) | not verified | `pollRace` |
| LT brake | Port; H4 | yes (host) | not verified | `pollRace` |
| B brake | Port; H4 | yes (host) | not verified | Same |
| Analog pedals, DEVICE 3 and 4 | C6 mode 3; brief section 7 | yes (host) | not verified | `pad.y`. Only on `Joystick` and `Stuur` radios: DEVICE 2 reads gas as a button |
| X turbo | Port; H4 | yes (host) | not verified | `pollRace` |
| Y horn | Port; H4 | yes (host) | not verified | `pollRace` |
| RB handbrake | Port; H4 | yes (host) | not verified | `pollRace` |
| LB camera cycle | Port; H6 by analogy | yes (host) | not verified | `GameInput.nextCameraKey` is covered through the touch button; LB was not pressed |
| L3 reset | C7 Enter; input.md H6 by analogy | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: left stick click resets the car` |
| R3 look back, held | C7 key 3; input.md H6 by analogy | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: right stick click holds the view behind` |
| D-pad up `Roepen` | C7 key T | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: D-pad up calls, ...`: the pulse of VK 0x54 only, not the voice |
| Dashboard, overlay detail on the pad | C7 keys 5, D | no | not verified | On purpose: no standard button is left free. They work on keyboard and touch |
| Cameras 6 to 0 on the pad | C7 | no | not verified | See Race keys |
| Start: pause, or VK 1 while paused | Port; README | yes (host) | not verified | `pollRace` |
| Back: quit prompt | Port; README | yes (host) | not verified | `pollRace` |
| A at a pause: VK 1 | Port | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: found again, A resumes` |
| B at a pause; A, B at the quit prompt | Port | yes (host) | not verified | `pollRace`: VK 1; J, N |
| A on the finish table and game over: Space, new press only | Port | yes (host) | checked on Amsterdam: check-race-ui | `finish: pad A held does not skip it, a new press does`. Entered through `FUN_0044cda0`. Back and L3 also leave these screens, read from the code |
| Disconnect clears gas, brake, steering, turbo, horn, handbrake, look back | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: disconnect releases the controls and pauses`. `GamepadInput.lost`. Look back is released in the code, not asserted |
| Disconnect pauses, as the reference does | Reference `input.js`, `gamepaddisconnected` | yes (host) | checked on Amsterdam: check-race-ui | Same check, and `gamepad: found in a keyboard race gives a note, lost pauses`. Found by polling, not by the event. Not on a result screen or in a dialog |
| Reconnect during a race on DEVICE 2 | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `gamepad: found again, A resumes` |
| Connect during a race on DEVICE 1 | Brief section 7 | partial | checked on Amsterdam: check-race-ui | On purpose: the game binds its device once at load, so the pad cannot drive until the next race. Note `Gamepad werkt vanaf de volgende race`, then Start, Back, LB, L3 and D-pad up work. `gamepad: found in a keyboard race gives a note, lost pauses` |
| Menu: D-pad or stick to move focus | Port; intentional-differences.md | yes (host) | not verified | `GamepadInput.pollMenu`, `menuKeys`. No auto-repeat. A stand-in pad went from the intro through the name dialog in a fix check; focus moves were not asserted |
| Menu: A Enter, B Esc, RB Tab | Port; intentional-differences.md | yes (host) | checked on Amsterdam: check-race-ui | `menu: a pad button held from the race counts only after its release`: A sends Enter. B and RB were not asserted |
| Menu: name entry with a pad only | Brief section 7 | yes (menu port) | fix check: stand-in pad from the intro onward | `askPlayerName`, `source/menu/flow.js`: OK on an empty name gives `Speler 1`, then the next free number. Keyboard Enter still asks again |
| Held button across a race-to-menu change | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `menu: a pad button held from the race counts only after its release`. `GamepadInput.resync`, `App.showMenu` |
| Rumble: none in the original | C11 | n/a | not verified | Nothing to port |

## Keyboard transitions and browser keys

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Keys latched so a short tap is seen once | Port; H1 | yes (host) | checked on Amsterdam: check-race-ui | `page.keyboard.press` on P and Esc. `keyEvent`, `endTick` |
| Release and re-press inside one tick | C1, device state at poll | yes (host) | checked on Amsterdam: check-race-ui | `keyboard: repeat of an unseen key, re-press in a tick, Shift read every time`. Direct `keyEvent` calls |
| Key held before the race input exists, or across focus | C3, device state at poll | yes (host) | checked on Amsterdam: check-race-ui | Same check, with a synthetic repeat event. `repeatEvent` |
| Clear on blur and hidden | H1; brief section 6 | yes (host) | checked on Amsterdam: check-race-ui | `focus:` and `hidden tab:` sub-checks |
| Arrows, Space, Alt `preventDefault` | H8 | yes (host) | not verified | `bindKeyboard`. Default browser actions were not observed |
| Ctrl chords `preventDefault` | H8; `0x004c5e40` ignores Ctrl | yes (host) | checked on Amsterdam: check-race-ui | `keyboard: turbo chords stay in the game, browser keys stay with the browser`: synthetic events, Ctrl+5, Ctrl+D, Ctrl+T, `defaultPrevented` read. A real browser may still keep Ctrl+T, N, W |
| F5, F11, F12, Ctrl+R, Ctrl+Shift chords, Command chords stay with the browser | Port | yes (host) | checked on Amsterdam: check-race-ui | Same check, not prevented. `browserKey`. Command chords were not in the check |
| F9 masked from the game, opens the panel | Port | yes (host) | checked on Amsterdam: check-race-ui | `settings: F9 opens with the focus inside, keys stay out of the race, Esc closes` |
| Keyboard Lock in full screen on Esc, T, N, W | H8 | yes (host) | not verified | `App.fullscreenChanged`, `LOCKED_KEYS`. Chromium only by H8; its effect was not checked |
| Leaving full screen opens the quit prompt | H8 | yes (host) | checked on Amsterdam: check-race-ui | `full screen: leaving opens the quit prompt, and it stays off`, through `document.exitFullscreen`. Real Esc in a browser that keeps it was not run |
| On-screen `Stop` for a mouse in full screen, with `Ja` and `Nee` | H8 | yes (host) | checked on Amsterdam: check-race-ui | `full screen: on at the first gesture, with Stop for the mouse`, `full screen: Stop asks, and Nee answers on screen`. `#race-stop`, `RaceRunner.updateStop` |
| macOS Ctrl+Left, Ctrl+Right note | H8 | partial | not verified | A documentation item: stated in `README.md` and the behaviour document, not in the game. `TfrmKeySettings` can rebind turbo |
| Mouse pointer hidden in a race | `0x004cd6b0` `SetCursor(0)`; C12 | yes (host) | checked on Amsterdam: check-race-ui | `pointer: none over the race, back for 2 s on a move`, computed cursor. On purpose it comes back for 2 s, because the gear needs it |
| Focus: ticks stop, clock does not jump | `0x00458020`; C12; [intentional-differences.md](../intentional-differences.md), Focus loss | yes (host) | checked on Amsterdam: check-race-ui | `focus: resumes without a jump`, `hidden tab: clock stops and resumes`. By scripted events |

## Safe areas

Headless Chromium has no notch, so the insets were 0 in every check-race-ui and form-check run.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `viewport-fit=cover` | Brief section 7 | yes (host) | not verified | `source/index.html` |
| Wheel | Brief section 7 | yes (host) | not verified | `--wheel-left`, `--wheel-bottom`, `source/style.css` |
| Action buttons, landscape and portrait | Brief section 7 | yes (host) | not verified | `--hud-right`, `--wheel-bottom` |
| Column and panel buttons, landscape and portrait | Brief section 7 | yes (host) | not verified | `--hud-right`, `--hud-top`, `--hud-bottom`, `env(safe-area-inset-left)` |
| Gear and `#race-stop` | Brief section 7 | yes (host) | not verified | `--hud-top`, `--hud-right` |
| Dialog keys, portrait and result screens | Brief section 7 | yes (host) | not verified | `--hud-bottom`, `--hud-right`, `--wheel-bottom` |
| Dialog keys, landscape prompts | Brief section 7 | partial | not verified | No inset: centred under the requestor frame, so a notch is unlikely to cover them |
| HUD groups | Brief section 7; hud-overlay.md section C | yes (host) | fix check: fake insets at 800x360 | `HudLayout.setShape`, `apply`, `safeAreaInsets`. No run combined insets with a portrait scale above 1 |
| Menu forms and dialogs | Brief section 7 | yes (menu port) | not verified | `MenuRuntime.safeRect`, `source/menu/framework.js` |
| Help window, intro sound note, error dialog | Brief section 7 | yes (menu port) | not verified | `max(..., env(safe-area-inset-*))`. A fix check saw the layout unchanged at zero inset, which proves nothing about insets |
| Frame counter and status text | Brief section 7 | no | not verified | Not essential: `#fps`, `#status`, `source/style.css` |

## Orientation and layout

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Portrait race: view on top, controls below | Brief section 7; intentional-differences.md, Picture | yes (host) | checked on Amsterdam: check-race-ui | `orientation: portrait keeps the controls on screen`. `RaceRunner.layout` |
| Back to landscape during a race | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `orientation: back to landscape`. Viewport change, not a rotated device |
| HUD groups to the edges for any shape | hud-overlay.md sections 10, B, C | yes (host) | checked on Amsterdam: check-race-ui | `layout:` at 8 sizes, rectangles only. `source/host/hud-layout.js`. See [parity/hud.md](hud.md) |
| Communicator clear of the wheel in landscape | Port | yes (host) | checked on Amsterdam: check-race-ui | `hud.leftShift`, `RaceRunner.layout`. `layout:` compares its resting rectangle. While it slides it passes under the wheel: `evidence/race-ui/touch-landscape.png` |
| Action buttons lifted when they would cover the Communicator | Port | yes (host) | checked on Amsterdam: check-race-ui | `actions-lifted`: on at 640x360, 1024x768, 800x880 in `layout:` |
| Column at the right edge in landscape, clear of statistics, Speedometer, chase timer | Port | yes (host) | checked on Amsterdam: check-race-ui | `.touch-top`, `layout:`. Chase timer by rectangle only: no chase level ran |
| Portrait arrangement of touch controls | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `:root.race-portrait`, `layout:` at 360x800, 390x844, 360x640; nothing over the view |
| One portrait rule for view and controls | Port | yes (host) | checked on Amsterdam: check-race-ui | `ch > cw * 1.15`, class `race-portrait`. `layout: 800x880 covers nothing important`, near square |
| Menu portrait zones | Brief section 7 | yes (menu port) | form check | `evidence/forms/*-portrait.png`, 390x844. `MenuRuntime.relayout` |
| Dialogs in portrait | Brief section 7 | yes (menu port) | form check | `MenuRuntime.dialogRect`, 390x844 |
| `resize`, `orientationchange` handlers | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `App.start`. The check changes the viewport, so `resize` ran; `orientationchange` was not observed |
| Layout for desktop and tablet shapes | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `layout:` at 1024x768 and 800x880 with touch; the keyboard section ran at 1280x720. No real tablet |

## Settings and effective size

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `3D-resolutie`: Automatisch (scherm) | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `settings: Auto at 100% gives 1600x720`. `source/settings.js`, `source/ui/settings-panel.js` |
| `3D-resolutie`: 360p | Brief section 8 | yes (host) | not verified | Base height, width from the view's aspect |
| `3D-resolutie`: 480p | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `settings: 480p at 50% applies at once, drawing buffer stays native` |
| `3D-resolutie`: 600p | Brief section 8 | yes (host) | not verified | |
| `3D-resolutie`: 720p | Brief section 8 | yes (host) | not verified | |
| `3D-resolutie`: 900p | Brief section 8 | yes (host) | not verified | |
| `3D-resolutie`: 1080p | Brief section 8 | yes (host) | not verified | |
| `3D-resolutie`: 1440p | Brief section 8 | yes (host) | not verified | |
| `Renderschaal` 25% to 200%, both axes | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | 50 and 200 were run. 25 was not. Step 5; keys in `Geavanceerd` step 25 |
| Auto is CSS size times DPR, no second scaling | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | 800x360 DPR 2 gives 1600x720, drawing buffer 1600x720. `setPixelRatio(1)`, `D3DRenderer`. With a 3D card: next row for the 8-bit path |
| Auto at `RESOLUTION` 0 and 1: the mode's own pixels on the view's shape | Port; intentional-differences.md | yes (host) | checked on Amsterdam: check-software | `modeGrid`, `renderSize` in `source/settings.js`. At 1280x720: 853x480 and 427x200, read in `RESOLUTION 1: Ramp device, 640x480, view on the mode grid` and `RESOLUTION 0: Ramp device, 320x200, clip 0.625, 200 rows`. So the original's look is the default. Presets and `Renderschaal` act as with a 3D card |
| HUD and controls keep native size at any scale | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `settings: 480p at 50% ...`: drawing buffer stays native; `evidence/race-ui/race-480p-50.png` |
| HUD on the mode's grid at `RESOLUTION` 0 and 1, at any scale | Port; intentional-differences.md | yes (host) | checked on Amsterdam: check-software | Its own target, so `Renderschaal` acts on the world only: at 50% the world target is 240 rows, the HUD's 480, the drawing buffer stays native. Controls keep native size |
| Effective size shown in the panel | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | Text `3D-beeld: 533 × 240 pixels`. `SettingsPanel.refresh` |
| Effective size follows a resize while the panel is open | Brief section 8 | yes (host) | fix check: size refreshed in layout | `RaceRunner.layout` calls `panel.refresh` |
| Effective size shown in `Geavanceerd` | Brief section 8 | yes (menu port) | form check | `lblEffective`, `refreshPortRows`, on every change and resize |
| Effective size in the frame counter | Port | yes (host) | not verified | `RaceRunner.countFps` |
| GPU limit on the render target | Reference `renderDimensions`, `maxSize`, `GPU-limiet` | yes (host) | checked on Amsterdam: check-race-ui | `settings: the GPU limit is applied and shown`, stubbed limit 2048: 2048x922 and the text. Stubbed 512 in `Geavanceerd` by a fix check. No device with such a limit |
| Applies during a race | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `settings: 480p at 50% ...` |
| Survives a restart | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `settings: survive a restart`, page reload. `localStorage` `a2racer4.settings` |
| Blocked storage falls back to defaults | Port | yes (host) | not verified | `try`, `catch` in `source/settings.js` |
| Master `Volume`, race and menu | Brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `settings: Volume sets the master gain, once`: state only, not heard. `App.getMasterOutput`. Fix checks: menu sound and beep reach the master output; a pause keeps it muted |
| `Volume` for the movies | Brief section 8 | yes (menu port) | fix check: `video.volume` at 25% | `playVideo`. iOS ignores `video.volume`, so there the device volume applies |
| `Beeldjes per seconde tonen` | Port | yes (host) | not verified | `RaceRunner.countFps`, `settingChanged` |
| `Volledig scherm`, on by default, at the first gesture | Original always full screen: `raser.ini WINDOWED=0` | yes (host) | checked on Amsterdam: check-race-ui | `full screen:` sub-checks, in headless Chromium. `App.applyFullscreen`. On purpose: leaving turns the setting off until ticked again. An iPhone has no such call: the panel row is hidden, `Geavanceerd` greys it |
| All port settings in `Geavanceerd`, tab `Browser` | Brief section 8 | yes (menu port) | form check | Tabs of `Geavanceerd`. `TfrmDisplaySettings.addBrowserPage` |
| Panel: gear button | Port | yes (host) | checked on Amsterdam: check-race-ui | Tapped in the `settings:` sub-checks, also with a second finger. `onRelease` |
| Panel: F9 | Port | yes (host) | checked on Amsterdam: check-race-ui | `settings: F9 opens with the focus inside, keys stay out of the race, Esc closes` |
| Panel: sound stays off while open, on when closed | Port | yes (host) | checked on Amsterdam: check-race-ui | `settings: touching the panel does not start the sound again`, `settings: closing the panel does`. State only |
| Clock stopped while the panel is open | Port | yes (host) | not verified | `panelOpen` in `RaceRunner.frame` |
| `Annuleren` and x restore the port settings, OK keeps them | Port | yes (menu port) | fix check: `Geavanceerd`, seven keys | `PORT_KEYS`, `restorePortValues`, `source/menu/forms/group-options.js` |
| Music, sound and voice volumes | `TfrmOptions`, `menu 0x00495c68`-`0x00495d1c` | yes (menu port) | form check | Options persistence; in the player's save |
| Control type, keys, sensitivities persist | `menu 0x004a6cf4`, `0x004a6d70`; C9 | yes (menu port) | form check | Options persistence. Save in IndexedDB through the VFS |
| Start info on or off | `SHOWSTARTINFO`; C13 | yes (menu port) | form check | `chkStartInfoOn`, part of options persistence |

## Platform targets

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Chromium on Linux, headless, RX 6700 XT through ANGLE Vulkan | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Chromium 145. Also check-flow |
| Chrome or Chromium on Windows and macOS | Brief section 7 | yes (host) | not verified | No check ran there |
| Firefox on desktop | Brief section 7 | yes (host) | not verified | No check ran there |
| Safari on macOS | Brief section 7 | yes (host) | not verified | No check ran there. The `webkit` full-screen prefix is in the code, not run |
| Chrome on Android | Brief section 7 | yes (host) | not verified | The mobile profile is emulation on desktop Chromium, not a device |
| Safari on iOS | Brief section 7 | yes (host) | not verified | iPhone has no `requestFullscreen`, and iOS ignores `video.volume` |
| Real phone or tablet | Brief section 7 | yes (host) | not verified | None used |
| Real gamepad, joystick or wheel | Brief section 7 | yes (host) | not verified | Only a stand-in for `navigator.getGamepads`. No race on DEVICE 3 or 4 |

## Notes on evidence

- `evidence/race-ui/pause.png` and `quit-dialog.png` come from the check-race-ui run and show the prompt text over the still race picture. That was looked at by eye. The tool asserts state and that every present under the dialog uses alpha 1.
- `evidence/race-ui/touch-landscape.png` caught the Communicator in its slide, under the wheel. `touch-more.png` from the same run shows it at rest, right of the wheel.
- The speeds in check-race-ui follow wall-clock waits, so they are not handling measurements. The keyboard read 20.64 m/s against touch's 17.28 and the gamepad's 17.32 for the same nominal 4 s. Inferred: those are the launch regimes, about 20.7 and 17.3 m/s at 4 s (`evidence/reference-wine/results.md`), and not the input device. The check does not read the movement state. check-driving is the tick-exact one, on the keyboard device.
- `evidence/forms/displaysettings.png`, `doublekeys.png`, `mainscreen*.png` and `options.png` were taken again after the last changes to those forms.
- Playwright cannot resize a full-screen window, so `orientation:` and `layout:` switch the `fullscreen` setting off first.
- `gamepad session: the keyboard uses the player's keys, with lock to lock in 0.5 s` and `keyboard: 40 keys held do not end the race` call `GameInput` directly and do not go through browser key events.
