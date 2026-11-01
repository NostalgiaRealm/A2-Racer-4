# Feature parity

The content and feature inventory of A2 Racer 4 at the top level, with implementation status and verification status kept apart. State of 2026-11-01. Each row of the inventory lives in [`parity/`](parity/). Findings and evidence: [original-behavior.md](original-behavior.md). Procedures and results: [validation.md](validation.md). Deliberate changes: [intentional-differences.md](intentional-differences.md).

## How to read it

**Implemented** says what carries a feature.

| Value | Meaning |
|---|---|
| yes (recompiled) | Original code or data runs in `public/game/spel.wasm`, built from `spel.dat` by `tools/recomp/`. The notes name what the host supplies |
| yes (host) | JavaScript in `source/` outside `source/menu/` does it: host, renderer, audio, input |
| yes (menu port) | Hand-written in `source/menu/` from the decoded forms and handlers of `menu.exe` |
| partial | Present with a stated gap. Listed under [Known incomplete](#known-incomplete) |
| no | Not in the port. Listed under [Known incomplete](#known-incomplete) |
| n/a | Not in the original's reachable content: dead code, or no effect with shipped data |

**Verified** names the kind of check that really covers the row. Only the first two kinds below set a row against a run of the original, and only for what the row's Notes say.

| Value | Meaning |
|---|---|
| compared with the original: reference-wine | `tools/reference-wine/`, `evidence/reference-wine/results.md`: the original `spel.dat`, unchanged, under Wine 11.20 Staging with Xvfb and llvmpipe, on etappe 0, car 0, on a clean clock, held to 60 ticks per second from outside the process, memory read per tick, 22 launches, with the same key scripts on the port. Its install has no updates (`tools/reference-wine/prepare.sh` copies `original/install`), which for etappe 0, car 0 is the same data. The row's Notes say what was compared. One setup under Wine: it says nothing about Windows, period hardware or real vsync. A row may name a check after it, as in `compared with the original: reference-wine; checked on Amsterdam: check-driving`, and such a row counts once, under this kind |
| compared with the original: reference-86box | `tools/reference-86box/`, `evidence/reference-86box/results.md`: the 8-bit path, `RESOLUTION` 0 and 1, which Wine cannot run. The original `spel.dat`, unchanged, on a throwaway copy of the owner's 86Box machine: Windows 98 SE, DirectX 9, `D3DRAMP.DLL` of 590096 bytes dated 1999-09-09, an emulated Voodoo3 3000, Pentium MMX 266 or K6-2 550. Disc 1.01 data, etappe 0, car 0, screenshots of the guest, no memory read. The port's frame at rest against the guest's, same state, `?chunks=15` for the view distance, pixel-exact in RGB by `tools/reference-86box/compare.py`: whole picture 88.1% identical at `RESOLUTION` 1 and 85.5% at 0, world region 92.2% and 93.3%, HUD text region 81.7% and 63.6%. Smoke and skid marks by eye and by reading palette indices, against frames at 320x200 on the K6-2 550. The row's Notes say what was compared. One emulated machine: it says nothing about a real machine of the period or about rates. It does not cover the flash, `wait_lo` pictures as drawn by the game, the end of a race or the pause dialog. A row may name a check after it, and such a row counts once, under this kind |
| checked on Amsterdam: *check* | That tool ran it on etappe 0 on the final build, in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan or in Node. The row's Notes say what was read. Many of these only show that the path ran to the end with no error. It does not mean parity with the original |
| boot only: boot-all | `tools/build-race-lists.mjs`: all 10 etappes with all 8 cars for 2 s in Node with no renderer, and all 10 etappes with car 0 at `RESOLUTION` 0 and 1. The ticks end inside the countdown. It shows that files load and objects are created, nothing about play |
| form check | Per-form browser checks by the people who wrote the forms, `evidence/forms/`: screens, navigation with a faked `game.ini`, Garage buying, options persistence |
| fix check: *what* | A one-off script run when a fix was made, not kept in `tools/`. It counts only for the text given. `launch through the menu, 6 s of gas, 0 console errors` is the one check of track 9 and car 7 past boot-all: see [Not verified](#not-verified) |
| not verified | No check covers it. It may have run inside a check without being asserted |

reference-wine runs the original next to the port for the quantities its rows name: rate behaviour, first `dt`, countdown durations, acceleration and plateau by movement state, reverse limit and curve, brake, gear index timing, car height, racers' path length over 30 s, the launch regimes. It does not cover steering, turbo, damage, collisions, race end or traffic. reference-86box sets frames of the port against frames of the original on the 8-bit path, and nothing else. Two more set the port against a run of the game, both the owner's under Wine: check-traffic against his table, reference-frame against his screenshot. The original has not been run with the updates, so track 9 and car 7 have nothing to be set against. Sound by state only, never by ear. No real phone or tablet, no real gamepad, no other browser engine.

## Summary

Computed by the script below over the tables in `docs/parity/*.md`, not by hand. A row counts once in its area. Rows overlap between areas (`menu.ini [CONTROLKEYS]` is in two, Ctrl+F10 in three), and a row can be one key or one whole subsystem, so these are counts of rows, not a share of the game.

Implementation status, rows per value:

| Area | Rows | yes (recompiled) | yes (host) | yes (menu port) | partial | no | n/a |
|---|---:|---:|---:|---:|---:|---:|---:|
| [Start-up and menu](parity/startup-menu.md) | 542 | 27 | 11 | 455 | 11 | 15 | 23 |
| [Race rules and content](parity/race-rules.md) | 370 | 273 | 29 | 9 | 3 | 1 | 55 |
| [Simulation and timing](parity/sim-timing.md) | 410 | 298 | 59 | 5 | 11 | 4 | 33 |
| [Rendering](parity/render.md) | 264 | 120 | 92 | 7 | 13 | 11 | 21 |
| [HUD](parity/hud.md) | 233 | 164 | 39 | 0 | 8 | 1 | 21 |
| [Audio](parity/audio.md) | 169 | 71 | 27 | 41 | 3 | 1 | 26 |
| [Input and platforms](parity/input-platform.md) | 529 | 92 | 261 | 110 | 18 | 13 | 35 |
| [Host and process](parity/host.md) | 374 | 39 | 243 | 9 | 8 | 4 | 71 |
| **All** | **2891** | **1084** | **761** | **636** | **75** | **50** | **285** |

Verification status, rows per kind:

| Area | Rows | compared with the original | checked on Amsterdam | boot only | form check | fix check | not verified |
|---|---:|---:|---:|---:|---:|---:|---:|
| [Start-up and menu](parity/startup-menu.md) | 542 | 0 | 112 | 15 | 115 | 36 | 264 |
| [Race rules and content](parity/race-rules.md) | 370 | 7 | 50 | 133 | 3 | 20 | 157 |
| [Simulation and timing](parity/sim-timing.md) | 410 | 23 | 77 | 47 | 4 | 8 | 251 |
| [Rendering](parity/render.md) | 264 | 17 | 62 | 36 | 9 | 28 | 112 |
| [HUD](parity/hud.md) | 233 | 6 | 65 | 12 | 0 | 28 | 122 |
| [Audio](parity/audio.md) | 169 | 0 | 10 | 47 | 3 | 14 | 95 |
| [Input and platforms](parity/input-platform.md) | 529 | 4 | 145 | 1 | 14 | 11 | 354 |
| [Host and process](parity/host.md) | 374 | 2 | 228 | 4 | 6 | 9 | 125 |
| **All** | **2891** | **59** | **749** | **295** | **154** | **154** | **1480** |

Of the 1480 rows that are not verified, 282 are n/a and 1198 are implemented, partly or fully, and have no check. 59 rows are compared with the original, and some of them name a check as well. Rows naming each check, where one row can name several, in either kind: check-flow 353, check-race-ui 265, reference-frame 80, check-driving 39, check-software 38, run-bot 15, repeat-trace 14, check-phone-flow 7, check-traffic 3, benchmark 1.

Of the 59 rows compared with the original, 34 are reference-wine and 25 reference-86box.

repeat-trace: once per game second `RaceRunner.traceTick` takes a checksum over every object with a physics body, 485 on Amsterdam: the player, racers, traffic, police and scenery bodies, each with its object record and its 3D object with world matrix. Checksums are equal at all 71 samples between the three rendering profiles, and the player's position and speed differ by 0. It compares the port with itself.

```python
#!/usr/bin/env python3
# Run from docs/. Counts every row of every table in parity/*.md that has both columns.
# A Verified cell starts with its kind, so a row that also names a check counts once, under its first kind.
import collections, glob, re
PIPE = re.compile(r'(?<!\\)\|(?=(?:[^`]*`[^`]*`)*[^`]*$)')   # a | outside backticks
KINDS = ['compared with the original', 'checked on Amsterdam', 'boot only', 'form check', 'fix check', 'not verified']
for path in sorted(glob.glob('parity/*.md')):
    impl, veri, header = collections.Counter(), collections.Counter(), None
    for line in open(path, encoding='utf-8'):
        if not line.startswith('|'):
            header = None
            continue
        cells = [c.strip() for c in PIPE.split(line.strip()[1:-1])]
        if header is None:
            header = cells
        elif not set(''.join(cells)) <= set('-: ') and {'Implemented', 'Verified'} <= set(header):
            row = dict(zip(header, cells))
            impl[row['Implemented']] += 1
            veri[row['Verified'].split(':')[0]] += 1
    assert set(veri) <= set(KINDS), set(veri) - set(KINDS)
    print(path, sum(impl.values()), dict(impl), {k: veri[k] for k in KINDS})
