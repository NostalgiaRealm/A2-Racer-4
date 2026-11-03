# Startup and menu

This file holds what `A2Racer4.exe` and `menu.exe` do, from the launcher to the hand-over to the race and back, with the evidence, the status of each finding, where the port implements it and how it was compared. It is the startup and menu part of [../original-behavior.md](../original-behavior.md). The rows per feature are in [../parity/startup-menu.md](../parity/startup-menu.md).

## How to read this file

Prefixes: `L:` = `A2Racer4.exe`, `M:` = `menu.exe`, `S:` = `spel.dat`, image addresses. Research notes are cited as note and section, for example `startup-flow.md` S.3; they live in `docs/research/`.

"Confirmed" here means read from code, DFMs or shipped data. Shipped data is the installation with Davilex's two official updates, `original-game-decompiled/original/updates/`; where something comes from an update the text says so, and "disc 1.01" means without them. `menu.exe` was only ever seen running as far as the intro video, under Wine (`original-game-decompiled/dynamic/RESULTS.md`), and the launcher only as far as starting `menu.exe /FirstTime`. So nothing past the intro has runtime confirmation on the original side, and no menu screen was compared side by side with the original. The race program has since run under Wine in the reference runs, `evidence/reference-wine/results.md`, but started directly as `spel.exe`, without launcher or menu. They add one thing here: `NOCD` gets past the race's disc check. reference-86box ran the race's 8-bit path on an emulated Windows 98 machine, again started directly with `NOCD` set (`docs/research/render-8bit.md`), so it adds nothing about the menu. The original has not been run with the updates.

The menu is a hand rewrite, not recompiled code. "Same machine code" is an argument only for what `spel.dat` does with the INI values it reads. Those values pass through the rewrite first.

Checks named below, all in headless Chromium 145 unless stated. Sound was checked by state only, never by ear. No real phone or tablet, no real gamepad and no other browser engine was used.

| Check | What it is | What it covers here |
|---|---|---|
| check-flow | `tools/check-flow.mjs`, real clicks at 1280x720 | Intro, Enter skips it, new player, main screen, Quick Race, Normaal, Amsterdam, `TfrmStartInfoKeyBoard`, a race driven by the bot at speed 8 to the end (the game wrote `FINISHED=1`, `TRACKTIME 603433`), `TfrmResults`, back to `TfrmQuickRace`, save file present, zero console errors or warnings. It reads no sound state and does not read the INI values back |
| check-race-ui | `tools/check-race-ui.mjs`, 76 of 76 pass, each check by name in `evidence/race-ui/summary.json` | Named below where it applies. Its races start through `?race=1`, so the menu's writers and `flow.afterRace` do not run. `load failure` starts from `?form=TfrmMainScreen`, the intro check from the plain page |
| check-phone-flow | `tools/check-phone-flow.mjs`, taps on an emulated touch profile, 844x390 then 390x844. 7 of 7, printed by name, screenshots in `evidence/flow-phone/` | Intro, new player, main screen, `TfrmDifficulty` and `TfrmQuickRace` in portrait, start info with the touch note, a race on the wheel, `Stop` and `Ja` back to `TfrmQuickRace` with `finished=0`, `Terug` to the main screen, then the Tour's `TfrmDifficulty`, `TfrmCurrentChar`, `TfrmTrack` and `TfrmGarage` without a race, zero console errors. Not a real phone |
| check-software | `tools/check-software.mjs`, real clicks at 1280x720. 17 of 17, each check by name in `evidence/software/flow/summary.json`, screenshots beside it | `3D kaart` off and on in `TfrmOptions`, `TfrmDisplaySettings` without it, `RESOLUTION` 1, 0 and 3 read back from `raser.ini`, a whole race by the bot at 1 back to `TfrmQuickRace` (the game wrote `FINISHED=1`, `TRACKTIME 603433`), a race at 0 left with Esc and J, back on with the 3D card in the same page, zero console errors or warnings |
| run-bot | `tools/run-bot.mjs`, a whole race headless with opponents and traffic | Prints `FINISHED`, `Out_Of_Time`, `Total_Loss`, `MONEY`, `TRACKTIME`, `LAP_1_TIME`, `LAP_2_TIME`, `DAMAGE` and `[RACERS]` from `game.ini`. No menu |
| boot-all | `tools/build-race-lists.mjs`, all 10 etappes with all 8 cars for 2 s in Node with no renderer | Records which files each race reads. It writes its own `game.ini` values, not through the menu. Not a gameplay check |
| form check | Per-form browser checks by the people who wrote the forms | Screenshots in `evidence/forms/`, landscape and 390x844 portrait; navigation through all Tour and Quick Race result branches with a faked `game.ini`; Garage buying; options persistence; help links, error dialog, tabs of Geavanceerd |
| fix check | A one-off script run when that part was fixed. Not kept in `tools/` and not part of a rerun | Only what the text says |

## Corrections to the research notes

| Note | It says | What holds | Evidence |
|---|---|---|---|
| `startup-flow.md` S.4, `menu-forms.md` S.5 | `RR_WINRACE` is set when the next undriven track, or `TrackReached`, is the last | It compares `TourState.FTrackIx` | `M:0x49ef6e`; `game-progression.md` S.5 |
| `startup-flow.md` S.4 | `LAST = (LAST+1) mod COUNT` | `idx = LAST+1`; below 0 or at or above `COUNT` it becomes 0. No modulo. `audio.md` S.9 has it right. A headless one-off run with `LAST=-5` and `LAST=99` loaded `M_DISCO1` both times | `S:0x44ad40` |
| `startup-flow.md` Unknown | Range of `gamma` and what `S:0x4c7ed0` does are open | The radios give 0 or 1. With 1, `S:0x4c7ed0(1)` makes each channel `(c*c)>>8` during texture conversion. It does not touch the display adapter | `menu-forms.md` S.12 no. 45; `render-textures.md` S.1; `S:0x447a00` |
| `menu-forms.md` S.3 | Char +0x10 is `IndexInGame` | +0xC is `IndexInGame`, +0x10 the static index. Art of `TfrmQuickRace` goes by +0x10, so position 7 (`downld`) shows `chara_08` and `qr_ch08` | `M:0x4606d0`, `M:0x49c4d8`; `game-progression.md` S.9 |
| `menu-forms.md` S.12 no. 45 | Lists `cboDriver` items only | `cboDriver` shows item `driverIndex+1`, so the default 0 shows `automatisch`, not `standaard`. With index below 2, `cboResolution` is one disabled entry, `640 x 480` with a 3D card | `M:0x4884b8`, `M:0x4882f4`, `M:0x488248`, format at `0x4882ec`, mode table `0x4ab4d8` |
| `menu-forms.md` S.12 no. 45 | Silent on the focus at show | The field table at VMT `0x4875B8` gives +0x33C = `btnOk`, so `FormShow`'s last `vmt+0xB0` call acts on `btnOk`. That the call is `SetFocus` is inferred from the slot's use | `M:0x487f14` |
| `menu-forms.md` S.12 no. 12 | Caption `Fout` | `M:0x4a7c14` sets the caption to the application title, and `FormCloseQuery M:0x4a7fc4` refuses a close while `ModalResult` is 0, so the title bar's x does nothing. The default choice ends the program (result 6, then `M:0x44d3f0`) | `M:0x4a7c14`, `M:0x4a7fc4`, `M:0x4a7ff0` |
| `audio.md` S.10, S.16 | `Round` in the volume laws and `M:0x482a0c` | Truncation. `M:0x402ad4` loads control word `0x1F32` from `0x4aa030`, rounding control 3, around its `fistp`, and all three call it: `M:0x480f90`, `M:0x48104f`, `M:0x482a6b`. So the note's 98 and 68 are 99 and 69 | Disassembly of `menu.exe` |
| `audio.md` S.10 | No UI control changes the `*ON` flags | The Options sliders set `MusicOn` and `FxOn` from position > 0. `VoicesOn` has no control | `M:0x4960fc`; `menu-forms.md` S.12 no. 38 |
| `render-textures.md` S.4 | `menu.exe` can write `mipmapping` | No writer does. The only INI access in `menu.exe` is the read of `[DEFAULTSETTINGS]`; the checkbox goes into the save only | `M:0x48bcf0`, `M:0x4a6de4` |
| `game-progression.md` S.9, S.10, Inferred; `startup-flow.md` S.3; `menu-forms.md` S.13 | No `etappe9.*`, no `[DOWNLOADCAR]`, no `overlay7.ini`, `[Portraits]` stops at 6, so track 9 and car 7 stay locked. Download car = DeLorean. `OVERLAYELEMENTS` absent | True of disc 1.01 without updates, which the notes were written against. Since the updates all of these are in the install, both open by the same rules, and the download car is the truck, De Schaduw | `original-game-decompiled/original/updates/`; see Unlocks and the INI hand-over |

Details none of the notes has, found while fixing the port:

- `Menu.hlp` has 10 real hotspots, all `0xE3` jumps, in 4 topics: Welkom 1, Weergave instellen 2, Instellingen 3, Algemene onderwerpen 4. Counted with `prepare_help`'s own parser over `|TOPIC`. Topics Startinfo, Karakter kiezen and Winnaar A2 Race have no jump leading to them.
- A paragraph whose text names a topic is not a link. Only the hotspots are.

## Launcher and process flow

**Original behaviour**

`A2Racer4.exe` opens a black borderless window of screen size, hides the mouse cursor over it and alternates two programs, each run to its end with `_spawnve(_P_WAIT)`. After each run it reads `[General] ExitCode` from `Menu.ini` in the working directory. The processes' own exit codes are never read.

| `ExitCode` | Launcher action | Written by |
|---|---|---|
| 40 | Run `spel.dat`, wait, then `menu.exe /Default` | `M:0x48f168` when `RaceMode` != 0 |
| 255 | Close the window and end | `M:0x48f168` when `RaceMode` = 0; also the shipped value |
| 0 or missing | `MessageBox("%s (%d) No value specified for menu exit!...")`, then end | No code writes it |
| Other | End | No code writes it |

The race's own result does not steer the launcher: after `spel.dat` the menu always comes back. A failed spawn shows one of five `MOTOR` message boxes (errno 2, 7, 8, 12, 22).

| Program | Role |
|---|---|
| `A2Racer4.exe` (`A2Racer4.icd` is a byte-identical copy) | Launcher |
| `menu.exe` | Delphi 5 front end: 45 form resources |
| `spel.dat` | The race, a PE file despite its name |
| `rsc.dll` | Archive I/O for `menu.exe` only |
| `bonus.dso` | Compiled script run by `spel.dat` |
| `setdebug.exe` | Toggles `debug.ini`; started by none of the above |
| `SERVICE.EXE` | Started only from the exception dialog, `ShellExecute("open", "SERVICE.EXE", "-r%s")` at `M:0x4a7a48` |

**Evidence**

`L:0x401250` WinMain, `L:0x401130` run, `L:0x4010c0` reads the INI, `L:0x401440` wndproc. `startup-flow.md` S.1 and S.8; `original-game-decompiled/docs/launch-sequence.md`; `docs/modules/modules.md`. Wine run: `dynamic/RESULTS.md` shows `menu.exe /FirstTime` being started.

**Status**

