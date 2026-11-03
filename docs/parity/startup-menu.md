# Startup and menu: feature parity

The launcher flow, the INI hand-over, the 45 forms of `menu.exe`, navigation, Tour and Quick Race rules, money, unlocks, records, saves, help, options, menu sound and art, with implementation and verification kept apart. It is the startup and menu part of [../feature-parity.md](../feature-parity.md). What the original does and the evidence are in [../behavior/startup-menu.md](../behavior/startup-menu.md).

## How to read the columns

Implemented is one of yes (recompiled), yes (host), yes (menu port), partial, no, n/a. Addresses: `L:` `A2Racer4.exe`, `M:` `menu.exe`, `S:` `spel.dat`. Notes name the source file that carries the row. Research notes in `docs/research/` are cited by file name and section. Original evidence means the installation with Davilex's two official updates, `original-game-decompiled/original/updates/`; a row says where something comes from an update. `menu.exe` past the intro was never seen running, so no row here was compared with the original on screen.

Verified names the check that really covers the row, and a check covers only what it says:

| Value | Meaning |
|---|---|
| checked on Amsterdam: check-flow | `tools/check-flow.mjs`, real clicks at 1280x720 in headless Chromium 145: intro, Enter skips it, new player, main screen, Quick Race, Normaal, Amsterdam, `TfrmStartInfoKeyBoard`, a race driven by the bot at speed 8 to the end (the game wrote `FINISHED=1`, `TRACKTIME 603433`), `TfrmResults`, back to `TfrmQuickRace`, save file present, zero console errors or warnings. It reads no sound state and does not read the INI values back |
| checked on Amsterdam: check-race-ui | `tools/check-race-ui.mjs`, 76 of 76 pass, each by name in `evidence/race-ui/summary.json`. Its races start through `?race=1`, so the menu's writers and `flow.afterRace` do not run |
| checked on Amsterdam: check-phone-flow | `tools/check-phone-flow.mjs`, taps on an emulated touch profile, 844x390 then 390x844, 7 of 7, printed by name, `evidence/flow-phone/`: intro, new player, the menus, Quick Race on Amsterdam, a race on the wheel, `Stop` and `Ja` with `finished=0`, `Terug` to the main screen, the Tour's screens up to `TfrmGarage` without a race, zero console errors. Not a real phone |
| checked on Amsterdam: run-bot | `tools/run-bot.mjs`, a whole race headless. It prints `FINISHED`, `Out_Of_Time`, `Total_Loss`, `MONEY`, `TRACKTIME`, `LAP_1_TIME`, `LAP_2_TIME`, `DAMAGE` and `[RACERS]` from `game.ini`. No menu |
| checked on Amsterdam: check-software | `tools/check-software.mjs`, real clicks at 1280x720 in headless Chromium 145, 17 of 17, each by name in `evidence/software/flow/summary.json`, screenshots beside it: `3D kaart` off and on in `TfrmOptions`, `TfrmDisplaySettings` without it, a whole race by the bot at `RESOLUTION` 1 back to `TfrmQuickRace`, the game writing `FINISHED=1`, `TRACKTIME` 603433, a race at `RESOLUTION` 0 left with Esc and J, back on with the 3D card in the same page, zero console errors or warnings. It shows what the port does. The rules it follows come from reading `menu.exe` |
| boot only: boot-all | `tools/build-race-lists.mjs` booted all 10 etappes with all 8 cars for 2 s in Node with no renderer, on the final recompiled build, with its own `game.ini` values. Not a gameplay check |
| form check | Per-form browser checks by the people who wrote the forms: screenshots in `evidence/forms/`, landscape and 390x844 portrait; navigation through all Tour and Quick Race result branches with a faked `game.ini`; Garage buying; options persistence; help links, error dialog, tabs of Geavanceerd |
| fix check: what | A one-off script run when that part was fixed. Not kept in `tools/` and not rerun. It covers only the text given |
| not verified | No check above covers it. Where the Notes say "by reading", only the source was read |

Sound was checked by state only, never by ear. No real phone, tablet or gamepad and no other browser engine was used. Levels other than Amsterdam have boot-all at most, and track 9 with car 7 one launch check on top.

`fix check: launch through the menu, 6 s of gas, 0 console errors` is that launch check, one one-off script on the final build when the updates came in, in headless Chromium: the real menu, Quick Race position 9 and character position 7, `game.ini` ended up with etappe 9, british 1, car 7, a race ran on the keyboard device, 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. By eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else: no lap, no race end, no sound, no comparison with the original. The original has not been run with the updates. Track 9 and the truck are not verified beyond this.

## Programs and process flow

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `A2Racer4.exe` launcher: alternates menu and race | L:0x401250; startup-flow.md S.1 | yes (host) | checked on Amsterdam: check-flow | `source/app.js` `startRace`; `data.js` `leaveMenu`. One page, no processes. `docs/intentional-differences.md`, Platform |
| `ExitCode` 40: run the race, then `menu.exe /Default` | M:0x48f168, L:0x4010c0 | yes (host) | checked on Amsterdam: check-flow | `raceMode` decides directly; `EXITCODE` is still written to `menu.ini`, nothing reads it |
| `ExitCode` 255: close and end | L:0x401250 | partial | fix check: Afsluiten on the error dialog ran the same `exitGame` and the first screen returned (one-off script) | `App.exitGame` runs `startUp` with `firstTime` again: the intro returns, because a page cannot close itself. Intentional. Einde itself is in no check |
| `ExitCode` 0 or missing: message box | L:0x401250; startup-flow.md S.1 | n/a | not verified | No code writes it |
| Spawn failure message boxes, errno 2, 7, 8, 12, 22 | L:0x405168; startup-flow.md S.1 | n/a | not verified | No spawn in a browser |
| Launcher window black, cursor hidden over it | L:0x401440 | partial | not verified | Page and canvases are black (`style.css`). The launcher's `SetCursor(NULL)` has no counterpart: the pointer shows over the menu and the loading screen. Over the race it is hidden: see Platform |
| `A2Racer4.icd` byte-identical copy | SHA-256; modules.md | n/a | not verified | No module names it |
| `menu.exe` | modules.md; menu-forms.md | yes (menu port) | checked on Amsterdam: check-flow | `source/menu/`. Hand rewrite |
| `spel.dat` fresh process per race | startup-flow.md S.5, Inferred consequences | yes (recompiled) | checked on Amsterdam: check-flow | `race-runner.js` `load`: new `Race`, new wasm instance. `tools/recomp/` |
| `rsc.dll` archive I/O for the menu | modules.md | partial | form check | Replaced: `MenuRcs` members are extracted to PNG and WAV by `tools/prepare-assets.py` |
| `bonus.dso` script | modules.md; S:0x475b50 | yes (recompiled) | checked on Amsterdam: check-flow | Loaded by the recompiled race from the VFS |
| `setdebug.exe` | modules.md: started by no module | n/a | not verified | Not reachable from the game |
| `SERVICE.EXE` from the exception dialog | M:0x4a7a48 | no | not verified | Goes with the Davi-Service option of `TfrmException2`, left out on purpose: no such program here |
| Fatal error in the race: `ExitProcess(1)`, menu returns with `/Default` | S:0x4c4150; startup-flow.md S.5 and consequences | yes (host) | checked on Amsterdam: check-race-ui | `race-runner.js` `run` catches what `load` throws, writes `finished=0`, cleans up, and `App.startRace` goes on to `afterRace`. `frame` catches errors during ticks. Named check `load failure: back in the menu with a message, finished=0`, with the `spel.wasm` fetch aborted and `FINISHED=1` preset. From the `?form=` route, so it came back on `TfrmIntro`, not on a `/Default` screen. A fatal error from game code was not exercised |
| Message box of a fatal error | S:0x4c4150 | partial | not verified | `onMessageBox` in `race-runner.js`: console and status line, no dialog. Intentional. The load-failure check aborts a fetch, which takes the catch in `run`, so no check ran this path |
| Race window title `A2 Racer IV` | raser.ini [PROGRAM] NAME; S:0x447db0 | no | not verified | Page title is `A2 Racer 4` (`index.html`) |

## Command lines and start order

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `menu.exe /FirstTime`: intro path, skips `game.ini` | M:0x4a9170, M:0x48ef4b; observed under Wine | yes (menu port) | checked on Amsterdam: check-flow | `app.js` `route`, `flow.js` `startUp`, `data.js` `beginMenuRun` |
| `menu.exe /Default` after each race | M:0x4a91dc; startup-flow.md S.8 | yes (menu port) | checked on Amsterdam: check-flow | `flow.js` `afterRace` |
| No argument: `Start het spel met 'A2Racer4.exe'.` | M:0x4a9170; MENUSTRINGS 21 | n/a | not verified | No command line in a browser; string stays in `menu.ini` |
| `spel.dat` ignores its command line | S:0x458270 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| Working directory and exe-dir paths | startup-flow.md S.8 | yes (host) | checked on Amsterdam: check-flow | `host/vfs.js` `normalizePath` |
| `menu.ini`, `MenuCaps.ini` read at unit init | M:0x487270, M:0x486f48; observed under Wine | yes (menu port) | checked on Amsterdam: check-flow | `data.js` `readMenuIni`, `base-forms.js` `applyCaptions` |
| Display mode 800x600, trying 24, 16, 15, 32 bpp; restored at exit | M:0x481634, M:0x481500, M:0x481588 | partial | form check | `framework.js` `relayout` scales the 800x600 form, no mode change. Intentional |
| Hide `Progman` and `Shell_TrayWnd` | M:0x4a4d20, M:0x4a4e2c | n/a | not verified | Windows shell |
| Full screen | M:0x4a4d20 | partial | checked on Amsterdam: check-race-ui | `app.js` `applyFullscreen`, `fullscreenChanged`; `settings.js` default on. Browsers allow it only from a gesture, so the first gesture enters it. The player leaving it turns the setting off until ticked again, and in a race opens the quit prompt. An iPhone has no such call: row greyed in Geavanceerd, hidden in the race panel. Intentional. Named checks `full screen: ...`, all in a race, in headless Chromium where Esc reaches the page. Not run: real Esc in a browser that keeps it, the Safari prefix, the keyboard lock's effect |
| `debug.ini`, `MenuTrac.log`, `menu.log` | M:0x47f6e8, M:0x45f660 | no | not verified | Browser console instead |
| Clear read-only on the three INIs | M:0x481104 | n/a | not verified | No such attribute in the VFS |
| `illegal value of Previous` | M:0x4a5d70 | yes (menu port) | not verified | `flow.js` `startUp`: console |
| GetPlayer, AskForNewPlayer loop; Annuleren terminates | M:0x4a525c, M:0x4a53d8 | yes (menu port) | checked on Amsterdam: check-flow | `flow.js`. check-flow covers the name path only; Annuleren is in no check |
| Name typed before Annuleren still creates a player | M:0x4a53d8 | yes (menu port) | not verified | `flow.js` `askForNewPlayer` |
| `load player error` falls back to the name dialog | M:0x4a525c; startup-flow.md S.2 | yes (menu port) | not verified | `flow.js` `getPlayer` |

## CD check

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Menu: search `c:` to `z:` for `DATA\INTRO1.MPG` | M:0x4a5d4c, M:0x4a5c24; observed under Wine | no | checked on Amsterdam: check-flow | Removed on purpose: `docs/intentional-differences.md`, Platform. check-flow reaches the race without a prompt |
| `TfrmCDRequest` | M:0x497108 | yes (menu port) | form check | Class exists, `group-dialogs.js`, never shown |
| Race: `S:0x4cd3b0("\DATA", "rcs.img")`, fatal without a disc | S:0x447be0, S:0x4cd478 | yes (recompiled) | checked on Amsterdam: check-flow | Byte patch at `0x004CD478` in `tools/recomp/replacements.py`, the owner's no-CD change |
| `NOCD` environment variable | S:0x55a328 | n/a | not verified | Not needed with the patch; not mentioned in the owner's notes. The reference runs set it on the original |
| `[CDCHECK]`: "[Not checking cdrom]" | S:0x447a80, game.ini | yes (recompiled) | checked on Amsterdam: check-flow | Runs as shipped |
| Disc copy of the intro as fallback | M:0x4a50d0 | n/a | not verified | One media folder |

