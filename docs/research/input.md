# Input: spel.dat and menu.exe

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. The text below is as it was written.

Static analysis only. `spel.dat` has never been observed running (`dynamic/RESULTS.md`), so nothing here is a runtime observation. Class and file names (`CInputManager`, `CKeyboardDevice`, `CMouseDevice`, `CJoystickDevice`, `CInputDevice`, `CDirectInputDevice`, `CBindedAction`, `CInputCommand`) come from `D:\Work\InputLib\prog\*.cpp` strings. Action and command names (`CarLeft`, `CM_KEYB_*`, `Console_*`, `ACTION_*`) are strings in the binary. Names marked "(mine)" are analyst names. All addresses are `spel.dat` unless marked `menu`.

The section "Host specification" at the end is design derived from these findings. It is not original behaviour.

# Confirmed

## C1. Where input runs in a frame

`WinMain` `0x00458270` loop, one pass per rendered frame:

| Order | Call | Input role |
|---|---|---|
| 1 | `handle_game` `0x0044cb80` → `0x004a6700` | frame timer |
| 2 | `0x0046fdb0` → `0x004ea7d0` | polls every device once, in creation order: Keyboard0, Mouse0, Joystick0 |
| 3 | `0x004a9870` object handlers → player handler `0x0044ea60` (pushed at `0x0044e54f`, `0x0044e592`) | `0x0046fd10` reads actions into the control struct, `0x00427b90` applies it to the car |
| 4 | `0x00438670` `handle_game_cameras` | camera keys (`GetAsyncKeyState`) |
| 5 | `0x0044cf90` `check_game_keys` (string `calling -> check_game_keys()`) | reset, overlay, pause, quit, cheats |
| 6 | `0x0044da30` render, `0x004aa0c0` physics step, 2D, console `0x00471bd0`, flip `0x0044df10` | |
| 7 | `if (DAT_006fb8d8)` flip twice, then `0x0044ca80` | blocking pause or quit prompt |
| 8 | back in `WinMain`: `0x00458020` message pump, `CTRL+F10` test, `0x0041c150` radio | |

Polling rate equals frame rate. There is no input thread, timer or event. Immediate mode only: `GetDeviceState` is called, `GetDeviceData` (+0x28), `SetEventNotification` (+0x30) and `DIPROP_BUFFERSIZE` are not used anywhere in `0x4ea0c0-0x4f2110`.

Two separate key sources exist:

- DirectInput device state, through `CInputManager`.
- `GetAsyncKeyState` through `0x004c5e40`. It reads the sign bit only. Without bit 0x100 in the argument it returns 0 while `VK_SHIFT` (0x10) is down, and -1 if the key is down otherwise. No caller passes bit 0x100.

## C2. InputLib object model

`CInputManager`: singleton getter `0x004ea0c0`, pointer `DAT_0074b968`, 0x6c bytes, ctor `0x004e9cc0`, init `0x004ea1f0(hInstance, hWnd)`.

| Offset | Field |
|---|---|
| +0x04/+0x08 | device vector |
| +0x14, +0x28, +0x3c | factories named `Keyboard`, `Mouse`, `Joystick` |
| +0x50/+0x54 | action vector, 0x3c bytes each |
| +0x58/+0x5c | global command vector, 8 bytes each: device index, `CInputCommand*`. Command id = position in this vector (`0x004ea240`) |
| +0x60 | init flag; queries throw `InputManager not initted yet!` if 0 |
| +0x64, +0x68 | hWnd, hInstance |

Device creation `0x004eb220`: for each type, `0x004eb170` formats `"%s%d"` (`0x5b79dc`) and calls `0x004ea5b0` with index 0, 1, 2... until init fails. Result: `Keyboard0`, `Mouse0`, `Joystick0`, ... Names compare with `__strcmpi`.

Device vtable slots (names mine):

| Class | vtable | dtor | Init(hInst,hWnd,index) | Shutdown | Update | GetValue(id) | GetPrev(id) |
|---|---|---|---|---|---|---|---|
| CKeyboardDevice | `0x578228` | `4ed340` | `4ed760` | `4ef1d0` | `4ed610` | `4eef40` | `4f11e0` |
| CMouseDevice | `0x578250` | `4ee300` | `4ef070` | `4ef1d0` | `4eede0` | `4eef40` | `4f11e0` |
| CJoystickDevice | `0x578268` | `4ef300` | `4f0820` | `4f0980` | `4f0560` | `4eef40` | `4f11e0` |

Device fields:

| Offset | Field | Evidence |
|---|---|---|
| +0x04/+0x08 | command vector, 0x28 bytes each | `0x004f0fe0` |
| +0x0c | active list, int[32] of command indices | `0x004f0c60` |
| +0x8c | active count. `>=32` throws `Illegal index m_NrCommands` | `0x004f0c60`, `0x004f0df0` |
| +0x94 | name char* | `0x004eb3f0` |
| +0xa0 | enabled byte, ctor 1 | `0x004f0b00` |
| +0xa4, +0xa8 | `IDirectInputDevice*`, `IDirectInputDevice2*` | `0x004f1d30`, `0x004f1dc0` |
| +0xac | DIDEVCAPS, dwSize 0x2c | `0x004f1e50` |
| +0xd8, +0xdc | counts. Keyboard 0x6a (106), state[256] at +0xdc. Mouse 6 and 4. Joystick 7 and 32 | `0x004ed3b0`, `0x004ee370`, `0x004ef370` |

`CInputCommand` (0x28 bytes, ctor `0x004edcf0`): +0x04 name, +0x10 id (-1 until registered), +0x14 prev value, +0x18 current value, +0x1c ramp up rate (default 0.1), +0x20 ramp down rate (default 0.1), +0x24 ramp flag (default 0).

`CBindedAction` (0x3c bytes): 5 combination slots of 8 bytes at +0, name at +0x28, count at +0x38. A 6th binding throws (`0x004ee040`).

Queries:

| Function | Meaning |
|---|---|
| `0x004eaaa0(action, command, device)` | bind. Unknown device or command throws `Device %s does not exist!` / `Command %s of device %s does not exist!`. Each call adds one OR-combination |
| `0x004eadd0(action, float* prev)` | value. First combination whose value is >0 wins. Within a combination every command must be >0, the result is their average (`0x004eac80`) |
| `0x004eaf50(action)` | rising edge: cur > prev |
| `0x004eaf80(action)` | falling edge: cur < prev |
| `0x004eafb0(action, up, down, flag)` | sets ramp fields on all commands of the action |
| `0x004eb4d0(command, device, float* prev)`, `0x004eb7a0(command, device)` | value by name; rising edge by name |
| `0x004eb740(id, float* prev)` | value by id, -1.0 if id unknown |
| `0x004eb460`, `0x004eb7d0`, `0x004eb480` | device exists; device pointer; command id |

Thrown `CInputException` (RTTI `.?AVCInputException@@`) ends in the `WinMain` catch `0x00458386`, then fatal `0x004c4150`: `MessageBoxExA` and `ExitProcess(1)`.

Game wrapper (mine: CGameInput), getter `0x00469fa0`, `DAT_00712648`, 0x28 bytes: [0..3] mouse command ids (X_MOVE, Y_MOVE, X_POS, Y_POS, filled by `0x0046fe50`), +0x10 mode (1, 2 or 3), +0x14 device name string (`Keyboard0` or `Joystick0`), +0x24 SENSITIVITY.

