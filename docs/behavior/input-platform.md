# Input and platforms

This part of [original-behavior.md](../original-behavior.md) covers how `spel.dat` and `menu.exe` read input: all keys, game actions, cameras, key rebinding, joystick and wheel paths, sensitivity and ramps. It also covers the browser platform: touch wheel, gamepad, browser keys, full screen, safe areas, orientation, settings persistence and the effective render size. Status per feature is in [parity/input-platform.md](../parity/input-platform.md), what came from the reference ports in [reuse.md](../reuse.md).

Read this first:

- Everything marked Confirmed below is confirmed by static reading of the code and data: `research/input.md` says so itself ("Static analysis only"), unless a line says otherwise. The checks named here run the port, except reference-wine, which runs the original under Wine with Up and Down on its keyboard device. So the gas ramp, brake and reverse have a run-time observation of the original. Steering, turbo, handbrake, horn, cameras, joystick and wheel do not.
- Addresses without a prefix are `spel.dat`. `menu 0x...` is `menu.exe`.
- All checks ran on etappe 0 (Amsterdam), in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan, or in headless Node where stated. Touch came through CDP touch events, the pad through a stand-in for `navigator.getGamepads`, full screen through headless Chromium, where Esc reaches the page. Sound was checked by state only. No real phone, tablet, gamepad, joystick or wheel, and no other browser engine. Results and environments: [validation.md](../validation.md).

| Name used here | What it is |
|---|---|
| check-race-ui | `tools/check-race-ui.mjs`, 76 of 76 pass. `evidence/race-ui/summary.json` holds every sub-check by name; backticks below quote those names. Finish and game over were entered through `FUN_0044cda0` |
| check-flow | `tools/check-flow.mjs`: real clicks from the intro through a bot race at speed 8 to `TfrmResults` and back. `evidence/flow/` |
| check-driving | `tools/check-driving.mjs`: headless Node, no renderer, no opponents, keyboard device, key state set directly. `evidence/driving/amsterdam-no-opponents.json` |
| check-phone-flow | `tools/check-phone-flow.mjs`: taps on an emulated touch profile, 844x390 then 390x844, through the menus, a race on the wheel, `Stop` and `Ja`, and the Tour's screens up to the Garage. 7 of 7, printed by name. `evidence/flow-phone/` |
| check-software | `tools/check-software.mjs`: the race's 8-bit path through the real menu at 1280x720, with real clicks. 17 of 17, by name in `evidence/software/flow/summary.json`. Here only the render size on that path |
| reference-wine | `tools/reference-wine/`: the original `spel.dat` under Wine, held to 60 ticks per second from outside, memory read per tick, with the same key scripts on the port. `evidence/reference-wine/results.md` |
| form-check | Per-form browser checks with screenshots in `evidence/forms/`, landscape and 390x844 portrait; navigation through result branches with a faked `game.ini`, Garage buying, options persistence, help links, error dialog, tabs of `Geavanceerd` |
| boot-all | `tools/build-race-lists.mjs`: all 10 etappes with all 8 cars booted for 2 s in Node with no renderer, on shipped `DEVICE=1`. Not a gameplay check |
| fix check | A one-off script run when a fix was made. It is not in `tools/`, and it covers only what is said about it here |

The same machine code argument, used in many sections: InputLib, the action readers and the car code are recompiled from the original bytes. That is a real argument for their logic. It does not cover three things: x87 results are f64 and not 80-bit; clocks are virtual, so `dt` is one tick after the first ticks, with its last bit alternating; and whatever the host feeds in (key arrays, `DIJOYSTATE`, `GetAsyncKeyState`) is new JavaScript.

## Corrections to the research notes

| Note | Says | Code or run says |
|---|---|---|
| `research/input.md` H1 | Keep at most 31 keys active, because 32 active entries throw | `0x004f0df0` throws at entry when the active count is above 31, and it runs for every table entry, so 32 active is already enough unless the 32nd is the table's last entry. `CarLeft` and `CarRight` also ramp on DEVICE 1 (flag branch of `0x004f0df0`) and stay active after release: four commands with the numpad bindings. So the host reports at most 27 keys (`MAX_REPORTED_KEYS`, `source/input/keyboard.js`) |
| `research/input.md` C6 | Gas 0 to 100 nominally 1/3 s, brake 0.3125 s | Those are nominal. At 60 ticks the brake steps +5 per tick through truncation, so it takes 1/3 s, 300 units/s in effect: check-driving's log holds brake 75 at 0.25 s of braking, 15 ticks. The gas does not step +5 as `research/simulation-core.md` I4 has it: `dt*300` falls just under and over 5, so +4 and +5 mix, 21 to 23 ticks to full gas in the original under Wine and 23 in the port (`evidence/reference-wine/results.md`) |

## Controls

Current mapping in a race. The seven keys in the first six rows follow the player's settings in `Opties`; the table shows the `Standaard` values. Gamepad means a pad with the standard mapping. Devices without it: see "Platform: gamepad".