## Intro and media

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `intro1.mpg`, MPEG-1 320x240, 61.68 s, MP2 | ffprobe; startup-flow.md S.2 | yes (menu port) | checked on Amsterdam: check-flow | `public/assets/media/intro1.mp4`, H.264 and AAC, 61.68 s, `prepare-assets.py` `prepare_media`. Re-encoded on purpose. H.264 only; other engines not tried: one without H.264 would end the intro at once through `onerror` |
| Form 792x573, centred, on black, video stretched to it | TFRMINTRO.dfm, M:0x4a4928 | yes (menu port) | form check | `group-main.js` `TfrmIntro`, `framework.js` `playVideo`. The stretch itself is Inferred in the research |
| No transition, form closes | M:0x4a4928-0x4a4b2c | yes (menu port) | checked on Amsterdam: check-flow |  |
| Skip: any key except Space | M:0x4a4a78 | yes (menu port) | checked on Amsterdam: check-flow | `TfrmIntro.userAction`. check-flow pressed Enter; Space not tried |
| Skip: any mouse button | M:0x4a4ad8 | yes (menu port) | not verified | Window `pointerdown` listener, by reading |
| Open or play error closes the form; missing file gives no intro and no error | M:0x4a49c6, M:0x4a50d0 | yes (menu port) | not verified | `playVideo` `onerror`. Other rejections of `play()`, such as a pause from a hidden tab, are ignored |
| Music starts only after the intro | M:0x4a5d70 | yes (menu port) | not verified | `flow.js` `startUp`, by reading. check-flow reads no sound state |
| `ch00.avi` .. `ch04.avi`, Cinepak 370x370, about 3.3 s, no audio, looped | M:0x4a3f44, M:0x4a4214; ffprobe | yes (menu port) | form check | `public/assets/media/ch0N.mp4`, `TfrmWinFinal`, drawn on the canvas at 25 fps |
| Movie in `pnlMovie` (415,86)-(785,456) | menucaps.ini [TfrmWinFinal] | yes (menu port) | form check |  |
| Music under the final movie | audio.md S.16 | yes (menu port) | not verified | Nothing stops it, by reading |
| Port: movies follow the Volume setting | Brief S.8 | yes (menu port) | fix check: the intro's `volume` read 0.25 with the setting at 25 (one-off script) | `framework.js` `playVideo`, because the movies do not pass the master gain. iOS ignores `video.volume`: there the device's volume applies. Not tried |

## INI hand-over: keys the menu writes before a race

Reader: `spel.dat`, runs as shipped in the recompiled code. Writer: `source/menu/data.js`. "check-flow" means the value went through a real race start on Amsterdam, not that it was read back or that its effect was measured. Where the key is mode-dependent, only the Quick Race value ran.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `game.ini [INPUT] DEVICE` | M:0x4a6a38; S:0x46ee10 | yes (menu port) | checked on Amsterdam: check-flow | `writeControlStuff`; `RaceRunner.chooseDevice` overrides for touch and pad by `useTouch`. Intentional, Input. Named checks without the menu: `keyboard: device 1`, `touch: device 2 at race start, wheel shown`, `gamepad: connected at start selects device 2` |
| `[INPUT] LEFT RIGHT UP DOWN` | M:0x48b350; S:0x46d360 | yes (menu port) | checked on Amsterdam: check-flow | The bot drove on the values the menu wrote, through the arrow keys. check-race-ui drove with the shipped keys, without the menu |
| `[INPUT] EXTRA1 EXTRA2 EXTRA3` | M:0x48b350 | yes (menu port) | not verified | Turbo, Handrem, Claxon. Written at check-flow's race start; no check read them back from the menu's values. `chooseDevice` passes them to the keyboard of a joystick session |
| `[INPUT] SENSITIVITY` | M:0x4a6a70; S:0x46ee10 | yes (menu port) | not verified | Read only for joystick and wheel paths |
| `[ETAPPE] ETAPPE` | M:0x48bcf0; S:0x447db0 | yes (menu port) | checked on Amsterdam: check-flow | `writeGeneralStuff`. Value 9 went through the menu in the launch check. Other values: boot-all set this key itself, not through the menu |
| `[ETAPPE] BRITISH` | M:0x48bcf0; S:0x449550 | yes (menu port) | checked on Amsterdam: check-flow | 0 on tracks 0..8. 1 on track 9, the only track with it, reachable since the track update. The launch check ended with british 1 in `game.ini` |
| `[OPTIONS] NRLAPS` | M:0x48bcf0; S:0x449e20 | yes (menu port) | checked on Amsterdam: check-flow |  |
| `[OPTIONS] OPPONENTS` | M:0x461c84; S:0x449230 | yes (menu port) | checked on Amsterdam: check-flow | Value 1. Chase value 0 not run from the menu |
| `[LEAGUE] LEAGUE` | M:0x48bcf0; S:0x4494d0 | yes (menu port) | checked on Amsterdam: check-flow | Value 1 only |
| `[PLAYER] DAMAGE` = 0 | M:0x48bcf0; no reader | yes (menu port) | checked on Amsterdam: check-flow | Read by nobody |
| `[PLAYER] CHECKPOINT_SPEED` | M:0x48e6ec; S:0x44bf10 | yes (menu port) | not verified | Only on a chase; stays stale afterwards as in the original |
| `[GFX OPTIONS] gamma` | M:0x48bcf0; S:0x449b30 | yes (menu port) | checked on Amsterdam: check-flow | Value 0. The radios give 0 or 1 |
| `[GFX OPTIONS] alpha_blending` | M:0x48bcf0; S:0x449b30 | yes (menu port) | checked on Amsterdam: check-flow |  |
| `[GFX OPTIONS] CUSTOM_TEXTURE_MEMORY` | M:0x4a7160; S:0x44c200 | yes (menu port) | checked on Amsterdam: check-flow | Value 0x800000 only |
| `[OPTIONS] waitvbl` | M:0x48bcf0; S:0x44a010 | yes (menu port) | checked on Amsterdam: check-flow | Stays at the save's value; greyed in the menu |
| `[OPTIONS] filter` | M:0x4a7150; S:0x44a050 | yes (menu port) | checked on Amsterdam: check-flow | Value 2 from the menu. The world follows it, the HUD stays bilinear, the finish flag stays hard-edged: render rows |
| `[PLAYER] MONEY` Quick Race 0, Tour balance | M:0x48b5bc, M:0x48b7c8; S:0x4502e0 | yes (menu port) | checked on Amsterdam: check-flow | Tour value not run from the menu |
| `[PLAYER] CAR` | M:0x48b5bc, M:0x48b7c8; S:0x44aa20 | yes (menu port) | checked on Amsterdam: check-flow | Car 1 from the menu, car 7 in the launch check; all 8 by boot-all, written by that tool |
| `[PLAYER] TURBO_AMOUNT` Quick Race 100, Tour amount | M:0x48b5bc, M:0x48b7c8 | yes (menu port) | checked on Amsterdam: check-flow | Tour value not run |
| `[PLAYER] MOTOR BANDEN ABS VERSNELLINGSBAK` | M:0x48b5bc, M:0x48b7c8; S:0x44a110 | yes (menu port) | checked on Amsterdam: check-flow | All 1 in Quick Race; Tour flags not run from the menu |
| `[PLAYER] POSITION` = 4 | M:0x48b5bc, M:0x48b7c8; no read site | yes (menu port) | checked on Amsterdam: check-flow | Read by nobody |
| `raser.ini [PROGRAM] RESOLUTION` | M:0x48ba20; S:0x447870 | yes (menu port) | checked on Amsterdam: check-flow, check-software | Value 3 in check-flow. check-software reads back 1, 0 and 3 after OK in `TfrmOptions`. Hoog is greyed, so 4 comes only from an older save; in no check |
| `raser.ini [SOUND] MUSICVOLUME SFXVOLUME POLICEVOLUME` | M:0x480f04; S:0x447db0 | yes (menu port) | checked on Amsterdam: check-flow | `raserVolume`, truncating as `M:0x402ad4`. The value passed; levels in the audio rows |
| `raser.ini [directx] index` | M:0x48ba20; S:0x447830 | yes (menu port) | checked on Amsterdam: check-flow |  |
| `raser.ini [directx] guid` | M:0x48128c | no | not verified | The greyed driver choice never sets it, so it is never written |
| `raser.ini [program] focus` | M:0x48ba20; S:0x4477b0 | yes (menu port) | checked on Amsterdam: check-flow |  |
| `menu.ini [GENERAL] CURRENTPLAYER PREVSTATE EXITCODE` | M:0x48f168 | yes (menu port) | checked on Amsterdam: check-flow | `saveMenuIni`. Also written by `saveProgress`, port only |
| `menu.ini [HIGHSCORES]` | M:0x48f168 | yes (menu port) | checked on Amsterdam: check-flow |  |
| Keys `spel.dat` reads that the menu never writes | startup-flow.md S.3 table | yes (recompiled) | checked on Amsterdam: check-flow | Shipped `game.ini` and `raser.ini` copied by `prepare-assets.py` `prepare_race`, the updates' files winning, comments kept. `game.ini` is the car update's copy, from the developers' machine. It adds one key, `[GFX OPTIONS] OVERLAYELEMENTS = 15`, read at S:0x449b30 into `0x5ab3c0`: a mask that only a debug view honours (`hud-overlay.md`). Not exercised in any check |
| Win32 INI semantics: case-insensitive, first match wins, parse stops at a non-digit, replace in place, comments kept | startup-flow.md consequences | yes (host) | checked on Amsterdam: check-flow | `host/vfs.js` `IniFile`, `host/win32.js` |

## INI hand-over: what the race writes back

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `[PLAYER] finished=0` at init | S:0x4491f0 | yes (recompiled) | checked on Amsterdam: check-flow | Also check-race-ui `quit dialog: J ends the race, finished=0` |
| `raser.ini [MUSIC] LAST` steps at init | S:0x44ad40 | yes (recompiled) | fix check: headless runs on etappe 0 from `LAST` -5 to 99 loaded the predicted track; three races in a row stepped FUNKY1, MOBIE2, REVENGE1 (one-off script) | `idx = LAST+1`, 0 if below 0 or at or above `COUNT`. No modulo |
| `[PLAYER] finished` | S:0x44b1c0; M:0x48a300 | yes (recompiled) | checked on Amsterdam: check-flow | The game itself wrote FINISHED=1 |
| `lap_%d_time`, `lapcount` | S:0x44b1c0; M:0x48a300 | yes (recompiled) | checked on Amsterdam: check-flow | check-flow prints `LAP_1_TIME` to `LAP_3_TIME`. Menu reads `LAP_1_TIME`..`LAP_5_TIME` if present. `lapcount` has no menu reader and no check prints it |
| `out_of_time` | S:0x44b1c0; M:0x48a300 | yes (recompiled) | checked on Amsterdam: check-flow | check-flow's 593 s race wrote `FINISHED=1` together with `Out_Of_Time=1`, which is normal on a mode 0 track: timer 11 ran out and ends a race only in mode 1, `S:0x44c8c0`. The menu tests `FINISHED` first, so `TfrmResults` showed. Other values: faked `game.ini` in the form check |
| `total_loss` | S:0x44b1c0; M:0x48a300 | yes (recompiled) | form check | Faked `game.ini`. No listed check shows a real game over writing it |
| `money` | S:0x44afe0; M:0x48a300 | yes (recompiled) | checked on Amsterdam: run-bot | run-bot and check-flow print `MONEY`. The menu reads it for the Tour; with a faked file only |
| `turbo_amount` | S:0x44afe0; M:0x48a300 | yes (recompiled) | not verified | Written by the same function; no check prints it. The menu reads it for the Tour; with a faked file only |
| `damage` | S:0x43ad40; no menu reader | yes (recompiled) | checked on Amsterdam: run-bot | run-bot and check-flow print `DAMAGE` |
| `radarbonus`, `checkpoint_money`, `position` | S:0x43ad40; no menu reader | yes (recompiled) | not verified | Written at exit if finished; no check prints them |
| `tracktime` | S:0x44afe0; M:0x48a300 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `DAMAGE_MESH`, `DAMAGE_VALUE`, `[RACERS] DAM<i> VAL<i>` | S:0x44ceb0; game-progression.md S.12 | yes (recompiled) | not verified | Written by the race, re-read next race. No check prints them or follows them across races |
| `[RACERS] 0..3` | S:0x42e150; M:0x48a300 | yes (recompiled) | checked on Amsterdam: check-flow | The rows of `TfrmResults`. run-bot prints them too |
| `[BEST TIMES]` | S:0x44ae80, S:0x449ea0 | yes (recompiled) | not verified | Persisted in IndexedDB through the VFS. No check prints it. The car update's `game.ini` comes with `RACE_RECORD_E8_L0=316400`, from a race of the developers, without `TIME_CHECK_COUNT_E8_L0` |
| `[GFX OPTIONS] available_texture_memory` | S:0x44b180; M:0x480c9c | yes (recompiled) | fix check: `game.ini` holds 16777216 after a whole race, and Geavanceerd then shows Maximaal and Normaal enabled (one-off script) | `host/directx.js` `createSurface` refuses after 128 surfaces of 256x256 at 2 bytes, and after 256 at 1 byte on the 8-bit path: exactly 0x1000000 on every machine. Read back on the 3D-card path only |
| `FillRankResults`, sort by time, 5 rows, `PlayerPos` | M:0x48003c, M:0x410598 | yes (menu port) | checked on Amsterdam: check-flow | `data.js` `fillRankResults`, `vclQuickSort` |
| `double racers` assertion | M:0x48003c | yes (menu port) | not verified | Console warning instead of an exception; not reachable with cars 0..4 |

## The 45 forms