## C3. DirectInput calls

`DirectInputCreateA(hInst, 0x500, &di, NULL)` once with a refcount (`0x004f1b30`, thunk `0x0054ae38`, IAT `0x00576018`). Failure throws.

| Object | Offset | Method | Exact use | On failure |
|---|---|---|---|---|
| IDirectInput | +0x0c | CreateDevice | `(di, lpddi+4 /*guidInstance*/, &dev, NULL)` from callback, `0x004f1eec` | throw |
| IDirectInput | +0x10 | EnumDevices | `(di, type, cb=0x004f1a50, pvRef=device, flags=1)`, type 3 keyboard, 2 mouse, 4 joystick (`0x004f2096`) | throw |
| IDirectInput | +0x08 | Release | last device (`0x004f1c10`) | |
| Device | +0x00 | QueryInterface | IID `{5944E682-C92E-11CF-BFC7-444553540000}` (IDirectInputDevice2A, `0x578db0`), all device types | throw |
| Device | +0x08 | Release | both interfaces (`0x004f1c40`) | |
| Device | +0x0c | GetCapabilities | all, DIDEVCAPS dwSize 0x2c | throw |
| Device | +0x14 | GetProperty | joystick: prop = (REFGUID)4 (DIPROP_RANGE), header {0x18, 0x10, obj 0 or 4, how 1}, `0x004f0707` | throw |
| Device | +0x18 | SetProperty | mouse: prop = (REFGUID)2 (DIPROP_AXISMODE), {0x14, 0x10, 0, 0, data 1 (REL)}, `0x004eefff` | throw |
| Device | +0x1c | Acquire | init (result ignored); retry after INPUTLOST | |
| Device | +0x20 | Unacquire | shutdown | |
| Device | +0x24 | GetDeviceState | keyboard 0x100, mouse 0x10, joystick 0x50 | see below |
| Device | +0x2c | SetDataFormat | keyboard `0x54ae20` (c_dfDIKeyboard), mouse `0x54aeb0` (c_dfDIMouse, DIDF_RELAXIS), joystick `0x54b190` (c_dfDIJoystick, DIDF_ABSAXIS, 44 objects) | throw |
| Device | +0x34 | SetCooperativeLevel | `(hWnd, 6)`: NONEXCLUSIVE, FOREGROUND, all three | throw |
| Device2 | +0x64 | Poll | joystick only, result ignored (`0x004ef510`) | |

Enum callback `0x004f1a50(lpddi, pvRef)` is stdcall. It counts devices up to the requested index, then creates that device and returns 0 (stop); otherwise returns 1 (continue). Only `lpddi+4` is read. Init returns false if no device was created (`0x004f2050`).

`GetDeviceState` handling, the same for all three (`0x004ed4d0`, `0x004ee570`, `0x004ef510`): HRESULT `0x8007001E` (DIERR_INPUTLOST) makes it Acquire, and retry only if Acquire succeeded. A failed retry throws. Any other nonzero HRESULT throws `DIError : Failed to get ... data`. That includes DIERR_NOTACQUIRED.

## C4. Device update logic

All updates first copy cur to prev for every command and clear the active list (`0x004f11b0`).

**Digital command** `0x004f0df0(name, pressed)`: flag 0: cur = pressed ? 1 : 0. Flag 1: cur = prev + up or prev - down, clamped to 0..1. Added to the active list only if >0. `GetValue` (`0x004eef40`) searches only the active list, so an inactive command reads 0.

**Analog command** `0x004f0c60(name, value)`: stores value, always added to the active list, ramp ignored.

**Keyboard** `0x004ed610`: for each of 106 table entries, pressed = state[DIK] >> 7.

**Mouse** `0x004eede0`: DIMOUSESTATE at +0xe0 (lX, lY, lZ, buttons at +0xec). Gain = (8-1)*0.5+1 = 4.5 (`0x004ee700`, +0x12c = 0.5 from `0x004ee510`). POS accumulates lX*gain, clamped to ±500, normalised to ±1, Y negated. MOVE = lX*gain clamped to ±500, /500, added only if nonzero.

**Joystick** `0x004f0560`: DIJOYSTATE at +0xe0 (lX +0xe0, lY +0xe4, lZ +0xe8, rgbButtons +0x110). Buttons first, then:

```
x = lX / ((Xmax-Xmin) sar 1) - 1      // +0x148, 0x004ef650
y = 1 - lY / ((Ymax-Ymin) sar 1)      // +0x14c, inverted: lY=0 gives y=+1
z = lZ / ((Zmax-Zmin) sar 1) - 1      // +0x150
```

Range: `0x004f0790` reads X (obj 0) if dwAxes>=1 and Y (obj 4) if dwAxes>=2, into +0x130/+0x134 and +0x138/+0x13c. Z (+0x140/+0x144) is never read. Xmin is subtracted only for the divisor, not from lX, so these formulas centre correctly only when lMin = 0.

Axis to command, chosen each update by cached dwDevType at +0x158 (`0x004f0540`):

| dwDevType | Function | Behaviour |
|---|---|---|
| exactly `0x404` | `0x004f0450` → `0x004f0020`, `0x004efbf0` | digital. `x>0.5` RIGHT pressed, LEFT forced 0. `x<-0.5` LEFT pressed, RIGHT forced 0. Otherwise both released through the ramp. Same for UP/DOWN on y. Then X_AXIS and Y_AXIS = signed result, Z_AXIS = z |
| anything else | `0x004ef6e0` | analog. `x>=0`: RIGHT=x, LEFT=0. `x<0`: LEFT=-x, RIGHT=0. `y>=0`: UP=y, DOWN=0. `y<0`: DOWN=-y, UP=0. Plus X_AXIS, Y_AXIS, Z_AXIS. Always 7 active entries |

Commands, in table order:

- Keyboard: 106 `CM_KEYB_*`, see C10.
- Mouse (`0x5b86ec`): `CM_MOUSE_X_POS, Y_POS, Z_POS, X_MOVE, Y_MOVE, Z_MOVE, BUTTON1..4`.
- Joystick (`0x5b8898`): `CM_JOY_X_AXIS, Y_AXIS, Z_AXIS, LEFT, RIGHT, UP, DOWN, BUTTON1..32`.

## C5. Actions and bindings

Seven game actions (`0x5a7db4-0x5a7dcc`): `CarLeft, CarRight, CarForward, CarBackward, CarTurbo, CarHorn, CarHandbrake`. No reverse, gear, camera, pause or map action exists. Bindings are made once at startup (`0x0046ee80` from `init_main` `0x004580e0`) and cannot change during a run.

`0x0046ee10` reads `GAME.INI` from the current directory: `[Input] DEVICE`, then `SENSITIVITY`, with `GetPrivateProfileIntA(..., default 0)`. Dispatch `0x0046ece0`: 1 keyboard, 2 joypad, 3 and 4 joystick layout, anything else fatal `Illegal device selected`. `game.ini` comments: `1=Keyboard, 2=Joypad, 3=Wheel/Joystick, 4=Sidewinder ForceFeedback Joystick`. DEVICE 3 and 4 run identical code.

