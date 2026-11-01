# Simulation and timing: parity

What the port implements of the original's engine, main loop, clocks, physics stepping, frame-rate behaviour, vehicle model, collisions and cameras, and which of it was checked. Part of [feature-parity.md](../feature-parity.md); the findings behind each row are in [behavior/sim-timing.md](../behavior/sim-timing.md).

`spel.wasm` is `public/game/spel.wasm`, built from the original `spel.dat` by `tools/recomp/`. Addresses are `spel.dat` VAs. "Verified" names only a check that covers the row. Only `compared with the original: reference-wine` means a run of the original was set next to the port, for what the row's Notes say, in one setup under Wine. `checked on Amsterdam` does not mean parity with the original. Apart from reference-wine, only check-traffic's numbers and reference-frame's picture are set against anything from the original or the owner's patched game. Notes on the view distance and smoke gates also cite what reference-86box's frames of the original showed, and no row here is verified by it. All checks ran on the final build on etappe 0, Amsterdam, unless the row says boot-all or is about track 9 or car 7. Details are in [validation.md](../validation.md).

| Name | Tool | Covers |
|---|---|---|
| `reference-wine` | `tools/reference-wine/`, `evidence/reference-wine/results.md` | The original `spel.dat`, unchanged, under Wine 11.20 Staging with Xvfb and llvmpipe, on Amsterdam, car 0, INI files of `original/install` without the updates, which for etappe 0, car 0 is the same data, on a clean clock. Held to 60 ticks per second from outside the process, memory read per tick, 22 launches; also 30, 120 and 240 ticks and no limit. The same key scripts on the port, headless in Node. Covers: rate with nothing limiting it, first `dt`, countdown, acceleration and plateau by movement state, reverse limit and curve, brake, gear index timing, car height, racers' path length over 30 s, the launch regimes. Not: steering, turbo, damage, collisions, race end, traffic, Windows, period hardware, real vsync |
| `reference-86box` | `tools/reference-86box/`, `docs/research/render-8bit.md`, `evidence/reference-86box/results.md` | The original `spel.dat` at `RESOLUTION` 0 and 1 on a throwaway copy of the owner's 86Box Windows 98 machine, emulated Pentium MMX 266 or K6-2 550, disc 1.01 data, etappe 0, car 0. Screenshots of the guest only: no memory read, no rate measured. An emulated machine, not a real one |
| `check-flow` | `tools/check-flow.mjs` | Intro to results in a browser with real clicks, with a whole race by the bot at `speed=8`. The game wrote `FINISHED=1`, `TRACKTIME` 593233 |
| `check-software` | `tools/check-software.mjs` | The 8-bit path through the real menu: a whole race by the bot at `RESOLUTION` 1, the game writing `TRACKTIME` 593233 and laps 289450, 303783, the same as with the 3D card, and a race at `RESOLUTION` 0. 17 of 17, by name in `evidence/software/flow/summary.json` |
| `check-race-ui` | `tools/check-race-ui.mjs` | 76 named checks of touch, keyboard, stand-in pad, pause, focus, settings, finish and game-over screens, in `evidence/race-ui/summary.json`. Sound by state only |
| `check-driving` | `tools/check-driving.mjs` | Headless, no renderer, no opponents, keyboard, record 11: gas, an object, reset, corner, brake, reverse, wall |
| `check-traffic` | `tools/check-traffic.mjs` | Headless: peak forward y of traffic in the 3 s after a start, with and without the traffic share, at 60 and 30 ticks |
| `repeat-trace` | `tools/benchmark.mjs` with `tools/compare-traces.mjs` | Once per game second a checksum over every object with a physics body, 485 on Amsterdam: object record and 3D object with world matrix. Equal at all 71 samples between 1280x720 at 60 FPS, 800x360 DPR 2 at 8x CPU throttle and 60 FPS, and every second display frame at 30 FPS, and the bot car's position and speed differ by 0. Port against port: see [behavior/sim-timing.md](../behavior/sim-timing.md), Physics stepping |
| `run-bot` | `tools/run-bot.mjs` | A whole race headless with opponents and traffic |
| `boot-all` | `tools/build-race-lists.mjs` | All 10 etappes with all 8 cars booted for 2 s with no renderer. Not a gameplay check |
| `form check` | Per-form browser checks, `evidence/forms/` | Screens and navigation only |
| `reference-frame` | None | The first race frame by eye against the owner's screenshot of his patched game under Wine |
| `fix check` | One-off script, not in `tools/` | Only what the row says. `launch through the menu, 6 s of gas, 0 console errors` is the one check of track 9 and car 7 past boot-all, run once when the updates came in: headless Chromium, the real menu, Quick Race position 9 and character position 7, a race on the keyboard device, 31.24 m/s after 6 s of gas. No lap, no race end, no sound, no comparison with the original, which has not been run with the updates |

Implemented is yes (recompiled), yes (host), yes (menu port), partial, no or n/a. A row marked n/a is not in the original's reachable content. A row with a comparison names it first, then any other check that covers it.

### Engine and file formats

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Ipion physics, through `DaviIpionSupport` | `IVP_` strings, `ipion 99/07/10` (`0x5be840`), `PhysicalObject.cpp` (`0x5af070`), `FUN_004a3960` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Car moves under forces, collides and reverses. Not compared with Windows |
| qhull hulls, `setjmp`/`longjmp` as a normal path | `qh_` strings, `FUN_0051e7a0`, `FUN_005251c0`, `FUN_0055b100` | yes (recompiled) | boot only: boot-all | `spel.wasm`; hooks in `source/host/hooks.js`, `tools/recomp/replacements.py`. Hulls built while booting 10 etappes |
| Own renderer on DirectDraw and Direct3D 5 | `D3dlib.cpp`, `D3dev.cpp`, `win32-surface.md` C3 | yes (host) | checked on Amsterdam: reference-frame | Render path in `spel.wasm`; calls drawn by `source/render/d3d-renderer.js`, `source/host/directx.js`. First frame by eye |
| DaviScript runtime | "DaviScript error" (`0x5a8ec8`), `FUN_00475b50`, `0x4cf000-0x4ea0bf` | yes (recompiled) | boot only: boot-all | `spel.wasm`. Pickup scripts: `docs/behavior/race-rules.md` |
| `bonus.dso`, 190 script functions | `decompiled/game__bonus.dso/README.md`, `FUN_00475860` | yes (recompiled) | boot only: boot-all | Unchanged file in `public/assets/game` |
| InputLib on DirectInput | `D:\Work\InputLib` strings, `0x4ea0c0-0x4f1fff` | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`; `source/host/directx.js`, `source/input/keyboard.js` |
| `.d3d` models | `FUN_004be590`, `docs/formats/game-data.md` | yes (recompiled) | boot only: boot-all | `spel.wasm`; read through `source/host/vfs.js` |
| Track files `.cmp .dmp .pmp .rmp .omp .pth` | `FUN_004ae490`, `FUN_004aba30`, `FUN_004ab6d0`, `FUN_004b35f0`, `FUN_004aa9d0`, `FUN_004aead0`, `FUN_004641d0` | yes (recompiled) | boot only: boot-all | `spel.wasm`; `source/host/game-files.js`. Unchanged files |
| `VDYNS.DAT`, 100 records of 0x268 bytes | `FUN_004290f0`, `vdyns.dat` 61,600 bytes | yes (recompiled) | boot only: boot-all | `spel.wasm`. Byte-identical to the current install in `public/assets/game`. The car update changes record 7 only |
| `car_cfg.ini`, `damage.ini`, `intel.ini`, `raser.ini` | `FUN_00423e40`, `FUN_00426a90`, `FUN_00448cd0` | yes (recompiled) | boot only: boot-all | `spel.wasm`. Byte-identical at build, `game.ini` and `raser.ini` then written by `source/menu/data.js` |
| Archives `rcs.img/ind`, `rc.img/ind` | `docs/formats/resource-archives.md` | yes (host) | boot only: boot-all | `source/host/game-files.js` reads ranges per race |
| `PHYS%d.DAT` | `FUN_00432d20`, 20 records; no such file on the disc, and no call, jump or pointer to the function (raw scan) | n/a | not verified | Stays in `spel.wasm` |
| Raycast car `PhysicalRayController` | `FUN_004a5e70`; arg 11 of `FUN_00429710` is 0 at all 3 call sites | n/a | not verified | Stays in `spel.wasm`, never created |
| Older steering and car model | `FUN_00428320`, `FUN_00428707`, `FUN_00427c10`, `FUN_0046f330`: no callers, no pointers | n/a | not verified | Dead in the original |
| Manual shift | `0x403020`, `0x403030`: no callers | n/a | not verified | Dead in the original |
| Trailers `car_trailer.cpp` | `FUN_00431320` has no reference (raw scan), `[Connected Object Types] count=0` | n/a | not verified | Dead in the original. The owner's `trailer_push` is therefore not applied |
| Fuel station `ev_tank.cpp` | `FUN_0043c885`, no call, jump or pointer | n/a | not verified | Dead in the original |
| Unliftable entries in `tools/recomp/out/report.json` | Ten entries; bytes that are not function starts, or `sinh` tables whose callers map to `Math` | n/a | not verified | Trap if called. No route found |

### Main loop, one pass

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `WinMain` before the loop | `FUN_00458270` | yes (host) | checked on Amsterdam: check-flow | `source/host/race.js` `boot` |
| Loop while `DAT_006fb89c` | `FUN_00458270` | yes (host) | checked on Amsterdam: check-flow, run-bot | `Race.tick` |
| Step 1 clock update | `0x44cb9e`, `FUN_004a6700` | yes (host) | compared with the original: reference-wine | `hook!updateClock` in `source/host/race.js`. Field, raw sample and physics delta read per tick in both: see Frame clock |
| Step 2 poll input | `0x44cba3`, `FUN_00469fa0`, `FUN_0046fdb0` | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`; state from `source/input/keyboard.js` |
| Step 3 object handlers | `0x44cbdd`, `FUN_004a9870` | yes (recompiled) | checked on Amsterdam: check-driving, run-bot | `spel.wasm` |
| Step 4 AI re-placement | `0x44cbf2`, `FUN_0041ca20`, `FUN_0041cae0` | yes (recompiled) | not verified | `spel.wasm`. Ran in run-bot, not measured |
| Step 5 cameras | `0x44cc01`, `FUN_00438670` | yes (recompiled) | checked on Amsterdam: reference-frame, check-race-ui | `spel.wasm`. First frame by eye; view switching read as a view id, not framing |
| Step 6 3D listener | `0x44cc06`, `FUN_004509b0` | yes (recompiled) | not verified | `spel.wasm`. Sound checked by state only |
| Step 7 particle emitters | `0x44cc55`, `FUN_0045dc00(dt)` | yes (recompiled) | not verified | `spel.wasm`; guarded by `source/host/hooks.js` |
| Step 8 skid sound and smoke | `0x44cc5a`, `FUN_0044e830` | yes (recompiled) | not verified | `spel.wasm` |
| Step 9 skid strip | `0x44cc6c`, `FUN_00444de0` | yes (recompiled) | not verified | `spel.wasm` |
| Step 10 game keys | `0x44cc81`, `FUN_0044cf90` | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`. P, Esc, Enter, 5, D and T. Tweak keys inert |
| Step 11 damage smoke | `0x44cc8b`, `FUN_00427130` | yes (recompiled) | not verified | `spel.wasm` |
| Step 12 total loss | `0x44cc90`, `FUN_0044c950` | yes (recompiled) | not verified | `spel.wasm` |
| Step 13 airtime message | `0x44cc9a`, `FUN_004031e0` | yes (recompiled) | not verified | `spel.wasm` |
| Step 14 draw, also advances effects | `0x44ccc2`, `FUN_0044da30` | yes (host) | checked on Amsterdam: check-flow, reference-frame | `spel.wasm` runs it on every tick; `captureLevel` in `source/race-runner.js` |
| Step 15 physics step and copy | `0x44ccea`, `FUN_004aa0c0` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm` |
| Step 16 path triggers | `0x44ccef`, `FUN_00464cf0` | yes (recompiled) | not verified | `spel.wasm` |
| Step 17 path animations | `0x44ccf4`, `FUN_00464cb0` | yes (recompiled) | not verified | `spel.wasm` |
| Step 18 event slots | `0x44cd03`, `FUN_0043c260` | yes (recompiled) | checked on Amsterdam: check-flow | `spel.wasm`. Start and finish events ran |
| Step 19 time limit | `0x44cd08`, `FUN_0044c8c0` | yes (recompiled) | not verified | `spel.wasm`. check-flow's race ended with `FINISHED=1` and `Out_Of_Time=1`, see Slot 0xB |
| Step 20 debug dashboard | `0x44cd30`, `0x4409c0` | yes (recompiled) | not verified | `spel.wasm` |
| Step 21 race console | `0x44cd35`, `FUN_00472230`, `FUN_00471bd0` | yes (recompiled) | not verified | `spel.wasm`. Inert as shipped |
| Step 22 present | `0x44cd4e`, `FUN_0044df10`, `FUN_004c41e0` | yes (host) | checked on Amsterdam: check-flow | `Flip` in `source/host/directx.js` calls `renderer.endFrame`. No pacing |
| Step 23 view distance governor | `0x44cd53`, `FUN_0044cb30` | partial | not verified | `spel.wasm`. Cannot fire: it needs state 0 and `1/dt < 10`, and `dt` is 1/60 by then. So view distance stays full on a slow device. The original's did fire on the guest: see the `visible_chunks` gate |
| Step 24 pause or quit dialog | `0x44cd58`, `FUN_0044ca80` | yes (host) | checked on Amsterdam: check-race-ui | `hook!pauseBegin`, `Race.pollPause`, `Race.endPause` in `source/host/race.js` |
| Step 25 frame counter | `0x44cd80`, `DAT_006fb8dc` | yes (recompiled) | not verified | `spel.wasm`. Log and guard only |
| After the pass: bonus timers and zoom | `FUN_004517f0` | yes (recompiled) | not verified | `spel.wasm`, called from `Race.tick` |
| After the pass: log count | `FUN_0044e180` | yes (recompiled) | not verified | `spel.wasm` |
| After the pass: message pump | `FUN_00458020` | yes (host) | checked on Amsterdam: check-flow | `spel.wasm`; `PeekMessageA`, `WaitMessage` in `source/host/win32.js`. Never blocks |
| After the pass: Ctrl+F10 screenshot | `FUN_00458400` | no | not verified | Masked in `source/input/keyboard.js`, and `Race.tick` does not call it. Recorded in `docs/intentional-differences.md` |
| After the pass: cop radio | `FUN_0041c150` | yes (recompiled) | not verified | `spel.wasm` |
| Exit | `FUN_00458210`, `FUN_0044afc0` | yes (recompiled) | checked on Amsterdam: check-flow, run-bot | `spel.wasm`; `Race.finish`. Results written |