Numbers as in `menu-forms.md` S.12. Files: `group-main.js`, `group-race.js`, `group-dialogs.js`, `group-options.js` under `source/menu/forms/`. `displaysettings.png`, `doublekeys.png`, `mainscreen.png`, `mainscreen-portrait.png` and `options.png` were taken after the last changes to those forms; the other screenshots are older, and what changed since in their forms does not show in them.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `TData` (1) | M:0x47ed2c, 0x47efb8, 0x47f4ac | yes (menu port) | checked on Amsterdam: check-flow | `data.js` `GameData`. Hamrfat font, unused by any label, is left out |
| `TfrmMain` (2) | M:0x4a4bb4, 0x4a4d20, 0x4a4fe8 | yes (menu port) | checked on Amsterdam: check-flow | `#menu` canvas, `MenuRuntime`; black |
| `TfrmIntro` (3) | M:0x4a46b8 | yes (menu port) | checked on Amsterdam: check-flow | `group-main.js`. Also form check, and check-race-ui `intro: pauses in a hidden tab, goes on when shown` |
| `TCaptionForm` (4) | M:0x4a720c, 0x4a732c | yes (menu port) | form check | Abstract. `base-forms.js` `applyCaptions` |
| `TSingletonForm` (5) | M:0x48f5e0, 0x48f7d0 | yes (menu port) | form check | Abstract. `framework.js` `goTo` |
| `TGameMenuScreen` (6) | M:0x49e19c, 0x49e394, 0x49e660 | yes (menu port) | form check | Abstract. `base-forms.js` |
| `TBaseFormOneWay` (7) | M:0x490738, 0x4908b4 | yes (menu port) | form check | Abstract. `base-forms.js` |
| `TBaseFormTwoWay` (8) | M:0x491248, 0x4913c0 | yes (menu port) | form check | Abstract. `base-forms.js` |
| `TfrmCoolDialog` (9) | M:0x488d68, 0x488ff0 | yes (menu port) | form check | Abstract. `base-forms.js` |
| `TfrmMessageBox` (10) | M:.rsrc only, no class | n/a | not verified | Dead in the original |
| `TBalloonForm` (11) | M:0x4776e8, 0x47d4d0, 0x477d64 | yes (menu port) | form check | `group-dialogs.js`. `balloon.png`, Hoofdmenu text. Hunny stands below it |
| `TfrmException2` (12) | M:0x4a7568, 0x4a7ff0, 0x4a808c | partial | form check | `group-dialogs.js`, an HTML panel opened from window `error` and `unhandledrejection` through `flow.js` `unexpectedError`, one at a time. Text from `[ERRORSTRINGS]`, Afsluiten, Negeren, Details, original icon. Left out on purpose: the Davi-Service line and option. Browser refusals open nothing, errors during a race neither. Not run: Ctrl+C copy |
| `TfrmMainScreen` (13) | M:0x49d4bc: lblTitle, lblTextBlock, optTour, optQuickRace, btnOptions, btnPlayer, btnInternet, btnNext, btnHelp, btnClose, imgItem | yes (menu port) | checked on Amsterdam: check-flow | `imgCar` has no handler in the original. PopupMenu1 debug items unreachable there and absent here. Internet is greyed: see Internet. Also form check, `mainscreen.png` |
| `TfrmDifficulty` (14) | M:0x49cca0: optEasy, optMedium, optHard, imgItem `diffic00..02`, imgItemName `headtour`/`headquic` | yes (menu port) | checked on Amsterdam: check-flow | Background `quickdif` in Quick Race: `difficul` by the form check, `quickdif` in check-flow |
| `TfrmCurrentChar` (15) | M:0x49b288: imgItemName, imgItem, lblTextBlock, lblPoints, 9 `butbigci`, btnChooseChar; voice `aud3` | yes (menu port) | form check |  |
| `TfrmCharacter` (16) | M:0x49a810: story, 4 rows of 9 pips, track pips, btnPrevChar, btnNextChar, `CCS` voice, 2000 ms | yes (menu port) | form check |  |
| `TfrmTrack` (17) | M:0x49999c: slideshow `ttc0T_FF` 2000 ms, `hunny`/`shadow`, lblType, lblQualify, lblTime, lblRecName, pips, `indfocus`, tmrSound 1500 ms | yes (menu port) | form check |  |
| `TfrmGarage` (18) | M:0x498aa4: 5 rows, btnPrevTU, btnBuyTuneUp, btnNextTU, lblPrice, lblPoints, lblStaticInfo | yes (menu port) | form check | `group-race.js` |
| `TfrmQuickRace` (19) | M:0x49ba10: track and character panels, slideshow `qtc0T_FF`, lblLocked, lblCharLocked | yes (menu port) | checked on Amsterdam: check-flow | `imgTrack` @444,120 has no loader in the original. Art by static index: see Characters. Also form check |
| `TfrmResults` (20) | M:0x4a0478, 0x4a0624: five rows, `res_chNN`, `focus`, `win_ch<1st>`; voice `aud2` | yes (menu port) | checked on Amsterdam: check-flow | Quick Race background `QUICKRES` by check-flow. Also form check |
| `TfrmLoseNormal` (21) | M:0x49f320, 0x49f50c | yes (menu port) | form check | `lblPoints` hidden in the DFM; `imgPosition` unused |
| `TfrmQualify` (22) | M:0x49fc84, 0x49fe68 | yes (menu port) | form check |  |
| `TfrmWinNormal` (23) | M:0x4a0058, 0x4a0218, 0x4a0304 | yes (menu port) | form check |  |
| `TfrmWinChase` (24) | M:0x4a0c34, 0x4a0dc8 | yes (menu port) | form check | `COPANGRY` is not in MenuRcs: imgItem stays empty, as in the original |
| `TfrmLoseChase` (25) | M:0x4a0f0c, 0x4a10a8 | yes (menu port) | form check | `cophappy` is not in MenuRcs either |
| `TfrmWinFinal` (26) | M:0x4a3cf8, 0x4a3f44, 0x4a45b4 | yes (menu port) | form check |  |
| `TfrmTrackIntro` (27) | M:0x49f7c4, 0x49fa34 | yes (menu port) | form check |  |
| `TfrmCloseDlg` (28) | M:0x49de64, 0x49e078 | yes (menu port) | form check |  |
| `TfrmCDRequest` (29) | M:0x497108 | yes (menu port) | form check | Look only, never shown |
| `TfrmNewPlayer` (30) | M:0x494ba4, 0x494d44 | yes (menu port) | checked on Amsterdam: check-flow | Real `<input>` over the canvas. From a pad, OK on an empty field gives `Speler N`: see Platform. Also form check |
| `TfrmHighScoreDlg` (31) | M:0x494de0, 0x494f50 | yes (menu port) | form check | Not reached in check-flow: no new record in that run |
| `TfrmDeletePlayer` (32) | M:0x496c14, 0x496e14 | yes (menu port) | form check |  |
| `TfrmNoMoney` (33) | M:0x496f28 | yes (menu port) | form check |  |
| `TfrmInternetDlg` (34) | M:0x497320, 0x4974d4 | yes (menu port) | form check | Class and art remain, nothing opens it: Internet is greyed. `internetdlg.png` shows it through the `?form=` route |
| `TfrmUnlock` (35) | M:0x49b7d4, 0x49b964 | yes (menu port) | form check |  |
| `TfrmDoubleKeys` (36) | M:0x4948a8, 0x494a90 | yes (menu port) | form check | `GDIFormShow` sets `gdfBtnOkSingleDlg`, stem `okas`, as `M:0x494a90`. `doublekeys.png`. The notes of greyed options use this look too (`NoteDialog` in `flow.js`). The rule: see Options |
| `TfrmPlayer` (37) | M:0x4930d0, 0x49354c, 0x493658 | yes (menu port) | form check | Loaded; switch, delete, restore in no listed check |
| `TfrmOptions` (38) | M:0x49504c, 0x495d6c, 0x4960fc | yes (menu port) | form check | Options persistence in the form check, `options.png`. `3D kaart` and Laag open, Hoog greyed: see Options, and `evidence/software/flow/01-options-3d.png`, `02-options-no-3d.png` |
| `TfrmKeySettings` (39) | M:0x4919f4, 0x491e64, 0x491f28 | yes (menu port) | form check | Loaded; capture in no listed check |
| `TfrmSliderSettings` (40) | M:0x492768 | yes (menu port) | form check | Abstract, by its children |
| `TfrmWheelSettings` (41) | M:0x4929c4 | yes (menu port) | form check | Port note under the text: a gamepad works as the wheel |
| `TfrmJoyStickSettings` (42) | M:0x492bb8 | yes (menu port) | form check | Port note likewise |
| `TfrmStartInfo` (43) | M:0x4975f0, 0x4977e0, 0x497818 | yes (menu port) | form check | Touch note under the art when `useTouch`, naming all on-screen controls and saying that in landscape the last three are under `Meer`: intentional, Input |
| `TfrmStartInfoKeyBoard` (44) | M:0x49796c, 0x4980d4 | yes (menu port) | checked on Amsterdam: check-flow | check-flow pressed OK. check-phone-flow tapped it, with the touch note: `evidence/flow-phone/06-start-info.png`. Also form check |
| `TfrmDisplaySettings` (45) | M:0x4875b8, 0x487d30, 0x488050, 0x488b60 | yes (menu port) | form check | `plain-controls.js`, a `PlainDialog` built by `loadPlainDfm` from the DFM: Algemeen and Problemen with all explanation texts, plus the port's tab Browser. `displaysettings.png`. The classic Windows colours and bevels are a reconstruction from the DFM's `clBtnFace`, with no screenshot of the original compared. Without `3D kaart` its 3D-only controls are grey, as `M:0x4884b8`. Rows: see Options |

## Navigation

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| MainScreen, Verder to Difficulty | M:0x49da44 | yes (menu port) | checked on Amsterdam: check-flow | Quick Race radio in check-flow |
| Difficulty to QuickRace | M:0x49d124 | yes (menu port) | checked on Amsterdam: check-flow |  |
| Difficulty to CurrentChar or Character, by TourStarted | M:0x49d124, 0x48b029 | yes (menu port) | checked on Amsterdam: check-phone-flow | `group-main.js`. The CurrentChar path, by tap |
| CurrentChar to Track | M:0x49b4d4 | yes (menu port) | checked on Amsterdam: check-phone-flow | By tap |
| CurrentChar, Ander karakter to Character | M:0x49b4e8 | yes (menu port) | not verified |  |
| Character, Verder: voice, 2000 ms, Track | M:0x49aac4, 0x49b18c | yes (menu port) | not verified |  |
| Track to Garage | M:0x499c7c | yes (menu port) | checked on Amsterdam: check-phone-flow | By tap |
| Garage or QuickRace, Verder: StartInfo if on, then the race | M:0x4991ac, 0x49bf18, 0x49812c | yes (menu port) | checked on Amsterdam: check-flow | QuickRace path. `flow.js` `startInfoThenRace` |
| StartInfo Annuleren stays on the screen | M:0x49812c | yes (menu port) | not verified |  |
| Terug: Difficulty to MainScreen | M:0x49d2a0 | yes (menu port) | checked on Amsterdam: check-phone-flow | By tap |
| Terug: QuickRace to Difficulty | M:0x49bf04 | yes (menu port) | checked on Amsterdam: check-phone-flow | By tap |
| Terug: CurrentChar to Difficulty | M:0x49b61c | yes (menu port) | not verified |  |
| Terug: Character to CurrentChar | M:0x49adec | yes (menu port) | not verified |  |
| Terug: Track to CurrentChar | M:0x499d54 | yes (menu port) | not verified |  |
| Terug: Garage to Track | M:0x499524 | yes (menu port) | not verified |  |
| Quick Race finished, not chase: Results, then QuickRace | M:0x4a58a4, 0x4a0a20 | yes (menu port) | checked on Amsterdam: check-flow |  |
| Quick Race otherwise: QuickRace | M:0x4a58a4 | yes (menu port) | form check | Faked `game.ini` |
| Tour finished, not chase: Results | M:0x4a59cc | yes (menu port) | form check | Faked `game.ini` |
| Results to WinNormal on RR_WINTRACK | M:0x4a0a20 | yes (menu port) | form check | Faked `game.ini` |
| Results to Qualify on RR_QUALIFY | M:0x4a0a20 | yes (menu port) | form check | Faked `game.ini` |
| Results to LoseNormal otherwise | M:0x4a0a20 | yes (menu port) | form check | Faked `game.ini` |
| Tour finished, chase: WinChase | M:0x4a59cc | yes (menu port) | form check | Faked `game.ini` |
| Tour finished, chase, RR_WINRACE: WinFinal | M:0x4a59cc, 0x49eef0 | yes (menu port) | form check | Faked `game.ini` |
| Tour not finished, chase, out of time or total loss: LoseChase | M:0x4a59cc, 0x48a6ac | yes (menu port) | form check | Faked `game.ini` |
| Tour not finished otherwise: Track | M:0x4a59cc | yes (menu port) | form check | Faked `game.ini`. An arrest takes this row |
| WinNormal, Qualify, WinChase to TrackIntro | M:0x4a02f0, 0x49fe54, 0x4a0db4 | yes (menu port) | form check |  |
| TrackIntro, 3500 ms or click, to Track | M:0x49f958, 0x49fb28 | yes (menu port) | form check |  |
| LoseNormal, LoseChase to Track | M:0x49f4f8, 0x4a1094 | yes (menu port) | form check |  |
| WinFinal to QuickRace, or Character if Harry is unlocked | M:0x4a42e8 | yes (menu port) | form check |  |
| Einde on a screen: TfrmCloseDlg; 1 main screen, 2 stay, 3 quit | M:0x49e9bc, 0x49e048 | yes (menu port) | not verified | `flow.js` `closeRequested`. Quit: see Programs |
| Einde on the main screen quits at once | M:0x49dc20 | yes (menu port) | not verified |  |
| MainScreen radios follow `RaceMode` | M:0x49d894 | yes (menu port) | checked on Amsterdam: check-flow | check-flow saw the first-start default, Tour. The Quick Race value is in no check |
| No animated transitions; old form hides, new one shows | M:0x49e81c | yes (menu port) | checked on Amsterdam: check-flow | `framework.js` `goTo`: the old form stays visible until the new one has loaded its art |

