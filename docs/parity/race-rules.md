# Race rules and content: parity

Implementation and verification status of the race's rules and content: tracks and their files, race kinds, states, timers, triggers, laps, positions, game over, money, pause and reset, opponents, difficulty, traffic, police, roadblocks, Supercop, damage, pickups, track objects, path objects, effects and cars. Part of [`../feature-parity.md`](../feature-parity.md). Behaviour and evidence: [`../behavior/race-rules.md`](../behavior/race-rules.md).

**Implemented.** `yes (recompiled)`: it runs in `spel.wasm`, the recompiled `spel.dat`, and the Notes name what the host or the data supplies. `yes (host)`: JavaScript in `source/` does it. `yes (menu port)`: the hand-written menu in `source/menu/` does it. `partial`: the Notes say what differs. `no`: the Notes say why. `n/a`: the original ships it, but nothing can reach it or no code uses it; the evidence column says why.

**Verified.** Only the checks in [`../validation.md`](../validation.md) count, and each covers only what the Notes say. A row with no such check says `not verified`, also when the feature ran in a check without being asserted.

- `compared with the original: reference-wine`: `tools/reference-wine/`, `evidence/reference-wine/results.md`. The original `spel.dat`, unchanged, under Wine 11.20 Staging with Xvfb and llvmpipe, on etappe 0, car 0, held to 60 ticks per second from outside the process on a clean clock, memory read per tick, 22 launches, with the same key scripts on the port. Its install has no updates (`tools/reference-wine/prepare.sh` copies `original/install`), which for etappe 0, car 0 is the same data. It covers what the Notes say, in that one setup: not Windows, period hardware or real vsync. A row with a comparison names it first, then any other check that covers it.
- `compared with the original: reference-86box`: `tools/reference-86box/`, `docs/research/render-8bit.md`, `evidence/reference-86box/results.md`. The original `spel.dat` at `RESOLUTION` 0 and 1 on a throwaway copy of the owner's 86Box Windows 98 machine, disc 1.01 data, etappe 0, car 0, screenshots of the guest against the port's frames. It covers what the Notes say: pictures on an emulated machine, not a real one, and no rule of the race.
- `checked on Amsterdam: <check>`: that tool, on etappe 0, in headless Chromium 145 or in Node. No real phone, real gamepad or other browser engine, and sound by state only. `check-software` is `tools/check-software.mjs`, the 8-bit path through the real menu, 17 of 17, by name in `evidence/software/flow/summary.json`.
- `boot only: boot-all`: the track or car loaded and ran 120 ticks in Node with no renderer (`tools/build-race-lists.mjs`). Those ticks end inside the countdown, with the player not moving, so this says nothing about play.
- `form check`: the per-form browser check of the menu, with a faked `game.ini` where the Notes say so.
- `fix check: <what>`: a one-off script run once when a fix was made, not kept in `tools/`. It counts only for what it says.
- `fix check: launch through the menu, 6 s of gas, 0 console errors`: the one check of track 9 and car 7 past boot-all, run once on the final build when the updates came in. Headless Chromium, the real menu, Quick Race position 9 and character position 7. `game.ini` ended up with etappe 9, british 1, car 7, and a race ran on the keyboard device: 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. By eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else: no lap, no race end, no sound, no comparison with the original. The original has not been run with the updates.

E0..E9 are `etappe0..9`. E9 came with the track update, and a row that lists etappes covers E0..E8 unless it names E9: E9's waypoint triggers, paths and most object types are not counted in this file. `GS` is `docs/research/gameplay-systems.md`, `GC` is `docs/research/game-content.md`.

## Tracks

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Track 0 Amsterdam, Stadsrace, 2 laps, 363 chunks | `static.ini [TRACK0]`, `raser.ini [MAPS] 0`, `etappe0.pmp`; GC 1.1, 1.3 | yes (recompiled) | checked on Amsterdam: check-flow | Files unchanged in `public/assets/game`. `source/host/game-files.js` loads them |
| Track 1 Rotterdam, Stadsachtervolging, 2 laps, 507 chunks | `[TRACK1]`, `[MAPS] 1`; GC 1.1 | yes (recompiled) | boot only: boot-all | Chase. Quick Race needs Tour progress: `quickTrackAvailable` in `source/menu/data.js` |
| Track 2 Scheveningen, Kustrace, 2 laps, 400 chunks | `[TRACK2]`, `[MAPS] 2` | yes (recompiled) | boot only: boot-all | |
| Track 3 Wenen, Stadsachtervolging, 2 laps, 645 chunks | `[TRACK3]`, `[MAPS] 3` | yes (recompiled) | boot only: boot-all | Chase |
| Track 4 Berlijn, Stadsachtervolging, 2 laps, 634 chunks | `[TRACK4]`, `[MAPS] 4` | yes (recompiled) | boot only: boot-all | Chase, Tour final |
| Track 5 Hamburg, Havenrace, 2 laps, 326 chunks | `[TRACK5]`, `[MAPS] 5` | yes (recompiled) | boot only: boot-all | No cops, no flitsers |
| Track 6 Frankfurt, Vliegveldrace, 2 laps, 334 chunks | `[TRACK6]`, `[MAPS] 6` | yes (recompiled) | boot only: boot-all | No cops, no flitsers. Own traffic set VEHICLE13..17 |
| Track 7 BodenSee, Drielandenrace, 2 laps, 477 chunks | `[TRACK7]`, `[MAPS] 7` | yes (recompiled) | boot only: boot-all | No cops |
| Track 8 Munchen - Wenen, Snelwegrace, 1 lap, 607 chunks | `[TRACK8]`, `[MAPS] 8`, arg0=0 | yes (recompiled) | boot only: boot-all | Highway mode |
| Track 9 Download-race, on screen Country etappe, Country-race, 2 laps, 401 chunks | `[TRACK9]`, `[MAPS] 9`, `etappe9.pmp`, since the track update; disc 1.01 without updates: no `etappe9.*`; `M:0x461a4c`; GC 1.4 | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | City, normal mode, `BRITISH=1`. Not in the Tour, Quick Race position 9. Opens by the original's own rule, all seven `etappe9.*` files exist: `GameData.trackFilesExist`, `quickTrackAvailable` in `source/menu/data.js`, no change of code. Without those files the same code shows `lblLocked` in `source/menu/forms/group-main.js` |
| `[MAPS]` rows 10, 11 | `raser.ini`; no `static.ini` entry, no files; GC 1.1 | n/a | not verified | Kept in the unchanged `raser.ini` |
| No per-track music, weather, reverse or mirrored track | GC 1.1, 1.2, 3.3 | n/a | not verified | Arg 9 of `[MAPS]` has no reader |