- Confirmed: the loop, the table above, that exit codes of the children are ignored (assembly `L:0x4011f6-0x4011fe`).
- Inferred: `spel.dat` gets an empty argument (`L:0x407f40` is only read). Running a `.dat` works because `_spawnve` hands any extension to `CreateProcess`.
- Unresolved: the launcher's step to `spel.dat` was never observed. The reference runs start `spel.exe` directly.

**Where the port implements it**

`source/app.js`: `App.startRace` and `App.exitGame`, called from `GameData.leaveMenu` in `source/menu/data.js`. One page instead of processes. A fresh `Race` (new wasm instance) per race in `RaceRunner.load` in `source/race-runner.js`. `EXITCODE` is still written to `menu.ini` (`saveMenuIni`) but nothing reads it; `raceMode` decides directly. On 255 the port cannot close the page and runs `startUp` with `firstTime` again, so the intro returns.

A race that cannot load comes back to the menu, as the launcher's `/Default` does after a fatal error. `RaceRunner.run` catches what `RaceRunner.load` throws, shows the message in the status line for 10 s, writes `[PLAYER] finished=0` (a fetch fails before `S:0x4491f0` would clear it), cleans up and returns, and `App.startRace` goes on to `flow.afterRace`. `RaceRunner.frame` does the same for an error during a tick, with `Race gestopt door een fout`.

**How it was compared**

check-flow walks menu, race and back on Amsterdam. That shows the alternation works, not that it equals the original. check-race-ui `load failure: back in the menu with a message, finished=0`: the `spel.wasm` fetch aborted, `FINISHED=1` preset, the page came back in menu mode with the status `De race kon niet starten: Failed to fetch` and `finished=0`. That check starts from the `?form=` route, whose `menu.ini` still has `PREVSTATE=0`, so it landed on `TfrmIntro`, not on a `/Default` screen. A fatal error from game code during load was not exercised. Einde itself is in no check. A fix check ran the same `exitGame` through Afsluiten on the error dialog, and the first screen returned. No comparison with the original was run.

## Command lines and start order of menu.exe

**Original behaviour**

- `menu.exe` scans all arguments upper-cased. `/FIRSTTIME` resets the log; `/DEFAULT` continues. Neither: `Start het spel met 'A2Racer4.exe'.` and exit. `spel.dat` ignores `lpCmdLine`.
- `/FirstTime` forces `FPrevious = 0` and skips reading `game.ini`.
- All menu paths are `ExtractFilePath(Application.ExeName)` + name. `spel.dat` and the launcher use the working directory.
- Order: `menu.ini` strings and `MenuCaps.ini` defaults at unit init. Display mode 800x600, trying 24, 16, 15, then 32 bpp. `TfrmMain` hides `Progman` and `Shell_TrayWnd`. `TData.DataCreate`: font, game dir, `debug.ini`, clear read-only on the three INIs, `Menu.hlp`, resource manager, sound manager, bitmap manager, `menumsc.wav`, shared button art, agent `hunny`, `static.ini`, `menu.ini`, and unless first time the rank list and `game.ini`.
- `TfrmMain.FormActivate` runs StartUp once:

| `FPrevious` | Then |
|---|---|
| CD check result 2 | `RaceMode = 0`, exit |
| 0 | Intro, music at static volume, GetPlayer, `TfrmMainScreen` |
| 1 | Music, LoadPlayer, `FillRaceResultsQR`, `FlowQR` |
| 2 | Music, LoadPlayer, `FillRaceResultsTour`, `FlowTour` |
| Other | Log `illegal value of Previous : ` |

GetPlayer: `CurrentPlayer >= 0` loads; failure logs `load player error` and asks. Below 0 (shipped -1): `TfrmNewPlayer` until a name, Annuleren terminates (`AllowExit` stays 0). A name typed before Annuleren still creates a player.

The menu and the race always run full screen: the menu through the display mode and a window of screen size with the shell hidden, the race through `raser.ini WINDOWED=0` and `SetDisplayMode` (`win32-surface.md` C1, C3).

**Evidence**

`M:0x4a9170` entry, `M:0x481634`, `M:0x47efb8` DataCreate, `M:0x48edec`, `M:0x4a5d70` StartUp, `M:0x4a525c`, `M:0x4a53d8`, `M:0x4a4d20`, `S:0x4c55c0`. `startup-flow.md` S.2, S.8; `menu-forms.md` S.4.

**Status**

- Confirmed: all of the above from code. The Wine run confirms file order `menu.ini`, `menucaps.ini` first, and `/FirstTime`.
- Unresolved: `/Default` was never observed. Top-level handling of `Unable to load` after a race was not traced (`game-progression.md`, Unknown). The port's choice there, the player question as in GetPlayer, is the port's.

**Where the port implements it**

`source/menu/flow.js` `startUp`, `getPlayer`, `askForNewPlayer`, `afterRace`; `GameData.beginMenuRun` stands in for a new process: it re-reads `menu.ini`, clears flags, rank list and player. `source/app.js` `route`: a page load is always `/FirstTime`. Read-only attributes, `debug.ini`, logs, the display mode and taskbar hiding have no port code; the browser console stands in for the logs.

Full screen: `App.applyFullscreen` with the setting `fullscreen`, default on in `source/settings.js`. Browsers allow the switch only during a gesture, so the first gesture enters it. If the player leaves it, `App.fullscreenChanged` turns the setting off until it is ticked again under Volledig scherm, and in a race opens the quit prompt, since a browser may keep that Esc for itself. `navigator.keyboard.lock` takes Esc, T, N and W where it exists. An iPhone has no such call: the row is hidden in the race panel and greyed with a note in Geavanceerd. Settings saved before this default that hold `fullscreen: false` stay off.

**How it was compared**

check-flow: first start with intro, new player, main screen, and the `/Default` path after one race on Amsterdam. check-race-ui `full screen: on at the first gesture, with Stop for the mouse`, `full screen: Stop asks, and Nee answers on screen`, `full screen: leaving opens the quit prompt, and it stays off`, `full screen: setting it again enters`, all during a race, in headless Chromium where Esc reaches the page. Not run: real Esc in a browser that keeps it, the Safari prefixed path, the effect of the keyboard lock, an iPhone. No comparison with the original.

## INI hand-over from menu to race

**Original behaviour**

`game.ini` and `raser.ini` are written only when a race starts: `DoExit` sets `AllowExit`, `Application.Terminate`, then `DataDestroy` runs in this order: `WriteToInis` if `RaceMode` != 0, `SavePlayer`, write `menu.ini`. All other keys and comments in the files survive (`WritePrivateProfileStringA`). Booleans are written as 0 or 1.

| File, section | Keys |
|---|---|
| `game.ini [INPUT]` | `DEVICE` (ControlType 0,1,2,3 to 1,3,2,4), `LEFT RIGHT UP DOWN EXTRA1 EXTRA2 EXTRA3` (VK codes), `SENSITIVITY` (wheel value if type 3, else joystick value) |
| `game.ini [ETAPPE]` | `ETAPPE` (`INDEXINGAME`), `BRITISH` (1 only on track 9) |
| `game.ini [OPTIONS]` | `NRLAPS`, `OPPONENTS` (0 on a chase), `waitvbl`, `filter` (bilinear 2, else 0) |
| `game.ini [LEAGUE]` | `LEAGUE` = difficulty 0..2 |
| `game.ini [PLAYER]` | `DAMAGE` = 0 (no reader), `CHECKPOINT_SPEED` only on a chase (92, 71, 62; stays stale afterwards), `POSITION` = 4 (no reader), `MONEY`, `CAR`, `TURBO_AMOUNT`, `MOTOR`, `BANDEN`, `ABS`, `VERSNELLINGSBAK` |
| `game.ini [GFX OPTIONS]` | `gamma`, `alpha_blending`, `CUSTOM_TEXTURE_MEMORY` (0x200000, 0x800000, 0x1000000) |
| `raser.ini` | `[PROGRAM] RESOLUTION`, `[SOUND] MUSICVOLUME SFXVOLUME POLICEVOLUME`, `[directx] index`, `guid` if changed, `[program] focus` |
| `menu.ini` | `[GENERAL] CURRENTPLAYER PREVSTATE EXITCODE`, `[HIGHSCORES] <i> name<i>` |

Quick Race: `MONEY 0`, `TURBO_AMOUNT 100`, all four tune-ups 1. Tour: the character's own values. Volume: `clamp(100 - trunc(10^(2*(100-v)/100)), 1, 100)`, 0 if the flag is off; shipped 90, 90, 99 equal 50, 50, 100.

Since the car update the install's `game.ini` is a copy from the developers' machine: `Nrlaps=1`, `etappe=8`, `car=7`, `money=1330`, `MOTOR`, `BANDEN`, `ABS`, `VERSNELLINGSBAK` = 1, results of a race of theirs, `[BEST TIMES] RACE_RECORD_E8_L0=316400`, no `TIME_CHECK_COUNT_E8_L0`. The menu writes etappe, car, laps, money and tune-ups before every race, so a player does not see those, and the race writes the results at the end. One key is not in the disc's copy: `[GFX OPTIONS] OVERLAYELEMENTS = 15`, read at `S:0x449b30` into `0x5ab3c0`. The mask is honoured only when `0x712784 == 1`, reached through `CM_KEYB_5`. With 15 that debug view keeps elements 1, 2, 4, 8 instead of hiding everything as with 0.

**Evidence**

`M:0x47f4ac` DataDestroy, `M:0x48c3f0` WriteToInis, `M:0x48b350`, `M:0x48bcf0`, `M:0x48b5bc`, `M:0x48b7c8`, `M:0x48ba20`, `M:0x48f168`, `M:0x480f04`. Readers in `spel.dat`: table in `startup-flow.md` S.3. Keys spel.dat reads that the menu never writes are there too. The car update's `game.ini`: `original-game-decompiled/original/updates/`; the mask: `hud-overlay.md`.

**Status**

- Confirmed: writers read from raw disassembly, since Ghidra's C loses the part after `try..finally` (`startup-flow.md` S.0). Readers from `spel.dat` code. `gamma` takes 0 or 1 from the radios (see the corrections). The car update's `game.ini` from the file, the mask from `hud-overlay.md`.
- Unresolved: no game code run compares the values with the original at run time.

**Where the port implements it**

`source/menu/data.js`: `dataDestroy`, `writeToInis`, `writeControlStuff`, `writeGeneralStuff`, `writeQuickRaceStuff`, `writeTourStuff`, `writeRaserStuff`, `saveMenuIni`, `raserVolume`. INI semantics: `source/host/vfs.js` `IniFile`. Win32 calls: `source/host/win32.js`. The readers run as shipped in the recompiled code; the host supplies `GetPrivateProfile*` and `WritePrivateProfileStringA` on the virtual file system.

Port changes: `RaceRunner.chooseDevice` rewrites `[INPUT] DEVICE` in memory for touch and gamepad, by `useTouch` in `source/settings.js`, and reads the seven keys from `game.ini` for the keyboard in a joystick session. `TfrmOptions.btnOkClick` also writes `raser.ini [PROGRAM] RESOLUTION`, because `LoadPlayer` takes the mode from there and the original wrote it only when a race started. The vfs trims the key, so `OVERLAYELEMENTS` reads 15 like the original. Checks that start a race without the menu pin etappe, car and laps with `pinRace` in `source/host/race-setup.js`, which also sets `BRITISH` for etappe 9, money 0 and tune-ups 0, because the update's `game.ini` holds the developers' values. With `?race=1` it also takes `?resolution=N` for `RESOLUTION` and `?chunks=N` for `VISIBLECHUNKS`.