### Frame clock

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Clock object at `0x7128b0` | `FUN_004a65e0`, +0 QPF, +4 freq, +8 time, +0xC step | yes (recompiled) | not verified | `spel.wasm` |
| `QueryPerformanceFrequency`, value exact in f32 | `FUN_004a65e0`; `sim-timing.md` I4 rule 2 | yes (host) | not verified | `VirtualClock.freq` 1193182, `source/host/win32.js` |
| `QueryPerformanceCounter` from one clock | `FUN_004a6700`, `FUN_004a6840`, `FUN_0050a5e0` | yes (host) | not verified | `source/host/win32.js`. Start 1 to 101 s |
| `timeGetTime` fallback | `FUN_004a6700`, only if QPF fails | yes (host) | not verified | Same clock. QPF always succeeds here |
| Ring of 4 at `DAT_00712868`, start 0.1f | `FUN_004a65e0` | yes (host) | compared with the original: reference-wine | `hook!updateClock` in `source/host/race.js`. The first `dt` values follow from it: see Start of a race. Restoring the ring changed which launch regime the fixed-seed runs land in, not the physics: see Engine |
| Weights .5, .25, .125, .125, f32 after each term | `0x4a676d`-`0x4a67c2` | yes (host) | compared with the original: reference-wine | Same hook, `Math.fround` per term. Field per pass read in both. Original pass 1: 2.9237 for a clock of 11.58 s at init and 8.44 ms to the first tick, as the weights give |
| `raw = t - time` from a float counter | `FUN_004a6700` | partial | compared with the original: reference-wine | Each sample after the first two is exactly one tick, by design. The original's `dt` at 60 ticks on a clean clock runs 0.0160 to 0.0173. The noise is left out, but a steady ring alternates the last bit of `dt`, so gas mixes +4 and +5 as in the original: see Gas |
| `time` field, f32 seconds | `FUN_004a6700`, getter `FUN_004a67f0`, 18 sites | yes (host) | not verified | Written from `clock.seconds` |
| Getter: 0 gives 0.1, above 0.1 gives 0.1 | `FUN_004a6800`, 208 sites | yes (recompiled) | compared with the original: reference-wine | `spel.wasm`. Above 0.1 only: a field of 2.92, 1.47, 1.46 gives a physics delta of 0.1 on ticks 1 to 3 |
| Reset after a dialog | `FUN_004a6840` | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`, called from `Race.endPause`. Resume only, values not read |
| Start of a race: capped ticks | `buf[0]` = seconds since counter origin, `0x4a644f`, `0x4581c1`; 3 ticks capped, tick 4 if `L` above 0.68 s at 60 Hz. Measured: `L` 8.42 ms, 7.86 to 8.94, 15 starts; tick 4 not capped at any rate tried | yes (host) | compared with the original: reference-wine | `INIT_TO_FIRST_TICK` in `source/host/race.js`: the first ring sample is the clock's value at init, the second 8.4 ms as measured. 3 capped ticks. `dt` ticks 1 to 6: 0.1, 0.1, 0.1, 0.0156, 0.0167, 0.0167 against 0.1, 0.1, 0.1, 0.0158, 0.0185, 0.0166. `L` on a slow machine is not established |
| Physics lead after the start | `FUN_004aa0c0` mean; 1.16 s or 1.47 s at 60 Hz by arithmetic. Measured: 5.83 to 5.86 s of physics at GO, a lead of 1.18 s | yes (host) | compared with the original: reference-wine | Follows from the row above. Physics delta ticks 4, 5, 6: 0.0789, 0.0665, 0.0582 against 0.0790, 0.0669, 0.0585. At GO 5.87 s, a lead of 1.17 s |
| After a dialog: 0.0583, 0.0375, 0.0271, then T | `FUN_004a6840`, ring | yes (host) | not verified | Same hook |
| Uptime rounding bug | Owner's notes part 9: at 30 days steps -0.0726 to 0.1109. reference-wine at 31 h of uptime: `dt` 0.0141 to 0.0201 at 60 ticks, raw steps down to -0.0016 at about 360 | no | not verified | Removed on purpose: `docs/intentional-differences.md`, Clocks |
| `FPSMULT` `DAT_005afa48` = 1.0f | `FUN_0044cf90`, tweak block only | yes (recompiled) | not verified | `spel.wasm`. Inert with `TWEAK_MODE=0` |

### Callers of dt

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `FMUL` rate times dt, 106 sites | `sim-timing.md` C2 | yes (recompiled) | not verified | `spel.wasm` |
| `FADD` timers, 46 sites | `FUN_00403170`, `FUN_0044ea60` | yes (recompiled) | not verified | `spel.wasm` |
| `FDIVR` K/dt, 24 sites | `sim-timing.md` C2 | yes (recompiled) | not verified | `spel.wasm` |
| `FLD`, `FSTP`, `FSUBR`, 32 sites | `FUN_0042c710`, `FUN_0045dc00`, `FUN_00414bd0` | yes (recompiled) | not verified | `spel.wasm` |
| FPS gate below 15: AI re-placement | `FUN_0041cae0` | partial | not verified | `spel.wasm`. Fires only in the first 3 ticks here, on any device |
| FPS gate at most 12: spawns | `FUN_0043dd90` | partial | not verified | `spel.wasm`. Same |
| FPS gate below 12: spawns | `FUN_00446c70` | partial | not verified | `spel.wasm`. Same, so smoke always spawns here. In the original at 8 bits, on the guest of reference-86box: no smoke on the Pentium MMX 266 at 640x480, nor on a K6-2 550 at 640x480; a K6-2 550 at 320x200 shows it |
| FPS gate below 10: wipe effects | `FUN_0043de00`, `FUN_00446fe0` | partial | not verified | `spel.wasm`. Same |
| FPS gate below 10: `visible_chunks` down to 15 or 25 | `FUN_0044cb30` | partial | not verified | `spel.wasm`. State 0 only, so never here: 25 stays on the fixed tick, on both paths. Floor 15 is the 8-bit path's. In the original, on the guest of reference-86box: on the Pentium MMX 266 far scenery is gone by the time the race stands still, and a port frame with `?chunks=15` matches it. `?chunks=N` with `?race=1` is only for such a comparison |
| Frame counts set once: 20/dt, 2.5/dt, 4/dt, 6/dt, 8/dt, 2/dt, T/dt | `FUN_00444c40`, `FUN_00445b40`, `FUN_004469e0`, `FUN_0043daa0`, `FUN_0043bc20`, `FUN_0043fdd0`, `FUN_00440100`, `FUN_00464b50`, `FUN_004669a0` | yes (recompiled) | not verified | `spel.wasm`. `FUN_0043b7ea`, which `sim-timing.md` C2 also lists, has no reference (raw scan) |
| Fades 0.25/dt, 0.6/dt | `FUN_004917b0`, `FUN_00492ac0`, `FUN_00493d60` | yes (recompiled) | not verified | `spel.wasm` |
| Gas `trunc(gas + dt*300)`, 0 on release | `FUN_0046f2a0`. Measured at 60 ticks: 21 to 23 ticks to 100, in steps 5, 9, 13, 18, 22, 27; at about 360 on a clean clock it hardly rises | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving, check-race-ui | `spel.wasm`. 23 ticks to 100 in the port, in steps such as 4, 9, 13, 18, 22, 27: the alternating last bit of `dt` puts `dt*300` just under and over 5. Deliberate and measured, not noise. check-driving and check-race-ui read gas 100, not the step |
| Brake `trunc(brake + dt*320)`, 0 on release | `FUN_0046f2e0` | yes (recompiled) | checked on Amsterdam: check-driving, check-race-ui | `spel.wasm`. Brake reached 100; step not read |
| Animation frame `(int)(dt*1000)` | `FUN_00469c63` | yes (recompiled) | not verified | `spel.wasm` |
| Particle count `(int)(base - dt*307.692)` | `FUN_00458e20`, `FUN_0045a040`, `FUN_0045a890`, `FUN_0045be90`, `FUN_0045c8a0`, `FUN_0045edc0`, `FUN_00460a30`, `FUN_004613e0`, `FUN_00461c30` | yes (recompiled) | not verified | `spel.wasm`. 9 and 29 for bases 15 and 35 at 60 ticks. Stays rate-dependent: fixed by the tick here |
| `(int)(dt*6000)` on 3D object | `FUN_00436dc0` | yes (recompiled) | not verified | `spel.wasm` |
| Per-second probability `rand()%100` against `dt*50` | `FUN_004041d0` | yes (recompiled) | not verified | `spel.wasm` |
| 20% per tick AI re-placement | `FUN_0041cae0` | yes (recompiled) | not verified | `spel.wasm`. 12 tries per second at 60 ticks. Stays rate-dependent. Ran in run-bot, not measured |

### Game clocks and other wall-clock timing

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Clock API | `FUN_00448610`, `FUN_004482c0`, `FUN_00448330`, `FUN_004483a0`, `FUN_00448470`, `FUN_00448570`, `FUN_004486a0` | yes (recompiled) | checked on Amsterdam: run-bot, check-race-ui | `spel.wasm`; `GetTickCount` in `source/host/win32.js`. check-race-ui reads slot 3 through `FUN_00448470` |
| Slot 0 lap time | `FUN_00456a30`, `0x456af0`, limit `0x6fa618` | yes (recompiled) | checked on Amsterdam: check-flow, run-bot | `spel.wasm`. Values written, not compared |
| Slot 1 traffic light 5000, 500, 5000 ms | `FUN_004550c0`, `FUN_00455052`, `FUN_00414d60` | yes (recompiled) | not verified | `spel.wasm`. Runs on during a dialog, as in the original |
| Slot 2 | `FUN_0043cab0`, init only in dead `FUN_0043c885` | yes (recompiled) | not verified | `spel.wasm`. Init only in dead `FUN_0043c885`. Whether `0x43cb60` runs was not traced |
| Slot 3 track time | `FUN_004504c0`, `FUN_00457ab0`, `FUN_004504f0` | yes (recompiled) | checked on Amsterdam: check-flow, run-bot, check-race-ui | `spel.wasm`. `TRACKTIME` 593233 in check-flow. In a pause it stood at 434 ms and went on from there. Not compared with the original |
| Slot 5 work lamp blink 1000/500 ms | `Tob_wlmp.cpp`, `FUN_00455690` | yes (recompiled) | not verified | `spel.wasm`. Runs on during a dialog, as in the original |
| Slot 7 arrow board blink 1000/500 ms | `tob_wplb.cpp`, `FUN_004557b0` | yes (recompiled) | not verified | `spel.wasm`. Runs on during a dialog, as in the original |
| Slots 8, 9, 0xA, 0xC, 0xD, 0xE racer finish time | `FUN_0042e290`, `FUN_0042e340`, `FUN_0042e440`, `FUN_0042e4a0` | yes (recompiled) | checked on Amsterdam: run-bot | `spel.wasm`. `[RACERS]` written |
| Slot 0xB time limit | `FUN_0044c8c0`, `0x44bfb2`, `FUN_00457da0` | yes (recompiled) | not verified | `spel.wasm`. check-flow's race ended with `FINISHED=1` and `Out_Of_Time=1` after 593 s. Explained by code: the timer runs out and does not end a race in mode 0 (`0x44c8c0`), and the exit writes `out_of_time` when the slot reads 0 (`0x44b1c0`): `docs/behavior/race-rules.md`. Not traced on this race |
| Slot 0xF MakeInvulnerable | `FUN_00451640`, `FUN_004516a0` | yes (recompiled) | not verified | `spel.wasm`. Runs on during a dialog, as in the original: it can run out in a pause |
| Slot 0x10 FreezeRacers | `FUN_004516d0`, `FUN_00451730` | yes (recompiled) | not verified | `spel.wasm`. Same |
| Slot 0x11 FastForward | `FUN_00451760`, `FUN_004517c0` | yes (recompiled) | not verified | `spel.wasm`. Same |
| 60 ms hit lockout | `FUN_00426fe0` | yes (recompiled) | not verified | `spel.wasm` |
| 300 ms hit sound | `FUN_00427400` | yes (recompiled) | not verified | `spel.wasm` |
| 100 ms skid smoke | `FUN_0044e830` | yes (recompiled) | not verified | `spel.wasm` |
| 100 ms turbo use | `FUN_0044e970` | yes (recompiled) | not verified | `spel.wasm` |
| 199 ms toggle | `FUN_004239e0` | yes (recompiled) | not verified | `spel.wasm` |
| 200 ms repeat | `FUN_0043b500` | yes (recompiled) | not verified | `spel.wasm` |
| 200 ms damage smoke per car | `FUN_00426530` | yes (recompiled) | not verified | `spel.wasm` |
| 1000, 1500 ms event delays | `FUN_0043bd60`, `FUN_0043ac80` | yes (recompiled) | checked on Amsterdam: check-flow | `spel.wasm`. Finish screen left after its wait |
| 1500 ms latch | `FUN_004635a0`, `FUN_004632e0` | yes (recompiled) | not verified | `spel.wasm` |
| 2000 ms HUD messages, blink /100, /200, /300 | `FUN_0043f330`, `FUN_0043f440`, `FUN_0043f590`, `FUN_0043fa50`, `FUN_0043fc03` | yes (recompiled) | not verified | `spel.wasm` |
| 4000 ms part bend | `FUN_00425730`, `FUN_00425a40` | yes (recompiled) | not verified | `spel.wasm` |
| 4000 ms caught | `FUN_0043a910`, `FUN_0043a980` | yes (recompiled) | not verified | `spel.wasm` |
| 5000 ms manual reset lockout | `FUN_0040e5a0` | yes (recompiled) | not verified | `spel.wasm` |
| `srand` from `GetTickCount` | `FUN_004264b0` | yes (host) | checked on Amsterdam: repeat-trace | `Race` constructor varies the clock start; `?bench=1` fixes it, which is what the check used. The varying start in play was not checked |
| Load bar stamps | `FUN_004414e0`, `FUN_00441510`, `FUN_004415e0` | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| `FUN_0048abe0` stamp | `sim-timing.md` C3 | yes (recompiled) | not verified | `spel.wasm` |
| 300, 10000 ms | `FUN_0044fd22`, `FUN_00450190`, not traced | yes (recompiled) | not verified | `spel.wasm`. Not traced in the original either |
| `clock()` for FPS log, qhull | `FUN_00559348`, `0x44e160`, `0x44e190`, `0x44e200` | yes (host) | not verified | Real time in `source/host/win32.js`. No effect found on play |
| Script native on `clock()` | `FUN_004d7960`, registered at `0x4d8241`; no use in `bonus.pseudo.txt` | n/a | not verified | Stays in `spel.wasm`. `bonus.dso` does not use it |
| Ipion statistics latch | `FUN_0050a5e0`, `FUN_0050a8d0` | yes (recompiled) | not verified | `spel.wasm` |
| All wall-clock timers keep running during P and Esc | `FUN_0044ca80` pauses only 0, 3, 0xB and 6 racer clocks; `FUN_004a6840` resyncs `time` | yes (host) | checked on Amsterdam: check-race-ui | `Race.tick` in `source/host/race.js` advances the clock in its pause branch. `FUN_00448330` and `FUN_004483a0` stop and resume the race clocks: track time stood at 434 ms while the clock moved 1 s, and read 901 ms 0.5 s after the resume. No check ran a timed bonus through a pause |
| Wall-clock timers keep real time when the game falls behind | `dt` cap in `FUN_004a6800`, `GetTickCount` free | no | not verified | All on one virtual clock here, so timers slow with the game: see `docs/intentional-differences.md`, Falling behind |
| Timers keep running while the window is inactive | `FUN_00458020` | no | checked on Amsterdam: check-race-ui | Recorded as intentional: `docs/intentional-differences.md`, Focus loss. The settings panel stops them too |

### Physics stepping

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Step 0.015151516 s, 66 PSIs per second | `FUN_004a6a10`, `FUN_004a3960`, `FUN_004f7af0` | yes (recompiled) | not verified | `spel.wasm` |
| Gravity (0, 9.81, 0) | `FUN_004a3960` | yes (recompiled) | not verified | `spel.wasm` |
| Mean of `dt`: plain for 50 ticks, then 49/50 | `FUN_004aa0c0`, `DAT_00715eac`, `DAT_00715b20` | yes (recompiled) | compared with the original: reference-wine | `spel.wasm`. Physics delta read per tick in both, ticks 1 to 6 as in Physics lead. The switch to 49/50 was not compared |
| World time f32 accumulator | `FUN_004a45d0`, `world+0x74` | yes (recompiled) | not verified | `spel.wasm` |
| Event loop, no substep limit | `FUN_0050bd80` | yes (recompiled) | not verified | `spel.wasm` |
| PSI body: controllers, collisions, integration | `FUN_0050c020`, `FUN_004f86f0` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm` |
| Matrices extrapolated to env time | `FUN_004f2b10`, `FUN_004f2c40`, `FUN_004f3c20` | yes (recompiled) | not verified | `spel.wasm` |
| Copy of matrix, position, local velocity, 1200 pairs | `FUN_004aa0c0` | yes (recompiled) | checked on Amsterdam: repeat-trace | `spel.wasm`. Checksum over the 485 physics bodies, record and 3D object with world matrix, equal at every sample between profiles |
| x87 PC=01 before the step, PC=11 in Ipion | `0x4aa147`, `FUN_0050bfc0` | partial | not verified | Control word tracked for rounding only, `tools/recomp/lift.py`. Precision in the original not established |
| x87 80-bit values | x87 stack | partial | not verified | f64 in `tools/recomp/lift.py`. Not bit-equal to Windows. Recorded: `docs/intentional-differences.md`, Numerics |
| `fist` by rounding field, `__ftol` truncates | `0x558524`, control word | yes (host) | not verified | `tools/recomp/lift.py`, `build.py` helpers, `replacements.py` |
| `fsin`, `fcos`, `fptan`, `fsincos`, `fpatan`, `fyl2x`, `f2xm1`, `_CIacos`, `_CIasin`, `_CIpow`, `_CIsinh`, `_CIcosh`, `_CItanh` | x87 and CRT | yes (host) | not verified | `source/host/machine.js` `MATH` |