## Track data per etappe

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| E0 data: `.cmp .dmp .ini .omp .pmp .pth .rmp`, `e00_anim.ini`, `skybox00`, `sky00`, `skyref02`, 4 track textures, ambient 50 | `0x4ae490`, `game-data.md`; GC 1.2 | yes (recompiled) | checked on Amsterdam: check-flow | First frame also: reference-frame |
| E1 data, same set, `skybox01`, `sky01`, `skyref01`, ambient 70 | Same | yes (recompiled) | boot only: boot-all | |
| E2 data, `skybox02`, `sky02`, `skyref02`, ambient 128 | Same | yes (recompiled) | boot only: boot-all | |
| E3 data, `skybox03`, `sky03`, `skyref02`, ambient 128 | Same | yes (recompiled) | boot only: boot-all | |
| E4 data, `skybox04`, `sky04`, `skyref02`, ambient 70 | Same | yes (recompiled) | boot only: boot-all | |
| E5 data, `skybox05`, `sky05`, `skyref05`, ambient 70 | Same | yes (recompiled) | boot only: boot-all | `etappe5.pth` is empty, 8 bytes |
| E6 data, `skybox06`, `sky06`, `skyref06`, ambient 70 | Same | yes (recompiled) | boot only: boot-all | 136 and 224 trailing bytes in `.omp`, `.pth` the loaders never read |
| E7 data, `skybox07`, `sky07`, `skyref02`, ambient 70 | Same | yes (recompiled) | boot only: boot-all | |
| E8 data, `skybox08`, `sky08`, `skyref08`, ambient 60 | Same | yes (recompiled) | boot only: boot-all | |
| E9 data, since the track update: `.cmp .dmp .ini .omp .pmp .pth .rmp`; `e09_anim.ini`; 4 track textures `e09_weg`, `e09_gras`, `e09_gra2`, `e09_vang`; ambient 66 | Same; `original/updates/installed/`, `[MAPS] 9` | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | `.omp` 778 objects, `etappe9.pth` 480 bytes. The art was on the disc all along, in `rcs.img`, `rc.img`, `menurcs.img`; only the data files were missing. `traffic.ini [Traffic Track 9]`, `behavior.ini [Track 9 Behaviors]` exist. `cops.ini` has no track 9 section, it ends at 8; boot-all and the launch check ran with no message on that |
| Copies of all race files identical to the install | `original/install` with `original/updates/installed/` over it | yes (host) | not verified | Compared by SHA-256 against the current install: 140 race files, none differs. A static comparison, not a listed check. `tools/prepare-assets.py prepare_race`, `UPDATES` overlay: updates win, case-insensitive, stale files removed |
| Wait screen per track, `e0N_w_hi` with progress bar | `raser.ini [wait_hi]`, `0x4415e0`, `0x4976d0`; `hud-overlay.md` | partial | fix check: frames 0 to 10 on a contact sheet, rectangle measured at 308.5, 438, 288x24 | Same picture and bar art at the game's rectangle, shown by `RaceRunner.load` in `source/race-runner.js`, because the race boots in one blocking call and `blitToScreen` draws no wait picture. On purpose: the bar follows the download, then stands on its last frame during boot. At `RESOLUTION` 1 and 0 the art is made ahead from `e0N_w_hi.pcx`, `e0N_w_lo.pcx` and `overlay.pcx`: not in this check, and not compared with the guest |
| Archive members of a race listed before boot | `tools/build-race-lists.mjs`, `public/assets/game/race-files.json` | yes (host) | boot only: boot-all | Port mechanism, `GameFiles.prepareRace`. Regenerated with 10 etappes and 8 cars. Common 9,183,473 bytes, per etappe 3,492,470 to 6,856,001, per car 175,302 to 1,031,108 |
| `rc.img` image count, read at every boot | `0x4cc580` | yes (host) | fix check: 0 misses in `rc.img` on etappe 0; with the earlier lists 1 miss | First `rc.img` range in `race-files.json` starts at byte 0 |
| Sounds a race loads later | `0x4c7880` on first play; `audio.md` | yes (host) | not verified | `fetchLate` in `source/host/game-files.js`: 400 WAV members, 27,464,773 bytes in pieces of 1 MB, not awaited. A sound that arrived does not cost a synchronous read. Late reads themselves were not asserted |
| A read past the lists | Port mechanism; `0x55fb61`, `0x558b35` | yes (host) | fix check: music list stripped on Amsterdam, 1 synchronous request of 2,755,556 bytes, the member's bytes correct | `SparseFile.read` fetches every gap. It freezes the page until the request returns, which was not measured, and it should not happen in normal play |
| Bytes past the end of a member stay 0 | `0x55a5de`, `0x440950`, `0x458730` | yes (host) | fix check: etappe 0, car 0, up to 300 ticks, memory equal to a full-archive run except inside the `rcs.img` stream buffer | On purpose. The game never looks at them |
| Race music, one whole WAV, round robin by `[MUSIC] LAST` | `0x44ad40`, `0x450de0`; `audio.md` 9 | yes (recompiled) | fix check: `LAST` -5, 0..5, 99 headless on etappe 0, the predicted track loaded, 0 samples differ from the member | Host: `raceMusic` and `prepareRace` fetch the track before boot; `LAST` persists through `source/host/persist.js`. State only, nobody has listened |
| Six music tracks: `M_DISCO1`, `M_MOBIE1`, `M_EIGHTY1`, `M_FUNKY1`, `M_MOBIE2`, `M_REVENGE1` | `raser.ini [MUSIC]`, `sound.ini` | yes (recompiled) | fix check: all six by the headless run; in a browser on Amsterdam `LAST` 0, 3, 5, each with the FNV hash of its member | Own range per track in the `music` list of `race-files.json`, 1,512,516 to 2,755,556 bytes |

## Race kinds and switches

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Stadsrace: arg0=1, arg14=0, player + 4 AI | `raser.ini [MAPS]`; GC 3.3; GS 21 | yes (recompiled) | checked on Amsterdam: check-flow | |
| Chase mode, stadsachtervolging: arg14=1, no AI, timer enforced | `0x44c8c0`, `0x457da0`; GS 21 | yes (recompiled) | boot only: boot-all | Menu writes `OPPONENTS=0`, `CHECKPOINT_SPEED`: `writeGeneralStuff` in `source/menu/data.js` |
| Chase start time 92, 71, 62 s by difficulty | `static.ini [CHECKPOINTTIME]`, `0x44bf10`, `M:0x48bcf0` | yes (menu port) | not verified | `checkpointTime` in `source/menu/data.js`. Rule itself recompiled |
| Highway mode, snelwegrace: arg0=0, one lap, AI finish at trigger 14 | `0x449e20`, `0x412270`; GS 21 | yes (recompiled) | boot only: boot-all | |
| Highway fatal if start chunk <= position | `0x44e340` | yes (recompiled) | boot only: boot-all | Not hit on E8 |
| `[OPTIONS]` Police=1 Traffic=1 Opponents BonusCountDown=1 Invulnerable=0 | `game.ini`, `0x449230` | yes (recompiled) | boot only: boot-all | Menu writes only `OPPONENTS`; the rest stay shipped |
| `[OPTIONS] NRLAPS`, `[ETAPPE] ETAPPE`, `BRITISH`, `[LEAGUE] LEAGUE`, `[PLAYER] CAR`, `MONEY`, `TURBO_AMOUNT`, tune-ups, `POSITION=4`, `DAMAGE=0` | `M:0x48bcf0`, `M:0x48b5bc`, `M:0x48b7c8`; `startup-flow.md` section 3 | yes (menu port) | checked on Amsterdam: check-flow | Quick Race path only in that check. `writeToInis` in `source/menu/data.js` |
| `game.ini` of the car update, a copy from the developers' machine: `Nrlaps=1`, `etappe=8`, `car=7`, `money=1330`, tune-ups 1, results of a race of theirs | `original/updates/installed/game.ini`; `M:0x48bcf0` | yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors | The menu writes those keys before every race, so a player does not see them: in the check `game.ini` ended up with etappe 9, car 7. Checks that start a race without the menu pin them: `pinRace` in `source/host/race-setup.js`, which also sets `BRITISH` for etappe 9, money 0, tune-ups 0 |
| `raser.ini` keys before a race: `RESOLUTION`, volumes, `[directx]`, `focus` | `M:0x48ba20` | yes (menu port) | checked on Amsterdam: check-flow | `writeRaserStuff` |
| Keys the menu never writes keep shipped values | `startup-flow.md` keys table | yes (host) | checked on Amsterdam: check-flow | INI files kept in full, `IniWriter` in `source/menu/data.js`. Missing keys would be fatal at boot |
| `copland` | `0x44e340`; non-zero fatal, no `COP` row; GC 3.4 | n/a | not verified | Text 47 with it |
| `demo`, `dif_mod`, `stuur_model`, `ai_model`, `traffic_ai_model`, `benzineprijs` | `0x449590`-`0x449af0`; GS 21 | yes (recompiled) | boot only: boot-all | No gameplay branch found; consumers not searched exhaustively |
| `DIRECTION`, `british` | `0x44acb0`, `0x449550`; GS 21; `[TRACK9] BRITISH=1` | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors | `british` is set on track 9 only, reachable since the track update. The check's `game.ini` had british 1 and its screenshot shows driving on the left, by eye; what the flag does stays Inferred. `DIRECTION` is absent on all tracks, so it has not run |
| Tour, Quick Race as INI values | GS 21; GC 3 | yes (menu port) | checked on Amsterdam: check-flow | Quick Race in that check. Tour branches: form check only, see [`startup-menu.md`](startup-menu.md) |

