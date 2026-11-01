# Host: Win32, DirectX and the process around the race

What `spel.dat` gets from Windows and DirectX, and how `source/host/` answers it: image, process start and exit, the race loading screen, imports, COM, files, INI, registry, message pump, window messages, clocks, memory and exceptions. Part of [original-behavior.md](../original-behavior.md). Rows per import and method are in [parity/host.md](../parity/host.md). Programs, versions, saves and the reference environment are in [provenance.md](../provenance.md).

## How to read this

**Addresses.** Plain addresses and `S:` are `spel.dat`, `M:` is `menu.exe`, `L:` is `A2Racer4.exe`. The exports are in `original-game-decompiled/decompiled/game__*/`. Detail notes: `docs/research/win32-surface.md`, and `docs/research/startup-flow.md` for the process chain. A note name with a section, such as `sim-timing.md C3`, means the file in `docs/research/`.

**Original evidence.** The decompile package's own observation never ran `spel.dat` (`dynamic/RESULTS.md`). The reference runs do, under Wine on Amsterdam ([`evidence/reference-wine/results.md`](../../evidence/reference-wine/results.md)), and measure the rate, the first time steps, the countdown and the car, not the host surface. reference-86box runs the 8-bit path on an emulated Windows 98 machine and reads only its screen ([`docs/research/render-8bit.md`](../research/render-8bit.md)). So everything about the original here is static reading unless a line says otherwise. The owner's patch notes (`A2 Racer 4 Patch/A2-Racer-4-Fixes`) describe runs of a patched `spel.dat`; they are cited as the owner's notes.

**What being the same machine code gives.** Code inside `spel.dat` that runs in the port is the original instructions lifted one to one, so its logic is the shipped logic. That does not cover x87 precision (f64, not 80-bit), the clocks (virtual), or anything the host answers (this whole part), and rendering and audio are reimplemented.

**Checks.** Names refer to tools; procedures and results are in [validation.md](../validation.md). All are on etappe 0 (Amsterdam), in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan unless stated. No real phone, tablet or gamepad and no other browser engine was used.

| Name | Tool |
|---|---|
| check-flow | `tools/check-flow.mjs` |
| check-race-ui | `tools/check-race-ui.mjs`, 76 checks named in `evidence/race-ui/summary.json` |
| repeat-trace | `tools/benchmark.mjs` with `tools/compare-traces.mjs` |
| check-phone-flow | `tools/check-phone-flow.mjs`, taps on an emulated touch profile |
| check-software | `tools/check-software.mjs`, the 8-bit path through the real menu, 17 of 17, by name in `evidence/software/flow/summary.json` |
| reference-wine | `tools/reference-wine/`, the original `spel.dat` under Wine |
| reference-86box | `tools/reference-86box/`, the original `spel.dat` at `RESOLUTION` 0 and 1 on a throwaway copy of the owner's 86Box Windows 98 machine, screenshots of the guest. `evidence/reference-86box/results.md` |
| run-bot | `tools/run-bot.mjs`, a whole race headless |
| check-driving | `tools/check-driving.mjs`, headless Node with no renderer and no opponents |
| boot-all | `tools/build-race-lists.mjs`: 10 etappes with 8 cars, 2 s each, in Node with no renderer, to record which files each race reads. Not a gameplay check |
| form-check | Per-form browser checks, `evidence/forms/` |
| reference-frame | First race frame by eye against the owner's screenshot of his patched game under Wine |

A fix check is a one-off script run by whoever made that fix. It is not kept as a tool. A check covers only what it says, and none of them compares the host's answers with Windows: reference-86box compares pictures.

One fix check is not on Amsterdam: `fix check: launch through the menu, 6 s of gas, 0 console errors`, the launch check of track 9 with car 7, on the final build when the updates came in, in headless Chromium: the real menu, a race on the keyboard device, 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. Nothing else: no lap, no race end, no sound, no comparison with the original. The original has not been run with the updates.

**Files of the checks.** `tools/check-driving.mjs`, `check-traffic.mjs`, `run-bot.mjs`, `run-headless.mjs`, `build-race-lists.mjs` and `reference-wine/port-launch.mjs` read their files from `public/assets/game` and pin the race with `pinRace` in `source/host/race-setup.js`: etappe, car and laps, `BRITISH` for etappe 9, money 0, tune-ups 0. They used to read `original/install`. `?race=1` takes `&etappe=N&car=N`, and `&resolution=N&chunks=N`, which `pinRace` writes to `raser.ini [PROGRAM] RESOLUTION` and `game.ini [OPTIONS] VISIBLECHUNKS`; `tools/reference-86box/port-rest.mjs` uses them for the port's frame at rest. `tools/reference-wine/prepare.sh` still copies `original/install`, without the updates. For etappe 0, car 0 that is the same data: of `car_cfg.ini` only the row of car 7 and new wheel rows differ, of `vdyns.dat` only record 7, of `damage.ini` only truck rows.

**Host-call count.** Counts below come from one headless whole race on Amsterdam around the `tools/run-bot.mjs` setup: same wasm and host code, the bot, no renderer, a stand-in sound backend whose `GetStatus` follows play and stop, and one pause and one quit dialog added. 37,034 ticks, ending with `FINISHED=1`. A second, 40 s run used `DEVICE=2`. The counts say which calls the recompiled code makes on the host's answers. They are not one of the checks, they are not from a run under Windows, and they say nothing about whether the answers match Windows. They ran the 16-bit path, so they say nothing about `RESOLUTION` 0 and 1 either.

## Executable image

**Original behaviour.** `spel.dat` is a PE32 x86 GUI executable of 1,875,968 bytes with a `.dat` name. Base `0x00400000`, no relocations, no resources. Entry `0x00559715` is the MSVC 6 C runtime, which calls `WinMain` at `0x00458270`.

| Section | Range | Note |
|---|---|---|
| `.text` | `0x401000-0x575fff` | Also holds data: 182 jump tables and 25 byte index tables after their functions, a table at `0x566670`, and the DirectInput data formats at `0x549e20-0x54b190` |
| `.rdata` | `0x576000-0x58cfff` | IAT `0x576000-0x576250`, vtables, GUIDs |
| `.data` | `0x58d000-0x751407` | Raw size `0x3d000`, so `0x5ca000-0x751407` is BSS |

Stack reserve `0x100000`, commit `0x1000`. Only `FS:[0]` is used from the TEB (3,141 instructions). Nothing writes to `.text` and nothing checksums it.

**Evidence.** PE header, `sections.csv`, `entry` decompile, `win32-surface.md` C0 and C7. SHA-256 `ccd1b03472b25c8b7acacf4ba7e6abf60f657dfff2efd90f29e740b03f62286b`, same bytes on disc at `Data/spel.dat` (`inventory/install_vs_disc.csv`).

**Status.**
- Confirmed: all of the above, from the file itself.
- Inferred: nothing here.
- Unresolved: the stack depth really reached (`win32-surface.md` Unknown).

**Where the port implements it.** `tools/recomp/build.py` and `tools/recomp/recompile.py`: the image sits at its original addresses in linear memory, so absolute addresses stay valid. `tools/recomp/out/report.json` gives 8,473 functions, 448,524 instructions and 6,481,204 bytes of wasm. `.text` is not loaded, except tables that absolute references read (`text_refs` in `build.py`).

Three byte patches, `PATCHES` in `tools/recomp/replacements.py`. The build stops if the old bytes are not there.

| Address | New bytes | Meaning |
|---|---|---|
| `0x004CD478` | `EB B6` | No-CD change, owner's part 7: the fatal branch of the disc search returns |
| `0x00416004`, `0x00428991` | `00 10 3F 00` | The mass numerator of the traffic pushes reads a host cell at `0x3F1000`, owner's part 9 `traffic_mass`. `Race.instantiate` fills the cell with `min(1, tick * 25)`. See `docs/intentional-differences.md` |