**How it was compared**

check-flow: one Quick Race on Amsterdam started from these files. It shows that a race starts from them and runs to the end, without reading the values back. boot-all booted all 10 etappes with all 8 cars, but with its own `game.ini` edits, not through the menu's writers, and is not a gameplay check. Fix check, one-off: through the real menu `game.ini` ended up with etappe 9, british 1, car 7 (see Quick Race). `OVERLAYELEMENTS` is not exercised in any check. Same machine code for the readers. The written files were never compared byte by byte with files from the original `menu.exe`.

## What the race writes back, and how the menu reads it

**Original behaviour**

- At init: `[PLAYER] finished=0`, and `raser.ini [MUSIC] LAST` steps on (`idx = LAST+1`, 0 if outside `0..COUNT-1`). A crash or quit therefore reads as not finished.
- At exit, always: `lap_%d_time`, `lapcount`, `out_of_time`, `total_loss`, `finished`, `available_texture_memory`.
- At exit if finished: `money`, `turbo_amount`, `radarbonus`, `checkpoint_money`, `damage`, `tracktime`, `position`, `DAMAGE_MESH`, `DAMAGE_VALUE`, `[RACERS]`, `[BEST TIMES]`.
- The menu reads `MONEY`, `TURBO_AMOUNT`, `FINISHED`, `Out_Of_Time`, `Total_Loss`, `TRACKTIME`, `LAP_1_TIME`..`LAP_5_TIME` if present, and `[RACERS] 0..3` (field 0 car, field 2 time). `checkpoint_money`, `radarbonus` and `position` have no menu reader.
- `FillRankResults`: four racers plus the player, sorted by time; rank 0-based. `[RACERS]` slot is ignored.
- A fatal error in the race (`S:0x4c4150`, 1,600+ sites) shows a message box and ends with `ExitProcess(1)`, skipping the write-back. `finished=0` stays, the launcher restarts the menu with `/Default`.
- The race leaves only when Esc, Enter and Space are all up (`S:0x43ac80`), and the menu that follows is a new process, so no key reaches it held (`input.md` C12).

**Evidence**

`S:0x4491f0`, `S:0x44afc0`, `S:0x44b1c0`, `S:0x44afe0`, `S:0x44ae80`, `S:0x44b180`, `S:0x42e150`, `S:0x44ad40`, `S:0x44c8c0`, `M:0x48a300`, `M:0x48003c`. `startup-flow.md` S.4, S.5.

**Status**

- Confirmed: writers and readers from code.
- Inferred: `[RACERS]` slot is 0-based finish order.
- Unresolved: equal-time ordering of the VCL sort on the original (`game-progression.md`, Unknown; the port copies the sort from `TList.Sort M:0x410598`).
- Confirmed: `FINISHED=1` with `Out_Of_Time=1` is normal on a mode 0 track. `out_of_time` means timer 11 reads 0 (`S:0x44b1c0`), and that timer ends a race only in mode 1 (`S:0x44c8c0`); see [race-rules.md](race-rules.md). check-flow's 593 s race on Amsterdam wrote both. The menu tests `FINISHED` first, so `TfrmResults` showed.

**Where the port implements it**

Writers run as shipped in the recompiled code. Menu side: `source/menu/data.js` `readGameIni`, `fillRankResults`, `vclQuickSort`. `App.startRace` runs `flow.afterRace`, with `/Default` semantics. `RaceRunner.endWait` keeps the last frame on screen until Esc, Enter and Space are up, with a 5 s safety limit the original does not have, because a key-up the browser swallowed must not hold the page for ever. `App.startRace` then sets `menu.ignoreRepeat`, so an auto-repeat of a key held since the race presses nothing until a new key press (`MenuRuntime.staleRepeat`).

**How it was compared**

check-flow: a bot drove Amsterdam to the end, the game itself wrote `FINISHED=1` and `TRACKTIME 603433`, and `TfrmResults` showed five rows that add up to that time (`evidence/flow/12-results.png`: 7:48:35 + 2:04:88). run-bot: a whole race headless, with the keys it prints. check-race-ui `quit dialog: J ends the race, finished=0`, `game over: Enter ends it, the race waits for its release, and the menu ignores repeats`, entered through `FUN_0044cda0`, and without the menu's `afterRace`. form check: all result branches with a faked `game.ini`. Fix check, one-off: `available_texture_memory` holds 16777216 after a whole race. No comparison with the original.

## Intro and media

**Original behaviour**

There is one intro, `intro1.mpg`: 33,700,324 bytes, MPEG-1 320x240, 61.68 s, MP2 44.1 kHz stereo. Path is `<exe dir>` + file name of `INTROAVI`, then the CD search. Missing: no intro, no error. `TfrmIntro` is `bsNone`, client 792x573, centred, black main form behind it; `DisplayRect` = client rect. No fade or transition in code.

Skip: any key except Space, or any mouse button. Open or play error: the form closes. End: the form closes. Music starts only after the intro.

`TfrmWinFinal` loops `<exe dir>ch<NN>.avi` (NN = static character index), Cinepak 370x370, 25 fps, 3.28 to 3.36 s, no audio, in `pnlMovie` (415,86)-(785,456). The music keeps playing under it.

**Evidence**

`M:0x4a50d0`, `M:0x4a4850`, `M:0x4a4928`, `M:0x4a49f4`, `M:0x4a4a78`, `M:0x4a4ad8`, `M:0x4a3f44`, `M:0x4a4214`. `startup-flow.md` S.2, S.4. ffprobe on `original/install` and on `public/assets/media`.

**Status**

- Confirmed: file, form, handlers, skip rules. Wine run: "the intro video was playing at 60 seconds" with a mapped drive.
- Inferred: stretch of 320x240 to 792x573 centred at about (4, 13) on 800x600; about 61.7 s on screen.
- Unresolved: exact size on real hardware; whether MCI notifies in playing or stopped state at the end (the handler covers both); what MCI did on focus loss (`M:0x4a4928-0x4a4b2c` has no focus handling).

**Where the port implements it**

`tools/prepare-assets.py` `prepare_media`: `intro1.mp4` H.264 320x240 25 fps 61.68 s with AAC, `ch00..04.mp4` H.264 370x370 without audio. `source/menu/forms/group-main.js` `TfrmIntro`, `source/menu/forms/group-race.js` `TfrmWinFinal` (frames drawn through the canvas), `MenuRuntime.playVideo` in `source/menu/framework.js`. `playVideo` sets `video.volume` from the port's Volume, since the movies do not pass the master gain; iOS ignores that, so there the device volume applies. `App.start` pauses a playing movie in a hidden tab and plays it again on return.

**How it was compared**

check-flow: intro plays, Enter skips it. It launches Chromium with `--autoplay-policy=no-user-gesture-required`, so the refused-autoplay path did not run. check-phone-flow does not set that flag, but taps past the intro either way and records nothing about sound. check-race-ui `intro: pauses in a hidden tab, goes on when shown`, with `document.hidden` stubbed. Fix check, one-off: the intro's `volume` read 0.25 with the setting at 25. form check: `intro.png`, `intro-portrait.png`, `winfinal.png`. No frame or timing comparison with the original was run; reference-frame is a race frame, not an intro frame. Video is H.264 only and no other engine was tried: an engine without H.264 would end the intro at once through `onerror`, with no message.

## Race loading screen

**Original behaviour**

During loading the race draws the `raser.ini [wait_hi]` picture of the etappe stretched to the mode, the HUD's `OVL_PROGRESS_BAR` over it and flips, at 10 call sites of `S:0x4415e0`. The bar has 11 frames `ovl_p00..p10` on `overlay.tga`, canvas rectangle 308.5-596.5, 438-462. Frame = `ftol(11 * pct * 0.01)`, with `pct` from `raser.ini [progress] percent0..` = 10, 20, 30, 40, 50, 60, 60, 70, 80, 90, 100. The last step draws the normal HUD on the picture. On the 8-bit path the picture is the PCX of `[wait_hi]` at `RESOLUTION` 1 and of `[wait_lo]` at 0, and the bar's art is `overlay.pcx`.

**Evidence**

`S:0x4415e0`, `S:0x4416f0`, `S:0x4976d0`, `S:0x4581d0`, `S:0x449cb0`. `hud-overlay.md` S.9, S.11a; `win32-surface.md` C4; `8bit-drawing.md` section 9.

**Status**

- Confirmed: from code and shipped data.

**Where the port implements it**

`RaceRunner.load` and `showBar` in `source/race-runner.js`, `#loading` in `source/index.html`, placed in `source/style.css`. `tools/prepare-assets.py`: `prepare_loading` gives `e00..e09.png`, `prepare_loading_bar` renders `bar-00..10.png` from the `ovl_pNN.d3d` UVs on `overlay.tga` with the race's 565 key rule and bilinear filter, at twice the 288x24 rectangle. Edge pixels are the port's choice (`render-textures.md` rule 11). `RaceRunner.load` picks the art by `RESOLUTION`: for 1 and 0 `prepare_loading` gives `eNN-8.png` and `eNN-lo.png` from the PCX files through the game's palette, and `prepare_loading_bar_8` gives `bar8-00..10.png` from `overlay.pcx`, one texel per pixel, index 0xFE keyed. Difference on purpose: the frame follows the download of the race files up to 90%, and at 95% stands on the last frame while `race.boot()` runs, because that step is one call that blocks the browser. The game's own progress frames reach Flip but never the screen.

**How it was compared**

check-flow passes through it on Amsterdam, without a screenshot of it. check-software passes through `e00-8` and `e00-lo` the same way. Fix check, one-off: the 11 frames on a contact sheet show 0 to 10 lit beads, and the bar's rectangle measured 308.5, 438, 288, 24 on the canvas. Other etappes' pictures are in no check. No comparison with the original: reference-86box has no frame of a wait screen set against the port's.

## Menu UI layer

**Original behaviour**

- Every `TGameMenuScreen` is 800x600, centred, child of black `frmMain`; DFM sizes are ignored. Background is the BMP `Copy(ClassName,5,8)`, fallback `currentc`.
- Every `TfrmCoolDialog` takes the size of its TGA, desktop-centred, no border.
- Button size is the Up image's. States, first match wins: disabled, pressed or checked, hovering, focused, up. A missing state image keeps the last one loaded (table in `menu-forms.md` S.8).
- Blend: factor 255, except `gdfRadioBtn` and `gdfCheckBox` at 150. `gdfBtnKey` is opaque.
- `CombinedBtnStateChange` raises a button on Down or Focused and plays `start.wav` on Down.
- Hit test by `_re.bmp`: the bottom-left pixel's colour is outside.
- Slider: Min, Max, LargeStep 5, delay 250 ms, repeat 50 ms. PgUp +5, PgDn -5, End to Min, Home to Max, arrows 1.
- Keys: Tab, Shift+Tab; arrows walk the tab order ignoring TabStop; Enter clicks the focused or default button; Esc clicks the Cancel button; Space clicks on release.
- Captions and positions come from `menucaps.ini`: a label with no entry is blank. Default Arial 12 pt bold, `#F1D240`. `Hammer Fat` is embedded but never used by a label; lettering is baked into the art. Time format `%d:%.2d:%.2d`.