## Game states and actions

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| State 1 pre-race | `0x44cda0`, `0x44cf60`; GS 2 | yes (recompiled) | checked on Amsterdam: check-flow | |
| State 0 racing | GS 2 | yes (recompiled) | checked on Amsterdam: check-flow | |
| State 3 finishing | `0x456b20`; GS 2 | yes (recompiled) | checked on Amsterdam: check-flow, check-race-ui | By the race's own finish in check-flow. check-race-ui enters it through `0x44cda0` |
| State 6 game over | `0x44c8c0`, `0x44c950` | yes (recompiled) | checked on Amsterdam: check-race-ui | Entered through `0x44cda0` with mode 0, not by either cause. The causes are separate rows below |
| State 4 exit | `0x43ad40`, `0x43be50`, `0x44c9f0` | yes (recompiled) | checked on Amsterdam: check-flow, check-race-ui | By the finish in check-flow; by Esc then J, and by the two result screens, in check-race-ui |
| State 8 arrest | `0x409160`, no route; GS 6 | n/a | not verified | |
| Game action 0 flash | `0x43b0b0`, `0x43b130` | yes (host) | fix check: real flitser on the bot's route at tick 20720, fill colour `0xFFFF` | The action is recompiled, the fill reaches the screen through `D3DRenderer.fillScreen`. See the Flitser white frame row. At 8 bits the action writes the palette: see the Flitser flash at 8 bits row |
| Game action 1 countdown | `0x43c380`, `0x43c3d0`, `0x43c510` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-flow | Stage timing: see the Countdown row |
| Game action 2 start | `0x43c5d0` | yes (recompiled) | checked on Amsterdam: check-flow | |
| Game action 4 finish | `0x43ab70`, `0x43ac80`, `0x43ad40` | yes (recompiled) | checked on Amsterdam: check-flow, check-race-ui | |
| Game action 5 colour wash | `0x43b280`; flag `0x6fcdf0` has no non-zero writer | n/a | not verified | |
| Game action 9 | `0x43a450`, trigger 7 not placed | n/a | not verified | |
| Game action 0xB arrest | `0x43a910`, unreachable | n/a | not verified | |
| Game action 0xC game over, orbit camera | `0x43bc20`, `0x43bd60`, `0x43be50` | yes (recompiled) | checked on Amsterdam: check-race-ui | Overlay 6 reached, Enter ended it. The orbit camera and overlay 0xC were not asserted |
| Countdown 2.2, 0.9, 0.9, 0.9 s, digits 3, 2, 1, GO | GS 7 | yes (recompiled) | compared with the original: reference-wine | Overlay states 8, 9, 10, 11 last 0.92, 0.90, 0.92, 1.02 s in the original and 0.92, 0.92, 0.92, 1.02 s in the port. State 1 until 8: 1.957 against 1.950 s. GO at pass 283 against 280 or 281, 282 in two of the 22 launches. Digits not read as such |
| Start camera path, type 1 | `0x4632e0`; no `.pth` has it | n/a | not verified | |
| Main loop order | `0x458270`; `sim-timing.md` C5 | yes (host) | not verified | `Race.tick` in `source/host/race.js`. Runs in check-flow; the order comes from reading the code |
| Capped start: first 3 ticks at dt 0.1 | `sim-timing.md` C1, corrected in the behaviour file | yes (host) | compared with the original: reference-wine | `updateClock` in `source/host/race.js`, `INIT_TO_FIRST_TICK`. `dt` 0.1, 0.1, 0.1, 0.0156, 0.0167 against 0.1, 0.1, 0.1, 0.0158, 0.0185. The time from clock init to the first tick is 8.42 ms on the reference machine; tick 4 would cap only above about 0.68 s at 60 ticks |

## Timers

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Timer 0 lap time | `0x44bf10`, `0x456a30`; GS 3 | yes (recompiled) | checked on Amsterdam: check-flow | `LAP_n_TIME` in `game.ini` |
| Timer 1 traffic light, 5000 ms | `0x4550c0` | yes (recompiled) | not verified | Runs on through a dialog, as in the original. The slot itself was not read |
| Timer 2 fuel station | `0x43c885`, no reference | n/a | not verified | |
| Timer 3 total race time | `0x4504c0`, `0x4504f0` | yes (recompiled) | checked on Amsterdam: check-flow, check-race-ui | `TRACKTIME` 603433 in check-flow. Read directly, and in a pause, in check-race-ui |
| Timers 4, 6 | No reference | n/a | not verified | |
| Timer 5 werklamp blink | `0x4556e0`; no type 6 object placed | n/a | not verified | |
| Timer 7 werkpijlbord blink | `0x4559d0`; no type 8 object placed | n/a | not verified | |
| Timers 8, 9, 10, 12, 13, 14 racer times | `0x42e290`, `0x42e340` | yes (recompiled) | checked on Amsterdam: check-flow | Times in `TfrmResults` |
| Timer 11 checkpoint countdown | `0x44bf10` | yes (recompiled) | not verified | Enforced only on chase tracks, where it has not run. On Amsterdam it ran out without effect: the `out_of_time` row below |
| Timer 15 invulnerable | `0x451640` | yes (recompiled) | not verified | Runs on through a dialog, as in the original, so it can run out in a pause. The slot itself was not read |
| Timer 16 freeze racers | `0x4516d0` | yes (recompiled) | not verified | Same |
| Timer 17 fast forward | `0x451760` | yes (recompiled) | not verified | Same |
| Dialogs pause 0, 3, 11 and racer timers | `0x44ca80`, `0x42e440`, `0x42e4a0` | yes (host) | checked on Amsterdam: check-race-ui | `installPause`, `endPause` in `source/host/race.js`. Slot 3 stood at 434 ms while the clock moved 1 s, then went on to 901 ms. Slots 0, 11 and the racers were not read |
| Every other clock runs on through a dialog | `0x44ca80`; `sim-timing.md` C3 | yes (host) | checked on Amsterdam: check-race-ui | `Race.tick` advances the clock in its pause branch; the clock moved 1 s while slot 3 stood |
| Hidden tab, lost focus, open settings panel stop every clock | `0x458020`; `sim-timing.md` C1 | yes (host) | checked on Amsterdam: check-race-ui | On purpose: in the original wall-clock timers run on while it blocks. `RaceRunner.frame` runs no ticks then |
| Reset lockout 5000 ms, hit lockout 60 ms, scrape 300 ms, smoke 200 ms, turbo 100 ms | `sim-timing.md` C3 | yes (recompiled) | not verified | Host: `GetTickCount` from `VirtualClock`, which also runs on through a dialog |
| Frame-rate independence of the player car | Port requirement, brief section 6 | yes (host) | checked on Amsterdam: repeat-trace | Position and speed once per game second, difference 0 over 71 s, and the checksum over all 485 physics bodies equal at all 71 samples, between three render profiles. Not against the original: see the behaviour file |

## Chunk and waypoint triggers

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Trigger 1 flitser | `0x457880`; E0-E4 4, E7 5, E8 4 | yes (recompiled) | fix check: fired at tick 20720 of a whole bot race on Amsterdam, on fixed seeds, in two runs | Other tracks: boot-all at most |
| Trigger 2 quick service | `0x457c00`; no chunk has it on any track | n/a | not verified | E8 has one waypoint with value 2, read by nobody |
| Trigger 3 | `0x457870` empty, not placed | n/a | not verified | |
| Triggers 4, 5, 6, 8 speed limits | `0x4578f0`-`0x457920`; none in `.pmp` or `.dmp` | n/a | not verified | Limit stays at the default 70: `0x457900` |
| Trigger 7 | `0x457930`, not placed | n/a | not verified | |
| Trigger 9 | `0x457f50`, flag has no reader | yes (recompiled) | boot only: boot-all | E0-E4, E7 |
| Trigger 13 start line | `0x457ab0`; 1 per track | yes (recompiled) | checked on Amsterdam: check-flow | |
| Trigger 14 finish | `0x456b20`; 1 per track | yes (recompiled) | checked on Amsterdam: check-flow | |
| Trigger 15 arm finish | `0x456bf0`; 1 per track | yes (recompiled) | checked on Amsterdam: check-flow | |
| Triggers 16, 17 fog | `0x456d40`, `0x456d90`; not placed | n/a | not verified | |
| Trigger 44 | NULL in table; E8 chunk 1, 8 waypoints | yes (recompiled) | boot only: boot-all | Traffic state 2 reads waypoint value 0x2C: GS 14 |
| Trigger 45 checkpoint | `0x457e40`; E1 4, E3 5, E4 5 | yes (recompiled) | boot only: boot-all | No check has run one. Not on Amsterdam |
| Triggers 48..57 radio location | `0x457960`; only 50 on E4, once | yes (recompiled) | boot only: boot-all | Location samples do not exist |
| Trigger 58 `system_goleft` | `0x456600`; E0, E2, E3, E4, E5, E6, E7 | yes (recompiled) | not verified | Crossed in check-flow on E0; the arrow was not asserted |
| Trigger 59 `system_goright` | `0x4566e0`; E0, E1, E2, E3, E4, E6, E7 | yes (recompiled) | not verified | Same |
| Trigger 60 `system_gofork` | `0x4567c0`; E1, E2, E6, E7 | yes (recompiled) | boot only: boot-all | |
| Trigger 61 `system_gozigzag` | `0x4568a0`; E2, E4, E5, E6, E7, E8 | yes (recompiled) | boot only: boot-all | |
| Trigger 62 `~game_position_0N` | `0x456050`, not placed | n/a | not verified | |
| Trigger 63 `~call_for_backup` | `0x455e90`; E0, E8 | yes (recompiled) | not verified | |
| Trigger 64 `~go_for_it` | `0x455f70`; E0, E3, E8 | yes (recompiled) | not verified | |
| Triggers 65, 66 `~junction_ahead_*` | `0x456390`, `0x456470`, not placed | n/a | not verified | |
| Trigger 67 `~challenge_at_start` | `0x455cc0`; E0, E8 | yes (recompiled) | not verified | |
| Trigger 68 `~challenge_at_finish` | `0x455da0`; E8 | yes (recompiled) | not verified | |
| Waypoint value 10, traffic stops for a red light | `0x414950`; E0 6 waypoints | yes (recompiled) | not verified | E1 has 9 lights and no such waypoint |
| Waypoint value 255 | `etappe3.dmp`, `etappe6.dmp`, one each | yes (recompiled) | not verified | No case in `FUN_00412270`; other readers not traced |