| Action | DEVICE 1 (`0x0046d360`, mode 1) | DEVICE 2 (`0x0046d8a0`, mode 2) dwButtons>=3 | DEVICE 2, dwButtons<3 | DEVICE 3/4 (`0x0046e350`, mode 3) dwButtons>=3 | DEVICE 3/4, dwButtons<3 |
|---|---|---|---|---|---|
| CarLeft | INI `LEFT` | CM_JOY_LEFT | CM_JOY_LEFT | CM_JOY_LEFT | CM_JOY_LEFT |
| CarRight | INI `RIGHT` | CM_JOY_RIGHT | CM_JOY_RIGHT | CM_JOY_RIGHT | CM_JOY_RIGHT |
| CarForward | INI `UP` | CM_JOY_BUTTON3 | CM_JOY_BUTTON2 | CM_JOY_UP | CM_JOY_UP |
| CarBackward | INI `DOWN` | CM_JOY_DOWN | CM_JOY_DOWN | CM_JOY_DOWN | CM_JOY_DOWN |
| CarTurbo | INI `EXTRA1` | CM_JOY_BUTTON1 | CM_JOY_BUTTON1 | CM_JOY_BUTTON1 | CM_JOY_BUTTON1 |
| CarHandbrake | INI `EXTRA2` | CM_JOY_BUTTON4 | keyboard `CM_KEYB_ALT` | CM_JOY_BUTTON3 | CM_JOY_BUTTON2 |
| CarHorn | INI `EXTRA3` | CM_JOY_BUTTON2 | keyboard LCONTROL, RCONTROL | CM_JOY_BUTTON2 | keyboard LCONTROL, RCONTROL |

`CM_KEYB_ALT` (`0x5a8778`) is not in the keyboard table. A joypad with fewer than 3 buttons in DEVICE 2 therefore throws `Command CM_KEYB_ALT of device keyboard0 does not exist!`, which is fatal.

With DEVICE 2, 3 or 4 and no joystick the first bind throws `Device Joystick0 does not exist!`. `Keyboard0` and `Mouse0` must always exist: fatal `Could not find the keyboard device!` (`0x0046ee80`), `Could not find the mouse device!` (`0x0046fe50`).

DEVICE 1 details:

- `LEFT, RIGHT, UP, DOWN, EXTRA1..3` are Windows VK codes, read by `0x0046cd60` and translated by `0x00469ff0` (C10). Value 0 is fatal `Value not found. Field=%s!`. A VK not in the table is fatal `Cannot find key(s) in keyboardmap!`.
- `0x0046ced0` adds a second binding automatically: LCONTROL→RCONTROL, LALT→RALT, LEFT→NUMPAD4, RIGHT→NUMPAD6, UP→NUMPAD8, DOWN→NUMPAD2, LSHIFT→RSHIFT.

Tweak and console bindings also made always: see C8.

## C6. How values reach the car

Control struct (mine: CCarControl) at `DAT_006fbabc`: +0x00 steer float, +0x04 brake float, +0x08 gas float, +0x0c int 0..5, +0x14 int 0..10, +0x18 handbrake byte, +0x19 turbo byte, +0x1c int 0..10000 (min 800 at `0x004288a6`), +0x28 dynamics type, +0x2c gas cut-off, +0x30 float timer. Setters clamp: steer ±100 (`0x00402de0`), brake 0..100 (`0x00402e40`), gas 0..100, and gas forced 0 while +0x2c>0 (`0x00402ea0`).

Read at `0x0044ea60` only if `DAT_006fba9c != 0` and `DAT_006fb8c0 != 0`. Both are 0 from `start_game` `0x0044cf60` until the countdown calls `0x0044cda0(0)` at GO (`0x0043c3d0`, timing 2.2 s, 0.9, 0.9, 0.9). With `DAT_006fba9c == 0` ctrl +0x14 and +0x1c are zeroed and car speed fields cleared. In race states 3, 6, 8 gas, brake and turbo are forced 0 after reading (`0x44ee99`), steering is not.

`dt` = `0x004a6800(0x7128b0)`: filtered frame time, returns 0.1 if 0 or >0.1.

**Modes 1 and 2**, `0x0046f530`:

```
rate = 2*dt                                  // 0x46f574
0x004eafb0("CarLeft",  rate, rate, 1)        // takes effect at the next device update
0x004eafb0("CarRight", rate, rate, 1)
gas   = CarForward  > 0.5 ? min(100, (int)(gas   + dt*300)) : 0    // 0x46f2a0, 300 at 0x5769d4
brake = CarBackward > 0.5 ? min(100, (int)(brake + dt*320)) : 0    // 0x46f2e0, 320 at 0x5769d8
DAT_006fba2c = CarBackward > 0.5                                   // 0x46f317, 0x46f325
steer = (CarLeft*-200 + CarRight*200) * 0.5                        // 0x46f912..0x46f93f, = (R-L)*100
```

Numbers: digital steering moves 200 units/s on press and release, 400 units/s when reversing from one lock to the other (one side ramps down, the other up). Full lock takes 0.5 s. Gas 0→100 nominally 1/3 s, brake 0.3125 s, both cut to 0 instantly on release.

Gas and brake are truncated to int every frame, so the ramp depends on frame rate. Per frame increment = floor(dt*300):

| Frame rate | dt*300 | Gas step | Gas units/s |
|---|---|---|---|
| 30 Hz | 10.0 | 10 | 300 |
| 60 Hz | 5.0 | 5 (4 if slightly under) | up to 300 |
| 120 Hz | 2.5 | 2 | 240 |
| 144 Hz | 2.08 | 2 | 288 |
| 240 Hz | 1.25 | 1 | 240 |
| above 300 Hz | <1 | 0 | gas stays 0 |

Brake stays 0 above 320 Hz in the same way.

Mode 2 with an analog device: the ramp fields are set but `0x004f0c60` ignores them, so steer = x*100 directly, with no sensitivity and no slew.

**Mode 3**, `0x0046f960` (x87 read from `0x46fbad-0x46fc91`):

```
s = CarLeft > 0 ? -CarLeft : CarRight
v = CarBackward > 0 ? -CarBackward : CarForward
i = (int)(v*100)
i > 0: gas = i, brake = 0     else: gas = 0, brake = -i
f = ((100 - SENSITIVITY) + 25) * 0.04;  if f == 0: f = 5
steer = s*100 / f             // then clamped to ±100
```

Mode 3 sets no ramp, and does not write `DAT_006fba2c`.

| SENSITIVITY | f | steer at full deflection | Angle sent to car (rad) |
|---|---|---|---|
| 0 | 5 | ±20 | ±0.133 |
| 25 | 4 | ±25 | ±0.167 |
| 50 (default) | 3 | ±33.3 | ±0.222 |
| 75 | 2 | ±50 | ±0.333 |
| 100 | 1 | ±100 | ±0.667 |

**Both modes**, `0x0046f050`:

- Handbrake: `ctrl+0x18 = CarHandbrake > 0`.
- Turbo: `0x0044e970(car, CarTurbo > 0)`. Only in state 0. Updates every 100 ms by `GetTickCount`. Each tick consumes 1 of `DAT_006fba74` unless `DAT_006c2f28` is set. Turbo byte drops when released, or when oil <1 and that flag is clear.
- Horn: if `CarHorn > 0`, plays static sample `HORN2` each frame. Traffic reads the action too: `0x00423040` → `0x004237b0`. Manual: traffic changes lane on horn.

**Sink**: `0x00427b90`: turbo byte forces gas 100. `0x00428c70`:

- `0x004a2f70(car, gas, brake, handbrake, turbo)`: gas*-0.01 feeds wheel torque; brake*100 feeds a second torque of opposite sign; handbrake calls car vtable +0x2c(wheel, 1) on wheels 2 and 3, and (wheel, 0) on release. Gear is chosen automatically inside this function (+0xe4 up and down by the +0x84/+0x88 limits).
- `0x004a31d0(car, steer * 0.006666667)` (`0x5765f4`).
- Front wheel friction uses `steer*0.004` in `0x00427e60`: `|...|+0.8`, capped 2.0 with handbrake.
- Turbo below speed 60 adds a push (`0x004a2000`).

No gear key exists. CarBackward is the only backward control. See `Inferred` for reverse.

## C7. All other race keys (not rebindable)

Manual `Menu.hlp` topic 33: camera, reset and dashboard keys are not configurable. Trigger: L = level, polled each frame; E = rising edge.

| Key | API | Trig | Gate | Effect | Evidence |
|---|---|---|---|---|---|
| 1 | VK 0x31 | L | state 0 | camera `DAT_006fba5c + 5` (per character). Same id set at race start `0x0043c5d0` | `0x00438670` |
| 2 | VK 0x32 | L | state 0 | camera 0 | `0x00438670` |
| 3 | VK 0x33 | L | state 0 | hold: saves current, camera 4 (manual: Achteruitkijk). Release restores | `0x00438670` |
| 4 | VK 0x34 | L | state 0 | camera 3 (manual: Bumper) | `0x00438670` |
| 6 7 8 9 0 | VK | L | state 0 | cameras 6, 7, 8, 9, 10. Not in the manual, not gated by tweak mode | `0x00438670` |
| 5 | DI `CM_KEYB_5` | E | none | `DAT_00712784` 0→1→(tweak ? 2 : 0)→0. Manual: dashboard on/off | `0x44d823` |
| D | DI `CM_KEYB_D` | E | none | `overlay_detail` `DAT_006fb924` +1, if >1 then 0. Starts at `game.ini` value 3, so first press gives 0, then 0↔1. Unselectable in the menu (menu.ini comment `d is used by game engine`) | `0x44d990` |
| Enter | DI `CM_KEYB_RETURN` | E | none | reset car `0x0040e5a0(player, chunk, 1)`, refused within 5000 ms of last reset; text 66 `RESET (ENTER/RETURN)` | `0x44d705` |
| T | DI `CM_KEYB_T` | E | after read gate | `0x0041be70(radio, 9, player, -1)`: voice sample from the racer's list | `0x0044ea60` |
| P | VK 0x50 | L | state not 3, 6 | pause, overlay mode 2 (`Pauze / Druk een toets`) | `0x44d9eb` |
| Esc | VK 0x1B | L | state not 3, 6 | quit prompt, overlay mode 3 (`Wilt u echt / stoppen!? (J/N)`) | `0x44d9ba` |
| any VK 0..255 | VK | | pause | resume after press and release. Includes VK 1, 2 (mouse buttons). Shift alone cannot resume | `0x0044c990` |
| J or Y / Esc or N | VK | | quit prompt | J/Y: state 4, main loop ends. Esc/N: resume | `0x0044c9f0` |
| Esc, Enter, Space | VK | | state 3 after 1500 ms, state 6 after 1000 ms | leave result or game-over screen | `0x0043ac80`, `0x0043bd60` |
| CTRL+F10 | VK 0x11, 0x79 | L | none | `0x00458400`: writes `lvl%2.2d_%2.2d.bmp` (etappe, counter) every frame while held, no debounce. `0x004ce140` locks the primary surface and reads 16-bit pixels; a failed file create is fatal | `0x00458270` |
| CTRL+SPACE+T | VK | L | none, if `(&DAT_006fa58c)[etappe*0x25]==0` | timer 0xb set to 100000 ms, text 44 `EXTRA TIJD`. Not gated by tweak mode | `0x44d584` |
| CTRL+SPACE+I | VK | L | none | `DAT_006fb96c=1` (`Invulnerable`), text 46 `INVINCIBLE`. Not gated | `0x44d5dd` |
| F11 | VK 0x7A | L | spin not gated | while F11 is down, `0x00419600` busy-waits, once per AI racer per frame, in any mode. The action behind it needs tweak mode | `0x00419600` |

Text ids index `language.ini` directly (`0x00458b90`). Also automatic: text 68 `DRUK ENTER/RETURN VOOR RESET` when `ctrl+0x30 > 10` (`0x44cc9f`).

Overlay mode is `_DAT_0071277c`, which is overlay object `0x7126e8` + 0x94 (`0x00487f20`, `0x00488ef0`).

Radar and map have no key. `game.ini`: `overlay_detail ... the 'detail' key`, `Default=3 (full detail: radar, all overlay graphics)`.

Keys read but with no live path:

- `0x0041db90` reads `CM_KEYB_F/G/H`. Its only caller `0x00417980` has no references in code or data (raw pointer scan).
- `0x00427d86` (spin on key): no references.
- `0x0046f330` (speed-dependent keyboard steering: limit `100-2|v|`, min 50; 200 units/s scaled by `1-v*0.00714`; 400 units/s to centre): no references. It is not reachable.
- `0x004288b5` (sets `DAT_006fba2c`), `0x004702c0` (mouse position read): no references.
- `0x00428c70` tests VK `O` and ignores the result.
- `0x0048f250` (VK X, Z) runs only if `communi.ini` `testmode` and `testmessages` are true (`0x0048abe0`, `0x0048ae80`). Both are false in the shipped file.

## C8. Debug keys and console

Gate: `DAT_006fb950`, written only at `0x00449543` from `RASER.INI` `[helpdesk] tweak_mode`. Shipped `raser.ini`: `TWEAK_MODE=0`. Comment: `Tweak menu/extra camera's/framerate printing`. With the shipped value everything below is inert.

| Key | API | Effect | Evidence |
|---|---|---|---|
| Comma, Period | DI, level | FPSMULT `_DAT_005afa48` ±0.01 per frame, range -1..10, scales physics step | `0x0044cf90`, `0x004aa0c0` |
| M | DI, edge | cycle camera target car | `0x0044cf90` |
| Numpad + − | VK 0x6B, 0x6D | FOV ×1.1 / ×0.909, SetTransform projection | `0x0044cf90` |
| F1..F7 | DI, edge | `ACTION_AI_DEBUG, BBOX_TOGGLE, WP_TOGGLE, LINE_TOGGLE, FSM_TOGGLE, POSITIONMARKER_TOGGLE, POLY_TOGGLE`, bound always by `0x004096b0`, read by `0x00409d20` | |
| F11 | VK | freeze AI | `0x00419600` |
| F12 | DI, edge | FPS print toggle `DAT_006fb982` | `0x0044da30` |
| Y | VK 0x59 | `0x004a4600(0x715f58)` | `0x0044da30` |
| C | DI, level | `0x0043fc90` | `0x0043f8a0` |
| F | VK 0x46 | `PICTURE.PCX` dump `0x00458440` | `0x00427b90` |
| CTRL+SPACE+C | VK | tweak menus `0x004351f0` (blocking, many spin loops, `0x00431ad0` to `0x00435318`) | `0x00427b90` |
| U, I, K, J, L, A, Z, R, T + mouse X/Y | VK, DI | camera 0xe, mouse-driven camera offset. R loads, T saves (`0x00437990`, `0x00437a80`). `game.ini` comment says F7/F8, but neither is tested for this | `0x00438670` |
| camera 7 keys: U I J K L A Z PgUp PgDn Home End Ins Del R T | VK | free camera | `0x00439910` |

