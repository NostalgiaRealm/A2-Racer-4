# Race rules and content

What the race does: tracks and their files, race kinds, race flow, timers, laps and checkpoints, positions and the finish table, game over and penalties, money, pause and reset, opponents, traffic, police, roadblocks, the Supercop, damage, repairs, pickups, track objects, path objects, skid marks, particles and cars. For each: how the port implements it, how that was compared, and whether anything the race can reach traps. Part of [`../original-behavior.md`](../original-behavior.md). Status per feature: [`../parity/race-rules.md`](../parity/race-rules.md).

Addresses are `spel.dat` virtual addresses unless marked `M:` (`menu.exe`). E0..E9 are `etappe0..9`. **Original behaviour** is the installation with Davilex's two official updates, `original-game-decompiled/original/updates/`. They add track 9 and car 7, and `spel.dat` and `menu.exe` stay as they were. E9 came with the track update, so a table or list that stops at E8 covers the nine tracks of disc 1.01: E9's chunk triggers, waypoints, paths and most object types are not counted in this file. **Confirmed** means established from code and data. The notes in `docs/research/` are static analysis, so run-time facts come from the port's own checks and, for the original under Wine, from reference-wine, and for its 8-bit path on an emulated Windows 98 machine, from reference-86box. All are named as such.

**Same machine code** below means: the x86 was recompiled, not rewritten, so branches, constants and tables are the shipped ones. It does not cover the functions `tools/recomp/replacements.py` replaces, x87 precision (53 bits here; what the original ran at is not established, see [`../recompiler.md`](../recompiler.md)), clocks (one virtual clock, fixed tick of 1/60 s), or rendering and audio (reimplemented). It is an argument, not a comparison. The comparisons with a run of the game named in this file are reference-wine, the original under Wine next to the port, reference-86box, frames of the original's 8-bit path next to the port's, and check-traffic against the owner's table and reference-frame against his screenshot, both from his runs under Wine.

Checks are named by tool; their procedures and results are in [`../validation.md`](../validation.md). All ran on etappe 0, Amsterdam, unless stated, in headless Chromium 145 or in Node, the original's half of reference-wine under Wine and of reference-86box on an emulated machine: no real phone or tablet, no real gamepad, no other browser engine. Sound was checked by state, never by ear.

| Check | Tool | What it covers for race rules |
|---|---|---|
| reference-wine | `tools/reference-wine/`, `evidence/reference-wine/results.md` | The original `spel.dat`, unchanged, under Wine 11.20 Staging with Xvfb and llvmpipe, on Amsterdam, car 0, INI files of `original/install` without the updates, which for etappe 0, car 0 is the same data, on a clean clock. Held to 60 ticks per second from outside the process, memory read per tick, 22 launches. The same key scripts on the port, headless. For race rules: countdown durations, first `dt`, racers' path length over 30 s. Not: damage, collisions, race end, traffic, Windows, period hardware, real vsync. Driving: [`sim-timing.md`](sim-timing.md) |
| reference-86box | `tools/reference-86box/`, `docs/research/render-8bit.md`, `evidence/reference-86box/results.md` | The original `spel.dat` at `RESOLUTION` 0 and 1 on a throwaway copy of the owner's 86Box Windows 98 machine, disc 1.01 data, Amsterdam, car 0, screenshots of the guest. For race rules: smoke, skid marks and the blob shadow as drawn at 8 bits, and the gates on them. Not: the flash, end of race, the pause dialog, or any rule of the race |
| check-flow | `tools/check-flow.mjs` | From the real menus, a whole race driven by a bot at speed=8: the game itself wrote `FINISHED=1`, `TRACKTIME` 603433. Then `TfrmResults`, back to `TfrmQuickRace`, a save file, no console errors |
| check-software | `tools/check-software.mjs` | The same through the real menus on the 8-bit path: a whole race at `RESOLUTION` 1 gave `FINISHED=1`, `TRACKTIME` 603433, laps 307617, 295816, the result with the 3D card on these fixed seeds. A race at `RESOLUTION` 0 left with Esc and J. 17 of 17, by name in `evidence/software/flow/summary.json` |
| check-phone-flow | `tools/check-phone-flow.mjs` | Taps on an 844x390 touch profile, then 390x844: the same menus, a race on the wheel, Stop and Ja, back to the menu with `FINISHED=0`, Tour screens to the Garage without a race. 7 of 7, `evidence/flow-phone/`. Emulated touch, no real phone |
| check-race-ui | `tools/check-race-ui.mjs` | 76 named checks, all passing, in `evidence/race-ui/summary.json`. Finish and game over are entered through `0x44cda0`, not by driving |
| check-driving | `tools/check-driving.mjs` | Node, no renderer, no opponents, keyboard device. `evidence/driving/amsterdam-no-opponents.json` |
| check-traffic | `tools/check-traffic.mjs` | Nose rise of traffic on the owner's method, against his table. `evidence/traffic/nose-rise.jsonl` |
| run-bot | `tools/run-bot.mjs` | A whole race headless with opponents and traffic; prints what it writes to `game.ini` |
| repeat-trace | `tools/benchmark.mjs`, `tools/compare-traces.mjs` | Fixed seeds, three render profiles, 71 s. `evidence/performance/final-*.json`. See below |
| boot-all | `tools/build-race-lists.mjs` | All 10 etappes with all 8 cars for 120 ticks, in Node with no renderer. The 120 ticks end inside the countdown, in game state 1, so it shows that files load and objects are created, and nothing about play |
| form-check | per-form browser checks | Menu forms and result branches, with a faked `game.ini`. `evidence/forms/` |
| reference-frame | by eye | The first race frame against the owner's screenshot of his patched game under Wine |
| fix check | one-off scripts | Run once when a fix was made, not kept in `tools/`. Each counts only for what its line says |

**What repeat-trace covers.** Once per game second `RaceRunner.traceTick` takes a checksum over every object with a physics body, 485 on Amsterdam: the player, racers, traffic, police and scenery bodies, each with its object record and its 3D object with world matrix. `tools/compare-traces.mjs` reports the checksums equal at all 71 samples, and a position and speed difference of 0, between 1280x720 at 60 FPS, 800x360 DPR 2 at 8x CPU throttle and 60 FPS, and every second display frame at 30 FPS. It compares the port with itself.

## Corrections to the research notes

Findings that correct or complete `docs/research/`. Their parses cover `etappe0..8`, the tracks of disc 1.01. E9's chunk triggers, counted later, change none of them: it has only 1, 9, 13, 14 and 15. Its waypoint triggers were not counted.