**Evidence**

`M:0x49e394`, `M:0x488ff0`, `M:0x481698`, `M:0x46877c`, `M:0x4685ac`, `M:0x468418`, `M:0x46a048`, `M:0x4865e4`, `M:0x454850`, `M:0x47f804`. `menu-forms.md` S.2, S.6, S.7, S.8, S.9, S.11.

**Status**

- Confirmed: all of the above from code.
- Inferred: dialogs centre after OnShow; click fires on mouse up inside the rectangle; hints do not show; needle drawn with auto transparency; `MS Sans Serif` on the result times.
- Unresolved: runtime look, hover timing and focus visuals of the original were never seen.

**Where the port implements it**

`source/menu/framework.js`: `MenuAssets`, `ButtonDef`, `Button`, `RadioButton`, `CheckBox`, `Slider`, `Label`, `EditBox`, `Form`, `MenuRuntime`. `source/menu/base-forms.js`: `loadDfm`, `applyCaptions`, `GameMenuScreen`, `OneWayScreen`, `TwoWayScreen`, `CoolDialog`. `source/menu/plain-controls.js`: the standard Windows controls of the one form without game art. `tools/convert-dfm.py` turns the decoded DFMs into `forms.json`; `tools/prepare-assets.py` `prepare_menu` converts TGA and BMP to PNG unchanged in pixels.

`Slider` draws no `BackImage`: `loadDfm` gives it none, and `tools/convert-dfm.py` marks the binary property and drops it, although its header says it writes PNG files. The dialog art holds the same track. A small script over the form resources and the PNGs found each `BackImage` byte-exact in the art: at (378,233), (378,292) and (378,354) on `TfrmOptions`, where the DFM places the sliders at (380,234), (379,292) and (378,355), and in place on `TfrmSliderSettings`. So by code the original blits the track up to 2 pixels off the baked one, which was never seen running; the port shows only the baked one.

**How it was compared**

form check: every form loaded with screenshots in `evidence/forms/`. `displaysettings.png`, `doublekeys.png`, `mainscreen.png`, `mainscreen-portrait.png` and `options.png` were taken again after the last changes to those forms. The current touch note shows in `evidence/flow-phone/06-start-info.png`. Screenshots were judged by themselves; there are no screenshots of the original menu to compare with.

## The 45 forms

**Original behaviour**

The binary holds 45 form resources. Class tree and per-form inventory: `menu-forms.md` S.1, S.12. Each row gives the role.

| No. | Form | Role | Address | Port class |
|---|---|---|---|---|
| 1 | TData | Data module, no UI | 0x47ed2c | `GameData` (`data.js`) |
| 2 | TfrmMain | Black host window | 0x4a4bb4 | `#menu` canvas, `MenuRuntime` |
| 3 | TfrmIntro | Intro movie | 0x4a46b8 | `TfrmIntro` |
| 4, 5 | TCaptionForm, TSingletonForm | Abstract: captions, singletons | 0x4a720c, 0x48f5e0 | `applyCaptions`, `goTo` |
| 6, 7, 8 | TGameMenuScreen, TBaseFormOneWay, TBaseFormTwoWay | Abstract screens | 0x49e19c, 0x490738, 0x491248 | `base-forms.js` |
| 9 | TfrmCoolDialog | Abstract dialog | 0x488d68 | `CoolDialog` |
| 10 | TfrmMessageBox | DFM only, no class: dead | none | none |
| 11 | TBalloonForm | Help balloon | 0x4776e8 | `TBalloonForm` |
| 12 | TfrmException2 | Crash dialog with Davi-Service | 0x4a7568 | same name, an HTML panel without Davi-Service |
| 13 | TfrmMainScreen | Tour or Quick Race, Opties, Speler, Internet | 0x49d4bc | same name |
| 14 | TfrmDifficulty | Makkelijk, Normaal, Moeilijk | 0x49cca0 | same name |
| 15 | TfrmCurrentChar | Current Tour character, Euro, progress | 0x49b288 | same name |
| 16 | TfrmCharacter | Choose one of 5 Tour characters | 0x49a810 | same name |
| 17 | TfrmTrack | Choose a Tour stage up to the one reached | 0x49999c | same name |
| 18 | TfrmGarage | Buy tune-ups | 0x498aa4 | same name |
| 19 | TfrmQuickRace | Any available track and character | 0x49ba10 | same name |
| 20 | TfrmResults | Five rows by time | 0x4a0478 | same name |
| 21 | TfrmLoseNormal | Below the qualifying place | 0x49f320 | same name |
| 22 | TfrmQualify | Through, behind the winner | 0x49fc84 | same name |
| 23 | TfrmWinNormal | First place, bonus label | 0x4a0058 | same name |
| 24, 25 | TfrmWinChase, TfrmLoseChase | Ontsnapt, Gepakt | 0x4a0c34, 0x4a0f0c | same names |
| 26 | TfrmWinFinal | Tour won, movie, three voices | 0x4a3cf8 | same name |
| 27 | TfrmTrackIntro | Interstitial, 3500 ms or click | 0x49f7c4 | same name |
| 28 | TfrmCloseDlg | Hoofdmenu or Spel beëindigen | 0x49de64 | same name |
| 29 | TfrmCDRequest | CD request | 0x497108 | class exists, never shown |
| 30, 31 | TfrmNewPlayer, TfrmHighScoreDlg | Name fields, 12 chars | 0x494ba4, 0x494de0 | same names |
| 32, 33 | TfrmDeletePlayer, TfrmNoMoney | Confirm, not enough Euro | 0x496c14, 0x496f28 | same names |
| 34, 35 | TfrmInternetDlg, TfrmUnlock | Go to site?, Harry won | 0x497320, 0x49b7d4 | same names; `TfrmInternetDlg` is never reached |
| 36 | TfrmDoubleKeys | Key used twice | 0x4948a8 | same name |
| 37 | TfrmPlayer | Five player slots | 0x4930d0 | same name |
| 38 | TfrmOptions | Controls, video, sound | 0x49504c | same name |
| 39 | TfrmKeySettings | Seven key caps | 0x4919f4 | same name |
| 40, 41, 42 | TfrmSliderSettings, TfrmWheelSettings, TfrmJoyStickSettings | Sensitivity | 0x492768, 0x4929c4, 0x492bb8 | same names |
| 43, 44 | TfrmStartInfo, TfrmStartInfoKeyBoard | Reminder before a race | 0x4975f0, 0x49796c | same names |
| 45 | TfrmDisplaySettings | Plain Windows dialog, two tabs | 0x4875b8 | same name, the two tabs from the DFM plus the port's tab Browser |

**Evidence**

`inventory`, `decompiled/game__menu.exe/delphi/forms/*.dfm.txt`, `delphi_classes.json`, handlers in `decompiled/game__menu.exe/functions/`. `TFRMMESSAGEBOX` occurs only in `.rsrc`.

**Status**

- Confirmed: the list, the classes, the handlers named.
- Unresolved: none of the forms past the intro was seen running in the original.

**Where the port implements it**

`source/menu/forms/group-main.js`, `group-race.js`, `group-dialogs.js`, `group-options.js`, `flow.js`. Component positions come from the DFM through `loadDfm`, and for `TfrmDisplaySettings` through `loadPlainDfm`.

**How it was compared**

form check loaded every implemented form. check-flow went through `TfrmIntro`, `TfrmNewPlayer`, `TfrmMainScreen`, `TfrmDifficulty`, `TfrmQuickRace`, `TfrmStartInfoKeyBoard`, `TfrmResults`. check-phone-flow went through `TfrmCurrentChar`, `TfrmTrack` and `TfrmGarage` by tap, without a race. `TfrmCDRequest` and `TfrmInternetDlg` were only loaded.

## Error dialog

**Original behaviour**

`TDaviExceptionLogger` catches what nothing handled and shows `TfrmException2`, one at a time. Text from `menu.ini [ERRORSTRINGS]`, with the application title in it. Three choices: start Davi-Service (`SERVICE.EXE -r<title>`), close, ignore. OK sets `ModalResult` 6, 7 or 5. `Details >>` shows `Foutmelding (Toets Ctrl+C om de melding naar het klembord te kopiëren)` and a memo; Ctrl+C copies it. The title bar's x does nothing while `ModalResult` is 0.

**Evidence**

`M:0x4a8500`, `M:0x4a859c`, `M:0x4a7568`, `M:0x4a790c`, `M:0x4a7c14`, `M:0x4a7a48`, `M:0x4a7fc4`, `M:0x4a7ff0`, `M:0x4a8040`, `M:0x4a808c`. `menu-forms.md` S.12 no. 12.

**Status**

- Confirmed: from code. Default choice: result 6, then `M:0x44d3f0`, which ends the program.
- Unresolved: never seen running.

**Where the port implements it**

`TfrmException2` in `source/menu/forms/group-dialogs.js`, `unexpectedError` in `source/menu/flow.js`, opened from window `error` and `unhandledrejection` in `MenuRuntime.bind`, one at a time. `prepare_error_icon` gives the original icon. It is an HTML panel rather than a canvas form, so a fault while drawing forms cannot take it along. Left out on purpose: the Davi-Service line and option, because `SERVICE.EXE` does not exist here. Of the two choices left the first, Afsluiten, is chosen by default; the original's default also ended the program. Afsluiten runs `data.terminate`, which leads back to the first screen, as quitting does. Browser refusals (`NotAllowedError`, `AbortError`) are not faults. Errors during a race are not shown here: `RaceRunner` handles those. A pad reaches it through `keyDown`: up and down choose, Enter is OK.

**How it was compared**

form check, with the one-off script behind it: a throw from a timer and a rejected promise open the dialog, a second fault does not stack, Negeren goes on, Afsluiten ends on the first screen, pad keys work, and `NotAllowedError` opens nothing. Not run: Ctrl+C copy. No comparison with the original.

## Navigation and transitions

**Original behaviour**

```
TfrmMainScreen -Verder-> TfrmDifficulty -+- Quick -> TfrmQuickRace -Verder-> [StartInfo?] -> race
                                         +- Tour --> TourStarted ? TfrmCurrentChar : TfrmCharacter
TfrmCurrentChar -Verder-> TfrmTrack; -Ander karakter-> TfrmCharacter
TfrmCharacter -Verder-> voice, 2000 ms -> TfrmTrack
TfrmTrack -Verder-> TfrmGarage -Verder-> [StartInfo?] -> race
```

Terug: Difficulty to MainScreen, QuickRace to Difficulty, CurrentChar to Difficulty, Character to CurrentChar, Track to CurrentChar, Garage to Track.

| After a race | Condition | Screen |
|---|---|---|
| Quick Race | finished, not chase | `TfrmResults`, then `TfrmQuickRace` |
| Quick Race | otherwise | `TfrmQuickRace` |
| Tour | finished, not chase | `TfrmResults`, then `TfrmWinNormal` (rank 0), `TfrmQualify` (rank within limit), `TfrmLoseNormal` |
| Tour | finished, chase, last track | `TfrmWinFinal` |
| Tour | finished, chase | `TfrmWinChase` |
| Tour | not finished, chase, out of time or total loss | `TfrmLoseChase` |
| Tour | not finished, otherwise (also arrested) | `TfrmTrack` |