## Laps, checkpoints, finish

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Start chunk from trigger 13 | `0x457ae0`, `0x44c200` | yes (recompiled) | checked on Amsterdam: check-flow | |
| Lap count to `NRLAPS`, forward crossing only | `0x456b20`, `0x456a30`; GS 4 | yes (recompiled) | checked on Amsterdam: check-flow | Bot drove both laps; game wrote `FINISHED=1` |
| Wrong-way crossing disarms the line | `0x456b20` | yes (recompiled) | not verified | |
| Lap record and race record | `0x449ea0`, `0x44ae80` | yes (recompiled) | not verified | Written to `game.ini` in the VFS if finished; no check reads them |
| `LAATSTE RONDE`, text 45 | `0x456a30` | yes (recompiled) | not verified | Only when no lap record was set on that lap |
| Checkpoint rule, mode 1, adds start time, `CHECKPOINT`, text 44 | `0x457da0`, `0x457dd0` | yes (recompiled) | not verified | |
| Checkpoint splits, mode 0 | `0x457d20`; no trigger 45 on mode 0 tracks | n/a | not verified | |
| AI laps and finish | `0x412270` | yes (recompiled) | checked on Amsterdam: check-flow | AI times in results |
| Point-to-point: highway finishes at first trigger 14 | `0x412270`, `0x449e20` | yes (recompiled) | boot only: boot-all | |
| Out of time: mode 1, `TIME_TICK` below 6 s, game over | `0x44c8c0` | yes (recompiled) | not verified | |
| `out_of_time`, `checkpoint_money` on mode 0 tracks | `0x44b1c0`, `0x44bf10`, `0x44c8c0` | yes (recompiled) | checked on Amsterdam: check-flow | Timer 11 ran out and did not end the race: `FINISHED=1` with `Out_Of_Time=1` after 593 s. `checkpoint_money` was not read. A chase value of `CHECKPOINT_SPEED` stays for later races, as in the original |

## Positions and finish table

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Live position, driven chunks with bearing tie | `0x4128a0`; GS 5 | yes (recompiled) | not verified | |
| `~racer%dpassing`, `~racer%dpassed` | `0x4128a0` | yes (recompiled) | not verified | |
| Grid slots | `0x42e0d0`, `0x44aa20` | yes (recompiled) | not verified | Race started in check-flow; the order was not asserted |
| Unfinished racers' time estimate | `0x42e150` | yes (recompiled) | not verified | Not asserted. In an earlier check-flow run the bot finished fourth, and the fifth row, +6:51:71, lay later than the race lasted, so it read as the estimate: Inferred. In the current run all five finished |
| Finish sequence: 1500 ms, overlay 5, Esc, Enter or Space | `0x43ac80` | yes (recompiled) | checked on Amsterdam: check-flow, check-race-ui | A whole race in check-flow. check-race-ui, entered through `0x44cda0`: Verder on touch stands for Space, and a new press of pad A does too. The 1500 ms was not measured |
| End of a race waits for Esc, Enter and Space to be up | `0x43ac80` | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.endWait` keeps the last frame, with a 5 s limit the original does not have. A held key does not act in the menu until released |
| In-race finish table with blink, `STRING_FINISH_POS_n` | `0x4940e0`; `hud-overlay.md` | yes (recompiled) | fix check: slide and end positions at 1280x720, 800x360, 360x800, frozen frames looked at | Drawn by `source/render/d3d-renderer.js`. `source/host/hud-layout.js` keeps the slide on non-4:3 shapes. Table contents and blink were not asserted |
| Results written to `game.ini` | `0x44afc0`, `0x44b1c0`, `0x44afe0` | yes (recompiled) | checked on Amsterdam: check-flow, run-bot | |
| `TfrmResults` rank list, 5 rows | `M:0x48003c`; `menu-forms.md` 20 | yes (menu port) | checked on Amsterdam: check-flow | `fillRankResults` in `source/menu/data.js` |

## Game over, penalties, money

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Total loss: damage > 1098, overlay 6 | `0x44c950` | yes (recompiled) | not verified | The cause has not run. The screen: two rows down |
| Time up: overlay 0xC | `0x44c8c0` | yes (recompiled) | not verified | The cause has not run: chase tracks have boot-all at most |
| Game over screen: overlay 6, after 1000 ms Esc, Enter or Space | `0x43bd60`, `0x43be50` | yes (recompiled) | checked on Amsterdam: check-race-ui | Entered through `0x44cda0` with mode 0, Enter after 1.2 s. On touch Verder, on a pad A or Back: `RaceRunner.updateResults`, `GamepadInput.pollRace` |
| Lose screens after a race | `M:0x4a5624`; `game-progression.md` | yes (menu port) | form check | With a faked `game.ini` |
| Arrest, caught 3 times, overlay 7, texts 42, 49, 50 | State 5 has no writer; `0x4043dc`, `0x40452f` no reference; GS 6 | n/a | not verified | |
| Flitser fine -50, text 67, `FLITS` | `0x457880` | yes (recompiled) | not verified | The money change, text and sample were not asserted. The same call registers the white frame, next row |
| Flitser white frame | `0x43b130`, `0x4c4f70`, `Blt` `0x1000400` | yes (host) | fix check: pixels read back per present, forced through `0x43c120`: 1 white present at 60, 30 and 20 Hz stand-ins, 2 to 3 over 13 to 21 ms at a 144 Hz stand-in | `fillScreen`, `drawScreenFill` in `source/render/d3d-renderer.js`, over the view area after the HUD. It lasts one tick, so it is shorter than on a period machine at 25 to 30 FPS. Colour 0 fills are ignored |
| Flitser flash at 8 bits: palette entries 0 to 254 at 235, one flip | `0x43b0b0`, `0x43b130`, `0x43b0f0`; `8bit-drawing.md` section 6 | yes (host) | checked on Amsterdam: check-software | The action is recompiled. `IDirectDrawPalette` and `D3DRenderer.setPalette`, with a queue so each palette a flip showed gets a present. check-software saw the flash in the port's palette at `RESOLUTION` 1, and the palette back after it. Against the original it is read from the code: no frame of the guest caught one |
| Flitspaal +100, text 51, `PAAL_HIT_CAR`, once | `0x451f90` | yes (recompiled) | not verified | |
| Flitspaal clears trigger 1 on the next 20 chunks | `0x452020` | yes (recompiled) | not verified | |
| Money written if finished, clamp 0..999999 | `0x450300`, `0x44b1c0` | yes (recompiled) | checked on Amsterdam: check-flow | `MONEY` in `game.ini`. Its value and the clamp were not asserted |
| Money back into the Tour career | `M:0x4a5624` | yes (menu port) | form check | `fillRaceResultsTour` |
| Radar bonus `0x6fbdec` | No writer; GS 13 | n/a | not verified | Stays 0 |
| Prize table, old fines HUD | `0x4501c0`, `0x43e130`, `0x43e4c0` no reference | n/a | not verified | |
| `FirstPlaceBonus` 2500 | `static.ini`, `M:0x49f010` | yes (menu port) | form check | |

## Pause, quit, reset, restart

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Pause: P, any key resumes | `0x44cf90`, `0x44c990` | yes (host) | checked on Amsterdam: check-race-ui | `pollPause` in `source/host/race.js`. Also: Shift masks keys, a mouse button resumes once released, the picture stays still |
| Quit: Esc, J or Y ends, Esc or N resumes | `0x44c9f0` | yes (host) | checked on Amsterdam: check-race-ui | `finished=0` after J. N resumes. Y and Esc as an answer were not pressed in the check |
| Pause and quit on touch, pad and in full screen | `input.md` H6, H8 | yes (host) | checked on Amsterdam: check-race-ui, check-phone-flow | Port addition. Covered: on-screen Stop and Nee for the mouse in full screen, leaving full screen opens the prompt, a lost pad pauses and A resumes. check-phone-flow: Stop and Ja by tap on a touch profile, `FINISHED=0`. On-screen Pauze and pad Start, Back were not pressed by a check |
| Frame clock reset after a dialog | `0x4a6840` | yes (host) | not verified | Ring ramps back as in the original, by reading. check-race-ui covers the resume only |
| Mixer line 4 mute in a dialog | `0x4ce0d0`, `0x4ce030` | yes (host) | fix check: Volume 40 during a P pause keeps the master gain at 0 and an analyser at RMS 0, above 0 after it | On purpose: master gain, `pauseAll` in `source/audio/game-audio.js`. State only |
| Reset, Enter, keyboard | `0x44d705`, `0x40e5a0` | yes (recompiled) | checked on Amsterdam: check-driving | Car back on the road. The 5000 ms refusal was not tried |
| Reset on touch | Same; `input.md` H6 | yes (host) | checked on Amsterdam: check-race-ui | `#touch-reset` in `source/index.html`, VK 13, DIK 28, with the wheel held. Reads the reset stamp `0x5d1b00`. CDP touch events, no real device |
| Reset on gamepad | Same | yes (host) | checked on Amsterdam: check-race-ui | Left stick click, `EDGE_BUTTONS.reset` in `source/input/gamepad.js`. Reads the reset stamp. A stand-in for `navigator.getGamepads`, no real pad |
| Text 68, hint after 10 s without wheel contact | `0x44cc9f`, `RESETWAITTIME` | yes (recompiled) | not verified | Original text, so it names Enter on touch and pad too. Only forced on screen once, to check layout at 320x568 |
| Text 66 after reset | `0x40e5a0` caller | yes (recompiled) | not verified | |
| Automatic correction, > 0.25 s over the limit | `0x419450`, `0x419600`, `0x407300`, `0x41ed30`, `0x44ea60` | yes (recompiled) | not verified | |
| Restart | None in `spel.dat`; `0x458270` | yes (host) | fix check: three races in a row on one `GameFiles`, in Node, boot and 30 ticks each | A new `Race` per race: `App.startRace` in `source/app.js`, `RaceRunner.load`. No check drives a second race on one page in a browser |
| Cheat Ctrl+Space+I, text 46 | `0x44cf90` | yes (recompiled) | not verified | |
| Cheat Ctrl+Space+T, text 44, highway | `0x44cf90` | partial | not verified | Rule recompiled, but desktop browsers reserve Ctrl+T (`input.md` H8, a browser fact), so it may not reach the game. `navigator.keyboard.lock` is asked for in full screen where it exists, effect not checked. check-race-ui shows only that a synthetic Ctrl+T is passed to the game |

