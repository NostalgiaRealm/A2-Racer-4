# Provenance

Every executable of the game and its disc, the installation against the disc image with their versions, which files are the authority for the port, the configuration files, registry, saves and disc dependencies, and the environment used for reference runs. Part of [original-behavior.md](original-behavior.md); status rows are in [feature-parity.md](feature-parity.md) and [parity/host.md](parity/host.md). The process model is in [behavior/host.md](behavior/host.md), the player-facing start-up flow in [behavior/startup-menu.md](behavior/startup-menu.md).

Inputs named in the brief: the installation at `/home/rick/.wine/drive_c/Program Files (x86)/Davilex/A2 Racer 4/` and the disc image `/home/rick/V1.01 A2 Racer 4 - De politie slaat terug!.iso`. Working copies are in `original-game-decompiled/original/`, as `install/`, `disc/`, `disc-image/` and `wine-prefix-external/`. Both inputs were fingerprinted before and after the decompile package was built and did not change then (`inventory/file_reconciliation.json`).

After that, on 2026-10-30 at 23:05 by `INSTALL.LOG`, the owner installed Davilex's two official updates into the installation. So the installation now differs from `original/install`, which stays as the snapshot of disc 1.01 without updates. The delta is in `original/updates/`: see [Installed updates](#installed-updates). The disc image's hash is unchanged.