### What the tick rate changes

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Simulation rate | One pass per drawn frame, free running, `sim-timing.md` C5, I2. Measured under Xvfb with llvmpipe, nothing limiting it: 317 to 393 ticks per second | yes (host) | compared with the original: reference-wine; checked on Amsterdam: repeat-trace | Fixed 60 Hz, `source/race-runner.js`. Recorded as intentional. Reasons: behavior file, Timing. At that free rate the pedal hardly rises on a clean clock (highest speed 1.25 to 12.66 m/s in 12 s), so the port does not run the game code at the display rate. For the comparison the original was held to 60 from outside |
| Game state independent of rendering load and frame rate | Brief section 6 | yes (host) | checked on Amsterdam: repeat-trace | 71 one-second samples between 1280x720 at 60 FPS, 800x360 DPR 2 at 8x CPU throttle and 60 FPS, and every second display frame at 30 FPS: checksums over all 485 physics bodies equal, the bot car's position and speed difference 0 |
| Turbo force independent of rate up to 66 Hz | `FUN_004f9680` at `0x4a5d9c`; owner's notes part 9 | yes (recompiled) | not verified | `spel.wasm` |
| Traffic thrust and lift follow the rate | Owner: 2.9, 14.5, 25 to 37 units/s² at 15, 30, 60 FPS; nose 0.51 / 0.74 at 60 | yes (recompiled) | checked on Amsterdam: check-traffic | Scaled on purpose by `min(1, tick*25)`, the owner's `traffic_mass`: operands at `0x416004`, `0x428991` in `tools/recomp/replacements.py`, cell `0x3F1000` in `source/host/race.js`. 60 ticks: mean 0.087, highest 0.208; without the share 0.295, 0.742. Owner: 0.08, 0.18; unpatched 0.51, 0.74. Means not comparable. Recorded: Traffic pushes |
| Traffic down impulse per tick | `FUN_00428950`, `FUN_00415e40`, `0.12 m abs(vz)`, x0.1 | yes (recompiled) | not verified | `spel.wasm`, scaled with the same share. check-traffic measures only the joint result |
| Traffic lateral kill per tick | Same functions | yes (recompiled) | not verified | `spel.wasm`, scaled with the same share. check-traffic measures only the joint result |
| Skid strip 49 ticks | `FUN_00444d20` | yes (recompiled) | not verified | `spel.wasm`. Stays rate-dependent: 0.82 s at 60 ticks, 1.63 s at 30 Hz |
| Copalert level -7 per tick | `FUN_00489d30`; `audio.md`, `hud-overlay.md` | yes (recompiled) | not verified | `spel.wasm`. Stays rate-dependent: level 100 is gone in 15 ticks, 0.25 s at 60 ticks, 0.5 s at 30 Hz |
| Camera lag per tick | `FUN_004b1380` | yes (recompiled) | not verified | `spel.wasm`. Stays rate-dependent: half of a 30 Hz machine's |
| Tyre, torque, steering, gear once per tick | `FUN_00428c70`, `FUN_004a2f70` | yes (recompiled) | not verified | `spel.wasm` |
| Render at browser rate, no cap | Brief section 6 | yes (host) | checked on Amsterdam: repeat-trace | `source/race-runner.js` `frame`. 60 and 30 FPS. A 144 Hz stand-in for `requestAnimationFrame` ran only in a one-off script. No real display above 60 Hz |
| Interpolation of world matrices | `simulation-core.md` I5 rule 5 | yes (host) | not verified | `blendPalette` in `source/render/d3d-renderer.js` |
| Interpolation of the camera | `simulation-core.md` I5 rule 5: eye, target, up | yes (host) | fix check: 28 s of bot driving at 144 Hz stand-in and 60 Hz, 4031 and 1680 presents, none with the view unblended | `blendPalette` in `source/render/d3d-renderer.js` blends the view matrix elementwise and compares the eyes recovered from it. The old test on row 3 would have cut 33% of presents. Not a check of how it looks |
| Interpolation of moving vertices | `render-frame.md` | yes (host) | not verified | Same function. Blob shadows blend with their car. Not when the count changes, not when the first vertex moved more than 30 wu: skid strips, player-shadow polygons. Recorded |
| Particles, `gfx_wolk`, `gfx_bwlk` show the latest tick | `FUN_0045dce0`, `FUN_0045ec30`, `FUN_00446fe0`, `FUN_0043de00`: slots re-sorted per frame, or shifted when one dies | yes (host) | fix check: 1168 ticks, 2968 smoke rows and 3922 particle rows, none paired with the tick before | `blends` in `source/render/d3d-renderer.js`, `noBlend` around `hook!guard_0045dce0`. Above 60 Hz they step at 60 Hz. `gfx_bwlk` drew 0 times in a whole Amsterdam race, so its range ran on no real draw |
| Teleport not blended | `simulation-core.md` I5 rule 5 | yes (host) | fix check: camera switches, eye steps of 85 and 62 wu in one tick, still cut | `TELEPORT_DIST2`, 30 wu per tick. Largest eye step outside switches 13.3 wu, at ticks 2 to 4 |
| Falling behind: game time slows | `FUN_004a6800` cap 0.1 | yes (host) | not verified | 6 ticks per frame, elapsed cap 0.25 s, `source/race-runner.js`. Recorded. Cap not reached in the checks: benchmark tick mean 7.19 ms at 8x throttle |
| Extra ticks with draws dropped | `sim-timing.md` I4 rule 4 | yes (host) | not verified | `captureLevel` 0, `source/render/d3d-renderer.js`. Ran in check-flow at `speed=8`, not measured |
| Hidden tab and focus: no jump, no stuck input | Brief section 6 | yes (host) | checked on Amsterdam: check-race-ui | `setFocus` in `source/race-runner.js`. The open settings panel stops ticks the same way, by `panelOpen` |
| Picture still under a dialog | `FUN_0044cb80` flips twice with nothing drawn, `FUN_0044ca80` then spins | yes (host) | checked on Amsterdam: check-race-ui | `present(1)` while `race.pause` in `source/race-runner.js`; the key's tick is kept by `captureLevel` 2. 98 frames, 1 distinct |