## Opponents, overtaking, routes

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| 4 opponents, first of `RACER_0..4` without the player | `intel.ini`, `0x42de60`; GC 2.2 | yes (recompiled) | checked on Amsterdam: check-flow | Edgar, James, Kat, Barbarally in results |
| AI car speed and RPM scaling by league | `0x429710`; GS 10 | yes (recompiled) | not verified | Ran at league 1 in check-flow; not measured |
| FSM RACING | `0x413000`, `0x419e00` | yes (recompiled) | checked on Amsterdam: check-flow | Reached the finish |
| FSM BREAK_FREE, stuck > 2 s | `0x404c90`, `0x419e80` | yes (recompiled) | not verified | |
| FSM IRRITATING | `0x404f30`, `0x419f70`, `opponent.ini` | yes (recompiled) | not verified | |
| FSM AGGRESSIVE, PUSHING_L/R | `0x41a000`, `0x41a1a0`; no shipped line uses them | n/a | not verified | |
| FSM FINISHED, TOTAL_LOSS | `0x419000`, `0x41a6d0` | yes (recompiled) | checked on Amsterdam: check-flow | FINISHED only |
| FSM PENALTY_BONUS, UNDER_ARREST | Never fires; GS 10 | n/a | not verified | |
| Route slots and overtaking by route choice | `0x418280`, `0x418100`, `0x418710` | yes (recompiled) | not verified | |
| Steering, corner speed, gas and brake rates | `0x403a70`, `0x4038a0`, `0x4037a0` | yes (recompiled) | not verified | |
| Rubber band | `0x403490`, `intel.ini` | yes (recompiled) | not verified | |
| Target position | `0x41a300`, `opponent.ini TARGETPOS` | yes (recompiled) | not verified | |
| Racer collision: damage, `~racer%dcollision` | `0x41a5b0` | yes (recompiled) | not verified | |
| Freeze: racers stop, velocities restored | `0x419600` | yes (recompiled) | not verified | |
| AI collects no pickups | `0x453480` | yes (recompiled) | not verified | |
| AI independent of frame rate | Port requirement | yes (host) | checked on Amsterdam: repeat-trace | Same fixed tick for all cars. The checksum over all 485 physics bodies, AI cars among them, is equal at all 71 samples between three render profiles. Port against port |
| Racers' path length over 30 s after GO | `racers60-*`: 6811 to 6907, 7797 to 7845, 6673 to 6765, 6771 to 6781 world units, with an outlier of 6374 | yes (recompiled) | compared with the original: reference-wine | Port 6904, 7842, 6766, 6750, within 1.8% with that one value left out. No input, shipped opponents, 1196, 1209, 1217, 1230 in both. Speeds after 20 s near 25 m/s in both. Path length only: not states, overtaking or recovery |

## Difficulty

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Makkelijk: VDYNS 11..17, AI 90 %, RPM 115 %, NOVICE, rubber band 15/40 | GC 4; `car_cfg.ini`, `intel.ini`, `opponent.ini` | yes (recompiled) | not verified | Menu writes `LEAGUE` 0 |
| Normaal: VDYNS 21..27, AI 120 %, RPM 80 %, NORMAL, rubber band 20/40 | GC 4 | yes (recompiled) | not verified | check-flow ran at this difficulty; the values were not measured |
| Moeilijk: VDYNS 0..6, AI 200 %, RPM 50 %, SKILLED from key 2, no rubber band | GC 4 | yes (recompiled) | not verified | |
| Records per league `*_L0..2` | `0x449ea0` | yes (recompiled) | not verified | |
| `[OPTIONS] difficulty=1` stays shipped | `startup-flow.md` | yes (host) | not verified | The menu has no writer for it |

## Traffic

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| VEHICLE01 `veh_01` witte truck, mass 6000 | `car_cfg.ini [traffic]`, `gen_anim.ini`; GC 2.3 | yes (recompiled) | boot only: boot-all | Tracks 0, 1, 3, 5, 8 |
| VEHICLE02 `veh_02` twingo, 600 | Same | yes (recompiled) | boot only: boot-all | Tracks 0, 2, 3, 4, 7, 8 |
| VEHICLE03 `veh_03` gemeente truck, 6000 | Same | yes (recompiled) | boot only: boot-all | Tracks 4, 5 |
| VEHICLE04 `veh_04` honda civic, 600 | Same | yes (recompiled) | boot only: boot-all | Tracks 0, 2, 4 |
| VEHICLE05 `veh_05` mercedes taxi, 600 | Same | yes (recompiled) | boot only: boot-all | Tracks 0, 1, 2, 3, 4, 5, 7, 8 |
| VEHICLE06 `veh_06` passat stationcar, 600 | Same | yes (recompiled) | boot only: boot-all | Tracks 3, 7, 8 |
| VEHICLE07 `veh_07` alfa romeo, 600 | Same | yes (recompiled) | boot only: boot-all | Tracks 1, 2, 3, 4, 7, 8 |
| VEHICLE08 `veh_08` peugeot, 600 | Same | yes (recompiled) | boot only: boot-all | Tracks 0, 2 |
| VEHICLE09 `veh_09` mercedes busje, 900 | Same | yes (recompiled) | boot only: boot-all | Tracks 1, 5 |
| VEHICLE10 `veh_10` ford KA, 900 | Same | yes (recompiled) | boot only: boot-all | Tracks 1, 3, 4, 7, 8 |
| VEHICLE11 `veh_11` streekbus, 900 | Same | yes (recompiled) | boot only: boot-all | Tracks 0, 1 |
| VEHICLE12 `veh_12` container truck, 900 | Same | yes (recompiled) | boot only: boot-all | Tracks 1, 5, 8 |
| VEHICLE13 `e06_buss` personen busje | Same; `e06_anim.ini` | yes (recompiled) | boot only: boot-all | Track 6 |
| VEHICLE14 `e06_fire` fire-truck | Same | yes (recompiled) | boot only: boot-all | Track 6 |
| VEHICLE15 `e06_pull` bagage karretje | Same | yes (recompiled) | boot only: boot-all | Track 6 |
| VEHICLE16 `e06_rove` rover jeep | Same | yes (recompiled) | boot only: boot-all | Track 6 |
| VEHICLE17 `e06_lift` bagage-lift-auto | Same | yes (recompiled) | boot only: boot-all | Track 6 |
| Track 0: 2 left, 3 right | `traffic.ini`; GS 14 | yes (recompiled) | boot only: boot-all | Traffic drove in check-flow, run-bot and check-traffic; the counts were not asserted |
| Track 1: 6 left, 8 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 2: 2 left, 6 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 3: 4 left, 2 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 4: 2 left, 3 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 5: 4 left, 4 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 6: 4 left, 8 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 7: 4 left, 8 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 8: 7 left, 5 right | Same | yes (recompiled) | boot only: boot-all | |
| Track 9: `[Traffic Track 9]`, left 4, right 8; 08:3, 04:2, 06:1, 07:2, 02:2, 10:2 | Same | yes (recompiled) | boot only: boot-all | |
| Target speed 17.5 m/s with no speed trigger | `0x413de0`, no trigger placed | yes (recompiled) | not verified | |
| Traffic states: path, red light, look ahead, lane change | `0x415d20`, `0x415c60`, `0x415ba0`; GS 14 | yes (recompiled) | not verified | |
| Inactive beyond visible chunks | `0x415d20` | yes (recompiled) | not verified | |
| Recycling, 20% per tick | `0x41ca20`, `0x41cae0` | yes (recompiled) | not verified | Per tick, so 60 times a second in the port, and more often than on a period machine at 25 to 30 FPS |
| Traffic flags TOO_SLOW..VLUCHTSTROOK | `0x4138e0`; no shipped INI uses them | n/a | not verified | |
| Pushes without a time step | `0x428950`, `0x415E40`; owner's `A2-Racer-4-Fixes` part 9 | partial | checked on Amsterdam: check-traffic | On purpose: one operand scaled by `min(1, tick*25)`, as in the owner's patched game, not as unpatched: `PATCHES` in `tools/recomp/replacements.py`, `docs/intentional-differences.md`. Highest nose rise at 60 ticks 0.208, owner's patched game 0.18; with whole pushes 0.742, owner's original 0.74. At 30 ticks with the share 0.193 against his 0.19 |
| FPS gates: re-placement below 15, spawns at 12, wipes and view distance below 10 | `sim-timing.md` C2 | no | not verified | On purpose: the code is there, but `dt` is fixed at 1/60 s after the start, so they cannot fire on any device. View distance and effects stay full on a slow device, on the 8-bit path too. In the original the `visible_chunks` floor of 15 and the smoke gate were seen on the emulated machines of reference-86box: `sim-timing.md`, Callers of dt |