The published repository and archives leave out the disc image, the third-party installers, `wine-prefix-external/` and the installer logs: [releasing.md](releasing.md#what-is-published). Their hashes stay in `inventory/`. `INSTALL.LOG` is cited here from the owner's copy.

Paths are relative to `original-game-decompiled/` unless they start with `source/`, `tools/`, `public/` or `docs/`. Hashes and sizes: `inventory/modules.csv`, `inventory/install_inventory.csv`, `inventory/disc_inventory.csv`, `inventory/install_vs_disc.csv`. `A2-Racer-4-Fixes` is the owner's patch project at `/home/rick/Documents/Rebuilds/A2 Racer 4 Patch/A2-Racer-4-Fixes`.

Roles of programs not decompiled come from version info, names and packaging, by the owner's decision (`COVERAGE_REPORT.md`). Their code was not analysed. Addresses: `S:` is `spel.dat`, `M:` is `menu.exe`, `L:` is `A2Racer4.exe`.

## a. Executables and modules

### Modules that run the game

| File | Real type | Version evidence | Purpose | Command line | Working directory | Relation to the others | Port |
|---|---|---|---|---|---|---|---|
| `A2Racer4.exe` | PE32 x86 GUI, MSVC 6, 36,864 bytes, source path `C:\Work\Motor\main.cpp`, PE time 2000-10-20 06:58:20 UTC | No version resource | Launcher. Window class `MOTOR`, black, full screen, hides the pointer on mouse move. Alternates menu and race, nothing else | The shortcut passes none | Install folder, from the shortcut; it uses the current directory for `Menu.ini` and to spawn `.\menu.exe`, `.\spel.dat` | Spawns `menu.exe /FirstTime`, then `/Default`, through `_spawnve(_P_WAIT)`. Reads `[General] ExitCode` from `menu.ini` after each. 40 runs `spel.dat`, anything else ends. Exit codes of the children are never read | Replaced by `source/app.js` |
| `A2Racer4.icd` | Same bytes as `A2Racer4.exe` | SHA-256 `8b5acf2e...` for both, in install and on disc | Not established. No game module holds the name | None seen | None seen | None seen | Not used |
| `menu.exe` | PE32 x86 GUI, Delphi 5, 1,158,656 bytes. Disc: `Data/MenuData/Menu.exe` | File version 1.0.0.59, description `Race Menu`, company Davilex. Observed log: `Version 1/0/0/59` | Front end, 45 forms. Players, tracks, garage, options, results, intro video, music, Hunny help. Writes `game.ini`, `raser.ini` before a race, `menu.ini` on every exit, saves | `/FirstTime` or `/Default`, matched case-insensitively against any argument. Neither: message `Start het spel met 'A2Racer4.exe'.` and stop | All paths from `ExtractFilePath(Application.ExeName)` | Child of the launcher. Imports `RSC.DLL`, `DDRAW`, `DSOUND`, `AVIFIL32`. Sets 800x600, hides the desktop and taskbar | Hand port, `source/menu/`. The Delphi forms are decoded by `tools/convert-dfm.py` |
| `spel.dat` | PE32 x86 GUI with a `.dat` name, MSVC 6, 1,875,968 bytes, source paths `C:\Work\A2IV\...`, PE time 2000-10-20 07:14:11 UTC | No version resource; `raser.ini [PROGRAM] VERSION=1.01` | The race: rules, Ipion physics, AI, HUD, DirectDraw, Direct3D 5, DirectInput, DirectSound | `spel.dat ` with empty arguments (inferred); `lpCmdLine` is unused | Current directory, inherited | Child of the launcher. Input and output are INI files only. Runs `bonus.dso` | Recompiled to wasm, `tools/recomp/`, with three byte patches, see section b |
| `bonus.dso` | DaviScript object, version 0x1B. 25,177 bytes | No version beyond the format | Bonus object behaviour: 190 script functions with code | Loaded by name by `spel.dat` (`0x00475860`); a `.ds` sibling is only probed | Current directory | Run by the script engine in `spel.dat` | Runs as shipped, through the recompiled engine |
| `rsc.dll` | PE32 x86 DLL, MSVC 6 debug build, `D:\seestuff\Rsc\Debug\Rsc.pdb`, 217,134 bytes, PE time 2000-05-30 | No version resource | Archive I/O for `MenuRcs.IND/IMG`: 13 exports `xvga_*` | n/a | Loaded by `menu.exe` | `menu.exe` imports 7 functions. `spel.dat` does not use it (own `Fileio.cpp`) | Not needed: `tools/prepare-assets.py` converts the members ahead |
| `setdebug.exe` | PE32 x86 GUI, Delphi 5, 326,144 bytes, `D:\Tools\SetDebug\source\SetDebug.dpr` | No version resource | Toggles `[general] debug` in `debug.ini` and shows the on or off message from that file | None seen | None seen | Started by no module. `debug.ini` says to double-click it | Not ported, on purpose: support tool |

### Disc and install packaging

| File | Real type | Version | Purpose | Port |
|---|---|---|---|---|
| `autorun.exe`, `autorun.inf` | PE32, Delphi | 1.1.0.0, `Davilex CD-ROM AutoRun program` | CD start. `autorun.inf`: `open=autorun.exe`, `Execute=setup.exe`, `AppVersion=1`, `AppLanguage=NL` | Not ported |
| `setup.EXE` | PE32, Wise installer, 2,208,454 bytes, file date 2000-12-22 | No version resource. PE time 1998-04-23, older than the game, so it belongs to the installer stub (inferred) | Installs the game. `INSTALL.LOG`: `Title: A2 Racer 4`, 147 file operations | Not ported |
| `service/Setup.exe` | NE (16-bit) Wise stub, 1,792,918 bytes | | Installs Davilex Service (from packaging) | Not ported |
| `UnInst32.exe`, `UnWise.exe` | NE, 104,368 bytes, same bytes | | Uninstaller. `Uninst32.ini` and `Unwise.ini` are the same bytes too and hold its Dutch messages | Not ported |
| `SERVICE.EXE` | PE32, Delphi 5 | Davi-Service 1.0.6.0, Davilex Software bv | Support tool. The menu starts it only from its exception dialog: `ShellExecute("open", "SERVICE.EXE", "-r%s")` (`M:0x4a7a48`, inferred from the string reference) | Not ported. The port's error dialog leaves out the Davi-Service line and option |
| `SERVICE.CPL` | PE32 | 1, 0, 0, 2 | Control Panel applet of the same | Not ported |
| `a2racer4_update_car.exe` | PE32, Wise installer (`WiseMain`), 510,662 bytes, file date 2009-11-18 | No version resource. PE time 1998-04-23, as `setup.EXE`. `INSTALL.LOG`: `Title: A2 Racer IV Update`. Readme: "Houten, november 2000" | Car update. Not on the disc. Copies of it and the next are in `original/updates/` | Its files, not the installer |
| `a2racer4_update_track.exe` | PE32, Wise installer, 811,872 bytes, same dates | `INSTTRCK.LOG`: `Title: A2 Racer IV Update`. Readme: "Houten, november 2000" | Track update. Not on the disc | Its files, not the installer |
| `Trkuinst.exe`, `trkuinst.ini` | NE, 104,368 bytes, same bytes as `UnInst32.exe` | | Uninstaller of the track update | Not ported |

### Third party on the disc

| Group | Files | Version evidence | Purpose | Game imports it? |
|---|---|---|---|---|
| DirectX | `DXSetup/`, `DirectX.cab`, 61 modules | `DXSETUP.exe`, `ddraw.dll`, `d3dim.dll`, `dsound.dll` 4.07.00.0700, `dinput.dll` 4.07.00.0716. Version strings in Spanish on some files | DirectX 7 runtime installer. `INSTALL.LOG`: `DirectX: Could not install, error -1.` under Wine | `spel.dat` and `menu.exe` import `DDRAW`, `DSOUND`; `spel.dat` also `DINPUT`. Not this copy in the test runs: Wine's own |
| DirectX Media | `dxmedia/DXMEDIA.exe`, 57 modules | `quartz.dll` 6.00.02.0902 (DirectShow), `ddraw.dll` 4.04.00.0068 | DirectShow, for the MPEG-1 intro through MCI (inferred from the run under Wine) | Not imported; Wine loaded its own `quartz.dll` through `mciqtz32.dll` for the intro |
| Microsoft Agent | `MSagent/MSagent.exe`, 13 modules | `AgentSvr.exe` 2.00.0.2202, cabinet stub 4.71.1015.0 | Hunny help character, by COM from `menu.exe` (inferred from `hunny.acs`, `TAgent*`) | Not imported |
| Acrobat Reader | `Adobe Acrobat/rp505nld.exe`, 322 modules including 245 Java classes | `AcroRd32.exe` 5.0.5.2001092400, Dutch | To read `Handleiding.pdf`, per `Handleiding.txt` | No |
| NetManage | `httpct.ocx`, `NMOCOD.DLL`, `NMSCKN.DLL`, `NMORENU.DLL` | 6.02.1194 | Placed in the system folder by `setup.EXE`. Use not established | No |
| Microsoft redistributables | `RICHED20.DLL` 5.0.150.0, `OLEPRO32.dll` 5.0.4118, `comc95.dll` 4.72.3611.1900, `COMCTRL_EXE`, `ADVPACK.DLL`, others | Version info | Wise payload | No |

`inventory/module_roles.csv` has all 242 code-bearing modules with role and evidence; `COVERAGE_REPORT.md` says 481 inventory-only items in all, counting the Java classes. Not collected: `C:\windows\A2 Racer Screen saver.{dat,dll,exe,scr}` exist in the same Wine prefix but are in neither input nor `INSTALL.LOG` (`inventory/related_files_not_collected.csv`). They are not treated as part of this game.

## b. Installation against disc image

### Versions

| Source | What it says |
|---|---|
| Disc image name | `V1.01 A2 Racer 4 - De politie slaat terug!.iso`, 305,600,512 bytes, SHA-256 `da412f5c7d277a21a36022a7f70c96fde481dd6a1abd857616d516b6e469e7f1` |
| `version.txt` (install and disc) | `A2 Racer IV 1.01`, `22-12-2000` |
| `raser.ini [PROGRAM] VERSION` | `1.01` |
| Installer registry values | `ReleaseVersion=1.01`, `ReleaseDate=20002212` |
| `menu.exe` | File version 1.0.0.59 |
| PE times | `spel.dat` and `A2Racer4.exe` 2000-10-20; `setup.EXE` file date 2000-12-22 |
| ISO volume | ID `A2RACER`, application `NERO BURNING ROM`, created 2003-12-17 |
| Files dated later than the game | `Handleiding/Handleiding.pdf` 2001-07-26; `Handleiding.txt`, `Handleiding/Handleiding.txt`, `Adobe Acrobat/rp505nld.exe` 2003-12-17 |

Inferred from those dates: the image is a re-burn from 2003 of a release dated 22-12-2000, with the Adobe Reader installer and its note added then, and the PDF manual added or replaced after the release. Nothing here shows what the first pressing held.

Inferred: the install in `~/.wine` came from this image, then took the two updates. `INSTALL.LOG` says `Source: T:\setup.EXE`, started 10/30/26 18:33, and before the updates all shared files matched by hash.

### Differences before the updates

The snapshot `original/install` against the disc, counted over names, lower-cased, from `inventory/install_vs_disc.csv`: **129 identical** by SHA-256, **5 install-only**, **30 disc-only**, **0 with the same name and different content**.

| Install-only | Why |
|---|---|
| `INSTALL.LOG` | Written by the installer |
| `UnInst32.exe`, `UnWise.exe`, `Uninst32.ini`, `Unwise.ini` | Installer payload; the `.ini` holds the file list |

| Disc-only | What it is | Read by |
|---|---|---|
| `autorun.exe`, `autorun.inf`, `setup.EXE`, `service/Setup.exe` | Packaging | Windows, the player |
| `Adobe Acrobat/rp505nld.exe`, `DXSetup/*`, `dxmedia/DXMEDIA.exe`, `MSagent/MSagent.exe` | Third party | Installer |
| `Handleiding/Handleiding.pdf`, two `Handleiding.txt` | Manual and how to read it | Player |
| `A2Racer4.GID`, `Data/MenuData/Menu.GID` | Windows Help indexes, ISO hidden flag | Windows Help |
| `Data/MenuData/Hunny.acs` | Agent character. The installer copies it to `C:\windows\MsAgent\Chars\hunny.acs`, same hash | MS Agent |
| `Data/default.txt` | CD and debugger messages in many languages | No game module holds the name |
| `Data/Splsh16.bmp`, `Data/splsh256.bmp` | Splash pictures | No game module holds the name |
| `Data/rcs.CHK`, `Data/MenuData/MenuRcs.CHK` | Binary, named after the archives, format not analysed | No game module holds the name |
| `Data/sfx.img`, `Data/sfx.ind` | 61,600 bytes each, same bytes, opens with float-like values. Format not analysed | No game module holds these names; `[IMG] RCSFILE=rcs` picks the archive |
| `Data/etappe1.hbp`, `Data/etappe5.hbp` | 8 bytes: `FF FF FF FF 00 00 00 00` | No game module holds the extension |
| `Data/ing_menu.ini` | Button and slider layout test (`CButtonCtrlCreator`) | No game module holds the name |

Files in both but read by no module: `garage.ini` (prices of Trabant, Astra, VW and more, apparently from another game), `version.txt`. The "no module holds the name" rows come from a byte scan of the five native modules; a name built at run time would escape it, so that part is inferred.

### Installed updates

`original/updates/`: the two installers, `installed/` with every new or changed file, unchanged copies from the installation, `delta.csv` with size and SHA-256, and `README.md`.

The installation against the snapshot: 164 files, **30 new, 10 changed, 124 the same**. Against the disc: **120 identical, 9 with the same name and different content, 35 install-only, 30 disc-only**. The 9 are real conflicts between the two inputs.

| Group | Files | What they do |
|---|---|---|
| New, track update | `etappe9.cmp .dmp .ini .omp .pmp .pth .rmp` | Track 9, the Country etappe. With the seven files, the menu's own rule (`M:0x461a4c`) opens it |
| New, car update | `overlay7.ini`, 17 `tru*.d3d` | Car 7, the truck "De Schaduw": HUD file and meshes |
| New, other | `carupd.txt`, `trackupd.txt`, `Trkuinst.exe`, `trkuinst.ini`, `INSTTRCK.LOG` | Readmes, uninstaller, log. Not used by the game |
| Changed: conflict with the disc | `l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini` | `TOURNAMENT_BONUS` becomes `DOWNLOADCAR`, on the truck's meshes. `[DOWNLOADCAR] Count > 0` is the menu's own rule to open the character |
| | `car_cfg.ini` | Row 7 in each league: `RACER_7,DOWNLOADCAR,KENT,hoog4,1500,42,5000,7,dam_truck`, was `RACER_7,TOURNAMENT_BONUS,PIET,hoog4,1500,7,5000,7,dam_dummy`. New wheel positions 25 to 42 |
| | `vdyns.dat` | Record 7 only: COM y -8, second spring value 65000, second damper value 6500, radius 5 |
| | `car_snd.ini`, `damage.ini`, `gen_anim.ini` | `[Car42]`; the truck's damage rows, count 129; `PLAYER_7_PORTRAIT` and `TRU_A*_ANIM` |
| | `game.ini` | A copy from the developers' machine, see below |
| Changed, no conflict | `INSTALL.LOG` | The car update's lines added. Not used by the game |
| Same bytes | `spel.dat`, `menu.exe`, `static.ini`, `menu.ini`, `raser.ini`, `rcs.img`, `rc.img`, `menurcs.img`, `e09_anim.ini` | The art and textures of track 9 and the truck were on the disc already, in those archives. The track installer logs an overwrite of `e09_anim.ini`; its bytes are the same |

No code changes with the updates. The race program and the menu read the new data by rules they had all along.

**The update's `game.ini`.** It has `Nrlaps=1`, `etappe=8`, `car=7`, `money=1330`, all four tune-ups, results of a race of theirs, `[BEST TIMES] RACE_RECORD_E8_L0=316400` with no `TIME_CHECK_COUNT_E8_L0`, `[Portraits] 7=PLAYER_7`, and a key the disc's copy lacks, `[GFX OPTIONS] OVERLAYELEMENTS = 15`. The menu writes the race keys before every race and the race writes the results, so a player does not see them. `FUN_00449b30` reads `OVERLAYELEMENTS`, and the mask counts only in the debug view of `CM_KEYB_5` ([`research/hud-overlay.md`](research/hud-overlay.md)). The port keeps this file unchanged, as it is in the installation. Checks that start a race without the menu pin the race keys with `pinRace` in `source/host/race-setup.js`.

**How the conflicts are settled.** The brief names both inputs and asks not to combine conflicting versions silently. The installation wins: it is what ran, disc plus the two official updates, and every race file in `public/assets/game` is byte-identical to the current installation (140 files, by SHA-256). Nothing from the disc's 9 versions is used, and no file is a mix.

**What rests on which version.** Everything measured against the original is against disc data: `tools/reference-wine/prepare.sh` copies `original/install`, without the updates, on etappe 0, car 0. For that case the data is the same: of `car_cfg.ini` only car 7's rows and new wheel rows differ, of `vdyns.dat` only record 7, of `damage.ini` only truck rows, and the port's half pins `game.ini`'s race keys to the snapshot's values. The original has not been run with the updates.

### Authority for the port

| Item | Authority |
|---|---|
| Race code | `original/install/spel.dat`, SHA-256 `ccd1b03472b25c8b7acacf4ba7e6abf60f657dfff2efd90f29e740b03f62286b`, same bytes as `original/disc/Data/spel.dat`. `public/game/spel.meta.json` records the hash. Three byte patches at build, all from `A2-Racer-4-Fixes`: `0x004CD478` (part 7, no CD), `0x00416004` and `0x00428991` (part 9 `traffic_mass`, as a host cell). Nothing else from the owner's patched executable is in the code |
| Race data | The installation with its updates, unchanged: `original/install/*` with `original/updates/installed/*` laid over it, through `prepare_race` in `tools/prepare-assets.py` (`RACE_SKIP` and `RACE_SKIP_EXT` leave out programs, video, wav, the menu archive; `trkuinst.ini` too) |
| Race loading screen | `public/assets/loading/eNN.png`: `eNN_w_hi.tga` from `extracted/game-archives/rcs`, the `raser.ini [wait_hi]` pictures, by `prepare_loading`. Bar frames `bar-00.png` to `bar-10.png`: `ovl_pNN.d3d` and `overlay.tga` from the same folder, `OVL_PROGRESS_BAR` in `original/install/gen_anim.ini`, rendered by `prepare_loading_bar` |
| Menu behaviour | `original/install/menu.exe` 1.0.0.59, through its decompile. Hand port |
| Menu art and sound | `extracted/game-archives/menurcs`, from `original/install/menurcs.img`, same bytes as the disc |
| Error dialog icon | `imgError` in the `TFRMEXCEPTION2` form of `menu.exe`, `prepare_error_icon` |
| Video | `original/install/intro1.mpg`, `ch00..ch04.avi`, to H.264 MP4 by `prepare_media` |
| Help character | `original/disc/Data/MenuData/Hunny.acs`, the one file taken from the disc tree. Same hash as the installed copy |
| Help text | `original/install/menu.hlp`: text, hotspots and keywords, by `prepare_help`. Its 43 pictures are left out |
| Touch art | Not from the game. `source/assets/touch/`: `steering-wheel.svg` and `brake-pedal.svg` from the RedCat SuperKarts project, hashes in the asset map, with `ATTRIBUTION.md` and `CC0-1.0.txt` |

Output-to-source mapping: `public/assets/asset-map.json`, 733 entries, the six MP4s of the Video row above among them.

The owner's patch notes are used as analysis evidence. The port does not take files from that patch. Where it makes the same decision (for example Hor+, no colour-key fringe, the traffic push), `docs/intentional-differences.md` records it as a port change.

## c. Configuration, registry, saves, disc

### Configuration files

| File | Written by | Read by | Crossing between programs |
|---|---|---|---|
| `menu.ini` | `menu.exe` on every exit (`M:0x48f168`) | `menu.exe`; launcher for `[General] ExitCode` | `PREVSTATE`, `EXITCODE`, `CURRENTPLAYER`, `[HIGHSCORES]`; shipped `EXITCODE=255`, `CURRENTPLAYER=-1`, `INTROAVI=DATA\INTRO1.MPG` |
| `game.ini` | `menu.exe` before a race (`M:0x48c3f0`); `spel.dat` at init (`finished=0`) and at exit; overwritten once by the car update | Both | Race setup down: `[INPUT]`, `[ETAPPE]`, `[OPTIONS]`, `[LEAGUE]`, `[PLAYER]`, `[GFX OPTIONS]`. Results up: `[PLAYER] finished, lap_%d_time, tracktime, money, turbo_amount, out_of_time, total_loss`, `[RACERS]`, `[BEST TIMES]`, `available_texture_memory` |
| `raser.ini` | `menu.exe` (`M:0x48ba20`); `spel.dat` for `[MUSIC] LAST` | Both | `[PROGRAM] RESOLUTION, focus`, `[SOUND]` volumes, `[directx]`. Shipped `DEBUGON=0`, `TWEAK_MODE=0`, `WINDOWED=0`, `FOCUS=1`, `RESOLUTION=3` |
| `static.ini`, `menucaps.ini`, `agent.ini`, `L0_anim.ini` | Never | `menu.exe` | Tracks, characters, defaults, captions |
| `debug.ini` | `setdebug.exe` | `menu.exe` (`M:0x47f6e8`) | `[general] debug`. Observed: logs were written even with `debug=0` |
| `language.ini`, `intel.ini`, `car_cfg.ini`, `cops.ini`, `behavior.ini`, `traffic.ini`, `opponent.ini`, `damage.ini`, `car_snd.ini`, `anmtypes.ini`, `sound.ini`, `communi.ini`, `overlay*.ini`, `gen_anim.ini`, `e*_anim.ini`, `L*_anim.ini`, `etappe*.ini` | Never | `spel.dat` | |

Full key tables: `docs/research/startup-flow.md` sections 3 and 4. This is how the selected vehicle, track, mode, difficulty and settings pass between the programs.

In the port all of these are the same names and formats in the virtual file system (`source/host/vfs.js`), and written files persist in IndexedDB database `a2racer4`, store `files` (`source/host/persist.js`). Three port details:

- The race's answer to `available_texture_memory` is always 16,777,216, the host's choice.
- `RaceRunner.chooseDevice` may set `[INPUT] DEVICE` to 2 for a race on a touch screen or with a pad connected, without persisting it.
- `debug.ini` is not read.

Port-only settings are in `localStorage` key `a2racer4.settings` (`source/settings.js`): resolution, render scale, volume, frame counter, full screen, touch mode, gamepad deadzone. They are per browser.

### Registry

The game reads none of it. `spel.dat` and `A2Racer4.exe` have no registry imports. `menu.exe` only touches Delphi locale and keyboard keys and the `.html` open command. `Software\Davilex` occurs in no game module. The port uses no registry.

Written by the installer, seen under `Wow6432Node` in the prefix (`original/wine-prefix-external/registry/system.reg.excerpt.txt`):

| Key | Values |
|---|---|
| `Software\Davilex\A2 Racer 4` | `CurrentVersion=1` |
| `...\1` | `CurrentLanguage=NL` |
| `...\1\NL` | `MAINDIR`, `ProgramFile`, `ProgramLog`, `HelpFile`, `InstallLog`, `ReleaseVersion=1.01`, `ReleaseDate=20002212`, `SetupPath=T:`, `UninstallKey`, `Autorun=No`, `URL*` on `www.davilex.nl` |
| `...\1\TechInfo` | Report flags, inferred for `SERVICE.EXE` |
| `Software\Davilex\Shared\Service...` | `ReleaseVersion=1.0.6.0` and more |
| `Microsoft\Windows\CurrentVersion\App Paths\A2Racer4.exe`, `...\Uninstall\A2 Racer 4` | Standard |
| `Software\Borland\Locales` (user) | Written for `SERVICE.EXE` |
| `...\Uninstall\A2 Racer 4 track update` | Written by the track update, from `INSTTRCK.LOG` |

### Saves and logs

| Item | Original | Port |
|---|---|---|
| Player save | `<dir>SaveGame<N>.RCR`, N lowest free number; 227 bytes computed from the writers, no sample exists | Same name and format in the virtual file system. check-flow found the file present after a race |
| Backup | `SaveGame<N>.BAK` made by the player dialog | Kept in memory for the time of the dialog (`GameData.beginPlayerDialog` in `source/menu/data.js`) |
| Current player, last mode, records | `menu.ini` | Same. `GameData.saveProgress` also saves at moments the original had no reason to, because a closed tab has no `DataDestroy` |
| Race result | `game.ini` | Same |
| Menu logs | `MenuTrac.log`, `menu.log` | None, on purpose: support logs, no effect on the player |
| Race log | `debug.txt` when `DEBUGON=1` and on fatal errors | Same, in the virtual file system |

### Disc dependencies

| Who | Check | Without a disc | Port |
|---|---|---|---|
| `menu.exe` `M:0x4a5c24`, `M:0x4a5d4c` | `<drive>:\DATA\INTRO1.MPG` on `c:` to `z:` | Dialog `CD niet gevonden`, observed. OK continues with no second check, Annuleren exits | Skipped, `startUp` in `source/menu/flow.js`. `TfrmCDRequest` is never shown |
| `spel.dat` `FUN_004cd3b0`, from `FUN_00447be0` | `X:\DATA\rcs.img` on each `DRIVE_CDROM` drive, unless environment `NOCD` is set | Fatal `A2 Racer CD-ROM niet gevonden.` (static; not observed). With `NOCD` set the run goes on, as the reference runs show | Byte patch at `0x004CD478` turns the fatal into a return |
| `spel.dat` `FUN_004cd4a0` | Looks in the current directory first, then `<drive>:\DATA\` | Nothing, because the install holds all race files | Same code, the folder always has them |
| `menu.exe` intro | Installed copy first (`M:0x4a50d0`) | Plays from the install | Video comes with the page |

Data needs nothing from the disc once installed, except that the two checks above need to pass. Basis: comparing names and hashes, and the lookup order. The owner's notes report that the CD removal ran through a race start under Wine (`README.md`, Notes, v1.2.0).

## d. Reference environment

### Observation runs in the decompile package

Two runs on 2026-10-30, `dynamic/run_observation.sh`, results in `dynamic/RESULTS.md`:

| Item | Value |
|---|---|
| Wine | 11.20 (Staging), `WINEARCH=win64`, throwaway prefix under `dynamic/.work`, deleted after each run. `~/.wine` not used |
| Display | Xvfb `:97`, 1024x768x16, no real display, screenshots by `import` at 15, 35 and 60 s |
| Graphics | Wine's own: `DDraw.dll`, `wined3d.dll`, `opengl32.dll`, as `dlls_loaded.txt` shows. No DXVK, D7VK or dgVoodoo |
| Sound | Wine's `DSound.dll`, `mmdevapi.dll`, with no real output device established |
| Video | `mciqtz32.dll`, `quartz.dll`, `winegstreamer.dll` |
| Game copy | `original/install` copied into the prefix at `C:\A2R4`, so originals stayed unchanged |
| Overrides | `WINEDLLOVERRIDES="mscoree,mshtml="`; trace `-all,+process,+loaddll,+file`; memory limit 3 GB |
| Input | None. No tool could click through the menu |
| Duration | 75 s each |

Observed:

- `A2Racer4.exe` started `.\menu.exe` with command line `menu.exe /FirstTime`.
- `menu.exe` opened `menu.ini`, `MenuCaps.ini`, `debug.ini`, `game.ini`, `raser.ini`, `MenuRcs.IND`, `MenuRcs.IMG`, `menumsc.wav`, `static.ini`, `L0_ANIM.INI`, and wrote `menu.log`, `MenuTrac.log`.
- Without a drive holding the intro, it stopped at its own dialog `CD niet gevonden`.
- With a copy of `intro1.mpg` at `DATA\INTRO1.MPG` on a mapped `D:`, no dialog; the intro video was playing at 60 s.

Not observed in these two runs: `spel.dat`, which the reference runs below do run; `/Default`; `setdebug.exe`; anything on Windows or with a real disc.

### Reference runs of the race program

`tools/reference-wine/`, 2026-10-31. The original `spel.dat` ran under Wine on etappe 0, car 0, with `game.ini` and `raser.ini` of the disc version (the snapshot `original/install`, no updates), and its memory was read per tick. So `spel.dat` has been observed running: loading, countdown, driving, opponents. Report and raw samples: [`evidence/reference-wine/results.md`](../evidence/reference-wine/results.md). Commands: [`tools/reference-wine/README.md`](../tools/reference-wine/README.md). Results against the port: [validation.md](validation.md).

| Item | Value |
|---|---|
| Wine | 11.20 (Staging), Fedora package `wine-core-11.20-1.fc44`, WoW64 build: 32-bit PE on 64-bit Unix libraries. Throwaway prefix; `~/.wine` and the originals are only read |
| Game copy | `spel.exe`, a byte-identical copy of `spel.dat`, SHA-256 `ccd1b034...`, started directly: `wine explorer /desktop=a2,1024x768 spel.exe`. No launcher, no menu, no byte patch |
| Display | Xvfb 21.1.25 on a private display, 1024x768x24, no window manager. The game draws in the top left 640x480 |
| Graphics | Wine's wined3d on `llvmpipe (LLVM 22.1.8, 256 bits)`, Mesa 26.2.5, OpenGL 4.6. Mode the game ended up in: 640x480x16, hardware 3D flag `0x6fb8d0` = 1, visible chunks 25 |
| Video memory | `HKCU\Software\Wine\Direct3D\VideoMemorySize` = 32, because the texture probe overflows above about 128 MB |
| Disc | `NOCD=C`: `FUN_004cd3b0` reads it with `getenv` and returns before the CD search |
| Clock | A time namespace (`unshare --time`) starts the clocks near 10 s, so the game's float `time` has steps of 1 to 2 µs. `host60-*` and `free-host-*` keep the host's clock: `time` read 110864 s at 31 h uptime, steps of 7.8 ms |
| Tick limit | External: `SIGSTOP` and `SIGCONT` from the sampler, game bytes unchanged. 60 ticks per second in the comparison, also 30, 120 and 240. `free-*` runs have none: 317 to 393 ticks per second |
| Sound | `Drivers\Audio` = `alsa`, with `ALSA_CONFIG_PATH` to a file with only a null device. The game's sound code ran; nothing was audible |
| Input | XTEST keys, X focus set with `XSetInputFocus` |
| Sampler | Python on the host, `/proc/<pid>/mem`, one sample per tick |
| End of a run | `wineserver -k`, so the end-of-race writes to `game.ini` did not happen |

Still not observed in this project: `menu.exe /Default`; the launcher through a whole cycle, from the menu into a race and back; the menu past the intro; a race to its end and the write-back; `setdebug.exe`; steering, turbo, damage, collisions and traffic measured in the original; anything on real Windows hardware of the period, real vsync, a real sound device or a real disc. Windows 98 and the Ramp device have run on an emulated machine, below.

Pictures, not to be mixed up. The owner's screenshot used by reference-frame is of his patched game, at 1024x768. `evidence/reference-wine/shot60-*.png` are the unpatched game, at 640x480. `port-640-*.png` are the port at the same moments, and `side-*.png` set the two next to each other.

### Reference runs of the 8-bit path

Wine cannot run `RESOLUTION` 0 and 1: `d3d_device_init: Failed to set render target`, for the 8-bit target of `IDirect3DRampDevice`. So `tools/reference-86box/`, 2026-11-01, runs them on a throwaway copy of the owner's 86Box machine. Findings: [research/render-8bit.md](research/render-8bit.md). Frames and numbers: [`evidence/reference-86box/results.md`](../evidence/reference-86box/results.md). Commands: [`tools/reference-86box/README.md`](../tools/reference-86box/README.md).

| Item | Value |
|---|---|
| Emulator | 86Box 6.0, Flatpak `net._86box._86Box`, under a private Xvfb, no network, no sound device, software presenting |
| Machine, the owner's | AOpen AX59 Pro (`ax59pro`), Pentium MMX 266, 128 MB, Voodoo3 3000 AGP, ES1373. For smoke also an AMD K6-2 550, by a setting of the copy, since the game's gate needs 12 FPS |
| System on the copy | Windows 98 SE as installed by the owner, DirectX 9: `DDRAW.DLL` 399872 bytes of 2004, `D3DRAMP.DLL` 590096 bytes of 1999-09-09, the same size and date as in the disc's `DXSetup/DirectX.cab`. Rasteriser for this path: Ramp, in software on the emulated CPU |
| Source of the copy | `/mnt/4TB_NVME/86Box VMs/Windows 98/Windows 98.img`, SHA-256 equal to the copy's before the game went on it; settings from the Flatpak's machine folder. Both only read |
| Game copy | `original/install`, disc 1.01 without updates, `SPEL.EXE` the same bytes as `spel.dat`, started by a batch file in the StartUp folder with `NOCD=C`. Etappe 0, car 0, shipped INI files with `RESOLUTION` set |
| Observation | Screenshots of the X window, the guest's picture at its own pixels: no memory read, no tick control |
| Limit | One emulated machine, and its CPU and card are emulated. Screen frames only. The game ran at its own rate there, so timing cannot be compared |

One thing outside the throwaway copy changed: the first two starts ran before 86Box was given `-O`, so they rewrote `~/.var/app/net._86box._86Box/config/86Box/86box_global.cfg`, a file holding only the default `vmm_path`, and Flatpak left cache marker files beside it. Later starts use a private global file.

### What the checks on the final build compare with

The checks in [validation.md](validation.md) run the port: headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan, or Node with no renderer. Three of them touch the real game:

| Check | Compared with | Limit |
|---|---|---|
| reference-wine | The original `spel.dat` under Wine, as above, with the same key scripts on the port | Rate behaviour, first `dt` values, countdown durations, acceleration and plateau by movement state, reverse limit and curve, brake, gear index timing, car height, racers' path over 30 s, that the launch regimes exist, and three frames at 4:3 by eye and mean colour. Not steering, turbo, damage, collisions, race end, traffic, Windows, period hardware, real vsync |
| reference-frame | `A2-Racer-4-Fixes/releases/test-v1.3.0/screenshots/4_4x3_1024x768.png`, first race frame, by eye | That screenshot is of the owner's patched game (patch test build v1.3.0) at 1024x768 under Wine, not of unpatched 1.01 at 640x480. `evidence/reference-wine/side-*.png` set the port next to the unpatched game at 640x480, also by eye. Neither is a pixel comparison |
| check-traffic | The owner's table of traffic nose rise, for the original under Wine and for his patched game | The owner's numbers. Neither this check nor the reference runs repeat them under Wine: a car waiting at the start sees 0 or 1 traffic starts in 31 s. The highest values agree within 0.03; the means are over more starts of more kinds than the owner's, so they are not comparable |

### What the owner's patch notes add

`README.md` and `README_technical_spel.dat.md` of `A2-Racer-4-Fixes` describe runs of `spel.dat`. All are of the patched game, by the owner.

| Run | Environment |
|---|---|
| Before v1.1.1 | Fedora Linux 44, Wine with DXVK and dgVoodoo in tandem |
| v1.0.4 crash fix | Fedora 44, plain Wine 11.19, D7VK v2.4, dgVoodoo 2.80 with `VRAM = 256` |
| v1.1.1 | Windows 10 64-bit, Radeon 760M; Windows 7 32-bit, Mobility Radeon HD 5750 |
| v1.2.0, v1.3.0 | In game on the Radeon 760M under Windows 10; Wine with software rendering |
| v1.4.0 measurements | Wine 11.20, software rendering, 640x480, 15 to about 440 FPS, faked uptime |

### Game behaviour against compatibility problems

| Observation | Reading | Basis |
|---|---|---|
| Black screen or crash at race start with a modern card | Compatibility problem caused by a game bug: the memory probe overruns a 1,024-entry stack array above about 128 MB. Period cards never reached it | `FUN_004bc0f0`, patch part 4 |
| Black fringes around objects and HUD | Driver-dependent: on a Radeon 760M under Windows 10, not on a Mobility Radeon HD 5750 under Windows 7. Not game behaviour to preserve | Patch part 6 |
| Z flicker on close surfaces | Game design: 16-bit Z with near 10 and far 12500. Present on period hardware by the numbers, so it is game behaviour the port deliberately removes | Patch part 8, `docs/intentional-differences.md` |
| World slowing or stopping at long uptimes | Compatibility: `FUN_004a6700` keeps seconds since boot in a float. Short uptimes of the period hid it. Measured under Wine at 31 h uptime: steps of 7.8 ms, `dt` 0.0141 to 0.0201 at 60 ticks against 0.0160 to 0.0173 on a clean clock | Patch part 9, `evidence/reference-wine/results.md` |
| Handling and traffic that change with frame rate | Game behaviour of the code, made visible by rates above those of the period. The rate on period hardware is unknown. Measured for the gas pedal under Xvfb: at 317 to 393 ticks per second it hardly rises on a clean clock | Patch part 9, `docs/research/sim-timing.md`, `evidence/reference-wine/results.md` |
| CD dialog under Wine | Game behaviour: no drive held the file | `dynamic/RESULTS.md` |
| `menu.log`, `MenuTrac.log` written with `debug=0` | Seen under Wine only. Whether it is the same on Windows is not established | `dynamic/RESULTS.md` |
| `DirectX: Could not install, error -1.` | Compatibility: the installer's DirectX step under Wine, so the disc's DirectX was never installed | `INSTALL.LOG` |
| Race music off below 17,000,000 bytes of memory | Game behaviour, no effect on anything recent | `FUN_00450de0` |

### Not established

- Behaviour on period hardware or on any Windows of the period, including the frame rate, the driver answers to `GetCaps` and the texture memory probe.
- What x87 precision control `01b` does on a real CPU in this code (`FUN_004aa0c0`), and so the mantissa physics ran with. Results of the port cannot be bit-equal to a native run. Under Wine the control word was not read.
- Whether the physical disc held audio tracks, further sessions or any protection. The image is one 2048-byte-per-sector data track without room for that. `A2Racer4.icd` next to `A2Racer4.exe` and the multi-language debugger and CD messages in `Data/default.txt` look like a disc-protection wrapper from that period. That is general knowledge of such schemes and nothing in these files proves it; no wrapper file is on this image.
- `.icd`: whether any program ever used it.
- `SaveGame*.RCR` as computed: no sample exists.
- What `menu.exe /Default` does at run time in the original. The port implements it from static reading.
- The original with the updates. The port's run of track 9 and car 7 has nothing to be set against.
- The launcher through a whole cycle. The first Wine runs stop at the intro, and the reference runs start `spel.exe` directly.