Console, `console.cpp` and `RaceConsole.cpp`:

- Singleton `DAT_00712654`, `0x00472190`, `0x00472230`; bindings `0x004706d0`, always made: `Console_Activate` (`CM_KEYB_TILDE`), `Console_DeActivate` (`CM_KEYB_ESC`, `CM_KEYB_TILDE`), `Console_Tab` (TAB), `Console_Back` (BACK), `Console_Return` (RETURN), `Console_Up` (UP), `Console_Down` (DOWN).
- Runs every frame `0x00471bd0`. Activation needs `DAT_006fb950 != 0` and fires on key release (`0x00470fe0`). Esc also triggers the quit prompt through VK.
- Typing `0x00471240`: table ASCII of newly pressed keys, `toupper`, 0x20..0x7E accepted. Commands `0x004713c0`: `sscanf "%s %f"`: `name value` sets (` -> %s set to %f`), `name` prints or runs. Tab completes. Up and Down walk history. Drawn as `COM:>%s`.
- Types `RInt`, `RFloat`, `RFunc`. Exactly one variable is registered: `Invulnerable` (RInt, `DAT_006fb96c`) in `0x0044c090`, the only caller of `0x00473220`.

## C9. Binding storage and defaults

Defaults, `static.ini` `[DEFAULTSETTINGS]`, read by `menu 0x004a6b3c`:

```
CONTROLTYPE=0  LEFT=37  RIGHT=39  UP=38  DOWN=40  EXTRA1=17  EXTRA2=18  EXTRA3=32
JOYSENSITIVITY=50  WHEELSENSITIVITY=50
```

Meaning, from the menu forms and manual: UP gas, DOWN brake, EXTRA1 turbo Ctrl, EXTRA2 handbrake Alt, EXTRA3 horn Space.

The shipped `game.ini` `[INPUT]` differs: `EXTRA3=72` (H), plus `DEVICE=1`, `SENSITIVITY=50`. The manual and `static.ini` say Space. `game.ini`, `static.ini` and `raser.ini` are byte-identical on disc and in the install (`cmp`).

Runtime flow:

1. `TControls` (`menu 0x004a688c` family, 48 bytes) in the player's `TSettings` (`FControls`): +0x08 Up, +0x0c Down, +0x10 Left, +0x14 Right, +0x18 Extra1, +0x1c Extra2, +0x20 Extra3, +0x24 ControlType byte, +0x28 JoySensitivity, +0x2c WheelSensitivity. Serialised to the player stream by `menu 0x004a6cf4` and `0x004a6d70`.
2. `TData.DataDestroy` (`menu 0x0047f4ac`) → `WriteToInis` `menu 0x0048c3f0` → `WriteControlStuffToIni` `menu 0x0048b350` writes `game.ini` `[INPUT]`: all seven keys always, plus:

| Menu radio | ControlType | DEVICE | SENSITIVITY written |
|---|---|---|---|
| optKeyboard | 0 | 1 | JoySensitivity |
| optJoystick | 1 | 3 | JoySensitivity |
| optJoyPad | 2 | 2 | JoySensitivity |
| optWheel | 3 | 4 | WheelSensitivity |

Evidence: `menu 0x004a6a38`, `0x004a6a70`, `0x004960fc`.

3. `spel.dat` reads it once at startup (C5). SENSITIVITY is used only in `0x0046f960`, with no clamp.

## C10. Key tables

`0x00469ff0` maps VK to name with a linear search over 106 stack records, first match wins (loop limit `0x69`). The keyboard table at `0x5b7a18` (12-byte entries) gives DIK and console ASCII. Joined on name below. `*` = VK shadowed by an earlier entry, so never chosen by VK. `xNN` = control code, rejected by the console. VK 108 (separator) is absent.