### Host rules from the research notes

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `sim-timing.md` I4.1 one `handle_game` per tick, exact 1/60, one clock | `sim-timing.md` I4 | yes (host) | checked on Amsterdam: repeat-trace | `Race.tick`, `VirtualClock` |
| I4.2 QPF exact in f32, QPC near 0 | Owner's notes part 9 | yes (host) | not verified | 1193182. Start 1 to 101 s from `Date.now() % 100000`, small enough for the reason given |
| I4.3 keep the capped start, jump at least 1 s between init and first tick | Premise corrected: load is before init | yes (host) | compared with the original: reference-wine | Synthetic samples in `hook!updateClock`: the clock's value at init, then 8.4 ms as measured. The clock itself does not jump, and the rule's jump is not needed. 3 capped ticks, tick 4 not capped, as in the original |
| I4.4 behind real time: extra ticks with draws no-oped | `sim-timing.md` I4 | yes (host) | not verified | `source/race-runner.js` `frame` |
| I4.5 tab hidden stops virtual time, documented | `sim-timing.md` I4 | yes (host) | checked on Amsterdam: check-race-ui | Recorded: Focus loss |
| I4.6 tick by accumulated time | `sim-timing.md` I4 | yes (host) | checked on Amsterdam: repeat-trace | `acc` in `frame`, `source/race-runner.js`. 60 and 30 FPS |
| I4.7 entropy in the seed | `sim-timing.md` I4 | yes (host) | not verified | `Race` constructor |
| `simulation-core.md` I5.1 all clocks from the tick | `simulation-core.md` I5 | yes (host) | checked on Amsterdam: check-race-ui | Clock stops with the ticks on focus loss. It runs on in a dialog, without game ticks, as the original's does |
| I5.2 replace `FUN_004a6700` | `simulation-core.md` I5 | yes (host) | compared with the original: reference-wine | `hook!updateClock` in `source/host/race.js`, ring kept. First `dt` values and the gas ramp compared: see Frame clock. After a dialog not compared |
| I5.3 run `render_game` every tick | `simulation-core.md` I5 | yes (host) | checked on Amsterdam: repeat-trace | `race.tick` always, `source/host/race.js`. At 30 FPS every other tick has `captureLevel` 1 and the state stays equal. Level 0 ran only in check-flow, not measured |
| I5.4 replace blocking spins | `FUN_0044c990`, `FUN_0044c9f0`, `WaitMessage` | yes (host) | checked on Amsterdam: check-race-ui | `pollPause`; `keyDown` spin guard in `source/input/keyboard.js` |
| I5.5 interpolate, keep eye, target, up, skip teleports | `simulation-core.md` I5 | yes (host) | fix check: see Interpolation of the camera | Blends the view matrix, not eye, target and up. Teleport test on the eye |
| I5.6 cap catch-up at 6 ticks | `simulation-core.md` I5 | yes (host) | not verified | `MAX_TICKS_PER_FRAME` |
| I5.7 keep world time f32 | `simulation-core.md` I5 | yes (recompiled) | not verified | `spel.wasm` |
| I5.8 seed from real time in play | `simulation-core.md` I5 | yes (host) | not verified | `Race` constructor, `GetSystemTimeAsFileTime` in `source/host/win32.js`. Fixed by `?bench=1` |
| I5.9 no bit-equal expectation | `simulation-core.md` I5 | yes (host) | not verified | Recorded: Numerics |
| I5.10 poll before handlers | `simulation-core.md` I5 | yes (host) | not verified | `updateJoystick` before `race.tick`, `source/race-runner.js`. Order not checked |