```

## Inventory

Counts in the last columns come from the same tables, per section. Implemented: recompiled, host and menu port are the three yes values. Verified: original is compared with the original, Amsterdam is checked on Amsterdam, boot is boot only, form and fix are those checks, none is not verified. The notes per row are in the sections linked. E0..E9 are `etappe0..9`. E9 came with the track update, and a row that lists etappes covers E0..E8 unless it names E9.

| Item | What exists in the original | Implemented, rows | Verified, rows | Parity sections |
|---|---|---|---|---|
| Tracks | Ten entries, all playable: table below. Track 9 came with the track update: `static.ini` names it Download-race, the player sees Country etappe | 22 recompiled, 6 host, 10 menu port, 1 partial, 2 n/a | 3 Amsterdam, 25 boot, 9 fix, 4 none | [race: Tracks](parity/race-rules.md#tracks)<br>[race: Track data per etappe](parity/race-rules.md#track-data-per-etappe)<br>[start-up: Tracks](parity/startup-menu.md#tracks) |
| Cars | Eight reachable cars on 25 `VDYNS.DAT` records in use, chosen by league and upgrades; the eighth, the truck, came with the car update. Constraint car with 4 wheels | 41 recompiled, 5 n/a | 3 original, 3 Amsterdam, 11 boot, 3 fix, 26 none | [race: Cars](parity/race-rules.md#cars)<br>[simulation: Vehicle types](parity/sim-timing.md#vehicle-types)<br>[simulation: VDYNS.DAT records in use](parity/sim-timing.md#vdynsdat-records-in-use) |
| Characters | Nine `static.ini` entries; five in the Tour, eight in Quick Race, the eighth De Schaduw since the car update: table below | 1 recompiled, 11 menu port, 2 n/a | 1 Amsterdam, 6 boot, 2 form, 2 fix, 3 none | [start-up: Characters](parity/startup-menu.md#characters) |
| Opponents | 4 AI racers, FSM, five route slots, overtaking by route choice, rubber band, target position. No AI on chase tracks | 14 recompiled, 1 host, 2 n/a | 1 original, 4 Amsterdam, 12 none | [race: Opponents, overtaking, routes](parity/race-rules.md#opponents-overtaking-routes) |
| Traffic | 50 slots, one rigid body each, per-track lists, 17 vehicle types, red lights on E0, re-placement out of view | 31 recompiled, 1 partial, 1 no, 1 n/a | 1 Amsterdam, 27 boot, 6 none | [race: Traffic](parity/race-rules.md#traffic) |
| Police | 40 cops of `.omp` type 9, 10 on each chase track, 3 on E9. Detection, tactics, siren, megaphone. No arrest: dead code | 17 recompiled, 4 n/a | 9 boot, 12 none | [race: Police](parity/race-rules.md#police) |
| Roadblocks | Scripted path cars, types 13..21, on E0, E1, E2, E3, E4, E8. The FSM roadblock is dead | 8 recompiled, 2 n/a | 6 boot, 4 none | [race: Roadblocks: blockade cars](parity/race-rules.md#roadblocks-blockade-cars) |
| Supercop | One `humvee_ANIM` each on E1, E3, E4, own FSM | 11 recompiled, 1 n/a | 3 boot, 9 none | [race: Supercop](parity/race-rules.md#supercop) |
| Pickups | Ten `pw_*` types through `bonus.dso`: coins, repairs, turbo, invulnerable, freeze, fast forward | 14 recompiled, 1 n/a | 12 boot, 3 none | [race: Pickups](parity/race-rules.md#pickups) |
| Objects and paths | `.omp` types, 25 of them placed: pilons, flitspalen, traffic lights, scripted objects. Boat, train, helicopter, plane, path cars | 43 recompiled, 7 n/a | 1 Amsterdam, 41 boot, 8 none | [race: Track objects](parity/race-rules.md#track-objects)<br>[race: Path objects](parity/race-rules.md#path-objects) |
| Modes | Race kinds: stadsrace, stadsachtervolging (chase), snelwegrace (highway). Menu modes: Tour, Quick Race. No multiplayer or split-screen code path exists | 7 recompiled, 1 host, 19 menu port, 1 n/a | 7 Amsterdam, 5 boot, 1 form, 2 fix, 13 none | [race: Race kinds and switches](parity/race-rules.md#race-kinds-and-switches)<br>[start-up: Tour and Quick Race rules](parity/startup-menu.md#tour-and-quick-race-rules) |
| Difficulty | Makkelijk, Normaal, Moeilijk: league, AI factors, qualify place, chase time | 5 recompiled, 1 host, 4 menu port | 1 Amsterdam, 1 boot, 8 none | [start-up: Difficulty](parity/startup-menu.md#difficulty)<br>[race: Difficulty](parity/race-rules.md#difficulty) |
| Tune-ups, money | Motor, Banden, ABS Bremsen, Getriebe, Turbo. Euro per Tour character. No repair shop | 3 recompiled, 20 menu port, 2 n/a | 3 Amsterdam, 15 form, 7 none | [start-up: Tune-ups](parity/startup-menu.md#tune-ups)<br>[start-up: Money and Garage](parity/startup-menu.md#money-and-garage)<br>[simulation: Upgrades](parity/sim-timing.md#upgrades) |
| Unlocks | D.T. Harry by a Tour win, chase tracks in Quick Race by Tour progress, track 9 and De Schaduw by their files, which the updates supply | 5 menu port, 1 n/a | 1 form, 2 fix, 3 none | [start-up: Unlocks](parity/startup-menu.md#unlocks) |
| Records | Best lap per track in `menu.ini`, best times per league in `game.ini` | 1 recompiled, 14 menu port | 3 Amsterdam, 1 form, 1 fix, 10 none | [start-up: Records](parity/startup-menu.md#records) |
| Saves, settings | `SaveGame<N>.RCR`, 227 bytes; `menu.ini`, `game.ini`, `raser.ini`. Port: IndexedDB for files, `localStorage` for browser settings | 26 recompiled, 37 host, 61 menu port, 1 partial, 2 no, 8 n/a | 45 Amsterdam, 4 boot, 13 form, 10 fix, 63 none | [start-up: Players and save file](parity/startup-menu.md#players-and-save-file)<br>[host: Files and the virtual file system](parity/host.md#files-and-the-virtual-file-system)<br>[input: Settings and effective size](parity/input-platform.md#settings-and-effective-size) |
| Menus | 45 form resources: `TfrmMessageBox` is dead, `TfrmException2` partial, `TfrmCDRequest` and `TfrmInternetDlg` exist and are never shown. Navigation, help with Hunny, options, art | 4 host, 155 menu port, 3 partial, 6 no, 5 n/a | 32 Amsterdam, 79 form, 12 fix, 50 none | [start-up: The 45 forms](parity/startup-menu.md#the-45-forms)<br>[start-up: Navigation](parity/startup-menu.md#navigation)<br>[start-up: Help and Hunny](parity/startup-menu.md#help-and-hunny)<br>[start-up: Options](parity/startup-menu.md#options)<br>[start-up: Menu art](parity/startup-menu.md#menu-art) |
| Options | Control radios, key settings, sound sliders. Video: `3D kaart` with Laag, Normaal and Hoog, which write `RESOLUTION`. Geavanceerd: Weergave and its 3D-only controls, driver, resolution list, render memory, Wait VBL. Port: `3D kaart` and Laag open by the original's rules; Hoog and the Windows-only choices greyed with a note | 28 menu port, 1 partial, 5 no | 10 Amsterdam, 16 form, 4 fix, 4 none | [start-up: Options](parity/startup-menu.md#options) |
| Controls | Keyboard: seven rebindable actions, fixed race keys. Port: touch wheel from SuperKarts, Gamepad API. Joystick and wheel paths kept. Full mapping: [controls table](behavior/input-platform.md#controls) | 55 recompiled, 76 host, 26 menu port, 8 partial, 10 no, 8 n/a | 3 original, 71 Amsterdam, 1 boot, 4 form, 7 fix, 97 none | [input: Game actions and device paths](parity/input-platform.md#game-actions-and-device-paths)<br>[input: Race keys that cannot be rebound](parity/input-platform.md#race-keys-that-cannot-be-rebound)<br>[input: Touch](parity/input-platform.md#touch)<br>[input: Gamepad](parity/input-platform.md#gamepad)<br>[input: Menu input](parity/input-platform.md#menu-input) |
| Handling | Engine, gears, brake, reverse, steering, traction, turbo, airborne, collisions | 60 recompiled, 3 host, 3 n/a | 7 original, 13 Amsterdam, 46 none | [simulation: Engine, gears and drivetrain](parity/sim-timing.md#engine-gears-and-drivetrain)<br>[simulation: Brake, reverse and handbrake](parity/sim-timing.md#brake-reverse-and-handbrake)<br>[simulation: Steering](parity/sim-timing.md#steering)<br>[simulation: Traction, surfaces and slopes](parity/sim-timing.md#traction-surfaces-and-slopes)<br>[simulation: Turbo](parity/sim-timing.md#turbo)<br>[simulation: Airborne and recovery](parity/sim-timing.md#airborne-and-recovery)<br>[simulation: Collision groups and response](parity/sim-timing.md#collision-groups-and-response) |
| Damage | Value per hit, parts bend and drop, smoke, total loss; no effect on handling | 22 recompiled, 2 n/a | 2 Amsterdam, 22 none | [race: Damage and repairs](parity/race-rules.md#damage-and-repairs)<br>[simulation: Damage](parity/sim-timing.md#damage) |
| Cameras | Dynamische, Statische, Achteruitkijk, Bumper, keys 6 to 0, finish and game-over sequences | 24 recompiled, 2 partial, 12 n/a | 10 Amsterdam, 1 fix, 27 none | [simulation: Cameras](parity/sim-timing.md#cameras) |
| Device, display modes | `RESOLUTION` picks the mode and the path. 3 = 640x480x16 with a 3D card, shipped. `3D kaart` off: 1 = 640x480x8 and 0 = 320x200x8, the 8-bit path on a Ramp device: one PCX page, one palette, blit sky, copy mode, stipple, flash through the palette | 10 recompiled, 27 host, 3 menu port, 2 partial, 4 no, 1 n/a | 18 original, 8 Amsterdam, 8 boot, 5 form, 2 fix, 6 none | [render: Device and display modes](parity/render.md#device-and-display-modes)<br>[render: 8-bit path](parity/render.md#8-bit-path-3d-kaart-off)<br>[hud: 8-bit path](parity/hud.md#8-bit-path-3d-kaart-off) |
| HUD | Speedometer, Communicator, portraits, statistics, signs, game text, requestors, digits, finish table | 81 recompiled, 2 host, 6 n/a | 21 Amsterdam, 3 boot, 14 fix, 51 none | [hud: Speedometer](parity/hud.md#speedometer)<br>[hud: Communicator](parity/hud.md#communicator)<br>[hud: Rank portraits](parity/hud.md#rank-portraits)<br>[hud: Statistics](parity/hud.md#statistics)<br>[hud: Finish screen](parity/hud.md#finish-screen) |
| Sound | Music, engine sets, 193 + 192 sound types, radio, speech, menu sounds, movies | 43 recompiled, 5 host, 18 menu port, 1 partial, 12 n/a | 2 Amsterdam, 30 boot, 1 form, 5 fix, 41 none | [audio: Music in a race](parity/audio.md#music-in-a-race)<br>[audio: The 193 sound.ini types](parity/audio.md#the-193-soundini-types)<br>[audio: Engine sound sets: car_snd.ini](parity/audio.md#engine-sound-sets-car_sndini)<br>[audio: Cop radio events](parity/audio.md#cop-radio-events)<br>[audio: Menu sound triggers](parity/audio.md#menu-sound-triggers)<br>[audio: Movie sound](parity/audio.md#movie-sound) |

Tracks, from `static.ini`, `raser.ini [MAPS]` and parses of the track files. Implemented: all yes (recompiled), with the menu entry yes (menu port).

| Ix | Name | Type | Race kind | Laps | Chunks | Tour stage | Cops, type 9 | Supercop | Flitsers | Verified |
|---|---|---:|---|---:|---:|---:|---:|---|---:|---|
| 0 | Amsterdam | Stadsrace | city | 2 | 363 | 2 of 9 | 2 | no | 4 | All listed checks ran here |
| 1 | Rotterdam | Stadsachtervolging | chase | 2 | 507 | 3 | 10 | yes | 4 | boot-all |
| 2 | Scheveningen | Kustrace | city | 2 | 400 | 1 | 4 | no | 4 | boot-all |
| 3 | Wenen | Stadsachtervolging | chase | 2 | 645 | 6 | 10 | yes | 4 | boot-all |
| 4 | Berlijn | Stadsachtervolging | chase | 2 | 634 | 9 | 10 | yes | 4 | boot-all |
| 5 | Hamburg | Havenrace | city | 2 | 326 | 7 | 0 | no | 0 | boot-all |
| 6 | Frankfurt | Vliegveldrace | city | 2 | 334 | 8 | 0 | no | 0 | boot-all |
| 7 | BodenSee | Drielandenrace | city | 2 | 477 | 4 | 0 | no | 5 | boot-all |
| 8 | Munchen - Wenen | Snelwegrace | highway | 1 | 607 | 5 | 1 | no | 4 | boot-all |
| 9 | Download-race, shown as Country etappe | Country-race | city | 2 | 401 | none | 3 | no | 5 | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all |

Characters, from `static.ini`. `IndexInGame` picks the car, the static index picks art and voices.

| Name | Car | Anim | Tour | Quick Race | Implemented | Verified as the player's car |
|---|---:|---|---|---|---|---|
| Edgar de Flits | 0 | `checker` | yes | yes | yes (recompiled), menu entry yes (menu port) | reference-wine, record 11; check-driving, record 11; check-race-ui; run-bot |
| Tommie 'El Niño' | 1 | `hotrod` | yes | yes, default | same | check-flow |
| James Brons | 2 | `countach` | yes | yes | same | boot-all. Ran as AI in check-flow |
| Katharina 'Kat' | 3 | `merceslk` | yes, default | yes | same | boot-all. Ran as AI in check-flow |
| Barbarally | 4 | `buggy` | yes | yes | same | boot-all. Ran as AI in check-flow |
| D.T. Harry | 5 | `humvee` | no | after a Tour win | same | boot-all |
| politie-auto | 6 | `politie` | no | yes | same | boot-all |
| hunny | 7 | `DOWNLOADCAR` | no | no | n/a | In no list |
| downld, shown as De Schaduw | 7 | `DOWNLOADCAR`, the truck | no | yes, since the car update | yes (recompiled), menu entry yes (menu port) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all |

Investigated and not found: multiplayer, weather, reversed or mirrored tracks, per-track music, per-surface traction, a repair shop, a reverse gear, manual gears (`0x403020` has no callers). Present in the data but dead: arrest, fuel station, FSM roadblock, trailers.

## Known incomplete

Every row with Implemented `partial` or `no`: 125 rows, 75 partial and 50 no, generated from the parity tables. The Why column is the row's own note, with a neighbouring-row reference such as "Same" spelled out. Many are on purpose. What matters most:

1. **Consequences of the fixed tick, on purpose.** FPS gates and the view distance governor cannot fire, so view distance and effects stay full on a slow device, on the 8-bit path too, where an emulated Pentium MMX 266 shows the original losing both. Timers slow with the game when the browser falls behind and stop with a hidden tab. The first ring samples are fixed: the time from clock init to the first tick is 8.4 ms, as measured on one machine. Reasoning: [the timing decision](original-behavior.md#the-timing-decision).
2. **Picture.** With a 3D card: HUD drawn last at native size, so late effects show through HUD parts with alpha, and a black clear. Blending between ticks. Hand-edited fog and mip chains are unsupported. The loading bar follows the download and stands on its last frame during boot. The 8-bit path has its own port choices: [intentional-differences.md](intentional-differences.md#picture).
3. **Options the browser decides.** `Hoog`, `Overige resoluties`, `Videokaart`, `Rendergeheugen` and `Verversingssnelheid` are greyed with a note. `3D-resolutie` and `Renderschaal` set the picture size. `3D kaart` and `Laag` are open, by the original's rules.
4. **Numerics and exceptions.** x87 on f64. 16 functions catch and go on; the 2 STL retries and 10 iostream catches are not modelled, so a throw there ends the race.
5. **Process and platform.** A tab cannot close itself, so Einde returns to the intro. No modal fatal message box. No `debug.ini`, logs, `SERVICE.EXE` or Internet. Help window without pictures. Browser targets other than Chromium were not run, and video is H.264 only.
6. **Input.** Cameras 6 to 0 are keyboard only. Dashboard and Detail have no pad button. F9, F10, F11 are masked, so no Ctrl+F10 screenshot. Ctrl+Space+T may not reach the game on a desktop browser. At 640x360 long game texts run 8 to 37 CSS px under `Stop` (calculated), and the requestor frame under `Meer`.

### Start-up and menu: 11 partial, 15 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| `ExitCode` 255: close and end | partial | fix check: Afsluiten on the error dialog ran the same `exitGame` and the first screen returned (one-off script) | `App.exitGame` runs `startUp` with `firstTime` again: the intro returns, because a page cannot close itself. Intentional. Einde itself is in no check |
| Launcher window black, cursor hidden over it | partial | not verified | Page and canvases are black (`style.css`). The launcher's `SetCursor(NULL)` has no counterpart: the pointer shows over the menu and the loading screen. Over the race it is hidden: see Platform |
| `rsc.dll` archive I/O for the menu | partial | form check | Replaced: `MenuRcs` members are extracted to PNG and WAV by `tools/prepare-assets.py` |
| `SERVICE.EXE` from the exception dialog | no | not verified | Goes with the Davi-Service option of `TfrmException2`, left out on purpose: no such program here |
| Message box of a fatal error | partial | not verified | `onMessageBox` in `race-runner.js`: console and status line, no dialog. Intentional. The load-failure check aborts a fetch, which takes the catch in `run`, so no check ran this path |
| Race window title `A2 Racer IV` | no | not verified | Page title is `A2 Racer 4` (`index.html`) |
| Display mode 800x600, trying 24, 16, 15, 32 bpp; restored at exit | partial | form check | `framework.js` `relayout` scales the 800x600 form, no mode change. Intentional |
| Full screen | partial | checked on Amsterdam: check-race-ui | `app.js` `applyFullscreen`, `fullscreenChanged`; `settings.js` default on. Browsers allow it only from a gesture, so the first gesture enters it. The player leaving it turns the setting off until ticked again, and in a race opens the quit prompt. An iPhone has no such call: row greyed in Geavanceerd, hidden in the race panel. Intentional. Named checks `full screen: ...`, all in a race, in headless Chromium where Esc reaches the page. Not run: real Esc in a browser that keeps it, the Safari prefix, the keyboard lock's effect |
| `debug.ini`, `MenuTrac.log`, `menu.log` | no | not verified | Browser console instead |
| Menu: search `c:` to `z:` for `DATA\INTRO1.MPG` | no | checked on Amsterdam: check-flow | Removed on purpose: `docs/intentional-differences.md`, Platform. check-flow reaches the race without a prompt |
| `raser.ini [directx] guid` | no | not verified | The greyed driver choice never sets it, so it is never written |
| `TfrmException2` (12) | partial | form check | `group-dialogs.js`, an HTML panel opened from window `error` and `unhandledrejection` through `flow.js` `unexpectedError`, one at a time. Text from `[ERRORSTRINGS]`, Afsluiten, Negeren, Details, original icon. Left out on purpose: the Davi-Service line and option. Browser refusals open nothing, errors during a race neither. Not run: Ctrl+C copy |
| `btnInternet` enabled if a browser is found | no | fix check: disabled; a mouse click at 1280x720 and a touch tap at 390x844 both show the note (one-off script) | Greyed on purpose in `TfrmMainScreen.create`, with the note `De website van A2 Racer 4 bestaat niet meer...`. `mainscreen.png`. `game-progression.md` consequences advise this |
| `TfrmInternetDlg`, Ja opens `DOWNLOADURL` | no | not verified | Not reached. On 2026-10-31 the address answered 301 to `nl.visma.com/producten/davilex/`, so it no longer leads to an A2 Racer site |
| Re-read `static.ini` after the visit | no | not verified | Nothing can change that file here; commented in `group-main.js` |
| WinHelp at a context: title and text | partial | form check | `HelpWindow`, `menu-help.json`: a plain scrolling window with the topic's title and text. `prepare_help` parses `Menu.hlp` itself. Its layout, popup-window look and pictures are missing, and tab stops are approximated by one fixed size. Intentional |
| Pictures in help topics | no | not verified | Left out on purpose |
| Hoog, RESOLUTION 4 | partial | fix check: disabled with a note; a `RESOLUTION 4` save shows it chosen and keeps 4; Normaal from it gives 3 (one-off script) | Greyed on purpose: the picture size comes from 3D-resolutie. Game code sees 800x600 on such a save, and it looks like Normaal. Without `3D kaart` the original has it off too. `options.png` |
| Wait VBL | no | form check | Greyed with a note. A one-off script saw the note on click |
| Render memory, RenderFocus | no | form check | Greyed with a note |
| Videokaart, `cboDriver` | no | form check | Greyed with a note. Shows the save's value, `automatisch` by default, as `M:0x4884b8` |
| Overige resoluties, `cboResolution` | no | form check | Greyed with a note. Shows the original's fixed `640 x 480`. A one-off script saw the note on click. Replaced by 3D-resolutie and Renderschaal |
| OK with driver index below 2 stores the fixed mode | no | not verified | Left out on purpose: a save on Hoog keeps its value, where the original turns it back to Normaal |
| `13` VK 108, separ | no | not verified | `vkOf` never yields 108, as input.md H9 asks |
| Slider `BackImage`, blitted at 0,0 | partial | not verified | `loadDfm` gives `Slider` none, and `tools/convert-dfm.py` drops the binary property. The dialog art holds the same track: read with a small script, byte-exact at (378,233), (378,292), (378,354) on `TfrmOptions`, where the DFM places the sliders at (380,234), (379,292), (378,355), and in place on `TfrmSliderSettings`. So the port shows only the baked track |
| Browser targets other than Chromium | partial | not verified | Code avoids engine-specific calls where seen; no other engine was run. Video is H.264 only |

### Race rules and content: 3 partial, 1 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| Wait screen per track, `e0N_w_hi` with progress bar | partial | fix check: frames 0 to 10 on a contact sheet, rectangle measured at 308.5, 438, 288x24 | Same picture and bar art at the game's rectangle, shown by `RaceRunner.load` in `source/race-runner.js`, because the race boots in one blocking call and `blitToScreen` draws no wait picture. On purpose: the bar follows the download, then stands on its last frame during boot. At `RESOLUTION` 1 and 0 the art is made ahead from `e0N_w_hi.pcx`, `e0N_w_lo.pcx` and `overlay.pcx`: not in this check, and not compared with the guest |
| Cheat Ctrl+Space+T, text 44, highway | partial | not verified | Rule recompiled, but desktop browsers reserve Ctrl+T (`input.md` H8, a browser fact), so it may not reach the game. `navigator.keyboard.lock` is asked for in full screen where it exists, effect not checked. check-race-ui shows only that a synthetic Ctrl+T is passed to the game |
| Pushes without a time step | partial | checked on Amsterdam: check-traffic | On purpose: one operand scaled by `min(1, tick*25)`, as in the owner's patched game, not as unpatched: `PATCHES` in `tools/recomp/replacements.py`, `docs/intentional-differences.md`. Highest nose rise at 60 ticks 0.208, owner's patched game 0.18; with whole pushes 0.742, owner's original 0.74. At 30 ticks with the share 0.193 against his 0.19 |
| FPS gates: re-placement below 15, spawns at 12, wipes and view distance below 10 | no | not verified | On purpose: the code is there, but `dt` is fixed at 1/60 s after the start, so they cannot fire on any device. View distance and effects stay full on a slow device, on the 8-bit path too. In the original the `visible_chunks` floor of 15 and the smoke gate were seen on the emulated machines of reference-86box: `sim-timing.md`, Callers of dt |

### Simulation and timing: 11 partial, 4 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| Step 23 view distance governor | partial | not verified | `spel.wasm`. Cannot fire: it needs state 0 and `1/dt < 10`, and `dt` is 1/60 by then. So view distance stays full on a slow device. The original's did fire on the guest: see the `visible_chunks` gate |
| After the pass: Ctrl+F10 screenshot | no | not verified | Masked in `source/input/keyboard.js`, and `Race.tick` does not call it. Recorded in `docs/intentional-differences.md` |
| `raw = t - time` from a float counter | partial | compared with the original: reference-wine | Each sample after the first two is exactly one tick, by design. The original's `dt` at 60 ticks on a clean clock runs 0.0160 to 0.0173. The noise is left out, but a steady ring alternates the last bit of `dt`, so gas mixes +4 and +5 as in the original: see Gas |
| Uptime rounding bug | no | not verified | Removed on purpose: `docs/intentional-differences.md`, Clocks |
| FPS gate below 15: AI re-placement | partial | not verified | `spel.wasm`. Fires only in the first 3 ticks here, on any device |
| FPS gate at most 12: spawns | partial | not verified | `spel.wasm`. Fires only in the first 3 ticks here, on any device |
| FPS gate below 12: spawns | partial | not verified | `spel.wasm`. Fires only in the first 3 ticks here, on any device, so smoke always spawns here. In the original at 8 bits, on the guest of reference-86box: no smoke on the Pentium MMX 266 at 640x480, nor on a K6-2 550 at 640x480; a K6-2 550 at 320x200 shows it |
| FPS gate below 10: wipe effects | partial | not verified | `spel.wasm`. Fires only in the first 3 ticks here, on any device |
| FPS gate below 10: `visible_chunks` down to 15 or 25 | partial | not verified | `spel.wasm`. State 0 only, so never here: 25 stays on the fixed tick, on both paths. Floor 15 is the 8-bit path's. In the original, on the guest of reference-86box: on the Pentium MMX 266 far scenery is gone by the time the race stands still, and a port frame with `?chunks=15` matches it. `?chunks=N` with `?race=1` is only for such a comparison |
| Wall-clock timers keep real time when the game falls behind | no | not verified | All on one virtual clock here, so timers slow with the game: see `docs/intentional-differences.md`, Falling behind |
| Timers keep running while the window is inactive | no | checked on Amsterdam: check-race-ui | Recorded as intentional: `docs/intentional-differences.md`, Focus loss. The settings panel stops them too |
| x87 PC=01 before the step, PC=11 in Ipion | partial | not verified | Control word tracked for rounding only, `tools/recomp/lift.py`. Precision in the original not established |
| x87 80-bit values | partial | not verified | f64 in `tools/recomp/lift.py`. Not bit-equal to Windows. Recorded: `docs/intentional-differences.md`, Numerics |
| Keys 6, 7, 8, 9, 0 | partial | not verified | Keyboard only. No touch or pad button. Not in the manual |
| Key 5 HUD mode `DAT_00712784`, manual: dashboard. Not a camera | partial | checked on Amsterdam: check-race-ui | Keyboard and touch (Dashboard behind Meer). No pad button on purpose: none is free. Value 0, 1, 0 read in the check |

### Rendering: 13 partial, 11 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| Caps: `dwMaxTextureWidth` | partial | boot only: boot-all | Reports 0, no limit. `render-textures.md` rule 8 asks for 32 times a power of 2. No effect at reachable budgets |
| `RESOLUTION=4`, Hoog, 800x600x16 | partial | fix check: Hoog greyed, a save with 4 keeps it, Normaal gives 3 | Hoog greyed with a note pointing to `3D-resolutie`. A save with 4 reaches game code as 800x600, and the picture does not change: `SetDisplayMode` only stores it |
| `RESOLUTION=6, 7, 8, 9`, `Overige resoluties` | no | form check | `cboResolution` shows the fixed `640 x 480`, greyed with `NOTE_RESOLUTION`. `3D-resolutie` and `Renderschaal` set the picture size instead |
| `Verversingssnelheid synchroniseren op beeldscherm`, `WAITVBL` | no | form check | Greyed with `NOTE_WAITVBL`, `TfrmDisplaySettings.greyOut`. The browser decides |
| `Rendergeheugen afgehandeld door videokaart`, `FOCUS` | no | form check | Greyed with `NOTE_FOCUS` |
| `Videokaart instellen`, `cboDriver`, `[DIRECTX]` | no | form check | Greyed with `NOTE_DRIVER`. Shows the save's value, `automatisch` by default |
| State 8 `FILLMODE` | no | not verified | Ignored. No reachable writer found; unresolved |
| States 17, 18 filter values 3, 4, 6 | partial | fix check: mipmapping=1, FILTER=0 gives TEXTUREMAG 3, world nearest, HUD linear | 3 is nearest, others linear, level 0 only. Hand edit only |
| State 28, 34 fog | partial | not verified | Off on shipped data. Hand-edited fog is not supported |
| `FOG=1` or `2`, 50% per launch, `0xB4B4C8`, 3.5 to 1000 | no | not verified | Hand edit of `game.ini` only, not supported on purpose. `FRAG` would give a flat colour |
| Viewport `SetBackground` | no | not verified | `setBackground` is a no-op. Fog path only |
| `SetLightState` 4 to 7 | no | not verified | Stored and not read, `setLightState`. Fog path only |
| Wait for VBL | no | not verified | `WaitForVerticalBlank` no-op in `directx.js`. Browser decides |
| Z clear only, colour kept | partial | not verified | `present` clears to black too, with a 3D card. In `docs/intentional-differences.md`. The 8-bit path keeps the colour: see there |
| HUD inside the scene, before late effects, by depth | partial | not verified | On purpose: drawn last in its own scene after `clearDepth`, at native size, `present`. Late effects show through alpha HUD parts, and no world geometry can cover the HUD. The 8-bit path has the same order, with the HUD on the mode's grid, `presentIndexed` |
| Skid marks after HUD | partial | not verified | On purpose: before the HUD, because the HUD draws last at native size |
| `gfx_wolk` after skid marks | partial | not verified | On purpose: before the HUD. Order among world batches kept |
| Finish flag | partial | not verified | On purpose: before the HUD, for the same reason |
| `gfx_bwlk` | partial | not verified | On purpose: before the HUD. Drew 0 times in a whole Amsterdam race |
| Colour-0 fills at start-up and exit | no | fix check: with Space held at exit the pixel kept its last-frame value over 8 presents | On purpose: the page swaps canvases there and the last frame stays up while keys are released |
| Picture from one pass of the loop, nothing blended | partial | not verified | On purpose: the port blends between ticks. repeat-trace covers game state only |
| `OVL_PROGRESS_BAR`, 11 frames, percent table in `raser.ini` | partial | fix check: 11 frames on a contact sheet, rectangle measured at 308.5, 438, 288, 24 | On purpose: original art at the original rectangle, `bar-00..10.png`, or `bar8-NN.png` on the 8-bit path, `RaceRunner.showBar`, but the frame follows the download, not `[progress]`, because `race.boot()` blocks |
| Key read from the surface, first `Load` before `SetColorKey` | partial | not verified | Key 0 until set, no re-upload, `uploadPixels`. Same result in `RESOLUTION` 3 and 4 |
| Mip chains with authored levels | no | not verified | Not supported, on purpose: `Load` uses level 0 only. Needs a hand edit of `game.ini`. The filter states on that path: see Render states |

### HUD: 8 partial, 1 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| HUD pass order: before skid, clouds, flag, `bwlk`, on top by depth | partial | not verified | On purpose: the port draws the HUD last, at native size, in `D3DRenderer.present`, or on the mode's grid on the 8-bit path. Alpha HUD parts blend over late effects, and no world geometry can cover the HUD |
| `OVL_PROGRESS_BAR`, frames `ovl_p00`..`ovl_p10` | partial | fix check: 11 frames on a contact sheet, rectangle measured at 308.5, 438, 288, 24 | Original art at the original rectangle as `bar-00..10.png`, not drawn by the game. `RaceRunner.showBar`. On the 8-bit path `bar8-NN.png` from `overlay.pcx`, `prepare_loading_bar_8`, not on the contact sheet |
| Progress percent table | partial | not verified | On purpose: runs inside `race.boot()`, never painted. The bar follows downloads, then stands on the last frame |
| Last load frame with the normal HUD | no | not verified | Not painted, because `race.boot()` blocks |
| `5`, dashboard on/off | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Dashboard`. No pad button, on purpose: no free button is left. The check pressed the touch button: `0x712784` 0, 1, 0 |
| `D`, overlay detail | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Detail`. No pad button, on purpose. The check pressed the touch button: `0x6fb924` 3, 0, 1 |
| HUD clear of touch controls: game text | partial | not verified | Calculated: at 640x360 long texts run 8 to 37 CSS px under `Stop`. Clear at the other checked landscape sizes. Not among the check's rectangles |
| HUD clear of touch controls: requestor | partial | not verified | Calculated: at 640x360 a corner of 11 by 26 CSS px under `Meer`, text clear. Not among the check's rectangles |
| HUD clear of touch controls: `Meer` open | partial | not verified | The column widens, 5 columns at 640x360. The layout checks ran with it closed |

### Audio: 3 partial, 1 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| Decode cache by file name | no | not verified | Each reload decodes again. No player-visible effect established. |
| Menu sound keeps playing without focus: `DSBCAPS_GLOBALFOCUS` 0x80E0 | partial | not verified | Blur keeps playing. A hidden tab suspends the context on purpose, in `source/app.js`. |
| Master **Volume** on the movies (port) | partial | fix check: `video.volume` follows the setting at 25% | `playVideo`, when a movie starts. iOS ignores `video.volume`, so there the device volume applies: not tested. |
| Key settings: `MessageBeep(0)` on a key outside the list | partial | fix check: the beep goes through `rt.sound.output()` | `messageBeep` in `group-options.js`: a stand-in, 880 Hz for 0.12 s at FX gain, for the Windows default sound. |

### Input and platforms: 18 partial, 13 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| DEVICE 2 with under 3 buttons: `CM_JOY_BUTTON2` gas, fatal `CM_KEYB_ALT` | no | not verified | On purpose: `RaceRunner.chooseDevice` always reports 4 buttons, so the fatal cannot happen |
| DEVICE 3 and 4 with under 3 buttons | no | not verified | On purpose: caps always report 4 buttons |
| No joystick on DEVICE 2, 3, 4: fatal `Device Joystick0 does not exist!` | no | not verified | On purpose: the virtual joystick is always present for these (`RaceRunner.chooseDevice`), and keys and touch feed it |
| Key 6, VK 0x36: view 6 | partial | not verified | Keyboard only, no touch or pad control; not in the manual |
| Key 7, VK 0x37: view 7 | partial | not verified | Keyboard only, no touch or pad control; not in the manual |
| Key 8, VK 0x38: view 8 | partial | not verified | Keyboard only, no touch or pad control; not in the manual |
| Key 9, VK 0x39: view 9 | partial | not verified | Keyboard only, no touch or pad control; not in the manual |
| Key 0, VK 0x30: view 10 | partial | not verified | Keyboard only, no touch or pad control; not in the manual |
| Key 5, `CM_KEYB_5`, edge: `Dashboard aan/uit` | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Dashboard`. No pad button, on purpose: every standard button is in use. `touch: Meer shows Roepen, Dashboard and Detail, which work`: `0x712784` 0, 1, 0. The keyboard's 5 itself was not pressed |
| Key D, `CM_KEYB_D`, edge: `overlay_detail` | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Detail`. No pad button, on purpose. The check pressed the touch button: `0x6fb924` 3, 0, 1 |
| F9, F10, F11 while paused | no | not verified | On purpose: masked for the game (`MASKED`) |
| CTRL+F10: screenshot `lvl%2.2d_%2.2d.bmp` | no | not verified | On purpose: F10 masked. [intentional-differences.md](intentional-differences.md), Debug keys |
| F11 spin in `0x00419600` | no | not verified | On purpose: F11 masked, and it stays with the browser. `intentional-differences.md`, Debug keys |
| `13=108,separ` | no | not verified | On purpose: `vkOf` never returns 108, so it cannot be chosen. input.md H9 |
| `CM_KEYB_RSHIFT`, DIK 0x36, VK 0xA1 | partial | not verified | Browser `ShiftRight`. VK 0x10 only; input.md H1 asks also for 0xA1. No game code polls 0xA1 |
| `CM_KEYB_F9`, DIK 0x43, VK 0x78 | partial | not verified | Browser `F9`. Masked for the game: the port's settings key. It does not end a pause either |
| `CM_KEYB_F10`, DIK 0x44, VK 0x79 | partial | not verified | Browser `F10`. Masked for the game. [intentional-differences.md](intentional-differences.md), Debug keys. It does not end a pause either |
| `CM_KEYB_F11`, DIK 0x57, VK 0x7A | partial | not verified | Browser `F11`. Masked for the game, and it stays with the browser. `intentional-differences.md`, Debug keys. It does not end a pause either |
| `CM_KEYB_F13`, DIK 0x64, VK 0x7C | partial | not verified | Browser `F13`. VK only; no DIK in `DIK`. No binding uses it |
| `CM_KEYB_F14`, DIK 0x65, VK 0x7D | partial | not verified | Browser `F14`. VK only; no DIK in `DIK`. No binding uses it |
| `CM_KEYB_F15`, DIK 0x66, VK 0x7E | partial | not verified | Browser `F15`. VK only; no DIK in `DIK`. No binding uses it |
| Digital path, `dwDevType` exactly 0x404 | no | not verified | On purpose: caps never report 0x404 (`chooseDevice`), so D-pad steering is full lock at once. input.md H4 lists it as an option |
| Thrown input error ends in a fatal message | partial | not verified | A status line `Race gestopt door een fout` and back to the menu (`RaceRunner.frame`), not a message box and `ExitProcess`. No input error was provoked |
| Caption accelerator | no | not verified | `TfrmException2` is an HTML panel; its `Details >>` button has no accelerator |
| Cameras 6 to 0 on touch | no | not verified | Keys 6 to 0 stay keyboard only |
| Dashboard, overlay detail on the pad | no | not verified | On purpose: no standard button is left free. They work on keyboard and touch |
| Cameras 6 to 0 on the pad | no | not verified | Keys 6 to 0 stay keyboard only |
| Connect during a race on DEVICE 1 | partial | checked on Amsterdam: check-race-ui | On purpose: the game binds its device once at load, so the pad cannot drive until the next race. Note `Gamepad werkt vanaf de volgende race`, then Start, Back, LB, L3 and D-pad up work. `gamepad: found in a keyboard race gives a note, lost pauses` |
| macOS Ctrl+Left, Ctrl+Right note | partial | not verified | A documentation item: stated in `README.md` and the behaviour document, not in the game. `TfrmKeySettings` can rebind turbo |
| Dialog keys, landscape prompts | partial | not verified | No inset: centred under the requestor frame, so a notch is unlikely to cover them |
| Frame counter and status text | no | not verified | Not essential: `#fps`, `#status`, `source/style.css` |