`REPLACEMENTS` in the same file lists what is not lifted, each with a reason; the table is in `docs/recompiler.md`. `report.json` lists 10 functions that could not be lifted and trap if called. Read from the code and data: `FUN_00465345` is a misdecode inside a call displacement, `sub_004e4150` is the text `PAN`, `sub_004f9d00` is table data, `FUN_0054aeb0` is the mouse data format, and `FUN_0055e0fd`, `FUN_0055e102`, `FUN_00561c91`, `FUN_00561dd1`, `FUN_00561dde`, `FUN_00566f61` are helpers of the CRT `exp`, `sinh` and `cosh` tables at `0x5c8bb3` and `0x5c8bea`. The `_CIsinh` family is replaced as a unit, and no code refers to the `exp` table (scan of `.text` for its addresses). None is a game function.

**How it was compared.** The build writes the input's SHA-256 into `spel.meta.json`; it does not compare it with a stored value. That value equals the inventory's hash. No comparison of the running image with the original was run. reference-frame shows the first race frame looks right on Amsterdam, which says nothing about the layout as such.

## Process start, fatal path and exit

**Original behaviour.** `entry` runs the CRT start (`GetVersion`, heap, `_ioinit`, command line, environment, `_setargv`, `_setenvp`), then `WinMain(hInst, 0, cmdline, nCmdShow)`. `WinMain` calls `FUN_00448cd0` (registers `RASER.INI` and `GAME.INI`), `init_main FUN_004580e0`, `start_game FUN_0044cf60`, then the loop below, then `exit_main FUN_00458210`. `lpCmdLine` is unused.

Fatal path `FUN_004c4150` (over 1,600 sites): format the text, force the debug log on, `ShowWindow(SW_MINIMIZE)`, drain messages, `MessageBoxExA`, `ExitProcess(1)`. It skips the write-back, so `game.ini` still has `finished=0` from init (`FUN_004491f0`). The launcher ignores the exit code and starts `menu.exe /Default`.

**Evidence.** `FUN_00458270`, `FUN_00458210`, `FUN_004c4150`, `FUN_004c4040`; `startup-flow.md` sections 1 and 5; `win32-surface.md` C0.

**Status.**
- Confirmed (static): call order, fatal path, shutdown `PostMessageA(WM_CLOSE)` then one `FUN_004cd660`.
- Confirmed (static): `FINISHED=1` with `Out_Of_Time=1` is normal in mode 0. Timer `0xB` runs out and does not end a race in mode 0: `0x44c8c0` acts on it only in mode 1, and `0x44b1c0` writes `out_of_time` when it reads 0. check-flow's `game.ini` holds both after the bot's 593 s on Amsterdam, and the host-call count's race does the same.
- Inferred: the launcher passes `spel.dat` an empty argument (`L:0x407f40` has reads only).
- Unresolved: the whole order at run time, launcher to exit. The package saw no run of `spel.dat`. The reference runs start `spel.exe` directly and end with `wineserver -k`, so they show the start of a race and no exit.

**Where the port implements it.**

- `Race.boot` in `source/host/race.js`: the CRT start runs as shipped from `meta.entry` until the `hook!WinMain` thunk throws `BootDone`, then `boot` makes the same three calls.
- The host supplies `GetCommandLineA` = `spel.dat`, an empty environment and `C:\A2Racer4` as folder.
- `ExitProcess` and `TerminateProcess` throw `GameExit` (`installWin32` in `source/host/win32.js`). `Race.tick` and `Race.finish` catch it and end the race.
- `RaceRunner.run` in `source/race-runner.js` catches any failure of `RaceRunner.load`: a fetch, `instantiate`, `boot`, or a `GameExit` during boot. It logs the error, shows `De race kon niet starten: <reden>` for 10 s unless a `GameExit` has already put the game's message up, writes `game.ini [PLAYER] finished=0` (a fetch can fail before `FUN_004491f0` has cleared it), cleans up and returns.
- `App.startRace` in `source/app.js` then runs `flow.afterRace`, as the launcher ran `menu.exe /Default`. A race that ends any other way takes the same route.
- An exception during a tick reaches `RaceRunner.frame`, which logs it, shows `Race gestopt door een fout: <reden>` for 10 s and ends the race. `finished` is still 0 from init.
- `RaceRunner.endWait` holds the last frame until Esc, Enter and Space are up, as `0x0043ac80` waits, with a 5 s limit the original does not have, because a key-up the browser swallowed must not hold the page. `menu.ignoreRepeat` then keeps a held key's repeats out of the menu.
- C runtime exit does not run after a normal race. `FUN_004cd660` handles one message (`WM_CLOSE`) and returns, so `WM_QUIT` stays in the queue, and `WinMain` is replaced. Nothing depends on it: every file is closed by then.

**How it was compared.**

- check-flow: a race ends with the game writing `FINISHED=1` and `TRACKTIME 593233`, then `TfrmResults` and back to `TfrmQuickRace`, with the save file present and zero console errors or warnings. run-bot does the same race headless.
- check-race-ui: `quit dialog: J ends the race, finished=0`, the finish and game-over screens (entered through `FUN_0044cda0`), and `load failure: back in the menu with a message, finished=0`. The load failure was caused by aborting the fetch of `spel.wasm`, not by a fatal in the game.
- boot-all ran `boot` for all etappes and cars, without a renderer. That is not a gameplay check.
- No fatal path of the game itself was triggered in any check, and `ExitProcess` has no calls in the host-call count. So the status-line message and the `GameExit` route from a real `FUN_004c4150` are read from the code, not run.

## Race loading screen

**Original behaviour.** `FUN_004415e0`, once per progress step: `FUN_004416f0` stretches the `raser.ini [wait_hi]` picture of the etappe to the full mode, the overlay draws `OVL_PROGRESS_BAR` (11 frames `ovl_p00..p10`, element at 295,450, rectangle 308.5-596.5 by 438-462), then a flip. The frame is `ftol(11 * pct * 0.01)` (`0x004976d0`), with `pct` from `raser.ini [progress] percent0..` = 10, 20, 30, 40, 50, 60, 60, 70, 80, 90, 100. The last step (`0x004581d0`) runs with game state 1 already, so it draws the normal HUD on the picture. On the 8-bit path the picture is the PCX of `[wait_hi]` at `RESOLUTION` 1 and of `[wait_lo]` at 0 (`FUN_00449cb0`), decoded into the buffer screen, and the bar's art is `overlay.pcx`.

**Evidence.** `FUN_004415e0`, `FUN_004416f0`, `0x004976d0`; `hud-overlay.md` sections 9, 11a and 12; `win32-surface.md` C4; `8bit-drawing.md` section 9.

**Status.**
- Confirmed (static): steps, frame rule, table.
- Inferred: nothing here.
- Unresolved: how long the steps took on period hardware. The reference runs load the level under Wine from files on tmpfs and do not time the steps.

**Where the port implements it.** `RaceRunner.load` and `RaceRunner.showBar` in `source/race-runner.js`, `#loading` in `source/index.html` and `source/style.css`. The picture is `assets/loading/eNN.png`, in a 4:3 stage. The bar frames are `assets/loading/bar-00.png` to `bar-10.png`, rendered by `prepare_loading_bar` in `tools/prepare-assets.py` from the `ovl_pNN.d3d` UVs on `overlay.tga` at twice the size of the 288x24 rectangle, with the race's 565 colour-key rule and filter. Edge pixels are the port's choice (`render-textures.md` rule 11). They stand at the original's rectangle and use the same frame rule. `RaceRunner.load` picks the art by `RESOLUTION`: at 1 `eNN-8.png`, at 0 `eNN-lo.png`, both with `bar8-00.png` to `bar8-10.png`. `prepare_loading` makes the pictures from the PCX files through the game's palette, `prepare_loading_bar_8` the bar from `overlay.pcx`, one texel per pixel, index 0xFE keyed.