### Vehicle types

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Player, constraint car | `FUN_0042a3d0` type 1, `FUN_0044e340`, `FUN_00429710` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm` |
| AI racer, level 0 plus penalties | `FUN_0042de60`, arg 12 = 1, `0x5d1b74`, `0x5d1b80` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: run-bot | `spel.wasm`. Racers' path length over 30 s after GO: 6904, 7842, 6766, 6750 against 6811 to 6907, 7797 to 7845, 6673 to 6765, 6771 to 6781, within 1.8% with one original outlier left out. Penalties themselves not read |
| Cop, player's upgrade levels | `FUN_00423a50`, arg 12 = 0, restitution 0.05 | yes (recompiled) | not verified | `spel.wasm` |
| Supercop, player's upgrade levels | `FUN_0041e450`, restitution 0.2; etappes 1, 3, 4 | yes (recompiled) | not verified | `spel.wasm` |
| Traffic, rigid body | `FUN_004275e0`, `FUN_004a79d0`, friction 0.9, elasticity 0.2, COM y -10 | yes (recompiled) | checked on Amsterdam: check-traffic, run-bot | `spel.wasm`. Nose rise measured |
| Path car, 1200 kg | `FUN_004636c0` | yes (recompiled) | not verified | `spel.wasm` |
| Path car, 800 kg | `FUN_004658e0` | yes (recompiled) | not verified | `spel.wasm` |
| Path car, 1300 kg | `FUN_00466db0` | yes (recompiled) | not verified | `spel.wasm` |
| Car parts, 5 kg | `FUN_00425490` | yes (recompiled) | not verified | `spel.wasm` |

### `VDYNS.DAT` fields

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| 0x000 Vehicle Mass | `FUN_00429710`, desc+0x18 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x004 Center Of Mass | desc+0x9C | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x010 Max Steering Angle | phys+0x78, not read | n/a | not verified | Stored, no reader found |
| 0x014 Max Speed Steer Angle | phys+0x7C, not read | n/a | not verified | Stored, no reader found |
| 0x018 Body Extra Gravity | desc+0x268, `0x4a2a29` | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x01C Front Brake Power, `abs` | phys+0x90 | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Level 0 |
| 0x030 Rear Brake Power, `abs` | phys+0x94 | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Level 0 |
| 0x044 Handbrake Power | phys+0x98, not read | n/a | not verified | Stored, no reader found |
| 0x048 Number Of Gears, `versnellingsbak` | phys+0xC0 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x05C Engine Horsepowers, `motor` | phys+0x80 | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Level 0 |
| 0x070 Maximum RPM, `motor` | phys+0x84 | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Level 0 |
| 0x084 Minimum RPM, `motor` | phys+0x88 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x098 Maximum Speed, `motor` | phys+0x9C, `0x4a29ed` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving | `spel.wasm`. Wheel limit read as 69.444 rad/s in both, record 11. Forward plateau and reverse limit: see Top speed, Sustained reverse. check-driving: reverse -27.89 m/s at 3 s |
| 0x0AC Axle Torque Ratio, `motor` | phys+0x8C | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x0C0 Axle Ratio, `motor` | phys+0xA0 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x0D4 Gear Ratios, `versnellingsbak` | phys+0xA4..B4, five copied | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x14C, 0x160, 0x174 Front A, B, C, `banden` | phys+0xC4..CC | yes (recompiled) | boot only: boot-all | `spel.wasm`. 45, 0, 0 |
| 0x188 Front Wheel Factor, `banden` | phys+0xD0 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x19C, 0x1B0, 0x1C4 Rear A, B, C, `banden` | phys+0xD4..DC | yes (recompiled) | boot only: boot-all | `spel.wasm`. 45, 0, 0 |
| 0x1D8 Rear Wheel Factor, `banden` | phys+0xE0 | yes (recompiled) | boot only: boot-all | `spel.wasm`. 6.0 |
| 0x1EC, 0x228 Wheelspring Constant | `FUN_0050d4f0` | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x200, 0x23C Wheelspring Dampening | desc[0xa8..ab] | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x214, 0x250 Stabilizer | `FUN_004fc030` | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| 0x264 Wheel Radius | wheel desc+0x88 | yes (recompiled) | boot only: boot-all | `spel.wasm` |

### `VDYNS.DAT` records in use

Values read from the shipped `vdyns.dat` by script, level 0/1. All have gears 5, ratios 2.8, 2.2, 1.3, 1.0, 0.8, axle 3.8, axle torque ratio 0.7, RPMmin 1500, Body Extra Gravity 1.5, steer angles 35, 30, A 45, B 0, C 0, rear factor 6, rear spring equal to front.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Edgar de Flits, RACER_0, league 0 | Record 11: mass 600, COM y -11 z -1.5, HP 80/85, RPMmax 4500/4000, Vmax 100/115 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.4, spring 13000/20000, relax damp 1500/3000, stabilizer 3000/5000, radius 4 | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving | `spel.wasm`. Level 0. check-driving: 6.26, 17.29, 23.70 m/s after 1, 4, 8 s of gas, in state 2. reference-wine at 1, 4, 8 s, original / port: 22222 6.35 / 6.37, 17.33 / 17.34, 23.71 / 23.72; 11111 6.65 / 6.67, 20.67 / 20.69, 27.73 / 27.72 |
| Tommie, RACER_1, league 0 | Record 12: mass 600, COM y -11 z 2, HP 95/110, RPMmax 4500/4000, Vmax 100/115 km/h, brake F,R 0.5,0.5/0.5,1.5, handbrake 7, front factor 0.5/0.4, spring 17000/20000, relax damp 4000/3000, stabilizer 2500/5000, radius 4 | yes (recompiled) | boot only: boot-all | `spel.wasm`. Also AI in run-bot, not measured |
| James Brons, RACER_2, league 0 | Record 13: mass 600, COM y -13 z -1.5, HP 100/110, RPMmax 4500/4000, Vmax 100/115 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.4, spring 20000/15000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | boot only: boot-all | `spel.wasm`. Also AI in run-bot, not measured |
| Kat, RACER_3, league 0 | Record 14: mass 600, COM y -16 z -1.5, HP 80/95, RPMmax 4500/4000, Vmax 100/115 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.4, spring 25000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | boot only: boot-all | `spel.wasm`. Also AI in run-bot, not measured |
| Barbarally, RACER_4, league 0 | Record 15: mass 600, COM y -16 z -4, HP 85/95, RPMmax 4500/4000, Vmax 100/115 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.4, spring 15000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | boot only: boot-all | `spel.wasm`. Also AI in run-bot, not measured |
| D.T. Harry, RACER_5, league 0 | Record 16: mass 1000, COM y -12 z 0, HP 120/120, RPMmax 4000/4000, Vmax 280/295 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.4/0.4, spring 50000/50000, relax damp 8000/8000, stabilizer 5000/5000, radius 6 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| politie-auto, RACER_6, league 0 | Record 17: mass 600, COM y -16 z -1.5, HP 80/90, RPMmax 4000/4000, Vmax 100/115 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.4/0.4, spring 20000/15000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| RACER_0, league 1 | Record 21: mass 600, COM y -11 z -1.5, HP 80/95, RPMmax 4500/4000, Vmax 115/130 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.7/0.6, spring 13000/20000, relax damp 2500/3000, stabilizer 4500/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_1, league 1 | Record 22: mass 600, COM y -11 z 2, HP 110/120, RPMmax 4500/4000, Vmax 115/130 km/h, brake F,R 0.5,0.5/0.5,1.5, handbrake 7, front factor 0.7/0.6, spring 17000/20000, relax damp 4000/3000, stabilizer 2500/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_2, league 1 | Record 23: mass 600, COM y -13 z -1.5, HP 110/120, RPMmax 4500/4000, Vmax 115/130 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.5, spring 22000/15000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_3, league 1 | Record 24: mass 600, COM y -16 z -1.5, HP 95/120, RPMmax 4500/4000, Vmax 115/130 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.5, spring 25000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_4, league 1 | Record 25: mass 600, COM y -16 z -4, HP 95/170, RPMmax 4500/4000, Vmax 115/130 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.4, spring 15000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_5, league 1 | Record 26: mass 1000, COM y -12 z 0, HP 120/150, RPMmax 4000/4000, Vmax 280/295 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.5, spring 50000/50000, relax damp 8000/8000, stabilizer 5000/5000, radius 6 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_6, league 1 | Record 27: mass 600, COM y -16 z -1.5, HP 100/110, RPMmax 4000/4000, Vmax 115/130 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.5, spring 20000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_0, league 2; also traffic rows | Record 0: mass 600, COM y -11 z -1.5, HP 95/105, RPMmax 4500/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.6, spring 13000/20000, relax damp 1500/3000, stabilizer 3000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_1, league 2 | Record 1: mass 600, COM y -11 z 2, HP 120/130, RPMmax 4500/4000, Vmax 130/145 km/h, brake F,R 0.5,0.5/0.5,1.5, handbrake 7, front factor 0.7/0.6, spring 17000/20000, relax damp 4000/3000, stabilizer 2500/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_2, league 2 | Record 5: mass 600, COM y -11 z -1.5, HP 120/140, RPMmax 4500/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.5, spring 22000/15000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_3, league 2 | Record 3: mass 600, COM y -16 z -1.5, HP 120/130, RPMmax 4500/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.5, spring 25000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_4, league 2 | Record 4: mass 600, COM y -16 z -4, HP 120/130, RPMmax 4500/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.4, spring 15000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_5, league 2 | Record 2: mass 1000, COM y -12 z 0, HP 120/150, RPMmax 4000/4000, Vmax 280/295 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.6/0.5, spring 50000/50000, relax damp 3000/8000, stabilizer 5000/5000, radius 6 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_6, league 2 | Record 6: mass 600, COM y -16 z -1.5, HP 120/120, RPMmax 4000/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.5, spring 20000/20000, relax damp 3000/3000, stabilizer 5000/5000, radius 4 | yes (recompiled) | not verified | `spel.wasm` |
| RACER_7, KENT, De Schaduw, the truck, all three leagues | Record 7, since the car update: mass 600, COM y -8 z 2, HP 120/120, RPMmax 4000/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 1.5/1, spring 5000/65000, relax damp 2000/6500, stabilizer 5000/5000, radius 5. Disc 1.01 without updates: COM y -11, spring 5000/5000, relax damp 2000/2000, radius 4 | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | `spel.wasm`. 31.24 m/s after 6 s of gas, on track 9. Values read from the file, not in the race. Handling not compared with the original |
| RACER_8, Abu | Record 8: mass 600, COM y -11 z 2, HP 120/120, RPMmax 4000/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 1.5/1, spring 5000/5000, relax damp 2000/2000, stabilizer 5000/5000, radius 4 | n/a | not verified | No route, `game-content.md` 2.1, 2.6 |
| RACER_9, CHICK | Record 9: mass 600, COM y -11 z 2, HP 120/120, RPMmax 4000/4000, Vmax 130/145 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 1.5/1, spring 5000/5000, relax damp 2000/2000, stabilizer 5000/5000, radius 4 | n/a | not verified | No route, `game-content.md` 2.1, 2.6 |
| SUPERCOP | Record 10: mass 600, COM y -12 z 0, HP 175/175, RPMmax 4000/4000, Vmax 280/295 km/h, brake F,R 0.5,1.5/0.5,1.5, handbrake 10.5, front factor 0.5/0.5, spring 50000/50000, relax damp 8000/8000, stabilizer 5000/5000, radius 6 | yes (recompiled) | not verified | `spel.wasm`. Etappes 1, 3, 4 |

### Car geometry, `car_cfg.ini [wheel_positions]`

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| CarType 0 Checker Cab, Edgar de Flits | Front 8.64, 0, 17.11; rear 8.64, 0, -16.05 | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm` |
| CarType 1 Hotrod, Tommie | Front 6.82, 0, 18.35; rear 7.72, 0, -15.54 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| CarType 5 Countach, James Brons | Front 8.39, 0, 12.36; rear 8.91, 0, -13.23 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| CarType 3 Mercedes SLK, Kat | Front 7.708, 0, 14.197; rear 7.949, 0, -14.033 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| CarType 4 Buggy, Barbarally | Front 6.59, 0, 11.76; rear 7.76, 0, -9.73 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| CarType 2 Humvee, D.T. Harry | Front 11.56, 5.27, 25.03; rear 11.56, 5.27, -9.89 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| CarType 6 politie-auto | Front 6.55, 0, 12.919; rear -6.19, 0, -13.073. Negative x swaps wheels 2, 3 | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| CarType 7 RACER_8 | Same as 6 | n/a | not verified | No route. RACER_7 used it until the car update |
| CarType 9 RACER_9 | Front 7.5, 0, 13.13; rear 7.5, 0, -15.82 | n/a | not verified | No route |
| CarType 24 Supercop | Front 11.56, 5.27, 25.03; rear 11.56, 5.27, -9.89 | yes (recompiled) | not verified | `spel.wasm` |
| CarType 42 RACER_7, the truck: front -7.797, 5.123, 47.32, rear -10.56, 5.123, -23.222 | Row 42 of `[wheel_positions]`, since the car update, which also adds dummy rows 25 to 41 | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | `spel.wasm` |
| `[wheel_positions]` rows 8, 10 to 20 | No car row uses them, `game-content.md` 2.6 | n/a | not verified | No car row uses them |
| `car_cfg` Mass for damage and turbo | obj+0xB0 = 1/Mass, `FUN_00429710` | yes (recompiled) | not verified | `spel.wasm`. 600; 1500 for 7, 8, 9 |