### Host and process: 8 partial, 4 no

| Feature | Implemented | Verified | Why |
|---|---|---|---|
| Ctrl+F10 screenshot `lvl%2.2d_%2.2d.bmp` | no | not verified | Left out on purpose: F10 is masked in `source/input/keyboard.js`, and `Race.tick` does not test the keys. Recorded in `intentional-differences.md`, Debug keys. |
| Fatal error dialog | partial | not verified | `host.onMessageBox` puts the text in the status line, not modal, then `GameExit` leads back to the menu, in a race (`Race.tick`) and during load (`RaceRunner.run`). Read from the code: no check triggered a fatal in the game. |
| `lvl%2.2d_%2.2d.bmp` | no | not verified | Left out on purpose with Ctrl+F10. Recorded in `intentional-differences.md`, Debug keys. |
| `debug.ini`, `MenuTrac.log`, `menu.log` | no | not verified | Left out on purpose: logs for support, no effect on the player. |
| `SaveGame<N>.BAK` | partial | not verified | Kept in memory for the time of the player dialog (`GameData.beginPlayerDialog`), not as a file. |
| Duplicate sections | partial | not verified | The port merges them, where Windows stops at the first (not tested here). Only `e09_anim.ini` has one, `[a_ramp00_anim]`. Track 9 is reachable since the track update, but the section has no extra keys, so the merge makes no difference. |
| NULL key deletes a section | no | not verified | `IniFile.set` returns. `FUN_004c3c30` callers always pass a key. |
| x87 80-bit stack, precision control | partial | checked on Amsterdam: repeat-trace | f64: recorded in `intentional-differences.md` and `docs/recompiler.md`. repeat-trace shows it repeats, not that it equals a native run. Under Wine the first three ticks agree to about 7 digits, with the control word not read. The effect of the original PC=01b is Unresolved. |
| C++ exceptions, 41 resuming catches | partial | not verified | JavaScript exceptions. 16 functions in `GUARDED` catch and go on, `source/host/hooks.js`. The 2 STL retries and 10 iostream catches are not modelled: a throw there ends the race. The host-call count had no throw in a whole Amsterdam race; no check triggers one. |
| `[General] ExitCode` 255 ends the program | partial | fix check: the error dialog's close led back to the first screen | A tab cannot close itself: `App.exitGame` returns to the first screen. The same route serves Einde; Einde itself was not run in a listed check. |
| Race loading screen: `[wait_hi]` picture and `OVL_PROGRESS_BAR` | partial | fix check: bar rectangle measured 308.5, 438, 288, 24; 11 frames on a contact sheet | `RaceRunner.showBar`: the original art at its place, with the same frame rule. The frame follows the download and stands on 95% during boot, on purpose, because boot blocks the browser. The last step with the HUD is not shown. At `RESOLUTION` 1 and 0 the art is `eNN-8.png` or `eNN-lo.png` and `bar8-NN.png`, made ahead from the PCX files through the game's palette. That art is not in the fix check, and not compared with the guest. |
| Launcher black window `MOTOR`, pointer hidden on mouse move | partial | not verified | Black page, `source/style.css`. The pointer is hidden only over the race canvas, not over the loading screen. |