Differences on purpose: the frame follows the download of the race files (0 to 90%, then 95%) instead of the `[progress]` table, and it stands on that frame while `Race.boot` runs, because boot blocks the browser and the game's own progress flips never reach the screen. The last step with the HUD is not shown. The first race frame comes after boot.

**How it was compared.** Fix checks: the bar's on-screen rectangle measured 308.5, 438, 288, 24 in canvas units; the 11 frames on a contact sheet show 0 to 10 lit beads. check-software passes through the 8-bit art on Amsterdam, without a screenshot of it. No comparison with the original's screen during loading was run, on either path.

## Imports

**Original behaviour.** 142 imports: USER32 29, DDRAW 3, DINPUT 1, DSOUND 2, KERNEL32 91, ADVAPI32 1, GDI32 7, WINMM 8. No thread, sleep, timer, MCI, AVI or registry import. Dependencies that decide game behaviour:

| Import | What the game needs |
|---|---|
| `GlobalMemoryStatus` | `dwTotalPhys` over 17,000,000, or `FUN_00450de0` sets music volume to 0 |
| `GetDriveTypeA` | 5 = CD-ROM, drives the disc check |
| `GetFileAttributesA` | -1 for a missing file drives real decisions |
| `GetFileType` | 1 for files, or the CRT treats them as devices |
| `ShowWindow` | Must deliver `WM_ACTIVATEAPP(1)` before the first pump, or `FUN_00458020` blocks |
| `PostMessageA` | Must be visible to the next `PeekMessageA`, or `FUN_004cd660` reaches fatal `FUN_004cece0` |
| `mixerGetNumDevs` | 0 is safe: `FUN_004ce0d0(4)` returns -1 and pause does nothing to the mixer |
| `wsprintfA` | 14 distinct formats at 27 sites: `%d`, `%s`, `%04d` |
| `GetAsyncKeyState` | Sign bit. `FUN_004c5e40(vk)` reads Shift first: every plain poll returns 0 while Shift is held |

**Evidence.** `imports.csv`, `win32-surface.md` C1. Format strings read from the bytes at every `wsprintfA` site by a script.

**Status.**
- Confirmed (static): the table above and the tiers in `win32-surface.md` C1, with the changes in the corrections table at the end of this file.
- Confirmed (static, and one headless read): `FUN_00439910` (the `U` spin) is gated by tweak mode, indirectly. `0x438a6c` compares the camera id of the active slot with 7. Key 7 stays in slot 0, and slot 7 is selected only from view 0xE, which only the tweak-gated key `U` selects (`FUN_00438670`, `FUN_004390d0`, `FUN_004397f0`). So it is not reachable in retail.
- Confirmed (static): GDI text is not reachable with shipped data. `0x44da30` needs tweak mode, `0x40b380` needs `DAT_006fb97c`, set only by `F1` under tweak (`FUN_00409d20` is called only when `DAT_006fb950 != 0`), `0x48f380` and `0x48f720` need `communi.ini testmode` (shipped false), and the console needs tweak mode at `0x47108d`.
- Confirmed (static): `MessageBeep` is unreachable with shipped data. It sits in `FUN_0045e240`, in the update of particle type 0 (vtable `0x5768f0`). Type 0 is only created through script `CreateParticles` (`FUN_00474690`), and `bonus.dso` declares that function and never calls it; direct callers pass types 1 to `0xc`.
- Inferred: none.
- Unresolved: whether real Windows and Wine answers differ from the host's in ways this code can see beyond the list above. No import trace of the original was available for this work.

**Where the port implements it.** `installWin32` in `source/host/win32.js` (`m.api`, `m.bindRaw`), `installDirectX` in `source/host/directx.js` for the DirectX factories.

- 137 of 142 are bound. The other 5 are the console family (`ReadConsoleInputA`, `SetConsoleMode`, `GetConsoleMode`, `PeekConsoleInputA`, `GetNumberOfConsoleInputEvents`), used only by `_getch` and `_kbhit` under script `getch` and `kbhit`, which `bonus.dso` declares and never calls. An unbound import throws `Host function not implemented` (`Machine.onUnimplemented` in `source/host/machine.js`).
- All 24 hook thunks in `spel.meta.json` are bound.
- 74 of the 142 were called in the host-call count. The other 63 bound ones sit on fatal, windowed, 8-bit, tweak or CRT paths that race did not take. The windowed and tweak paths have bound stubs that do nothing. What the 8-bit path needs from the host is under COM interfaces.

**How it was compared.** `imports.csv` against the binding calls, by script, and the host-call count for which calls run. check-flow and run-bot show that the race path gets through on the host's answers with no host error. boot-all shows the same for the first 2 s of every etappe and car. The answers were not compared with Windows.

## COM interfaces

**Original behaviour.** DirectX 5 interfaces, kept as raw pointers and called by vtable offset. Almost every failure is fatal, so the host must answer `S_OK` where listed. Offsets called:

| Interface | Offsets |
|---|---|
| IDirectDraw | `+00 +08 +14 +18 +20 +50` |
| IDirectDraw2 | `+00 +54 +58` |
| IDirectDrawSurface | `+00 +04 +08 +0c +14 +2c +30 +44 +54 +58 +60 +64 +68 +6c +70 +74 +7c +80` |
| IDirectDrawPalette | `+10 +18`, at 8 bits only |
| IDirect3D2 | `+08 +0c +14 +18 +20` |
| IDirect3DDevice2 | `+08 +0c +18 +24 +28 +2c +34 +5c +64 +68 +74 +78` |
| IDirect3DViewport2 | `+20 +30 +44` |
| IDirect3DMaterial2 | `+0c +14` |
| IDirect3DTexture2 | `+04 +08 +0c +14` |
| IDirectInputA | `+08 +0c +10` |
| IDirectInputDeviceA | `+00 +08 +0c +14 +18 +1c +20 +24 +2c +34` |
| IDirectInputDevice2A | `+64 +08` |
| IDirectSound | `+08 +0c +14 +18` |
| IDirectSoundBuffer | `+08 +20 +24 +2c +30 +34 +38 +3c +40 +44 +48 +4c` |

Never called: `CreateLight`, `Begin`, `Vertex`, `GetRenderState`, `SetRenderTarget`.

Numbers the game takes from the answers:

| Answer | Effect |
|---|---|
| Texture-memory probe `FUN_004bc0f0` | Creates 256x256 surfaces until one fails, in a 1,024-entry stack array with no bound check. Stores count x 65536 x bytes per pixel at `0x73b4f9`, which caps `custom_texture_memory` and goes to `[GFX OPTIONS] available_texture_memory` |
| `EnumTextureFormats` | Needs a non-alpha 16-bit format, else fatal in `FUN_004c2a50`. Alpha: most alpha bits wins. At `RESOLUTION` 0 and 1 it selects an 8-bit format instead |
| Device caps | `dwFlags` != 0 selects the HAL texture path; both blend-cap fields 0 turn `alpha_blending` off; `dwMaxTextureWidth` 0 means no limit. `dwFlags` 0, what the 8-bit path needs on its Ramp device: one surface per texture, and no `Load` |
| `GetPixelFormat` | RGB shifts and widths derived from the masks. With bit 0x20 set, the 8-bit case, the masks stay unread; without it a zero mask spins (`FUN_004c8540`) |
| `CreatePalette` | At 8 bits `FUN_004c04b0` calls `SetEntries` through the object at `0x4c0562`, so it must exist. It must keep its own copy: the flitser passes a stack buffer, and `FUN_004c9ff0` changes its table between calls |
| `IDirectInput::EnumDevices` | `keyboard0` must exist; `[INPUT] DEVICE` must name an attached device |
| `SetFormat` on primary sound | Tries modes 13 down to 1 until one succeeds |