| Finding | Evidence |
|---|---|
| No `.pmp` chunk on any track has trigger 2, so `QUICK SERVICE` (text 48) and its full repair never occur. E8 has one waypoint with trigger value 2, but only `FUN_00412270` reads waypoint triggers and it has no case 2 | Parse of `etappe0..8.pmp`, `.dmp`; `FUN_00457c00`, `FUN_004a70a0`, `FUN_00412270` |
| No chunk or waypoint has speed trigger 4, 5, 6 or 8. The flitser limit stays at the default 70 km/h on every track, police detection uses its default, traffic uses the row for no trigger | Same parse; `FUN_00457900`, `FUN_0040e340`, `FUN_00413de0` |
| Checkpoint trigger 45 exists only on the chase tracks: E1 4, E3 5, E4 5. Splits (`0x457d20`) never run on shipped data | Same parse |
| Triggers 7, 16, 17, 62, 65, 66 are not placed on any track | Same parse |
| `FUN_00452020`, the flitspaal's state 1 effect (Unknown in `gameplay-systems.md`): clears trigger value 1 on the 20 chunks starting at the pole's chunk. Knocking a pole down removes the flitser fine ahead | Disassembly `0x452020`-`0x4520ce` |
| E4 has 31 `pw_1pts` of `.omp` type 25 and one more of type 0, which is scenery. Both research counts (31, 32) are explained | Parse of `etappe4.omp` |
| `.omp` types 6 (werklamp), 8 (werkpijlbord), 13 (start animation), 15 and 22 (paper box) are not placed on any track | Parse of `etappe0..8.omp` |
| Music selection (`audio.md` 9, `game-progression.md` 13): `0x44ad40` takes `LAST+1` and sets it to 0 when it is below 0 or at or above `COUNT`. It is not `(LAST+1) mod COUNT`: `LAST=-5` and `LAST=99` both give `M_DISCO1`. It runs once per boot, from `0x4492c0` via `0x44c200`, and `0x450de0` plays the entry at that index | `FUN_0044ad40`, strings at `0x5a0960`, `0x5a09c8`, `0x5a0a38`. Fix check, headless `spel.wasm` on etappe 0 |
| Read pattern of a music file (`audio.md` 3, 9 give the game's one `fread`). Below it, the C runtime makes a 512-byte fill for the header, a seek, one direct read of N x 512 bytes, then a 512-byte fill for the tail. `mobie2` reads [74978278, 512], [74978322, 2755072], [77733394, 512]. `0x55a06b` shrinks the buffer to 512 and `0x55fb61` restores 4096 | `FUN_0055a06b`, `FUN_0055fb61`. Read log of a fix check |
| How a music member that is not in memory fails if a read path leaves gaps: not as a zero tail. With the earlier read code 2,492,517 of 2,755,455 samples were wrong, the first at sample 262,100 (11.89 s). The tail fill was a second miss, so the last samples were real and the trailing run of zero bytes was 0. A zero-tail test does not see this, a comparison with the member's samples does | Fix check with the earlier read code restored, headless |
| `rc.img` opens with its image count. `0x4cc580` reads bytes 0 and 1 at position 0 with a 4096-byte fill at every boot, so a list that leaves them out costs one synchronous request of 262,144 bytes per session | `FUN_004cc580`. Reproduced in a fix check with the earlier lists: 1 miss. With `race-files.json` as it is now: 0 |
| Bytes the C runtime's buffer picks up past the end of an archive member are never used. `0x55a5de` resets the buffer on every `fseek`, and `0x440950` always calls `0x458730(2)`, so `rc.img` takes the per-image seek path of `0x4cc0b0`, not the sequential one in `0x4cc580` | Code. Fix check on etappe 0, car 0, up to 300 ticks: 268 MB of wasm memory against a run with the whole archive differ only at `0xc4a8e0`+368 and `0xc4b67e`+466, inside the `rcs.img` stream buffer `0xc4a850`-`0xc4b850`; two full-archive runs are identical |
| Colour fills on the screen. A whole Amsterdam race makes three: one white, from a flitser, and two black at exit (`0x448160`). The other caller of `0x4c4e00`, `0x43b7ea`, is listed under frame counts in `sim-timing.md` C2, but a raw scan of `spel.dat` finds no absolute or relative reference to `0x43b7ea` or `0x43b7f0` | Fix check: fills counted in a whole bot race. Raw scan |
| `sim-timing.md` C1 and I4 rule 3 say the first tick stores the whole loading time in the ring. The load at `0x4581aa` runs before clock init at `0x4581c1`. So the first sample holds the counter's uptime and the second only the time from init to the first tick, measured under Wine at 8.42 ms. Ticks 1 to 3 are capped on any machine up for more than a second; tick 4 only if that time is above about 0.68 s at 60 ticks | Disassembly of `FUN_004580e0`; `evidence/reference-wine/results.md` |
| `gameplay-systems.md` 18 says `[PLAYER] damage` and `DAMAGE_MESH`, `DAMAGE_VALUE` are restored at start. Numeric damage is always 0 at start, `[PLAYER] damage` has no reader, only `DAMAGE_MESH` is applied, and `DAMAGE_VALUE` is parsed with no other reader | `game-progression.md` 12; `0x44e340`, `0x44ceb0` |
| `FINISHED=1` with `Out_Of_Time=1` is normal on a track in mode 0. `out_of_time` means timer 11 reads 0 (`0x44b1c0`), timer 11 starts at `checkpoint_value*checkpoint_speed`, 110 s on shipped values (`0x44bf10`), and it ends a race only in mode 1 (`0x44c8c0`). check-flow's 593 s race wrote both. The menu tests `finished` first, so the flag has no effect there | `FUN_0044b1c0`, `FUN_0044bf10`, `FUN_0044c8c0`; `flowQuickRace`, `flowTour` in `source/menu/flow.js` |
| `pw_fastf`'s `ChangeFOV(0.6)` gives 108 degrees (`render-device.md`). If it is still active at the finish, the finish flag sheet reaches only about 0.6 of the way at z 6, so it stops short of the edges on the original at 4:3 too | Read from code, not run |

---

## Tracks

**Original behaviour.** Ten track entries, all playable. Track 9 came with the track update; on disc 1.01 without updates it has no files, so nine are playable there.

| Ix | Name | Type | Laps | Kind (`[MAPS]` arg0, arg14) | Chunks | Waypoints | Qualify position d0,d1,d2 (0-based) | Ambient |
|---|---|---|---|---|---|---|---|---|
| 0 | Amsterdam | Stadsrace | 2 | city, normal | 363 | 1451 | 3,2,2 | 50 |
| 1 | Rotterdam | Stadsachtervolging | 2 | city, chase | 507 | 2218 | 9,9,9 | 70 |
| 2 | Scheveningen | Kustrace | 2 | city, normal | 400 | 1347 | 4,3,2 | 128 |
| 3 | Wenen | Stadsachtervolging | 2 | city, chase | 645 | 2246 | 9,9,9 | 128 |
| 4 | Berlijn | Stadsachtervolging | 2 | city, chase | 634 | 2790 | 9,9,9 | 70 |
| 5 | Hamburg | Havenrace | 2 | city, normal | 326 | 1205 | 1,0,0 | 70 |
| 6 | Frankfurt | Vliegveldrace | 2 | city, normal | 334 | 1119 | 0,0,0 | 70 |
| 7 | BodenSee | Drielandenrace | 2 | city, normal | 477 | 1862 | 3,2,1 | 70 |
| 8 | Munchen - Wenen | Snelwegrace | 1 | highway, normal | 607 | 3293 | 2,1,0 | 60 |
| 9 | Download-race, on screen Country etappe | Country-race | 2 | city, normal | 401 | 1588 | 0,0,0 | 66 |

`raser.ini [MAPS]` has rows 10 and 11 too, without any file or `static.ini` entry. No track has its own music, weather, reverse or mirror option.

Track 9 comes from `a2racer4_update_track.exe` (readme `trackupd.txt`), which adds `etappe9.cmp .dmp .ini .omp .pmp .pth .rmp`: 401 chunks by the `.pmp` head, the same field as the table's 363 for E0, 778 objects in `.omp`, and `etappe9.pth` of 480 bytes. Its art was on the disc all along, in `rcs.img`, `rc.img` and `menurcs.img`; only the data files were missing. `static.ini` names it `Download-race`, with `BRITISH=1`, the only track with it. The menu's name art `trname09` reads "Country etappe", and that is what the player sees, with the record seed 5:05:05 Byron. It is not in the Tour; it is Quick Race position 9. `traffic.ini [Traffic Track 9]` and `behavior.ini [Track 9 Behaviors]` exist. `cops.ini` has no track 9 section, it ends at 8.

**Evidence.** `static.ini [TRACK0..9]`; `raser.ini [MAPS]`, reader `0x44a690`; chunk and waypoint counts from `etappeN.pmp`, `.dmp`. Availability `M:0x461a4c`, `M:0x49c78c`. `docs/research/game-content.md` 1.1, 1.3, 1.4, 3.3. Track update: `original-game-decompiled/original/updates/`, `delta.csv`, `INSTTRCK.LOG`.

**Status.**
- Confirmed: the table. A track needs all seven `etappe<ix>.*` files next to the exe. Track 9 has them since the track update, so it opens by that rule. On disc 1.01 without updates it has none, so there it shows as locked and cannot start. Chase tracks in Quick Race also need a Tour character to have reached them. Davilex's official track update settles that track 9 was meant as downloadable content (`DOWNLOADURL`, `[QUICKRACE] DOWNLOADSECTION`, 140 `e09_*` asset names) and that it was released.
- Inferred: an English country track, from labels in `etappe9.ini` such as Uffington Horse, Ave Red Lion.
- Unresolved: day or night per track was not established.

**Port.** `public/assets/game/etappe0..9.*` are unchanged copies of the install: `tools/prepare-assets.py prepare_race` lays the updates over `original/install` (`UPDATES`, updates win). `GameFiles.prepareRace` in `source/host/game-files.js` loads the files of the chosen track. `GameData.trackFilesExist` and `quickTrackAvailable` in `source/menu/data.js`, `lblLocked` in `source/menu/forms/group-main.js` carry the rule: all seven `etappe9.*` files exist, so track 9 opens with no change of code, as `M:0x461a4c` does. No code of the race and no menu code was changed for it.

**Comparison.** The copies were compared by SHA-256 against the current install: 140 race files, none differs. That is a static comparison, not one of the checks. E0: check-flow drove a whole race on it. E1..E8: boot-all only, which shows they load, not that they play. E9: boot-all and one launch check, a fix check on the final build when the updates came in. Headless Chromium, the real menu, Quick Race position 9 and character position 7. `game.ini` ended up with etappe 9, british 1, car 7, and a race ran on the keyboard device: 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. By eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else: no lap, no race end, no sound, no comparison with the original. The original has not been run with the updates. No check named here compares a track's rules with the original.

---

## Track files and what the host supplies per race

**Original behaviour.** `0x4ae490` loads `.cmp`, `.dmp`, `.pmp` with `.rmp`, then `.omp`; `.pth` loads separately (`0x4641d0`). Meshes and textures come from `rcs.img` by name, sprites from `rc.img`, which opens with its image count (`0x4cc580`, at every boot). Everything is loaded before the race starts. In a race the archive is opened only to load sounds.

Race music is one whole WAV, 22050 Hz 8-bit mono, 68.6 to 125 s, 1.5 to 2.76 MB, looped. `0x44ad40`, once per boot, reads `[MUSIC] COUNT`, the names and `LAST` from `raser.ini`, takes `LAST+1`, sets it to 0 when it is below 0 or at or above `COUNT`, and writes it back at once. `0x450de0` plays the entry at that index, if `MUSICVOLUME` is above 0. Shipped `LAST=2` gives `M_FUNKY1` first, then `M_MOBIE2`, `M_REVENGE1`, `M_DISCO1`, `M_MOBIE1`, `M_EIGHTY1`. The per-track music argument of `[MAPS]` has no reader.

Each WAV goes through `0x4c7880`: a 0x2C byte header `fread`, a seek, then one `fread` of the whole sample data into the locked buffer (`0x4c7750`). Below that, the C runtime turns a music file into a 512-byte fill for the header, a seek, one direct read of N x 512 bytes and a 512-byte fill for the tail.

**Evidence.** `original-game-decompiled/docs/formats/game-data.md`, `resource-archives.md`; `docs/research/audio.md` 3, 9; `game-progression.md` 13; `startup-flow.md` keys table. `FUN_0044ad40`, `FUN_00450de0`, `FUN_004cc580`, `FUN_0055a06b`, `FUN_0055fb61`.

**Status.**
- Confirmed: loader order, the music rule, the game's WAV reads. The C runtime's read pattern was logged at the host's read call in the port, where the C runtime is the recompiled original.
- Inferred: "only sounds load during a race". From the per-tick roots (`0x44cb80`, `0x4517f0`, `0x41c150`, object and path handlers, triggers, game actions) the direct call graph with tail jumps and code references reaches the archive open `0x4c62c0` only through `0x4c7880`, and reaches no mesh or texture loader. Virtual calls were not followed.
- Unresolved: none.

**Port.** `tools/prepare-assets.py prepare_race` copies the files and writes `files.json`. `tools/build-race-lists.mjs` boots every track with every car and records which archive members were read, in `public/assets/game/race-files.json`:

| List | Content | Bytes |
|---|---|---|
| `files.*.common` | 56 ranges of `rcs.img` and `rc.img`. The first `rc.img` range starts at byte 0, for the image count | 9,183,473 |
| `files.*.etappe` | Per track | 3,492,470 to 6,856,001 |
| `files.*.car` | Per car | 175,302 to 1,031,108 |
| `music` | One range per track, keyed by its name in `[MUSIC]`. Every list run starts from the shipped `LAST`, so the tool takes music out of the sets above and lists all six here | 1,512,516 to 2,755,556 |
| `late` | All 400 WAV members other than the music, fetched in pieces of 1 MB | 27,464,773 |

`GameFiles.prepareRace` in `source/host/game-files.js` awaits the track files, the lists, with `soft[0]` or `soft[1]` for pictures and fonts at `RESOLUTION` 0 and 1, and this race's music, chosen by `raceMusic` with the rule of `0x44ad40`. Then it starts `fetchLate` without waiting for it. `fetchLate` asks for 1 MB pieces, two at a time, and adds each as it arrives, so a sound that arrived does not wait for the rest and does not cost a synchronous read. `LAST` persists through `source/host/persist.js`.

`SparseFile.read` fetches every unknown gap synchronously before it returns, because the game keeps what it read. A read above `CRT_BUFFER` (4096 bytes) counts as wanted in full. A smaller read counts only up to the end of the member it starts in, and only the part past that end can stay zero. A miss takes the rest of the member in one request. `syncRange` throws on an HTTP error, and takes the right slice from a server that ignores `Range`.

Differences on purpose: the original reads the music from disk at race start, the port fetches it before the race starts, which adds 1.5 to 2.76 MB per race. A member missing from the lists is one synchronous request, which freezes the page until it arrives, in place of a disk read. It should not happen in normal play.

The game's wait screen (`[wait_hi]` picture, `OVL_PROGRESS_BAR`, stepped by `0x4415e0` at 10 call sites) does not reach the player, because `race.boot()` is one blocking call and `blitToScreen` in `source/render/d3d-renderer.js` draws no wait picture. `RaceRunner.load` in `source/race-runner.js` shows the same picture, converted to `public/assets/loading/eNN.png`, with the bar's 11 frames as `bar-00..10.png` at the game's rectangle. The frames come from the `ovl_pNN.d3d` UVs on `overlay.tga` (`prepare_loading_bar` in `tools/prepare-assets.py`), at twice the size of the 288x24 rectangle, with the race's 565 colour key rule and bilinear filter; edge pixels are the port's choice. `showBar` picks a frame as `0x4976d0` does, `11 * pct * 0.01`. Difference on purpose: `pct` follows the download up to 90 and is then set to 95, so the last frame stands during the blocking boot, where the original steps through `raser.ini [progress]`. On the 8-bit path the game draws the PCX of `[wait_hi]` or `[wait_lo]`, and the page shows them through the game's palette as `eNN-8.png` and `eNN-lo.png`, with `bar8-00..10.png` from `overlay.pcx`.

Mesh names placed by each `.omp` of E0..E8 were cross-checked against the lists, using the `[objects]` id column of `etappeN.ini` where the name differs (`E00_REC0_ANIM` is `e00_recc.d3d`): all are present.

**Comparison.** boot-all made the lists. check-flow ran one race from a fresh profile, so one music track. Fix checks, each a one-off script:

- Headless `spel.wasm` on etappe 0 with `LAST` -5, 0, 1, 2, 3, 4, 5, 99: the predicted track is the one loaded, with 0 samples different from the archive member.
- Browser on Amsterdam with the late request held back: `LAST=3` without its music list gives 1 synchronous request of 2,755,556 bytes. With the lists and a throttled track the race waits for it, 0 misses. `LAST=0` and `LAST=5` give `M_MOBIE1` and `M_DISCO1`, 0 misses. Every browser run had the same FNV hash as the member.
- Three races in a row on one `GameFiles`, headless: `M_FUNKY1`, `M_MOBIE2`, `M_REVENGE1`, each fetching only its own track.
- Bar art: frames 0 to 10 looked at on a contact sheet; the rectangle measured at 308.5, 438, 288x24.

Only etappe 0 ran in the browser. Nobody has listened to the result, and no slow real network was tried. No check named here measured how long a miss freezes the page.

---

## Race kinds: stadsrace, stadsachtervolging, snelwegrace

**Original behaviour.** `spel.dat` has no Tour or Quick Race concept. Modes are INI values.

| | Stadsrace (0, 2, 5, 6, 7) and Country-race (9) | Stadsachtervolging, chase mode (1, 3, 4) | Snelwegrace, highway mode (8) |
|---|---|---|---|
| Switch | `[MAPS]` arg0=1, arg14=0 | arg0=1, arg14=1; menu writes `OPPONENTS=0` and `CHECKPOINT_SPEED` | arg0=0 |
| Field | Player + 4 AI; cops on 0, 2 and 9 only | Player against 10 cops, Supercop, blockades, traffic | Player + 4 AI + 1 cop |
| Laps | 2 | 2 | Forced to 1 |
| Timer 11 | Runs, not enforced; only `out_of_time` and `checkpoint_money` read it | Enforced, game over at 0, HUD countdown | Same as stadsrace |
| Start time | Not enforced. 110 s on shipped `checkpoint_speed`, or the last chase value, which the menu does not reset | 92, 71, 62 s by difficulty (`checkpoint_value` 1000 × `[CHECKPOINTTIME]`) | As stadsrace |
| Checkpoint | None placed on 0, 2, 5, 6, 7, 9 | Adds the start time, sample `CHECKPOINT`, text 44 | None placed |
| AI finish | Line after trigger 15, laps counted | No AI | First trigger 14 |
| Cops at finish | | | Cop goes FINISHED at trigger 14 or 15 |
| Qualify | Finish position | Finish in time | Finish position |
| Cheat T | Ignored | Ignored | Ctrl+Space+T: text 44, timer 11 = 100 s |

**Evidence.** `0x44c8c0`, `0x44bf10`, `0x457da0`, `0x412270`, `0x4123d0`, `0x449e20`, `0x42de60`. `M:0x48bcf0`, `M:0x461c84`. `docs/research/gameplay-systems.md` 4, 21; `game-content.md` 3.3; `startup-flow.md` section 3.

**Status.**
- Confirmed: the table. `copland` non-zero is fatal with shipped data, because `car_cfg.ini` has no `COP`. `demo=0` has no gameplay branch found.
- Inferred: `DIRECTION` and `british` swap road side and direction. `british` is set only on track 9, reachable since the track update, and the launch check's screenshot shows driving on the left there, by eye, not measured. `DIRECTION` is absent, so it acts on no track.
- Unresolved: `dif_mod`, `stuur_model`, `ai_model`, `traffic_ai_model` consumers were not searched exhaustively.

**Port.** Runs as shipped in the recompiled code. The host supplies INI reads and writes (`GetPrivateProfile*` in `source/host/win32.js`). `GameData.writeGeneralStuff`, `writeQuickRaceStuff`, `writeTourStuff`, `writeRaserStuff` in `source/menu/data.js` write the switches. Their keys and values match `startup-flow.md` section 3 by reading.

The car update overwrites `game.ini` with a copy from the developers' machine: `Nrlaps=1`, `etappe=8`, `car=7`, `money=1330`, `MOTOR`, `BANDEN`, `ABS`, `VERSNELLINGSBAK` = 1, results of a race of theirs. The menu writes etappe, car, laps, money and tune-ups before every race and the race writes the results at the end, so a player does not see those. Checks that start a race without the menu pin them: `pinRace(vfs, { etappe, car, laps })` in `source/host/race-setup.js`, which also sets `BRITISH` for etappe 9, money 0, tune-ups 0.

**Comparison.** Same machine code. City race: check-flow on Amsterdam, whose `game.ini` also shows that timer 11 does not end a race there: the 593 s race wrote `FINISHED=1` and `Out_Of_Time=1`. Chase and highway: boot-all only. Track 9: boot-all and the launch check, see Tracks. Neither chase timer nor highway finish has run in any check. check-race-ui only checks that no control covers the chase timer's rectangle.

---

## Race flow: states, countdown, frame order

**Original behaviour.** Game state `0x6fb8a0`, setter `0x44cda0`.

| State | Meaning | Set by | Game action (init, tick, exit) |
|---|---|---|---|
| 1 | Pre-race | `0x44cf60` | 2: `0x43c5d0`, `0x43c650`, `0x43c660` |
| 0 | Racing | Countdown stage 4 | None |
| 3 | Finishing | `0x456b20` | 4: `0x43ab70`, `0x43ac80`, `0x43ad40` |
| 8 | Arrest | `0x409160` only, dead | 0xB |
| 6 | Game over | `0x44c8c0`, `0x44c950` | 0xC: `0x43bc20`, `0x43bd60`, `0x43be50` |
| 4 | Exit, ends the `WinMain` loop | `0x43ad40`, `0x43be50`, `0x44c9f0` | None |

Countdown: `START_ENGINES`, then 2.2 s to digit 3, 0.9 s to 2, 0.9 s to 1, 0.9 s to GO, state 0, overlay back after 1.0 s. Total 4.9 s. No shipped `.pth` has path type 1, so the start camera path never runs. Race clocks start at the start line (trigger 13), not at GO.

Main loop `0x458270`: `0x44cb80`, `0x4517f0`, `0x44e180`, `0x458020` (break on quit message), Ctrl+F10 check, `0x41c150`. Order inside `0x44cb80`: `docs/research/sim-timing.md` C5.

**Evidence.** `0x44cda0`, `0x43c120`, `0x43c260`, `0x43c380`-`0x43c510`. `docs/research/gameplay-systems.md` 2, 7; `sim-timing.md` C5.

**Status.**
- Confirmed: states, actions, countdown stages, loop order.
- Confirmed, measured under Wine: the countdown durations below, the time from clock init to the first tick, 8.42 ms, and that tick 4 of a race is not capped there.
- Inferred: overlay 8, 9, 10 show digits 3, 2, 1, from element load order.
- Unresolved: caller of sample `GO`. That time on a slow machine: tick 4 would cap only above about 0.68 s at 60 ticks.

**Port.** `Race.tick` in `source/host/race.js` is one pass of the loop, in the same order, without the screenshot. `0x458270` is replaced (`tools/recomp/replacements.py`), the rest runs as shipped. The host supplies the virtual clock. `updateClock` keeps the 4-entry ring and feeds it 1/60 s. Its first two samples are the clock's value at init and `INIT_TO_FIRST_TICK`, 8.4 ms, as measured. So the first 3 ticks read the 0.1 s cap and tick 4 does not, as measured in the original: `dt` 0.1, 0.1, 0.1, 0.0156, 0.0167. Details: [`sim-timing.md`](sim-timing.md), Frame clock.

**Comparison.** check-flow passed start to finish on Amsterdam. check-race-ui entered states 3 and 6 through `0x44cda0`. reference-frame compared the first race frame by eye with the owner's screenshot.

reference-wine, wall clock per overlay state at `0x71277c`, on a clean clock. The code asks for a sum of `dt` of 2.2, 0.9, 0.9, 0.9, then 1.0:

| State | Original at 60 ticks: seconds, ticks | Original, no limit: seconds | Port: seconds, ticks |
|---|---:|---:|---:|
| 1 until 8 | 1.957, 117 | 1.912 | 1.950, 117 |
| 8 | 0.916, 55 | 0.902 | 0.917, 55 |
| 9 | 0.900, 54 | 0.902 | 0.917, 55 |
| 10 | 0.917, 55 | 0.901 | 0.917, 55 |
| 11 (GO) | 1.017, 61 | 1.002 | 1.017, 61 |

The first state is shorter than its 2.2 s because the three capped ticks count 0.1 s each: 2.2 - 0.25 = 1.95 s, by arithmetic. GO comes at pass 283 in the port and at 280 or 281 in the original, 282 in two of the 22 launches, since the original's `dt` has noise. Digits 3, 2, 1 were not read as such: these are the overlay states.

---

## Timers

**Original behaviour.** `gm_clock.cpp`: 18 slots at `0x6fa3e8`, based on `GetTickCount`.

| Slot | Duration, mode | Purpose | Paused by a dialog |
|---|---|---|---|
| 0 | `Arg10*1000` = 10,000,000 ms, up | Lap time, restarted each lap | Yes |
| 1 | 5000, down | Global traffic light cycle | No |
| 2 | 200, down | Fuel station. Dead | |
| 3 | `0xFFFFFFF`, up | Total race time | Yes |
| 4, 6 | None | Unused | |
| 5 | 500, down | Werklamp blink. No werklamp placed | No |
| 7 | 500, down | Werkpijlbord blink. None placed | No |
| 8, 9, 10, 12, 13, 14 | `0xFFFFFFF`, up | Race time of racer 0..5 | Yes |
| 11 | `checkpoint_value*checkpoint_speed`, down | Checkpoint countdown | Yes |
| 15 | Sum of seconds, down | Invulnerable | No |
| 16 | Sum of seconds, down | Freeze racers | No |
| 17 | Sum of seconds, down | Fast forward | No |

Timers 0, 3, 11 and the racer timers start at trigger 13. Other wall-clock checks: 60 ms hit lockout, 100 ms turbo use, 200 ms smoke, 300 ms scrape, 1000 and 1500 ms event delays, 4000 ms detach, 5000 ms reset lockout.

**Evidence.** `0x448290`-`0x4486a0`, `0x44ca80`, `0x42e440`. `docs/research/gameplay-systems.md` 3; `sim-timing.md` C3.

**Status.**
- Confirmed: the table.
- Inferred: none.
- Unresolved: behaviour at `GetTickCount` rollover, no handling seen.

**Port.** Runs as shipped. The host supplies `GetTickCount` and `timeGetTime` from `VirtualClock` (`source/host/win32.js`), advanced by `Race.tick`. In a pause or quit dialog `Race.tick` still advances the clock, as `GetTickCount` runs on through the original's blocking dialog. So slots 0, 3, 11 and the racers stand by their pause stamp and move forward on resume, while slots 1, 5, 7, 15, 16, 17, the wall-clock checks and the frame-clock time run on. A timed bonus can run out during a pause, and pickups fade and respawn, as in the original.

Differences on purpose (`docs/intentional-differences.md`): a hidden tab, lost focus and the open settings panel stop every clock, because `RaceRunner.frame` runs no ticks then. When the browser falls behind, at most 6 ticks run per display frame and the rest are dropped, so all clocks slow down with the game. In the original the `GetTickCount` timers keep real time while the `dt` cap slows the game.

**Comparison.** Same machine code, on a virtual clock. check-race-ui on Amsterdam: `pause: P stops the race clocks, the wall clock runs on` read slot 3 at 434 ms before and after while the clock moved 1 s, and `pause: any key resumes, and the race clock goes on from where it stood` read 434 then 901 ms. Slots 0, 11, the racers, and 1, 15, 16, 17 were not read. `focus: clock stops, sound suspends, input clears`, `focus: resumes without a jump` and `hidden tab: clock stops and resumes` cover the stop on purpose. check-flow has lap and total times in `game.ini`, `TRACKTIME` 603433. Timer values were not compared with the original.

---

## Laps, checkpoints, finish line, triggers

**Original behaviour.** Each chunk has two trigger values, fired for the player by `0x4a70a0` when the chunk changes. AI racers read them themselves in `0x412410`, plus the waypoint's trigger. Table `0x5a3ab8`, 69 entries.

- **Start:** trigger 13 is one-shot and starts timers 0, 11, 3 and the racer timers. Start chunk = the chunk with trigger 13, minus 1, unless `STARTCHUNK` is set.
- **Finish:** trigger 15 arms, trigger 14 finishes. Only in state 0, 7 or 8 and when armed. Forward crossing counts a lap (`0x456a30`); laps >= `NRLAPS` ends the race. Crossing the wrong way disarms the line.
- **Lap:** `lap_time[laps]=t`, timer 0 restarts, new lap record copies splits. `LAATSTE RONDE` (text 45) only when laps == NRLAPS-1 and no lap record was set on that lap.
- **Checkpoint (45):** needs `BonusCountDown`, driven chunks >= 0, not within ±1 chunk of a checkpoint taken this lap. Mode 1: timer 11 += start value, sample `CHECKPOINT`. Text 44 `EXTRA TIJD`.
- **AI lap:** trigger 0xF then 0xE with rising chunk counts a lap, on highway 0xE finishes at once.

Chunk triggers placed:

| Id | Handler, meaning | E0 | E1 | E2 | E3 | E4 | E5 | E6 | E7 | E8 | E9 |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 1 | `0x457880` flitser | 4 | 4 | 4 | 4 | 4 | | | 5 | 4 | 5 |
| 9 | `0x457f50`, flag with no reader | 1 | 1 | 1 | 1 | 1 | | | 1 | | 1 |
| 13, 14, 15 | Start, finish, arm | 1 each | 1 each | 1 each | 1 each | 1 each | 1 each | 1 each | 1 each | 1 each | 1 each |
| 44 | NULL in the table | | | | | | | | | 1 | |
| 45 | `0x457e40` checkpoint | | 4 | | 5 | 5 | | | | | |
| 50 | Radio location 2 | | | | | 1 | | | | | |
| 58 | `system_goleft` | 6 | | 4 | 3 | 3 | 2 | 2 | 6 | | |
| 59 | `system_goright` | 3 | 1 | 8 | 7 | 9 | | 1 | 8 | | |
| 60 | `system_gofork` | | 1 | 3 | | | | 1 | 3 | | |
| 61 | `system_gozigzag` | | | 2 | | 4 | 1 | 1 | 1 | 2 | |
| 63 | `~call_for_backup` | 1 | | | | | | | | 3 | |
| 64 | `~go_for_it` | 1 | | | 1 | | | | | 2 | |
| 67 | `~challenge_at_start` | 1 | | | | | | | | 1 | |
| 68 | `~challenge_at_finish` | | | | | | | | | 1 | |

Waypoint triggers placed: value 10 on 6 E0 waypoints, 255 on one each on E3 and E6, 2 on one and 44 on 8 on E8. E9 not counted.

**Evidence.** `0x457820`, `0x4a70a0`, `0x457ab0`, `0x456b20`, `0x456bf0`, `0x456a30`, `0x457e40`, `0x457da0`, `0x457dd0`, `0x412270`. Parse of `etappeN.pmp` and `.dmp`, with the field order of `FUN_004ab6d0` and `FUN_004aa9d0`. `docs/research/gameplay-systems.md` 4.

**Status.**
- Confirmed: all of the above, including the trigger table from data.
- Inferred: none.
- Unresolved: none for the chunk triggers. E9's waypoint triggers are not counted here.

**Port.** Runs as shipped, including `0x457e40`, which Ghidra left outside any function and the recompiler added as an entry from the pointer in the trigger table (`tools/recomp/recompile.py scan_entries`, present in the code map). The host supplies only the track files.

**Comparison.** Same machine code. check-flow: on Amsterdam a bot drove both laps and the game wrote `FINISHED=1`, `TRACKTIME` 603433. Fix check, two whole bot races on fixed seeds with the renderer before and after its last edits: a flitser fired at tick 20720 and the finish flag went up at tick 36944 in both. Checkpoints do not exist on Amsterdam, so **no check has run a checkpoint**.

---

## Race positions and finish table

**Original behaviour.** `0x4128a0`, per tick. Player position = number of racers with more driven chunks, tie by bearing. Frozen once finished. Position change sends `~racer%dpassing` or `~racer%dpassed`. At the end `0x42e150`: unfinished racers get `time += (time / (total - toGo)) * toGo`. Position = number of lower times, +1 if >= player position.

Finish sequence: `0x43ab70` chase camera, `FINISH_JUICHEN`. `0x43ac80` waits 1500 ms, overlay 5 (finish table), then Esc, Enter or Space and their release. `0x43ad40` state 4. In state 3 gas, brake and turbo are forced to 0. Table: rows at y 120, 192, 264, 336, 408 at 640x480; best time `%02d:%02d:%d`, others `+` and the difference, unfinished `--:--:-`; the player's row blinks while `ms % 600 < 300`.

Written at exit to `game.ini`: `finished`, `lap_%d_time`, `lapcount`, `out_of_time` (timer 11 reads 0), `total_loss` (player damage >= 1000) always; if finished also `money`, `TURBO_AMOUNT`, `radarbonus`, `checkpoint_money`, `tracktime`, `position`, damage state; if opponents too `[RACERS]`; best times per etappe and league. On a track in mode 0 a race longer than timer 11 writes `finished=1` with `out_of_time=1`. The menu tests `finished` first.

**Evidence.** `0x4128a0`, `0x42e150`, `0x42e0d0`, `0x44afc0`, `0x44b1c0`, `0x44afe0`, `0x44ae80`, `0x4940e0`. `docs/research/gameplay-systems.md` 5, 8; `hud-overlay.md` finish table section.

**Status.**
- Confirmed: all of the above.
- Inferred: prize money is computed in the menu, since `0x4501c0` has no live caller. The menu pays `FirstPlaceBonus=2500`.
- Unresolved: none.

**Port.** Runs as shipped. The host supplies INI writes. `GameData.readGameIni`, `fillRankResults` in `source/menu/data.js` read the results; the menu's rank list sorts by time and ignores the slot field, as `M:0x48003c` does. `flowQuickRace` and `flowTour` in `source/menu/flow.js` choose the next form.

On a screen wider or taller than 4:3, `source/host/hud-layout.js` keeps the table's slide: in overlay state 5 each `STRING_FINISH_POS_n` starts at the screen edge and ends at its original place, and the portraits travel from their column to the table. At 4:3 nothing changes. See [`hud.md`](hud.md).

`RaceRunner.updateResults` in `source/race-runner.js` watches overlay states 5, 6, 7, 12. On touch it hides the wheel and buttons and shows one Verder button that stands for Space (`#dlg-results`). On a pad, a new press of A pulses Space and Back pulses Esc. `RaceRunner.endWait` keeps the last frame until Esc, Enter and Space are up, as `0x43ac80` waits for their release, with a 5 s limit that the original does not have, and the menu ignores key repeats until a new press. Port additions; the prompt text stays the original's.

**Comparison.** check-flow: `TfrmResults` shows five rows with times from a real race on Amsterdam. The player is fifth at +2:41:65 behind 7:21:78, which fits `TRACKTIME` 603433 (`evidence/flow/12-results.png`). run-bot: `game.ini` results written headless. check-race-ui, entered through `0x44cda0(3)`: `finish: wheel and actions gone, Verder shown`, `finish: Verder ends the race, which waits for the finger to lift`, `finish: pad A held does not skip it, a new press does`. Fix check of the table's slide: bot race at 1280x720, 800x360 and 360x800, frozen frames looked at, plus position dumps. The live HUD position and the unfinished racers' time estimate were not asserted. Inferred: the fifth row, +6:51:71, is that estimate, since it lies later than the race lasted.

---

## Game over, arrest, penalties

**Original behaviour.**

| Mode `0x59a190` | Cause | Overlay | Text |
|---|---|---|---|
| 0 | `0x44c950`: player damage > 1098 in state 0 | 6 | `RACE OVER` + `TOTAL LOSS` |
| 1 | `0x44c8c0`: timer 11 expired, track mode 1 | 0xC | `RACE OVER` + `TIJD IS OM` |
| 2 | Caught 3 times | 7 | `RACE OVER` + `GEARRESTEERD`. Dead |

Game over runs an orbit camera, after 1000 ms Esc, Enter or Space ends it. `finished` stays 0, so no money is written. Below 6 s of timer 11: `TIME_TICK` once per displayed second.

**Arrest is dead code in v1.01.** State 5 has no writer. `RacerCloseAndStopped 0x4043dc` and `ArrestReady 0x40452f` have no call and no pointer in the file. So `g_times_caught`, texts 49 and 50, `ARREST_*` samples and radio event 3 never occur. Contact with police only causes physics and damage.

Lap times have no penalty rule. Driving backwards lowers driven chunks, which blocks checkpoints when negative and lowers position.

**Evidence.** `0x44c950`, `0x44c8c0`, `0x43bc20`, `0x43bd60`, `0x409160`. `docs/research/gameplay-systems.md` 6.

**Status.**
- Confirmed: all of the above.
- Inferred: none.
- Unresolved: none.

**Port.** Runs as shipped. The way off the screen is the same as for the finish table, see the previous section. `afterRace`, `flowQuickRace`, `flowTour` in `source/menu/flow.js` show the lose screens.

**Comparison.** Same machine code. check-race-ui, `game over: Enter ends it, the race waits for its release, and the menu ignores repeats`: it sets mode 0 and enters state 6 through `0x44cda0`, so the screen, its 1000 ms wait and the exit ran, but **neither cause has run in a check**: not damage above 1098, and not timer 11 reaching 0. form-check walked the menu branches with a faked `game.ini`, which covers the menu side only.

---

## Flitser, flitspaal, money

**Original behaviour.**

1. **Flitser fine, trigger 1 `0x457880`:** if player km/h > limit `0x5a3ab0` (70 on shipped data) and moving forward over the chunk: money -50, text 67 `FLITS BOETE -50 EURO`, sample `FLITS`, game action 0. At 16 bits action 0 fills the back buffer once, with palette index 15, white in `e02_pl16.pcx`, through `Blt(COLORFILL)` (`0x43b130`, `0x4c4f70`, `0x4c4e00`): one white frame. At 8 bits the same action writes the palette instead (`0x43b0b0`, `0x43b130`, `0x43b0f0`): entries 0 to 254 at 235 for one flip, then back.
2. **Flitspaal object, type 7 `g_fltsrp_ANIM`:** mass 150, friction 0.9, elasticity 0.2. On contact: `0x452020` clears trigger 1 on the next 20 chunks, `PAAL_HIT_CAR`, money +100, text 51 `FLITS BONUS +100 EURO`. One bonus per object.

Counts per etappe, poles and triggers alike: E0-E4 4, E7 5, E8 4, E9 5, E5 and E6 none.

**Money.** `[PLAYER] money` at start, clamp 0..999999. Sources in a race: `pw_1pts` +100, `pw_5pts` +500, `pw_10pts` +1000, flitspaal +100, flitser -50. Written only if finished. Radar bonus `0x6fbdec` has no writer, so `radarbonus` stays 0. Old fines and prize HUD `0x43e130`, `0x43e4c0` have no reference. The menu takes the money back in `FillRaceResults`.

**Evidence.** `0x457880`, `0x43b0b0`, `0x43b130`, `0x4c4f70`, `0x4c4e00`, `0x451ed0`, `0x451f90`, `0x452020`, `0x450300`. `docs/research/gameplay-systems.md` 13, 18; `8bit-drawing.md` section 6; `etappeN.pmp`, `.omp`.

**Status.**
- Confirmed: all of the above. The fill goes through `Blt` flags `0x1000400`.
- Inferred: palette index 15 is white, from reading `e02_pl16.pcx`, which `[PALET]` names for 16 bits. Each pole pairs with one flitser trigger, from equal counts.
- Unresolved: the flash at 8 bits on a run of the original. It is read from the code, and no frame of the guest caught one (`docs/research/render-8bit.md`).

**Port.** Fine, texts, samples, money and the trigger clearing run as shipped. The white frame: `blt` in `source/host/directx.js` passes a colour fill on the screen to `D3DRenderer.fillScreen` in `source/render/d3d-renderer.js`, which stores it, and `present` draws it with `drawScreenFill`, a scissored clear of the view area after the HUD. The fill replaces the frame of its tick: it stays until the next tick has flipped, or for one tick's time when ticks have stopped. Colour 0 is ignored, because those fills clear the screen at start-up and exit (`0x4c4fa0`, `0x448160`), when the page swaps canvases and keeps the last frame up.

Difference by the fixed tick: the white shows for one tick, so one display frame at 60 Hz or lower and about 16.7 ms above that. That is shorter than on a period machine at 25 to 30 FPS.

At 8 bits there is no fill: the game's `SetEntries` reach `D3DRenderer.setPalette`, which keeps a queue so that each palette a flip showed gets a present, so the flitser's lasts one flip.

**Comparison.** Same machine code for the rules. check-software saw the flash at 8 bits in the port's palette at `RESOLUTION` 1, and the palette back after it. That reads the port only. Fix checks, on Amsterdam with the bot: a real flitser on the bot's route at tick 20720 wrote colour `0xFFFF` to the back buffer. Forced through `0x43c120`, pixels read back per present: 2 to 3 white presents over 13 to 21 ms at a 144 Hz stand-in, 1 present of 16.5 ms at 60 Hz, 1 present at 30 and at 20 Hz, all sample points white at render scale 50, and with ticks stopped right after the fill 2 presents, then cleared. These stand-ins are timers in place of `requestAnimationFrame`, not real displays. The money change of a fine, a flitspaal hit and its trigger clearing were not asserted by any check.

---

## Pause, quit, reset, restart

**Original behaviour.** `0x44cf90`, not in state 6 or 3.

- `P`: overlay 2, kind 1. `Esc`: overlay 3, kind 2. Handled after the frame is flipped twice.
- `0x44ca80`: saves and silences mixer line 4, pauses timers 0, 3, 11 and the racer timers, blocks in `0x44c990` or `0x44c9f0`, restores, resets the frame clock.
- Pause `0x44c990`: wait for `P` release, then one sweep over VK 0 to 255 waits for each key found down, and the first key found ends the pause when the sweep is over. VK 1, 2 and 4 are the mouse buttons. Quit `0x44c9f0`: wait for `Esc` release; `J` or `Y` state 4; `Esc` or `N` resume, after which only `Esc` is waited for. Every key reads as up while Shift is down (`0x4c5e40`).
- **Reset:** Enter (`CM_KEYB_RETURN`) calls `0x40e5a0(player, chunk, 1)`, refused within 5000 ms of the last. Up to 10 chunks forward, first waypoint of the object's side with no car on it, height +20, heading from `0x4a6e80`. Text 66 when done. Text 68 `DRUK ENTER/RETURN VOOR RESET` after `RESETWAITTIME` 10 s without wheel contact.
- **Automatic correction:** `0x40e5a0` without throttle from `0x419600`, `0x407300`, `0x41ed30`, `0x44ea60` when `0x419450` holds > 0.25 s (a component of the vector from `0x4a1d20` > 10).
- **Restart:** none in `spel.dat`. One process runs one race.
- **Cheats, active in release:** Ctrl+Space+I, text 46, invulnerable. Ctrl+Space+T on highway tracks, text 44.

**Evidence.** `0x44cf90`, `0x44ca80`, `0x44c990`, `0x44c9f0`, `0x4c5e40`, `0x40e5a0`, `0x44d705`, `0x44cc9f`. `docs/research/gameplay-systems.md` 9; `input.md` C7, H6.

**Status.**
- Confirmed: all of the above.
- Inferred: the vector from `0x4a1d20` is angular velocity; `RESETWAITTIME` counts seconds without wheel contact.
- Unresolved: none.

**Port.** `0x44ca80` is replaced. `installPause`, `pollPause`, `endPause` in `source/host/race.js` run the same steps across ticks, with the same key rules. The picture stays on the frame of the key's tick: `RaceRunner.frame` keeps that tick's capture and calls `present(1)` under a dialog. Mute is `pauseAll` on the master gain (`source/audio/game-audio.js`), and a Volume change during a dialog is only heard after it. A mouse button or tap on the race sets its VK (`RaceRunner.canvasPress`).

Reset runs as shipped. Keyboard: Enter as VK and DIK (`source/input/keyboard.js`). Touch: `#touch-reset` in `source/index.html`, with VK 13 and DIK 28, usable with the wheel held. Gamepad: left stick click (`EDGE_BUTTONS.reset` in `source/input/gamepad.js`, `pollRace` pulses VK 0x0D). The hint and the done text stay the original's and name Enter on every device.

Other dialog controls: on touch Pauze and Stop, then Ja, Nee or Verder (`#dialog-keys`). On a pad Start and Back, then A or B. In full screen a mouse user also gets Stop beside the gear, and leaving full screen during a race opens the quit prompt, because a browser may keep that Esc for itself (`RaceRunner.leftFullscreen`).

Cheat T: `bindKeyboard` in `source/input/keyboard.js` calls `preventDefault` for Ctrl+T, because `browserKey` leaves that chord to the game, but desktop browsers reserve it (`input.md` H8, a browser fact), so the cheat may not reach the game. In full screen `source/app.js` asks for `navigator.keyboard.lock` on Esc, T, N and W where it exists; its effect was not checked. The effect on rules is small: timer 11 ends no race on the highway track, the only track that accepts the cheat.

Restart: `App.startRace` in `source/app.js` and `RaceRunner.load` start a new `Race`, a fresh wasm instance, as the original started a new process.

**Comparison.** check-race-ui on Amsterdam, by name:

- Pause: `pause: P stops the race clocks, the wall clock runs on`, `pause: the picture stays still` (98 frames, 1 distinct), `pause: Shift alone resumes nothing, and masks other keys`, `pause: any key resumes, and the race clock goes on from where it stood`, `pause: a mouse button on the race resumes, once released`.
- Quit: `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release`, `quit dialog: J ends the race, finished=0`, and in full screen `full screen: Stop asks, and Nee answers on screen`, `full screen: leaving opens the quit prompt, and it stays off`. check-phone-flow: Stop and Ja by tap, back in the menu with `FINISHED=0`.
- Reset: `touch: Reset places the car back, with the wheel held and still held after` and `gamepad: left stick click resets the car`. Both read the reset stamp at `0x5d1b00`, and the pad is a stand-in for `navigator.getGamepads`.

check-driving: Enter reset, the car back on the road. Chord handling: `keyboard: turbo chords stay in the game, browser keys stay with the browser` uses synthetic events, so it says nothing about what a browser does with a real Ctrl+T. Fix check of the mute: Volume 40 during a P pause keeps the master gain at 0 and an analyser at RMS 0, above 0 after the pause. Fix check of a series: three races in a row in Node on one `GameFiles`, boot and 30 ticks each. No check drives a second race on one page in a browser. The 5000 ms reset lockout, texts 66 and 68 as rules, automatic correction and the cheats were not asserted. Text 68 was only forced on screen to check layout at 320x568.

---

## Opponents, overtaking, routes

**Original behaviour.**

- **Field:** `intel.ini NrOpponents=4`, fatal above 6. Cars are the first four of `RACER_0..4` without the player's. Grid `start chunk - position`. No opponents on chase tracks. Results have five rows.
- **Speed scaling for AI cars, `0x429710`:** `MaxSpeedPenalty` 90/120/200 %, `MaxRPMPenalty` 115/80/50 % by league.
- **FSM `0x413000`:** RACING, BREAK_FREE (stuck > 2 s, leaves after 2.5 s), IRRITATING, TOTAL_LOSS (damage > 1099), FINISHED. AGGRESSIVE and PUSHING exist in code, but all `opponent.ini` lines use `IRRITATING` and one skill word. Other state ids hit `Fatal "State missing"`, and no transition goes there.
- **Routes:** five route slots from waypoint links (`0x418280`), speed per slot (`0x422c00`, `0x423560`). `0x418100` invalidates slots with a slower car ahead or beside. Selection `0x418710` by lane preference. Overtaking is route choice, no separate state.
- **Steer `0x403a70`:** angle to target; beyond `MaxAngle` 400 full lock, else `a/SteerFactor(4)`.
- **Speed `0x4038a0`:** corner speed `60-a/15` NOVICE, `60-a/17` NORMAL, `60-a/19` SKILLED; hold back mode; rubber band; route speed; gas += 100·dt, brake += 200·dt.
- **Rubber band `0x403490`:** leagues 0 and 1 only, player > 17.5 m/s: lead > 40 chunks caps at player speed - 12.5 or - 8.75; lead > 15 or 20 chunks caps at - 5 or - 1.25; floor 10. All leagues: next-car gap from `opponent.ini DISTANCEnm`.
- **Target position `0x41a300`:** `TARGETPOS[10]` by race progress decile sets hurry or hold back.
- **Freeze bonus:** racers skip FSM and controller, velocities saved and restored. Cops keep running.

| Difficulty effect | Makkelijk 0 | Normaal 1 | Moeilijk 2 |
|---|---|---|---|
| AI max speed, derived from stock | 90 km/h | 138 km/h | 260 km/h |
| AI max RPM from 4500 | 5175 | 3600 | 2250 |
| Skill word | NOVICE | NORMAL | NORMAL on E0, E1; SKILLED on others |
| Rubber band, close | Lead > 15: -5 m/s | Lead > 20: -1.25 m/s | None |
| Rubber band, far | Lead > 40: -12.5 m/s | Lead > 40: -8.75 m/s | None |
| `[Level L] DISTANCE01..45` | 14,10,10,10,10 | 10,10,10,12,12 | 20,10,10,14,5 |

**Evidence.** `0x42de60`, `0x429710`, `0x419600`, `0x413000`, `0x412570`, `0x418890`, `0x418280`, `0x418100`, `0x418710`, `0x403a70`, `0x4038a0`, `0x403490`, `0x41a300`. `intel.ini`, `opponent.ini`. `docs/research/gameplay-systems.md` 10; `game-content.md` 2.2, 4.

**Status.**
- Confirmed: all of the above.
- Inferred: `[Racer N Level L]` picks L = league. Lanes 0, 1, 2 are centre, left, right. Brake at low speed reverses in the dynamics.
- Unresolved: `0x422c00`, `0x423560` were not read.

**Port.** Runs as shipped. The host supplies `intel.ini`, `opponent.ini` and the `rand` seed. Menu writes `LEAGUE` and `OPPONENTS`.

**Comparison.** Same machine code. check-flow: four AI racers on Amsterdam at Normaal, with times in `TfrmResults`, three ahead of the player and one with the estimate, see Race positions. run-bot: a whole race with opponents, headless. repeat-trace's checksum holds the AI cars' state too, port against port, see the top of this file. x87 at 53 bits can change last bits, so AI paths cannot be compared bit for bit with a native run. Other leagues and tracks: not run.

reference-wine, no input, 31 s from GO, shipped opponents. Seven wheeled cars exist, with the same object indices in both. 246, 808 and 1169 stand still in these runs, and the racers are 1196, 1209, 1217, 1230. Path length in world units over 30 s after GO, sampled at 10 Hz:

| Run | 1196 | 1209 | 1217 | 1230 |
|---|---:|---:|---:|---:|
| Original 1 | 6884 | 7845 | 6742 | 6374 |
| Original 2 | 6907 | 7826 | 6765 | 6781 |
| Original 3 | 6811 | 7797 | 6673 | 6771 |
| Port | 6904 | 7842 | 6766 | 6750 |
| Port, `--whole-push` | 6904 | 7834 | 6766 | 6797 |

The original differs from run to run. Racer 1230 at 6374 had already lost about 240 units 10 s after GO, for a reason this does not show. Without that one value, the port is within 1.8% of each original value. Speeds after 20 s are near 25 m/s in both. This measures path length only: not the AI's states, overtaking or recovery.

---

## Traffic

**Original behaviour.** 50 slots at `0x5d1ba8`. `traffic.ini [Traffic Track N]` is always read and overwrites the defaults: `MAX_TRAFFIC_LEFT`, `MAX_TRAFFIC_RIGHT`, vehicle list.

| Track | Left | Right | Vehicles (count) |
|---|---|---|---|
| 0 | 2 | 3 | 01:2, 05:1, 04:2, 02:1, 11:1, 08:1 |
| 1 | 6 | 8 | 05, 11, 12, 07, 01, 09, 10 (2 each) |
| 2 | 2 | 6 | 02:2, 05:1, 04:1, 07:1, 05:2, 08:1 |
| 3 | 4 | 2 | 05, 01, 06, 07, 02, 10 (1 each) |
| 4 | 2 | 3 | 05:3, 04:2, 03:1, 07:2, 02:2, 10:2 |
| 5 | 4 | 4 | 01:2, 03:2, 05:1, 09:1, 12:2 |
| 6 | 4 | 8 | 13:2, 14:2, 15:4, 16:2, 17:2 |
| 7 | 4 | 8 | 05, 02, 06, 07, 02, 10 (2 each) |
| 8 | 7 | 5 | 05:1, 01:2, 06:3, 07:2, 02:2, 10:2, 12:2 |
| 9 | 4 | 8 | 08:3, 04:2, 06:1, 07:2, 02:2, 10:2 |

Rigid bodies without wheel physics (`0x42a3d0`), mass from `car_cfg.ini`. Target speed `0x413de0` by speed trigger; with none placed, 17.5 m/s for shipped flags. No shipped flag words, so all roaming traffic has flags 1. State machine `0x415d20`, `0x415c60`, `0x415ba0`: follow path, brake for a red light on waypoints with trigger 10 (E0 only), look ahead, lane changes. Beyond visible chunks from the player: inactive, physics asleep. Traffic light: 5000 ms state 0, 5000 state 3, 500 state 2, on timer 1.

Recycling `0x41ca20`, `0x41cae0`: for inactive slots, 20% chance per tick, only at >= 15 FPS; random waypoint at visible-1 chunks ahead, skip if flagged or near another car; placed at waypoint +2 height.

**Traffic pushes.** `0x428950` and `0x415E40` apply a lateral and a down impulse to traffic and path vehicles once per tick, with no time step, so the push per second grows with the frame rate and the nose of traffic lifts at high rates. The mass comes from 1/x, through the `FDIVR` at `0x416002` and `0x42898F`. The owner's `A2-Racer-4-Fixes` part 9 patches this (`traffic_mass`) and measured it under Wine.

**Evidence.** `0x427970`, `0x413a10`, `0x4275e0`, `0x413cf0`, `0x413de0`, `0x415d20`, `0x41ca20`, `0x41cae0`, `0x454f70`. `traffic.ini`, `car_cfg.ini [traffic]`. `docs/research/gameplay-systems.md` 14; `game-content.md` 2.3; `sim-timing.md` C2, C6.1. Owner's table: `A2-Racer-4-Fixes`, `README_technical_spel.dat.md` part 9.

**Status.**
- Confirmed: all of the above from code and data, except the nose rise of the original, which is the owner's measurement and not one made here. VEHICLE13..17 occur only on E6, the only anim file defining them.
- Inferred: none.
- Unresolved: lane change details `0x423040`, `0x4155b0`, `0x4153a0`, `0x414640`, `0x414950`. Flag `0x2000` has no setter found.

**Port.** Runs as shipped, with two changes on purpose.

Pushes: the numerator of the two pushes, the `1.0` in those `FDIVR`, is a cell at `0x3F1000` that `Race.instantiate` in `source/host/race.js` fills with `min(1, tick*25)`, 0.4167 at 60 ticks (`PATCHES` in `tools/recomp/replacements.py`). Traffic gets one whole push per 1/25 s at any tick rate. This follows the owner's patch, not the unpatched game: `docs/intentional-differences.md`, and the timing argument in [`sim-timing.md`](sim-timing.md), Traffic pushes.

FPS gates: `updateClock` makes `dt` 1/60 s, to the last bit, once the start ramp is over, so after the start these cannot fire, even when the browser falls behind: traffic re-placement below 15 FPS (`0x41cae0`), spawns at 12 (`0x43dd90`, `0x446c70`), effect wipes below 10 (`0x43de00`, `0x446fe0`), the view distance governor below 10 (`0x44cb30`). View distance and effects stay full on a slow device, on the 8-bit path too. In the original the view distance floor of 15 and the smoke gate were seen on the emulated machines of reference-86box: [`sim-timing.md`](sim-timing.md), Callers of dt. The re-placement chance of 20% per tick runs at 60 ticks per second. Nothing in the code was changed for this, and nothing was added to replace them.

**Comparison.** Same machine code apart from the push. check-traffic on Amsterdam, peak forward y of traffic in the 3 s after a start, on the owner's method:

| | 60 ticks or FPS: mean, highest | 30 ticks or FPS: mean, highest |
|---|---|---|
| Port, whole pushes, as unpatched (`--whole-push`) | 0.295, 0.742 | 0.102, 0.327 |
| Owner's table, the original under Wine | 0.51, 0.74 | 0.19, 0.30 |
| Port, with the traffic share | 0.087, 0.208 | 0.064, 0.193 |
| Owner's table, his patched game | 0.08, 0.18 | 0.11, 0.19 |

The means are over more starts of more kinds than the owner's (24, 17, 15 and 17 starts in 110 s), so they are not comparable. The highest values agree within 0.03 in all four cells. The port runs at 60 ticks in play, so the 30 tick cells are a cross-check of the method only.

Traffic was present in check-flow, run-bot and the benchmark without a check on its other behaviour: states, lane changes, red lights and re-placement were not asserted. repeat-trace's checksum holds its state, port against port. reference-wine could not make the owner's measure on the original: a car waiting at the start sees 0 or 1 traffic starts in 31 s.

---

## Police pursuit

**Original behaviour.** `.omp` type 9: `police01_ANIM` E0 2, E1 10, E2 4, E9 2; `police02_ANIM` E3 10, E4 10, E8 1, E9 1. None on E5, E6, E7. 40 in total. Parked until triggered. `cops.ini` has no track 9 section, it ends at 8; boot-all and the launch check ran with no message on that.

- **Detection `0x412e20`:** `c = cop chunk - 2`. A racer on chunk `c` with speed >= its limit is chased. The player on chunk `c` is chased when `0x40e340` finds a speed trigger and the speed exceeds it. With none placed the default 8 applies: `NoMaxSpeed` 0, so any forward speed.
- **Chase start `0x40d6f0`:** free slot among 12, `CopsPerRacer` 1, `CopsPerPlayerEasy/Hard` 4/4. Siren `POLITIE_SIRENE`, radio event 1, tactic.
- **Tactics `0x407730`:** per-cop lists never load (`0x58fd68` constant -1), so all use `Default=0,1` at random: tactic 0 BESIDE 2, INTO 4, BESIDE 1, MEGAPHONE 2, BESIDE 1, INTO 5; tactic 1 FRONT 3, MEGAPHONE 2, BESIDE 5, INTO 3 (seconds). Step timer runs only while the step's condition holds.
- **FSM `0x413250`:** BREAK_FREE when stuck > 2 s and target > 20 m/s. HANDBRAKE_TURN when more than 3 chunks ahead. GIVE_UP at tactic end or |chunk diff| > 50, then ACT_LIKE_TRAFFIC (16 m/s, no siren), KILL_COP at > 30 chunks from the player. TOTAL_LOSS at damage > 1099.

No arrest: contact only causes physics and damage. MEGAPHONE plays radio event 5 (`CMP05_00..03`). Events 1, 2 have no samples.

**Evidence.** `0x4536e0`, `0x423a50`, `0x407300`, `0x412e20`, `0x40e340`, `0x40d6f0`, `0x4079a0`, `0x407730`, `0x4081e0`, `0x408410`, `0x408370`, `0x408120`, `0x413250`, `0x408df0`, `0x408e10`, `0x408f00`. `cops.ini`, `intel.ini`. Parse of `.omp`, `.pmp`. `docs/research/gameplay-systems.md` 11, 19.

**Status.**
- Confirmed: all of the above.
- Inferred: type 9 cops draw `POLICE01_ANIM`, `POLICE02_ANIM` and take mass, sound and damage from rows `COP0`, `COP1`. The racer limit field `0x5cea78` stays 0, since its only writer is `FUN_00412270` on triggers that are not placed; so racers on `c` are chased at any forward speed. `0x40d6f0` type 2 test likely never fires.
- Unresolved: flag `0x4000` reader.

**Port.** Runs as shipped. The host supplies `cops.ini`, siren and radio samples through DirectSound (`source/host/directx.js`, `source/audio/game-audio.js`).

**Comparison.** Same machine code. Cops exist on Amsterdam, 2 of them, but no check asserted a pursuit. boot-all shows every track places them without error.

---

## Roadblocks: blockade cars

**Original behaviour.** The FSM roadblock is dead: `0x408520`, `0x40894a` have no reference; `0x40d640` is called only from `0x408520`. The live roadblocks are scripted path cars, types 13..21 (`pth_ptrf 0x4658e0`).

At race load, per path: types 13..15 car `COP0` (`PATH_POLITIE_ANIM`), 16..18 `COP1` (`PATH_POLIZEI_ANIM`), 19..21 random traffic type; rigid body mass 800, friction 0.9, elasticity 0.2. Speed = `total point length / (ms*0.001) * 0.1`. Trigger: player enters the trigger chunk, right lap, path not in use. It drives point to point at full gas, next point at < 30 units. Lap field: 0 any lap, else the lap number + 1. At the last point: 13, 16, 19 removed; **14, 17, 20 stop, gas 0, brake 100, stay as an obstacle**; 15, 18, 21 become ordinary traffic. No chase, no siren FSM.

| Track | Type 14 (Dutch) | Type 17 (German) | Type 18 | Lap-limited |
|---|---|---|---|---|
| E0 | 3 | | | none |
| E1 | 14 | | | 5 with lap field 2 |
| E2 | 3 | | | 2 with lap field 2, 1 with lap field 1 |
| E3 | | 17 | | none |
| E4 | | 18 | | 6 with lap field 2, 4 with lap field 1 |
| E8 | | 6 | 1 | none |

**Evidence.** `0x4658e0`, `0x464de0`, `0x465d00`, `0x4161d0`, `0x421f50`. Parse of `etappeN.pth`, checked against the research tables. `docs/research/gameplay-systems.md` 11, 15, 22.

**Status.**
- Confirmed: all of the above.
- Inferred: these are the "blokkades" Harry and Honney talk about; no code links them. 10 world units = 1 m.
- Unresolved: none.

**Port.** Runs as shipped. Host: `.pth` files, meshes through the lists.

**Comparison.** Same machine code. Created at load, so boot-all shows creation on all tracks. No check asserted a trigger or a stop.

---

## Supercop

**Original behaviour.** Object type 28 `humvee_ANIM`, one each on E1, E3, E4. FSM slot 18, behaviour `Default` from `behavior.ini`: FrontVisibilityRange 12, RearVisibilityRange 8 (loaded, not used), MegaphoneFrequency 70, OvertakeBashFrequency 80, StayInLaneDistance 220, HandBrakeSlowDownBias 0.70, PatrolSpeed 8.33, MaxCornerSpeed 61.1, Acceleration 1, Aggression 1, biases 24, 64, 64, Risk 1, Cheat 1. Damage model `dam_supercop`.

FSM `0x41e910`: PATROL, CHASE (behind and |d| <= 7), BEHAVIOR_01 frontal, 02 sideways, 03 rear, 04 bash, BASH_INACTIVE, BREAK_FREE, TOTAL_LOSS (damage > 1099), ROLLED_OVER, INACTIVE (player total loss). Patrol cheat: if `d >= 10` it teleports to target chunk -4. `|d| < 7`: `System_CopAlert` each tick. Communicator: `~warning_from_harry`, `~attack`, `~police_outsmarted`, `~knock_out`.

It does nothing to the player except physics contact: no arrest, no direct damage.

**Evidence.** `0x41e450`, `0x41e6c0`, `0x4013f0`, `0x41eeb0`, `0x4218b0`, `0x41e910`, `0x41f070`, `0x41f350`, `0x4200e0`, `0x420740`, `0x420ca0`, `0x4210e0`, `0x41fca0`, `0x41f5e0`. `behavior.ini`. `docs/research/gameplay-systems.md` 12.

**Status.**
- Confirmed: all of the above.
- Inferred: stage names from strings at `0x402760`.
- Unresolved: none listed.

**Port.** Runs as shipped.

**Comparison.** Same machine code. Not on Amsterdam, so **no check has seen it run** past boot-all on E1, E3, E4.

---

## Damage and repairs

**Original behaviour.** Table `0x5d3460`, 250 entries. `0x426fe0`: no damage for the player when invulnerable, outside state 0, or with `Invulnerable`. A hit within 60 ms of the last counts as impulse 0. If impulse > min: `damage += trunc(Dmin + (min(impulse,max)-min)*slope)`, clamp 0..1100.

`damage.ini`: 25 to 45 per hit; clouds and wheels at 900. Models: AI 70000-90000, as player 50000-90000; Supercop 260000-270000 / 60000-90000. Thresholds: smoke above clouds, at 200 ms intervals; total loss 1099 for racer, cop, Supercop; 1098 for the player. HUD bar `damage/1100`, alert LED at bar >= 0.8. Car parts deform and detach by level. Sounds `0x427400`: `SCHUUR`, `SOFT_CAR_HIT1/2`, `MID_CAR_HIT1/2`, `HARD_CAR_HIT1/2`.

Repairs in a race: `pw_reps` -100, `pw_repb` -300. Trigger 2 would repair fully, but is not placed on any track. Fuel station `ev_tank` is dead.

Numeric damage is always 0 at race start (`0x44e340`). Broken parts carry over: `DAMAGE_MESH`, written if finished, is applied at start where a value is not -1 (`0x44ceb0`), across modes, characters and players, and the menu never resets it. `DAMAGE_VALUE` is parsed with no other reader. `[PLAYER] damage` is written, and the menu writes `DAMAGE=0`, but it has no reader.

**Evidence.** `0x426fe0`, `0x425310`, `0x427130`, `0x44c950`, `0x426280`, `0x427400`, `0x44f970`, `0x44e340`, `0x44ceb0`. `damage.ini`. `docs/research/gameplay-systems.md` 18, corrected by `game-progression.md` 12; `sim-world.md` W4, W5.

**Status.**
- Confirmed: all of the above.
- Inferred: 44 hits at 25 to 25 hits at 45 to total loss.
- Unresolved: exact rule for wall hits in `0x44f970`; which reader uses `wheels=900`.

**Port.** Runs as shipped. Host: `damage.ini`, `GetTickCount` lockouts, `game.ini` round trip through the VFS.

**Comparison.** Same machine code; impulses come from Ipion at 53 bits. check-driving on Amsterdam, keyboard device, no opponents: a wall hit at 19.5 m/s gave damage 28 and the car bounced back, and the jump on the straight near (-14946, 6362) gave damage 28 too, two values inside the 25 to 45 range. check-flow reports `DAMAGE` in `game.ini` without a rule attached. Total loss, part damage, smoke, repairs and the 60 ms lockout were not asserted. Not compared with the original.

---

## Pickups and DaviScript

**Original behaviour.** `script_init 0x475b50` loads `bonus.dso`, fatal if missing. Object type 25, `0x451420`: state 0 spin, player or trailer touches the box (AI cannot collect); 1 `OnPickup`; 2 fade; 3 wait for respawn. `OnTurnoff` at `effectduration`. Times count from pickup on the frame clock.

| Object | Respawn s | Fade s | Effect s | On pickup | Sample | Text |
|---|---|---|---|---|---|---|
| `pw_1pts` | never | 3 | 4 | money +100 | `PW_1PT` | 59 |
| `pw_5pts` | never | 3 | 4 | money +500 | `PW_5PTS` | 60 |
| `pw_10pts` | never | 3 | 4 | money +1000 | `PW_10PTS` | 61 |
| `pw_reps` | 15 | 3 | 4 | damage -100 | `PW_REPS` | 62 |
| `pw_repb` | 15 | 3 | 4 | damage -300 | `PW_REPB` | 63 |
| `pw_turbs` | 15 | 3 | 4 | turbo +10 | `PW_TURBS` | 64 |
| `pw_turbb` | 15 | 3 | 4 | turbo +50 | `PW_TURBB` | 65 |
| `pw_godm` | 5 | 3 | 20 | MakeInvulnerable(20) | `PW_INV` | 58 |
| `pw_stop` | 15 | 3 | 6 | FreezeRacers(6), text `STUURSLOT` | `PW_FREEZ` | 56 |
| `pw_fastf` | 5 | 3 | 4 | ChangeFOV(0.6,1), FastForward(4, 4000); off: ChangeFOV(0.375,0.5) | `PW_FAST` | 57 |

Counts, 1pts/5pts/10pts/reps/repb/turbs/turbb/godm/stop/fastf:

| E0 | E1 | E2 | E3 | E4 | E5 | E6 | E7 | E8 | E9 |
|---|---|---|---|---|---|---|---|---|---|
| 6/10/2/18/2/19/1/1/1/0 | 0/15/1/16/3/0/0/2/0/0 | 13/8/2/8/5/16/2/2/3/4 | 10/5/5/14/2/0/0/0/0/0 | 31/8/2/18/0/0/0/5/0/0 | 0/5/5/13/6/16/4/5/2/5 | 8/9/0/2/3/1/1/1/1/2 | 12/8/6/26/2/19/4/1/4/3 | 10/13/3/2/7/0/6/3/2/2 | 10/3/5/12/1/10/0/2/1/1 |

Turbo: `0x44e970`, state 0 only, while held -1 per 100 ms, none used during Fast Forward.

**Evidence.** `0x475b50`, `0x475860`, `0x451420`, `0x477b90`-`0x478450`, `0x474270`, `0x474320`, `0x4743a0`, `0x474940`. `original-game-decompiled/decompiled/game__bonus.dso/bonus.pseudo.txt`. Parse of `.omp`. `docs/research/gameplay-systems.md` 16, 18.

**Status.**
- Confirmed: table, counts, state machine.
- Inferred: `UPDATE<sub 1>` adds, `<sub 3>` subtracts. The manual says yellow turbo +30 %, the script value is 50.
- Unresolved: `GetSin` time scale. Whether every type 29 name has handlers was not cross-checked by name; a missing one would be fatal at load, and boot-all saw none on any track.

**Port.** Runs as shipped: `bonus.dso` is loaded by the recompiled DaviScript engine. The host supplies the file, `PlaySample` through the sound host, the frame clock. The console natives `getch`, `kbhit` are not bound by the host, and the shipped script only declares them (`extern` in `bonus.pseudo.txt`).

**Comparison.** Same machine code. boot-all ran `OnInit` on all tracks. No check asserted a pickup or its effect. check-race-ui covers the turbo input on touch, not the consumption rate.

---

## Track objects

**Original behaviour.** `.omp` records: type, position, rotation, name. Handler table `0x5a2a60`.

| Type | Behaviour | E0 | E1 | E2 | E3 | E4 | E5 | E6 | E7 | E8 |
|---|---|---|---|---|---|---|---|---|---|---|
| 0 | Scenery | 672 | 139 | 81 | 443 | 469 | 66 | 156 | 165 | 328 |
| 1 | Looping sample from `.omp` | 6 | | | | 16 | | | | 32 |
| 2 | Pilon, mass 10, `PION_HIT_CAR` | 105 | 24 | 45 | 36 | 21 | 37 | 10 | 16 | 25 |
| 3 | Werkbord, mass 50, `PAAL_HIT_CAR` | | | 10 | 7 | 1 | | 12 | | |
| 4 | Traffic light on timer 1 | 6 | 9 | | | | | | | |
| 5 | Static collider | 61 | 226 | 50 | 199 | 160 | 54 | 235 | 36 | 87 |
| 7 | Flitspaal | 4 | 4 | 4 | 4 | 4 | | | 5 | 4 |
| 9 | Cop | 2 | 10 | 4 | 10 | 10 | | | | 1 |
| 10 | Mass 2000, velocities ×0.9 per tick | 8 | 5 | | 8 | 29 | | 41 | | |
| 11 | Scenery, mesh cache 1 | 8 | 16 | 129 | 162 | 16 | | 26 | 4 | 53 |
| 12 | 3D animation: `a_zepp`, `a_ramp`, `a_zapp`, `e08_was1` | 6 | 9 | 1 | 8 | 11 | 1 | 1 | 3 | 3 |
| 14 | Static collider, cache 1 | 5 | | 11 | | | | | | 149 |
| 16 | Scenery, cache 2 | 3 | 14 | 109 | 6 | 18 | | 26 | | 3 |
| 17 | Static collider, cache 2 | | 4 | 1 | | | | 6 | | |
| 18 | Pivoting, mass 2000, constraint | 15 | 44 | 6 | | 66 | | | | 1 |
| 19 | Trash emitter, particle Trash | | | | | | 3 | | | |
| 20 | Mailbox, particle Mail | | | | | 12 | | | | |
| 21 | Mass 400, velocities ×0.95 per tick | 2 | 5 | 13 | 1 | 21 | 18 | 10 | 2 | |
| 23 | Touch: Birds | | | | | | | | 1 | 2 |
| 24 | Touch: Leaves | | | 6 | | | 4 | 27 | | 1 |
| 25 | Bonus | 60 | 37 | 63 | 36 | 64 | 61 | 28 | 85 | 48 |
| 26 | Touch: Water, Waterwave | | | 20 | | | | | 23 | |
| 27 | Touch: Dirt, Dirtpiece | | | 21 | | | 38 | | 2 | 18 |
| 28 | Supercop | | 1 | | 1 | 1 | | | | |
| 29 | Scripted object, `bonus.dso` | 74 | 69 | 54 | 70 | 96 | 46 | 6 | 29 | 15 |

E9 has no column: `etappe9.omp` holds 778 objects, not split by type here. Among them 3 cops, 5 flitspalen `g_fltsrp_ANIM`, 45 pickups, start truck 1, ramp `a_ramp00_ANIM` 1, banner `a_zepp00_ANIM` 1, blockade `b_npol1_ANIM` 3, `b_stei1_ANIM` 2, and no Supercop.

Scripted objects: mass 50 `0_NAGW1`; 100 `B_vuil1`, `B_phon`, `B_hek1`, `B_STEI1`, `B_TOIL1`, `B_GRB1`, `B_MARK1`; 250 `B_crat1`, `E0_STAT`, `B_OIL1`, `B_HALT1`, `B_TRL2`, `B_NPOL1`, `0_KIOSK`, `0_BUD1`, `0_ORGL1`, `B_DPOL1`; unmovable `B_TRUCK1`, `e2_boe2`, `e2_box2`; `B_CONT1`, `1_CONTR2` with constraints. States: `OnFramecall`, `OnRevive`, `OnSimulation`, `OnFreeze`.

**Evidence.** `0x4536e0`, `0x453440`, table `0x5a2a60`, handlers in `docs/research/gameplay-systems.md` 17. Counts from parsing `etappeN.omp` (68-byte records, all bytes accounted for but the known 136 trailing bytes of E6). `bonus.pseudo.txt`.

**Status.**
- Confirmed: table and counts. Handlers `0x453660`, `0x453680` were lifted from data pointers, since Ghidra has no function there.
- Inferred: none.
- Unresolved: bodies of `0x453660`, `0x453680` were not read. Whether an `OnInit_B_crat2`-style handler lookup ever runs: objects with these names use other types.

**Port.** Runs as shipped. Host: meshes and textures through the race lists; 3D samples through DirectSound; physics recompiled.

**Comparison.** Same machine code. boot-all creates all objects on all tracks. check-driving on Amsterdam: an object on the straight near (-14946, 6362) drops the speed from 25.2 to 15.5 m/s with damage 28 and throws the car up. The check does not name it. Inferred, from its log and the data: this is the truck ramp. The height rises from about z 6000 to 53.7 at z 6336, and `etappe0.omp` places `0_tramp_ANIM` ("Truck ramp" in `etappe0.ini`, type 0) with its collision `0_col3_ANIM` (type 5) near z 6225, and the scripted `0_nagw1_ANIM` at height 44 where the run stopped. No check asserted any other object behaviour.

---

## Path objects: helicopter, plane, train, boat, path car

**Original behaviour.** `.pth`: trigger chunk, end chunk, type, lap (0 any, else lap+1), duration ms, points. Fired when the player's chunk equals the trigger chunk, once per lap per path; 25 slots. Table `0x5a64c8`.

| Type | Content | Anim, sound | Paths per track |
|---|---|---|---|
| 0 | `0x464a60` update only | | E3 2, E4 1, E8 1 |
| 3 | Boat | `e00_rond` = `E04_Boot` | E4 1 (chunks 535-611, 65 s, 14 points) |
| 4 | Train | `C_TREIN`, `TRAIN` | E4 2 (`E04_bahn`), E6 1 (`E6skylin`), E8 2 (`e08_ice`) |
| 5 | Helicopter | `C_HELI`, `C_LBLADE`, `C_SBLADE`, `HELI` | E4 2 (190-230, 15 s; 380-409, 10 s), E7 1 (389-420, 7 s) |
| 6 | Path car | traffic type, `HOOG4` | E1 1, E8 1 |
| 7 | Plane | `a_VLIEGT`, `PLANE` | E3 1 (`E03_boin`), E4 2 (`E04_zepp`), E6 1 (`e6boing6`) |
| 12 | No code | | E0 5, E1 7 |
| 13..21 | Blockade cars | previous section | |
| 1, 2, 8, 9, 10 | Start camera, cop along path, path traffic | | None placed |

The helicopter moves and rotates along its path only: no reference to player state, no gameplay effect.

**Evidence.** `0x4641d0`, `0x464cf0`, `0x464cb0`, `0x463a60`, `0x463d70`, `0x465ea0`, `0x466290`, `0x4666c0`, `0x4654b0`. Parse of `etappeN.pth` (E6 has 224 trailing bytes the loader never reads). `e0N_anim.ini`. `docs/research/gameplay-systems.md` 11, 15; `game-content.md` 2.5.

**Status.**
- Confirmed: table and counts.
- Inferred: `E0N_cess` looks like a reused Cessna model; the code and the sound treat it as a helicopter. `E0N_Absc` as rotor looks like a placeholder.
- Unresolved: how the helicopter with its `_Absc` attachments looks in the original.

**Port.** Runs as shipped. Host: `.pth`, meshes through the race lists, sounds through the late list. `0x463d70` writes matrices the renderer captures.

**Comparison.** Same machine code. Created at load: boot-all on E3, E4, E6, E7, E8, E1. None of these types is on Amsterdam, so **no check has seen one fly or drive**. Rendering of them was not compared.

---

## Skid marks and particles

**Original behaviour.** Skid marks `0x444de0`, `0x445180`: 20 slots, 2 strips of 100 vertices, +2 vertices per tick, so 49 ticks to the 98 vertex stop. Texture `S_SFX.PCX`, gate `skidmarks`. Smoke clouds `0x4469e0`, `0x446fe0`, gate `clouds`. Finish flag `0x440160`, gate `finish_flag`. Particles `0x45d170`: 1 Spark, 2 Leaf, 3 Bird, 4 Mail, 5 Trash, 6 Paper, 7 CarPart, 8 Dirt, 9 Dirtpiece, 10 Water, 11 Waterwave, tick `0x45dc00(dt)`, draw `0x45dce0`, gate `particles`. Particle code catches its own exceptions, logs `GD_EXCEPTION` and carries on. Effects skip spawning at low FPS (`0x43dd90`, `0x446c70`) and wipe below 10 FPS (`0x43de00`, `0x446fe0`).

At 8 bits (`3D kaart` off): skid marks, smoke and `gfx_bwlk` draw untextured, in palette index `255 - floor(blue / 17)`, with a stipple by the alpha of the first vertex. Shadows are black opaque blobs only, the player's too (`0x443710`, `0x443ef0`). There is no finish flag: `0x440160` needs a value whose only setter, `0x43fdd0(1)`, is called at `0x43acc1` with a 3D card only. Nothing blends.

**Evidence.** `docs/research/render-frame.md` sections 1, 6; `sim-timing.md` C2, C6; `win32-surface.md` C5; `gameplay-systems.md` 17; `8bit-drawing.md` sections 5, 6; `render-8bit.md`, which holds where they differ. Shipped `game.ini [GFX OPTIONS]`: `clouds=1 finish_flag=1 skidmarks=1 fade_skmarks=1 particles=1 part_rain=1`.

**Status.**
- Confirmed: the above. No Paper emitter object is placed, as type 22 is absent; `pw_*` script calls can still create particles.
- Confirmed from frames of the guest: smoke, skid marks and the blob shadow at 8 bits (`render-8bit.md`). The flag's absence is read from the code: end of race is not among the frames.
- Inferred: `part_rain` has no rain id in the particle table.
- Unresolved: whether `part_rain` has a visible effect. Whether any `Create*System failed` throw fires in normal play.

**Port.** Logic runs as shipped; 16 particle functions run under a JavaScript try/catch (`GUARDED` in `tools/recomp/replacements.py`, `source/host/hooks.js`). `0x45DCE0` must stay in that list: `D3DRenderer.attach` wraps its thunk to mark particle draws, and throws `unknown thunk` if it is gone. `render_game` runs every tick so effects keep updating, with drawing kept only for the ticks that are shown (`captureLevel` in `source/race-runner.js`). `source/render/d3d-renderer.js` draws the captured calls in the game's order, except the HUD, which draws last at native size. At 8 bits these draws go through `FRAG_INDEXED`, and the HUD draws last on its own target on the mode's grid.

Between ticks: `gfx_wolk` smoke, `gfx_bwlk` and all particles show the latest tick, because their slots are re-sorted every frame or shift when one dies, so nothing can be paired. On displays above 60 Hz they step at 60 Hz. Skid-mark strips whose vertex count changed are not blended either. At 60 ticks a strip lasts 0.82 s, recorded in `docs/intentional-differences.md` as a rate-dependent cosmetic. The low-FPS spawn skips and wipes cannot fire after the start: see FPS gates under Traffic.

Finish flag: on views wider than about A = 1.66 or taller than about A = 1.07 the sheet grows in x and y, so its edges never show at any phase of the wave. Between those limits, including 4:3, it equals the original. Its squares stay hard-edged at any filter setting. Details: [`render.md`](render.md).

**Comparison.** Rendering is reimplemented, so the same-code argument covers only spawn and update logic. Fix checks on Amsterdam with the bot: over 1168 ticks, 2968 smoke rows and 3922 particle rows, none linked to the tick before. Finish flag: reach 0.9999 to 1.0 of the view over a whole wave at 1280x720, 800x360, 1920x800, 390x468, 390x585, scale 1 at 960x720 and 1000x900, and a real flag from a whole race looked at. `gfx_bwlk` drew 0 times in a whole Amsterdam race, so it was not exercised. reference-86box: at 8 bits smoke and skid marks by eye and by reading palette indices, against frames at 320x200 on the K6-2 550, and the blob shadow in the frames. No check compared particles, or skid marks with a 3D card, with the original.

---

## Cars

**Original behaviour.** `static.ini [charN]`, `car_cfg.ini [league0..2]`, `L%d_anim.ini` (three identical files). League rows differ only in the VDYNS index. Meshes are the same in all leagues.

| Char | Name | CAR | Anim | Mass | Damage | Tour | Quick Race |
|---|---|---|---|---|---|---|---|
| 0 | Edgar de Flits | 0 | `checker` | 600 | `dam_racer0` | yes | yes |
| 1 | Tommie 'El Nino' | 1 | `hotrod` | 600 | `dam_racer1` | yes | yes, default |
| 2 | James Brons | 2 | `countach` | 600 | `dam_racer5` | yes | yes |
| 3 | Katharina 'Kat' | 3 | `merceslk` | 600 | `dam_racer3` | yes, default | yes |
| 4 | Barbarally | 4 | `buggy` | 600 | `dam_racer4` | yes | yes |
| 5 | D.T. Harry | 5 | `humvee` | 600 | `dam_racer2` | no | Tour win unlocks |
| 6 | politie-auto | 6 | `politie` | 600 | `dam_politie` | no | yes |
| 7 | hunny | 7 | `DOWNLOADCAR` | 1500 | `dam_truck` | no | no |
| 8 | downld, on screen De Schaduw | 7 | `DOWNLOADCAR`, the truck | 1500 | `dam_truck` | no | yes, since the car update |

Rows with no route into a race: `[league*]` 8 `RACER_8`, 9 `RACER_9`, 10..12 trailers (`[Connected Object Types] count=0`), `garage.ini`.

Car 7 comes from `a2racer4_update_car.exe` (readme `carupd.txt`). `static.ini [char8]` has `indexingame=7`, stats 5,5,5,5, and `[QUICKRACE]` has `DOWNLOADCHARIX=7`, `DOWNLOADSECTION=DOWNLOADCAR`. The art `chara_08`, `qr_ch08` and the name art read "De Schaduw"; they and the truck's textures were on the disc all along. Unlock is the original's own rule: `L0_ANIM.INI [DOWNLOADCAR] Count > 0`. What the update changes:

- `l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini`, still the same bytes as each other: `TOURNAMENT_BONUS` is renamed `DOWNLOADCAR`, with `0=TRU.d3d,l1racer2.pcx`, `1=TRU_WIE.d3d,l1racer2.pcx`, `2=TRU_RAM.d3d,l1racer3.pcx`.
- `car_cfg.ini` row 7 in all three leagues: `7=RACER_7,TOURNAMENT_BONUS,PIET,hoog4,1500,7,5000,7,dam_dummy` becomes `7=RACER_7,DOWNLOADCAR,KENT,hoog4,1500,42,5000,7,dam_truck`. Wheel positions 25 to 41 (dummy) and 42 (truck) are added.
- `car_snd.ini [Car42]`. `damage.ini` `dam_truck`: car row 10 and mesh row 10, with `truck_fase1` rows 115 to 128, count 129.
- `gen_anim.ini` adds `PLAYER_7_PORTRAIT` (`player_8.d3d,overlay.pcx`) and `TRU_A*_ANIM`. `game.ini [Portraits] 7=PLAYER_7`. `overlay7.ini` is its HUD file, so `0x00487f20` finds its file and the HUD comes up.
- `vdyns.dat` record 7 changes COM y, spring, relax damp and radius: [`../parity/sim-timing.md`](../parity/sim-timing.md), `VDYNS.DAT` records in use.

**Evidence.** `static.ini`, `car_cfg.ini`, `0x44aa20`, `0x44e340`, `M:0x49ca08`. `docs/research/game-content.md` 2.1, 2.6; `simulation-core.md` VDYNS table. Car update: `original-game-decompiled/original/updates/`, `delta.csv`.

**Status.**
- Confirmed: the table. Since the car update `overlay7.ini` exists and `L0_ANIM.INI` has `[DOWNLOADCAR]`, so car 7 is reachable. On disc 1.01 without updates neither exists, so there car 7 is unreachable and `downld` shows as locked. `[char7] hunny` still has `indexingame=7` and is in no list. `RACER_8` and `RACER_9` still have no route.
- Inferred: none. The earlier "the download car would have been the DeLorean" was wrong: `car_cfg.ini` row 7 of the car update settles it, the shipped truck replaces it.
- Unresolved: `Price` field reader.

**Port.** Cars 0 to 7 run as shipped from unchanged data, the updated files through the `UPDATES` overlay of `tools/prepare-assets.py prepare_race`. `GameData.quickCharAvailable` in `source/menu/data.js` carries the locks and opens car 7 with no change of code.

**Comparison.** boot-all booted all eight cars on all ten tracks for 120 ticks. check-flow drove car 1 on Amsterdam, with cars 0, 2, 3, 4 as AI. check-driving and run-bot default to car 0 on Amsterdam, and reference-wine ran car 0 on the original and the port. Car 7: boot-all and the launch check on track 9, see Tracks, with `CAR=7` in `game.ini`: 31.24 m/s after 6 s of gas, the truck and its HUD by eye. Its handling, damage and sound were not asserted, and the original has not been run with the updates. Handling comparison: [`sim-timing.md`](sim-timing.md).

---

## Can anything the race reaches trap?

**Original behaviour.** Not applicable: this is a property of the port.

**Static analysis.** `tools/recomp/out/report.json` lists ten `unsupported` functions, whose wasm bodies are one `unreachable`, and two `build` failures. Roots: `0x458270`, `0x44cb80`, `0x4517f0`, `0x44e180`, `0x458020`, `0x41c150`, `0x458210`, `0x4580e0`, `0x448cd0`, `0x44cf60`. Using `calls.csv` plus tail jumps from `disassembly.asm`, 2733 functions are reached; with code references 4049; with every aligned data dword that equals a function address, 12477.

| Function | What it is | Why it is not reached |
|---|---|---|
| `FUN_00465345` | Middle of a real function at `0x465310`, decoded from a call's high bytes | Taken only from the locale strings `ESF` at `0x5c9114`, `0x5c93fc`. `0x465310` has no caller |
| `sub_004e4150` | Middle of a function | Taken from the locale string `PAN` at `0x5c8fe8` |
| `sub_004f9d00` | Middle of a function | Taken from CRT code page bytes at `0x5c7f14` |
| `FUN_0054aeb0` | The mouse `DIDATAFORMAT` in `.text`, not code | `push 0x54aeb0` at `0x4ef0cf` passes it to `SetDataFormat`, a no-op in `source/host/directx.js`. Never called |
| `FUN_00561c91`, `FUN_00561dd1` | CRT `exp` kernel | Only in the table named `exp` at `0x5c8bb4`, whose address occurs nowhere |
| `FUN_00561dde`, `FUN_00566f61` | CRT `exp` helpers | Called from `0x561c9e`, `0x561cbf` in the above, and `0x56320e` in the hyperbolic kernels below |
| `FUN_0055e0fd`, `FUN_0055e102` | CRT x87 tails | Only in the `exp`, `sinh`, `cosh`, `tanh` tables, and a `call` at `0x563201` in the `tanh` kernel |

The `sinh`, `cosh`, `tanh` tables at `0x5c8bea`, `0x5c8c0a`, `0x5c8c2a` are referenced only by `0x55aae0`, `0x55aaea`, `0x55aaf1`, which have no caller, and by `_CIsinh`, `_CIcosh`, `_CItanh`, which `replacements.py` maps to `Math`. The two `build` failures, `0x415355` and `0x545350`, are the strings `USA` and `PST`.

Other trap classes checked:

| Class | Result |
|---|---|
| Direct call to a function that was not lifted | The lifter raises `Unsupported` on that function, so it would be on the list. Not on the list |
| Data pointer into code without a code map entry | 21 aligned dwords remain after ASCII values are removed: 20 are UTF-16 CRT tables at `0x5c7fc8`-`0x5c80d8`, 1 is the filter in the CRT entry's SEH scope table at `0x579618`, which only an exception would use |
| Reads of `.text` as data | Only the switch tables at `0x43bd48`, `0x44f578`, `0x566670`, which `build.py` copies |
| Imports with no host binding | `GetConsoleMode`, `SetConsoleMode`, `ReadConsoleInputA`, `PeekConsoleInputA`, `GetNumberOfConsoleInputEvents`. Used only by `_getch 0x55a6fe` and `_kbhit 0x55a7cf`, behind the script natives `getch`, `kbhit`, which `bonus.pseudo.txt` only declares |
| In-race file reads | WAV members only (Inferred, see the track files section) |

**Status.**
- Confirmed: no unsupported function is reachable through direct calls, tail jumps, code references or real data pointers.
- Inferred: "real" pointers were told from false ones by looking at the bytes around each.
- Unresolved: virtual calls cannot be resolved statically; the claim for them rests on the fact that none of the ten is a real function entry with a pointer.

**Port.** `tools/recomp/`. A fault at run time ends the race with a message and returns to the menu (`RaceRunner.frame` in `source/race-runner.js`). A fault while a race loads does the same, with `finished=0` (`RaceRunner.run`).

**Comparison.** Static. boot-all, check-flow and run-bot saw no trap on the paths they ran. check-race-ui, `load failure: back in the menu with a message, finished=0`, covers the load path, with `spel.wasm` aborted.