## Tracks

From `static.ini`, read by `data.js` `readTrack`. Selecting and listing is the menu; the track itself is the race's. boot-all booted that etappe for 2 s with all cars, in Node, with no renderer, not started from the menu. It is not a gameplay check.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| 0 Amsterdam, Stadsrace | static.ini [TRACK0]: laps 2, qualify 3,2,2; Tour pos 1, Quick Race pos 1 | yes (menu port) | checked on Amsterdam: check-flow | Screen, record and race. Slideshow `qtc00_*`, `ttc00_*` |
| 1 Rotterdam, Stadsachtervolging | static.ini [TRACK1]: laps 2, qualify 9,9,9, chase; Tour pos 2, Quick Race pos 2 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname01`, `qtc01_*`, `ttc01_*` |
| 2 Scheveningen, Kustrace | static.ini [TRACK2]: laps 2, qualify 4,3,2; Tour pos 0, Quick Race pos 0 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname02`, `qtc02_*`, `ttc02_*` |
| 3 Wenen, Stadsachtervolging | static.ini [TRACK3]: laps 2, qualify 9,9,9, chase; Tour pos 5, Quick Race pos 5 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname03`, `qtc03_*`, `ttc03_*` |
| 4 Berlijn, Stadsachtervolging | static.ini [TRACK4]: laps 2, qualify 9,9,9, chase; Tour pos 8, Quick Race pos 8 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname04`, `qtc04_*`, `ttc04_*` |
| 5 Hamburg, Havenrace | static.ini [TRACK5]: laps 2, qualify 1,0,0; Tour pos 6, Quick Race pos 6 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname05`, `qtc05_*`, `ttc05_*` |
| 6 Frankfurt, Vliegveldrace | static.ini [TRACK6]: laps 2, qualify 0,0,0; Tour pos 7, Quick Race pos 7 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname06`, `qtc06_*`, `ttc06_*` |
| 7 BodenSee, Drielandenrace | static.ini [TRACK7]: laps 2, qualify 3,2,1; Tour pos 3, Quick Race pos 3 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname07`, `qtc07_*`, `ttc07_*` |
| 8 Munchen - Wenen, Snelwegrace | static.ini [TRACK8]: laps 1, qualify 2,1,0; Tour pos 4, Quick Race pos 4 | yes (menu port) | boot only: boot-all | Menu entry by reading only; `trname08`, `qtc08_*`, `ttc08_*` |
| 9 Download-race, Country-race | static.ini [TRACK9]: laps 2, qualify 0,0,0, `BRITISH=1`; Tour pos none, Quick Race pos 9; `etappe9.*` since the track update | yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | All seven `etappe9.*` exist, so `trackFilesExist` and `quickTrackAvailable` open it with no change of code, as M:0x461a4c. `trname09` reads "Country etappe"; `qtc09_*`. Disc 1.01 without updates: no files, locked with MENUSTRINGS 2 |

## Characters

From `static.ini`. n is the static index that selects art and voices, IndexInGame selects the car. Stats drive menu pips only.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Edgar de Flits | static.ini [char0]: car 0, speed 4, accel 2, handling 4, brakes 3; Tour pos 0, Quick Race pos 0 | yes (menu port) | boot only: boot-all | Menu entry by reading only |
| Tommie 'El Niño' | static.ini [char1]: car 1, speed 3, accel 5, handling 4, brakes 2; Tour pos 1, Quick Race pos 1 | yes (menu port) | checked on Amsterdam: check-flow | Quick Race default, car 1 |
| James Brons | static.ini [char2]: car 2, speed 5, accel 4, handling 5, brakes 2; Tour pos 4, Quick Race pos 6 | yes (menu port) | boot only: boot-all | Menu entry by reading only |
| Katharina 'Kat' | static.ini [char3]: car 3, speed 4, accel 4, handling 4, brakes 4; Tour pos 2, Quick Race pos 4 | yes (menu port) | boot only: boot-all | Tour default. Menu entry by reading only |
| Barbarally | static.ini [char4]: car 4, speed 3, accel 3, handling 3, brakes 3; Tour pos 3, Quick Race pos 5 | yes (menu port) | boot only: boot-all | Menu entry by reading only |
| D.T. Harry | static.ini [char5]: car 5, speed 5, accel 5, handling 5, brakes 5; Tour pos none, Quick Race pos 2 | yes (menu port) | boot only: boot-all | Quick Race only, locked until the unlock. `TfrmUnlock` by the form check |
| politie-auto | static.ini [char6]: car 6, speed 3, accel 3, handling 3, brakes 3; Tour pos none, Quick Race pos 3 | yes (menu port) | boot only: boot-all | Quick Race only, always free |
| hunny | static.ini [char7]: car 7, speed 0, accel 0, handling 0, brakes 0; Tour pos none, Quick Race pos none | n/a | not verified | In no list |
| downld | static.ini [char8]: car 7, speed 5, accel 5, handling 5, brakes 5; Tour pos none, Quick Race pos 7; art `chara_08`, `qr_ch08` by M:0x49c4d8; unlock `L0_ANIM.INI [DOWNLOADCAR]` since the car update | yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | Open since the car update by the original's rule: `downloadCharAvailable` through `quickCharAvailable`, with no change of code. Disc 1.01 without updates: locked. `TfrmQuickRace.setCurrentChar` loads both by `char.index`; a one-off script saw position 7 show `chara_08` and `qr_CH08`, by screenshot and state at 1280x720 and 390x844, when it was still locked. Name plate `De Schaduw` |
| Car 7, the truck, `RACER_7` | car_cfg.ini row 7 in all three leagues since the car update: `7=RACER_7,DOWNLOADCAR,KENT,hoog4,1500,42,5000,7,dam_truck`; game.ini [Portraits] 7=PLAYER_7; `overlay7.ini` by S:0x487f20 | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | Only through `downld`. No code changed: the race reads the update's data. Disc 1.01 without updates: row 7 is `TOURNAMENT_BONUS`, no `overlay7.ini`, `[Portraits]` stops at 6, so it would be fatal |
| Cars 8 and 9, `RACER_8`, `RACER_9` | car_cfg.ini; game-progression.md S.9 | n/a | not verified | No route to them |
| Character art `chara_00..08`, `ch_00..05`, `qr_ch00..06,08`, `win_ch`, `res_ch`, `los_ch00..04` | menu-forms.md S.8 | yes (menu port) | form check | PNG conversion `prepare-assets.py` `prepare_menu` |
| Story, `winracetext`, `LockedText` | static.ini | yes (menu port) | form check | `data.js` `readCharacter`. First `LOCKEDTEXT` wins on char8 |
| Easter egg `m018` on imgCar double click, name starting with `f` | M:0x49b1b4 | yes (menu port) | not verified | `TfrmCharacter.imgCarClick`; double click by two clicks within 500 ms |

## Tune-ups

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Motor, 2300 Euro | static.ini SPECS0: dSpeed 3, dAccel 1, dBrakes 0, dHandling -1 | yes (menu port) | form check | Garage buying. Text: "Een goed afgestelde motor zal de acceleratie verbeteren en de topsnelheid verhogen." |
| Banden, 1700 Euro | static.ini SPECS1: dSpeed 0, dAccel 0, dBrakes 0, dHandling 4 | yes (menu port) | form check | Garage buying. Text: "Nieuwe banden zorgen voor een uitstekende wegligging." |
| ABS Bremsen, 1500 Euro | static.ini SPECS2: dSpeed 0, dAccel 0, dBrakes 4, dHandling 0 | yes (menu port) | form check | Garage buying. Text: "Een oliebeurt voor de remmen zorgt voor extra remkracht." |
| Getriebe, 2300 Euro | static.ini SPECS3: dSpeed 1, dAccel 3, dBrakes 0, dHandling -1 | yes (menu port) | form check | Garage buying. Text: "Een juist afgestelde versnellingsbak zal de maximumsnelheid aanzienlijk verhogen." |
| Turbo, 250 Euro | static.ini SPECS4: dSpeed 0, dAccel 0, dBrakes 0, dHandling 0 | yes (menu port) | form check | Garage buying. Text: "De turbo kun je bijvullen met turbo-olie. Deze kun je onderweg ook oppakken." |
| Effect of the flags in the race, index into `vdyns.dat` | simulation-core.md VDYNS.DAT; S:0x44a110 | yes (recompiled) | checked on Amsterdam: check-flow | All four on in Quick Race. Single flags from the Tour not run |
| `garage.ini`, `car_cfg.ini` Price | game-progression.md S.3: no binary reads them | n/a | not verified | Legacy data |

## Difficulty

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Makkelijk, value 0 | M:0x49d124; static.ini [CHECKPOINTTIME] Difficulty0=92, [TRACK<n>] QUALIFYPOSITION | yes (menu port) | not verified | `TfrmDifficulty`, `writeGeneralStuff`. Radio loaded in the form check |
| Normaal, value 1 | M:0x49d124; static.ini [CHECKPOINTTIME] Difficulty1=71, [TRACK<n>] QUALIFYPOSITION | yes (menu port) | checked on Amsterdam: check-flow | `TfrmDifficulty`, `writeGeneralStuff`. Default, ran in check-flow; chase value not run |
| Moeilijk, value 2 | M:0x49d124; static.ini [CHECKPOINTTIME] Difficulty2=62, [TRACK<n>] QUALIFYPOSITION | yes (menu port) | not verified | `TfrmDifficulty`, `writeGeneralStuff`. Radio loaded in the form check |
| Default 110 if `[CHECKPOINTTIME]` key is missing | M:0x48e33f | yes (menu port) | not verified | `readStatic` |
| `car_cfg.ini [league0..2]`, `L<d>_anim.ini`, `[BEST TIMES]` by league | S:0x4494d0, S:0x467f60 | yes (recompiled) | boot only: boot-all | boot-all ran the default league only |

## Tour and Quick Race rules

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Race, rank 0: RR_WINTRACK, advance if on reached track, +2500 on every win | M:0x49f010 | yes (menu port) | not verified | `processFirstPosition`. The branch by the form check with a faked file; the sum not |
| Race, rank within limit: RR_QUALIFY, advance if on reached track | M:0x49f100 | yes (menu port) | not verified | `processQualify` |
| Race, below limit: no flag, no advance, money and turbo stay | M:0x4a57f5 | yes (menu port) | not verified | `fillRaceResultsTour` |
| Chase, finished: RR_QUALIFY, advance with no guard | M:0x49eef0 | yes (menu port) | not verified | `checkChaseQualify` |
| RR_WINRACE when `FTrackIx` is the last position | M:0x49ef6e | yes (menu port) | not verified |  |
| Advance: +1 while count > next, ends at 9 | M:0x48dd00 | yes (menu port) | not verified | `CharResult.advance` |
| Character finished: count <= next | M:0x48dcdc | yes (menu port) | not verified | `CharResult.isFinished` |
| Track screen start and maximum | M:0x49a168, M:0x49a464 | yes (menu port) | not verified | `initialTourTrack`, `maxTourTrack` |
| Five characters with separate results, `FTrackIx` shared | M:0x48d31c, M:0x48d180 | yes (menu port) | not verified | `Player` |
| Winning resets nothing, Berlijn can be replayed | M:0x49eef0, M:0x4a59cc | yes (menu port) | not verified |  |
| `TourStarted`: only a just-created player goes straight to Character | M:0x49d124, M:0x48b029 | yes (menu port) | not verified | `Player.tourStarted` |
| Quick Race changes only `HarryUnlocked`, `QRState`, high scores | M:0x4a54dc | yes (menu port) | checked on Amsterdam: check-flow | Quick Race path only |
| Result flags cleared per run | process restart; game-progression.md consequences | yes (menu port) | checked on Amsterdam: check-flow | `beginMenuRun` |
| `CHASETIME` reaches only `IsChase` | M:0x461c7c | yes (menu port) | form check |  |

## Money and Garage

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Per-character Euro, start 0, never negative | M:0x48dca4, M:0x45e3c0 | yes (menu port) | form check | `CharResult.euro` |
| After a finished Tour race: clear flags, money and turbo from `game.ini` | M:0x4a5624 | yes (menu port) | not verified | `fillRaceResultsTour` |
| Not finished: nothing changes, bought tune-ups stay | M:0x4a5624 | yes (menu port) | not verified |  |
| Selection Motor on show, Vorige and Volgende wrap | M:0x4990a0, M:0x4995b0, M:0x4998cc | yes (menu port) | form check |  |
| Buy: flag and money, else `TfrmNoMoney` | M:0x4991f4 | yes (menu port) | form check | Garage buying |
| Turbo: +10 per 250, repeatable, off at 100 | M:0x48dc4c, M:0x499600 | yes (menu port) | form check | Garage buying |
| `PEEP` on purchase | M:0x4991f4 | yes (menu port) | not verified | By reading |
| Stat pips `klrondje`, `blind_up`, `redin_up`, order Speed, Accell, Handling, Brakes, Turbo | M:0x4996a0, M:0x49180c | yes (menu port) | form check | `garage.png` |
| Voice `CGR07`, `CBR07` when `PREVSTATE=2` | M:0x499538 | yes (menu port) | not verified |  |
| Texts, `lblPrice` MENUSTRINGS 13 | M:0x499464 | yes (menu port) | form check |  |
| Coins +100, +500, +1000, flitspaal +100, flitser -50 | gameplay-systems.md S.18 | yes (recompiled) | not verified | Runs as shipped; see the gameplay rows |
| No repair shop; damage 0 at each race start | S:0x44e340; game-progression.md S.4, S.12 | yes (recompiled) | checked on Amsterdam: check-flow | Quick Race run |

## Unlocks

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| D.T. Harry after a Tour win; voice `unlock`, `TfrmUnlock`, select him | M:0x49c6a0 | yes (menu port) | form check | `takeUnlock`. `TfrmUnlock` loaded, earning it not run |
| Chase tracks in Quick Race by any character reaching them, MENUSTRINGS 7 | M:0x48c644, M:0x49c78c | yes (menu port) | not verified | `quickTrackAvailable`, `reachedInTour`. `quickrace.png` shows the open default track; no listed check shows the locked text or ran the rule |
| Track files must exist, MENUSTRINGS 2 | M:0x461a4c | yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors | `trackFilesExist`. The check ran the open side on track 9, whose files exist since the track update. With all ten tracks present MENUSTRINGS 2 does not show; on disc 1.01 without updates it shows on track 9. That text is in no check |
| Download car, `L0_ANIM.INI [DOWNLOADCAR]` | M:0x48ea3d; `l0_anim.ini` since the car update | yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors | The section has `Count > 0` since the car update, so `quickCharAvailable` opens it with no change of code. Disc 1.01 without updates: no section, locked. Art: see Characters |
| `LOCKEDCHARTEXT` loaded, not shown | M:0x48ea92 | yes (menu port) | not verified | Read and kept, unused as in the original |
| Unreachable debug `Money = 300`, `At last track`, `Unlock supercop` | M:0x49dcc4; no PopupMenu link | n/a | not verified | Unreachable in the original |

## Records

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Seed Amsterdam: 2:57:13 Andre | menu.ini [HIGHSCORES] 0=177137 | yes (menu port) | checked on Amsterdam: check-flow | `readMenuIni`, `formatTime` |
| Seed Rotterdam: 3:31:03 Jack | menu.ini [HIGHSCORES] 1=211039 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed Scheveningen: 3:04:06 Hidde | menu.ini [HIGHSCORES] 2=184061 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed Wenen: 4:27:33 Kent | menu.ini [HIGHSCORES] 3=267330 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed Berlijn: 4:30:97 Frits | menu.ini [HIGHSCORES] 4=270971 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed Hamburg: 2:16:52 Cameron | menu.ini [HIGHSCORES] 5=136528 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed Frankfurt: 2:01:21 Jelle | menu.ini [HIGHSCORES] 6=121216 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed BodenSee: 3:30:70 Jeroen | menu.ini [HIGHSCORES] 7=210709 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed Munchen - Wenen: 3:24:50 Marcel | menu.ini [HIGHSCORES] 8=204502 | yes (menu port) | not verified | `readMenuIni`, `formatTime` |
| Seed Download-race: 5:05:05 Byron | menu.ini [HIGHSCORES] 9=305050 | yes (menu port) | fix check: launch through the menu, its screenshot shows 5:05:05 Byron | `readMenuIni`, `formatTime`. Shown on the Quick Race entry of track 9, `evidence/smoke/download-quickrace.png` |
| One best lap per track, global | M:0x49ed60 | yes (menu port) | not verified | `checkIfBestLap` |
| `TfrmHighScoreDlg`, 12 chars, loops until a name, voice `aud2` | M:0x4984f0, M:0x494f50 | yes (menu port) | form check | Loaded. The rule did not fire in check-flow |
| Written at each menu exit | M:0x48f168 | yes (menu port) | checked on Amsterdam: check-flow | Also on `saveProgress` |
| `<no name>`, 0 for missing keys | M:0x48efac | yes (menu port) | not verified |  |
| `[BEST TIMES]` per track and league | S:0x449ea0, S:0x44ae80 | yes (recompiled) | checked on Amsterdam: run-bot | Lap and race record messages belong to the race rows |

## Players and save file

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `SaveGame<N>.RCR`, lowest free single digit | M:0x481178, M:0x47fbd4 | yes (menu port) | checked on Amsterdam: check-flow | Save file present. `data.js` `saveFile`, `lowestFreeSave` |
| New player from `TfrmNewPlayer` | M:0x493754, M:0x47fbd4 | yes (menu port) | checked on Amsterdam: check-flow | First player in check-flow; from the Player dialog not run |
| Defaults: Kat, Tommie, `[DEFAULTSETTINGS]` | M:0x48c24c, M:0x4a6de4 | yes (menu port) | checked on Amsterdam: check-flow | `Player.createNew`. Tommie seen; Kat not |
| Five players, 4 slots plus current | M:0x493ed0 | yes (menu port) | form check | `player.png` |
| Switch: free current, load clicked | M:0x4943b8 | yes (menu port) | not verified |  |
| Delete: only if another exists, confirm, first other takes over | M:0x4944fc, M:0x47fdc8 | yes (menu port) | not verified | Tombstone in IndexedDB |
| Dialog Annuleren restores all files, reloads | M:0x49354c, M:0x493658 | yes (menu port) | not verified | Memory snapshot instead of `.BAK` |
| Name rules: non-empty only, MaxLength 12 | M:0x4937d6 | yes (menu port) | checked on Amsterdam: check-flow | Text is Latin-1 only in the save |
| Player portraits `pch00..05`, `butp1` | M:0x49421c, M:0x4946e8 | yes (menu port) | form check |  |
| Saved at exit, dialog open, new player | M:0x47f54f, M:0x4935d7, M:0x47fd14 | yes (menu port) | checked on Amsterdam: check-flow | Plus `saveProgress` and page hide, port only |
| `Unable to load` on a bad file | M:0x47f977 | yes (menu port) | not verified | `loadPlayer` throws, `getPlayer` asks |
| `TourStarted` not saved, `LoadPlayer` sets it | M:0x48b029 | yes (menu port) | not verified |  |
| Persistence across restart | files in the game dir | yes (menu port) | form check | IndexedDB, `host/persist.js`. Options persistence checked; clearing site data deletes them |
| RCR offset 0, 33 bytes: Name, ShortString, length byte + 32 | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 33, 4 bytes: Tour char index, header copy | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 37, 4 bytes: Difficulty | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 41, 4 bytes: Resolution, overwritten after load from `raser.ini` | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 45, 4 bytes: FX volume | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 49, 4 bytes: Music volume | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 53, 4 bytes: Voices volume | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 57, 1 bytes: FXOn | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 58, 1 bytes: MusicOn | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 59, 1 bytes: VoicesOn | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 60, 1 bytes: StartInfoOn | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 61, 1 bytes: AlphaBlending | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 62, 1 bytes: Bilinear | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 63, 1 bytes: WaitVbl | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 64, 1 bytes: Mipmapping | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 65, 4 bytes: Gamma | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 69, 4 bytes: TextureMem | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 73, 4 bytes: DriverIndex | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 77, 4 bytes: RenderFocus | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 81, 4 bytes: Up | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 85, 4 bytes: Down | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 89, 4 bytes: Left | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 93, 4 bytes: Right | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 97, 4 bytes: Extra1 | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 101, 4 bytes: Extra2 | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 105, 4 bytes: Extra3 | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 109, 4 bytes: ControlType | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 113, 4 bytes: JoySens | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 117, 4 bytes: WheelSens | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 121, 4 bytes: Tour FCharacterIx | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 125, 4 bytes: Tour FTrackIx | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 129, 85 bytes: 5 x FNextUndrivenTrack, FPoints, Turbo, 5 tune-up bools (17 bytes each) | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 214, 4 bytes: QR FCharacterIx | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 218, 4 bytes: QR FTrackIx | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 222, 1 bytes: FShowedUnlockPopup | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |
| RCR offset 223, 4 bytes: FTrackToDrive | M:0x48ad68, M:0x48ae64; game-progression.md S.8 | yes (menu port) | not verified | `Player.fromBytes`, `toBytes`. No sample from the original exists |

## Internet and download

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `btnInternet` enabled if a browser is found | M:0x491024, M:0x490b4c | no | fix check: disabled; a mouse click at 1280x720 and a touch tap at 390x844 both show the note (one-off script) | Greyed on purpose in `TfrmMainScreen.create`, with the note `De website van A2 Racer 4 bestaat niet meer...`. `mainscreen.png`. `game-progression.md` consequences advise this |
| `TfrmInternetDlg`, Ja opens `DOWNLOADURL` | M:0x49da14, M:0x4910f0 | no | not verified | Not reached. On 2026-10-31 the address answered 301 to `nl.visma.com/producten/davilex/`, so it no longer leads to an A2 Racer site |
| Re-read `static.ini` after the visit | M:0x49da44 | no | not verified | Nothing can change that file here; commented in `group-main.js` |
| Download-race, country track | static.ini [TRACK9]; game-progression.md S.10; `a2racer4_update_track.exe` | yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | The track update's files, from the installation, taken by `prepare-assets.py`. Opens by the original's rule, with no change of code. See Tracks |
| Download character | static.ini [char8], L0_anim.ini; `a2racer4_update_car.exe` | yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | The car update's truck, De Schaduw, from the installation. Opens by the original's rule, with no change of code. See Characters |
| Help topic 40 Tracks of karakter downloaden, 13 Internet, 39 Internet? | menu.hlp | yes (menu port) | not verified | Text kept as it was; it still describes the site |

## Help and Hunny

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Balloon `TfrmMainScreen`: Hoofdmenu | agent.ini: Welkom (5), Wat zie ik in het hoofdmenu? (1), Wat is Tour (2), Wat is Quick Race? (3), Wat is Opties? (12), Wat is Speler? (26), Wat is Internet? (13), Algemene onderwerpen (51) | yes (menu port) | form check | `TBalloonForm.layoutBalloon`; `balloon.png` |
| Balloon `TfrmDifficulty`: Moeilijkheid | agent.ini: Wat doe ik in het Moeilijkheidsmenu? (4), Wat is de invloed van de moeilijkheidsgraad? (27), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmQuickRace`: Quick Race menu | agent.ini: Wat is Quick Race? (3), Wat doe ik in het Quick Race-menu? (11), Hoe kies ik een karakter? (37), Hoe kies ik een etappe? (38), Hoe kan ik een extra karakter unlocken? (52), Hoe kan ik een extra track of karakter downloaden? (40), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmCurrentChar`: Huidig karakter | agent.ini: Wat zie ik in het Karakterscherm? (28), Hoe speel ik verder met huidig karakter? (31), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmCharacter`: Karaktersmenu | agent.ini: Wat doe ik in het Karaktersmenu? (32), Wat is Rijgedrag? (33), Hoe kan ik een karakter kiezen? (29), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmTrack`: Etappemenu | agent.ini: Wat zie ik in het Etappemenu? (30), Hoe kies ik een etappe? (43), Waarin verschillen de etappes? (35), Wat is de kwalificatie-eis? (44), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmGarage`: Garagemenu | agent.ini: Wat doe ik in de Garage? (7), Welke Tune-ups zijn er? (25), Hoe kan ik een Tune-up kopen? (36), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmResults`: Resultaten | agent.ini: Wat zie ik in dit scherm? (8), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmOptions`: Opties menu | agent.ini: Wat doe ik in het Opties-menu? (22), Hoe stel ik de weergave in? (41), Hoe stel ik het geluid in? (42), Hoe stel ik het toetsenbord in? (16), Hoe stel ik het stuur in? (17), Hoe stel ik de joystick in? (18), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmPlayer`: Speler | agent.ini: Wat doe ik in het Spelermenu? (19), Hoe maak ik een nieuwe speler? (20), Hoe verwijder ik een speler? (21), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmNewPlayer`: Nieuwe speler | agent.ini: Wat doe ik hier? (48), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmDeletePlayer`: Speler verwijderen | agent.ini: Wat doe ik hier? (49), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmInternetDlg`: Internet | agent.ini: Wat doe ik hier? (39), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmStartInfoKeyboard`: Toetsen instellen | agent.ini: Hoe stel ik het toetsenbord in? (16), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmWheelSettings`: Stuur instellen | agent.ini: Hoe stel ik het stuur in? (17), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmJoysticksettings`: Joystick instellen | agent.ini: Hoe stel ik de joystick in? (18), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmLoseNormal`: Verloren | agent.ini: Wat zie ik in dit scherm? (10), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmQualify`: Kwalificatie | agent.ini: Wat zie ik in dit scherm? (10), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmWinNormal`: Etappe winnaar | agent.ini: Wat zie ik in dit scherm? (10), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmLoseChase`: Gepakt | agent.ini: Wat zie ik in dit scherm? (10), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmWinChase`: Ontsnapt | agent.ini: Wat zie ik in dit scherm? (10), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmWinFinal`: Race gewonnen | agent.ini: Wat zie ik hier? (10), Algemene onderwerpen (51) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Balloon `TfrmKeySettings`: Toetsen instellen | agent.ini: Hoe stel ik mijn toetsen in? (16) | yes (menu port) | not verified | `TBalloonForm.layoutBalloon` |
| Voice `cmh07_00` on Help | M:0x49e678, M:0x4891e0 | yes (menu port) | not verified | `TBalloonForm.showFor` |
| Hunny frames, 57 of 75x150 from `Hunny.acs` | original/disc/Data/MenuData/Hunny.acs | yes (menu port) | form check | `prepare-assets.py` `prepare_agent`, `hunny_agent.png`. `balloon.png` |
| Animation Showing, 50 ms | Hunny.acs | yes (menu port) | not verified |  |
| Animation Hiding, 50 ms | Hunny.acs | yes (menu port) | not verified |  |
| Animation IdlingLevel1, 100 ms | Hunny.acs | yes (menu port) | not verified | When it plays is unknown; a 10 s pause is chosen |
| Animation IdlingLevel2, 40 ms | Hunny.acs | yes (menu port) | not verified | Likewise |
| Animation IdlingLevel3, 100 ms | Hunny.acs | yes (menu port) | not verified | Likewise |
| Balloon outline, tail down, place by Help button | M:0x477d64, M:0x49e678 | yes (menu port) | form check |  |
| Balloon stays until x or until the form closes | M:0x47d9b0, M:0x48937c, M:0x49ecb4 | yes (menu port) | not verified |  |
| Agent absent: WinHelp directly | M:0x49eb00, M:0x4893a0 | n/a | not verified | Agent always present here |
| WinHelp at a context: title and text | M:0x47df44, menu.hlp \|CTXOMAP | partial | form check | `HelpWindow`, `menu-help.json`: a plain scrolling window with the topic's title and text. `prepare_help` parses `Menu.hlp` itself. Its layout, popup-window look and pictures are missing, and tab stops are approximated by one fixed size. Intentional |
| Pictures in help topics | `original-game-decompiled/docs/original-documentation/hlp-pictures`, 43 files | no | not verified | Left out on purpose |
| Links inside topics | menu.hlp \|TOPIC: 10 jumps in 4 topics | yes (menu port) | form check | `prepare_help` keeps the real hotspots, `HelpWindow` shows them as links. Welkom 1, Weergave instellen 2, Instellingen 3, Algemene onderwerpen 4. Spelregels tapped from Algemene onderwerpen on a 390x844 touch profile |
| Index and Terug buttons | menu.hlp \|KWBTREE, \|KWDATA: 64 keywords; no contents file | yes (menu port) | form check | Stand-ins for WinHelp's buttons, inferred from the file. `HelpWindow.indexTopic`, `back` |
| Topic in no balloon: 6 Het Raceteam | agent.ini, menu.hlp | yes (menu port) | fix check: tapped in the Index on a 390x844 touch profile (one-off script) | Jump from Welkom, and the Index |
| Topic in no balloon: 24 Startinfo | agent.ini, menu.hlp | yes (menu port) | fix check: tapped in the Index on a 390x844 touch profile (one-off script) | Index only: no jump in the file |
| Topic in no balloon: 34 Karakter kiezen | agent.ini, menu.hlp | yes (menu port) | not verified | Index only, through keywords `Karakter kiezen` and `Kies je karakter`, read from `menu-help.json`. The one-off script tapped the neighbour `Karakter kiezen (Quick Race)`, context 37 |
| Topic in no balloon: 45 Besturing instellen | agent.ini, menu.hlp | yes (menu port) | fix check: tapped in the Index on a 390x844 touch profile (one-off script) | Jumps from Instellingen and Algemene onderwerpen, and the Index |
| Topic in no balloon: 46 Spelregels | agent.ini, menu.hlp | yes (menu port) | fix check: tapped in the Index on a 390x844 touch profile (one-off script) | Jump from Algemene onderwerpen, and the Index |
| Topic in no balloon: 47 Instellingen | agent.ini, menu.hlp | yes (menu port) | fix check: tapped in the Index on a 390x844 touch profile (one-off script) | Jump from Algemene onderwerpen, and the Index |
| Topic in no balloon: 50 Winnaar A2 Race | agent.ini, menu.hlp | yes (menu port) | fix check: tapped in the Index on a 390x844 touch profile (one-off script) | Index only: no jump in the file |
| Help of `TfrmDisplaySettings`: 15 Weergave: algemeen, 14 Weergave: problemen | M:0x488b60 | yes (menu port) | fix check: titles `Weergave: algemeen` on Algemeen, `Weergave: problemen` on Problemen (one-off script) | `btnHelpStdClick`. The port's tab Browser opens its own text, `Weergave: browser` |
| `LEESMIJ.HLP`, `Handleiding` | install, disc | n/a | not verified | Not opened by any game module |

## Options

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Controls radios, `OPT_KEYB/GPAD/JOYS/WHEE`, Instellen off for gamepad | M:0x496480..0x4965a0 | yes (menu port) | form check | `TfrmOptions` |
| Start - Info weergeven | M:0x496b78 | yes (menu port) | form check |  |
| Sliders Muziek, Geluidseffecten, Stemmen, live, `trin` | M:0x495c68, M:0x495cc8, M:0x495d1c | yes (menu port) | form check | Options persistence. Sound by reading |
| OK copies, Annuleren restores volumes, x does not | M:0x495808, M:0x4956b4 | yes (menu port) | form check |  |
| `3D kaart` off, software renderer | M:0x4959c4, M:0x487514; S:0x447870 | yes (menu port) | checked on Amsterdam: check-software | Open, by the original's rules. `isMode3d`: 0, 1, 2, 5 have no 3D card, as `M:0x487514`. `chkVideo3dClick`: a choice that becomes disabled moves to Normaal, and the picture of the card goes. `options: 3D kaart off opens Laag, Hoog stays off, picture of the card goes`, `options: 3D kaart on from Laag goes to Normaal`. The race it starts: `docs/research/render-8bit.md` |
| Laag, enabled only without 3D | M:0x49591c, M:0x496684 | yes (menu port) | checked on Amsterdam: check-software | `enableVideoChoices`. Without `3D kaart` it gives `RESOLUTION` 0, 320x200x8. With it grey, `NOTE_LOW` on click. `options: starts with 3D kaart and Normaal, Laag off`, `options: Laag writes RESOLUTION 0` |
| Normaal, RESOLUTION 3 | M:0x495954 | yes (menu port) | checked on Amsterdam: check-flow | Default |
| Normaal without `3D kaart`, RESOLUTION 1 | M:0x495954, M:0x4960fc | yes (menu port) | checked on Amsterdam: check-software | 640x480x8. `options: Normaal without 3D kaart writes RESOLUTION 1`, `options: a save at 1 shows 3D kaart off and Normaal`. A whole race ran on it: `RESOLUTION 1: a whole race ends with the results written` |
| Hoog, RESOLUTION 4 | M:0x49598c | partial | fix check: disabled with a note; a `RESOLUTION 4` save shows it chosen and keeps 4; Normaal from it gives 3 (one-off script) | Greyed on purpose: the picture size comes from 3D-resolutie. Game code sees 800x600 on such a save, and it looks like Normaal. Without `3D kaart` the original has it off too. `options.png` |
| Custom resolution kept and shown as Hoog | M:0x4967d4 | yes (menu port) | not verified | `isCustomResolution`, by reading |
| Key caps, capture, `MessageBeep` on a bad key | M:0x491d84, M:0x491e64, M:0x40be6c | yes (menu port) | form check | Loaded only. Capture in no check. A short tone stands in for the Windows beep, through the master output |
| Focus loss cancels capture | M:0x491ef8 | yes (menu port) | not verified | A click elsewhere; window blur does not cancel |
| Duplicate check, `TfrmDoubleKeys` | M:0x4925dc, M:0x491f28 | yes (menu port) | form check | Form loaded; rule not run |
| Standaard: all ten control values | M:0x492644, M:0x4a688c | yes (menu port) | not verified |  |
| Joystick and wheel sensitivity 0..100 | M:0x492b00, M:0x492cfc | yes (menu port) | form check | Effect on steering not checked |
| Texture detail Minimaal, Normaal, Maximaal | M:0x488bd8, M:0x4a7160 | yes (menu port) | fix check: `0x73b4f9` reads 16777216 after boot, and with that value in `game.ini` Maximaal and Normaal are enabled (one-off script) | `limitTextureDetail`. A save lowered to Normaal by an older value stays there until the player changes it |
| Bilinear | M:0x48805c; S:0x44a050 | yes (menu port) | form check | `btnBilinearFiltering`, with its label and explanation text. A one-off script saw the label toggle it |
| Transparent effects | M:0x48805c; S:0x449b30 | yes (menu port) | form check | `btnAlphaBlending`, with its label and explanation text |
| Helderheid licht, donker | M:0x4884b8; S:0x447a00 | yes (menu port) | form check | Enabled with `3D kaart`. `[GFX OPTIONS] gamma` squares colours in the race's texture conversion; it is not the display adapter's gamma. At 8 bits it does nothing: `8bit-device.md` section 5 |
| Mip-mapping: into the save only | M:0x48bcf0 writes no key | yes (menu port) | form check | A one-off script saw OK store it. Only a hand edit of `game.ini` reaches the race |
| Without `3D kaart`: Mip-mapping, Helderheid, Bilinear, Transparent effects, Texture detail off | M:0x4884b8, M:0x488bd8 | yes (menu port) | checked on Amsterdam: check-software | `only3d` in `copySettingsToControls`, `NOTE_NEEDS_3D` on click. `Weergave: the 3D-only controls are off without 3D kaart`, `evidence/software/flow/03-weergave-no-3d.png` |
| Wait VBL | M:0x488ba0; S:0x44a010 | no | form check | Greyed with a note. A one-off script saw the note on click |
| Render memory, RenderFocus | M:0x488808; S:0x4477b0 | no | form check | Greyed with a note |
| Videokaart, `cboDriver` | M:0x487d30, M:0x4882f4 | no | form check | Greyed with a note. Shows the save's value, `automatisch` by default, as `M:0x4884b8` |
| Overige resoluties, `cboResolution` | M:0x48813c, M:0x487c68 | no | form check | Greyed with a note. Shows the original's fixed `640 x 480`. A one-off script saw the note on click. Replaced by 3D-resolutie and Renderschaal |
| OK with driver index below 2 stores the fixed mode | M:0x4882f4, M:0x488808 | no | not verified | Left out on purpose: a save on Hoog keeps its value, where the original turns it back to Normaal |
| Port: 3D-resolutie, Renderschaal 25..200%, shown size | Brief S.8 | yes (menu port) | checked on Amsterdam: check-race-ui | Race panel: `settings: Auto at 100% gives 1600x720`, `settings: 480p at 50% applies at once, drawing buffer stays native`, `settings: survive a restart`, `settings: Auto at 200% renders 3200x1440`, `settings: the GPU limit is applied and shown`. Tab Browser of Geavanceerd by a one-off script, with a stubbed limit of 512. Settings in `localStorage` |
| Explanation labels on the tabs, `Problemen oplossen`, tab captions `Algemeen`, `Problemen` | TFRMDISPLAYSETTINGS, menucaps.ini; MENUSTRINGS 22, 23 | yes (menu port) | form check | `loadPlainDfm` with the caption engine, at the DFM's positions. All tabs by screenshot at both sizes. `displaysettings.png` shows Algemeen |
| Port: Volume | Brief S.8 | yes (menu port) | checked on Amsterdam: check-race-ui | `settings: Volume sets the master gain, once`, in a race. `App.getMasterOutput` carries menu sound too; a one-off script saw fx, voice and music reach it. Row on the tab Browser and in the race panel |
| Port: Beeldjes per seconde tonen | Brief S.8 | yes (menu port) | fix check: the tab Browser sets it at once; Annuleren puts it back (one-off script) | Row on the tab Browser and in the race panel |
| Port: Volledig scherm | Brief S.8; M:0x4a4d20 | yes (menu port) | checked on Amsterdam: check-race-ui | `full screen: setting it again enters`, in a race. Row on the tab Browser, greyed where the browser has no such call, and in the race panel |
| Port: Aanraakbediening Automatisch, Aan, Uit | Brief S.8 | yes (menu port) | checked on Amsterdam: check-race-ui | `touch setting: ...` checks. `useTouch` in `settings.js`. Row on the tab Browser and in the race panel |
| Port: Deadzone gamepad 0..50% | Brief S.8 | yes (menu port) | checked on Amsterdam: check-race-ui | `gamepad: the deadzone follows the setting`, in a race. Row on the tab Browser and in the race panel |
| Port: tab Browser applies at once; Annuleren and x put the seven keys back; OK keeps them | Brief S.8 | yes (menu port) | fix check: Annuleren, the title bar x, Esc and OK on Geavanceerd (one-off script) | `PORT_KEYS` in `group-options.js`. `TfrmOptions` does the same around it. A setting changed elsewhere shows at once |

## Control keys

`menu.ini [CONTROLKEYS]`. Read by `data.js` `readControlKeys`, bound in `TfrmKeySettings.formKeyDown` through `vkOf` in `source/input/keyboard.js`. The "code" is the `KeyboardEvent.code` that produces the VK. Capture itself is in no listed check.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `0` VK 0, `<None>` | menu.ini: no key | n/a | not verified | `isControlKey` refuses it |
| `1` VK 37, links | menu.ini | yes (menu port) | checked on Amsterdam: check-race-ui | code ArrowLeft. Default for Links |
| `2` VK 38, omhoog | menu.ini | yes (menu port) | checked on Amsterdam: check-race-ui | code ArrowUp. Default for Gas |
| `3` VK 40, omlaag | menu.ini | yes (menu port) | not verified | code ArrowDown. Default for Rem |
| `4` VK 39, rechts | menu.ini | yes (menu port) | not verified | code ArrowRight. Default for Rechts |
| `5` VK 45, insert | menu.ini | yes (menu port) | not verified | code Insert |
| `6` VK 46, delete | menu.ini | yes (menu port) | not verified | code Delete |
| `7` VK 36, home | menu.ini | yes (menu port) | not verified | code Home |
| `8` VK 35, end | menu.ini | yes (menu port) | not verified | code End |
| `9` VK 33, page up | menu.ini | yes (menu port) | not verified | code PageUp |
| `10` VK 34, page down | menu.ini | yes (menu port) | not verified | code PageDown |
| `11` VK 106, * | menu.ini | yes (menu port) | not verified | code NumpadMultiply |
| `12` VK 107, + | menu.ini | yes (menu port) | not verified | code NumpadAdd |
| `13` VK 108, separ | menu.ini; input.md C10, H9: fatal in spel.dat | no | not verified | `vkOf` never yields 108, as input.md H9 asks |
| `14` VK 109, - | menu.ini | yes (menu port) | not verified | code NumpadSubtract |
| `15` VK 110, . (num) | menu.ini | yes (menu port) | not verified | code NumpadDecimal |
| `16` VK 111, / (num) | menu.ini | yes (menu port) | not verified | code NumpadDivide |
| `17` VK 16, shift | menu.ini | yes (menu port) | not verified | code ShiftLeft, ShiftRight |
| `18` VK 17, ctrl | menu.ini | yes (menu port) | not verified | code ControlLeft, ControlRight. Default for Turbo |
| `19` VK 18, alt | menu.ini | yes (menu port) | not verified | code AltLeft, AltRight. Default for Handrem |
| `20` VK 32, spatie | menu.ini | yes (menu port) | not verified | code Space. Default for Claxon |
| `21` VK 220, \ | menu.ini | yes (menu port) | not verified | code Backslash |
| `22` VK 8, backspace | menu.ini | yes (menu port) | not verified | code Backspace |
| `23` VK 9, tab | menu.ini | yes (menu port) | not verified | code Tab |
| `24` VK 65, a | menu.ini | yes (menu port) | not verified | code KeyA |
| `25` VK 66, b | menu.ini | yes (menu port) | not verified | code KeyB |
| `26` VK 67, c | menu.ini | yes (menu port) | not verified | code KeyC |
| `*37` VK 68, d   d is used by game engine | menu.ini: commented out | n/a | not verified | Used by the race itself |
| `27` VK 69, e | menu.ini | yes (menu port) | not verified | code KeyE |
| `28` VK 70, f | menu.ini | yes (menu port) | not verified | code KeyF |
| `29` VK 71, g | menu.ini | yes (menu port) | not verified | code KeyG |
| `30` VK 72, h | menu.ini | yes (menu port) | not verified | code KeyH |
| `31` VK 73, i | menu.ini | yes (menu port) | not verified | code KeyI |
| `32` VK 74, j | menu.ini | yes (menu port) | not verified | code KeyJ |
| `33` VK 75, k | menu.ini | yes (menu port) | not verified | code KeyK |
| `34` VK 76, l | menu.ini | yes (menu port) | not verified | code KeyL |
| `35` VK 77, m | menu.ini | yes (menu port) | not verified | code KeyM |
| `36` VK 78, n | menu.ini | yes (menu port) | not verified | code KeyN |
| `37` VK 79, o | menu.ini | yes (menu port) | not verified | code KeyO |
| `*49` VK 80, p   p is used by game engine | menu.ini: commented out | n/a | not verified | Used by the race itself |
| `38` VK 81, q | menu.ini | yes (menu port) | not verified | code KeyQ |
| `39` VK 82, r | menu.ini | yes (menu port) | not verified | code KeyR |
| `40` VK 83, s | menu.ini | yes (menu port) | not verified | code KeyS |
| `41` VK 84, t | menu.ini | yes (menu port) | not verified | code KeyT |
| `42` VK 85, u | menu.ini | yes (menu port) | not verified | code KeyU |
| `43` VK 86, v | menu.ini | yes (menu port) | not verified | code KeyV |
| `44` VK 87, w | menu.ini | yes (menu port) | not verified | code KeyW |
| `45` VK 88, x | menu.ini | yes (menu port) | not verified | code KeyX |
| `46` VK 89, y | menu.ini | yes (menu port) | not verified | code KeyY |
| `47` VK 90, z | menu.ini | yes (menu port) | not verified | code KeyZ |
| `48` VK 188, komma | menu.ini | yes (menu port) | not verified | code Comma |
| `49` VK 190, . | menu.ini | yes (menu port) | not verified | code Period |
| `50` VK 191, / | menu.ini | yes (menu port) | not verified | code Slash |
| `51` VK 186, ; | menu.ini | yes (menu port) | not verified | code Semicolon |
| `52` VK 222, ' | menu.ini | yes (menu port) | not verified | code Quote |
| `53` VK 219, [ | menu.ini | yes (menu port) | not verified | code BracketLeft |
| `54` VK 221, ] | menu.ini | yes (menu port) | not verified | code BracketRight |
| `55` VK 96, 0 (Num) | menu.ini | yes (menu port) | not verified | code Numpad0 |
| `56` VK 97, 1 (Num) | menu.ini | yes (menu port) | not verified | code Numpad1 |
| `57` VK 98, 2 (Num) | menu.ini | yes (menu port) | not verified | code Numpad2 |
| `58` VK 99, 3 (Num) | menu.ini | yes (menu port) | not verified | code Numpad3 |
| `59` VK 100, 4 (Num) | menu.ini | yes (menu port) | not verified | code Numpad4 |
| `60` VK 101, 5 (Num) | menu.ini | yes (menu port) | not verified | code Numpad5 |
| `61` VK 102, 6 (Num) | menu.ini | yes (menu port) | not verified | code Numpad6 |
| `62` VK 103, 7 (Num) | menu.ini | yes (menu port) | not verified | code Numpad7 |
| `63` VK 104, 8 (Num) | menu.ini | yes (menu port) | not verified | code Numpad8 |
| `64` VK 105, 9 (Num) | menu.ini | yes (menu port) | not verified | code Numpad9 |

## Menu keyboard and mouse

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Tab, Shift+Tab | menu-forms.md S.11 | yes (menu port) | fix check: Tab reaches the tabs of Geavanceerd through `MenuRuntime.key` (one-off script) | `Form.keyDown`. Not run on the forms with game art |
| Arrows walk the tab order, ignoring TabStop | M:0x4493bc | yes (menu port) | fix check: arrow keys walk Geavanceerd through `MenuRuntime.key` (one-off script) | `Form.keyDown`. Radios of Geavanceerd: arrow keys select as in Windows; from a pad they only move, and A selects |
| Enter on focused or Default | M:0x468418 | yes (menu port) | fix check: Enter from a stand-in pad clicks the default OK on `TfrmNewPlayer` and a focused radio in Geavanceerd (one-off script) | check-flow pressed Enter on the intro and in the name field only |
| Esc on the Cancel button | M:0x468418 | yes (menu port) | fix check: Esc closes `TfrmDisplaySettings` and `TfrmCloseDlg` (one-off script) | `Form.keyDown` |
| Space down shows Down, up clicks | M:0x4686cc, M:0x468734 | yes (menu port) | not verified |  |
| Mouse press focuses and shows Down; click on release inside | M:0x465a6c, M:0x468344 | yes (menu port) | checked on Amsterdam: check-flow | Real clicks in check-flow |
| Hit test by `_re.bmp`, bottom-left colour outside | M:0x4685ac, M:0x456a14 | yes (menu port) | checked on Amsterdam: check-flow | `MenuAssets.region`. check-flow clicks inside the region, it does not click outside |
| Hover by polling at 60 or 30 ms | M:0x468284 | yes (menu port) | not verified | Port: pointer events |
| Slider: click pages, drag, keys | M:0x46a048, M:0x46ad20, M:0x46adc8 | yes (menu port) | not verified | `Slider`. A one-off script saw a cancelled press clear its repeat timer; the rest by reading |
| Slider `BackImage`, blitted at 0,0 | TFRMOPTIONS, TFRMSLIDERSETTINGS form resources; menu-forms.md S.7 | partial | not verified | `loadDfm` gives `Slider` none, and `tools/convert-dfm.py` drops the binary property. The dialog art holds the same track: read with a small script, byte-exact at (378,233), (378,292), (378,354) on `TfrmOptions`, where the DFM places the sliders at (380,234), (379,292), (378,355), and in place on `TfrmSliderSettings`. So the port shows only the baked track |
| Name fields, MaxLength 12, Enter is OK | M:0x494d44, M:0x494fb0 | yes (menu port) | checked on Amsterdam: check-flow |  |
| Button states with load-order quirk | M:0x46877c, M:0x481698; menu-forms.md S.8 | yes (menu port) | form check | `ButtonDef.load` |
| Blend factor 150 on radio and check | M:0x454850 | yes (menu port) | form check | Canvas alpha; rounding not compared |
| `CombinedBtnStateChange` raises the button, `start.wav` | M:0x47f804 | yes (menu port) | form check | `base-forms.js` `combinedState`. Sound by reading |
| Captions from `menucaps.ini`, Arial 12 bold, `#F1D240` | M:0x4865e4 | yes (menu port) | form check | Web font stack `Arial, Helvetica, sans-serif`: the fallback on systems without Arial was not checked |
| Time format `%d:%.2d:%.2d` | M:0x481090 | yes (menu port) | checked on Amsterdam: check-flow |  |
| MENUSTRINGS 1, 2, 3, 4, 6, 7, 8, 9, 10, 13, 14, 21, 22, 23; 5 as title | menu.ini | yes (menu port) | form check | Used where they apply, 17 as well. 5 is the title of `TfrmException2`, not the page title. 21 stays unused: no command line in a browser |
| `[OrdinalNumbers]` 1e..5e | M:0x499f80 | yes (menu port) | form check |  |
| `[ERRORSTRINGS]` | menu.ini; M:0x4a7568 | yes (menu port) | form check | `errorString` in `group-dialogs.js`: `errormessage` without its Davi-Service line, `close`, `ignore`. `startservice` and `servicenotfound` go with Davi-Service |
| Port: a key held since the race presses nothing until a new key | S:0x43ac80; input.md C12 | yes (menu port) | checked on Amsterdam: check-race-ui | `RaceRunner.endWait` waits for Esc, Enter and Space to be up, with a 5 s limit the original lacks. `MenuRuntime.staleRepeat`. `game over: Enter ends it, the race waits for its release, and the menu ignores repeats` reads the state only; a one-off script with synthetic keydowns saw repeats do nothing on `TfrmHighScoreDlg` and `TfrmCloseDlg`, and a new press count |
| Hammer Fat font | menu-forms.md S.7 | n/a | not verified | No label uses it in the original |