**Evidence.** `win32-surface.md` C3 (sites and arguments from `disassembly.asm`). Offset-to-name mapping comes from the DirectX 5 headers, corroborated by adjacent error strings for most (`win32-surface.md` lists which are header knowledge only). A scan of `disassembly.asm` for calls through the interface globals found no offset outside this list; calls through pointers kept in tables are not covered by that scan. The host-call count found `AddRef` on surfaces and textures from `FUN_004b2cb0` (sites `0x4b2d3d`, `0x4b2d5e`) that way, and no other method outside the list. `README_technical_spel.dat.md` part 4 agrees on the probe and its crash on modern cards. The 8-bit path: `8bit-device.md`, `8bit-textures.md`, and [`render-8bit.md`](../research/render-8bit.md), which holds where they differ.

**Status.**
- Confirmed: vtable offsets and arguments, from call-site bytes.
- Confirmed from the frames of reference-86box: the 8-bit path works on Windows 98 with DirectX 9 and the real Ramp rasteriser, on an emulated machine.
- Inferred: method names where only header knowledge names them (`AddRef`, `Release`, `IsLost`, `Restore`, `GetDC`, `ReleaseDC`, `SetLightState`, `WaitForVerticalBlank`, `Poll`, `GetFrequency`, `SetProperty`, `GetProperty`, `Unacquire`).
- Unresolved: real driver answers on period hardware, including how much texture memory a typical card reported. `LEESMIJ.HLP` names 4 MB as the minimum for a 3D card; nothing gives a typical value.

**Where the port implements it.** `installDirectX` in `source/host/directx.js`, in vtable order, every offset above bound. Host choices:

| Item | Host's answer |
|---|---|
| Device | HAL accepted first try. `GetCaps`: `dwFlags` nonzero, blend caps `0x1FFF`, `dwMaxTextureWidth` 0. With the Ramp GUID, which the 8-bit path passes: `device.ramp`, `HW` empty, `dwFlags` 0 |
| Texture-memory probe | `createSurface` refuses by bytes, after 128 surfaces at 16 bits and 256 at 8, so `0x73b4f9` holds exactly `0x1000000` (16,777,216) on every machine. That is the least value that keeps `Maximaal` in `M:0x488bd8`, and it stays under the 1,024-entry array. The number is the host's choice, not a measured period value |
| Texture formats | RGB 565 and ARGB 4444. On the Ramp device one format, `PAL8` |
| Surfaces at 8 bits | `SetDisplayMode` keeps the bits in `host.screen`. A surface with no format takes `screenFormat()`, `PAL8` there: flags 0x60, 8 bits, zero masks. `softFill` and `softBlit` work by the byte, with 16.16 steps from pixel centres when they stretch, as into the page's tiles. `host.bufferScreen` is the target at focus 2, and counts as a screen in `Blt` |
| Palette | `CreatePalette` writes an `IDirectDrawPalette` with its own copy of the 1024 bytes. `GetEntries` reads the copy, `SetEntries` writes it and calls `D3DRenderer.setPalette`. `SetPalette` on a surface is a no-op: one palette for the screen and the page |
| Surface state | `IsLost` always 0, so `Restore` is not reached |
| DirectInput | `Acquire` never fails, so `DIERR_INPUTLOST` never occurs. Keyboard and mouse always; joystick only when `RaceRunner.chooseDevice` sets `host.joystickPresent` |
| Enumerators | Zero callbacks where the note says that is valid: `DirectDrawEnumerateA`, `EnumDisplayModes`, `IDirect3D2::EnumDevices`, `DirectSoundEnumerateA` |
| Not present as interfaces | IDirectDrawClipper (only `WINDOWED=1`), IDirectSound3DBuffer (dead code). `DirectDrawCreateClipper` returns `S_OK` and writes no object, so that path would fault if forced. Nothing in the port writes `WINDOWED` |

`dwMaxTextureWidth` 0 differs from `render-textures.md` rule 8, with no effect found: `FUN_00498760` ends by overflow at n=27, `FUN_00498030` stops on the budget long before the rows that overflow, and larger requests clamp to H, as with 512 or more (read, not run).

**How it was compared.** check-flow and run-bot run the 16-bit HAL path to the end of a race on these answers. check-software runs the 8-bit path through the menu on its answers: a whole race at `RESOLUTION` 1, one at 0 left with Esc and J, then the 16-bit path again in the same page. reference-86box sets the port's frame at rest against the guest's, in RGB: 88.1% of the whole picture identical at `RESOLUTION` 1, 85.5% at 0. That speaks for the palette, the key and the stretch through the picture, not for the answers. check-race-ui covers the joystick methods (`GetProperty`, `Poll`, the 0x50-byte state) with a stand-in for `navigator.getGamepads`. reference-frame compares one picture by eye. Fix check on the probe: `0x73b4f9` reads 16777216 after boot, `game.ini` holds 16777216 after a whole race, and `TfrmDisplaySettings` then shows `Maximaal` and `Normaal` enabled. The answers themselves were not compared with real DirectX. Sound methods were checked by state only (node graphs, gains, decoded samples, analyser level), never by ear.

## File I/O and the virtual file system

**Original behaviour.** Game code uses the CRT (`fopen FUN_005589a5`, `fread FUN_00558b35`, `fwrite`, `fseek`, `ftell`, `fclose`), which calls `CreateFileA`, `ReadFile` and so on. All paths are relative to the current directory; the install shortcut sets that to the game folder. A resource opens through `FUN_004c62c0`: case-insensitive match in `rcs.ind`, then a seek in the one shared `rcs.img` handle; if not found, `fopen(name, "rb")`. The car update's 17 `tru*.d3d` are not in `rcs.ind`, so they take that last branch. `FUN_004cd4a0` tries the current directory first and then `<drive>:\DATA\<name>`. No file is read in the background: everything is synchronous.

Disc check `FUN_004cd3b0("\DATA", "rcs.img")`, from `FUN_00447be0`: environment `NOCD` set, then its first letter is the drive and the check ends. Otherwise every drive of type 5 is tested with `_access`; none found is fatal, `A2 Racer CD-ROM niet gevonden.` Nothing else in `spel.dat` reads the disc when the install is complete, because of the lookup order above.

Writes in normal play go through `WritePrivateProfileStringA` only. `debug.txt` needs `DEBUGON=1` or a fatal path; other dumps need tweak mode or Ctrl+F10. File list per subsystem: `startup-flow.md` section 7.

Race music: `FUN_0044ad40`, once per boot, reads `raser.ini [MUSIC] COUNT`, the names and `LAST`, and writes back `LAST+1`, or 0 when that is below 0 or at or above `COUNT`. `FUN_00450de0` plays that entry, and `FUN_004c7880` reads the whole WAV at the end of the sound setup. Shipped `LAST=2` gives `M_FUNKY1` first. The read pattern of a music file is a 512-byte fill for the header, a seek, one direct read of N x 512 bytes, then a 512-byte fill for the tail (`FUN_0055a06b` shrinks the buffer to 512, `FUN_0055fb61` restores 4096). Measured on `M_MOBIE2`: `[74978278,512]`, `[74978322,2755072]`, `[77733394,512]`.

**Evidence.** `FUN_004c62c0`, `FUN_004cd3b0` (`0x4cd478` is the fatal branch), `FUN_004cd4a0`, `FUN_0044ad40`, `startup-flow.md` sections 6 to 8, `README_technical_spel.dat.md` part 7. `public/game/files-read.txt` lists what one headless boot of etappe 0 read. The read pattern above comes from a fix check on the recompiled code.