| Action | Keyboard | Gamepad | Touch |
|---|---|---|---|
| Steer left, right | Left, Right | Left stick X, D-pad left and right | Wheel, left and right |
| Gas | Up | RT or A | Wheel, upper half |
| Brake, then reverse | Down | LT, B, D-pad down or stick down | Wheel, lower half |
| Turbo | Ctrl | X | `Turbo` |
| Handbrake | Alt | RB | `Handrem` |
| Horn | Space | Y | `Claxon` |
| Cameras 1, 2, 4 | 1, 2, 4 | LB, next in the cycle | `Camera`, next in the cycle |
| Look back, held | 3 | R3 | `Terugkijken` |
| Cameras 6 to 0 | 6, 7, 8, 9, 0 | none | none |
| Reset | Enter | L3 | `Reset` |
| Roepen (the racer's voice) | T | D-pad up | `Roepen`, in landscape behind `Meer` |
| Dashboard | 5 | none, on purpose | `Dashboard`, in landscape behind `Meer` |
| Overlay detail | D | none, on purpose | `Detail`, in landscape behind `Meer` |
| Pause | P | Start | `Pauze` |
| Leave a pause | Any key except Shift, F9, F10, F11; any mouse button on the race | A, B or Start | `Verder`, or a tap on the race |
| Quit prompt | Esc, then J or Y, or Esc or N | Back, then A or B | `Stop`, then `Ja` or `Nee` |
| Leave finish table or game over | Esc, Enter, Space | A (Space), Back (Esc), L3 (Enter) | `Verder` (Space) |
| Settings panel | F9 | none | Gear button |

There is no reverse gear and no gear key. Holding brake at a standstill is how the game reverses. On macOS, Ctrl+Left and Ctrl+Right switch desktops, which hits the default turbo plus steering (`research/input.md` H8); `TfrmKeySettings` can rebind turbo. Nothing in the game says so; `README.md` does.

## Input: how the game reads devices (InputLib)

**Original behaviour.** One input pass per main-loop pass, with no input thread, timer or event.

| Order in `handle_game` `0x0044cb80` | Call | Role |
|---|---|---|
| 1 | `0x004a6700` | frame timer |
| 2 | `0x0046fdb0` → `0x004ea7d0` | polls Keyboard0, Mouse0, Joystick0, in creation order |
| 3 | `0x0044ea60` | reads actions into control struct `DAT_006fbabc`, applies to the car |
| 4 | `0x00438670` | camera keys through `GetAsyncKeyState` |
| 5 | `0x0044cf90` | reset, overlay, pause, quit, cheats |

Two key sources exist side by side:

- DirectInput device state (`GetDeviceState`), immediate mode only: keyboard 256 bytes, mouse 16, joystick 80.
- `GetAsyncKeyState` through `0x004c5e40`. It returns 0 for every key while `VK_SHIFT` is down, because no caller passes bit 0x100.

Limits: a device's active list holds 32 commands. `0x004f0df0` tests `0x1f < count` at entry and runs for every table entry, so with 32 active the next call throws `Illegal index m_NrCommands`, which ends in the fatal message box. Keyboard0 and Mouse0 must exist. DEVICE 2, 3 or 4 without a joystick is fatal: `Device Joystick0 does not exist!`.

**Evidence.** `spel.dat` `0x0044cb80`, `0x004ea7d0`, `0x004c5e40`, `0x004f0df0`, `0x004ed610`; `research/input.md` C1, C2, C3, C4. A grep of every `0x004c5e40` caller in `decompiled/game__spel.dat/functions/` matches the lists in C7 and C8. The 106-entry key table was dumped from the binary at `0x5b7a18`.

**Status.**

- Confirmed (static): the order, the two key sources, the Shift rule, the limit, the fatal paths.
- Inferred: a window that is not active stops polling, which likely hid the `NOTACQUIRED` fatal in the original (input.md, Inferred).
- Unresolved: real timing on period hardware.

**Where the port implements it.** Runs as shipped in the recompiled code. The host supplies:

- COM objects and device state: interfaces `IDirectInputA` and `IDirectInputDeviceA` in `source/host/directx.js`. Keyboard and mouse always exist; the joystick exists only when `host.joystickPresent` is set.
- `GetAsyncKeyState`: `source/host/win32.js`, returning 0x8000, through `GameInput.keyDown` in `source/input/keyboard.js`.
- Key arrays: `GameInput` and `bindKeyboard`, `source/input/keyboard.js`. A press stays visible until sampled once (`keyEvent`, `endTick`). A release and re-press within one tick stays down. An auto-repeat of a key the state does not have as down sets it (`repeatEvent`), so a key held since before the race input existed, or across a focus return, is seen.

Port changes in the host, not the game:

- A key polled more than 8 times in one tick reads as released, which ends the original's release spins. Shift is exempt: `keyDown` answers it truly on every poll, because `0x004c5e40` polls it before every other key. So the Shift rule holds for every key.
- `fillDeviceState` reports at most 27 keys to the game; the rest read as up. No effect in normal play.

**How it was compared.** Same machine code for the InputLib logic. check-race-ui drives this path: `keyboard: device 1`, `keyboard: gas`, `keyboard: steering`, `keyboard: repeat of an unseen key, re-press in a tick, Shift read every time`, `keyboard: 40 keys held do not end the race`. The last two use synthetic events or direct `keyEvent` calls. Compared with the original only through the effect of Up and Down in reference-wine, see the ramps. The polling rate is a fixed 60 per second instead of per rendered frame ([intentional-differences.md](../intentional-differences.md), Time).

## Input: game actions and bindings

**Original behaviour.** Seven actions exist: `CarLeft`, `CarRight`, `CarForward`, `CarBackward`, `CarTurbo`, `CarHorn`, `CarHandbrake` (`0x5a7db4`-`0x5a7dcc`). There is no reverse, gear, camera, pause or map action. Bindings are made once at start (`0x0046ee80`) and cannot change during a race.

`game.ini [INPUT] DEVICE` chooses the layout through `0x0046ece0`:

| Action | DEVICE 1 keyboard `0x0046d360` | DEVICE 2 joypad `0x0046d8a0`, 3+ buttons | DEVICE 2, under 3 buttons | DEVICE 3/4 `0x0046e350`, 3+ buttons | DEVICE 3/4, under 3 buttons |
|---|---|---|---|---|---|
| CarLeft | INI `LEFT` | CM_JOY_LEFT | CM_JOY_LEFT | CM_JOY_LEFT | CM_JOY_LEFT |
| CarRight | INI `RIGHT` | CM_JOY_RIGHT | CM_JOY_RIGHT | CM_JOY_RIGHT | CM_JOY_RIGHT |
| CarForward | INI `UP` | CM_JOY_BUTTON3 | CM_JOY_BUTTON2 | CM_JOY_UP | CM_JOY_UP |
| CarBackward | INI `DOWN` | CM_JOY_DOWN | CM_JOY_DOWN | CM_JOY_DOWN | CM_JOY_DOWN |
| CarTurbo | INI `EXTRA1` | CM_JOY_BUTTON1 | CM_JOY_BUTTON1 | CM_JOY_BUTTON1 | CM_JOY_BUTTON1 |
| CarHandbrake | INI `EXTRA2` | CM_JOY_BUTTON4 | `CM_KEYB_ALT`, not in the table: fatal | CM_JOY_BUTTON3 | CM_JOY_BUTTON2 |
| CarHorn | INI `EXTRA3` | CM_JOY_BUTTON2 | LCONTROL, RCONTROL | CM_JOY_BUTTON2 | LCONTROL, RCONTROL |

DEVICE 1 adds a second binding automatically (`0x0046ced0`): LCONTROL→RCONTROL, LALT→RALT, LSHIFT→RSHIFT, LEFT→NUMPAD4, RIGHT→NUMPAD6, UP→NUMPAD8, DOWN→NUMPAD2. DEVICE 3 and 4 run identical code; `Sidewinder ForceFeedback Joystick` is only a comment in `game.ini`.

Defaults: `static.ini [DEFAULTSETTINGS]`: UP 38, DOWN 40, LEFT 37, RIGHT 39, EXTRA1 17 (turbo, Ctrl), EXTRA2 18 (handbrake, Alt), EXTRA3 32 (horn, Spatie), JOYSENSITIVITY 50, WHEELSENSITIVITY 50. The shipped `game.ini` has EXTRA3=72 (H). The menu overwrites it from the player's settings before each race, so 72 applies only to a race started without the menu.

**Evidence.** `spel.dat` `0x0046ee10`, `0x0046ece0`, `0x0046d360`, `0x0046d8a0`, `0x0046e350`, `0x0046ced0`. `menu 0x0048b350` writes `[INPUT]`. `original/install/game.ini`, `static.ini`. `research/input.md` C5, C9. Spot-read in the decompile: the `0x0046ece0` dispatch and the `0x0046d8a0` button-count branch.

**Status.**

- Confirmed (static): the table, the defaults, the difference between `game.ini` and `static.ini`.
- Inferred: which physical button a player used; the pictures in `POPSTRT1..3` show the device only, no layout.
- Unresolved: nothing in this section.

**Where the port implements it.** The bindings run as shipped. The host supplies the virtual joystick and the layout choice:

- `RaceRunner.chooseDevice`, `source/race-runner.js`: keeps the DEVICE the menu wrote, except that DEVICE 1 becomes 2 when `useTouch(settings)` is true or a pad is connected. It reports `dwDevType` 0x0604 for DEVICE 2 and 0x0204 for 3 and 4, 2 axes, 4 buttons, so the under-3-button columns never run. It also reads the seven keys from `game.ini [INPUT]` into `GameInput.keys`. With `?bot` the device stays 1, so the bot's route is the same in every profile.
- `GameInput.updateJoystick`, `source/input/keyboard.js`: merges touch, pad and keys. DEVICE 2 buttons 0 turbo, 1 horn, 2 gas, 3 handbrake, with `lY` full down for brake. DEVICE 3/4 buttons 0 turbo, 1 horn, 2 handbrake, with `lY` from keys and wheel as full values, else the pad's analog value.
- Menu side: `Controls.inputDevice` and `writeControlStuff`, `source/menu/data.js`.

Keyboard in a joystick session: the player's seven keys work, from `GameInput.keys`, with the numpad second bindings (`SECOND_KEY`) and the horn. The Ctrl, Alt and Shift pairs share one VK in the host. A player on the `Toetsenbord` radio with a pad connected therefore sees the keys of `TfrmStartInfoKeyBoard` work in the race.

**How it was compared.** Same machine code for the bindings. check-race-ui: `touch: device 2 at race start, wheel shown`, `gamepad: connected at start selects device 2`, `keyboard: device 1`, `touch setting: off on a phone gives device 1, and on waits for the next race`, `gamepad session: the keyboard uses the player's keys, with lock to lock in 0.5 s`. The last calls `updateJoystick` directly with VK state set, with `LEFT` set to A and `EXTRA3` to H. boot-all booted all 10 etappes with all 8 cars on `DEVICE=1` with an empty input stub, which says nothing about play. No race ran on DEVICE 3 or 4. No comparison with the original was run.

## Input: steering, gas and brake (ramps)

**Original behaviour.**

Modes 1 and 2, `0x0046f530` (keyboard and joypad):

```
rate = 2*dt, set on CarLeft and CarRight commands, takes effect at the next device update
gas   = CarForward  > 0.5 ? min(100, (int)(gas   + dt*300)) : 0     0x46f2a0
brake = CarBackward > 0.5 ? min(100, (int)(brake + dt*320)) : 0     0x46f2e0
DAT_006fba2c = CarBackward > 0.5                                     brake light flag
steer = (CarLeft*-200 + CarRight*200) * 0.5                          = (R-L)*100
```

Mode 3, `0x0046f960` (DEVICE 3 and 4): no ramps and no brake-light flag.

```
s = CarLeft > 0 ? -CarLeft : CarRight
v = CarBackward > 0 ? -CarBackward : CarForward
i = (int)(v*100);  i > 0: gas = i, brake = 0;  else gas = 0, brake = -i
f = ((100 - SENSITIVITY) + 25) * 0.04;  if f == 0: f = 5
steer = s*100 / f, then clamped to ±100
```

| Quantity | Value | Note |
|---|---|---|
| Digital steering | 200 units/s on press and release | Full lock 0.5 s |
| Lock to lock, digital | 400 units/s | One side falls while the other rises: 0.5 s |
| Gas, nominal | 300 units/s, then 0 at once on release | Truncated to int every frame |
| Brake, nominal | 320 units/s, then 0 at once on release | Truncated to int every frame |
| Gas at 60 ticks | `dt*300` just under or over 5, so +4 and +5 mix. Original under Wine: 21 to 23 ticks (5, 9, 13, 18, 22, 27...). Port: 23 ticks, 0.383 s (4, 9, 13, 18, 22, 27...), by the last-bit alternation in `hook!updateClock`. With a fixed `dt` it took 19 ticks | `evidence/reference-wine/results.md` |
| Brake at 60 ticks | +5 per tick, 0.333 s | Truncation of 5.33, so 300 units/s in effect, not 320 |
| Analog steering, mode 2 | steer = x*100, no slew, no sensitivity | The ramp fields are ignored for analog commands (`0x004f0c60`) |
| Steer to car | `steer * 0.006666667` rad | `0x004a31d0`, `0x5765f4` |

There is no reverse key. Holding CarBackward from a standstill drives backward. `0x0046f330` (speed-dependent steering) has no references and is dead code.

**Evidence.** `spel.dat` `0x0046f530`, `0x0046f2a0`, `0x0046f2e0`, `0x0046f960`, `0x004f0df0`, `0x004f0c60`, `0x00428c70`. `research/input.md` C6. `research/simulation-core.md` C6, I4. The first four were read in the decompile.

**Status.**

- Confirmed (static): the formulas and the constants.
- Measured on the original under Wine, one setup, at 60 ticks per second: gas ramp, reverse and brake, see below.
- Inferred: reverse is the brake torque of opposite sign through car vtable +0x20 (input.md, Inferred). check-driving shows that the recompiled car does reverse this way. Brake lights stay off in modes 3 and 4 because mode 3 never writes `DAT_006fba2c`.
- Unresolved: which frame rate the ramps were tuned at. See [sim-timing.md](sim-timing.md).

**Where the port implements it.** Runs as shipped in the recompiled code. The host supplies `dt` (`hook!updateClock`, `source/host/race.js`) and the device state. One host-side ramp exists, for the player's keys in a joystick session, in `GameInput.updateJoystick`: each side ramps by itself at `2*dt` and `steer` is right minus left, as `CarLeft` and `CarRight` do. So full lock takes 0.5 s and lock to lock 0.5 s, as on DEVICE 1.

**How it was compared.** Same machine code for the formulas, with the port's `dt` and f64 x87.

check-driving, keyboard device, regime 22222 on its first launch: 6.26 m/s at 1 s, 17.29 at 4 s, 23.70 at 8 s of gas; full left at 17.4 m/s, yaw rate 23.8 degrees per second, side speed 1.05 m/s; brake from 16.9 m/s to 0 in 1.3 s; reverse to -27.89 m/s in 3 s, steering while reversing, forward again. Its log holds brake 75 at 0.25 s and steer -100 at 0.5 s of full left, which fit the table above, but no criterion was set for ramp timing.

check-race-ui: `keyboard: gas` (20.64 m/s, gas 100), `keyboard: steering` (steer -80 after a nominal 0.4 s; it asserts only that steer is not zero), `touch: wheel up is gas, car accelerates` (17.28 m/s, gas 100), `touch: wheel down brakes, then reverses` (fastest backward -12.61 m/s over 6 s of samples, brake 100; the car can meet something behind it), `gamepad: right trigger is gas, small stick stays in the deadzone` (17.32 m/s), `gamepad session: ...` (left lock after 30 ticks, centre after 15 more, right lock after 15 more). Its waits are wall-clock waits, so these speeds are not handling measurements. The keyboard read 20.64 m/s against touch's 17.28 and the gamepad's 17.32 for the same nominal 4 s. Inferred: those are the launch regimes, about 20.7 and 17.3 m/s at 4 s, and not the input device. The check does not read the movement state.

reference-wine, the original under Wine against the port, at 60 ticks per second on the keyboard device: gas 0 to 100 in 21 to 23 ticks against 23; speeds at 1, 4 and 8 s by movement state, means, at most +2.05%, +0.44% and 0.18%; reverse limit -27.79 (22222) and -27.91 (11111) against -27.79 and -27.90; brake from 24.1 m/s to zero at 1.73 s in both before the clock changes, and at 1 s 10.24 against 10.42 m/s now. Details: [validation.md](../validation.md). Brake ramp timing and steering were not measured on the original, and mode 3 was never run.

## Input: sensitivity

**Original behaviour.** `SENSITIVITY` is used only in mode 3, with no clamp. It divides steering; it does not shape it.

| SENSITIVITY | f | Steer at full deflection | Angle to car (rad) |
|---|---|---|---|
| 0 | 5 | ±20 | ±0.133 |
| 25 | 4 | ±25 | ±0.167 |
| 50 (default) | 3 | ±33.3 | ±0.222 |
| 75 | 2 | ±50 | ±0.333 |
| 100 | 1 | ±100 | ±0.667 |

The menu writes `JoySensitivity` for keyboard, joystick and gamepad, and `WheelSensitivity` for the wheel (`menu 0x004a6a70`). Slider: Min 0, Max 100, LargeStep 5, repeat 50 ms after 250 ms.

**Evidence.** `spel.dat` `0x0046f960`, `0x0046ee10`. `menu 0x004a6a70`, `0x0046ad20`, `TFRMSLIDERSETTINGS.dfm` (`sldrSensitivity` LargeStep 5, Min 0, Max 100, in `public/assets/menu/forms.json`). `research/input.md` C6, C9, C13.

**Status.** Confirmed (static): the formula, the table, the writer. Unresolved: LEESMIJ.HLP warns about moving the wheel after pressing start; no calibration exists in code, so the cause it describes is unknown (input.md, Unknown).

**Where the port implements it.** Formula: as shipped. Sliders: `TfrmSliderSettings`, `TfrmWheelSettings`, `TfrmJoyStickSettings`, `source/menu/forms/group-options.js`. Writer: `Controls.sensitivity`, `source/menu/data.js`. A note was added below the original text (`padNote`): `In de browser werkt een gamepad als stuur.` and `...als joystick.`

On the `Joystick` and `Stuur` radios everything that steers goes through mode 3, the pad and the touch wheel too. So full deflection gives ±33.3 at the default 50, read from the code and not run.

**How it was compared.** Same machine code for the formula. form-check loaded both slider forms with screenshots (`evidence/forms/joysticksettings.png`, `wheelsettings.png`) and covered options persistence. No check drove a race on DEVICE 3 or 4, so no sensitivity value was seen acting on a car.

## Input: turbo, handbrake, horn

**Original behaviour.** `0x0046f050`, both modes:

- Handbrake: `ctrl+0x18 = CarHandbrake > 0`. Sink: car vtable +0x2c(wheel, 1) on wheels 2 and 3; front friction capped at 2.0.
- Turbo: `0x0044e970(car, CarTurbo > 0)`, only in state 0. Updates every 100 ms by `GetTickCount`. Each update uses 1 of `DAT_006fba74`, unless `DAT_006c2f28` is set. The turbo byte forces gas 100 in `0x00427b90`.
- Horn: while `CarHorn > 0`, plays `HORN2` each frame. Traffic reads the same action (`0x00423040` → `0x004237b0`).

The read is gated: `DAT_006fba9c` and `DAT_006fb8c0` are 0 until the countdown reaches GO. In states 3, 6 and 8, gas, brake and turbo are forced to 0, not steering.

**Evidence.** `spel.dat` `0x0046f050`, `0x0044e970`, `0x00427b90`, `0x0044ea60`, `0x0043c3d0`. `research/input.md` C6.

**Status.** Confirmed (static): all of the above. Inferred: `DAT_006c2f28` is the fast-forward pickup state; handbrake is read as locking the rear wheels (input.md, Inferred).

**Where the port implements it.** Runs as shipped. The host supplies buttons or keys: DIK on DEVICE 1, `rgbButtons` on the others (`GameInput.updateJoystick`). On-screen: `Claxon`, `Turbo`, `Handrem`. Pad: Y, X, RB.

**How it was compared.** Same machine code. check-race-ui `touch: steering and turbo together` and `touch: wheel, turbo and handbrake together, each lifted by itself` show the button bits reaching the input state together with steering and gas (masks 9, then 8: turbo and handbrake, then handbrake alone). `gamepad session: ...` shows the player's horn key setting button 1. None of them measured the car's turbo or handbrake effect, and no check listened to or read the horn.

## Input: race keys that cannot be rebound

**Original behaviour.** Manual, topic `Toetsenbord instellen`: `Let op: de camera, reset-knop en dashboard-knop zijn niet instelbaar.` L = level each pass; E = rising edge.

| Key | API | Trigger | Gate | Effect | Evidence |
|---|---|---|---|---|---|
| 5 | DI `CM_KEYB_5` | E | none | `DAT_00712784` 0→1→0 with tweak off. Manual: `Dashboard aan/uit` | `0x44d823` |
| D | DI `CM_KEYB_D` | E | none | `overlay_detail` `DAT_006fb924` +1, above 1 back to 0. Starts at 3 from `game.ini`, so first press gives 0 | `0x44d990` |
| Enter | DI `CM_KEYB_RETURN` | E | 5000 ms lockout | `0x0040e5a0(player, chunk, 1)`: reset, text 66 `RESET (ENTER/RETURN)`. Text 68 `DRUK ENTER/RETURN VOOR RESET` after 10 s without wheel contact | `0x44d705`, `0x44cc9f` |
| T | DI `CM_KEYB_T` | E | after the read gate | `0x0041be70(radio, 9, player, -1)`: voice sample from the racer's list | `0x0044ea60` |
| CTRL+SPACE+T | VK | L | `(&DAT_006fa58c)[etappe*0x25] == 0` | timer 0xb to 100000 ms, text 44 `EXTRA TIJD` | `0x44d584` |
| CTRL+SPACE+I | VK | L | none | `DAT_006fb96c = 1`, text 46 `INVINCIBLE` | `0x44d5dd` |
| CTRL+F10 | VK | L | none | writes `lvl%2.2d_%2.2d.bmp` every frame while held | `0x00458270`, `0x00458400` |
| F11 | VK | L | spin not gated | busy-waits in `0x00419600` while held; the action behind it needs tweak mode | `0x00419600` |

Radar and map have no key.

**Evidence.** Addresses in the table; `research/input.md` C7; `research/gameplay-systems.md` section on reset and cheats; `public/assets/menu/menu-help.json` topics 32, 41, 44 for the manual text. `original/install/game.ini` `overlay_detail=3`.

**Status.**

- Confirmed (static): the table.
- Inferred: `T` is a player voice taunt (the name is the analyst's). Timer 0xb is the time-limit timer.
- Unresolved: reachability of `F` in `0x0042c710` (wheel bounce); its caller is the object callback at +0x70, no call site found.

**Where the port implements it.** Runs as shipped on the keyboard. The host passes all keys except F9, F10 and F11 (`MASKED`, `source/input/keyboard.js`): F10 and F11 as recorded in [intentional-differences.md](../intentional-differences.md), F9 because it is the port's settings key. On touch, `Reset`, `Roepen`, `Dashboard` and `Detail` set the key's VK and DIK while pressed (`TouchControls.bindKey`, data in `source/index.html`). On the pad, L3 pulses Enter and D-pad up pulses T (`GamepadInput.pollRace`). Dashboard and Detail have no pad button, on purpose: every standard button is then in use. Text 68 stays as shipped, so on touch and pad it names Enter while the control is `Reset` or L3.

Ctrl+T cannot be intercepted by desktop browsers, so CTRL+SPACE+T may not be reachable there (`input.md` H7, H8). In full screen `App.fullscreenChanged` asks `navigator.keyboard.lock` for T, N and W where it exists; its effect was not checked.

**How it was compared.** Same machine code. check-race-ui: `touch: Reset places the car back, with the wheel held and still held after` and `gamepad: left stick click resets the car` (reset stamp at `0x5d1b00` changes); `touch: Meer shows Roepen, Dashboard and Detail, which work` (dashboard 0, 1, 0; detail 3, 0, 1; for `Roepen` only that DIK 0x14 was set, not the voice); `gamepad: D-pad up calls, D-pad down and stick down brake` (a pulse of VK 0x54, not the voice). check-driving: Enter reset, by a pulse of the key, with the car back on the road. No check pressed the keyboard's own 5, D or T, or the cheat keys, and the 5000 ms lockout was not measured. No comparison with the original was run.

## Input: pause, quit and result prompts

**Original behaviour.**

| Prompt | Enter it | Leave it | Evidence |
|---|---|---|---|
| Pause, overlay mode 2, `Pauze / Druk een toets` | VK P, not in states 3, 6 | Spin: P released, then one sweep over VK 0..255 that waits for each key found down, repeated until a key was seen. Includes VK 1 and 2, the mouse buttons. Shift alone cannot resume, since `0x004c5e40` returns 0 while it is down | `0x44d9eb`, `0x0044c990` |
| Quit, overlay mode 3, `Wilt u echt / stoppen!? (J/N)` | VK Esc, not in states 3, 6 | Spin: Esc released, then J or Y (state 4, race ends) or Esc or N (wait for Esc release, resume). After N only Esc is waited for | `0x44d9ba`, `0x0044c9f0` |
| Finish, state 3 | | Esc, Enter or Space after 1500 ms, then a spin until all three are released | `0x0043ac80` |
| Game over, state 6 | | Esc, Enter or Space after 1000 ms | `0x0043bd60` |

Around pause and quit, `0x0044ca80` pauses timers 0, 3, 0xb and six more (`0x0042e440`), sets mixer line 4 to 0, waits, restores it and resets the frame timer. `0x0044cb80` flips twice more with nothing drawn before the wait, so the prompt stays on screen. `GetTickCount` runs on through the blocking dialog.

**Evidence.** Addresses above, all read in the decompile. `research/input.md` C7, C12. `research/hud-overlay.md`, post-race and pause paragraphs. `research/gameplay-systems.md` sections on pause and quit.

**Status.** Confirmed (static): keys, gates, order. Inferred: mixer line 4 is the master output.

**Where the port implements it.**

- `0x0044ca80` is replaced by `hook!pauseBegin`, and its waits become `Race.pollPause` and `Race.endPause`, `source/host/race.js`, one step per tick. `pollPause` follows `0x0044c990` and `0x0044c9f0`: Shift masks every key, one sweep waits for each key, and after N or Esc only Esc is waited for.
- Only the race clocks stop, as in `0x0044ca80`: `Race.tick` advances the virtual clock in its pause branch. Traffic light, timed bonuses, HUD messages, respawns and the reset lockout run on, so a timed bonus can run out during a pause. A hidden tab, lost focus and the settings panel stop everything, which is a difference on purpose.
- The picture stays on the key tick's frame on any display rate: `RaceRunner.frame` keeps that tick's capture and presents at alpha 1 under a dialog.
- A mouse button on the race, or a tap, resumes a pause once released (`RaceRunner.canvasPress`, `canvasRelease`): buttons 0 to 4 set VK 1, 4, 2, 5, 6. The context menu is blocked on the canvas. `vkOf` holds NumLock, ScrollLock, PrintScreen, Meta and ContextMenu, so those keys resume too. F9, F10 and F11 are masked and do not.
- `0x0043ac80` and `0x0043bd60` run as shipped. Their spin ends because `keyDown` reads a key as released after 8 polls in a tick. `RaceRunner.endWait` then does what the spin did: it keeps the last frame until VK 0x1B, 0x0D and 0x20 are all up. It has a 5 s safety limit the original does not have, so a key-up the browser swallowed cannot hold the page.
- Into the menu: `App.startRace` sets `menu.ignoreRepeat`, and `MenuRuntime.staleRepeat` ignores auto-repeats until the first new press. `App.showMenu` calls `GamepadInput.resync`, so a pad button held since the race counts only after its release.
- Touch: `Pauze`, `Stop`, and `Ja`, `Nee`, `Verder` while a prompt is open (`RaceRunner.updateDialogKeys`), all through `TouchControls.bindKey`, so cancel and lost capture release them. On the finish table and game over (`OVERLAY_STATE` 5, 6, 7, 12, `RESULT_OVERLAYS`) the root gets class `race-results`: wheel, action buttons and column disappear and one `Verder` is shown, bottom right in landscape, bottom centre in portrait. It stands for Space.
- Pad: Start pauses, Back asks to quit. In a dialog A confirms or resumes and B declines, by VK 1 at pause and J or N at quit. On the result screens A pulses Space, and a press held since driving does not count. Back and L3 also leave those screens, because the game's wait takes Esc and Enter.
- Mouse users in full screen get `#race-stop` beside the gear (`RaceRunner.updateStop`); a prompt opened with it gets `Ja` and `Nee` (`dialogByPointer`).

**How it was compared.** check-race-ui on the keyboard: `pause: P stops the race clocks, the wall clock runs on`, `pause: the picture stays still` (98 presents, all alpha 1), `pause: Shift alone resumes nothing, and masks other keys`, `pause: any key resumes, and the race clock goes on from where it stood`, `pause: a mouse button on the race resumes, once released`, `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release`, `quit dialog: J ends the race, finished=0`, `full screen: Stop asks, and Nee answers on screen`.

Result screens, entered through `FUN_0044cda0`: `finish: wheel and actions gone, Verder shown`, `finish: Verder ends the race, which waits for the finger to lift`, `game over: Enter ends it, the race waits for its release, and the menu ignores repeats`, `finish: pad A held does not skip it, a new press does`, `menu: a pad button held from the race counts only after its release`.

These check state. The screenshots `evidence/race-ui/pause.png` and `quit-dialog.png` from the same run show the prompt text over the still race picture; that was looked at by eye and is not asserted by the tool. check-phone-flow tapped the touch `Stop` and `Ja`: `Stop and Ja return to the menu, finished=0`. Y and Esc as quit answers, a tap on the race, `Pauze`, and Back or L3 on a result screen were not run. check-flow reached `TfrmResults` after a whole bot race. How it left the finish table there is inferred: the bot pulses Enter when stuck (`Bot.tick`, `source/dev/bot.js`), and check-flow does not assert that.

## Input: cameras

**Original behaviour.** Keys are polled each pass with `GetAsyncKeyState` in state 0 (`DAT_006fb8a0 == 0`) by `0x00438670`, and each key selects a view directly through `0x004390d0`. Nothing cycles.

| Key | View id | Manual name | Offset (x, y, z), mode |
|---|---|---|---|
| 1 | `DAT_006fba5c + 5`, so 5..0xD by car, also the race default (`0x0043c5d0`) | `Dynamische camera` | 5..9, 0xB: 0, 26, -33. 0xA: 0, 33, -33. 0xC: 0, 40, -40. All mode 1. 0xD: 0, 45, -55, mode -1 |
| 2 | 0 | `Statische camera` | 0, 30, -80, mode -1 |
| 3 (hold) | 4, back to the saved view on release (`DAT_00599728`) | `Achteruitkijk camera` | 0, 20, 75, mode -1 |
| 4 | 3 | `Bumper camera` | 0, 15.5, 12, mode -1; car hidden, up from the car matrix |
| 6, 7, 8, 9, 0 | 6, 7, 8, 9, 10 | none | 6..9: 0, 26, -33. 10: 0, 33, -33. All mode 1 |
| U, tweak only | 0xE free camera | none | |

View 0xC belongs to car 7, which has a route since the car update. Car 8, and so view 0xD, still has none.

Camera slot 7 runs `0x00439910`, the free camera, which reads U, I, J, K, L, A, Z, PgUp, PgDn, Home, End, Ins, Del, R, T. The only direct call that selects slot 7 is `0x00438410(7)` in `0x004397f0`, reached by view 0xE, which key U selects only in tweak mode. Pressing key 7 selects view id 7 in slot 0, not the free camera.

**Evidence.** `spel.dat` `0x00438670`, `0x004390d0`, `0x00439910`, `0x0043c5d0`. `research/simulation-core.md` C8; `research/input.md` C7, C8. `0x00438670` read in the decompile.

**Status.** Confirmed (static): keys and view ids. Manual names come from `Handleiding` as cited by `simulation-core.md`. Unresolved: why views 6..10 are shipped and not in the manual.

**Where the port implements it.** Runs as shipped; the host supplies VK keys. On-screen `Camera` and pad LB pulse the next of keys 1, 2, 4 from the view in use, read at `DAT_00599c80` (`GameInput.nextCameraKey`): view 0 gives key 4, view 3 gives key 1, any other gives key 2. That cycling is a port addition: the original selects directly. `Terugkijken` and R3 hold VK 0x33 and DIK 0x04. Keys 6 to 0 have no touch or pad control.

**How it was compared.** Same machine code for selection. check-race-ui: `touch: Camera goes through 2, 4, 1, and on from what a key chose` (views 0, 3, 5; key 4 gives view 3, the next tap view 5), `touch: Terugkijken holds view 4, the release restores` and `gamepad: right stick click holds the view behind` (views 5, 4, 5). These read the view id; no offset was measured. Pad LB was not pressed. Interpolation of camera matrices and the camera numbers belong to [sim-timing.md](sim-timing.md) and [render.md](render.md).

## Input: key rebinding and CONTROLKEYS

**Original behaviour.** `TfrmKeySettings` binds seven keys. Click a key's button, then press a key.

- `KeyPreview`: the form sees the key first. The key is looked up in `menu.ini [CONTROLKEYS]`, `count=65`. Not found: `MessageBeep(0)` and the edit is cancelled. Found: stored. Focus loss cancels.
- OK: duplicate check across the seven keys (`menu 0x004925dc`). A duplicate shows `De toets '%s' is dubbel gebruikt!` and the dialog stays open.
- `Standaard`: loads all ten `TControls` fields from `static.ini`, so sensitivities reset as well, and horn becomes Spatie.
- Storage: `TControls` in the player's save, written to `game.ini [INPUT]` by `WriteControlStuffToIni` at race start.

Not selectable: digits, Enter, Esc, function keys, `d`, `p` (`*37=68,d   d is used by game engine`, `*49=80,p   p is used by game engine`). VK 108 (`separ`) can be chosen but is fatal in `spel.dat`, because `0x00469ff0` does not have it: `Cannot find key(s) in keyboardmap!`.

**Evidence.** `menu 0x00491d84`, `0x00491e64`, `0x00491ef8`, `0x00491f28`, `0x004925dc`, `0x00492644`, `0x0048b350`, `0x004a6b3c`. `spel.dat` `0x00469ff0`, `0x0046cd60`. `original/install/menu.ini`, `static.ini`. `research/input.md` C9, C10, C13. All 65 `[CONTROLKEYS]` entries were joined by script with the C10 table and `vkOf`: only `<None>` (VK 0) and `separ` (VK 108) have no game key, and `vkOf` never returns 108.

**Status.** Confirmed (static): all of the above. Inferred: in the original, Enter and Esc may reach the dialog keys before `FormKeyDown` (CN_KEYDOWN, not traced). In the port they count as keys outside the list.

**Where the port implements it.** `TfrmKeySettings`, `source/menu/forms/group-options.js`. `vkOf`, `source/input/keyboard.js`. `readControlKeys`, `isControlKey`, `source/menu/data.js`. The beep is a short tone standing in for `MessageBeep(0)` (`messageBeep`), through the master output. Bound keys reach the game through the original readers on DEVICE 1, and through `GameInput.updateJoystick` in a joystick session.

**How it was compared.** form-check loaded the forms with screenshots (`evidence/forms/keysettings.png`, `startinfokeyboard.png`) and covered options persistence. `doublekeys.png` was taken after the last change of that form. check-race-ui `gamepad session: ...` shows custom keys acting on the virtual joystick when set directly. No check rebound a key in the dialog and then drove with it. No comparison with the original was run.

## Input: joystick and wheel device paths

**Original behaviour.** `Joystick0` through DirectInput 5, immediate mode, `SetCooperativeLevel(hWnd, 6)` (non-exclusive, foreground).

```
x = lX / ((Xmax-Xmin) sar 1) - 1      0x004ef650
y = 1 - lY / ((Ymax-Ymin) sar 1)      inverted: lY = 0 gives y = +1
z = lZ / ((Zmax-Zmin) sar 1) - 1      Z range never read
```

Axis to command, chosen by `dwDevType` (`0x004f0540`):

| dwDevType | Path | Behaviour |
|---|---|---|
| exactly `0x404` | digital `0x004f0450` | `x > 0.5` RIGHT pressed, `x < -0.5` LEFT pressed, through the ramp. Same for UP and DOWN on y |
| anything else | analog `0x004ef6e0` | RIGHT = x or LEFT = -x, UP = y or DOWN = -y, all direct. Always 7 active entries |

Commands: `CM_JOY_X_AXIS, Y_AXIS, Z_AXIS, LEFT, RIGHT, UP, DOWN, BUTTON1..32`. Force feedback: none. Deadzone: none. Calibration: none; the help sends the user to the Windows control panel. Z axis: not bound by anything.

Menu radios: `optKeyboard` ControlType 0 → DEVICE 1; `optJoystick` 1 → DEVICE 3; `optJoyPad` 2 → DEVICE 2; `optWheel` 3 → DEVICE 4. `Instellen` is disabled for the gamepad.

**Evidence.** `spel.dat` `0x004f0560`, `0x004ef650`, `0x004f0540`, `0x004f0450`, `0x004ef6e0`, `0x004f0790`, IAT `0x00576018`. `menu 0x004a6a38`, `0x004960fc`, `0x00496480`-`0x004965a0`. `research/input.md` C3, C4, C9, C11.

**Status.**

- Confirmed (static): formulas, path choice, no force feedback, no deadzone, no calibration, the radio table.
- Inferred: a HID gamepad reporting `0x10404` takes the analog path, so original gamepad behaviour varied by driver.
- Unresolved: what real hardware reported on period drivers.

**Where the port implements it.** Formulas and paths: as shipped. Virtual device: `GetCapabilities`, `GetProperty` (lMin 0, lMax 65535), `GetDeviceState` in `source/host/directx.js`. State: `GameInput.fillDeviceState`, `lX = round((steer+1)*32767)`, `lY = round((1-y)*32767)`. Radios: `TfrmOptions`, `source/menu/forms/group-options.js`.

The port always reports `dwDevType` 0x0604 or 0x0204, so the digital path `0x004f0450` is not reachable and D-pad steering is full lock at once; this differs from `input.md` H4 only in the dwDevType it names for the gamepad and wheel radios, and any value but 0x404 takes the analog path. The host-side deadzone, default 0.18, sits in front of the game. A device without the standard mapping is read by button number as the game binds it on each DEVICE, and its stick Y is `CM_JOY_UP` and `CM_JOY_DOWN` (`GamepadInput.pollRace`). So a real joystick's Y axis is gas and brake on the `Joystick` and `Stuur` radios, as in the original. This was not tried on real hardware.

**How it was compared.** Same machine code for the formulas. check-race-ui ran DEVICE 2 through the wheel and through a stand-in for `navigator.getGamepads`. `gamepad: a non-standard device goes by button number` read the pad flags on DEVICE 2 only. A fix check read `pad.y` for DEVICE 3 and 4 as flags, by one-off script. No race ran on DEVICE 3 or 4. No real device. No comparison with the original was run.

## Input: debug keys and console

**Original behaviour.** Gate `DAT_006fb950`, written only at `0x00449543` from `RASER.INI [helpdesk] tweak_mode`. Shipped: `TWEAK_MODE=0`. With that value these are inert: Comma, Period (FPSMULT ±0.01), M (camera target), Numpad + − (FOV), F1..F7 (AI debug toggles), F12 (FPS print), Y, C, F (dump), CTRL+SPACE+C (tweak menus), U with mouse offset, the free-camera keys, and the console. Console: `Console_Activate` on tilde, commands `name value`, one variable registered, `Invulnerable`. Mouse values are read only there.

Keys read with no live path: `0x0041db90` (F, G, H), `0x00427d86`, `0x0046f330`, `0x004288b5`, `0x004702c0`. `0x00428c70` tests VK O and ignores it. `0x0048f250` (X, Z) needs `communi.ini` `testmode` and `testmessages`, both false.

**Evidence.** `spel.dat` addresses above; `original/install/raser.ini` `TWEAK_MODE=0`; `research/input.md` C7, C8.

**Status.** Confirmed (static). Unresolved: effect of `0x0043fc90` and `0x004a4600`, not read.

**Where the port implements it.** Runs as shipped and stays off, because the data keeps `TWEAK_MODE=0`. The mouse device returns zeros (`GameInput.fillDeviceState`). No UI was added.

**How it was compared.** No comparison was run. The tweak paths were not exercised.

## Input: blocking code, focus and message pump

**Original behaviour.** `0x00458020`: a `PeekMessageA` loop. While `DAT_00740dfc == 0` (`WM_ACTIVATEAPP`) it calls `WaitMessage`, so an inactive game stops completely. On return it restores surfaces and does not reset the frame timer. Race timers use `GetTickCount`, so wall-clock time passes. WndProc `0x004cd6b0` hides the cursor on `WM_SETCURSOR` (`SetCursor(0)`). Spins with no message pump: `0x0044c990`, `0x0044c9f0`, `0x0043ac80`, `0x00419600`.

**Evidence.** `spel.dat` `0x00458020`, `0x004cd6b0`, `0x0044ca80`. `research/input.md` C12. `research/win32-surface.md` C2.

**Status.** Confirmed (static). Inferred: alt-tab in the original avoided the `NOTACQUIRED` fatal because polling stopped.

**Where the port implements it.**

- `RaceRunner.setFocus` and `visibility`, `source/race-runner.js`: ticks stop, sound suspends, keys and touches clear; the clock does not jump on return. `RaceRunner.holdsSound` is the one test for whoever could resume sound: gesture unlock, focus and the panel. `bindKeyboard` also clears on blur, `pagehide` and hidden. `WM_ACTIVATEAPP` 1 comes at `ShowWindow`, `source/host/win32.js`.
- `SetCursor` is a no-op in the host. The canvas gets class `no-pointer` from race start (`cursor:none`, `source/style.css`). A difference on purpose: `RaceRunner.showPointer` brings the pointer back for 2 s when the mouse moves, because the gear button needs it.

**How it was compared.** check-race-ui: `focus: clock stops, sound suspends, input clears`, `focus: resumes without a jump`, `hidden tab: clock stops and resumes`, with a touch held when focus was lost; these dispatch `blur` and `visibilitychange` by script, with `document.hidden` stubbed. `pointer: none over the race, back for 2 s on a move` reads the computed cursor. The original keeps wall-clock timers running while blocked and the port does not; that difference is recorded and no measurement was made.

## Input: menu keyboard and mouse

**Original behaviour.** `menu.exe` has no `DINPUT` import and no `joyGet*`. Ordinary VCL mouse and keyboard.

| Control | Input | Evidence |
|---|---|---|
| `TfrmIntro` | Any key except Space, any mouse button: stop the player, close | `menu 0x004a4a78`, `0x004a4ad8` |
| `TGDIButton` | Enter on default or focused; Esc on Cancel; Tab order; caption accelerator | `menu 0x00468418`, `0x00468380` |
| `TDaviGraphicSlider` | Left/Down -1, Up/Right +1, PgUp +5, PgDn -5, Home = Max, End = Min, repeat 50 ms after 250 ms | `menu 0x0046ad20` |
| `txtName` | MaxLength 12, Enter = OK | `menu 0x00494d44`, `0x00494fb0` |
| Start info | `SHOWSTARTINFO`. Keyboard: `TfrmStartInfoKeyBoard` with current key names. Others: `TfrmStartInfo` with `POPSTRT2`, `POPSTRT1`, `POPSTRT3` | `menu 0x0049812c`, `0x00497818` |
| `TfrmException2` | Ctrl+C copies | `menu 0x004a808c` |

Only one `&` accelerator exists in the shipped forms: `&Details >>` on `TfrmException2` (scan of `public/assets/menu/forms.json`).

**Evidence.** Addresses above; `research/input.md` C13.

**Status.** Confirmed (static). `TFRMMAINSCREEN.dfm` holds `PopupMenu1` (`Money = 300`, `At last track`, `Unlock supercop`), and no DFM assigns it to a control, so it is unreachable.

**Where the port implements it.**

- `Form.keyDown`, `Button.keyDown`, `Slider.keyDown`, `MenuRuntime.bind` in `source/menu/framework.js`.
- `TfrmIntro.userAction` in `source/menu/forms/group-main.js`. `App`'s `visibilitychange` handler pauses and resumes the intro video in a hidden tab.
- `TfrmStartInfo` and `TfrmStartInfoKeyBoard`, `TOUCH_NOTE`, in `source/menu/forms/group-dialogs.js`; `startInfoThenRace`, `source/menu/flow.js`. The note names all on-screen buttons and says that in landscape the last three are under `Meer`. Portrait shows them all. `evidence/flow-phone/06-start-info.png` shows the note.
- `TfrmException2` is an HTML panel in `group-dialogs.js`, without the Davi-Service option. It keeps Ctrl+C on the details. It has no `Alt+D` for `Details >>`.
- Pointer cancel: `pointercancel` and `lostpointercapture` have their own path through `Form.pointerCancel`, with no click. One pointer per press, pinned to its form; another finger counts for nothing during a press; a form closing drops its press.
- Key repeat after a race: `MenuRuntime.staleRepeat`, also in the name field.
- Pad (a port addition; the original menu has none): `GamepadInput.pollMenu` from `App`'s frame loop, D-pad or stick to move, A Enter, B Esc, RB Tab, without auto-repeat. `MenuRuntime.lastInputPad` records that the last input came from the pad. `askPlayerName`, `source/menu/flow.js`: OK from a pad on an empty name gives `Speler 1`, or the next free number, because a pad cannot type. With keyboard or touch the dialog keeps asking, as the original. `PlainRadio` in `Geavanceerd`: arrow keys select as in Windows; from a pad they only move and A selects.

**How it was compared.** form-check: every form loaded with screenshots, navigation through result branches using a faked `game.ini`, Garage buying, options persistence, help links, error dialog, tabs of `Geavanceerd`. check-flow: real clicks through the flow on Amsterdam, including keyboard Enter on the intro and on new player. check-race-ui: `menu: a pad button held from the race counts only after its release`, `intro: pauses in a hidden tab, goes on when shown`. Fix checks, by one-off scripts: pointer cancel with CDP touch cancel and synthetic pointers, including a slider's repeat timer; a stand-in pad from the intro onward for the default name; synthetic repeat keydowns on `TfrmHighScoreDlg` and `TfrmCloseDlg`. One such script's case "first finger up clicks its own button" failed, which was put down to CDP ending all touches; the case passed with synthetic pointers only. Ctrl+C in the error dialog was not run. No comparison with the original was run.

## Platform: touch wheel

**Original behaviour.** The original has no touch input. The brief requires the RedCat SuperKarts wheel graphic and interaction, with A2 Racer 4's steering, reversing and acceleration behind it.

Reference interaction (`RedCat Superkarts/source/input.js`, `touchWheelInput`, `bindSteeringWheel`): absolute X and Y position on the wheel, not a circular gesture. Deadzone 0.1 per axis. Sensitivities 0.2 for steering and 0.65 for drive. In fractions of the wheel box: neutral within 5% of the centre on each axis, full steer from x = 0.91 and drive full from y = 0.29. One pointer owns the wheel, kept by pointer capture, and it stays assigned when the finger leaves the box.

Original path that the wheel feeds (DEVICE 2): `lX` → `0x004ef650` → `0x004ef6e0` `CM_JOY_LEFT/RIGHT` → `0x0046f530` steer = x*100 → `0x00402de0` clamp → `0x00428c70`. Gas through BUTTON3 and the 300 units/s ramp; brake through `CM_JOY_DOWN` > 0.5 and the 320 units/s ramp; reverse from there.

**Evidence.** Reference: `RedCat Superkarts/source/input.js`, `docs/research-touch-controls.md`. Target path: `research/input.md` H5, C5, C6. Identity against the final source: SHA-256 of `steering-wheel.svg` and `brake-pedal.svg` equal in both projects; `touchWheelInput` and `axisDeadzone` of both projects give identical output on 70,531 and 6,002 sample points. Full comparison: [reuse.md](../reuse.md).

**Status.** Confirmed: the graphic is byte-identical, the response function is numerically identical, and the event logic is a transcription apart from the differences listed in reuse.md. Inferred: gas on/off is the right fit, because `CarForward` on DEVICE 2 is a button (input.md H5). Unresolved: feel on a real phone.

**Where the port implements it.** `TouchControls.bindWheel`, `touchWheelInput`, `axisDeadzone`, `push`, in `source/input/touch.js`. Markup: `#touch-wheel` in `source/index.html`. Style: `#touch-wheel` rules and `--wheel-size`, `--wheel-left`, `--wheel-bottom` in `source/style.css`. Art: maintained in `source/assets/touch/`, with its notice and the CC0 text, copied to `public/assets/touch/` by `prepare_touch` in `tools/prepare-assets.py`, which records path and SHA-256 in `public/assets/asset-map.json`. Into the game: `GameInput.updateJoystick`.

Wheel steering is direct, as the game's analog path has no slew. The drive axis is on/off, because DEVICE 2 reads gas as a button and the game's ramp shapes it. The lifecycle follows the reference: a release registry per pointer (`TouchControls.releases`), a mouse button filter, `GameInput.clear` releasing everything through `onClear`, focus loss, the panel and a rotation ending gestures.

Differences from the reference on purpose:

- A resize ends gestures only when the wheel's rectangle moved (`TouchControls.relayout`); the reference ends them on every resize. A rotation always ends them (`orientationchange` in `App.start`). A collapsing mobile address bar should not interrupt driving; that reason was not tried on a device.
- Below 600 px height the wheel sits 10% of the height from the left edge instead of 20 px, so the fifth rank portrait stays clear.

**How it was compared.** check-race-ui on the mobile profile, 800x360 DPR 2, with CDP touch events: `touch: device 2 at race start, wheel shown`, `touch: wheel at the reference size` (158.4 px), `touch: wheel up is gas, car accelerates` (17.28 m/s, gas 100), `touch: steering and turbo together` (wheel 0.972, steer 97.2), `touch: cancel releases everything`, `touch: wheel down brakes, then reverses` (fastest backward -12.61 m/s, brake 100), `touch: a right mouse button presses no on-screen control`. check-phone-flow: `race starts with the wheel`, `wheel drives the car`, at 844x390. `evidence/race-ui/touch-landscape.png` shows the wheel turned and `▲ Gas` lit; no check asserts those pictures. No real phone. The original has no touch to compare with.

## Platform: on-screen race buttons

**Original behaviour.** None exist. The actions they stand for are in the sections above.

**Evidence.** `research/input.md` H6 lists what the on-screen set should hold: Camera 1, 2, 4; look back (hold); Dashboard; Overlay detail; Reset, also results "continue"; Taunt; Pause; Quit with J and N; resume by any tap.

**Status.** H6 is design, not original behaviour. The list of actions it covers is Confirmed (C7). The arrangement below is port design.

**Where the port implements it.** `#touch-controls` and `#dialog-keys` in `source/index.html`; `TouchControls.bindPress`, `bindHold`, `bindKey`, `showMore`, `source/input/touch.js`; dialog keys in `RaceRunner.bind` and `updateDialogKeys`, `source/race-runner.js`.

| Button | What it does | H6 item |
|---|---|---|
| `Claxon` | `rgbButtons[1]` | horn |
| `Turbo` | `rgbButtons[0]` | turbo |
| `Handrem` | `rgbButtons[3]`, DEVICE 3/4 `[2]`; art `brake-pedal.svg` | handbrake |
| `Camera` | Pulses the next of VK 1, 2, 4 from the view in use, 2 ticks | Camera 1, 2, 4 |
| `Terugkijken` | VK 0x33, DIK 0x04 while held | look back |
| `Reset` | VK 0x0D, DIK 0x1C while held | Reset |
| `Pauze` | VK P | Pause |
| `Stop` | VK Esc | Quit |
| `Meer` | Shows `Roepen`, `Dashboard`, `Detail`, in landscape. Portrait has no `Meer` and shows them all | |
| `Roepen` | VK 0x54, DIK 0x14 while held | Taunt |
| `Dashboard` | VK 0x35, DIK 0x06 while held | Dashboard |
| `Detail` | VK 0x44, DIK 0x20 while held | Overlay detail |
| `Ja`, `Nee` | VK J, N, while a quit prompt is open | J, N |
| `Verder`, pause | VK 1, while a pause is open; a tap on the race also resumes | resume |
| `Verder`, results | VK 0x20, on the finish table and game over. H6 proposed Enter; the game's wait takes either | results "continue" |
| `#race-stop` | VK Esc, for a mouse in full screen | Quit |

Placement. Landscape: `.touch-actions` beside the Speedometer, or lifted above it when `RaceRunner.layout` finds it would cover the Communicator (`actions-lifted`). `.touch-top` is a column at the right edge between the statistics and the Speedometer, wrapping left on short screens, so the chase timer stays clear. The gear sits beside the statistics. Portrait: all eight `.touch-top` buttons in two rows at the top of the panel, with the gear at the panel's right.

**How it was compared.** check-race-ui: `touch: steering and turbo together`, `touch: cancel releases everything`, `touch: Reset places the car back, with the wheel held and still held after`, `touch: Terugkijken holds view 4, the release restores`, `touch: wheel, turbo and handbrake together, each lifted by itself`, `touch: Camera goes through 2, 4, 1, and on from what a key chose`, `touch: Meer shows Roepen, Dashboard and Detail, which work`, `finish: wheel and actions gone, Verder shown`, `finish: Verder ends the race, which waits for the finger to lift`, `full screen: Stop asks, and Nee answers on screen`, and `layout:` at 8 sizes, which compares rectangles against the HUD's canvas rectangles (no chase level ran). check-phone-flow tapped the touch `Stop` and `Ja`. `Claxon`, `Pauze` and the pause's `Verder` were not tapped by a check. Fix check, by one-off script: cancel and second-finger lifecycle on the shared binder.

## Platform: gamepad

**Original behaviour.** DirectInput joystick in the race, chosen by radio in the menu, no gamepad in the menu. See "joystick and wheel device paths". The brief asks for the Gamepad API with menu navigation, analog steering and pedals, deadzones and connection handling.

**Evidence.** `research/input.md` C3, C13, H4. Reference: `RedCat Superkarts/source/input.js` `poll`, `clearPad`, `gamepaddisconnected`. `RedCat Spookkasteel/RCSPOOK_NEW/docs/controller-support.md`.

**Status.** The mapping is a port adaptation. Inferred from H4. Nothing here is original behaviour.

**Where the port implements it.** `GamepadInput`, `source/input/gamepad.js`. A pad with the standard mapping is preferred; otherwise any pad is taken.

| Pad, standard mapping | Race | Menu |
|---|---|---|
| Left stick X | Steering, deadzone from the setting, default 0.18 | Left, Right beyond 0.5 |
| Left stick Y | Down beyond 0.5 brakes. On DEVICE 3/4 analog both ways | Up, Down beyond 0.5 |
| D-pad left, right | Steering, instant full lock | Left, Right |
| D-pad up | `Roepen`, pulse of VK T | Up |
| D-pad down | Brake | Down |
| RT, A | Gas. DEVICE 2 on/off (RT above 0.2), DEVICE 3/4 analog | A = Enter |
| LT, B | Brake. DEVICE 2 on/off, DEVICE 3/4 analog | B = Esc |
| X | Turbo | |
| Y | Horn | |
| RB | Handbrake | RB = Tab |
| LB | Next camera in the cycle | |
| L3 | Reset, pulse of VK Enter | |
| R3 | Look back while held | |
| Start | Pause; while paused, VK 1 | |
| Back | Quit prompt | |
| A, B while a prompt is open | Pause: VK 1. Quit: J, N | |
| A on the finish table and game over | Space, only a new press | |

Devices without the standard mapping have no known layout. Their buttons go by number as the game binds them on each DEVICE (`0x0046d8a0`, `0x0046e350`): 0 turbo, 1 horn; on DEVICE 2 also 2 gas and 3 handbrake; on DEVICE 3/4 2 handbrake. Stick Y is `CM_JOY_UP` and `CM_JOY_DOWN`. In dialogs buttons 0, 1 and 9 act as A, B and Start above, and on result screens button 0 acts as A. They have no Start, Back, LB, L3, R3 or D-pad function in a race. Both reference ports ignore such devices; this port does not, because the original supports them.

On purpose: Dashboard and Detail have no pad button, because no standard button is free. Analog pedals reach the car only on the `Joystick` and `Stuur` radios, because DEVICE 2 reads gas as a button. D-pad steering jumps to full lock as an analog device with full deflection would. The original's digital ramp path needs `dwDevType` 0x404, which the port does not report. There is no auto-repeat in the menu. No pad button opens the settings panel.

Connection: `chooseDevice` reads `connected()` once at race start, because the game binds its device once at load (`0x0046ee10`). A pad found during a keyboard race gives the note `Gamepad werkt vanaf de volgende race` for 4 s (`GamepadInput.onFound`) and then has its key-pulsing buttons but cannot drive. Losing the pad in use (`GamepadInput.lost`) clears all pad flags and look back, and pulses P once unless paused or on a result screen. A pad that returns goes on being read. Browsers may expose a pad only after a button press (`RCSPOOK_NEW/docs/controller-support.md`), so a connected pad may not count at race start; this was not tried.

**How it was compared.** check-race-ui, with a stand-in for `navigator.getGamepads`, standard mapping unless named: `gamepad: connected at start selects device 2`, `gamepad: right trigger is gas, small stick stays in the deadzone`, `gamepad: analog steering`, `gamepad: the deadzone follows the setting` (at 0.4 of the stick: 0 with deadzone 0.5, 0.268 with 0.18), `gamepad: left stick click resets the car`, `gamepad: right stick click holds the view behind`, `gamepad: D-pad up calls, D-pad down and stick down brake`, `gamepad: a non-standard device goes by button number` (pad flags), `gamepad: found in a keyboard race gives a note, lost pauses`, `gamepad: disconnect releases the controls and pauses`, `gamepad: found again, A resumes`, `finish: pad A held does not skip it, a new press does`, `menu: a pad button held from the race counts only after its release`.

X, Y, RB, LB, Start, Back, LT, B and D-pad left and right were not pressed in a race. Fix checks, by one-off scripts: menu navigation and the default name with a stand-in pad from the intro onward. No real controller, joystick or wheel, and no race on DEVICE 3 or 4.

## Platform: browser key conflicts and fullscreen

**Original behaviour.** Fullscreen exclusive: `raser.ini WINDOWED=0`, `SetCooperativeLevel` flags `0x11`, `SetDisplayMode`, window size from `GetSystemMetrics` (`0x4c57fc`, `0x4c58ca`, `FUN_004c55c0`). The default turbo key is Ctrl, and `0x004c5e40` ignores Ctrl. So holding turbo while pressing 1, 2, 3, 4, 5, D, P or T works normally.

**Evidence.** `original/install/raser.ini` `WINDOWED=0`; `research/win32-surface.md` C1, C3; `research/input.md` C7, H8. H8 is browser knowledge, not game evidence.

**Status.** Original side: Confirmed (static). Browser side: from H8 and from reading the source. What real browsers do with these keys was not tried. Inferred: a browser may keep Esc for itself in full screen, which is why leaving full screen opens the quit prompt.

**Where the port implements it.**

- `bindKeyboard` and `browserKey`, `source/input/keyboard.js`: during a race `preventDefault` applies to every key except F5, F11, F12, Ctrl+R, Ctrl+Shift chords and Command chords. Ctrl with a game key goes to the game. F9, F10 and F11 never reach the game's key state. While the settings panel is open the race's key handler gets no input object, so no key reaches the race.
- Full screen: setting `fullscreen`, default true (`source/settings.js`). `App.applyFullscreen`, `source/app.js`, requests it at the first gesture, also in the menu, with Safari's prefix. An iPhone has no such call: the panel row is hidden, `Geavanceerd` greys it, and nothing else is said.
- Leaving: `App.fullscreenChanged` sets the setting to false, also for later visits, until the player ticks it again. During a race it pulses Esc (`RaceRunner.leftFullscreen`) unless a dialog, result screen, panel or hidden tab is up, because that Esc may never have reached the page. Settings saved with `fullscreen` false stay off.
- `navigator.keyboard.lock` on Escape, T, N and W, where it exists (`LOCKED_KEYS`), so Ctrl turbo chords stay in the game there. Holding Esc leaves full screen, which is browser behaviour (H8).
- `#race-stop` beside the gear for non-touch in full screen (`RaceRunner.updateStop`).

**How it was compared.** check-race-ui: `keyboard: turbo chords stay in the game, browser keys stay with the browser` (synthetic events, `defaultPrevented` read for Ctrl+5, Ctrl+D, Ctrl+T and for Ctrl+R, Ctrl+Shift+I, F5, F11, F12), `full screen: on at the first gesture, with Stop for the mouse`, `full screen: Stop asks, and Nee answers on screen`, `full screen: leaving opens the quit prompt, and it stays off` (through `document.exitFullscreen`), `full screen: setting it again enters`. All of these ran in headless Chromium, where Esc reaches the page. Not run: real Esc in a browser that keeps it, Safari's prefixed path, keyboard lock's effect, the real browser shortcuts. Playwright cannot resize a full-screen window, so the `orientation:` and `layout:` checks switch the setting off first.

## Platform: safe areas

**Original behaviour.** Does not apply: 640x480 fullscreen on a monitor.

**Evidence.** Brief section 7. `research/hud-overlay.md`, section C notes: "Safe areas: add insets to the same deltas."

**Status.** Port requirement. Confirmed by reading the code that it is applied as listed below.

**Where the port implements it.** `viewport-fit=cover`, `source/index.html`.

| Element | How | File |
|---|---|---|
| Wheel | `--wheel-left`, `--wheel-bottom`: `max(…, env(safe-area-inset-*))`; below 600 px height, the inset plus 10% of the height | `source/style.css` |
| Action buttons, column, gear, `#race-stop` | `--hud-right`, `--hud-top`, `--hud-bottom`, from `env(safe-area-inset-*)`, added to the HUD-unit offsets | `source/style.css` |
| Dialog keys | Portrait and result screens as above. Landscape prompts: centred under the requestor frame, no inset | `source/style.css` |
| HUD groups | `HudLayout.setShape(aspect, insets, cssSize, clipY)`, added to the group offsets in `HudLayout.apply`; insets come from `safeAreaInsets()` in `RaceRunner.layout` | `source/host/hud-layout.js`, `source/race-runner.js`, `source/ui/safe-area.js` |
| Menus and dialogs | `MenuRuntime.safeRect`, used by `relayout` and `dialogRect` | `source/menu/framework.js` |
| Help window, intro sound note, error dialog | `max(…, env(safe-area-inset-*))` in their own styles | `source/menu/` |
| Not inset: `#status`, `#fps` | | `source/style.css` |

**How it was compared.** No check-race-ui or form-check run had non-zero insets: headless Chromium has no notch. Fix checks, by one-off scripts: HUD groups with fake insets at 800x360, the plates with a fake top inset in landscape, and the help window and intro note with layout unchanged at zero inset. Insets are added after the portrait scale, but no run combined them with a scale above 1. No device with a real inset was tested. The CSS controls and the menu are not verified.

## Platform: orientation and responsive layout

**Original behaviour.** Landscape 4:3 only.

**Evidence.** Brief section 7. `research/hud-overlay.md` sections on tall and portrait.

**Status.** Port requirement. The rules below are port design.

**Where the port implements it.**

| Rule | Value | File |
|---|---|---|
| Race portrait test | `ch > cw * 1.15`, one rule for view and controls: `RaceRunner.layout` sets class `race-portrait` and the CSS keys on it. Near-square screens use the landscape layout throughout | `source/race-runner.js`, `source/style.css` |
| Race view height, touch | `min(ch * 0.62, cw * 1.2)`; controls below | `RaceRunner.layout` |
| Race view height, no touch | `min(ch, cw * 1.5)` | `RaceRunner.layout` |
| HUD | `hud.setShape(area.w / area.h, …)`. Communicator moved right of the wheel in landscape (`leftShift`), growing with its slide, so it passes under the wheel while it slides in or out. Portrait phones scale text-bearing groups, see [hud.md](hud.md) | `RaceRunner.layout`, `source/host/hud-layout.js` |
| Portrait controls | `:root.race-portrait`: wheel `clamp(148px,45vw,224px)`, action buttons in a column at the right, eight buttons in two rows at the top of the panel, gear at the panel's right | `source/style.css` |
| Landscape controls | Wheel `clamp(148px,44vmin,224px)`, 140 px at up to 600 px wide; column at the right edge; `actions-lifted` | `source/style.css`, `RaceRunner.layout` |
| Menu portrait | `ch > cw * 1.1`, forms with `portraitZones()` stack, others fit whole | `MenuRuntime.relayout` |
| Events | `resize` and `orientationchange` → `App.layout`; `orientationchange` also ends every gesture; `TouchControls.relayout` ends them when the wheel moved | `source/app.js`, `source/input/touch.js` |

**How it was compared.** check-race-ui, during a race, by viewport change with a finger on the wheel: `orientation: portrait keeps the controls on screen` (effective 720x864), `orientation: the gesture ends with the rotation`, `orientation: back to landscape` (1600x720). `layout:` at 800x360, 640x360, 1024x768, 360x800, 800x880, 844x390, 390x844, 360x640: no control off screen, on another control, over the view in portrait, or on the Communicator, Speedometer, statistics or chase timer rectangle. These compare rectangles; `actions-lifted` was on at 640x360, 1024x768 and 800x880. The Communicator rectangle is the resting one, so its slide is not covered: `evidence/race-ui/touch-landscape.png` caught it under the wheel. form-check: portrait screenshots at 390x844. No real device rotation; whether `orientationchange` fired in these runs was not observed.

## Platform: settings and persistence

**Original behaviour.** Player settings live in the save (`TSettings`, `TControls`) and `menu.ini`. `TfrmOptions` edits a copy; only the three volume sliders write straight through for preview. Annuleren restores them.

**Evidence.** `menu 0x0049504c`, `0x00495d6c`, `0x004960fc`, `0x00495808`, `0x004956b4`. `research/input.md` C9. `research/menu-forms.md` section 12.

**Status.** Original side Confirmed (static). The port settings below are port design required by the brief, section 8.

**Where the port implements it.** The race panel is `SettingsPanel`, `source/ui/settings-panel.js`, opened by the gear button or F9. `Geavanceerd` (`TfrmDisplaySettings`, `source/menu/forms/group-options.js`) has a third tab, `Browser`, with the same settings.

| Setting | Values | Default | Storage | Where to change it |
|---|---|---|---|---|
| `resolution` (`3D-resolutie`) | auto, 360, 480, 600, 720, 900, 1080, 1440 | auto | `localStorage` `a2racer4.settings` | Panel; `Geavanceerd`, tab `Browser` |
| `renderScale` (`Renderschaal`) | 25..200; step 5, keys in `Geavanceerd` 25 | 100 | same | same |
| `volume` (`Volume`) | 0..100 | 100 | same | same. Master gain for race and menu sound (`App.getMasterOutput`), `video.volume` for the movies. iOS ignores `video.volume` |
| `showFps` (`Beeldjes per seconde tonen`) | on, off | off | same | same |
| `fullscreen` (`Volledig scherm`) | on, off | on | same | same |
| `touch` (`Aanraakbediening`) | auto, on, off | auto | same | same. `useTouch`, `source/settings.js`: auto means `pointer: coarse` and `maxTouchPoints > 0` |
| `deadzone` (`Deadzone gamepad`) | 0..0.5 | 0.18 | same | same. Read live by both `GamepadInput` instances |
| Control type, keys, sensitivities, music, sound, voice, start info | as original | `static.ini` | save in IndexedDB through the VFS | `TfrmOptions` and its dialogs |

Panel behaviour: opening stops the clock and sound, releases the wheel and moves the focus inside, so keys stay out of the race. Esc and F9 close it, and the key that closed it is not the game's until released (`GameInput.ignoreCode`). The gear and `Sluiten` also act on a second finger's release (`onRelease`), because browsers send no `click` for a second finger while the first holds the wheel (the reference's note). Turning touch on during a keyboard race gives `Aanraakbediening werkt vanaf de volgende race`; turning it off works at once. In short landscape the panel uses two columns.

`Annuleren` and the x on `TfrmOptions` and `TfrmDisplaySettings` put all seven port keys back (`PORT_KEYS`, `restorePortValues`); OK keeps them. `Volume` changed during a pause or quit dialog is heard when the dialog ends, because the dialog's mute holds.

**How it was compared.** check-race-ui: `settings: survive a restart`, `settings: gear works with a second finger, and the panel releases the wheel`, `settings: touching the panel does not start the sound again`, `settings: closing the panel does`, `settings: Volume sets the master gain, once` (state), `settings: F9 opens with the focus inside, keys stay out of the race, Esc closes`, `touch setting: on gives the wheel on a desktop, and a mouse drives it`, `touch setting: off and on again during a race`, `touch setting: off on a phone gives device 1, and on waits for the next race`, `gamepad: the deadzone follows the setting`. form-check: options persistence, tabs of `Geavanceerd`. Fix checks, by one-off scripts: `Annuleren` and x restore and OK keeps in `Geavanceerd`; movie volume at 25%; the beep and menu sound reaching the master output; `Volume` during a dialog keeping the master at 0. No original comparison applies to the port settings.

## Platform: resolution, render scale and effective-size display

**Original behaviour.** Game code sees 640x480 at 16 bits on the shipped settings (`raser.ini RESOLUTION=3`). `3D kaart` off gives 640x480 or 320x200 at 8 bits, `RESOLUTION` 1 and 0. There is no render scale.

**Evidence.** `original/install/raser.ini` `RESOLUTION=3`. Brief section 8. `research/render-device.md`.

**Status.** Original value Confirmed (static). The rest is a port requirement.

**Where the port implements it.** `Settings.renderSize`, `source/settings.js`:

| Selection | Width | Height |
|---|---|---|
| Auto | CSS width × DPR × scale | CSS height × DPR × scale |
| Auto at `RESOLUTION` 0 and 1 | mode's grid width × scale | mode's grid height × scale |
| Preset | preset × CSS width / CSS height × scale | preset × scale |

The scale is limited to `min(scale, maxSize/w, maxSize/h)`, with `maxSize` the GPU's `maxTextureSize` (`D3DRenderer.maxTextureSize`), and the result then has `limited` set. Applied by `RaceRunner.layout` and `D3DRenderer.setRenderSize`, `source/render/d3d-renderer.js`: the drawing buffer stays at native size and pixel ratio 1, and a different size uses a render target blitted to the view, so the HUD and touch controls keep native size.

The mode's grid is `modeGrid` in `source/settings.js`, used only on the 8-bit path: the mode's own pixels on the view's shape, so 640x480 gives 853x480 at 16:9 and 320x200 gives 427x200. There the world and the HUD have their own targets: `Renderschaal` acts on the world only, and the HUD stays on the grid. `RaceRunner.layout` lays out once more after boot, since the mode is known only then. Recorded in [intentional-differences.md](../intentional-differences.md).

Shown as `3D-beeld: W × H pixels`, with ` · GPU-limiet` when limited, in the panel (`SettingsPanel.refresh`, also from `RaceRunner.layout` while it is open); in `Geavanceerd` (`refreshPortRows`, on every change and resize, with a line naming the limit); and in the frame counter (`RaceRunner.countFps`).

**How it was compared.** check-race-ui on the mobile profile: `settings: Auto at 100% gives 1600x720` (drawing 1600x720), `settings: 480p at 50% applies at once, drawing buffer stays native` (533x240 target, text `3D-beeld: 533 × 240 pixels`), `settings: survive a restart`, `settings: Auto at 200% renders 3200x1440` (target 3200x1440, drawing 1600x720), `settings: the GPU limit is applied and shown` (stubbed limit 2048 gives 2048x922 and the text). Fix checks, by one-off scripts: the size refreshing in the open panel; a stubbed limit of 512 in `Geavanceerd`. check-software at 1280x720: `RESOLUTION 1: Ramp device, 640x480, view on the mode grid` (853x480), `RESOLUTION 0: Ramp device, 320x200, clip 0.625, 200 rows` (427x200), `RESOLUTION 3 after the 8-bit path: normal device, native view` (1280x720), and render scale 50% halving the world only. No comparison with the original applies. The field-of-view rule belongs to [render.md](render.md).

## Host specification in `research/input.md` against the final source

H1 to H9 of that note are design, not evidence. Where the source ended up:

| Item | Final source |
|---|---|
| H1 two key arrays, latch, clear on blur, hidden, `pagehide` | As specified: `GameInput`, `bindKeyboard`. A re-press within a tick stays down |
| H1 VK 0xA1 for ShiftRight | Not set: VK 0x10 only. No game code polls 0xA1 |
| H1 mouse or tap sets VK 1 | `canvasPress` sets VK 1, 4, 2, 5, 6 by button, on the race canvas during a pause |
| H1 mask F11, F10 | `MASKED`, with F9 added. No host capture for Ctrl+F10 |
| H1 at most 31 keys | 27: see the corrections above. The virtual joystick has 4 buttons, so 24 was not needed |
| H2 objects | As specified, `source/host/directx.js` |
| H3 `WM_ACTIVATEAPP` at start | At `ShowWindow`. No message on focus loss: `RaceRunner.setFocus` stops the ticks instead |
| H3 spin loops | `0x0044ca80`'s waits are state machines (`Race.pollPause`), others end through `keyDown` and `RaceRunner.endWait` |
| H3 rate | Fixed 60 ticks: [sim-timing.md](sim-timing.md) |
| H4 table | `dwDevType` 0x0604 for DEVICE 2, 0x0204 for DEVICE 3 and 4, not per radio. The `0x0404` option is not offered. Stick Y added to the pedals |
| H5 wheel | As specified, DEVICE 2. Its mid-race merge is what `updateJoystick` does, with the player's keys in place of the arrow keys and two ramps |
| H6 buttons | All there, see "Platform: on-screen race buttons". Results "continue" sends Space, not Enter |
| H7 keep or hide | As specified |
| H8 browser keys | `browserKey`, keyboard lock in full screen, on-screen quit. The macOS note is in `README.md` and this document, not in the game |
| H9 menu | As specified. `vkOf` never returns 108, so entry 13 stays in the list and cannot be chosen |