## Menu sounds

All 91 WAV files of `public/assets/menu/`: 89 from MenuRcs plus `start` and `trin` from form resources. Played by `source/menu/sound.js`, through `MenuSound.output` to the master Volume. Nothing here has been heard, and check-flow reads no sound state. A one-off script saw fx, voice and music all reach the master output; which sample plays when is by reading.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `menumsc.wav` music loop | M:0x4820d0; 44.1 kHz stereo, 32.03 s | yes (menu port) | fix check: with the file held back by a route, start then stop gives 0 looping starts, and start, stop, start gives 1 copy that stops when told (one-off script) | `sound.js` `startMusic` with a token. Only stop: `stopAll` at race start or exit |
| `start` button and radio press | M:0x47f804, M:0x47f7ec, M:0x47f7d4 | yes (menu port) | not verified | Embedded in TDATA; `prepare_menu_embedded` |
| `trin` FX and Voice sliders | M:0x495cc8, M:0x495d1c | yes (menu port) | not verified | Embedded in TFRMOPTIONS |
| `peep` purchase | M:0x4991f4 | yes (menu port) | not verified |  |
| `aud2` Results, high score | M:0x4a0624, M:0x494f50 | yes (menu port) | not verified | check-flow reached `TfrmResults` but reads no sound state |
| `aud3` CurrentChar | M:0x49b4fc | yes (menu port) | not verified |  |
| `cmh07_00` Help | M:0x49e678 | yes (menu port) | not verified |  |
| `nexttr` TrackIntro | M:0x49fa34 | yes (menu port) | not verified |  |
| `unlock` Harry | M:0x49c6a0 | yes (menu port) | not verified |  |
| `cbr07_00..05`, `cgr07_00..02` Garage | M:0x499538 | yes (menu port) | not verified |  |
| `ccs00..04_00..01` Character confirm | M:0x49aac4 | yes (menu port) | not verified |  |
| `cti07_00,02,05,06,07,08` Track, races | M:0x49a5c0 | yes (menu port) | not verified |  |
| `cti08_01,03,04` Track, chases | M:0x49a5c0 | yes (menu port) | not verified |  |
| `cdl00..04_00..01` LoseNormal | M:0x49f50c | yes (menu port) | not verified |  |
| `cdl07_00,02,05,06,07,08` LoseNormal, after 4500 ms | M:0x49f6fc | yes (menu port) | not verified |  |
| `cdw00..04_00..01` WinNormal, Qualify | M:0x4a0218, M:0x49fe68 | yes (menu port) | not verified | Qualify takes the winner's number |
| `cdw07_00,02,05,06,07,08` WinNormal, after 4500 ms | M:0x4a03b0 | yes (menu port) | not verified |  |
| `cdq07_00,02,05,07,08` Qualify, after 4500 ms | M:0x49ff90 | yes (menu port) | not verified | Absent number stays silent, `playVoice` in `group-race.js` |
| `cdw05_01,03` WinChase | M:0x4a0dc8 | yes (menu port) | not verified |  |
| `cdl05_01,03,04` LoseChase | M:0x4a10a8 | yes (menu port) | not verified |  |
| `cdw07_04`, `ccw08_00..04`, `ccw08_05` WinFinal | M:0x4a45b4, M:0x4a4444, M:0x4a455c | yes (menu port) | not verified | Wait: bytes x 25 / 1,000,000 s + 1500 ms, `durationSeconds` |
| `css07_00..04`, `cfr07_00` | No code reference; menu-forms.md S.8 | n/a | not verified | Present in the assets, played by nobody |
| Volume law `clamp(-trunc(10^(2+(100-v)/100*log10(40))),-4000,-100)` | M:0x480fcc | yes (menu port) | not verified | `directSoundVolume`, `soundPercent` |
| One voice at a time, any screen show cuts it | M:0x480448, M:0x49e660 | yes (menu port) | not verified | `MenuSound.playVoice`; `GameMenuScreen.onShow` |
| `*On` flags have no effect in the menu | M:0x480428, M:0x4807a8, M:0x482830 | yes (menu port) | not verified | `applySoundSettings` ignores them |
| `WavTimeFactor=25` | menu.ini [PARAMETERS]; M:0x480b78 | yes (menu port) | not verified | Default argument in `durationSeconds`, not read from the file |