**Status.**
- Confirmed (static): lookup order, disc check and its branch, list of loose files, music selection. The patch part 7 notes agree.
- Inferred: `.icd` and `default.txt` are not read by any module (byte scan of the five native modules), so they are not part of the run.
- Unresolved: whether the physical disc had any protection; the image cannot show it.

**Where the port implements it.** The file imports in `installWin32` on top of `Vfs` in `source/host/vfs.js`.

- `normalizePath` lowers case and strips drive, `.\` and `a2racer4\`.
- `tools/prepare-assets.py` builds `public/assets/game`: `UPDATES` in `prepare_race` lays `original/updates/installed/` over `original/install/`, the updates win, case-insensitive, stale files removed, `trkuinst.ini` skipped. 142 files: 140 race files, each byte-identical to the current install by SHA-256, plus the generated `files.json` and `race-files.json`. Asset map: 764 entries.
- `GameFiles.loadBase` in `source/host/game-files.js` fetches all small files before the menu.
- `GameFiles.prepareRace` fetches the etappe's files and the archive ranges in `public/assets/game/race-files.json` before `boot`: `common`, `etappe`, `car`, `pair`, and this race's music track from the `music` list, chosen by `GameFiles.raceMusic` with the same rule as `FUN_0044ad40`. Sizes: `rcs.img` common 8.6 MB, etappe 0 6.1 MB, car 0 1.0 MB, `rc.img` common 0.6 MB, one track 1.5 to 2.76 MB. Totals over all 10 etappes and 8 cars: `files` 68.8 MB, `late` 27.5 MB, `music` 13.0 MB. At `RESOLUTION` 0 and 1 the game reads PCX pictures and low fonts in place of TGA, so `common` and `etappe` come from `soft[0]` and `soft[1]` in the same file, recorded by `tools/build-race-lists.mjs` from boots of all 10 etappes at each mode: etappe 0 has `common` 5.2 to 5.3 MB of `rcs.img`, and 1.1 to 1.2 MB for the etappe.
- `GameFiles.fetchLate` then fetches the other sounds in the background, 27.5 MB in pieces of 1 MB, so a sound that has arrived costs no synchronous read.
- `SparseFile` serves `rcs.img` and `rc.img` from those ranges. The game reads synchronously, so `SparseFile.read` fills any unknown gap at once with one synchronous request (`syncRange`) that takes the rest of the member. A read above the CRT buffer size of 4096 counts as wanted in full; a read of 4096 or less counts only up to the end of the member it starts in. An HTTP error throws instead of storing an error page as game data, and a server that ignores `Range` still gets the right slice.
- `Persist` in `source/host/persist.js` keeps written files in IndexedDB (database `a2racer4`, store `files`), restored over the shipped files in `App.start`. When storage is refused the session runs from memory.
- Disc check: the byte patch in place of `NOCD`, with `GetDriveTypeA` answering no CD-ROM.

Known differences:

- The bytes a buffer fill picks up past the end of a member stay 0 if they are not downloaded, instead of being the next member's bytes. The game drops the buffer with a seek before each member (`FUN_004c62c0`, `FUN_004cc0b0`, `FUN_0055a06b`), so it does not look at them.
- A member missing from the lists freezes the page for one synchronous request, where the original did a disk read. That should not happen in normal play. A late sound played before its piece has arrived does the same.
- The music is fetched before the race, where the original read it from disk at race start.
- Files are written back on `CloseHandle` only; the game never reads a file back while it is open for writing, so this has no effect.
- The find data has zero file times, so `FUN_005591e8` returns early and `FileTimeToLocalFileTime` and `FileTimeToSystemTime` are not called.

**How it was compared.**

- check-flow: save file present after the race, results read back from `game.ini`. form-check: options persistence. boot-all: every etappe and car booted from these files, and it is also the input to the range lists. No comparison of read sequences with the original was run.
- Fix checks on the music, one-off scripts: headless, real `spel.wasm` on etappe 0, `LAST` = -5, 0, 1, 2, 3, 4, 5, 99: the predicted track is the one loaded, with 0 samples different from the archive member. Browser on Amsterdam with the late download held back: `LAST=3` with the music list stripped gives 1 synchronous request of 2,755,556 bytes; with the lists and a throttled track the race waits for it, 0 misses. Three races in a row, headless: `M_FUNKY1`, `M_MOBIE2`, `M_REVENGE1`, each fetching only its own track.
- Fix check on the zero fill: on etappe 0, car 0, up to 300 ticks, 268 MB of wasm memory from a sparse run against a full-archive run differ only inside the `rcs.img` stream buffer `0xc4a850..0xc4b850`, 834 bytes. Two full-archive runs are identical. Other etappes were not compared. No slow real network was tried.

## INI files

**Original behaviour.** `FUN_004c3b60` builds `<cwd>\<name>`; a name of 16 characters or more, or empty, is fatal. `GetPrivateProfileIntA` is called only from `FUN_004c3cd0`, with default 0, at 164 sites. Strings go through `FUN_004c3d10` with default `""`. Writes go through `FUN_004c3c30` and `FUN_004c3c70` (`_itoa` base 10). Sections and keys are case-insensitive; `[program] resolution` and `[PROGRAM] RESOLUTION` hit one line. Values in `game.ini` are followed by tabs and comments. `raser.ini [MUSIC]` holds `count` twice and first match wins. Writes must be visible to later reads in the same run.

The car update overwrites `game.ini` with a copy from the developers' machine: `Nrlaps=1`, `etappe=8`, `car=7`, `money=1330`, `MOTOR`, `BANDEN`, `ABS`, `VERSNELLINGSBAK` = 1, results of a race of theirs, and a key not in the disc's copy, `OVERLAYELEMENTS = 15`. The menu writes etappe, car, laps, money and tune-ups before every race, so a player does not see those. The race writes the results at the end.

**Evidence.** `win32-surface.md` C1 INI table, `startup-flow.md` sections 3 and 4 and its port rule list. `game.ini` in `original/updates/installed/`.

**Status.**
- Confirmed (static): call sites, defaults, wrapper rules.
- Inferred: real Windows semantics for first-match and integer parsing, from documentation of the API, not observed on this game.
- Unresolved: none that matters with shipped data. A scan of the 54 INI files in `public/assets/game`, the 52 of disc 1.01 plus `etappe9.ini` and `overlay7.ini`, found one duplicate section (`e09_anim.ini [a_ramp00_anim]`, track 9, reachable since the track update, no extra keys, so the merge makes no difference) and one duplicate key with two values (`static.ini [char8] lockedtext`, first wins in both). Hexadecimal values occur only in `menucaps.ini`, which `spel.dat` does not read.

**Where the port implements it.** `IniFile` in `source/host/vfs.js`, with `Vfs.iniGet` and `Vfs.iniSet`, and `GetPrivateProfile*` in `installWin32`. Integer reads use `parseInt` base 10, which stops at the first non-digit. In a logged boot of etappe 0, none of the 817 integer reads had a value starting with anything but a digit, so sign and hex handling are not exercised there. Changes keep comments and order. Every write goes to IndexedDB through `Vfs.onWrite`. Duplicate sections merge, where Windows stops at the first one. `IniFile` trims the key of `OVERLAYELEMENTS = 15`, so the port reads 15 like the original; no check exercises it. `WritePrivateProfileString(section, NULL, ...)` does not delete a section; nothing in the game does that. `RaceRunner.chooseDevice` may change `[INPUT] DEVICE` for the race with `onWrite` off, so the player's choice in the save stays.

**How it was compared.** Scan of the shipped files above. check-flow: the game's own write-back reaches the menu. form-check: options persistence through the same files. No comparison with real `GetPrivateProfile*` on these files was run.

## Registry

**Original behaviour.** The game does not use the registry for anything. `spel.dat`: the ADVAPI32 import is `GetUserNameA` only, its result logged. `A2Racer4.exe`: no ADVAPI32. `menu.exe`: Delphi RTL and VCL keys (`SOFTWARE\Borland\Delphi\RTL`, `Software\Borland\Locales`, keyboard layouts) and the `.html` open command for the Internet button. The string `Software\Davilex` is in no game module. The installer writes `Software\Davilex\A2 Racer 4` (`CurrentVersion=1`; `1\NL`: `MAINDIR`, `ReleaseVersion=1.01`, `ReleaseDate=20002212`, URLs; `1\TechInfo` flags) and `Software\Davilex\Shared\...`, read by `SERVICE.EXE` as far as packaging shows.

**Evidence.** `imports.csv` of each module, `startup-flow.md` section 6, `original/wine-prefix-external/registry/system.reg.excerpt.txt`, `original/install/INSTALL.LOG`.

**Status.**
- Confirmed: imports and strings as above.
- Inferred: `SERVICE.EXE` reads the `TechInfo` flags; its code was not analysed, by the owner's decision.
- Unresolved: none for the game.

**Where the port implements it.** Nothing needed. `GetUserNameA` returns the fixed name `speler`.

**How it was compared.** Not applicable. No comparison was run.

## Message pump

**Original behaviour.** Main loop `0x004582de-0x00458350`:

```
while (DAT_006fb89c != 0) {
  FUN_0044cb80();   // handle_game
  FUN_004517f0();
  FUN_0044e180();   // frame counter
  if (FUN_00458020()) break;   // pump, 1 = WM_QUIT
  if (key(VK_CONTROL) && key(VK_F10)) FUN_00458400();   // BMP screenshot
  FUN_0041c150(&DAT_005d3118);  // cop radio
}
```

`FUN_00458020` drains with `PeekMessageA(msg, NULL, 0, 0, PM_REMOVE)`, returns 1 on `WM_QUIT`, otherwise translates and dispatches. While `DAT_00740dfc == 0` (application inactive) it calls `WaitMessage` and loops. After any wait it runs `IsLost/Restore` on primary, back and buffer screen, then `FUN_004b8bc0` textures, `FUN_004c0920` Z, `FUN_004b2ea0(0x73b020)`. No game loop outside this pumps messages. No frame pacing exists; the loop runs as fast as `Flip` allows.

Pause, quit and result-key waits spin on `GetAsyncKeyState` with no pump (`win32-surface.md` C4):

| Function | Wait |
|---|---|
| `FUN_0044c990` (pause) | Until P is up. Then sweeps of VK 0 to 255: each key found down is waited on until it is up, and the sweep goes on after it. The sweep in which a key was seen ends the pause. VK 1, 2 and 4 are the mouse buttons, so a mouse click ends the pause once released |
| `FUN_0044c9f0` (quit) | Until Esc is up. Then a loop: J or Y calls `FUN_0044cda0(4)`; Esc or N leaves the loop; J or Y without those returns. After the loop it waits only for Esc to go up, also after N |
| `FUN_004c5e40` (every poll above) | Reads Shift first, so no plain key counts while Shift is held |
| `FUN_0043ac80` (finish screen) | Until Esc, Enter and Space are all up |

**Evidence.** `FUN_00458270`, `FUN_00458020`, `FUN_0044c990`, `FUN_0044c9f0`, `FUN_0044ca80`, `FUN_004c5e40`, `win32-surface.md` C0 and C4, `sim-timing.md` C3.

**Status.**
- Confirmed (static): loop, pump, all spin loops, by back-edge scan in the note.
- Inferred: `Flip` with `DDFLIP_WAIT` paces the loop on a real card.
- Unresolved: the frame rate on period hardware (`sim-timing.md` Unknown).

**Where the port implements it.** `source/host/race.js`.

- `hook!WinMain` replaces `0x458270`. `Race.tick` runs one pass in the same order, with the original `FUN_00458020` as shipped, on the host queue in `installWin32`. Ctrl+F10 is left out: F10 is masked (`docs/intentional-differences.md`, Debug keys).
- `hook!pauseBegin` replaces `FUN_0044ca80` up to its wait. `Race.pollPause` runs `FUN_0044c990` and `FUN_0044c9f0` across ticks with the same steps, one sweep per tick, Shift masking every key, and after N or Esc only Esc waited for. `Race.endPause` is the rest of `FUN_0044ca80`.
- `RaceRunner.canvasPress` in `source/race-runner.js` feeds a mouse button or a tap on the race canvas to VK 1, 2, 4, 5 or 6 while a pause is open. The canvas blocks the context menu.
- Other spins end because `GameInput.keyDown` in `source/input/keyboard.js` reads a key as up after 8 polls in one tick. Shift is exempt: no spin waits on it, and `FUN_004c5e40` polls it before every other key.
- `WaitMessage` returns at once. It is never reached, because the host never reports the application inactive.

**How it was compared.** Same machine code for `FUN_00458020`. check-race-ui on Amsterdam, with keyboard and with a mouse button: `pause: Shift alone resumes nothing, and masks other keys`, `pause: any key resumes, and the race clock goes on from where it stood`, `pause: a mouse button on the race resumes, once released`, `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release`, `quit dialog: J ends the race, finished=0`, `keyboard: repeat of an unseen key, re-press in a tick, Shift read every time`. check-flow reaches the exit path. No comparison with the original's loop was run.

## Window and focus messages

**Original behaviour.** `FUN_004c55c0` creates class `Davilex Entertainment`, style 3, title `[PROGRAM] NAME` = `A2 Racer IV`, `WS_POPUP`, exstyle `0x40000`, size from `GetSystemMetrics`, cooperative level `0x51`, then `SetDisplayMode`. Mode from `raser.ini [PROGRAM] RESOLUTION`, shipped 3 = 640x480x16. The options screen maps Laag to 6 or 0, Normaal to 3 or 1, Hoog to 4; the table in `FUN_00447870` has 0 to 9. Window procedure `FUN_004cd6b0`:

| Message | Behaviour |
|---|---|
| `WM_ACTIVATEAPP 0x1c` | `DAT_00740dfc = wParam & 0xffff`, return 0 |
| `WM_ACTIVATE 0x06` | Stores `wParam`, no reader |
| `WM_DESTROY 0x02` | `PostQuitMessage(0)`, then `DefWindowProcA` |
| `WM_PAINT 0x0f` | `GetUpdateRect`, `BeginPaint`, `EndPaint`, no drawing |
| `WM_ERASEBKGND 0x14` | Return 1 |
| `WM_SETCURSOR 0x20` | `SetCursor(NULL)`, because `DAT_0074b2f4` stays 0: **the pointer is hidden**; return 1 |
| `WM_TIMER`, `WM_DRAWITEM`, `WM_DEVICECHANGE` | No timers and no child controls; CD insert and remove logged |
| Anything else | `DefWindowProcA`. Handler slots `0x740e08-0x740e70` stay NULL |

Focus loss: `DAT_00740dfc = 0`, so the whole game blocks in `WaitMessage`. `GetTickCount` keeps running, so wall-clock timers jump on return, and `dt` is capped at 0.1 by `FUN_004a6800`. DirectSound is in exclusive mode (`0x4c72fc`, level 3). DirectInput uses `NONEXCLUSIVE|FOREGROUND`: a lost device gives `DIERR_INPUTLOST`, then `Acquire`.

The game has no windowed mode unless `raser.ini WINDOWED=1` is set by hand. `menu.exe` sets 800x600 and hides the desktop and taskbar (`M:0x481634`, `M:0x4a4d20`), and the launcher's window also covers the screen, so the player never sees the desktop.

**Evidence.** `FUN_004c55c0`, `FUN_004cd6b0`, `FUN_00458020`, `win32-surface.md` C2 and C3.

**Status.**
- Confirmed (static): table above.
- Inferred: what the player hears on focus loss, from DirectSound exclusive mode semantics.
- Unresolved: whether `WM_ACTIVATEAPP` came before or after `SetCooperativeLevel` on real Windows. The owner's notes report no focus test.

**Where the port implements it.** `FUN_004cd6b0` runs as shipped. The host sends only `WM_NCCREATE`, `WM_CREATE`, `WM_ACTIVATEAPP(1)`, `WM_ACTIVATE(1)`, `WM_CLOSE` and `WM_DESTROY`, and queues `WM_QUIT` (`installWin32`). The rest is on the page:

| Original | Port | Difference on purpose |
|---|---|---|
| `WM_ACTIVATEAPP(0)` blocks the game | Never sent. `RaceRunner.setFocus` in `source/race-runner.js` stops ticks, suspends audio and clears input, on `blur`, `focus` and `visibilitychange` | Wall-clock timers do not jump on return (`docs/intentional-differences.md`, Focus loss) |
| `WM_SETCURSOR`: pointer hidden | Never sent. `RaceRunner.load` sets `#game.no-pointer` (`cursor:none`) | `RaceRunner.showPointer` brings it back for 2 s when the mouse moves, because the gear button needs it |
| Exclusive full screen | `App.applyFullscreen` in `source/app.js` asks for the Fullscreen API at the first gesture, with the `fullscreen` setting on (the default in `source/settings.js`). The setting is **Volledig scherm**, in the race settings panel and in Geavanceerd, tab Browser | A browser allows the switch only during a gesture. If the player leaves full screen the setting turns off, also for later visits, and in a race `RaceRunner.leftFullscreen` opens the quit prompt, because a browser may keep that Esc for itself. `navigator.keyboard.lock` holds Esc, T, N and W where it exists. Mouse users in full screen get a Stop button (`#race-stop`) whose prompt has Ja and Nee. An iPhone has no such call: it stays in the page |
| `SetDisplayMode` | Stores the mode in `host.screen`, bits included | The picture size comes from the port's settings, not the mode, except that on the 8-bit path Automatisch takes the mode's own pixels ([input-platform.md](input-platform.md)). `Hoog` is greyed in `TfrmOptions` with a note. A save with `RESOLUTION=4` keeps it, game code then sees 800x600, and the picture looks the same as Normaal |