```
name,dik,vk,char
ESC,01,1B,x1B
1,02,31,1
2,03,32,2
3,04,33,3
4,05,34,4
5,06,35,5
6,07,36,6
7,08,37,7
8,09,38,8
9,0A,39,9
0,0B,30,0
MINUS,0C,BD,-
EQUALS,0D,BB,=
BACK,0E,08,x08
TAB,0F,09,x09
Q,10,51,q
W,11,57,w
E,12,45,e
R,13,52,r
T,14,54,t
Y,15,59,y
U,16,55,u
I,17,49,i
O,18,4F,o
P,19,50,p
LBRACKET,1A,DB,[
RBRACKET,1B,DD,]
RETURN,1C,0D,x0C
LCONTROL,1D,11,
A,1E,41,a
S,1F,53,s
D,20,44,d
F,21,46,f
G,22,47,g
H,23,48,h
J,24,4A,j
K,25,4B,k
L,26,4C,l
SEMICOLON,27,BA,;
APOSTROPHE,28,DE,'
TILDE,29,C0,`
LSHIFT,2A,10,
BACKSLASH,2B,DC,\
Z,2C,5A,z
X,2D,58,x
C,2E,43,c
V,2F,56,v
B,30,42,b
N,31,4E,n
M,32,4D,m
COMMA,33,BC,","
PERIOD,34,BE,.
SLASH,35,BF,/
RSHIFT,36,A1,
MULTIPLY,37,6A,*
LALT,38,12,
SPACE,39,20," "
CAPITAL,3A,14,
F1,3B,70,
F2,3C,71,
F3,3D,72,
F4,3E,73,
F5,3F,74,
F6,40,75,
F7,41,76,
F8,42,77,
F9,43,78,
F10,44,79,
NUMLOCK,45,90,
SCROLL,46,91,
NUMPAD7,47,67,7
NUMPAD8,48,68,8
NUMPAD9,49,69,9
SUBTRACT,4A,6D,-
NUMPAD4,4B,64,4
NUMPAD5,4C,65,5
NUMPAD6,4D,66,6
ADD,4E,6B,+
NUMPAD1,4F,61,1
NUMPAD2,50,62,2
NUMPAD3,51,63,3
NUMPAD0,52,60,0
DECIMAL,53,6E,.
F11,57,7A,
F12,58,7B,
F13,64,7C,
F14,65,7D,
F15,66,7E,
NUMPADENTER,9C,0D*,
RCONTROL,9D,11*,
DIVIDE,B5,6F,/
SYSRQ,B7,2C,
RALT,B8,12*,
HOME,C7,24,
UP,C8,26,
PRIOR,C9,21,
LEFT,CB,25,
RIGHT,CD,27,
END,CF,23,
DOWN,D0,28,
NEXT,D1,22,
INSERT,D2,2D,
DELETE,D3,2E,
LWIN,DB,5B,
RWIN,DC,5C,
APPS,DD,5D,
```

Menu key list, `menu.ini` `[CONTROLKEYS]` (`count=65`), format `VK,display name`:

```
0=0,<None>   1=37,links  2=38,omhoog  3=40,omlaag  4=39,rechts  5=45,insert  6=46,delete
7=36,home    8=35,end    9=33,page up 10=34,page down  11=106,*  12=107,+  13=108,separ
14=109,-     15=110,. (num)  16=111,/ (num)  17=16,shift  18=17,ctrl  19=18,alt  20=32,spatie
21=220,\     22=8,backspace  23=9,tab
24..47 = letters a..z without d and p (VK = ASCII upper)
48=188,komma 49=190,.  50=191,/  51=186,;  52=222,'  53=219,[  54=221,]
55..64 = 0..9 (Num), VK 96..105
```

Not selectable: digits, Enter, Esc, function keys, `d`, `p`. Lines `*37=68,d` and `*49=80,p` are not read (key name starts with `*`). VK 108 can be selected in the menu but would be fatal in `spel.dat` (C5).

## C11. Force feedback, deadzone, calibration

- Force feedback: none. No CreateEffect (+0x48) or SendForceFeedbackCommand (+0x58) in InputLib, cooperative level is non-exclusive (6), no effect strings. `Sidewinder ForceFeedback Joystick` is only a comment and a DEVICE value equal to 3.
- Deadzone: none. No DIPROP_DEADZONE or DIPROP_SATURATION (the only SetProperty is the mouse axis mode). No threshold in the analog path. Digital thresholds 0.5 exist only as listed in C4 and C6.
- Calibration: none in the game. Only DIPROP_RANGE is read. No centre capture. The help file (`LEESMIJ.HLP` topics 34, 35) sends the user to the Windows control panel.
- The Z axis is never used by any binding, and its range fields are never written.

## C12. Blocking code and the message pump

`0x00458020`: `PeekMessageA` remove loop. WM_QUIT (0x12) returns 1 and ends the main loop. While `DAT_00740dfc == 0` it calls `WaitMessage` and loops. On return from that state it restores surfaces (`0x004c4a60` ×3, `0x004b8bc0`, `0x004c0920`, `0x004b2ea0(0x73b020)`). It does not reset the frame timer.

`DAT_00740dfc` is written only by WM_ACTIVATEAPP (0x1C) in WndProc `0x004cd6b0` (`0x4cd746`). It is in BSS, so 0 at start. Without an activate message the game never passes the first pump.

WndProc handlers for WM_KEYDOWN, WM_CHAR, mouse and others go through pointers `0x740e0c-0x740e70`, which are never written (no WRITE in `data_refs.csv`). Keyboard messages are unused in `spel.dat`. WM_SETCURSOR hides the cursor.

Busy-wait loops on `0x004c5e40`, no message pump, no sleep, no frame:

| Function | Waits for | Reachable with shipped data |
|---|---|---|
| `0x0044c990` | P released, then any VK 0..255 pressed and released | yes |
| `0x0044c9f0` | Esc released, then J/Y or Esc/N, then Esc released | yes |
| `0x0043ac80` | Esc, Enter and Space all released | yes |
| `0x00419600` | F11 released | yes |
| `0x00439910`, tweak menus | various | tweak only |

`0x0044ca80` around pause and quit: pauses timers 0, 3, 0xb and six more (`0x0042e440`), saves mixer line 4 volume and sets it to 0 (`0x004ce0d0`, `0x004ce030`, through `mixerOpen`), waits, restores all of it, and resets the frame timer `0x004a6840`.

Mouse pointer code: `0x004cece0` (`GetCursorPos`, `ScreenToClient`, VK 1, 2) is reached only through `0x004cd660` from `0x004c4040`, the DirectDraw shutdown path.

## C13. Menu input (`menu.exe`, rewritten by hand in the port)

No `DINPUT` import, no `joyGet*`. The menu has no joystick or gamepad input at all. Input is ordinary VCL mouse and keyboard.

| Form, control | Input | Behaviour | Evidence |
|---|---|---|---|
| TfrmIntro | any key except Space (0x20); any mouse down | stop or close player, close form. Space does nothing | `menu 0x004a4a78`, `0x004a4ad8` |
| TfrmKeySettings | click key button, then key | `KeyPreview`. Key looked up in CONTROLKEYS. Not found: `MessageBeep(0)`, edit cancelled. Found: stored. Focus loss cancels. WM_GETDLGCODE adds DLGC_WANTALLKEYS | `menu 0x00491d84`, `0x00491e64`, `0x00491ef8`, `0x00491d7c` |
| TfrmKeySettings OK | | duplicate check across 7 keys (`menu 0x004925dc`). Duplicate: dialog `De toets '%s' is dubbel gebruikt!`, stays open | `menu 0x00491f28` |
| TfrmKeySettings Standaard | | loads defaults from static settings | `menu 0x00492644` |
| TfrmOptions | radios and labels | image `OPT_KEYB`, `OPT_GPAD`, `OPT_JOYS`, `OPT_WHEE`. Instellen button disabled for gamepad. Keyboard → key dialog. Joystick → slider on JoySensitivity. Wheel → slider on WheelSensitivity | `menu 0x00496480-0x004965a0` |
| TDaviGraphicSlider | Min 0, Max 100, LargeStep 5, repeat 50 ms after 250 ms | Left/Down -1, Up/Right +1, PgUp +5, PgDn -5, Home = Max, End = Min (as coded) | `menu 0x0046ad20`, `TFRMSLIDERSETTINGS.dfm` |
| TGDIButton | Enter on default or focused, Esc on Cancel button, caption accelerator, Tab order | `menu 0x00468418`, `0x00468380`. Cancel=True on TfrmCoolDialog `btnClose`, TGameMenuScreen `btnClose`, TfrmCloseDlg `btnExit`, others. Default=True on TfrmCoolDialog `btnOk1` | DFMs |
| TfrmNewPlayer, TfrmHighScoreDlg `txtName` | MaxLength 12, Enter = OK | | `menu 0x00494d44`, `0x00494fb0` |
| TfrmException2 | Ctrl+C copies | | `menu 0x004a808c` |
| Start info | `SHOWSTARTINFO` (default 1). Keyboard: `TfrmStartInfoKeyBoard` shows current key names. Others: `TfrmStartInfo` with `POPSTRT2` joystick, `POPSTRT1` gamepad, `POPSTRT3` wheel. The pictures show the device only, no button layout | | `menu 0x0049812c`, `0x00497818` |

`TFRMMAINSCREEN.dfm` holds `PopupMenu1` (`Money = 300`, `At last track`, `Unlock supercop`). No DFM assigns it to a control.

# Inferred

- **Reverse.** There is no separate reverse action (Confirmed). CarBackward feeds `0x004a2f70`, which applies a torque of opposite sign to gas through the same car vtable slot +0x20, so holding brake from standstill drives backward. Slot meaning comes from Ipion naming and code shape; the physics research should confirm it.
- **Brake lights in modes 3 and 4.** `DAT_006fba2c` goes to `0x00435470` → `0x00436850` (`0x44ed63`), which adjusts objects 4..7 of the car when nonzero. AI passes the result of `0x00403750` (error string names `IsRacerBraking`), and `game.ini` says object lights are `only used for brakes`. So this flag is the player's brake light. Mode 3 never writes it, so with DEVICE 3 or 4 the player's brake lights stay off.
- **`ctrl+0x30`** is time with no wheel contact: `0x00403170` resets it when any wheel's byte +0x25 is 1, otherwise adds dt. Used for the turbo push limit (0.5 s) and the reset hint (10 s).
- **Key `T`** is a player voice taunt or shout. Radio message 9 plays a sample from the racer's wav list (`0x0041be70`, `0x0041c150` states 0x15, 0x16, `0x0041aa80`). The name is mine.
- **`DAT_006c2f28`** (`0x004290e0`, turbo without oil) is the fast-forward pickup state. Not traced.
- **Timer 0xb** is the time-limit timer (`0x0044c8c0` ends the race when it expires). The per-etappe field `0x6fa58c` gating CTRL+SPACE+T appears to separate race types.
- **Handbrake** locks the rear wheels: car vtable +0x2c(wheel, 1) on wheels 2 and 3 is read as Ipion's wheel fix call; friction is also capped at 2.0 (C6).
- **Key `F` in `0x0042c710`** sets the player's wheel bounce offset (`0x6c30b8`) to 1.0. It is a visual wheel-suspension effect, not gated by tweak mode. See Unknown for reachability.
- **Real hardware.** DI dwDevType `0x404` is GAMEPAD with no HID flag. A HID gamepad reporting `0x10404` takes the analog path. So original gamepad behaviour varied by driver.
- **Alt-tab in the original.** `0x8007000C` (NOTACQUIRED) would be fatal if returned. The window stops polling while inactive, which likely hid this.

# Unknown

- All runtime behaviour: `spel.dat` was never executed here. Feel, real ramp timing and frame rate are unmeasured.
- Who calls the object callback at +0x70 (`FUN_0042c710` / `FUN_0042d820`). No call site found. So the `F` wheel-bounce key may or may not be live in retail.
- `0x0043fc90` (tweak `C`) and `0x004a4600` (tweak `Y`) effects. Not read.
- The help text warning about moving the wheel after pressing start (`LEESMIJ.HLP` topic 35). No centre capture or calibration exists in `spel.dat` or `menu.exe`, so the cause it describes was not found in code.
- The player save file format for `TControls`, beyond the field order. See the startup and menu research.

# Host specification

Design, not evidence. Rules cite the Confirmed item they follow from.

## H1. Key state

Keep two arrays, `vk[256]` and `dik[256]`, updated from `KeyboardEvent.code` with `preventDefault`. Every press sets **both**, because consumers differ (C7): Enter is DI for reset and VK for results; Esc and P are VK; 5, D, T are DI.

`code` to table name (C10):

```
Escape:ESC Digit1:1 Digit2:2 Digit3:3 Digit4:4 Digit5:5 Digit6:6 Digit7:7 Digit8:8 Digit9:9 Digit0:0
Minus:MINUS Equal:EQUALS Backspace:BACK Tab:TAB KeyQ:Q KeyW:W KeyE:E KeyR:R KeyT:T KeyY:Y KeyU:U
KeyI:I KeyO:O KeyP:P BracketLeft:LBRACKET BracketRight:RBRACKET Enter:RETURN ControlLeft:LCONTROL
KeyA:A KeyS:S KeyD:D KeyF:F KeyG:G KeyH:H KeyJ:J KeyK:K KeyL:L Semicolon:SEMICOLON Quote:APOSTROPHE
Backquote:TILDE ShiftLeft:LSHIFT Backslash:BACKSLASH KeyZ:Z KeyX:X KeyC:C KeyV:V KeyB:B KeyN:N KeyM:M
Comma:COMMA Period:PERIOD Slash:SLASH ShiftRight:RSHIFT NumpadMultiply:MULTIPLY AltLeft:LALT Space:SPACE
CapsLock:CAPITAL F1:F1 .. F12:F12 NumLock:NUMLOCK ScrollLock:SCROLL Numpad7:NUMPAD7 Numpad8:NUMPAD8
Numpad9:NUMPAD9 NumpadSubtract:SUBTRACT Numpad4:NUMPAD4 Numpad5:NUMPAD5 Numpad6:NUMPAD6 NumpadAdd:ADD
Numpad1:NUMPAD1 Numpad2:NUMPAD2 Numpad3:NUMPAD3 Numpad0:NUMPAD0 NumpadDecimal:DECIMAL F13:F13 F14:F14
F15:F15 NumpadEnter:NUMPADENTER ControlRight:RCONTROL NumpadDivide:DIVIDE PrintScreen:SYSRQ AltRight:RALT
Home:HOME ArrowUp:UP PageUp:PRIOR ArrowLeft:LEFT ArrowRight:RIGHT End:END ArrowDown:DOWN PageDown:NEXT
Insert:INSERT Delete:DELETE MetaLeft:LWIN MetaRight:RWIN ContextMenu:APPS
```

VK rules: use the table VK. Both Ctrl keys set VK 0x11, both Alt 0x12, both Shift 0x10 (plus 0xA1 for ShiftRight). NumpadEnter sets 0x0D. Mouse or tap sets VK 1 while down (any-key resume, C7).

Rules:

- Latch: a press stays visible until sampled once in a frame, and a release likewise, because edge keys compare two samples (C2) and taps can be shorter than a frame.
- Clear both arrays on `blur`, `visibilitychange` hidden, `pagehide`.
- Never report VK 0x7A (F11) unless `TWEAK_MODE=1`. The spin in `0x00419600` is unconditional, and the browser can swallow the key-up (C7).
- Never report VK 0x79 (F10) with the original path active unless the host implements primary surface Lock with 16-bit pixels; `0x004ce140` needs that and a working file create, or it is fatal (C7). A host-level canvas capture on the same chord is the safe replacement.
- Keep at most 31 keys and 24 joystick buttons active, because 32 active entries throw (C2).

`GetAsyncKeyState(vk)`: return 0x8000 (negative SHORT) if down, else 0. VK 0 returns 0.

## H2. Objects the game needs

- `DirectInputCreateA` returns S_OK and an IDirectInput object with the methods in C3.
- `EnumDevices(type, cb, ref, 1)`: type 3 one keyboard, type 2 one mouse (both always, also on phones with no keyboard or mouse), type 4 one joystick when DEVICE is 2, 3 or 4, none needed for DEVICE 1. Call `cb` synchronously, stdcall, with a DIDEVICEINSTANCEA in linear memory; only guidInstance at +4 is read.
- `QueryInterface` must succeed for the IID in C3, on all devices. Refcount both interfaces.
- `GetProperty`/`SetProperty`: the property argument is the integer 4 or 2, not a pointer to a GUID.
- `GetCapabilities` for the joystick: dwSize as given, dwAxes >= 2, dwButtons >= 4 (a value below 3 in DEVICE 2 is fatal, C5), dwDevType per H4.
- `GetProperty(DIPROP_RANGE)`: lMin=0, lMax=65535 on objects 0 and 4. Divisor is 32767. lMin must be 0 (C4).
- `GetDeviceState`: return only S_OK. Fill zeros when unfocused. A disconnected pad reads centred (lX=lY=32767, lZ=0, buttons 0). Any error other than INPUTLOST is fatal (C3).
- Mouse state: 16 zero bytes unless tweak mode is on.
- `Poll`, `Acquire`, `Unacquire`, `SetDataFormat`, `SetCooperativeLevel`: S_OK. The data formats need no parsing; the sizes identify the layout.

## H3. Scheduling, focus, clock

- Deliver WM_ACTIVATEAPP wParam=1 to WndProc `0x004cd6b0` before the first pump, otherwise the game waits forever (C12).
- On focus loss: clear keys, queue WM_ACTIVATEAPP 0. `WaitMessage` suspends until focus returns, then queue WM_ACTIVATEAPP 1. This is the original behaviour. Freeze the host clocks (`QueryPerformanceCounter`, `timeGetTime`, `GetTickCount`) during suspension, since this path resets no timer (C12) and the race timers use `GetTickCount`.
- The four retail spin loops (C12) must see new input while spinning, so the host needs a yield there. Use the same mechanism as the frame yield. With a Worker and a SharedArrayBuffer for the key arrays no yield is needed for correctness, only `Atomics.wait` to save CPU. On the main thread with Asyncify or JSPI, count `GetAsyncKeyState` calls since the last flip and yield once past a limit: `0x0044c990` makes 512 calls per sweep, a normal frame far fewer. Alternative: replace `0x0044c990` and `0x0044c9f0` at recompile time with one-shot state machines.
- Keep the frame rate at or below 300 Hz, otherwise gas stays 0 in modes 1 and 2 (320 Hz for brake). Pacing above 60 Hz already changes the gas ramp (C6). The timing research should fix the rate.

## H4. Which DEVICE for which input

Bindings are fixed at startup (C5). The JS menu writes `[INPUT]` as in C9, and may choose the virtual device layout:

| Port input | DEVICE | dwDevType | Steering | Gas, brake | Buttons on `rgbButtons` | Brake lights |
|---|---|---|---|---|---|---|
| Keyboard | 1 | none | original ramp, 200 units/s | original ramps | none | yes |
| Touch wheel | 2 | `0x0604` | lX, instant, ±100 | button 2 (gas), lY full down (brake): original ramps | 0 turbo, 1 horn, 2 gas, 3 handbrake | yes |
| Gamepad radio | 2 | `0x0204` | LS X, instant, ±100 | RT or A → button 2, LT or B → lY: original ramps | as above | yes |
| Gamepad radio, original digital feel | 2 | `0x0404` | LS X or D-pad, threshold 0.5, ramp 200 units/s | as above | as above | yes |
| Joystick radio | 3 | `0x0204` | LS X, scaled by JoySensitivity | analog lY = RT−LT | 0 turbo, 1 horn, 2 handbrake | no |
| Wheel radio, real wheel pad | 4 | `0x0604` | LS X or wheel, scaled by WheelSensitivity | analog lY | 0 turbo, 1 horn, 2 handbrake | no |

Note that the button layout differs between DEVICE 2 and DEVICE 3/4 (C5).

Axis encoding:

```
lX = round((steer + 1) * 32767)     // steer -1..+1 → 0..65534; 32767 is exactly centre
lY = round((1 - y) * 32767)         // y = +1 is up/gas, -1 is down/brake
```

Deadzones are host-side only, the game has none (C11). Use the reference's `axisDeadzone` (0.18, `RedCat Superkarts/source/input.js`) for sticks. There is no rumble to emulate (C11).

Gamepad menu navigation is a port addition; the original menu had none (C13).

## H5. Touch steering wheel, fewest changes

No change to recompiled code. No hook, no memory poke. The analog value enters through `lX` of the virtual joystick, and original code takes it from there:

`lX` → `0x004ef650` x → `0x004ef6e0` `CM_JOY_LEFT/RIGHT` → `0x0046f530` steer = x*100 → `0x00402de0` clamp → `0x00428c70` `0x004a31d0(car, steer/150)`.

Reference interface: `touchWheelInput()` in `RedCat Superkarts/source/input.js` returns `{steer, throttle, brake}`.

```
[INPUT] DEVICE=2 , dwDevType=0x0604 , dwAxes=2 , dwButtons=4
lX = round((steer + 1) * 32767)
lY = brake > 0 ? 65534 : 32767        // y=-1: CM_JOY_DOWN=1.0, >0.5 → CarBackward
rgbButtons[2] = throttle > 0 ? 0x80 : 0   // CarForward
rgbButtons[3] = handbrake pedal ? 0x80 : 0
rgbButtons[0] = turbo ? 0x80 : 0
rgbButtons[1] = horn  ? 0x80 : 0
```

Why DEVICE 2 and not 4:

- Steering reaches the same ±100 limit as the keyboard with no sensitivity setting.
- Gas and brake use the original 300 and 320 units/s ramps and the original reverse path.
- `DAT_006fba2c` is written, so brake lights work.
- In the reference, wheel-down is brake/reverse and the right-hand pedal is handbrake, which matches these bindings.

Limit: gas is on/off. If partial throttle from the wheel's analog drive axis is wanted, use DEVICE 4 with `lY = round((1-(throttle-brake))*32767)` and write `SENSITIVITY=100` (f=1, full ±100). Buttons then become 0 turbo, 1 horn, 2 handbrake. Brake lights stay off in that mode unless the host writes int32 at `0x6fba2c` during Poll (read at `0x44ed63`, never overwritten in mode 3).

Steering has no slew in either analog path, which matches the original analog behaviour. A slew limiter would be a host adaptation. For keyboard parity it would be 200 units/s (2.0 in `steer` per second).

Mid-race source change: not supported by the game. If wanted, merge all sources into Joystick0 in DEVICE 2, with arrow keys producing `steer` through a host ramp of ±2*dt per frame and Up/Down driving button 2 and lY. Keyboard-only sessions should stay on DEVICE 1, so the original ramp code runs. A fallback with one hook, for touch steering on top of DEVICE 1: override the float passed to `0x00402de0` at `0x0046f93f`.

## H6. On-screen buttons and what they set

| Button | Sets |
|---|---|
| Camera 1, 2, 4 | VK 0x31, 0x32, 0x34 |
| Look back (hold) | VK 0x33 |
| Dashboard | VK and DIK of 5 |
| Overlay detail | VK and DIK of D |
| Reset; also results "continue" | VK 0x0D and DIK 0x1C |
| Taunt | VK and DIK of T |
| Pause | VK 0x50 |
| Quit | VK 0x1B, then on-screen J (0x4A) and N (0x4E), since `0x0044c9f0` accepts nothing else |
| Resume from pause | any tap: VK 1 |

## H7. Keep or hide

| Item | Decision | Reason |
|---|---|---|
| Console, tweak menus, F1..F7, F12, M, Y, C, F, comma, period, +, −, debug cameras | leave code and keep the `TWEAK_MODE` gate. Default data keeps them off. Do not add UI | Inert with shipped `raser.ini` (C8), several spin |
| CTRL+F10 | mask original path; optional host capture | Needs surface Lock, writes each frame (C7) |
| CTRL+SPACE+T, CTRL+SPACE+I | keep unchanged | Retail behaviour (C7). Ctrl+T cannot be intercepted by most desktop browsers without Keyboard Lock, so T may be unreachable there |
| Cameras 6..0, D, T | keep | Retail, ungated (C7) |
| F11 | mask (H1) | Spin hazard |

## H8. Browser conflicts for default keys

These are browser facts, not game facts.

- Arrow keys and Space scroll: `preventDefault`.
- Alt focuses the browser menu on Windows and Linux: `preventDefault`.
- Ctrl (turbo) combined with T, N, W is reserved. `navigator.keyboard.lock()` in fullscreen helps on Chromium only.
- Esc leaves fullscreen without necessarily reaching the page, so provide an on-screen quit.
- On macOS, Ctrl+Left/Right switches desktops. This hits the default turbo plus steering chord; the key dialog lets the user rebind turbo, and the port should say so.

## H9. Menu port checklist

- Key dialog: accept only CONTROLKEYS VKs; beep and cancel otherwise. Drop entry 13 (VK 108), which is fatal in `spel.dat`. Duplicate check across 7 keys.
- `Standaard` loads `static.ini` values: horn is Space (32), not `game.ini`'s 72.
- Write `[INPUT]` as in C9 before starting a race. Sensitivity slider 0..100, step 5 (keys as C13).
- Intro: any key but Space, or a click, skips.