## Menu art

All from `MenuRcs` or form resources, converted by `tools/prepare-assets.py`, mapping in `public/assets/asset-map.json`. A missing member leaves a control empty, as in the original.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| 17 screen backgrounds `mainscre` .. `trackint`, BMP 800x600 | menu-forms.md S.8 | yes (menu port) | form check |  |
| Dialog backgrounds `options`, `player`, `keysetti`, `popstrt0..3`, `closedlg`, `popempty`, `newplaye`, `highscor`, `nomoney`, `cdreques`, `unlock`, `wheelset`, `joystick` | menu-forms.md S.8 | yes (menu port) | form check |  |
| Button stems `helpm` .. `radex`, each with state images and `_re.bmp` | menu-forms.md S.8 | yes (menu port) | form check | `STEMS` in `base-forms.js` |
| `trname00..09`, `tune_00..04`, `headtour`, `headquic` | menu-forms.md S.8 | yes (menu port) | form check |  |
| `tuneup00..04`, `diffic00..02`, `tour`, `quick`, `hunny`, `shadow` | menu-forms.md S.8 | yes (menu port) | form check |  |
| Slideshows `ttc0T_FF` (T 0..8), `qtc0T_FF` (T 0..9), 6 frames each | M:0x49a328, M:0x49ca50 | yes (menu port) | form check | `Slideshow`. Amsterdam by check-flow |
| Pips `klrondje`, `blind_up`, `redin_up`, `butbigci`, `indfocus`, `focus` | menu-forms.md S.8 | yes (menu port) | form check |  |
| `opt_*` images | menu-forms.md S.8 | yes (menu port) | form check |  |
| `COPANGRY`, `cophappy`, `qr_CH07`: referenced, not in the archive | menu-forms.md S.8 | n/a | not verified | Empty in the original too |
| `headeasy`, `headhard`, `headnorm`, `gamepad`, `radbi_*`, `slide*`, `pch05`, `radio_up.bmp` | menu-forms.md S.8: no code reference | n/a | not verified | Converted, used by nobody. `pch05` is requested only for a Tour character, which it never is |
| Race loading screens `e00..09_w_hi` | raser.ini [wait_hi]; S:0x449cb0 | yes (host) | checked on Amsterdam: check-flow | `#loading`, `race-runner.js` `load`, `prepare_loading`. check-flow passes through `e00`, with no screenshot of it. The others in no check |
| `OVL_PROGRESS_BAR` frames `ovl_p00..p10` over the wait picture | S:0x4415e0, S:0x4976d0; hud-overlay.md S.9, S.11a | yes (host) | fix check: 11 frames on a contact sheet show 0 to 10 lit beads; placed at the measured 308.5, 438, 288, 24 (one-off script) | `prepare_loading_bar`, `race-runner.js` `showBar`, `bar-00..10.png`. Differences on purpose: the frame follows the download, and stands on the last frame during `race.boot()`, which blocks the browser. Edge pixels are the port's choice |
| Race loading screens at 8 bits: `e00..09_w_hi.pcx` at `RESOLUTION` 1, `e00..09_w_lo.pcx` at 0 | raser.ini [wait_hi], [wait_lo]; S:0x449cb0 | yes (host) | checked on Amsterdam: check-software | `prepare_loading` makes `eNN-8.png` and `eNN-lo.png` ahead, through the game's palette, and `race-runner.js` `load` picks by mode. The game draws them in `race.boot()`, which shows nothing until it returns. check-software passes through `e00-8` and `e00-lo`, with no screenshot of them. Not compared with the guest. The others in no check |
| `OVL_PROGRESS_BAR` frames at 8 bits, from `overlay.pcx` | S:0x4415e0, S:0x4976d0 | yes (host) | not verified | `prepare_loading_bar_8`, `bar8-00..10.png`, one texel per pixel, index 0xFE keyed. Frame rule and differences on purpose as for `ovl_p00..p10` |
| `imgError` icon of `TfrmException2` | TFRMEXCEPTION2 form resource | yes (menu port) | form check | `prepare_error_icon`, `error_icon.png` |