## Police

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| E0: 2 cops `police01` | `etappe0.omp` type 9; GS 11 | yes (recompiled) | boot only: boot-all | In the race in check-flow, no pursuit asserted |
| E1: 10 cops `police01` | `etappe1.omp` | yes (recompiled) | boot only: boot-all | |
| E2: 4 cops `police01` | `etappe2.omp` | yes (recompiled) | boot only: boot-all | |
| E3: 10 cops `police02` | `etappe3.omp` | yes (recompiled) | boot only: boot-all | |
| E4: 10 cops `police02` | `etappe4.omp` | yes (recompiled) | boot only: boot-all | |
| E8: 1 cop `police02` | `etappe8.omp` | yes (recompiled) | boot only: boot-all | |
| E9: 3 cops, 2 `police01`, 1 `police02` | `etappe9.omp` | yes (recompiled) | boot only: boot-all | `cops.ini` has no track 9 section: see the E9 data row |
| E5, E6, E7: no cops | `.omp` | yes (recompiled) | boot only: boot-all | |
| Detection at chunk - 2 | `0x412e20`, `0x40e340` | yes (recompiled) | not verified | Any forward speed, as no speed trigger is placed |
| Chase start, slots, `CopsPerRacer` 1, `CopsPerPlayer` 4 | `0x40d6f0`, `intel.ini` | yes (recompiled) | not verified | |
| Tactic 0, tactic 1 | `0x407730`, `cops.ini Default=0,1` | yes (recompiled) | not verified | |
| Stages BESIDE, INTO, MEGAPHONE, FRONT | `0x4081e0`, `0x408410`, `0x408370`, `0x408120` | yes (recompiled) | not verified | |
| Stages HANDBRAKE, SIGN, PUSHING, ROAD_BLOCK, STATUS | `0x408a00`, `0x408320`, `0x408b50`; no shipped tactic | n/a | not verified | |
| Per-type cop tactic lists | `0x4079a0`, `0x58fd68` constant -1 | n/a | not verified | |
| FSM FOLLOW_TACTIC, BREAK_FREE, HANDBRAKE_TURN, GIVE_UP, ACT_LIKE_TRAFFIC, KILL_COP, TOTAL_LOSS | `0x413250`; GS 11 | yes (recompiled) | not verified | |
| Siren, `bluelite` | `0x423990`, `POLITIE_SIRENE`, `gen_anim.ini` | yes (recompiled) | not verified | No check asserted a pursuit, so no siren either |
| Radio event 5 megaphone, `CMP05_00..03` | `0x41be70`; GS 19 | yes (recompiled) | not verified | |
| Radio events 1, 2, 3, 4, 6, 7, 8 | No samples or callers; GS 19 | n/a | not verified | |
| Contact has physics and damage only | GS 11 | yes (recompiled) | not verified | |
| Cop models `pol_lo_0`, `plz_lo_0` | `car_cfg.ini` rows 20, 21; GC 2.4, Inferred | yes (recompiled) | boot only: boot-all | |
| `[mpolizei]`, path types 2, 8, `pth_pcop` | No `.pth` uses them; `0x465010` no reference | n/a | not verified | |

## Roadblocks: blockade cars

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| E0: 3 type 14, chunks 148, 147, 312 | `etappe0.pth`; GS 11 | yes (recompiled) | boot only: boot-all | Created at load. Trigger and stop not asserted |
| E1: 14 type 14 | `etappe1.pth` | yes (recompiled) | boot only: boot-all | 5 with lap field 2 |
| E2: 3 type 14 | `etappe2.pth` | yes (recompiled) | boot only: boot-all | 2 with lap field 2, 1 with lap field 1 |
| E3: 17 type 17 | `etappe3.pth` | yes (recompiled) | boot only: boot-all | |
| E4: 18 type 17 | `etappe4.pth` | yes (recompiled) | boot only: boot-all | 6 with lap field 2, 4 with lap field 1 |
| E8: 6 type 17, 1 type 18 | `etappe8.pth` | yes (recompiled) | boot only: boot-all | |
| Drive at full gas, stop as an obstacle at the last point | `0x4161d0`, `0x465d00` | yes (recompiled) | not verified | |
| Type 18 becomes ordinary traffic | `0x421f50` | yes (recompiled) | not verified | |
| Types 13, 15, 16, 19, 20, 21 | `0x4658e0`; no `.pth` uses them | n/a | not verified | |
| FSM roadblock | `0x408520`, `0x40894a`, `0x40d640`, `0x409070` no reference | n/a | not verified | |

## Supercop

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `humvee_ANIM`, E1, E3, E4, one each | `.omp` type 28; GS 12 | yes (recompiled) | boot only: boot-all | Not on Amsterdam |
| Behaviour from `behavior.ini` | `0x4013f0`, `0x40f000` | yes (recompiled) | boot only: boot-all | All `Default` |
| PATROL with teleport cheat | `0x41f070` | yes (recompiled) | not verified | |
| CHASE, behind and within 7 chunks | `0x41f350`, `0x4213c0` | yes (recompiled) | not verified | |
| BEHAVIOR_01 frontal | `0x4200e0` | yes (recompiled) | not verified | |
| BEHAVIOR_02 sideways, megaphone | `0x420740` | yes (recompiled) | not verified | |
| BEHAVIOR_03 rear bash | `0x420ca0` | yes (recompiled) | not verified | |
| BEHAVIOR_04 bash | `0x4210e0` | yes (recompiled) | not verified | |
| BASH_INACTIVE, BREAK_FREE, ROLLED_OVER, INACTIVE, TOTAL_LOSS | `0x41fca0`, `0x41f5e0`, `0x41fbd0`, `0x41fb50`, `0x41f9f0` | yes (recompiled) | not verified | |
| STATE_ATTACK | Empty handler, no transition | n/a | not verified | |
| `System_CopAlert`, communicator lines | `0x41eeb0`, GS 20 | yes (recompiled) | not verified | |
| `dam_supercop` | `damage.ini` | yes (recompiled) | boot only: boot-all | |

## Damage and repairs

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Damage per hit, 25..45, impulse models | `0x426fe0`, `0x425310`, `damage.ini`; GS 18 | yes (recompiled) | checked on Amsterdam: check-driving | One wall hit at 19.5 m/s gave damage 28, and the car bounced back; the object on the straight gave 28 too. Two values, keyboard device, no opponents. Not against the original |
| 60 ms hit lockout | `0x426fe0` | yes (recompiled) | not verified | Virtual clock |
| Smoke above 900, 200 ms | `0x427130` | yes (recompiled) | not verified | |
| Mesh damage and detached parts | `0x426280`, `[Damageable Car Objects]` | yes (recompiled) | not verified | Vertices drawn through the renderer |
| Collision sounds | `0x427400` | yes (recompiled) | not verified | |
| HUD bar `damage/1100`, alert at 0.8 | `0x48a230`, `0x489c10` | yes (recompiled) | not verified | |
| Invulnerable bonus, `Invulnerable` option | `0x426fe0`, `0x474320` | yes (recompiled) | not verified | |
| Broken parts carried over by `DAMAGE_MESH`; numeric damage 0 at start | `0x44e340`, `0x44ceb0`; `game-progression.md` 12 | yes (recompiled) | not verified | `DAMAGE_VALUE` and `[PLAYER] damage` have no reader. Carries across races, modes and players, as in the original |
| Repairs: `pw_reps`, `pw_repb` | `bonus.dso` | yes (recompiled) | not verified | |
| Repairs: quick service | Trigger 2 not placed | n/a | not verified | |
| Fuel station `ev_tank` | `0x43c885`, `0x43caf0`, `0x43cc70` no reference | n/a | not verified | |