`TfrmWinNormal`, `TfrmQualify`, `TfrmWinChase` lead to `TfrmTrackIntro` (3500 ms or click, voice `NextTr`), then `TfrmTrack`. `TfrmLoseNormal`, `TfrmLoseChase` lead to `TfrmTrack`. `TfrmWinFinal` leads to `TfrmQuickRace` if Harry is not yet unlocked, otherwise `TfrmCharacter`.

Einde: `TfrmCloseDlg` on every screen except the main one (3 quits, 1 main screen, 2 stays). `TfrmMainScreen` quits at once. No animated transitions: the old form hides, the new one shows, old is released. Every visit re-creates the form.

**Evidence**

`M:0x49e81c`, `M:0x4a58a4`, `M:0x4a59cc`, `M:0x4a0a20`, `M:0x49e9bc`, `M:0x49dc20`, `M:0x4a42e8`. `menu-forms.md` S.5, S.6; `startup-flow.md` S.3, S.4.

**Status**

- Confirmed: class pointers read from the code. An arrest writes all three flags 0, so in a chase it takes the row to `TfrmTrack`.
- Inferred: `prevClass` looks unused.
- Unresolved: the post-race path was never observed in the original.

**Where the port implements it**

`source/menu/flow.js` `flowQuickRace`, `flowTour`, `closeRequested`, `startInfoThenRace`. `MenuRuntime.goTo`, `showModal`. Each form's `next` and `previous`. One difference in look: `goTo` leaves the old form on screen until the new one has loaded its art.

**How it was compared**

check-flow: Quick Race forward path and results on Amsterdam. form check: navigation through all Tour and Quick Race result branches with a faked `game.ini`. The forward Tour path by clicks and the Terug buttons are in neither.

## Tour

**Original behaviour**

The Tour is the only championship. No points table: `FPoints` is the Euro balance. Order `[TOURRACE] TRACKIX=2,0,1,7,8,3,5,6,4`. `QUALIFYPOSITION` is the worst allowed 0-based rank, field of 5.

| Pos | Track | Type | Makkelijk | Normaal | Moeilijk | Laps |
|---|---|---|---|---|---|---|
| 0 | Scheveningen | Kustrace | 5e | 4e | 3e | 2 |
| 1 | Amsterdam | Stadsrace | 4e | 3e | 3e | 2 |
| 2 | Rotterdam | Stadsachtervolging | Ontsnappen | Ontsnappen | Ontsnappen | 2 |
| 3 | BodenSee | Drielandenrace | 4e | 3e | 2e | 2 |
| 4 | Munchen - Wenen | Snelwegrace | 3e | 2e | 1e | 1 |
| 5 | Wenen | Stadsachtervolging | Ontsnappen | Ontsnappen | Ontsnappen | 2 |
| 6 | Hamburg | Havenrace | 2e | 1e | 1e | 2 |
| 7 | Frankfurt | Vliegveldrace | 1e | 1e | 1e | 2 |
| 8 | Berlijn | Stadsachtervolging | Ontsnappen | Ontsnappen | Ontsnappen | 2 |

Finished races only:

| Case | Effect |
|---|---|
| Race, rank 0 | RR_WINTRACK only. Advance if `next == FTrackIx`. +2500 Euro on every win, replays too |
| Race, rank within limit | RR_QUALIFY. Advance if `next == FTrackIx` |
| Race, below limit | No flag, no advance. Money and turbo from the race stay |
| Chase, finished | RR_QUALIFY. Advance with no equality check, so a replayed chase also moves on. If `FTrackIx == 8`: RR_WINRACE |

Five characters with separate Euro, turbo, tune-ups and progress; `FTrackIx` is shared. New character: 0 Euro, 0 turbo, track 0. Winning does not reset anything; `next` stays 9. `TfrmTrack` starts on `next`, or on the stored index if finished; maximum is `next`, or last if finished. Race chase limit: `CHECKPOINT_SPEED` x 1000 ms; `CHASETIME` reaches only `IsChase`.

**Evidence**

`M:0x4a5624`, `M:0x49f010`, `M:0x49f100`, `M:0x49eef0`, `M:0x48dd00`, `M:0x48dcdc`, `M:0x49a168`, `M:0x49a464`, `static.ini`. `game-progression.md` S.1, S.5, S.11.

**Status**

- Confirmed: rules and tables. RR_WINRACE compares `FTrackIx`, assembly `M:0x49ef6e` (see the corrections).
- Inferred: the unguarded chase advance is an oversight. Kept, because the brief is original behaviour.
- Unresolved: no Tour was ever run on the original; all rules are static.

**Where the port implements it**

`source/menu/data.js`: `fillRaceResultsTour`, `processFirstPosition`, `processQualify`, `checkChaseQualify`, `CharResult`, `maxTourTrack`, `initialTourTrack`. `source/menu/forms/group-main.js` `TfrmTrack`, `TfrmCharacter`, `TfrmCurrentChar`.

**How it was compared**

form check: result branches with a faked `game.ini`. check-phone-flow walks the Tour's screens by tap up to the Garage and starts no race. No Tour race has been driven from the menu in any check, and no comparison with the original was run. The brief limits verification to one level.

## Quick Race

**Original behaviour**

`[QUICKRACE] TRACKIX=2,0,1,7,8,3,5,6,4,9`, `CHARIX=0,1,5,6,3,4,2,8`, default character position 1. Both lists wrap. Showing the screen sets `RaceMode = 1`. Track art `trname<NN>`, slideshow `qtc0T_FF` every 2000 ms. Character art and name plate by **static character index** (`char+0x10`): `chara_<n>`, `qr_CH<n>`. `btnNext` is enabled only if both are available.

Position 9 is track 9, not in the Tour, with its files since the track update: `NAME=Download-race`, `TYPE=Country-race`, `NRLAPS=2`, `QUALIFYPOSITION=0,0,0`, `BRITISH=1`, the only track with it. The name art `trname09` reads "Country etappe", and that is what the player sees. Position 7 is `[char8]`, since the car update the truck: `name=downld`, `indexingame=7`, stats 5,5,5,5. `chara_08`, `qr_ch08` and the name art read "De Schaduw". Both open by the rules under Unlocks.

The race gets all four tune-ups, 0 Euro, turbo 100. Career state does not change, only `HarryUnlocked`, `QRState` and high scores. Opponents are cars 0..3 with the player's slot replaced by 4, in `spel.dat`, so D.T. Harry and the police car never race against the player.

**Evidence**

`M:0x49bdec`, `M:0x49c198`, `M:0x49c4d8`, `M:0x4606d0` (`param_1[4]` is +0x10, the static index; `param_1[3]` is +0xC, `IndexInGame`), `M:0x48b5bc`, `M:0x4a54dc`, `S:0x42de60`. `menu-forms.md` S.12 no. 19; `game-progression.md` S.9, S.10, S.11. Track 9 and the truck: `static.ini [TRACK9]`, `[char8]`, `[QUICKRACE]`.

**Status**

- Confirmed: from code and `static.ini`.

**Where the port implements it**

`source/menu/forms/group-main.js` `TfrmQuickRace`, `Slideshow`. `source/menu/data.js` `quickTrackAvailable`, `quickCharAvailable`, `selectQuickTrack`, `writeQuickRaceStuff`, `fillRaceResultsQR`. `TfrmQuickRace.setCurrentChar` loads both images by `char.index`, the static number, so position 7 shows `chara_08` (`De Schaduw`) and `qr_ch08`.

**How it was compared**

check-flow: Quick Race on Amsterdam with the default character, race to the end, `TfrmResults`, back. Fix check, one-off, before the updates: position 7 by screenshot and state at 1280x720 and 390x844. Fix check, one-off, on the final build when the updates came in, in headless Chromium: the real menu, Quick Race position 9 and character position 7, `game.ini` ended up with etappe 9, british 1, car 7, a race ran on the keyboard device, 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. By eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else: no lap, no race end, no sound, no comparison with the original. Track 9 and the truck are not verified beyond this. Other tracks: boot-all booted them, not from this screen.

## Difficulty

**Original behaviour**

Three levels, a Settings value per player, free to change at each start: 0 Makkelijk, 1 Normaal (default), 2 Moeilijk. Effects: `[LEAGUE] LEAGUE`, which selects `car_cfg.ini [league%d]`, `raser.ini [3D Anims] league%d` and `[BEST TIMES] ..._L%d`; the qualify limit per track; the chase limit `[CHECKPOINTTIME] Difficulty<d>` = 92, 71, 62 (default 110 if absent), times `checkpoint_value=1000`. Help text says it influences "kwalificatie-eisen en je snelheid en die van je tegenspelers".

**Evidence**

`M:0x49d124`, `M:0x49cf00`, `M:0x48e33f`, `S:0x4494d0`, `S:0x44bf10`, `static.ini`. `startup-flow.md` S.3; `game-progression.md` S.5.

**Status**

- Confirmed: all of the above. `dif_mod=4` and `difficulty=1` in `game.ini` are separate keys that the menu never writes (`startup-flow.md` S.3).
- Unresolved: what `dif_mod` and `difficulty` do beyond their readers; that belongs to the race research.

**Where the port implements it**

`TfrmDifficulty` in `group-main.js`; `writeGeneralStuff`, `qualifyCaption`, `readStatic` in `data.js`. League use in the race runs as shipped in the recompiled code.

**How it was compared**

check-flow ran Normaal only. form check: the screen loaded. No comparison across levels and no comparison with the original.

## Money and tune-ups

**Original behaviour**

Money is the Euro balance per Tour character. Sources: coins in the race (+100, +500, +1000), flitspaal +100, flitser -50, and `FirstPlaceBonus` 2500. No prize table is live. After a finished Tour race: clear all tune-up flags, `FPoints = max(0, MONEY)`, `Turbo = clamp(TURBO_AMOUNT, 0, 100)`. A race not finished changes nothing, so tune-ups stay bought. Menu has no upper limit; `spel.dat` clamps to 999,999.

`static.ini [TUNEUPS]`:

| Ix | Name | Price | dSpeed | dAccel | dBrakes | dHandling | game.ini key |
|---|---|---|---|---|---|---|---|
| 0 | Motor | 2300 | 3 | 1 | 0 | -1 | `MOTOR` |
| 1 | Banden | 1700 | 0 | 0 | 0 | 4 | `BANDEN` |
| 2 | ABS Bremsen | 1500 | 0 | 0 | 4 | 0 | `ABS` |
| 3 | Getriebe | 2300 | 1 | 3 | 0 | -1 | `VERSNELLINGSBAK` |
| 4 | Turbo | 250 | 0 | 0 | 0 | 0 | `TURBO_AMOUNT` |

`TfrmGarage`: Motor selected on show, Vorige and Volgende wrap. Kopen enabled by the flag, money plays no part, so a poor player gets `TfrmNoMoney`. Turbo: +10 per 250 Euro, repeatable, disabled at 100; turbo looks at money first, the others at the flag first. `PEEP` on purchase. Stat pips: stat + bought deltas + preview; `klrondje`, `blind_up` gain, `redin_up` loss. Turbo row `Trunc(Turbo*9/100)`, +1 preview when selected. Voice `CGR07` (RR_QUALIFY) or `CBR07` when `PREVSTATE=2`. The deltas only move menu pips; in the race the flags index `vdyns.dat`. `garage.ini` is read by no binary. No repair shop exists; damage is 0 at each race start.