### Upgrades

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `motor` | `FUN_0044a110`, `DAT_006fbb40` | yes (menu port) | form check | `source/menu/data.js`, `source/menu/forms/group-race.js` buy it; effect in `spel.wasm` not measured |
| `banden` | `DAT_006fbb44` | yes (menu port) | form check | Same |
| `abs`: only rear brake value in records 1, 12, 22 | `DAT_006fbb4c`, `vdyns.dat` | yes (menu port) | form check | Same. No ABS logic exists |
| `versnellingsbak`: no effect in shipped data | `DAT_006fbb50`; ratios differ by at most 5e-7 | yes (menu port) | form check | Same |
| `injectie` | `DAT_006fbb54`, written once, no reader | n/a | not verified | Written once, no reader |
| Quick Race: all upgrades on, turbo 100 | `0x48b5bc` | yes (menu port) | checked on Amsterdam: check-flow | `writeQuickRaceStuff`. Written, race ran |

### Suspension and wheels

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| 4 ball wheels, 150 kg | `FUN_004294f0`, `0x4062c000` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm` |
| Wheel filter: no contact with own body or wheels | `FUN_004a3570`, `chassis_id OR DAT_006c2f38` | yes (recompiled) | not verified | `spel.wasm` |
| Spring `(len-rest)k - damp v`, anchor 500 m | `FUN_004fc4f0`, `FUN_0050d990` | yes (recompiled) | not verified | `spel.wasm` |
| Compress damp 0.2 x relax | `FUN_00429710` | yes (recompiled) | not verified | `spel.wasm` |
| Body force at most 80000 | `0x479c4000`, `FUN_0050d990` | yes (recompiled) | not verified | `spel.wasm` |
| Pre-tension, no mass term | `0x4a2aca`-`0x4a2b69` | yes (recompiled) | not verified | `spel.wasm` |
| Body Extra Gravity at the origin | `FUN_004fbe40` | yes (recompiled) | not verified | `spel.wasm` |
| Body downforce actuator, force 0 | car_ivp+0xA8 | yes (recompiled) | not verified | `spel.wasm` |
| Inertia args 1.0, 1.7, 1.8; damping 0.05, 0.6 | `FUN_00429710`, `FUN_004294f0` | yes (recompiled) | not verified | `spel.wasm` |
| Body counter-torque 0.1, only while braking | `FUN_004fc2d0`, `0x4a3167` | yes (recompiled) | not verified | `spel.wasm` |
| Wheel meshes follow, relative Y clamp +-5 | `FUN_00435ab0`, `FUN_00435a70` | yes (recompiled) | not verified | `spel.wasm` |
| Wheel contact flag | `FUN_004a2240`, `FUN_004a2270` | yes (recompiled) | not verified | `spel.wasm` |
| Car height on the start straight | `obj+0x44`, `launch60-*`: mean 1.315 to 1.330, range 1.26 to 1.37, one launch that brushed something left out | yes (recompiled) | compared with the original: reference-wine | `spel.wasm`. Port: mean 1.315 to 1.326, range 1.27 to 1.36. The joint result of spring, pre-tension and Extra Gravity, not each by itself |

### Engine, gears and drivetrain

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Acceleration | Brief section 5, `FUN_004a2f70` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving, check-race-ui | `spel.wasm`. Record 11. reference-wine, means per state, port against original: at most +2.05% at 1 s, +0.44% at 4 s, 0.18% at 8 s. The table is in the behaviour file, Movement state. check-driving: 6.26, 17.29, 23.70 m/s at 1, 4, 8 s, state 2. check-race-ui's gas checks read 20.64 on the keyboard, 17.28 on the touch wheel and 17.32 on the stand-in pad, the regimes of the next row |
| Launch regime: movement state when speed passes 1 m/s | `FUN_00500820`, `FUN_004f7ec0`, `FUN_0050d450`, `FUN_004f4f30`, `FUN_00500760`, `FUN_004f3d20`, `FUN_004f21e0`, `FUN_004f3810`, `FUN_004f47b0` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving | `spel.wasm`, nothing in the host. Chassis and each wheel core latch separately, all within 0.17 s of the gas. States 11111, 22222, 21111, 12222 in both, and mixed ones in the port. The moment of the gas does not decide it in the original: one key script six times gave 22222, 11111, 22222, 11111, 21111, 11111. The port is repeatable, and its regime changes when the moment moves by a few ticks; the tick number is not a constant. Shares not established. check-driving's log shows state 2 on the first launch and state 1 after the second Enter |
| Gear choice from 0 each tick, no hysteresis | `0x4a2fe6`-`0x4a305d` | yes (recompiled) | compared with the original: reference-wine | `spel.wasm`. Gear index reaches 4 after 0.27 to 0.33 s of gas in the original, 0.25 to 0.32 s in the port. The rule itself was not read. check-driving logs the gear, index 4 from the first 1 s sample on |
| Five ratios, axle 3.8 | `vdyns.dat` | yes (recompiled) | not verified | `spel.wasm` |
| Gear freezes at gas 0, brake 0 | `FUN_004fbd50`, `0x4fbd58` | yes (recompiled) | not verified | `spel.wasm` |
| No torque curve | `FUN_004a2f70` | yes (recompiled) | not verified | `spel.wasm` |
| Drive split 70% front, 30% rear | `FUN_004a2f70`, VDYNS 0x0AC | yes (recompiled) | not verified | `spel.wasm` |
| Top speed: wheel torque cut above `Vmax*0.2777778/r` | `FUN_004fbd50`, `FUN_004a2590` | yes (recompiled) | compared with the original: reference-wine | `spel.wasm`. Plateau 27.73 against 27.72 m/s in 11111, 27.70 against 27.71 in 21111, 27.69 against 27.68 in 12222. Wheel limit 69.444 rad/s in both. 22222 has no plateau before the obstacle: 26.13 against 26.12 m/s after 12 s, still rising. check-driving's first launch is in state 2 and reads 25.20 m/s at 10 s. The limit in reverse: see Sustained reverse |
| AI penalties 90, 120, 200 and 115, 80, 50 | `intel.ini`, `FUN_00429710` | yes (recompiled) | not verified | `spel.wasm` |
| HUD speed `(int)(vz*3.6)`, signed | `0x44eb9b`-`0x44ebad` | yes (recompiled) | not verified | `spel.wasm` |
| Automatic only | `input.md` C5: no gear action exists | yes (recompiled) | not verified | `spel.wasm` |

### Brake, reverse and handbrake

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Braking, doubled when moving forward | `0x4a30e4`-`0x4a316a`, `FUN_004fc480` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving | `spel.wasm`. From 24.1 m/s in state 11111, zero at 1.73 s in both; at 1 s 10.24 against 10.42 m/s. check-driving: 16.9 m/s to 0 in 1.3 s. Doubling itself not read |
| Reversing from a standstill | Same; no reverse gear, no state | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving, check-race-ui | `spel.wasm`. State 22222 at 1, 2, 3 s: -8.50, -16.55, -23.74 against -8.41, -16.48, -23.61 m/s. check-driving by keyboard: -12.45 at 1 s, -21.7 at 2 s. check-race-ui by touch wheel: fastest -12.61 in 6 s, asserted below -1 |
| Sustained reverse, limit Vmax | `FUN_004fbd50` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-driving | `spel.wasm`. Steady -27.79 in 22222 and -27.91 in 11111, against -27.79 and -27.90. check-driving: -27.89 m/s at 3 s, wheel omega -69.34 against the limit 69.44 |
| Steering while reversing | `FUN_004a31d0`, `FUN_00427e60` negates slip | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Yaw changes. At -27 m/s full lock spins the car: yaw 1.73 rad in 1 s, side speed 8.31 m/s. Not compared with the original |
| Forward again after reverse | `FUN_004a2f70` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. From -3.5 to 2.65 m/s in 3 s, out of the spin |
| Gas during brake has no effect | Loop overwrites the torques | yes (recompiled) | not verified | `spel.wasm` |
| Brake lights flag `DAT_006fba2c` | `FUN_0046f530` | yes (recompiled) | not verified | `spel.wasm` |
| Handbrake locks rear wheels | `FUN_004fcc40`, latch phys+0xE8 | yes (recompiled) | not verified | `spel.wasm`. check-race-ui covers the button state, not the effect |
| Handbrake caps grip at 2.0 | `FUN_00427e60` | yes (recompiled) | not verified | `spel.wasm` |

### Steering

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `do_steering(steer/150)`, front wheels only, one angle | `FUN_004a31d0`, `FUN_004fc3d0` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm` |
| Limit +-100, +-38.2 degrees | `FUN_00402de0` | yes (recompiled) | checked on Amsterdam: check-driving, check-race-ui | `spel.wasm`. Keyboard and stand-in pad reached -100. Angle not read |
| No speed dependence | `FUN_0046f330` dead | yes (recompiled) | not verified | `spel.wasm` |
| Keyboard ramp `2*dt`, 0.5 s lock and recentre | `FUN_0046f530`, `FUN_004f0df0` | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`. Value moved; rate not measured |
| Analog on `DEVICE=2`: `x*100`, no ramp, no sensitivity | `input.md` C6, `0x004f0c60` | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`; `source/input/gamepad.js`. Stand-in pad reached -100 |
| Analog on `DEVICE=3`, 4: `SENSITIVITY` | `FUN_0046f960`, `input.md` C6 | yes (recompiled) | not verified | `spel.wasm`. No check steers through it |
| Touch wheel on `DEVICE=2` | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `source/input/touch.js`. Recorded as intentional |
| Cornering | Brief section 6 | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Full left at 17.4 m/s: yaw rate 23.8 degrees per second, side speed 1.05 m/s. Not compared with the original |