## Pickups

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `pw_1pts`, +100, text 59 | `bonus.dso`, `.omp`; GS 16; counts E0..E9: 6, 0, 13, 10, 31, 0, 8, 12, 10, 10 | yes (recompiled) | boot only: boot-all | No check asserted a pickup |
| `pw_5pts`, +500, text 60 | Same; 10, 15, 8, 5, 8, 5, 9, 8, 13, 3 | yes (recompiled) | boot only: boot-all | |
| `pw_10pts`, +1000, text 61 | Same; 2, 1, 2, 5, 2, 5, 0, 6, 3, 5 | yes (recompiled) | boot only: boot-all | |
| `pw_reps`, damage -100, text 62, respawn 15 s | Same; 18, 16, 8, 14, 18, 13, 2, 26, 2, 12 | yes (recompiled) | boot only: boot-all | |
| `pw_repb`, damage -300, text 63, respawn 15 s | Same; 2, 3, 5, 2, 0, 6, 3, 2, 7, 1 | yes (recompiled) | boot only: boot-all | |
| `pw_turbs`, turbo +10, text 64, respawn 15 s | Same; 19, 0, 16, 0, 0, 16, 1, 19, 0, 10 | yes (recompiled) | boot only: boot-all | |
| `pw_turbb`, turbo +50, text 65, respawn 15 s | Same; 1, 0, 2, 0, 0, 4, 1, 4, 6, 0 | yes (recompiled) | boot only: boot-all | |
| `pw_godm`, invulnerable 20 s, text 58, respawn 5 s | Same; 1, 2, 2, 0, 5, 5, 1, 1, 3, 2 | yes (recompiled) | boot only: boot-all | |
| `pw_stop`, freeze 6 s, text 56, respawn 15 s | Same; 1, 0, 3, 0, 0, 2, 1, 4, 2, 1 | yes (recompiled) | boot only: boot-all | Cops keep running |
| `pw_fastf`, FOV 0.6, force 4 s, text 57, respawn 5 s | Same; 0, 0, 4, 0, 0, 5, 2, 3, 2, 1 | yes (recompiled) | boot only: boot-all | `SetTransform(PROJECTION)` reaches `source/render/d3d-renderer.js`. 0.6 gives 108 degrees, read from code. None placed on Amsterdam |
| `pw_1pts` of type 0 on E4 | `etappe4.omp` | yes (recompiled) | boot only: boot-all | Scenery, not collectable |
| Bonus state machine, spin, pulse, fade | `0x451420`, `0x451380` | yes (recompiled) | not verified | |
| DaviScript engine and natives | `0x475b50`, `bonus.dso` | yes (recompiled) | boot only: boot-all | `OnInit` ran for all placed objects |
| Natives `getch`, `kbhit` | Declared only, `extern` in `bonus.pseudo.txt` | n/a | not verified | Console imports have no host binding |
| Turbo use, 1 per 100 ms, `TURBO_AMOUNT` | `0x44e970` | yes (recompiled) | not verified | check-race-ui covers the input on touch and pad, not the consumption rate |

## Track objects

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Type 0, 11, 16 scenery | `0x4536e0`; GS 17 | yes (recompiled) | checked on Amsterdam: reference-frame | First frame by eye. Others: boot-all |
| Type 1 looping sample | `0x454170`, `0x4535d0`; E0, E4, E8 | yes (recompiled) | boot only: boot-all | |
| Type 2 pilon | `0x4548d0`, `0x454990` | yes (recompiled) | boot only: boot-all | All tracks |
| Type 3 werkbord | `0x455aa0`, `0x455b60`; E2, E3, E4, E6 | yes (recompiled) | boot only: boot-all | |
| Type 4 traffic light | `0x454f70`, `0x455052`; E0, E1 | yes (recompiled) | boot only: boot-all | |
| Type 5, 14, 17 static collider | `0x4541c0` | yes (recompiled) | boot only: boot-all | check-driving hit a wall and took a jump on Amsterdam, without naming the objects. The jump is probably the truck ramp `0_tramp`, with collision `0_col3`: Inferred |
| Type 6 werklamp | `0x4554b0`; not placed | n/a | not verified | |
| Type 7 flitspaal | `0x451ed0`, `0x451f90`; 34 on 8 tracks | yes (recompiled) | boot only: boot-all | |
| Type 8 werkpijlbord | `0x455800`; not placed | n/a | not verified | |
| Type 9 cop | `0x423a50` | yes (recompiled) | boot only: boot-all | |
| Type 10 heavy object | `0x4542a0`, `0x453600`; E0, E1, E3, E4, E6 | yes (recompiled) | boot only: boot-all | |
| Type 12 3D animation: `a_zepp00` start banner, `a_ramp00`, `a_zapp00`, `a_zepp01`, `a_zepp07`, `e08_was1` | `0x454440`, `0x453660` | yes (recompiled) | boot only: boot-all | All tracks |
| Type 13 start animation | `0x454480`; not placed | n/a | not verified | |
| Type 15 | `0x453660`; not placed | n/a | not verified | |
| Type 18 pivoting object | `0x452ef0`; E0, E1, E2, E4, E8 | yes (recompiled) | boot only: boot-all | |
| Type 19 trash emitter | `0x4551a0`; E5 | yes (recompiled) | boot only: boot-all | |
| Type 20 mailbox | `0x453200`; E4 | yes (recompiled) | boot only: boot-all | |
| Type 21 medium object | `0x454320`, `0x4545a0` | yes (recompiled) | boot only: boot-all | |
| Type 22 paper box | `0x4546b0`; not placed | n/a | not verified | |
| Type 23 Birds | `0x450f90`; E7, E8 | yes (recompiled) | boot only: boot-all | |
| Type 24 Leaves | `0x4530c0`; E2, E5, E6, E8 | yes (recompiled) | boot only: boot-all | |
| Type 25 bonus | `0x451250`, `0x451420` | yes (recompiled) | boot only: boot-all | |
| Type 26 Water | `0x4553b0`; E2, E7 | yes (recompiled) | boot only: boot-all | |
| Type 27 Dirt | `0x451dd0`; E2, E5, E7, E8 | yes (recompiled) | boot only: boot-all | |
| Type 28 Supercop | `0x41e450` | yes (recompiled) | boot only: boot-all | |
| Type 29 scripted object | `0x454b80`, `0x454ce0` | yes (recompiled) | boot only: boot-all | |
| Start truck `truck_ANIM`, `truckcol_ANIM` | `.omp`, one per track, type 0 or 5 | yes (recompiled) | boot only: boot-all | |
| Scripted `B_hek1` (E0 10, E1 23, E2 6, E3 40, E4 42, E7 3, E8 6) | `bonus.dso`; GS 17 | yes (recompiled) | boot only: boot-all | |
| Scripted `B_crat1` (7 tracks), `KRATTEN` | Same | yes (recompiled) | boot only: boot-all | |
| Scripted `B_dpol1` German police breakaway (E3 22, E4 32, E5 2, E8 8) | Same | yes (recompiled) | boot only: boot-all | |
| Scripted `B_npol1` Dutch police breakaway (E0 5, E1 17, E2 3, E9 3) | Same | yes (recompiled) | boot only: boot-all | |
| Scripted `B_grb1`, `B_halt1`, `B_mark1`, `B_oil1`, `B_phon`, `B_stei1`, `B_toil1`, `B_trl2`, `B_truck1`, `B_vuil1`, `B_cont1` | Same | yes (recompiled) | boot only: boot-all | |
| Scripted `0_BUD1`, `0_NAGW1`, `0_ORGL1`, `E0_STAT` | Same; E0 | yes (recompiled) | boot only: boot-all | `DRAAIORGEL` plays until revive |
| Scripted `1_CONTR2` with constraint | Same; E1 | yes (recompiled) | boot only: boot-all | |

## Path objects

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Helicopter E4, `E04_cess`, chunks 190-230, 15 s | `etappe4.pth` type 5, `0x463a60`; GC 2.5 | yes (recompiled) | boot only: boot-all | Not on Amsterdam, no check saw it fly |
| Helicopter E4, chunks 380-409, 10 s | Same | yes (recompiled) | boot only: boot-all | |
| Helicopter E7, `E07_cess`, chunks 389-420, 7 s | `etappe7.pth` | yes (recompiled) | boot only: boot-all | |
| Plane E3 `E03_boin`, chunks 40-70, 10 s | `etappe3.pth` type 7, `0x4654b0` | yes (recompiled) | boot only: boot-all | |
| Zeppelin path E4 `E04_zepp`, chunks 95-110 and 430-449 | `etappe4.pth` type 7 | yes (recompiled) | boot only: boot-all | |
| Plane E6 `e6boing6`, chunks 1-75, lap field 1, 20 s | `etappe6.pth` type 7 | yes (recompiled) | boot only: boot-all | |
| Train E4 `E04_bahn`, chunks 218-254 and 460-481 | `etappe4.pth` type 4, `0x466290` | yes (recompiled) | boot only: boot-all | |
| Skyline train E6 `E6skylin`, chunks 62-155, 15 s | `etappe6.pth` type 4 | yes (recompiled) | boot only: boot-all | |
| ICE E8 `e08_ice`, chunks 310-323 and 488-515 | `etappe8.pth` type 4 | yes (recompiled) | boot only: boot-all | |
| Boat E4 `E04_Boot`, chunks 535-611, 65 s | `etappe4.pth` type 3, `0x465ea0` | yes (recompiled) | boot only: boot-all | |
| Path car E1, chunks 306-318, 9 s | `etappe1.pth` type 6, `0x4666c0` | yes (recompiled) | boot only: boot-all | |
| Path car E8, chunks 530-568, 2 s | `etappe8.pth` type 6 | yes (recompiled) | boot only: boot-all | |
| Type 0, update only: E3 2, E4 1, E8 1 | `0x464a60` | yes (recompiled) | boot only: boot-all | |
| Type 12, E0 5, E1 7 | No code; GS 15 | n/a | not verified | Loaded and ignored |
| Types 9, 10 path traffic | `0x466db0`; no `.pth` uses them | n/a | not verified | |
| Trigger: once per lap per path, 25 slots | `0x464cf0` | yes (recompiled) | not verified | |