**Evidence**

`M:0x4991f4`, `M:0x499600`, `M:0x4996a0`, `M:0x499538`, `M:0x48dc4c`, `M:0x48d9d8`, `M:0x48dca4`, `S:0x4502e0`, `S:0x44e340`. `game-progression.md` S.1, S.2, S.3, S.4, S.12; `gameplay-systems.md` S.18.

**Status**

- Confirmed: all of the above. Debug handlers `Money = 300` and the like are unreachable: no `PopupMenu` link.
- Unresolved: no Tour was run on the original, so none of this has runtime confirmation.

**Where the port implements it**

`TfrmGarage`, `MultiIndicator` in `group-race.js`. `canBuyTuneUp`, `buyTuneUp`, `CharResult` in `data.js`. Race side runs as shipped in the recompiled code.

**How it was compared**

form check: Garage buying. The money rule after a race was exercised only with a faked `game.ini`, if at all. No comparison with the original.

## Unlocks and locked content

**Original behaviour**

| Item | Condition | Scope |
|---|---|---|
| D.T. Harry (`LOCKEDCHARIX=2`) | RR_WINRACE seen by `TfrmQuickRace`, any character. First time: set flag, select him, voice `unlock`, modal `TfrmUnlock` | Per player |
| Rotterdam, Wenen, Berlijn in Quick Race | Any character's `next` >= Tour position of that track. Text MENUSTRINGS 7 | Per player |
| Other tracks | The seven `etappe<i>` files exist. 0..8 ship on the disc, 9 since the track update; disc 1.01 without updates: no files for 9. Text MENUSTRINGS 2 | Install |
| Download car (`DOWNLOADCHARIX=7`) | `L0_ANIM.INI [DOWNLOADCAR] Count > 0`. Since the car update the section ships, with `overlay7.ini` and `[Portraits] 7=PLAYER_7`. Disc 1.01 without updates: no such section, `overlay7.ini` is absent, `[Portraits]` stops at 6, so locked | Install |

`[QUICKRACE] LOCKEDCHARTEXT` is loaded but the screen uses the character's own `LockedText`. No money-based unlocks. Help topic 29 agrees with the code; another passage and the manual add that you must finish first, which no code checks.

**Evidence**

`M:0x49c6a0`, `M:0x49c78c`, `M:0x49ca08`, `M:0x48c644`, `M:0x461a4c`, `M:0x48ea3d`, `M:0x4a42e8`, `S:0x4932a0`. `game-progression.md` S.10; `menu-forms.md` S.5, S.13. The updates: `original-game-decompiled/original/updates/README.md`, `delta.csv`.

**Status**

- Confirmed: conditions and data.
- Confirmed: the download car is the truck of the car update, De Schaduw. The update settled it: `car_cfg.ini` row 7 in all three leagues went from `7=RACER_7,TOURNAMENT_BONUS,PIET,hoog4,1500,7,5000,7,dam_dummy` to `7=RACER_7,DOWNLOADCAR,KENT,hoog4,1500,42,5000,7,dam_truck`, and `l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini` rename `TOURNAMENT_BONUS` to `DOWNLOADCAR`. The earlier inference from disc 1.01's row 7, that it was the DeLorean, was wrong.
- Unresolved: what the Davilex download page offered. Whether that was these two updates and nothing more is not known.

**Where the port implements it**

`TfrmQuickRace.unlock`, `takeUnlock`, `reachedInTour`, `quickTrackAvailable`, `quickCharAvailable`, `trackFilesExist` in `data.js` and `group-main.js`. No menu code changed for track 9 and the truck: all seven `etappe9.*` and the section `[DOWNLOADCAR]` exist, so these rules open them, as `M:0x461a4c` does for the track. The files come in through the `UPDATES` overlay in `prepare_race`, `tools/prepare-assets.py`: updates win, case-insensitive, stale files removed.

**How it was compared**

form check: `unlock.png`, `unlock-portrait.png`, and `quickrace.png`, which shows the unlocked default state. Earning the unlock by a Tour was not run, and neither was the locked state of a chase track. Fix check, one-off: track position 9 and character position 7 were open in the real menu and a race started from them (see Quick Race). No comparison with the original.

## Records

**Original behaviour**

One best lap per static track, 10 entries, global over players, modes and difficulties, in `menu.ini [HIGHSCORES]`. Seeds: Amsterdam 2:57:13 Andre, Rotterdam 3:31:03 Jack, Scheveningen 3:04:06 Hidde, Wenen 4:27:33 Kent, Berlijn 4:30:97 Frits, Hamburg 2:16:52 Cameron, Frankfurt 2:01:21 Jelle, BodenSee 3:30:70 Jeroen, Munchen - Wenen 3:24:50 Marcel, Download-race 5:05:05 Byron. Missing keys load as 0 and `<no name>`; 0 can never be beaten.

`CheckIfBestLap`, finished races in both modes: for each lap below `NRLAPS`, signed `lap < record` stores it. If any: `TfrmHighScoreDlg` with voice `aud2`, prefilled with the player name, 12 chars, loops until not empty, over the black main form before the next screen. Written on every menu exit.

Separate: `game.ini [BEST TIMES]` per track and league, read and written by `spel.dat` only. The car update's `game.ini` comes with one entry, from a race of the developers: see the INI hand-over.

**Evidence**

`M:0x49ed60`, `M:0x48efac`, `M:0x481090`, `M:0x48f168`, `S:0x449ea0`, `S:0x44ae80`. `game-progression.md` S.6.

**Status**

- Confirmed: all of the above.

**Where the port implements it**

`checkIfBestLap`, `readMenuIni`, `saveMenuIni`, `formatTime` in `data.js`; `TfrmHighScoreDlg`, `askHighScoreName`. `[BEST TIMES]` runs as shipped in the recompiled code, kept by the VFS in IndexedDB.

**How it was compared**

check-flow shows the seed on the Quick Race screen for Amsterdam; that run set no new record, so the dialog did not appear. form check: `highscoredlg.png`. No comparison with the original.

## Players and save format

**Original behaviour**

`SaveGame<N>.RCR` per player, N = lowest free single digit. Five reachable: current + 4 slots, more files are not shown. Name 12 chars in the UI, no trim, no duplicate check. Delete only if another exists; the first other takes over. Dialog opens: save current, copy all to `.BAK`. Annuleren restores all files and reloads. Saved at every menu exit, dialog open and new player; not after a purchase or result.

| Offset | Size | Field |
|---|---|---|
| 0 | 33 | Name, ShortString |
| 33 | 4 | Tour char index, header copy |
| 37 | 20 | Difficulty, Resolution, FX, Music, Voices volume |
| 57 | 8 | FXOn, MusicOn, VoicesOn, StartInfoOn, AlphaBlending, Bilinear, WaitVbl, Mipmapping |
| 65 | 16 | Gamma, TextureMem, DriverIndex, RenderFocus |
| 81 | 40 | Up, Down, Left, Right, Extra1, Extra2, Extra3, ControlType, JoySens, WheelSens |
| 121 | 8 | Tour `FCharacterIx`, `FTrackIx` |
| 129 | 85 | 5 x next track, Euro, turbo, 5 tune-up bools |
| 214 | 9 | QR `FCharacterIx`, `FTrackIx`, `FShowedUnlockPopup` |
| 223 | 4 | `FTrackToDrive` |

Total 227 bytes, no magic, version or checksum. `Resolution` is overwritten after load from `raser.ini`. New player: Tour char position 2 (Kat), QR position 1 (Tommie), settings from `[DEFAULTSETTINGS]`, `TourStarted` 0. `TourStarted` is not saved: `LoadPlayer` sets it.

**Evidence**

`M:0x48ad68`, `M:0x48ae64`, `M:0x481178`, `M:0x47fbd4`, `M:0x47fdc8`, `M:0x49354c`, `M:0x493658`, `M:0x493754`, `M:0x48c24c`. `startup-flow.md` S.6; `game-progression.md` S.7, S.8, S.11.

**Status**

- Confirmed: layout from the writers and loaders.
- Unresolved: no sample `SaveGame*.RCR` exists in the install or on the disc, so 227 bytes is computed.

**Where the port implements it**

`Player`, `SaveReader`, `SaveWriter`, `createPlayer`, `loadPlayer`, `savePlayer`, `otherPlayers`, `beginPlayerDialog`, `endPlayerDialog`, `deletePlayer` in `data.js`; `TfrmPlayer` in `group-dialogs.js`. Files live in `source/host/persist.js` (IndexedDB), a delete writes an empty file as a tombstone. Port additions: `saveProgress` after results, purchases, Options and when the page hides, since a closed tab has no `DataDestroy`. `.BAK` copies are an in-memory snapshot. `askPlayerName` in `flow.js`: OK from a pad on an empty name gives `Speler 1`, or the next free number, because a pad cannot type. With keyboard or touch the dialog keeps asking, as the original.

**How it was compared**

check-flow: new player, save file present. form check: `player.png`, options persistence. Fix check, one-off: the default names from a stand-in pad, and Enter from the keyboard on an empty name asking again. Switch, delete and Annuleren-restore were not run in a listed check. The port's own writer and reader agree by construction; no file from the original exists to test against.

## Internet and download items

**Original behaviour**

`btnInternet` is enabled if a default browser is found by registry lookup. `TfrmInternetDlg`: Ja opens `DOWNLOADURL` = `http://www.davilex.nl/cgi-davilex/frames/produkt_inlog.cgi?set=a2r4` through `ShellExecute`, and sets a flag; on Verder the menu then re-reads `static.ini`, for what a download may have added. Download content is locked by missing files until they are installed (see Unlocks). Davilex's two official updates, `a2racer4_update_car.exe` and `a2racer4_update_track.exe`, supply them, and leave `static.ini`, `menu.exe` and `spel.dat` as they are.

**Evidence**

`M:0x49da14`, `M:0x4910f0`, `M:0x491024`, `M:0x490b4c`, `M:0x49da44`. `menu-forms.md` S.12 no. 13, 34, S.13. Reproducible: on 2026-10-31 `curl -I` on that URL answered 301 to `https://nl.visma.com/producten/davilex/?set=a2r4`, so it no longer leads to an A2 Racer site. The two updates: `original-game-decompiled/original/updates/`.

**Status**

- Confirmed: code path and text.
- Unresolved: what the site offered in 2000. No copy of the site was found, so whether it offered these two updates and nothing more is not known.

**Where the port implements it**

`TfrmMainScreen.create` in `group-main.js` greys `btnInternet`, and `onBackgroundClick` shows the note `De website van A2 Racer 4 bestaat niet meer. Daarom kun je hier niet naar het internet.` through `notApplicable`. The original's own port rule says the same (`game-progression.md` consequences). `TfrmInternetDlg` remains as a class and art, and nothing opens it. The re-read of `static.ini` is left out; nothing can change that file here. Track 9 and character position 7 do not depend on the button: the updates' files come with the port, and both open by the original's rules (see Unlocks). Help topics 13, 39 and 40 keep their original text, which still describes the site.

**How it was compared**