**How it was compared.** check-race-ui: `focus: clock stops, sound suspends, input clears`, `focus: resumes without a jump`, `hidden tab: clock stops and resumes`, `pointer: none over the race, back for 2 s on a move`, and the four `full screen:` checks. Full screen ran in headless Chromium, where Esc reaches the page. Not tried: a real Esc in a browser that keeps it, the Safari prefixed path, the effect of keyboard lock, an iPhone. These compare with the intended change, not with the original. No focus test was run on the original. Fix check on the `Hoog` greying: browser check on state and a screenshot.

## Time sources

Detail, including the fixed tick: [sim-timing.md](sim-timing.md). Only what the imports answer is here.

**Original behaviour.** `QueryPerformanceFrequency` and `QueryPerformanceCounter` feed the frame clock (`FUN_004a65e0`, `FUN_004a6700`, `FUN_004a6840`), with `timeGetTime` as a fallback never used when QPF succeeds. `FUN_0050a5e0` also reads the counter, for Ipion's performance figures. `GetTickCount` feeds 18 clock slots at `0x6fa3e8` and 34 functions, as differences in ms. `GetSystemTimeAsFileTime` serves CRT `clock()` (FPS counters, qhull statistics, script `clock`); `GetLocalTime`, `GetSystemTime`, `GetTimeZoneInformation` serve CRT `time()`, which seeds `srand` in `FUN_004c55c0`.