### Traction, surfaces and slopes

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Grip `mu = abs(f(s)) + 0.8` per axle per tick | `FUN_00428c70`, `FUN_00427e60`, `FUN_00427dd0`, `0x428e53`, `0x428ec5` | yes (recompiled) | not verified | `spel.wasm` |
| Slip from `atan(vx/vz)`, front adds `steer*0.004` | `FUN_00427e60` | yes (recompiled) | not verified | `spel.wasm` |
| A 45, B 0, C 0; rear factor 6 | `vdyns.dat`, 25 records | yes (recompiled) | not verified | `spel.wasm` |
| Contact friction is a product | `FUN_004fd120` | yes (recompiled) | not verified | `spel.wasm` |
| `ChunkMaterial` 1.0, 0.1 | `FUN_004ac020` | yes (recompiled) | not verified | `spel.wasm` |
| `ObjectMaterial` 0.6, 0.1 | `FUN_00429710` | yes (recompiled) | not verified | `spel.wasm` |
| Wheel materials 0.7, 0.5 | `FUN_004294f0` | yes (recompiled) | not verified | `spel.wasm` |
| `Rubber`, `Steel`, `Stone`, `Wood`, `Glas`, `Plastic` | `FUN_004a3960`; names referenced nowhere else | yes (recompiled) | not verified | `spel.wasm`. Created, unused |
| `ObjectMaterial%d` per pair | `FUN_004a9130`, `FUN_004a44a0` | yes (recompiled) | not verified | `spel.wasm` |
| Surface effects on traction | None: one material, no surface input, `FUN_004a4430` four callers | n/a | not verified | Does not exist in the original |
| Slopes | No term in `FUN_00428c70`, `FUN_004a2f70`; Ipion contact and gravity | yes (recompiled) | not verified | `spel.wasm`. The bot drove the track in check-flow and run-bot; nothing measured the effect of a slope |

### Turbo

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Use 1 unit per at least 100 ms | `FUN_0044e970` | yes (recompiled) | not verified | `spel.wasm` |
| Gas forced to 100 | `FUN_00427b90` | yes (recompiled) | not verified | `spel.wasm` |
| Push `dt m (0.025 abs(vz)+0.5) 25` if vz < 60, airtime at most 0.5 s | `0x428f35`-`0x428ffa` | yes (recompiled) | not verified | `spel.wasm` |
| Full strength once, then unit vector | `FUN_004a5ce0`, `FUN_004f9680` | yes (recompiled) | not verified | `spel.wasm` |
| Anchor (0, -1, 1) wu | `FUN_004a1f30` | yes (recompiled) | not verified | `spel.wasm` |
| Fast-forward: flag without key | `0x44e985`, `DAT_006c2f28` | yes (recompiled) | not verified | `spel.wasm` |
| Fast-forward force value | `0x6c2f2c`, only `FUN_00428494`, `FUN_004284a0`, reached from dead code | n/a | not verified | Reached only from dead code |
| Turbo button with steering at once | Brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `source/input/touch.js`. Button state only. No check measures turbo force or use: the bot does not use turbo |

### Airborne and recovery

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Airtime, wheels only | `FUN_00403170` | yes (recompiled) | not verified | `spel.wasm` |
| No air control, nothing rights the car | `FUN_004a2f70`, `FUN_004a31d0` | yes (recompiled) | not verified | `spel.wasm` |
| Message above `RESETWAITTIME` 10 | `FUN_0044cb80`, `0x5a16fc` | yes (recompiled) | not verified | `spel.wasm` |
| Spin guard 10 rad/s, 0.25 s | `FUN_00419450`, `FUN_0044ea60` | yes (recompiled) | not verified | `spel.wasm` |
| Manual reset on keyboard | `FUN_0044cf90`, `0x44d705`, `FUN_0040e5a0`, lockout 5000 ms | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Enter puts the car back on the road after the object hit. Lockout not read |
| Manual reset on touch and gamepad | `input.md` H6 | yes (host) | checked on Amsterdam: check-race-ui | `#touch-reset` in `source/index.html`, L3 in `source/input/gamepad.js`, both as VK 0x0D and DIK 0x1C. The check reads the reset stamp `0x5d1b00` |
| Velocity zeroed before the start | `FUN_0044ea60`, `DAT_006fba9c` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Countdown step: forward speed 0 |

### Collision geometry per track

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Etappe 0 Amsterdam: 363 chunks, 14682 triangles, 593 walls | `FUN_004aba30`, `sim-world.md` W1 | yes (recompiled) | checked on Amsterdam: check-flow, run-bot, check-driving | `spel.wasm`. Road holds the car, and check-driving hits something at (-15202, 7219). Counts come from the shipped files |
| Etappe 1 Rotterdam: 507, 22218, 502 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 2 Scheveningen: 400, 17154, 858 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 3 Wenen: 645, 31594, 836 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 4 Berlijn: 634, 31072, 1119 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 5 Hamburg: 326, 13220, 700 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 6 Frankfurt: 334, 14664, 842 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 7 BodenSee: 477, 20886, 1228 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 8 Munchen - Wenen: 607, 36628, 1149 | Same | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Etappe 9 Download-race, on screen Country etappe: 401, 16048, 857 | `FUN_004aba30`; `etappe9.*` since the track update, disc 1.01 without updates: no files | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | `spel.wasm` |
| All four plane lists collide | `FUN_004abf30` | yes (recompiled) | not verified | `spel.wasm` |
| Rail walls 125 wu tall from chunk Y | `FUN_004abdc0` | yes (recompiled) | not verified | `spel.wasm`. check-driving's wall hit was not identified as a rail wall |
| Triangle soup per chunk | `FUN_004a1180`, `FUN_00512000` | yes (recompiled) | boot only: boot-all | `spel.wasm` |