## Platform requirements of the brief in this area

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Video: `playsinline` for iOS | Brief S.2, S.7 | yes (menu port) | not verified | `framework.js` `playVideo`. No iOS device |
| Intro: muted start when sound is refused, first action unmutes | Brief S.2 | yes (menu port) | not verified | `TfrmIntro.showSoundNote`, `userAction`, only on `NotAllowedError`. All checks but check-phone-flow launch with `--autoplay-policy=no-user-gesture-required`. check-phone-flow taps past the intro either way and records nothing about sound. So the path is not verified |
| Audio unlock by first gesture | Brief S.2 | yes (menu port) | not verified | `app.js` `start`: `pointerdown`, `pointerup`, `touchend`, `click`, `keydown`. The same gesture enters full screen |
| Desktop landscape | Brief S.7 | yes (menu port) | form check | 1280x720 |
| Portrait: screens rearranged by `portraitZones` | Brief S.7 | yes (menu port) | form check | 390x844 at DPR 2. Intentional. Art is cropped at zone edges, not distorted. check-phone-flow tapped through `TfrmMainScreen`, `TfrmDifficulty` and `TfrmQuickRace` at that size |
| Portrait: dialogs | Brief S.7 | yes (menu port) | form check | `player-portrait.png`, `unlock-portrait.png`. One-off scripts took Geavanceerd and `TfrmDoubleKeys` at 390x844; other dialogs by reading |
| Phone landscape, 800x360 | Brief S.7, S.9 | yes (menu port) | not verified | Uniform scale: 480x360 CSS pixels of form; text about 60% size. Not checked in the menu at this size. A one-off script took one look at 844x390 on Geavanceerd |
| Tablet, both orientations | Brief S.7 | yes (menu port) | not verified |  |
| Orientation change in the menu | Brief S.7 | yes (menu port) | not verified | `app.js` `layout`, `relayout`. check-race-ui covers the race only |
| Safe areas in screens and dialogs | Brief S.7 | yes (menu port) | not verified | `framework.js` `safeRect`, `source/ui/safe-area.js`. No real inset |
| Safe areas in the help window and the intro note | Brief S.7 | yes (menu port) | fix check: layout unchanged at 1280x720 and 390x844; no device with a real inset (one-off script) | `HelpWindow` and `TfrmException2` panels and the note use `max(..., env(safe-area-inset-*))` |
| Gamepad: menu navigation | Brief S.7; input.md H4, C13 | yes (menu port) | fix check: stand-in pad from the intro to the main screen; Tab and arrows through Geavanceerd (one-off script) | `gamepad.js` `pollMenu`: D-pad, stick, A, B, RB. No real pad |
| Gamepad: entering a name | Brief S.7 | yes (menu port) | fix check: stand-in pad, A on an empty name gives `Speler 1`, then `Speler 2`; keyboard Enter keeps asking (one-off script) | `flow.js` `askPlayerName`, `defaultPlayerName`, `MenuRuntime.lastInputPad`. No letter entry: intentional. Keyboard and touch keep asking, as the original |
| Input transition race to menu: held pad buttons | Brief S.7 | yes (menu port) | checked on Amsterdam: check-race-ui | `App.showMenu` calls `GamepadInput.resync`. `menu: a pad button held from the race counts only after its release`, with a stand-in pad |
| Touch in the menu | Brief S.7 | yes (menu port) | fix check: Internet tapped at 390x844, help window tapped through on a touch profile (one-off script) | Pointer events on the canvas; `touch-action:none`. check-race-ui touches the race only |
| Touch cancel in the menu | Brief S.7 | yes (menu port) | fix check: CDP touch cancel and synthetic pointers: no click, second finger ignored, a slider's repeat timer cleared (one-off script) | `framework.js` `bind`: one pointer per press, `Form.pointerCancel`, `lostpointercapture`; a form closing drops its press. CDP's `touchEnd` ends all touches at once, so first-finger-up stood on synthetic pointers only |
| Hidden tab: menu music, voices, FX | Brief S.6; audio.md S.16 | yes (menu port) | not verified | `app.js`: `AudioContext` suspended, by reading. Differs from the original's GLOBALFOCUS on purpose. check-race-ui looks at the race and the intro only |
| Hidden tab: intro with sound | Brief S.6 | yes (menu port) | checked on Amsterdam: check-race-ui | `app.js` pauses the `<video>` and plays it on return. `intro: pauses in a hidden tab, goes on when shown`, with `document.hidden` stubbed |
| Hidden tab: race | Brief S.6 | yes (host) | checked on Amsterdam: check-race-ui | `race-runner.js` `setFocus`. `focus: clock stops, sound suspends, input clears`, `hidden tab: clock stops and resumes` |
| Mouse pointer hidden during the race | win32-surface.md: WM_SETCURSOR, SetCursor(NULL) | yes (host) | checked on Amsterdam: check-race-ui | `#game.no-pointer` from race start in `race-runner.js`; it comes back for 2 s when the mouse moves, because the gear button needs it: on purpose. `pointer: none over the race, back for 2 s on a move`, by computed cursor |
| Slow network: menu music still loading when the menu ends | Brief S.6; M:0x481e54 stops music at exit | yes (menu port) | fix check: with the file held back by a route, a stop that overtakes the load starts nothing (one-off script) | `sound.js` `startMusic`, `start` with its `wanted` test. No real slow network |
| Browser targets other than Chromium | Brief S.7 | partial | not verified | Code avoids engine-specific calls where seen; no other engine was run. Video is H.264 only |