## Effects

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Skid marks | `0x444de0`, `0x445180`; `render-frame.md` | yes (recompiled) | not verified | Drawn by `source/render/d3d-renderer.js`. Strips whose vertex count changed do not blend between ticks. At 60 ticks a strip lasts 0.82 s |
| Smoke clouds | `0x4469e0`, `0x446fe0`, `0x427130` | yes (recompiled) | fix check: 2968 smoke rows over 1168 ticks on Amsterdam, none linked to the tick before | That check is about drawing only: smoke shows the latest tick, because its slots are re-sorted every frame. Smoke from damage was not asserted |
| Effect `gfx_bwlk` | `0x43de00`; `render-frame.md` | yes (recompiled) | not verified | Drew 0 times in a whole Amsterdam race, so it was not exercised |
| Skid marks and smoke at 8 bits: untextured, palette index `255 - floor(blue / 17)`, stipple by the first vertex's alpha | `0x445180`, `0x446fe0`; `docs/research/render-8bit.md` | yes (host) | compared with the original: reference-86box | `FRAG_INDEXED` in `source/render/d3d-renderer.js`. By eye and by reading palette indices, against frames at 320x200 on the K6-2 550: smoke sparse dark dots, 244 at its centre to 250 at its rim; skid marks 252, dense hatching when new, solid later. `gfx_bwlk` takes the same rule and was not seen |
| Blob shadows at 8 bits, black and opaque, the player's too | `0x443710`, `0x443ef0`; `8bit-drawing.md` section 6 | yes (recompiled) | compared with the original: reference-86box | Game code picks them on this path, and the copy-mode draw shows them. Frames: black and opaque, and large when the car is in the air |
| Finish flag | `0x43fdd0`, `0x440160` | yes (recompiled) | fix check: reach 0.9999 to 1.0 of the view over a wave at 5 sizes, scale 1 at 960x720 and 1000x900, a real flag looked at | Went up at tick 36944 in two whole bot races on fixed seeds. On purpose: the sheet grows on views wider than about A = 1.66 or taller than about A = 1.07 |
| No finish flag at 8 bits | `0x43ac80`, `0x43acc1`, behind `0x6fb8d0`; `8bit-drawing.md` section 6 | yes (recompiled) | not verified | Game code: its only setter runs with a 3D card only. check-software ran a race to its end, and did not assert this. End of race is not in reference-86box |
| Particle Spark | `0x45d170` id 1 | yes (recompiled) | not verified | |
| Particle Leaf | id 2 | yes (recompiled) | not verified | |
| Particle Bird | id 3 | yes (recompiled) | not verified | |
| Particle Mail | id 4 | yes (recompiled) | not verified | |
| Particle Trash | id 5 | yes (recompiled) | not verified | |
| Particle Paper | id 6 | yes (recompiled) | not verified | Its object type is not placed |
| Particle CarPart | id 7 | yes (recompiled) | not verified | |
| Particle Dirt, Dirtpiece | ids 8, 9 | yes (recompiled) | not verified | |
| Particle Water, Waterwave | ids 10, 11 | yes (recompiled) | not verified | |
| Exceptions inside particle code are caught | `win32-surface.md` C5 | yes (host) | not verified | `GUARDED`, `source/host/hooks.js` |
| `part_rain` | `0x449b30`, `0x462f70`; effect unresolved | yes (recompiled) | not verified | No rain id in the table |
| Fog from triggers 16, 17 | Not placed; `FOG=0` shipped | n/a | not verified | |

## Cars

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Edgar de Flits, car 0, `checker` | `static.ini [char0]`, `car_cfg.ini`; GC 2.1 | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving | Also run-bot. reference-wine ran this car: speed by movement state, plateau, reverse limit, brake, in `sim-timing.md` |
| Tommie 'El Nino', car 1, `hotrod` | `[char1]` | yes (recompiled) | checked on Amsterdam: check-flow | Default in Quick Race |
| James Brons, car 2, `countach` | `[char2]` | yes (recompiled) | boot only: boot-all | Ran as AI in check-flow |
| Katharina 'Kat', car 3, `merceslk` | `[char3]` | yes (recompiled) | boot only: boot-all | Ran as AI in check-flow |
| Barbarally, car 4, `buggy` | `[char4]` | yes (recompiled) | boot only: boot-all | Ran as AI in check-flow |
| D.T. Harry, car 5, `humvee`, `humveeb` | `[char5]`, `M:0x49c6a0` | yes (recompiled) | boot only: boot-all | Unlock: `takeUnlock` in `source/menu/data.js` |
| politie-auto, car 6, `politie` | `[char6]` | yes (recompiled) | boot only: boot-all | |
| hunny, char 7 | `[char7]`, `indexingame=7`, in no list | n/a | not verified | Still no route with the updates |
| downld, char 8, on screen De Schaduw: car 7, the truck | `[char8]`, `indexingame=7`; `[QUICKRACE] DOWNLOADCHARIX=7`, `DOWNLOADSECTION=DOWNLOADCAR`; `L0_ANIM.INI [DOWNLOADCAR]` and `overlay7.ini` since the car update, disc 1.01 without updates has neither | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | Quick Race character position 7, opens by the original's own rule `[DOWNLOADCAR] Count > 0`: `quickCharAvailable` in `source/menu/data.js`, no change of code |
| Truck's data, since the car update: `car_cfg.ini` row 7, wheel row 42, `[DOWNLOADCAR]` in `l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini`, `car_snd.ini [Car42]`, `damage.ini dam_truck`, `PLAYER_7_PORTRAIT`, `TRU_A*_ANIM`, `overlay7.ini`, `vdyns.dat` record 7 | `original/updates/installed/` | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | `car_cfg.ini` row 7 in all three leagues is now `7=RACER_7,DOWNLOADCAR,KENT,hoog4,1500,42,5000,7,dam_truck`. `overlay7.ini` is its HUD file, so `0x00487f20` finds its file. By eye the truck and its HUD. Its handling, damage and sound were not asserted. Record 7: [`sim-timing.md`](sim-timing.md) |
| `RACER_8`, `RACER_9`, trailers CARAVAN, VOUWWAGEN, JETSKI | `car_cfg.ini`, `[Connected Object Types] count=0`; GC 2.6 | n/a | not verified | |
| `garage.ini` | No reader in either module; GC 2.6 | n/a | not verified | |

## Recompiler problem lists

`tools/recomp/out/report.json`. None of the trapping ones is reachable: [`../behavior/race-rules.md`](../behavior/race-rules.md), section "Can anything the race reaches trap?". A static reachability argument, not a check.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `FUN_00465345`, trapping body | Fragment of `0x465310`; only pointers are locale strings `ESF` | n/a | not verified | Static reachability only |
| `sub_004e4150`, trapping body | Only pointer is locale string `PAN` | n/a | not verified | Same |
| `sub_004f9d00`, trapping body | Only pointer is CRT code page bytes | n/a | not verified | Same |
| `FUN_0054aeb0`, trapping body | Mouse `DIDATAFORMAT`, data in `.text`, argument at `0x4ef0cf` | n/a | not verified | `SetDataFormat` is a no-op in `source/host/directx.js` |
| `FUN_0055e0fd`, `FUN_0055e102`, trapping bodies | CRT x87 tails in `exp`, `sinh`, `cosh`, `tanh` tables | n/a | not verified | `_CI*` entries map to `Math` |
| `FUN_00561c91`, `FUN_00561dd1`, `FUN_00561dde`, `FUN_00566f61`, trapping bodies | CRT `exp` kernel; table `0x5c8bb4` has no reference | n/a | not verified | Same |
| `build` failures `0x415355`, `0x545350` | Strings `USA`, `PST` | n/a | not verified | |
| `irreducible` list of nine functions | `FUN_00489820` and CRT, qhull | yes (recompiled) | not verified | State machine, `docs/recompiler.md` |
| `data_refs_outside_functions`: `0x457e40` checkpoint, `0x453660`, `0x453680` object handlers, `0x474ea0` script native | Real code Ghidra left outside functions | yes (recompiled) | boot only: boot-all | Present in the code map. The others on that list are mostly string or table values |
| Console imports | `0x55a6fe`, `0x55a7cf` | n/a | not verified | Throw "Host function not implemented" if ever reached |