### Track objects and their bodies

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `FUN_00451ed0` 150 kg, .9, .2 | `simulation-core.md` C7 | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_00452ee6`, `FUN_00452ef0` 2000 kg, .9, 0 | Same | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_00453200` 500 kg, .9, .2 | Same | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_004541c0` fixed, 1.0, .6 | Same | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_004542a0` 2000 kg, 1.4, .2 | Same | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_00454320` 400 kg, `FUN_004543a0` 100 kg, .9, .2 | Same | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_004546b0` 10 kg, .9, .2; `FUN_004548d0` 10 kg, 1.0, .6 | Same | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_004551a0` 2000, `FUN_004554b0` 100, `FUN_00455aa0` 50 kg, .9, .2 | Same | yes (recompiled) | not verified | `spel.wasm` |
| `FUN_004557fb`, `FUN_00455800` 3000 kg, .2, .9 | Same | yes (recompiled) | not verified | `spel.wasm` |
| Script objects from script | `FUN_004749b0`, `FUN_00474af0` | yes (recompiled) | not verified | `spel.wasm` |
| One convex hull per mesh, cached | `FUN_004a0d10`, `FUN_00511d20` | yes (recompiled) | boot only: boot-all | `spel.wasm` |
| Start Y + 1 wu, damping 0.05, 0.6 | `FUN_004a9130` | yes (recompiled) | not verified | `spel.wasm` |

### Collision groups and response

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Filter `mask_a AND mask_b == 0` | `FUN_004a3570` | yes (recompiled) | not verified | `spel.wasm` |
| Chunks id 1 | `FUN_004ac020` | yes (recompiled) | not verified | `spel.wasm` |
| Objects, traffic, path cars, parts, script objects share id 2: pass through each other | `FUN_004a9130`, 24 call sites | yes (recompiled) | not verified | `spel.wasm` |
| Wheels id 3 or car id | `FUN_004294f0`, `FUN_004294a0` | yes (recompiled) | not verified | `spel.wasm` |
| Each constraint-car body its own id | `FUN_00429710` | yes (recompiled) | not verified | `spel.wasm` |
| Response only from Ipion | `FUN_0044f970` reads the event | yes (recompiled) | not verified | `spel.wasm` |
| Representative collisions | Brief section 6 | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Object near (-14946, 6362): 25.2 to 15.5 m/s, damage 28, car thrown up to above 53 wu. Wall at 19.5 m/s: 9.4 m/s in one step, damage 28, car bounces back. Not compared with the original |
| Traffic A: thrust 0.8 m, brake -0.25 m, turn, lateral kill, down | `FUN_00428950`, gate up y at least 0.9 | yes (recompiled) | not verified | `spel.wasm`, with the traffic share |
| Traffic B: thrust 0.013 m gas | `FUN_00415e40`, gate up y above 0.9 | yes (recompiled) | not verified | `spel.wasm`, with the traffic share |
| Teleport for reset and parts | `FUN_004a1a90`, `FUN_004a1b50`, `FUN_004a2cb0`, `FUN_004a2d70` | yes (recompiled) | not verified | `spel.wasm` |
| Local-push API | `FUN_004a97f0`: all callers dead | n/a | not verified | All callers dead |
| Engine pair impulse | `FUN_0050c4e0`, not traced | yes (recompiled) | not verified | `spel.wasm` |

### Damage

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Damage on a hit | `FUN_00427170`, `FUN_00425310` | yes (recompiled) | checked on Amsterdam: check-driving | `spel.wasm`. Wall at 19.5 m/s: 0 to 28. Object at 25.2 m/s: 0 to 28. Not compared with the original |
| Measure `FUN_00427170` | `sim-world.md` W4 | yes (recompiled) | not verified | `spel.wasm` |
| `damage = trunc(25 + (min(I,Imax)-Imin) slope + damage)`, cap 1100 | `FUN_00425310`, `damage.ini` | yes (recompiled) | not verified | `spel.wasm`. The input value was not read in the hits above, so the formula is not tested |
| Player Imin, Imax 50000, 90000; supercop model 60000, 90000 | `[Damage Models]` | yes (recompiled) | not verified | `spel.wasm` |
| AI Imin, Imax 70000, 90000; supercop 260000, 270000 | `[Damage Models]` | yes (recompiled) | not verified | `spel.wasm` |
| 60 ms lockout, stamp on every event | `FUN_00426fe0` | yes (recompiled) | not verified | `spel.wasm` |
| Total loss above 1098 | `FUN_0044c950` | yes (recompiled) | not verified | `spel.wasm` |
| Part states, 128 rows over 10 meshes | `FUN_00426280`, `FUN_00425730`, `FUN_00425850`, `damage.ini` | yes (recompiled) | not verified | `spel.wasm` |
| Window and lights limits | `[Damageable Cars]`, `FUN_00426280` | yes (recompiled) | not verified | `spel.wasm` |
| Wheels 900, clouds 900 | `FUN_004266f0`, `FUN_00426530` | yes (recompiled) | not verified | `spel.wasm` |
| No effect on driving | 20 callers of `FUN_00425300` | yes (recompiled) | not verified | `spel.wasm` |
| Repair changes the number only | `FUN_004252e0` | yes (recompiled) | not verified | `spel.wasm` |
| Hit sounds soft, mid, hard, `SCHUUR` | `FUN_00427400` | yes (recompiled) | not verified | `spel.wasm`; `source/audio/game-audio.js` |

### Cameras

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Slot 0 player | `FUN_00438d20` | yes (recompiled) | checked on Amsterdam: reference-frame | `spel.wasm` |
| Slot 1 start | `FUN_00437950`, never active | n/a | not verified | Never active |
| Slot 3 topview | `FUN_00438290`, never active | n/a | not verified | Never active |
| Slot 4 tankstation | `FUN_00437970`, dead callers | n/a | not verified | Dead callers |
| Slot 5 finish | `FUN_0043ab70` | yes (recompiled) | checked on Amsterdam: check-flow | `spel.wasm`. Ran; framing not compared |
| Slot 6 game over and caught | `FUN_00437910` | yes (recompiled) | not verified | `spel.wasm` |
| Slot 7 free | `FUN_00437930`, tweak only | n/a | not verified | Tweak only |
| Slot 8 temp | `FUN_004380f0`, never active | n/a | not verified | Never active |
| Slot 9 AI cockpit | `FUN_004381f0`, never active | n/a | not verified | Never active |
| View 0: 0, 30, -80 | `FUN_004390d0` | yes (recompiled) | not verified | `spel.wasm`. Selected in check-race-ui; offset not read |
| View 1: 0, 25, -52.5 | Same | yes (recompiled) | not verified | `spel.wasm` |
| View 2: 0, 38, -55 | Same; no key | yes (recompiled) | not verified | `spel.wasm` |
| View 3: 0, 15.5, 12, no damping, car hidden | Same | yes (recompiled) | not verified | `spel.wasm`. Selected in check-race-ui; offset not read |
| View 4: 0, 20, 75 | Same | yes (recompiled) | not verified | `spel.wasm`. Selected in check-race-ui; offset not read |
| Views 5 to 9, 0xB: 0, 26, -33, mode 1 | Same | yes (recompiled) | checked on Amsterdam: reference-frame | `spel.wasm`. Default view, first frame |
| View 0xA: 0, 33, -33, mode 1 | Same | yes (recompiled) | not verified | `spel.wasm` |
| View 0xC: 0, 40, -40 | Same; car 7, view is car + 5 at key 1 and at the start: `FUN_00438670`, `FUN_0043c5d0` | yes (recompiled) | not verified | `spel.wasm`. Reachable since the car update. The launch check of car 7 did not read the view |
| View 0xD: 0, 45, -55 | Same; car 8 | n/a | not verified | No route |
| View 0xE free camera | `FUN_004397f0`, `FUN_00439910`, tweak only | n/a | not verified | Tweak only |
| Key 1 Dynamische camera | `FUN_00438670`, manual | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`; keyboard, touch and pad through `GameInput.nextCameraKey` in `source/input/keyboard.js`. View id read, framing not |
| Key 2 Statische camera | Same | yes (recompiled) | checked on Amsterdam: check-race-ui | Same |
| Key 3 held, Achteruitkijk camera, restores on release | Same; `DAT_00599728` | yes (recompiled) | checked on Amsterdam: check-race-ui | `spel.wasm`. Keyboard; `#touch-lookback` on touch, R3 on a pad. View 4 while held, back on release |
| Key 4 Bumper camera | Same | yes (recompiled) | checked on Amsterdam: check-race-ui | Same as key 1 |
| Keys 6, 7, 8, 9, 0 | Same; not in the manual, not tweak gated | partial | not verified | Keyboard only. No touch or pad button. Not in the manual |
| Key 5 HUD mode `DAT_00712784`, manual: dashboard. Not a camera | `CM_KEYB_5` | partial | checked on Amsterdam: check-race-ui | Keyboard and touch (Dashboard behind Meer). No pad button on purpose: none is free. Value 0, 1, 0 read in the check |
| Keys U, I, K, J, L, A, Z, R, T, M, `+`, `-` | Tweak only, `DAT_006fb950` | n/a | not verified | Inert with `TWEAK_MODE=0` |
| Mode 1: behind the travel direction above 12.2 m/s | `FUN_004b1380` | yes (recompiled) | not verified | `spel.wasm` |
| `k = clamp(speed*0.01, 0.1, 0.25)`, x = k, z = 2.5 k, y 0.1 | Same | yes (recompiled) | not verified | `spel.wasm` |
| Damping .245, .1, .7 | `FUN_00438d00`, `FUN_004b1110` | yes (recompiled) | not verified | `spel.wasm` |
| Other modes: rotate x, z; `offset.y` on world Y | `0x4b1668`-`0x4b16f5` | yes (recompiled) | not verified | `spel.wasm` |
| Follow mode, target damping | Written only by constructor `FUN_004b0b20` | n/a | not verified | Dead fields |
| Start view, grid vector (0, 25, -80) | `FUN_0043c5d0`, `FUN_004b1340` | yes (recompiled) | checked on Amsterdam: reference-frame | `spel.wasm` |
| Start path flight | `FUN_004632e0`: no `.pth` of type 1 | n/a | not verified | No `.pth` of type 1 |
| Finish: fixed eye chunk +3, y + 40, `FINISH_JUICHEN` | `FUN_0043ab70` | yes (recompiled) | checked on Amsterdam: check-flow | `spel.wasm` |
| Game over orbit r 52.5, y 25, 4096 units per turn, one turn about 8 s | `FUN_0043bc20`, `FUN_0043bd60`; `docs/behavior/render.md` section 29 | yes (recompiled) | not verified | `spel.wasm`. Derived from code, not measured |
| Caught: fixed eye near the cop | `FUN_0043a910`, `FUN_0043a690` | yes (recompiled) | not verified | `spel.wasm` |
| Camera switch transition | `FUN_004390d0`; damping from prev | yes (recompiled) | fix check: eye steps of 85 and 62 wu in one tick are not blended | `spel.wasm`; the cut is `blendPalette`. Not blended across a jump above 30 wu |
| `game.ini [CAMS]` | `FUN_00437fd0`, tweak only | n/a | not verified | Tweak only |

### Field of view and screen shape

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `z` 0.375, 67.5 degrees across x +-1, near 1.3333, far 12500 | `FUN_004b39d0`, `FUN_0044c200`, `FUN_00449b30` | yes (recompiled) | checked on Amsterdam: reference-frame | `spel.wasm`; `updateClipMap` in `source/render/d3d-renderer.js`. 4:3, by eye |
| Viewport clip y +-0.75, 53.2 degrees vertical | `FUN_004c0e10` | yes (host) | checked on Amsterdam: reference-frame | `updateClipMap`. 4:3, by eye |
| Viewport clip y +-0.625 at `RESOLUTION` 0, 320x200 | `FUN_004c0e10`; `8bit-device.md` section 9 | yes (host) | checked on Amsterdam: check-software | `updateClipMap` takes `clipY` and the mode's size from `setViewport`. `RESOLUTION 0: Ramp device, 320x200, clip 0.625, 200 rows`. At 4:3 it fills the view with y stretched 1.2, the port's reading of a monitor of the period: `docs/intentional-differences.md` |
| FOV easing `z += (target - z) dt / rate` | `FUN_004517f0` | yes (recompiled) | not verified | `spel.wasm` |
| `ChangeFOV`, `pw_fastf` 0.6 in 1 s, back in 0.5 s | `FUN_00474940`, `bonus.pseudo.txt` | yes (recompiled) | not verified | `spel.wasm`; no `pw_fastf` on etappe 0 |
| First projection near 10, fov 0.628, replaced | `FUN_004bb5a0`, `FUN_0044c200` | yes (recompiled) | not verified | `spel.wasm` |
| Wider than 4:3: keep vertical view | Brief section 8 | yes (host) | not verified | `updateClipMap`. 16:9 83.4 degrees, 800x360 96.2. Recorded |
| Taller than 4:3: keep horizontal view | Brief section 8 | yes (host) | not verified | `updateClipMap`. 3:4 83.4 degrees vertical. Recorded |
| RES 6 (8:5) and 8 (5:4) clip values | `render-device.md` sections 2, 3 | n/a | not verified | `updateClipMap` would take them from `setViewport`, as at `RESOLUTION` 0. 6 greyed, 8 has no menu route |
| Depth range | D3D 0..1 | yes (host) | checked on Amsterdam: reference-frame | `updateClipMap` |