The pause and quit dialogs stop slots 0, 3, 0xB and the racer slots (`FUN_00448330`, `FUN_0042e440`). Every other `GetTickCount` user keeps running during a dialog, because `GetTickCount` does not stop: the traffic light (slot 1), work lamps (5, 7), timed bonus effects (0xF, 0x10, 0x11), HUD messages (2,000 ms), arrest delay (4,000 ms, `FUN_0043a980`), reset lockout (5,000 ms, `FUN_0040e5a0`). So a timed bonus can run out during a pause.

**Evidence.** `win32-surface.md` C1 Timing, `sim-timing.md` C3, `FUN_0044ca80`, `FUN_0050a5e0`.

**Status.**
- Confirmed (static): users and thresholds above.
- Measured on the original under Wine (`evidence/reference-wine/results.md`): the frequency read 10,000,000 in every run; `time` read 110864 s at 31 h uptime; `L`, the time from clock init to the first tick, was 8.42 ms; ticks 1 to 3 read the capped `dt` and tick 4 does not.
- Confirmed by the host-call count: `FUN_004f86f0`, the physics step, calls `FUN_0050a5e0` on the normal path, about 7.7 times per tick (285,677 of the 285,679 counter reads in 37,034 ticks; the other 2 are `FUN_004a6840` after the dialogs). `FUN_0050a5e0` adds counter differences into its own object.
- Inferred: none.
- Unresolved: whether anything reads the figures of `FUN_0050a5e0`. No reader was traced.

**Where the port implements it.** `VirtualClock` in `source/host/win32.js`, all counters from one tick-driven value. Frequency 1,193,182 Hz, exact in f32. `VirtualClock.query` adds 0.5 ms after 2,000 reads in one tick, for spins on the clock. `Race.tick` advances the clock in the pause branch as well, so during a pause or quit dialog only the race clocks stop, as in `FUN_0044ca80`, and all other timers run on. The clock stops only when ticks stop: focus loss, a hidden tab, and the settings panel. Date calls use real time, or `host.fixedDate` for repeat-trace. `Race` starts the clock at a varying offset of up to 101 s, or `host.clockStart`. `hook!updateClock` feeds the frame clock's ring from it: the clock's value at init, then 8.4 ms as measured, then one tick per sample, with a steady ring's `dt` alternating its last bit ([intentional-differences.md](../intentional-differences.md), Clock ring).

**How it was compared.** check-race-ui: `pause: P stops the race clocks, the wall clock runs on` (track time 434 ms before and after, virtual clock 1 s on), and `pause: any key resumes, and the race clock goes on from where it stood`. Fix check: slot 3 through `FUN_00448470` read 433 ms stopped while `clock.seconds` moved 1 s, and 916 ms 0.5 s after resume. repeat-trace shows runs repeat with fixed seeds, which compares the port with itself. reference-wine sets the first `dt` values and the countdown against the original under Wine. The pause and the dialogs' clocks were not measured on the original.

## Memory

**Original behaviour.** C runtime heap on `HeapCreate`, `HeapAlloc` and `VirtualAlloc` for the small-block heap. `LocalAlloc(LPTR)` at 13 sites, zeroed; NULL is fatal where checked. `LocalFree` must return 0. `operator new` is `0x558465`. One thread. C++ exceptions and SEH in `FS:[0]` frames. Nothing filters a hardware fault as normal flow in game code (`win32-surface.md` C5).

**Evidence.** `win32-surface.md` C0, C1 Heap and memory, C5.

**Status.**
- Confirmed (static): all of the above.
- Inferred: none.
- Unresolved: whether anything depends on heap or stack contents or block addresses. Block addresses differ in the port, and fresh memory is zero. Nothing was found that keys on them, but this was not searched exhaustively.

**Where the port implements it.** Layout in `tools/recomp/recompile.py` and `spel.meta.json`:

| Range | Use |
|---|---|
| `0x10000` | Pop table for thunks |
| `0x20000-0xF0000` | COM objects and vtables, never reused (`Machine.lowAlloc`) |
| `0x100000-0x3E0000` | Stack, 2.9 MB, no guard page |
| `0x3F0000` | Thread block; cell `0x3F1000` for the traffic push share |
| `0x3F8000` | Host thunk addresses |
| `0x400000-0x751408` | Image |
| `0x760000` | Code map |
| `0xC00000-0x10000000` | Heap up, `VirtualAlloc` down, 256 MB of wasm memory per race |

`Heap` in `source/host/win32.js`: 16-byte rounding, a 16-byte header, free lists by size. Running out throws `out of game memory` instead of returning NULL. Each race is a new instance, as the original was a new process, so memory starts clean. x87 runs on f64: recorded in `docs/recompiler.md` and `docs/intentional-differences.md`.

**How it was compared.** No comparison of the memory model with the original was run. check-flow and run-bot complete a race without running out. repeat-trace checks that the same input gives the same state of every object with a physics body (485 on Amsterdam, record and 3D object with world matrix, once per game second, 71 samples) between normal rendering at 1280x720, the mobile profile and every second display frame. That shows no dependence on uninitialised host state across those runs; it does not show equality with a native run.

## Exceptions and setjmp

**Original behaviour.** 190 throw sites, 96 catch records. 50 catches are fatal and end in `FUN_004c4150`, 5 rethrow, 41 resume: 26 in 13 particle functions log `GD_EXCEPTION` and skip the work, 3 are empty `catch (...)`, 2 are STL string retries after `bad_alloc`, 10 are iostream `setstate` in DaviScript. Input, HUD, script, physics, factory and RegVar throws are all fatal when they reach a catch; none is used to leave a loop. qhull leaves through `longjmp` on its error exit.

**Evidence.** `win32-surface.md` C5 and C7, comments in `tools/recomp/replacements.py`. The host-call count gives 23 `longjmp` from `FUN_0051e8e0` during a boot of etappe 0 (under `FUN_0052b1f0` 10, under `FUN_00518fd0` 13), none after boot, and no `__CxxThrowException` in the whole race. Boots of etappe 0 with cars 0, 1 and 2 give the same 23.

**Status.**
- Confirmed (static): counts and classes.
- Confirmed in the port by the host-call count, on etappe 0 only: the recompiled qhull takes its `longjmp` during boot, on shipped meshes.
- Inferred: the original takes that path too, since it is the same code and `replacements.py` calls it the normal path for flat input. How often is not established, because x87 precision differs here.
- Inferred: the `char *` particle throws do not fire in normal play with shipped data. Only guards were read, and one whole race on one etappe had no throw.
- Unresolved: whether any throw fires on other etappes or in play other than that bot race.

**Where the port implements it.** `installCoreHooks` in `source/host/hooks.js`.

- `__CxxThrowException` throws a JavaScript `CxxThrow`.
- The 16 functions in `GUARDED` (`tools/recomp/replacements.py`), the 13 particle functions and the 3 empty catches, catch it, restore `FS:[0]` and return 0. That skips the same work, with a console warning in place of the `GD_EXCEPTION` log line.
- A throw anywhere else, including the 2 STL retries and the 10 iostream catches, which are not modelled, reaches `RaceRunner.frame` or `RaceRunner.run`. They log it, end the race or the load, and return to the menu, the same result as the original's fatal path.
- `longjmp` throws `LongJmp`. `setjmpGuardA` and `setjmpGuardB` catch it for their buffer and re-enter a second copy of the function at the `setjmp` return (`RESUME_ENTRIES`).

**How it was compared.** No check triggers a C++ throw. check-flow and run-bot run through the `longjmp` path during boot and go on to a whole race, which shows it returns control without a host error. Whether qhull's output then equals the original's was not compared directly. check-driving and check-flow only show the resulting physics run on Amsterdam.

## Corrections to the research notes

Each of these is the current reading; the notes themselves were left as written. The last row concerned `docs/recompiler.md`, which now says so itself.

| Note | What it says | What holds | Basis |
|---|---|---|---|
| `win32-surface.md` Unknown, `FUN_00439910` | Whether the `U` spin is gated by tweak mode was not traced | Gated, indirectly: `0x438a6c` compares the active slot's camera id with 7, key 7 stays in slot 0, and slot 7 is reached only from view 0xE, which only tweak-gated key `U` selects | Disassembly, `FUN_00438670`, `FUN_004390d0`, `FUN_004397f0`; one headless read |
| `hud-overlay.md` section 11 | The race console `0x00471c90` has no tweak check | It needs tweak mode: `0x47108d` tests `DAT_006fb950` | Disassembly |
| `win32-surface.md` C3, IDirectDrawSurface | `AddRef` only at `0x4b9dae`, on the no-HAL path | Also at `0x4b2d3d` in `FUN_004b2cb0`, the texture cache, on the HAL path. 14 calls in a boot of etappe 0 | `FUN_004b2cb0`, host-call count |
| `win32-surface.md` C3, IDirect3DTexture2 | Table has `+08 +0c +14` | Also `+04 AddRef`, at `0x4b2d5e` in `FUN_004b2cb0`. 14 calls in a boot of etappe 0 | Same |
| `win32-surface.md` C1, CRT internals | `SetUnhandledExceptionFilter` tier X, `FUN_00560d7e` unused | `FUN_00560d7e` runs once in CRT start, through the init table walker `FUN_00559d34` | Stack of the call in the host-call count, `FUN_00560d7e`, `FUN_00559d34` |
| `win32-surface.md` Unknown, `FUN_0050a5e0` | Whether it is called on the normal path is unknown | Called from `FUN_004f86f0`, about 7.7 times per tick | Same |
| `win32-surface.md` Unknown, qhull `longjmp` | Whether it fires with shipped meshes is unknown | In the port, 23 times during a boot of etappe 0. The count in the original is not established: x87 precision differs | Same |
| `win32-surface.md` Unknown, GDI use at run time | Conditions sampled, not proven gated | Not reachable with shipped data: gates listed under Imports | Disassembly |
| `win32-surface.md` C1, `MessageBeep` | Tier I: `FUN_0045e240` from a particle update reached through a vtable | Unreachable with shipped data: particle type 0 only through script `CreateParticles`, which `bonus.dso` never calls | `FUN_0045e240`, `FUN_00474690`, `bonus.dso` |
| `win32-surface.md` C1, `FileTimeToLocalFileTime`, `FileTimeToSystemTime` | Tier W, inside `_findfirst` | `FUN_005591e8` returns early on a zero file time. With the host's zero times they are not called. On Windows they would be | `0x005591f1-0x005591fa`, host-call count |
| `render-textures.md` rule 8 | Report `dwMaxTextureWidth` as 32 x a power of 2 | The host reports 0. Reading shows the same result as 512 or more. Not run | `FUN_00498760`, `FUN_00498030` |
| `startup-flow.md` section 4 | `LAST = (LAST+1) mod COUNT (invalid -> 0)` | Not a modulo: `LAST+1`, or 0 when that is below 0 or at or above `COUNT`. `LAST=-5` and `LAST=99` both give index 0, `M_DISCO1` | `FUN_0044ad40`; fix check, headless |
| `win32-surface.md` C3, sound files | `FUN_004c7880` copies the body in one `Lock` and `Unlock` | Still true, and the file reads under it are three: a 512-byte fill, one direct read of N x 512 bytes, a 512-byte fill | Fix check, read log on `M_MOBIE2` |
| `docs/recompiler.md`, before its correction | The nine irreducible functions are all in the C runtime and qhull | Not established for all: `tu_map.csv` places `FUN_00489820` between `Ovl_Communicator.cpp` functions (`report.json` lists it). The others are unassigned there | `report.json`, `tu_map.csv` |