## Not verified

Plainly: these have had no check. Implemented does not mean they work.

- **Every level except Amsterdam, beyond boot-all.** Rotterdam, Scheveningen, Wenen, Berlijn, Hamburg, Frankfurt, BodenSee and Munchen - Wenen booted for 2 s in Node with no renderer, ending inside the countdown. No listed check drove them or looked at them. The Country etappe, track 9, booted the same way and had one launch check: through the real menu at Quick Race position 9 with the truck, a race on the keyboard device, 31.24 m/s after 6 s of gas, 0 console errors, and three screenshots looked at by eye. No lap, no race end, no sound, no comparison with the original, which has not been run with the updates.
- **Chase and highway modes.** No stadsachtervolging or snelwegrace has run past boot-all. No check has passed a checkpoint. Timer 11 has not reached 0 in a chase. The chase HUD countdown ran in no race; the layout checks only compute its rectangle. Highway finish and cops at the finish have not run.
- **The Tour played through.** No Tour race was driven from the menu. Result branches ran with a faked `game.ini`. check-phone-flow tapped through the Tour's screens to the Garage, without a race. Advancing, money after a race, the final win and earning D.T. Harry are not verified. Quick Race ran on Normaal, Amsterdam: a whole race in check-flow, a short one on the wheel in check-phone-flow.
- **Difficulty.** check-flow ran Normaal only, from the menu. Tools that start a race directly use the shipped `LEAGUE=0` and do not test it, boot-all included. Moeilijk has not run. Nothing compared the AI factors between levels.
- **Cars.** check-driving and reference-wine ran record 11, check-flow car 1. Others boot only, or as AI. The truck, car 7, booted on all tracks and drove in that one launch check, 6 s of gas on the Country etappe: by eye the truck and its HUD. Its handling, damage and sound were not asserted, and it was not compared with the original. Tune-up flags singly, as the Tour sets them, did not run.
- **Handling against the original.** reference-wine compares car 0 on Amsterdam, by movement state: acceleration, plateau, gear index timing, reverse limit and curve, brake from speed, car height. Nothing compares steering, turbo, damage, collisions or the end of a race with a run of the original: check-driving's numbers for those are the port's own. Not measured at all: turbo force and use rate, handbrake effect, horn, airtime, spin guard, slopes, skids.
- **Opponents, traffic, police.** Opponents: path length over 30 s after GO is compared with the original, and repeat-trace's checksum holds their state, port against port. Their states, overtaking and recovery were not asserted. Traffic: nose rise against the owner's table, and its state in repeat-trace's checksum. Police pursuit, roadblock trigger and stop: not asserted. The Supercop and all path objects (helicopter, plane, train, boat, path car) are not on Amsterdam and have never been seen running.
- **Rules that need an event.** No pickup or its effect was asserted. Total loss by damage and time-up are causes no check produced; the game-over screen was entered through `FUN_0044cda0`. Money from a fine or a flitspaal, part damage, repairs, the 5000 ms reset lockout, cheats and a second race on one page in a browser did not run under a check.
- **Sound by ear.** Nobody has listened to any of it. Checks read node graphs, gains, decoded samples and an analyser level. check-flow asserts no sound. No sound of the port was compared with sound of the original. Which sample plays when is unasserted, and whether music loops without a seam is open.
- **Real phones and tablets.** None. Touch came through CDP or Playwright touch events, sizes through viewport changes. Real safe-area insets, a real rotation, an iPhone without the full-screen call and `video.volume` on iOS were not tried. The benchmark's 8x CPU throttle runs on a desktop GPU and says nothing about a phone's GPU.
- **Real gamepads, joysticks, wheels.** None. The pad is a stand-in for `navigator.getGamepads`. No race ran on DEVICE 3 or 4.
- **Other browsers.** Only headless Chromium 145. Firefox, Safari, the Safari prefixed full-screen path, a real Esc in a browser that keeps it, and the effect of `navigator.keyboard.lock` were not run.
- **Real displays above 60 Hz, slow networks.** The 144 Hz figures come from a timer standing in for `requestAnimationFrame`. Interpolation was not judged by eye. No slow real network: how long a synchronous fetch holds the page was not measured. A first play of a sound from the `late` range before its 1 MB piece has arrived takes one such request.
- **The 8-bit path, past its frames and one race.** It got: frames at rest at both modes against the original on an emulated Windows 98 machine, etappe 0, car 0, pixel-exact: 88.1% of the whole picture identical at `RESOLUTION` 1 and 85.5% at 0, what remains being single-pixel polygon edges, single texels on far surfaces and rows of HUD glyphs. Skid marks and smoke by eye and by palette index, at 320x200 on a K6-2 550. check-software: the menu's rules by real clicks, a whole race by the bot at `RESOLUTION` 1 with the same `TRACKTIME` 593233 and laps 289450, 303783 as with the 3D card, a short race at 0 left with Esc and J, back on with the 3D card, 17 of 17 in its summary, which read state, not pictures. boot-all at both modes. It did not get: the flash against the guest, since no frame of the guest caught one and only the port's palette was read. `wait_lo` pictures as drawn by the game, and the loading page against anything. The end of a race and the pause dialog against the guest. A frame of the port against the guest's off-road frame, where the colour stays between frames. `gfx_bwlk`, which takes the same branch and was not seen. Wider and taller views, whose sky and HUD positions are the port's. Any other level past boot-all. Sound: no difference is expected and none was checked. Any real machine of the period. It also read render scale and the flitser's palette in the port.
- **Pictures.** With a 3D card, against the original: three frames on Amsterdam at 640x480 from reference-wine, by eye and by mean colour, not a pixel comparison. Against the owner's patched game: the first race frame by eye, and the port's window shape for it is not recorded. Traffic, cops, damage, pickups and other tracks were never looked at against the original. The only pictures of the original menu are the intro and the CD dialog from the Wine runs; forms were judged by themselves.
- **Save compatibility.** No original `SaveGame*.RCR` exists to test against. Switching, deleting and Annuleren-restoring players did not run in a listed check.
- **Windows, period hardware, real vsync.** The original ran under Wine with software rendering and, on the 8-bit path only, on an emulated Windows 98 machine, where only its screen was read and its rate was not measured. So what a real machine of the period showed, and what its `Flip` gave, is not established.