Fix check, one-off: the button is disabled, and a mouse click at 1280x720 and a touch tap at 390x844 both show the note. form check: `mainscreen.png`, `internetdlg.png` by the `?form=` route. No comparison.

## CD check

**Original behaviour**

Menu: search `c:\` to `z:\` + `DATA\INTRO1.MPG`. Found: go on. Otherwise `TfrmCDRequest`: OK goes on with no second check, Annuleren exits with `RaceMode` 0. Race: `S:0x4cd3b0("\DATA", "rcs.img")`, CD drives only; `NOCD` in the environment bypasses it; otherwise fatal, language string 32 `A2 Racer CD-ROM niet gevonden.` `[CDCHECK]` is disabled by missing keys. The menu needs the disc only for this check and the intro fallback.

**Evidence**

`M:0x4a5d4c`, `M:0x4a5c24`, `M:0x4985dc`, `S:0x447be0`, `S:0x4cd370`, `S:0x4cd478`. `startup-flow.md` S.2, S.5. Wine runs: dialog "CD niet gevonden" with no drive; no dialog with the file on a mapped drive.

**Status**

- Confirmed: code, and the menu half observed under Wine. The owner's patch notes part 7 document the same race branch.

**Where the port implements it**

`startUp` in `flow.js` has no CD check. Race: byte patch at `0x004CD478` in `tools/recomp/replacements.py`. `TfrmCDRequest` exists in `group-dialogs.js` and is never shown. Recorded in `docs/intentional-differences.md`, Platform.

**How it was compared**

check-flow runs without a disc prompt on the way to the race. form check: `cdrequest.png`, look only.

## Help and the Hunny agent

**Original behaviour**

Help on a screen or dialog: voice `cmh07_00`. If the agent exists: `TBalloonForm` from `agent.ini` for that class, 23 sections, each with caption and links; Hunny (`hunny.acs`, 57 frames of 75x150; Showing, Hiding, IdlingLevel1..3; no sound) stands below it. Balloon at agent.Left = button X + 10, agent.Top = button Y + 60 + balloon height. A link calls `Application.HelpContext`, so WinHelp shows `Menu.hlp` at that context, with its pictures and links. No agent: WinHelp directly. The balloon stays until x or until the form closes. Help is hidden on `TfrmCloseDlg`, `TfrmCDRequest`, `TfrmHighScoreDlg`, `TfrmNoMoney`, `TfrmUnlock`, `TfrmDoubleKeys`, `TfrmStartInfo`, `TfrmStartInfoKeyBoard`, `TfrmTrackIntro`. `TfrmDisplaySettings` has its own Help: context 15 on tab Algemeen, 14 on tab Problemen.

`Menu.hlp`: 50 contexts through `|CTXOMAP`, 52 topics, the last two empty, 64 keywords in `|KWBTREE`, 43 pictures. 41 contexts are in `agent.ini`. The other nine:

| Context | Topic | Reached by |
|---|---|---|
| 6 | Het Raceteam | Jump from Welkom, Index |
| 14 | Weergave: problemen | `TfrmDisplaySettings`, jumps from Weergave instellen and Instellingen, Index |
| 15 | Weergave: algemeen | `TfrmDisplaySettings`, jumps from Weergave instellen and Instellingen, Index |
| 24 | Startinfo | Index only |
| 34 | Karakter kiezen | Index only |
| 45 | Besturing instellen | Jumps from Instellingen and Algemene onderwerpen, Index |
| 46 | Spelregels | Jump from Algemene onderwerpen, Index |
| 47 | Instellingen | Jump from Algemene onderwerpen, Index |
| 50 | Winnaar A2 Race | Index only |

**Evidence**

`M:0x49e678`, `M:0x4891e0`, `M:0x482af8`, `M:0x47df44`, `M:0x477ab0`, `M:0x47d4d0`, `M:0x477d64`, `M:0x488b60`, `agent.ini`, `original/disc/Data/MenuData/Hunny.acs`, `original/install/menu.hlp`. `menu-forms.md` S.12 no. 11, S.13, Unknown; `audio.md` S.16. The table was rerun with a small script over `public/assets/menu/menu-help.json` and `agent.ini`; the jumps were also counted with `prepare_help`'s parser over the file itself.

**Status**

- Confirmed: code and files. The balloon outline for position 1 from `M:0x477d64`. The jumps and keywords, from the file.
- Inferred: reading of the COM offsets as Left, Top, Hide, Show (`audio.md`, Unknown). That WinHelp offered Index and Terug buttons for this file: it has keywords and no contents file.
- Unresolved: when the Agent server plays the idle animations; it lives outside this game. The port's 10 s pause is chosen.

**Where the port implements it**

`TBalloonForm`, `HelpWindow`, `showHelpContext`, `showHelpTopic` in `group-dialogs.js`; `prepare_agent`, `prepare_help` in `tools/prepare-assets.py`. `prepare_help` parses `Menu.hlp` itself: real hotspots, bold, tab stops and keywords. `HelpWindow` is a plain scrolling HTML window with the topic's title and text, the jumps as links, and the buttons Index, Terug and Sluiten. Index and Terug stand in for WinHelp's. Tab walks links and buttons, for a pad, and Enter uses the one selected. Still missing, on purpose: the file's 43 pictures, its layout and its popup-window look. Tab stops are approximated by one fixed size.

**How it was compared**

form check: `balloon.png`, help links. Fix check, one-off, tapped on a 390x844 touch profile: a balloon link opens Algemene onderwerpen, Spelregels opens from there, Terug goes back, Index opens, and Het Raceteam, Startinfo, Winnaar A2 Race, Spelregels, Instellingen and Besturing instellen open from Index. It tapped `Karakter kiezen (Quick Race)`, context 37, rather than context 34 `Karakter kiezen`, so that one is known from the data only. Hunny's animation is in no listed check. No comparison with the original.

## Options and greyed options

**Original behaviour**

`TfrmOptions` edits a copy of the settings. OK assigns it, Annuleren restores Music, FX, Voices; x closes with result 2 and no volume restore, because the sliders write straight into the player's settings for a live preview. Control radios 0 keyboard, 1 joystick, 2 gamepad, 3 wheel; Instellen disabled for gamepad. Video: `3D kaart` plus Laag, Normaal, Hoog: Low 3D?6:0, Medium 3D?3:1, High 4; other values are custom, High shown, value kept. Laag is enabled only without 3D, Hoog only with 3D. Hoog is an 800x600 display mode. `3D kaart` follows the mode: by `M:0x487514` 0, 1, 2 and 5 have no 3D card. `chkVideo3dClick` `M:0x4959c4` moves a choice that becomes disabled to Normaal.

`TfrmKeySettings`: click a cap, press a key. In `[CONTROLKEYS]` (`count=65`: entry 0 is `<None>`, entry 13 is VK 108, which is fatal in `spel.dat`; `d` and `p` are commented out): stored. Otherwise `MessageBeep`, capture ends. Focus loss cancels. OK with a duplicate: `TfrmDoubleKeys`, stays. Standaard: `static.ini` defaults, including sensitivities. Defaults: Gas 38, Rem 40, Links 37, Rechts 39, Turbo 17, Handrem 18, Claxon 32.

`TfrmDisplaySettings`: two tabs, plain Windows controls: Algemeen (Helderheid, Mip-mapping, Texture detail, Videokaart, Overige resoluties) and Problemen (bilinear, alpha, render memory, wait VBL), each with an explanation text. Texture limits from `AVAILABLE_TEXTURE_MEMORY`: below 0x1000000 Maximaal off, below 0x800000 Normaal off, 0 no limit. Mip-mapping goes into the save only: no writer puts it in an INI. With driver index below 2, OK stores the one fixed mode, which turns a save on Hoog back to Normaal. Without a 3D card `M:0x4884b8` and `M:0x488bd8` grey Mip-mapping, Helderheid, bilinear, alpha and Texture detail.

**Evidence**

`M:0x495d6c`, `M:0x4960fc`, `M:0x495808`, `M:0x4956b4`, `M:0x496a8c`, `M:0x487514`, `M:0x4959c4`, `M:0x496684`, `M:0x491e64`, `M:0x491f28`, `M:0x492644`, `M:0x4925dc`, `M:0x487d30`, `M:0x487f14`, `M:0x4882f4`, `M:0x4884b8`, `M:0x488bd8`, `M:0x488808`, `M:0x488b60`, `S:0x4bc0f0`, `S:0x44b180`, `S:0x447a00`, `S:0x4c7ed0`. `menu-forms.md` S.12 no. 38 to 45, S.13; `input.md` C9, C10, C13, H9; `render-textures.md` S.8.

**Status**

- Confirmed: code and data.
- Confirmed by a run: the race at `RESOLUTION` 0 and 1 works on an emulated Windows 98 machine, with the real Ramp rasteriser: `docs/research/render-8bit.md`, which also lists what that run did not settle. It starts `spel.dat` directly, so the menu's rules above stay read from code.

**Where the port implements it**

`group-options.js`: `TfrmOptions`, `TfrmKeySettings`, `TfrmSliderSettings`, `TfrmWheelSettings`, `TfrmJoyStickSettings`, `TfrmDisplaySettings`. `plain-controls.js`: `PlainDialog`, `loadPlainDfm`, `PlainTabs` and the Windows controls. `vkOf` in `source/input/keyboard.js`. `RESOLUTIONS` in `source/ui/settings-panel.js`, `source/settings.js`.

Greyed with a note on click, `notApplicable` in `data.js`:

| Option | Why | Note |
|---|---|---|
| `Laag` with `3D kaart` on | The original's own rule. With `3D kaart` off it is open | `Laag kan alleen als 3D kaart uit staat.` |
| Without `3D kaart`: Mip-mapping, Helderheid, bilinear, alpha, Texture detail | The original's own rule. In the race alpha is forced off there (`8bit-drawing.md` section 0), and Helderheid does nothing at 8 bits (`8bit-device.md` section 5) | `Dit kan alleen als 3D kaart aan staat...` |
| `Hoog` | Its 800x600 display mode has no effect on the browser's picture, and the size class of `S:0x44bd10` has no other live effect in 3D modes. A save with `RESOLUTION 4` or a custom value still shows it chosen and keeps its value; game code then sees 800x600, and it looks like Normaal. Choosing Normaal gives 3. Without `3D kaart` the original has it off too | `In de browser bepaalt 3D-resolutie hoe groot het beeld is...` |
| Videokaart, `cboDriver` | The browser chooses. Shows the save's value, `automatisch` by default | `De browser kiest zelf de videokaart...` |
| Overige resoluties, `cboResolution` | Shows the original's fixed `640 x 480`. Replaced by 3D-resolutie and Renderschaal | `Hoe groot de browser het beeld tekent...` |
| `Rendergeheugen afgehandeld door videokaart`, render focus | The browser decides | `De browser bepaalt zelf waar het rendergeheugen staat...` |
| `Verversingssnelheid synchroniseren op beeldscherm`, wait VBL | The browser waits itself | `De browser wacht zelf op de verversing...` |

`3D kaart` and `Laag` are open by the original's rules: `isMode3d`, `chkVideo3dClick` and `enableVideoChoices` in `group-options.js`. OK writes `RESOLUTION` 1 or 0, and the race then runs its 8-bit path: [host.md](host.md), [render.md](render.md), `docs/research/render-8bit.md`. Choices the port makes on that path are in `docs/intentional-differences.md`.

`Helderheid` stays enabled with `3D kaart`: `[GFX OPTIONS] gamma` squares the colours in the race's texture conversion, as in the original, and is not the display adapter's gamma.

`TfrmDisplaySettings` is rebuilt from its DFM by `loadPlainDfm`: tabs from MENUSTRINGS 22 and 23, every explanation label through the caption engine, at the DFM's positions. The classic Windows colours and bevels are a reconstruction from the DFM's `clBtnFace` and standard controls, with no screenshot of the original compared. Tab fonts and small captions grow on small screens, control hit areas by 6 form pixels on touch. `FormShow`'s last call starts focus on `btnOk`. Radios: arrow keys select as in Windows; from a pad they only move and A selects, so that walking past a group does not change it. Left out on purpose: `cboDriverChange`'s fixed mode on OK, so a save on Hoog keeps its value. Help: context 15 on Algemeen, 14 on Problemen, as `M:0x488b60`, and an own Dutch text on Browser.

Added on purpose: a third tab, Browser, with the port's own settings from `source/settings.js`, stored per browser in `localStorage`: 3D-resolutie, Renderschaal, the resulting picture size with a GPU-limiet note when the graphics card cannot draw that large, Volume, Beeldjes per seconde tonen, Volledig scherm, Aanraakbediening (Automatisch, Aan, Uit) and Deadzone gamepad. They apply at once; Annuleren or the x of Geavanceerd or Opties puts all seven keys back. The race's settings panel edits the same values.

Texture memory: `createSurface` in `source/host/directx.js` refuses after 128 surfaces of 256x256 at 2 bytes, and after 256 at 1 byte on the 8-bit path, so `S:0x4bc0f0` measures exactly 0x1000000 on every machine, and Maximaal and Normaal stay selectable. Saves lowered to Normaal by an older value stay there until the player changes them.

**How it was compared**

form check: forms loaded, options persistence, tabs of Geavanceerd, with `options.png` and `displaysettings.png`. check-race-ui, through the race's panel: `settings: Auto at 100% gives 1600x720`, `settings: 480p at 50% applies at once, drawing buffer stays native`, `settings: survive a restart`, `settings: Auto at 200% renders 3200x1440`, `settings: the GPU limit is applied and shown`, `settings: Volume sets the master gain, once`, the `touch setting` checks and `gamepad: the deadzone follows the setting`. Fix checks, one-off: Hoog disabled with its note, a `RESOLUTION 4` save shown and kept, Normaal from it gives 3; Help's titles per tab; grey box and grey label show notes; Browser tab applies at once, Annuleren and the x put all back, OK keeps them; GPU-limiet note with a stubbed limit of 512; `0x73b4f9` reads 16777216 after boot, `game.ini` holds it after a whole race, and Geavanceerd then shows Maximaal and Normaal enabled. check-software, with real clicks: `options: starts with 3D kaart and Normaal, Laag off`, `options: 3D kaart off opens Laag, Hoog stays off, picture of the card goes`, `Weergave: the 3D-only controls are off without 3D kaart`, `options: Normaal without 3D kaart writes RESOLUTION 1`, `options: a save at 1 shows 3D kaart off and Normaal`, `options: Laag writes RESOLUTION 0`, `options: 3D kaart on from Laag goes to Normaal`, `options: writes RESOLUTION 3`. Key capture, Standaard and duplicate keys are in no listed check. No comparison with the original.

## Menu sound

**Original behaviour**

One looping `menumsc.wav` (44.1 kHz stereo, 32.03 s, 5,650,336 data bytes), started after the intro, stopped only at exit. New process per race, so it restarts after each race. One voice at a time; a new one or any screen's `FormShow` cuts it. FX overlap. Volume `clamp(-trunc(10^(2 + (100-v)/100*log10(40))), -4000, -100)` in 1/100 dB; v=0 is -40 dB, not silent. The `*On` flags have no effect in the menu. `MessageBeep(0)` on a key outside the list plays the Windows default sound. All 91 sounds and triggers: `menu-forms.md` S.10, `audio.md` S.16. `css07_*` and `cfr07_00` have no code reference.

**Evidence**

`M:0x4820d0`, `M:0x482830`, `M:0x480fcc`, `M:0x480448`, `M:0x4807cc`, `M:0x482a0c`, `M:0x49e660`, `M:0x40be6c`, `M:0x402ad4`.

**Status**

- Confirmed: code. Truncation in the volume laws and in `M:0x482a0c`, from the disassembly (see the corrections).
- Inferred: `att_mB` reading of the constants in `M:0x480fcc`.
- Unresolved: audible balance between music and voices; the menu was never heard past the intro.

**Where the port implements it**

`source/menu/sound.js` `MenuSound`; `applySoundSettings`, `directSoundVolume` in `data.js`. Every menu sound connects through `MenuSound.output`, the port's master Volume (`App.getMasterOutput`). The beep is an 880 Hz tone of 0.12 s at FX volume, `messageBeep` in `group-options.js`. `startMusic` uses a token, and `start` asks after the load whether the sound is still wanted, because here a stop can overtake the load of a 5.6 MB WAV: leaving the menu during the first load no longer starts the music under the race or intro, nor twice.

**How it was compared**

Fix checks, one-off, by state: with `menumsc.wav` held back by a route, start then stop gives 0 looping starts, and start, stop, start gives exactly 1 copy that stops when told; fx, voice and music all reach the master output. check-flow reads no sound state. Not by ear. No comparison with the original.

## Browser audio and video restrictions

**Original behaviour**

None apply: the original starts sound at once. This section records a platform adaptation, not original behaviour.

**Evidence**

Brief S.2: smallest necessary user interaction. Code: `playVideo` in `source/menu/framework.js`.

**Status**

- Not an original behaviour.

**Where the port implements it**

- `v.playsInline = true` on every menu video; `.menu-video` positioned by `placeVideo`.
- Intro starts with sound. If `play()` is refused with `NotAllowedError`: muted, a note `Klik of druk op een toets voor geluid`, and the first action unmutes instead of skipping (`TfrmIntro.userAction`). Other rejections, such as a pause from a hidden tab, are ignored.
- `AudioContext` is created on first use and resumed on `pointerdown`, `pointerup`, `touchend`, `click`, `keydown` (`App.start`), unless the race holds the sound. The same gesture enters full screen with the setting on.
- Winner movies have no audio track, frames go through the canvas.

**How it was compared**

check-flow and check-race-ui launch Chromium with `--autoplay-policy=no-user-gesture-required`, so the refused path did not run. check-phone-flow does not set that flag, but taps past the intro either way and records nothing about sound. No iOS, no other browser engine.

## Menu layout on phone, tablet and desktop

**Original behaviour**

One layout: 800x600 centred on black, in an 800x600 display mode (`M:0x481634`). Portrait does not exist.

**Evidence**

`menu-forms.md` S.2; `M:0x49e394`.

**Status**

- Confirmed for the original. The rest is platform adaptation from the brief, S.7.

**Where the port implements it**

`MenuRuntime.relayout` in `source/menu/framework.js`:

- Landscape: the whole form, uniform scale, centred, letterboxed.
- Portrait, when height > 1.1 x width: each screen's `portraitZones()` stacks its art regions at one scale. Dialogs scale by `dialogRect`. The race's rule is 1.15; a window between the two has a portrait menu and a landscape race.
- Safe areas: `safeRect()` from `source/ui/safe-area.js` keeps zones, form and dialogs out of the notch and home bar; the canvas itself still fills the screen (`viewport-fit=cover`). `HelpWindow`, `TfrmException2` and the intro's sound note use `max(..., env(safe-area-inset-*))`.
- `App.layout` on `resize` and `orientationchange`. `EditBox` and video follow through `toScreenRect`.
- Slider gets a larger touch target (`touchMargin`); balloon x likewise; plain controls by 6 form pixels.

**How it was compared**

form check: landscape at 1280x720 and portrait at 390x844 for screens, screenshots in `evidence/forms/`. Fix check, one-off: help window and intro note unchanged at both sizes, and one look at 844x390 on Geavanceerd. Not checked: 800x360, tablet sizes, orientation change in the menu, any real safe-area inset. No real device.

## Gamepad menu navigation and input transitions

**Original behaviour**

None: `menu.exe` has no `DINPUT` import and no `joyGet*`; keyboard and mouse only (`input.md` C13). Port addition. A new process per race means no key or button crosses from the race into the menu (`input.md` C12).

**Evidence**

`input.md` C12, C13, H4; `imports.csv`.

**Status**

- Confirmed: the original has none.

**Where the port implements it**

`GamepadInput.pollMenu` in `source/input/gamepad.js`, polled from `App.start`'s loop in menu mode: D-pad or left stick to arrow keys, A to Enter, B to Esc, RB to Tab. `MenuRuntime.lastInputPad` remembers that the last input came from a pad, for the default name and the radios. `App.showMenu` calls `GamepadInput.resync`, so a button held since the race counts only after its release, and that release is no event either.

Menu mouse and touch: `MenuRuntime.bind`. Touch hover off. A press belongs to one pointer and to the form it began on: a second finger counts for nothing until the first has ended, and a form that closes drops its press. `pointercancel` and `lostpointercapture` go through `Form.pointerCancel`, which clears armed and pressed with no click, and a slider's repeat timer with them. Key repeats: see what the race writes back.

**How it was compared**

check-race-ui `menu: a pad button held from the race counts only after its release`, `finish: pad A held does not skip it, a new press does`, with a stand-in for `navigator.getGamepads`. Fix checks, one-off, with a stand-in pad: A from the intro onward, `Speler 1` then `Speler 2` on an empty name; Tab and arrows through Geavanceerd. CDP touch cancel and synthetic pointers: cancel on a button gives no click, second finger ignored, slider's repeat timer cleared. CDP's `touchEnd` ends all touches at once, so "first finger up clicks its own button" stood on the synthetic pointers only. Repeats on `TfrmHighScoreDlg` and `TfrmCloseDlg` with synthetic keydowns. No real pad or phone.

## Sound when the tab is hidden

**Original behaviour**

The menu's DirectSound buffers have `DSBCAPS_GLOBALFOCUS` (`dwFlags=0x80E0`, `M:0x46bd3c`), so menu sound keeps playing when the window loses focus. The race's buffers do not have it, and its message pump blocks while inactive.

**Evidence**

`audio.md` S.16 for the flags and its Inferred part for what they do; `startup-flow.md` S.5.

**Status**

- Confirmed: the flags. Inferred: the audible result, from DirectSound's documented behaviour; not observed.

**Where the port implements it**

`App.start` in `source/app.js`: `visibilitychange` suspends the `AudioContext` in menu mode and resumes it on return, and pauses a playing intro, whose sound is outside that context. Race: `RaceRunner.setFocus`. `GameData.watchPageClose` saves on hide. This differs from the original's GLOBALFOCUS on purpose, following the brief S.6.

**How it was compared**

check-race-ui `focus: clock stops, sound suspends, input clears`, `focus: resumes without a jump`, `hidden tab: clock stops and resumes` during a race; `intro: pauses in a hidden tab, goes on when shown` on the intro, with `document.hidden` stubbed. The menu's `AudioContext` case is in no listed check. No comparison with the original.
