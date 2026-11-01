# Simulation and timing

What `spel.dat` does for its engine, main loop, clocks, physics stepping, frame-rate behaviour, vehicle model, collisions and cameras, with the evidence, where the port implements it, and how it was compared. Part of [the original behaviour document](../original-behavior.md). Feature rows and their status are in [parity/sim-timing.md](../parity/sim-timing.md).

Addresses are VAs in `spel.dat`. A tick is one pass of `handle_game` `FUN_0044cb80`. `dt` is the value `FUN_004a6800(0x7128b0)` returns. A PSI is one Ipion step. World units (wu) are 0.1 m; physics is `(0.1x, -0.1y, 0.1z)` (`FUN_004a4180`). `functions/` means `original-game-decompiled/decompiled/game__spel.dat/functions/`. Original behaviour is the installation with its two official updates, `original-game-decompiled/original/updates/`. `spel.dat` stays as it was; what they change here is car 7, with `vdyns.dat` record 7, and track 9.

**Confirmed** means read from the shipped code or data, unless it says "in the port": that is a trace of the recompiled code, and by itself it says nothing about what a period machine showed. **Confirmed, measured** means read from the running original by reference-wine: a fact about that one setup under Wine, not about Windows or a period machine. **Confirmed, seen on the guest** means read from screenshots of the running original by reference-86box: a fact about an emulated Windows 98 machine, not a real one. **Inferred** rests on arithmetic, on an API from memory or on a reading. **Unresolved** means not established.

"Same machine code" below means: the x86 of `spel.dat` lifted one to one to wasm (`tools/recomp/`, [recompiler.md](../recompiler.md)), apart from the replaced functions and the byte patches listed there. That is a real argument for in-race logic. It does not cover: x87 runs on f64 and not on the 80-bit format; every clock is virtual; rendering and audio are reimplemented. reference-wine runs the original next to the port, for the quantities its row names, and reference-86box for the frames its row names. Every other check here runs the port alone.

Owner's measurements cited here are from `A2 Racer 4 Patch/A2-Racer-4-Fixes/README_technical_spel.dat.md`, part 9, commit `586edad` (v1.4.1), run by the owner under Wine 11.20 with software rendering at 640x480. They are evidence about the original, and about his patched game. His bot table and his traffic table were not repeated. reference-wine measured the player's car at the same kind of rates, see Timing.

The checks named below ran on the final build on etappe 0, Amsterdam, in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan, or headless in Node where the table says so. The original's half of reference-wine ran under Wine, that of reference-86box on an emulated Windows 98 machine. Results and procedures are in [validation.md](../validation.md). A check covers only what it says.

| Name | Tool | Covers |
|---|---|---|
| `reference-wine` | `tools/reference-wine/`, `evidence/reference-wine/results.md` | The original `spel.dat`, unchanged, under Wine 11.20 Staging with Xvfb and llvmpipe, on Amsterdam, car 0, INI files of `original/install` without the updates, which for etappe 0, car 0 is the same data, on a clean clock. Held to 60 ticks per second from outside the process, memory read per tick, 22 launches; also 30, 120 and 240 ticks and no limit. The same key scripts on the port, headless in Node. Covers: rate with nothing limiting it, first `dt`, countdown, acceleration and plateau by movement state, reverse limit and curve, brake, gear index timing, car height, racers' path length over 30 s, the launch regimes, and frames side by side by eye. Not: steering, turbo, damage, collisions, race end, traffic, Windows, period hardware, real vsync |
| `reference-86box` | `tools/reference-86box/`, `docs/research/render-8bit.md`, `evidence/reference-86box/results.md` | The original `spel.dat` at `RESOLUTION` 0 and 1 on a throwaway copy of the owner's 86Box Windows 98 machine, emulated Voodoo3 3000, Pentium MMX 266 or K6-2 550, disc 1.01 data, etappe 0, car 0. Screenshots of the guest only: no memory read, no rate measured. For timing: the `visible_chunks` floor and the smoke gate. Not: any real machine of the period |
| `check-flow` | `tools/check-flow.mjs` | Intro to results with real clicks, with a whole race by the bot at `speed=8`. The game itself wrote `FINISHED=1`, `TRACKTIME` 593233. Zero console errors or warnings |
| `check-software` | `tools/check-software.mjs` | The 8-bit path through the real menu: a whole race by the bot at `RESOLUTION` 1, a race at `RESOLUTION` 0, back on with the 3D card in the same page, zero console errors or warnings. 17 of 17, by name in `evidence/software/flow/summary.json`. On fixed seeds the race gives `TRACKTIME` 593233 and laps 289450, 303783, as with the 3D card |
| `check-race-ui` | `tools/check-race-ui.mjs` | 76 named checks in `evidence/race-ui/summary.json`: touch wheel, stand-in pad, keyboard, pause, focus, settings, finish and game-over screens entered through `FUN_0044cda0`. Sound by state only |
| `check-driving` | `tools/check-driving.mjs` | Node, no renderer, no opponents, keyboard, record 11, movement state 2 on its first launch, `evidence/driving/amsterdam-no-opponents.json` |
| `check-traffic` | `tools/check-traffic.mjs` | Node: peak forward y of traffic in the 3 s after a start, `evidence/traffic/nose-rise.jsonl` |
| `repeat-trace` | `tools/benchmark.mjs` with `tools/compare-traces.mjs` | Bot on fixed seeds, `evidence/performance/final-*.json`. What it compares: see Physics stepping |
| `benchmark` | `tools/benchmark.mjs` | 800x360, DPR 2, 8x CPU throttle, drawing buffer 1600x720, 60 s after 12 s warm-up. A desktop GPU, which CPU throttling does not slow: it says nothing about a phone's GPU |
| `run-bot` | `tools/run-bot.mjs` | Node: a whole race with opponents and traffic |
| `boot-all` | `tools/build-race-lists.mjs` | Node, no renderer: all 10 etappes with all 8 cars for 2 s. Not a gameplay check |
| `reference-frame` | None | The first race frame by eye against the owner's screenshot of his patched game under Wine |
| fix check | One-off script, not in `tools/` | Named where used, and only for what it says |

Corrections to the research notes, each backed in its section. The notes now open with a correction note, and some were also fixed in place, so "Says" is what the note said as first written:

| Note | Says | Code or data says |
|---|---|---|
| [sim-timing.md](../research/sim-timing.md) C1, I4 rule 3 | The first tick stores the whole loading time in the ring, and a load above 0.8 s caps the first 4 ticks | The load `FUN_0044c200` (`0x4581aa`) runs before clock init (`0x4581c1`). Ring entry 0 holds seconds since the counter's origin, entry 1 only the time from clock init to the first tick. Tick 4 is capped only if that time is above 0.68 s at 60 Hz. Measured under Wine: 8.42 ms, so tick 4 is not capped there |
| [sim-timing.md](../research/sim-timing.md) C6.3, I1, I3; [simulation-core.md](../research/simulation-core.md) C4, C5, Unknown; [sim-vehicle.md](../research/sim-vehicle.md) C8, Unknown | The turbo vector lands at full strength on every PSI, so force follows tick period; how it stops is unknown; traffic thrust does not follow tick rate | `FUN_004a5ce0` calls `FUN_004f9680` on the stored vector at `0x4a5d9c`, which normalises it in place. Full strength on one PSI, then length 1. Turbo force is independent of tick rate up to 66 Hz. Traffic thrust grows with tick rate |
| [sim-timing.md](../research/sim-timing.md) C6.1, C6.4 | `FUN_0042fd40` (trailer) is reachable and pushes the player | Its only caller is handler `FUN_004319a0`, whose only pointer is at `0x43141e` in `FUN_00431320`, and that function has no call, jump or pointer (raw scan). Dead, as [sim-world.md](../research/sim-world.md) W3 says |
| [sim-timing.md](../research/sim-timing.md) I2, I3; [simulation-core.md](../research/simulation-core.md) I3, I4; [sim-vehicle.md](../research/sim-vehicle.md) I6 | Owner's limit of 1/60 s; top speed 26 to 28; 8.3 at 450 FPS | These figures are in no commit of the owner's repository (`git log -S`). The committed notes have the tables quoted in this file |
| [sim-timing.md](../research/sim-timing.md) C2 | `T/dt` frame count at `FUN_0043b7ea` | No absolute or relative reference to `0x43b7ea` or `0x43b7f0` (raw scan). Dead |
| [sim-vehicle.md](../research/sim-vehicle.md) I6 | Hold gas on a flat stretch and expect a plateau near MaxSpeed/3.6 | Measured: 11111, 21111 and 12222 reach it near 27.7 m/s; 22222 is at 26.13 m/s after 12 s and still rising. See Movement state and the launch regimes |
| [simulation-core.md](../research/simulation-core.md) C8 | Key 5 cycles HUD detail | `CM_KEYB_5` steps `DAT_00712784`, in the manual dashboard on and off. Overlay detail is key D, `DAT_006fb924` ([input.md](../research/input.md) C7) |

## Engine identification

**Original behaviour.** `spel.dat` is a PE32 executable with a `.dat` name, 1,875,968 bytes, MSVC 6 (compiler 12.00.8447, linker 5.12.8034), PE time 2000-10-20. It is a C++ engine of Davilex's own, and nothing here assumes it is shared with another Davilex game.

| Part | What it is | Evidence |
|---|---|---|
| Physics | Ipion, through a wrapper library `DaviIpionSupport` | `IVP_` strings, `ipion 99/07/10` (`0x5be840`), `C:\scipio\Research\Libraries\DaviIpionSupport\PhysicalObject.cpp` (`0x5af070`), `PhysicalWorld.cpp`, `PhysicalRayController.cpp`; environment named `davilex` (`0x5af288`, `FUN_004a3960`) |
| Renderer | Own code on DirectDraw and Direct3D 5 immediate mode: `IDirect3DDevice2`, `DrawPrimitive`, `DrawIndexedPrimitive` | `D3dlib.cpp`, `D3dev.cpp`, `Viewport.cpp`, `Mesh.cpp`, `Object3d.cpp`; [win32-surface.md](../research/win32-surface.md) C3 |
| Scripts | DaviScript, one compiled file `bonus.dso`: 190 script functions for the bonus objects. No script source shipped | "DaviScript error %s" (`0x5a8ec8`), "Init ScriptEngine" (`0x5a3f58`), `FUN_00475b50`, `FUN_00475860`; runtime `0x4cf000-0x4ea0bf` |
| Input | InputLib on DirectInput | `D:\Work\InputLib` strings, `0x4ea0c0-0x4f1fff` |
| Game code | `C:\Work\A2IV\Game\prog\*.cpp`, over 120 files named by `__FILE__` strings | `original-game-decompiled/docs/subsystems/spel-map.md` |
| Files | `.d3d` models; tracks `.cmp .dmp .pmp .rmp .omp .pth`; `VDYNS.DAT` (100 records of 0x268 bytes); archives `rcs.img/ind`, `rc.img/ind`; INI | `original-game-decompiled/docs/formats/game-data.md` |

**Status.**
- Confirmed: everything in the table, from strings and loaders. `PHYS%d.DAT` (`FUN_00432d20`) has no file on the disc, and the function has no call, jump or pointer (raw scan), so it is dead.
- Inferred: lineage from an older game (`raser.ini`, and `game.ini` comments "Old (Autobahn Raser I)", "New (A2 Racer II)", "New (M25)"). Ipion function names such as `simulate_until` come from memory of its API ([simulation-core.md](../research/simulation-core.md) I1).

**Port.** `public/game/spel.wasm` from `tools/recomp/` holds all of the above except what `tools/recomp/replacements.py` replaces. The host supplies files through `source/host/vfs.js` and `source/host/game-files.js`. The 140 files in `public/assets/game` other than the two lists `files.json` and `race-files.json` are byte-identical to the current install, which is `original-game-decompiled/original/install` with `original/updates/installed/` over it (SHA-256).

**Comparison.** Same machine code. boot-all booted 10 etappes with 8 cars. check-flow and run-bot ran whole races on Amsterdam. reference-frame compared the first race frame by eye.

## Main loop and the order of a tick

**Original behaviour.** `WinMain` `FUN_00458270` runs `handle_game`, then `FUN_004517f0` (bonus timers, zoom), `FUN_0044e180` (log count), `FUN_00458020` (message pump), Ctrl+F10 screenshot, `FUN_0041c150` (cop radio), while `DAT_006fb89c` holds. `handle_game` has 25 steps, listed in [sim-timing.md](../research/sim-timing.md) C5. In short:

| Order | Function | Basis |
|---|---|---|
| 1 | `FUN_004a6700` clock | Real clock |
| 2 | `FUN_00469fa0`, `FUN_0046fdb0` poll input | Tick |
| 3 | `FUN_004a9870` object handlers within 2 x `visible_chunks`, player `FUN_0044ea60` | Tick, contents mixed |
| 4 | `FUN_0041ca20` re-place AI out of view | 20% per tick, gate `1/dt >= 15` |
| 5 | `FUN_00438670` cameras | Keys by `dt`, follow per tick |
| 7, 8, 9 | Particles `FUN_0045dc00(dt)`, skid `FUN_0044e830`, strip `FUN_00444de0` | `dt`, wall, tick |
| 10 | `FUN_0044cf90` game keys | Tick |
| 12, 13 | Total loss, airtime message | Tick, `dt` sum |
| 14 | `FUN_0044da30` draw; also advances effects | Mixed |
| 15 | `FUN_004aa0c0` physics step and matrix copy | Mean of `dt` |
| 18, 19 | Events `FUN_0043c260`, time limit `FUN_0044c8c0` | Per slot, wall |
| 22 | `FUN_0044df10` present | Blocks on flip |
| 23 | `FUN_0044cb30` view distance | `1/dt < 10` |
| 24 | `FUN_0044df10` twice, then `FUN_0044ca80` pause or quit | Blocking |

Input of tick N reaches the car in step 3 and physics in step 15, and the screen in step 14 of tick N+1. The draw uses the pose from before this tick's physics step. Present is the only pacing: `Flip(NULL, DDFLIP_WAIT)` with one back buffer, `WAITVBL=0` as shipped. `Sleep` is not imported.

**Evidence.** `functions/00458270_FUN_00458270.c`, `0044cb80_FUN_0044cb80.c`; [sim-timing.md](../research/sim-timing.md) C5; [simulation-core.md](../research/simulation-core.md) C2.

**Status.**
- Confirmed: order, from code and the binary's own log strings.
- Confirmed, measured: under Xvfb with llvmpipe, where `Flip` does not wait, nothing limits the rate: 317 to 340 ticks per second in the countdown, 358 to 369 driving, 372 to 393 in an earlier test with an older sampler (reference-wine, see Timing).
- Unresolved: period frame rates, and the rate on Windows or under real vsync. No string or table gives one. `spel.dat` never ran in `original-game-decompiled/dynamic/RESULTS.md`; the runs of it here are reference-wine, and reference-86box, which measures no rate.

**Port.** `source/host/race.js` `Race.boot` runs the part of `WinMain` before its loop, and `Race.tick` one pass. `handle_game` runs as shipped. Differences:
- `hook!pauseBegin` returns at once, so `FUN_004517f0`, `FUN_0044e180`, the pump and `FUN_0041c150` run before the dialog instead of after it. In the original they run after the reset with field 0, so those calls see `dt` 0.1 once. The port does not reproduce that single step. Its effect was not measured.
- Ctrl+F10 screenshot is not called. Recorded in [intentional-differences.md](../intentional-differences.md).
- `FUN_00458020` never blocks: the host never clears `DAT_00740dfc`, and `WaitMessage` returns at once.

**Comparison.** check-flow: a bot-driven race to the end, where the game itself wrote `FINISHED=1`, with zero console errors or warnings. run-bot: a whole race headless with opponents and traffic. Neither compares the order with a native trace, and reference-wine reads state per tick, not the order inside a tick.

## Frame clock

**Original behaviour.** Object at `0x7128b0`: +0 QPF ok, +4 f32 frequency, +8 f32 time, +0xC f32 step. Ring of 4 f32 at `DAT_00712868`, start value 0.1f.

| Function | Behaviour |
|---|---|
| `FUN_004a65e0` init, `0x4581c1` | Frequency from QPF, ring to 0.1, one update |
| `FUN_004a6700` update, `0x44cb9e` | `raw = t - time`; `time = (f32)t`; `buf[i] = raw`; `dt = .5 buf[i] + .25 buf[i-1] + .125 buf[i-2] + .125 buf[i-3]`, stored to f32 after each term; `i = (i+1) mod 4` |
| `FUN_004a6800` get `dt`, 208 call sites | field 0 gives 0.1; field above 0.1 gives 0.1; negatives pass |
| `FUN_004a67f0` get time, 18 call sites | +8 |
| `FUN_004a6840` reset, after a dialog only | Ring back to 0.1, time resynced, field 0 |

Start of a race. `time` starts at 0 (`0x4a644f`) and the load is over before init, so `buf[0]` is seconds since the counter's origin and `buf[1]` is the time from init to the first tick. Arithmetic with a replica, 60 Hz, `L` = time from init to first tick:

| Case | Ticks 1 to 5 |
|---|---|
| Up more than 1 s, `L` = 8.4 ms | 0.1, 0.1, 0.1, 0.0156, 0.0167 |
| Up more than 1 s, `L` = 1 s | 0.1, 0.1, 0.1, 0.1, 0.0167 |
| After a dialog | 0.0583, 0.0375, 0.0271, 0.0167, 0.0167 |

Tick 4 is capped when `0.875 T + 0.125 L` is above 0.1: `L` above 0.68 s at 60 Hz. The mean in `FUN_004aa0c0` then makes physics lead the wall clock: 1.16 s with 3 capped ticks, 1.47 s with 4, at 60 Hz (0.92 s and 1.17 s at 30 Hz), by arithmetic.

Measured by reference-wine at 60 ticks per second on a clean clock. `L` is 8.42 ms (7.86 to 8.94, 15 starts). Field and physics delta are read from memory, and `dt` as read follows from the field. Original `launch60-01`, where the clock's value at init is 11.58 s, against the port, where it is 1 s:

| Pass | Original: field, `dt` as read, physics delta | Port: field, `dt` as read, physics delta |
|---|---|---|
| 1 | 2.9237, 0.1, 0.1 | 0.2792, 0.1, 0.1 |
| 2 | 1.4709, 0.1, 0.1 | 0.1479, 0.1, 0.1 |
| 3 | 1.4612, 0.1, 0.1 | 0.1386, 0.1, 0.1 |
| 4 | 0.0158, 0.0158, 0.0790 | 0.0156, 0.0156, 0.0789 |
| 5 | 0.0185, 0.0185, 0.0669 | 0.0167, 0.0167, 0.0665 |
| 6 | 0.0166, 0.0166, 0.0585 | 0.0167, 0.0167, 0.0582 |

Tick 4 is not capped in the original at any rate tried: 0.0303 at 30, 0.0084 at 120, 0.0049 at 240, 0.0030 with no limit. Summing the physics delta up to GO gives 5.83 to 5.86 s against 4.65 to 4.69 s of wall clock from the first tick in the original, a lead of 1.18 s, and 5.87 s against 4.70 s in the port, a lead of 1.17 s. With the same three time steps the first ticks agree closely: core speed 2.2741035 in both at tick 1, 5.0507746 against 5.0507737 at tick 3.

**Evidence.** `functions/004a65e0_FUN_004a65e0.c`, `004a6700_FUN_004a6700.c`, `004a6800_FUN_004a6800.c`, `004a6840_FUN_004a6840.c`, `004580e0_FUN_004580e0.c`; disassembly at `0x4581aa`, `0x4581c1`, `0x4a644f`; [sim-timing.md](../research/sim-timing.md) C1; `evidence/reference-wine/results.md`, "The clock". The owner measured the uptime effect: at a faked 30 days step values run -0.0726 to 0.1109. reference-wine with the host's clock at 31 h of uptime: `time` near 110864 s, float steps of 7.8 ms, `dt` 0.0141 to 0.0201 at 60 ticks per second against 0.0160 to 0.0173 clean, raw steps from -0.0016 to +0.0083 at about 360.

**Status.**
- Confirmed: formulas, call sites, order against the load, 3 capped ticks on a machine up for more than a second.
- Confirmed, measured: `L` of 8.42 ms on the reference machine, 3 capped ticks, tick 4 not capped, the physics delta per tick, the lead at GO.
- Inferred: the sequences of the arithmetic table and its physics lead, with x87 modelled as double. The sequence after a dialog was not measured.
- Unresolved: `L` on a slow machine. Tick 4 would cap only above about 0.68 s at 60 Hz. Between init and the first tick run `FUN_004415e0`, `FUN_00441510`, `FUN_0044e160`, `FUN_0041b220`, `FUN_0044cf60`. The 8.4 ms is one fast machine with its files on tmpfs.

**Port.** `0x004A6700` is hooked (`tools/recomp/replacements.py`), and the hook `hook!updateClock` is in `source/host/race.js` `Race.instantiate`. It keeps the ring and writes `time` from the virtual clock. The first ring sample is the clock's value at init. The second is `INIT_TO_FIRST_TICK` = 8.4 ms, as measured. Every later sample is exactly one tick. So 3 ticks are capped and tick 4 is not, as measured in the original: `dt` 0.1, 0.1, 0.1, 0.0156, 0.0167. A steady ring alternates the last bit of `dt`, `0x3c888888` and `0x3c888889`, so `dt*300` falls just under and just over 5, and the truncating gas step mixes +4 and +5: 23 ticks to full gas, against 21 to 23 measured, where an exact `dt` gave 19. That is deliberate and measured, not noise. The rounding noise of a float counter itself stays left out. `FUN_004a6800`, `FUN_004a67f0`, `FUN_004a6840` run as shipped. Host: `VirtualClock` in `source/host/win32.js`, frequency 1193182 (exact in f32), start `(Date.now() % 100000)/1000 + 1`, so between 1 and 101 s, fixed at 1 in checks.

Restoring this ring in place of `dt` = T from the first tick changes which launch regime the fixed-seed runs land in, not the physics (traced, see Movement state and the launch regimes). The clock changes after reference-wine did the same.

**Comparison.** reference-wine reads the field, the raw sample and the physics delta per tick in both, see the table above. Differences left: tick 5 reads 0.0167 against 0.0185 because the original's `dt` has noise, and GO comes at pass 283 against 280 or 281, with 282 in two of the 22 launches. Countdown durations: [race-rules.md](race-rules.md), Race flow. Nothing read the sequence after a dialog. All checks listed here ran on this hook. Same machine code does not apply to it.

## Callers of dt

**Original behaviour.** 208 call sites in 114 functions, by first FPU operation:

| First op | Sites | Meaning |
|---|---|---|
| `FMUL` | 106 | `rate * dt`: 75, 200, 300, 320, 400, 3000, 1400, 307.692 |
| `FADD` | 46 | Timers: airtime `FUN_00403170`, spin guard `FUN_0044ea60` |
| `FDIVR` | 24 | `K/dt`: FPS gates, frame counts, fades |
| `FLD`, `FSTP`, `FSUBR` | 18, 8, 6 | Kept, passed, countdown |

FPS gates: `FUN_0041cae0` below 15 skips AI re-placement; `FUN_0043dd90` at most 12 and `FUN_00446c70` below 12 skip spawns; `FUN_0043de00`, `FUN_00446fe0` below 10 wipe effects; `FUN_0044cb30` below 10 drops `visible_chunks` by 1 per tick down to 15 (25 with `DAT_006fb8d0`). Frame counts set once: 20/`dt` skid, 2.5/`dt` sparks, 4/`dt` clouds, 6/`dt`, 8/`dt`, 2/`dt`, T/`dt`. Truncated: gas `trunc(gas + dt*300)`, brake `trunc(brake + dt*320)`, animation `(int)(dt*1000)`, particle count `(int)(base - dt*307.692)`, `(int)(dt*6000)` in `FUN_00436dc0`.

At 1/60: `dt*300` lies just under or just over 5, so gas mixes +4 and +5, measured at 21 to 23 ticks to 100, in steps 5, 9, 13, 18, 22, 27. Brake +5 per tick, 20 ticks, 0.333 s, by arithmetic, since `dt*320` is 5.33. `(int)(dt*1000)` = 16, so a 50 ms animation frame takes 83 ms; particle bases 15 and 35 give 9 and 29.

**Evidence.** Scan in [sim-timing.md](../research/sim-timing.md) C2, C6; `calls.csv`, `disassembly.asm`.

**Status.**
- Confirmed: counts and classes.
- Confirmed, seen on the guest, on the 8-bit path: the floor of 15, with far scenery gone on the Pentium MMX 266 by the time the race stands still; the smoke gate `FUN_00446c70`, with no smoke on the Pentium MMX 266 at 640x480, nor on a K6-2 550 at 640x480, and smoke on a K6-2 550 at 320x200 ([render-8bit.md](../research/render-8bit.md)).
- Unresolved: 79 AI call sites were classified by first FPU operation and not read one by one ([sim-timing.md](../research/sim-timing.md) Unknown). The gates on any real machine of the period.

**Port.** Runs as shipped. The host supplies one `dt` per tick. After the first 3 ticks `dt` is about 1/60 whatever the device does (0.0156 at tick 4, then 1/60 to the last bit), so the FPS gates never fire again. `FUN_0044cb30` needs state 0 and the first ticks are in state 1, so the view distance governor never fires at all, and view distance and effects stay full on a slow device. This is the price of a fixed tick, which [sim-timing.md](../research/sim-timing.md) I4 rule 4 expected. It belongs with the Falling behind row of [intentional-differences.md](../intentional-differences.md).

The rule stays on the 8-bit path too: `visible_chunks` stays 25 and smoke always spawns, because `1/dt` is 60. That is what the code gives on a fast machine, and on the guest's slow ones this path lost smoke and view distance. Smoke's alpha reaches 0 at 128 ticks here, before its limit: invisible, by the same rule. `?chunks=N` with `?race=1` sets `VISIBLECHUNKS` for a comparison of pictures, and nothing in play uses it.

**Comparison.** Same machine code; the constants are unchanged. reference-wine: gas 0 to 100 in 21 to 23 ticks in the original at 60 ticks per second, in steps 5, 9, 13, 18, 22, 27, and in 23 ticks in the port, in steps such as 4, 9, 13, 18, 22, 27. check-driving and check-race-ui read gas 100 and brake 100, not the ramp steps. No gate's threshold was measured. reference-86box only shows the floor and the smoke gate in the guest's frames, and a port frame with `?chunks=15` matches the guest's view distance at rest. The other gates were not seen.

## Physics stepping

**Original behaviour.** Fixed step 0.015151516 s, 66 PSIs per second, whatever the tick rate.

| Function | Behaviour |
|---|---|
| `FUN_004a6a10`, `FUN_004a3960`, `FUN_004a4160`, `FUN_004f7af0` | env+0xC0 = (double)0.015151516f. Gravity (0, 9.81, 0) |
| `FUN_004aa0c0` | `n = min(n+1, 50)`; `ema = (dt + (n-1) ema)/n`; a plain mean for 50 ticks, then 49/50. Calls the next row with `FPSMULT * ema`. Sets x87 PC bits to 01 and leaves them |
| `FUN_004a45d0` | `world+0x74 += delta` in f32; passes the unrounded sum as a double |
| `FUN_004f8380`, `FUN_0050bfc0`, `FUN_0050bd80` | PC bits 11 for the call; pops events while `until - base > next`. No substep limit |
| `FUN_0050c020`, `FUN_004f86f0` | PSI: controllers `FUN_00500ac0`, collisions, integration |

With `dt` at most 0.1 and `FPSMULT` 1, at most 7 PSIs per tick. At 60 Hz, 1.1 per tick. `FPSMULT` `DAT_005afa48` = 1.0f changes only inside the tweak block. Matrices are extrapolated to env time (`FUN_004f2b10`, `FUN_004f2c40`, `FUN_004f3c20`), so the pose moves every tick even when no PSI ran. After the step, `FUN_004aa0c0` copies matrix, position and local velocity for up to 1200 active pairs, regardless of distance.

**Evidence.** `functions/004aa0c0_FUN_004aa0c0.c`; [sim-timing.md](../research/sim-timing.md) C4; [simulation-core.md](../research/simulation-core.md) C3.

**Status.**
- Confirmed: all of the above.
- Inferred: names of Ipion functions.
- Unresolved: Ipion solver internals, rate sensitivity of the solver, and what PC=01 does on a real CPU.

**Port.** Runs as shipped. The host supplies `dt`. Nothing else in the host touches physics.

**Comparison.** Same machine code. Not covered: x87 on f64. reference-wine reads the physics delta per tick in both, see Frame clock. It does not count PSIs.

repeat-trace ran the bot on fixed seeds in three profiles: 1280x720 DPR 1 at 60 FPS, 800x360 DPR 2 at 8x CPU throttle and 60 FPS, and every second display frame at 30 FPS. Once per game second `RaceRunner.traceTick` in `source/race-runner.js` takes a checksum over every object with a physics body, 485 on Amsterdam: the player, racers, traffic, police and scenery bodies, each with its object record and its 3D object with world matrix. Checksums are equal at all 71 samples between the profiles, and the bot car's position, speed and chunk are equal (`tools/compare-traces.mjs`: maximum position and speed difference 0). So render size, DPR, CPU throttle and frame rate do not change the state of any physics object at those samples. It compares the port with itself: it does not show equality with the original or with Windows.

## Timing: frame rate dependence and the fixed tick

**Original behaviour.** The game runs free between about 15 FPS and the display rate, and draws what it simulates. These depend on the tick rate:

| Item | Mechanism | 30 Hz | 60 Hz | 66 Hz |
|---|---|---|---|---|
| PSIs per tick | Fixed PSI | 2.2 | 1.1 | 1 |
| Gas, 0 to 100 | `trunc(gas + dt*300)` | 0.33 s, measured | +4 and +5, 0.35 to 0.38 s, measured | +4, 0.38 s |
| 50 ms animation frame | `(int)(dt*1000)` | 100 ms | 83 ms | 76 ms |
| Particles, base 15 and 35 | `(int)(base - dt*307.692)` | 4, 24 | 9, 29 | 10, 30 |
| Turbo force | One full push per tick (`dt` in the value) | `25 m (0.025 abs(v) + 0.5)` | same | same; weaker above 66 Hz |
| Traffic thrust, down impulse, lateral kill | Per tick, no `dt` | See Traffic pushes | | |
| AI re-placement tries per second | 20% per tick, `FUN_0041cae0` | 6 | 12 | 13.2 |
| Copalert level, 100 gone in | -7 per tick, `FUN_00489d30` | 0.5 s | 0.25 s | 0.23 s |
| Skid strip, 49 ticks | Per tick | 1.63 s | 0.82 s | 0.74 s |
| Chase camera lag x, z at k = 0.25 | Per tick | 100, 20 ms | 50, 10 ms | 45, 9 ms |
| Input to draw | Tick order | 33 ms+ | 17 ms+ | 15 ms+ |

Measured by reference-wine. Nothing in the program limits the rate except `Flip`, and under Xvfb with llvmpipe `Flip` does not wait, with `WAITVBL=0`: 317 to 340 ticks per second in the countdown, 358 to 369 driving, 372 to 393 in an earlier test with an older sampler. On a clean clock `dt` is then about 0.0028, `dt*300` is below 1, and the truncating gas step only moves on a tick slower than 1/300 s. Gas held for 12 s:

| Run | Clock | Ticks/s driving | Highest gas | Highest speed, m/s |
|---|---|---:|---:|---:|
| `free-clean-3` | clean | 365 | 1 | 1.25 |
| `free-clean-4` | clean | 361 | 6 | 3.89 |
| `free-clean-1` | clean | 359 | 9 | 4.05 |
| `free-clean-2` | clean | 358 | 38 | 12.66 |
| `free-host-1` | host | 369 | 100 after 0.79 s | 26.13 |
| `free-host-2` | host | 369 | 100 after 0.87 s | 27.77 |

With the host's clock the rounding noise of the float clock lifts the pedal by accident. Gas 0 to 100 at other rates, clean clock, from the raw samples: 0.33 s at 30 ticks per second, 0.35 to 0.38 s at 60, 0.40 to 0.41 s at 120, 0.41 s at 240.

Within one movement state the player's car stays close across rates: within 1.3% at 4 s (2.2% in 11111 at 30, one launch) and 0.4% at 8 s, from 30 to 240 ticks per second. Between launches at one rate it does not: 17.3 against 20.7 m/s at 4 s, 23.7 against 27.7 at 8 s. See Movement state and the launch regimes.

Owner's measurements with a clean clock in the "before" column: a bot driving the player's car along a racer's path for 110 s with bursts of turbo (distance in units, top speed). The "after" column is his patched game, which among other things applies a force once whatever the frame rate. Few runs each, and crashes differ between runs:

| FPS | Before | After |
|---|---|---|
| 30 | 22939, 44.2 | 25765, 42.8 |
| 60 | 24038, 40.8 | 26256, 44.5 and 26085, 47.3 |
| 120 | 21364, 33.7 | 25152, 42.2 and 25698, 44.9 |
| 240 | 17533, 28.1 | 25568, 46.3 |
| No limit | 15428, 27.9 (409 FPS) | 25437, 43.9 (375 FPS) |

**Why 60 ticks in the port.** No rate is designed into the binary, so none is canonical ([sim-timing.md](../research/sim-timing.md) I2). The reasons in its I3 that stand:
- 1:1 with most displays, and the lowest input delay of the plain candidates.
- Tyre, steering and gear are fresh on nearly every PSI.
- Brake reaches its nominal 1/3 s and gas stays near it, 0.35 to 0.38 s as measured, and no fault in the code depends on it.

reference-wine adds:
- Running the game code at a rate near 360 fails on a clean clock: the pedal hardly rises, see the table above. That is game code, and it is why the port does not run the game code at the display rate.
- At 60 ticks per second the port agrees with the original per movement state, see Movement state and the launch regimes.

The owner's measurements add:
- The player's car is close to independent of the rate. Its wheels run inside the PSIs, and his patched column stays between 25152 and 26256 from 30 to about 375 FPS. In the unpatched column 30 and 60 FPS are close too (22939, 24038). The fall at 120 FPS and above is in a run with turbo, and fits the next point.
- Turbo is independent of the rate up to 66 Hz, because `FUN_004f9680` normalises the stored force after one PSI: the value has `dt` in it and lands once per set. Above 66 Hz sets overwrite each other, so 60 stays below that edge.
- Traffic pushes are not independent of the rate, and sit near their peak at 60 Hz. The traffic share handles that, with `min(1, tick*25)` taken from the owner's part 9 and its measured result (see Traffic pushes).

Cosmetics that stay rate-dependent, at their 60 Hz values in the table: chase camera lag, skid strip length, particle counts, copalert decay, and the re-placement chance per tick. Camera lag and skid strip are half what a 30 FPS machine showed.

A rate of 66 was rejected: brake ramp 14% slower, no display fit, and nearly equal tick and PSI times let rounding flip single ticks between 0 and 2 PSIs. The gas ramp is no longer an argument: +4 at 66 Hz is 0.38 s, the slow end of what was measured at 60.

**Evidence.** `evidence/reference-wine/results.md`, "Rate", "Other rates and the host's clock"; [sim-timing.md](../research/sim-timing.md) C4 to C6, I1 to I3; [simulation-core.md](../research/simulation-core.md) C4, I4; `functions/004f9680_FUN_004f9680.c`, disassembly `0x4a5d28`, `0x4a5d9c`; `functions/00489d30_FUN_00489d30.c`, `0041cae0_FUN_0041cae0.c`; owner's notes part 9, "The driving force", "Measurements", "What this doesn't establish".

**Status.**
- Confirmed: mechanisms, from code. The normalising call also matches the owner's reading (set 480, stored 1.000).
- Confirmed, measured: the free-running rate under Xvfb, the pedal at that rate, gas at 30, 60, 120 and 240 ticks per second, the car's speed per movement state at those rates.
- Inferred: the other table values, by arithmetic, and that the fall above 66 FPS in the owner's unpatched column is turbo weakening, since those runs use turbo bursts. "Per-tick values were tuned at 25 to 40 FPS" stays a guess.
- Unresolved: the frame rate the developers tuned at, typical period rates, and the rate on Windows or under real vsync.

**Port.** `source/race-runner.js` `TICK_SECONDS = 1/60`, `RaceRunner.frame` by accumulated time. Recorded in [intentional-differences.md](../intentional-differences.md), Simulation rate.

**Comparison.** reference-wine: the original at 30, 60, 120 and 240 ticks per second and with no limit, the port at 60. repeat-trace, see Physics stepping: port against port, at 60 and 30 FPS of rendering, always 60 ticks. check-traffic, see Traffic pushes, is the only check with numbers to set against the owner's table.

## Traffic pushes

**Original behaviour.** `FUN_00428950` (traffic) and `FUN_00415e40` (vehicles on a fixed path) run per tick with no `dt`. Mass `m = 1/(obj+0xB0)` by the `FDIVR` at `0x42898f` and `0x416002`. A gate on up-axis y (at least 0.9 in A, above 0.9 in B) means flipped traffic gets no drive and no drag.

| Step | A `FUN_00428950` | B `FUN_00415e40` |
|---|---|---|
| Thrust through the actuator, local | z = 0.8 m with gas; -0.25 m with brake | z = 0.013 m gas or -0.013 m brake |
| Turn | x = -m 0.0033333 `ctrl[0]` 0.1 | same |
| Lateral kill | World impulse R(-m vx, 0, 0) at a local point | same idea |
| Down | World impulse (0, -m abs(vz) 0.12, 0), x0.1 in `FUN_004a4180` | same |

Thrust takes the actuator path, so it lands once per tick at full strength up to 66 Hz (see Turbo). So the force per second follows the tick rate:

| | 15 FPS | 30 | 45 | 60 | 66 | 75 | 90 | 120 | 240 |
|---|---|---|---|---|---|---|---|---|---|
| Raw thrust per second, m x | 12 | 24 | 36 | 48 | 52.8 | 52.8 | 52.8 | 52.8 | 52.8 |
| Owner: nose rise after a start, y of forward, mean / highest (0.7 is 45 degrees) | 0.06 / 0.07 | 0.19 / 0.30 | 0.40 / 0.60 | 0.51 / 0.74 | 0.69 / 0.72 | 0.59 / 0.67 | 0.49 / 0.58 | 0.28 / 0.36 | 0.13 / 0.19 |

The owner's traffic acceleration from standstill: 2.9 units/s² at 15 FPS, 14.5 at 30, 25 to 37 at 60. Down impulse at 20 m/s is 7.2 m/s per second at 30 Hz, 14.4 at 60. Lateral kill has tau of 9.5 ticks if body mass equals `car_cfg` Mass: 0.32 s at 30 Hz, 0.16 s at 60. His patch `traffic_mass` multiplies the mass by `min(1, dt*25)`, and then measures 0.08 / 0.18 and 9 to 11 at 60 FPS. The 25 is the factor in the game's own turbo formula, and his rate of 30 gave twice the nose rise.

**Evidence.** `0x42898f`, `0x416002`, constants `0x5765e8` = 0.8, `0x5765e4` = -0.25, `0x576450` = 0.12; [sim-world.md](../research/sim-world.md) W3; [sim-timing.md](../research/sim-timing.md) C6.1, corrected at the top of this file for thrust; owner's notes part 9, "Pushes per frame", "Measurements".

**Status.**
- Confirmed: code path, per-tick nature, actuator path for thrust.
- Inferred: raw thrust row, by arithmetic. Reading the applied value as N s.
- Unresolved: what period machines showed, since their frame rate is unknown. The owner did not establish whether nose-up traffic caused what lifted the player's car on real PCs: he infers it.

**Port.** The two `FDIVR` operands are patched: `tools/recomp/replacements.py` `PATCHES` at `0x00416004`, `0x00428991` point them at `TRAFFIC_SHARE` `0x003F1000`, which `source/host/race.js` `Race.instantiate` fills with `min(1, tick*25)` = 0.41667. So `m` becomes 0.41667 m, which scales every force in those two functions, one whole push per 1/25 s at the fixed tick. Recorded: [intentional-differences.md](../intentional-differences.md), Traffic pushes. The owner's `trailer_push` is not applied: `FUN_00431320` has no route (see the corrections).

**Comparison.** check-traffic, on the owner's method: peak forward y of traffic in the 3 s after a start, 110 s of a bot driving through the level. `--whole-push` sets the share to 1, as unpatched. Mean / highest:

| Rate | Port, whole pushes | Owner, original under Wine | Port, with the share | Owner, patched game |
|---|---|---|---|---|
| 60 | 0.295 / 0.742, 24 starts | 0.51 / 0.74 | 0.087 / 0.208, 15 starts | 0.08 / 0.18 |
| 30 | 0.102 / 0.327, 17 starts | 0.19 / 0.30 | 0.064 / 0.193, 17 starts | 0.11 / 0.19 |

The highest values agree within 0.03 at both rates, with and without the share. The means are over more starts of more kinds than the owner's 3 to 7, so they are not comparable. run-bot ran with traffic and does not measure it. reference-wine could not make the owner's measure on the original: a car waiting at the start sees 0 or 1 traffic starts in 31 s.

## Rendering rate, interpolation and falling behind

**Original behaviour.** Draw and simulation share the tick. `dt` is capped at 0.1 s, so below 10 FPS game time slows while `GetTickCount` timers keep real time.

**Evidence.** [sim-timing.md](../research/sim-timing.md) C1, C5, I4; [simulation-core.md](../research/simulation-core.md) I5.

**Status.**
- Confirmed: the original's side.
- Confirmed, measured: with nothing limiting it the original runs at 317 to 393 ticks per second under Xvfb, see Timing. That is one setup, where `Flip` does not wait.
- Unresolved: the original's rendering rate on a period machine. The owner's figures set the rate with a frame limit, reference-wine's with a limit from outside or none, and neither says what a machine of 2000 gave.

**Port.** `source/race-runner.js` `RaceRunner.frame`, `source/render/d3d-renderer.js`.
- Ticks by accumulated time, so display rate does not set game speed. Elapsed capped at 0.25 s per frame, at most 6 ticks per frame, the rest dropped.
- Every tick runs the render path. `captureLevel` 0 discards draws, 1 keeps matrices and moving vertices, 2 keeps everything. Only the last tick of a frame is drawn; the one before blends into it. A tick with P or Esc down is kept whole, because a dialog stays on that frame.
- `blendPalette(alpha)` blends world matrices, moving vertices with equal vertex count, and the view matrix elementwise. A world matrix or a moving draw's first vertex that moved more than 30 wu in a tick is not blended: for a world matrix that is a teleport, and for a moving draw it guards against pairing across objects.
- The teleport test on the view compares the eyes recovered from the view matrix (`eyeAxis`, from `FUN_004b3a60`: row 3 holds `-dot(axis, eye)`), so only a real jump such as a camera switch cuts. Amsterdam sits 15,000 to 25,000 wu from the origin (`etappe0.pmp`: x -23754 to -14937, z 1014 to 12545), which is why a test on row 3 would fire on ordinary turns.
- These show the latest tick only: `gfx_wolk` smoke and `gfx_bwlk` (pointer ranges, their slots are re-sorted every frame), and all particles (`noBlend` around `hook!guard_0045dce0`, a particle's place shifts when another dies). Above 60 Hz they step at 60 Hz. Also not blended: skid strips and player-shadow polygons whose vertex count changed. Blob shadows do blend with their car.
- Under a pause or quit dialog and at the end of a race, `present(1)` shows the key tick's own frame.
- Projection is not blended, and the HUD draws at tick rate.
- Falling behind slows game time, as a `dt` cap does in the original, but `dt` stays 1/60. So the FPS gates do not fire and race timers slow with the game instead of keeping real time: see Callers of dt and Game clocks on GetTickCount.

**Comparison.** repeat-trace, see Physics stepping: rendering load and frame rate do not change the state of any physics object at the samples, at 60 and 30 FPS. At 30 FPS every other tick has `captureLevel` 1. benchmark at the mobile profile, route on chunks 114 to 192: FPS mean 60, worst second 60, frame ms p50 16.7, p95 16.7, p99 16.8, max 16.8, tick mean 7.19, p99 9.8, max 14.5, present mean 0.65, max 2.5. So the checks never reach the cap of 6 ticks, and dropped ticks were not exercised by them. check-flow at `speed=8` ran ticks at `captureLevel` 0 for a whole race and does not measure them.

Fix checks, each a one-off script with the bot on Amsterdam. The 144 Hz figures come from a timer standing in for `requestAnimationFrame`, not a real display:
- Camera: over 28 s of driving, 4031 presents at a 144 Hz stand-in and 1680 at 60 Hz, none with the view unblended. A test on row 3 would have cut 33% of them. Camera switches, eye steps of 85 and 62 wu in one tick, still cut. The largest eye step outside switches was 13.3 wu per tick, at ticks 2 to 4.
- Latest-tick draws: over 1168 ticks, 2968 smoke rows and 3922 particle rows, none paired with the tick before. `gfx_bwlk` drew 0 times in a whole Amsterdam race, so its range ran on no real draw. 67 of 3842 moving pairs were more than 30 wu apart, and the first-vertex test skips those.
- Simulation: the flag went up at tick 36944 and the flitser fired at tick 20720 in whole-race runs before and after the last renderer edits, on fixed seeds.

Interpolation quality was not judged by eye, and no real display above 60 Hz was used.

## Focus loss, pause and the wall clock

**Original behaviour.**

| Event | What happens |
|---|---|
| Window inactive | `FUN_00458020` blocks in `WaitMessage`, no clock reset. On return `raw` is the whole gap, ticks cap at 0.1, surfaces are restored. `GetTickCount` kept running, so race timers include the gap |
| P | `FUN_0044c990` waits for P up, then sweeps VK 0 to 255, waiting for each key it finds down, and ends with the sweep that saw one. Spins with no pump. VK 1, 2 and 4 are mouse buttons |
| Esc | `FUN_0044c9f0` waits for Esc up. J or Y calls `FUN_0044cda0(4)`. Esc or N resumes, after waiting for Esc up only |
| Around both | `FUN_0044ca80`: mixer line 4 to 0; pause clocks 0, 3, 0xB and six racer clocks (`FUN_00448330`, `FUN_0042e440`); wait; resume them; `DAT_0071277c = 1`; restore volume; `FUN_004a6840` |

During a dialog `GetTickCount` and the counter keep running. So clock slots 1, 5, 7, 0xF, 0x10, 0x11 and all stamps keep counting, and `time` jumps by the pause length at the reset. Invulnerability, freeze and fast-forward run out during a pause, and pickups time out and respawn on `time`. `FUN_004c5e40` returns 0 while Shift is down for keys without flag 0x100, so in both dialogs Shift masks every key, and Shift alone resumes nothing.

**Evidence.** `functions/0044ca80_FUN_0044ca80.c`, `0044c990_FUN_0044c990.c`, `0044c9f0_FUN_0044c9f0.c`, `00458020_FUN_00458020.c`, `004c5e40_FUN_004c5e40.c`, `00451420_FUN_00451420.c`, `004516a0_FUN_004516a0.c`; [sim-timing.md](../research/sim-timing.md) C3; [win32-surface.md](../research/win32-surface.md) C4.

**Status.**
- Confirmed: all of it, from code.
- Unresolved: nothing here.

**Port.** `source/host/race.js`: `Race.installPause` (`hook!pauseBegin`), `Race.pollPause`, `Race.endPause` run the same steps across ticks. `Race.tick` advances the virtual clock in its pause branch, so as in the original only the race clocks stop, a timed bonus can run out in a pause, and `FUN_004a6840` resyncs `time` by the pause length. `pollPause` follows `FUN_0044c990` and `FUN_0044c9f0`; `RaceRunner.canvasPress` in `source/race-runner.js` makes a mouse button or tap on the race a VK 1, 2, 4, 5 or 6.

`RaceRunner.setFocus` stops ticks, suspends sound and clears input; the clock does not jump on return. The open settings panel stops ticks too, through `panelOpen`. These differ from the original on purpose: a hidden tab cannot lose a race. Recorded in [intentional-differences.md](../intentional-differences.md), Focus loss.

**Comparison.** check-race-ui, Amsterdam, by name:
- "pause: P stops the race clocks, the wall clock runs on": track time 434 ms stands while the clock moves 1 s.
- "pause: any key resumes, and the race clock goes on from where it stood": 434 to 901 ms, 0.5 s after the resume.
- "pause: the picture stays still": 98 frames, 1 distinct.
- "pause: Shift alone resumes nothing, and masks other keys", "pause: a mouse button on the race resumes, once released".
- "quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release", "quit dialog: J ends the race, finished=0".
- "focus: clock stops, sound suspends, input clears", "focus: resumes without a jump", "hidden tab: clock stops and resumes".

Sound was checked by state only. No check ran a timed bonus or a respawn through a pause. Same machine code for the clocks; the dialog loop is the port's.

## Game clocks on GetTickCount

**Original behaviour.** `gm_clock.cpp` `FUN_00448290` to `FUN_004486a0`: 18 slots at `0x6fa3e8`, stride 0x14, in ms. They never read the frame clock.

| Slot | Use | Mode, limit | Stopped by a dialog |
|---|---|---|---|
| 0 | Lap time, restarted at each crossing `0x456af0`. Limit from table `0x6fa618` x 1000 | Up | Yes |
| 1 | Global traffic light 5000, 500, 5000 ms | Down | No |
| 2 | `FUN_0043cab0` 200 ms, init only in dead `FUN_0043c885` | | No |
| 3 | Track time, whole race | Up, 0xFFFFFFF | Yes |
| 5 | Work lamp blink 1000/500 ms | Down | No |
| 7 | Work arrow board blink 1000/500 ms | Down | No |
| 8, 9, 0xA, 0xC, 0xD, 0xE | Per-racer finish time, if `DAT_006fb964` | Up | Yes |
| 0xB | Time limit, `DAT_006fcf8c`, 5000 ms if not positive; tick sound below 6 s | Down | Yes |
| 0xF, 0x10, 0x11 | MakeInvulnerable, FreezeRacers, FastForward | Down | No |

Other direct users, 34 functions in total: hit lockout 60 ms, hit sound 300 ms, skid smoke and turbo use 100 ms, toggle 199 ms, repeat and damage smoke 200 ms, event delays 1000 and 1500 ms, HUD messages 2000 ms and blink /100, /200, /300, part bend and caught 4000 ms, manual reset 5000 ms, `srand` seed `FUN_004264b0`, load bar. `QueryPerformanceCounter` also in `FUN_0050a5e0` (Ipion statistics). `GetSystemTimeAsFileTime` through `clock()` `FUN_00559348`: FPS log, qhull messages, and script native `FUN_004d7960`, which `bonus.dso` does not use.

**Evidence.** [sim-timing.md](../research/sim-timing.md) C3; [simulation-core.md](../research/simulation-core.md) C1; `functions/00448290_FUN_00448290.c` and neighbours; `functions/0044c8c0_FUN_0044c8c0.c`.

**Status.**
- Confirmed: slots and thresholds. `FINISHED=1` with `Out_Of_Time=1` is explained: `FUN_0044c8c0` (`0x44c8c0`) ends a race on slot 0xB only where the table at `0x6fa61c` holds 1, mode 1. In mode 0 the timer runs out, at 110 s on shipped values, and does not end the race, and the exit `FUN_0044b1c0` (`0x44b1c0`) writes `out_of_time` when the slot reads 0. See [race-rules.md](race-rules.md), corrections. From code; not traced on check-flow's race.
- Unresolved: `FUN_0044fd22` (300 ms), `FUN_00450190` (10000 ms) were not traced; whether `FUN_0043cab0` runs at all.

**Port.** Runs as shipped. Host: `GetTickCount` and `timeGetTime` are `floor(clock.query() * 1000)` in `source/host/win32.js`; QPC is `floor(clock.query() * 1193182)`. All from `VirtualClock`, advanced 1/60 s per tick by `Race.tick`, dialogs included. `query()` adds 0.5 ms per call after 2000 calls in one tick, so code that spins on the clock still leaves. Falling behind therefore slows these timers along with the game, unlike the original. Real dates come from `GetSystemTimeAsFileTime`, fixed in checks. See [intentional-differences.md](../intentional-differences.md), Clocks and Falling behind.

**Comparison.** check-flow: a race ended and the game wrote `TRACKTIME` 593233 and `FINISHED=1`, with `Out_Of_Time=1` next to it after 593 s (seen in a fix check's read of `game.ini`), as the code above says. run-bot: a whole race ended headless. The values were not compared with the original: reference-wine's runs end with `wineserver -k`, so no end-of-race write happened. check-race-ui reads slot 3 through `FUN_00448470`, see Focus loss. Same machine code for the slots; the clock is virtual.

## x87 and rounding

**Original behaviour.** Game code and Ipion use x87. `FUN_004aa0c0` sets PC=01 (reserved) every frame and leaves it (`0x4aa147`-`0x4aa15a`). `FUN_0050bfc0` sets PC=11 around the time manager. `FUN_00511cc0` sets PC=11 and does not restore. `__ftol` truncates. f32 stores round to nearest.

**Evidence.** [win32-surface.md](../research/win32-surface.md) C6, FPU control word table, and Unknown.

**Status.**
- Confirmed: the control-word writes.
- Unresolved: precision in the original runtime: 24, 53 or 64 bits. It depends on what real CPUs do with PC=01 and on what `IDirect3D2::CreateDevice` does to the control word. [recompiler.md](../recompiler.md) and [win32-surface.md](../research/win32-surface.md) both list it as open. reference-wine did not read the control word.

**Port.** `tools/recomp/lift.py` `x87`, `fmem`, `imem`, `rnd`; helpers in `tools/recomp/build.py`; math in `source/host/machine.js`.
- ST slots are f64 locals. `--fpu-pc` defaults to 53, so `rnd()` does nothing; 24 is available. 53 bits is this port's choice.
- `fst`/`fstp` to f32 use `f32.demote_f64`. `fist` honours the rounding field of the tracked control word (`frndint`, nearest, floor, ceil, trunc). `fnstcw`, `fldcw` track it. PC bits are ignored.
- `__ftol` inlined as trunc. `_CIacos`, `_CIasin`, `_CIpow`, `_CIsinh`, `_CIcosh`, `_CItanh` map to `Math`. `fsin`, `fcos`, `fptan`, `fsincos`, `fpatan`, `fyl2x`, `f2xm1` go to `Math` too. 80-bit loads and stores convert through f64.
- Ten entries of `tools/recomp/out/report.json` could not be lifted, and they trap if called. None has a route: `FUN_00465345` is the middle of dead `0x465310` (no reference, raw scan); `sub_004e4150` and `sub_004f9d00` are mid-function bytes pointed at by unrelated data; `FUN_0054aeb0` is a DirectInput data format; the six from `0x55e0fd` to `0x566f61` belong to the `sinh`, `cosh`, `tanh` dispatch tables, whose callers map to `Math`.

**Comparison.** reference-wine compares numbers with the original under Wine: with the same three time steps core speed is 2.2741035 in both at tick 1 and 5.0507746 against 5.0507737 at tick 3, and they part where the time steps do. That agrees with the port's 53-bit model to about 7 digits, and that is all it shows. Bit-equal results are not expected. repeat-trace shows runs are repeatable on one machine with one browser.

## Vehicle model

**Original behaviour.** A constraint car with real wheel bodies (`FUN_004fc4f0`, vtable `0x578568`). The raycast car `FUN_004a5e70` is never created: arg 11 of `FUN_00429710` is 0 at all three call sites.

| Vehicle | Creator | Physics |
|---|---|---|
| Player | `FUN_0044e340` | Constraint car with the player's upgrade levels |
| AI racer | `FUN_0042de60` | Constraint car at level 0, Vmax x `MaxSpeedPenalty`/100 (90, 120, 200), RPMmax x `MaxRPMPenalty`/100 (115, 80, 50) |
| Cop, Supercop | `FUN_00423a50`, `FUN_0041e450` | Constraint car with the **player's** upgrade levels, restitution 0.05 and 0.2 |
| Traffic | `FUN_004275e0` | One rigid body, `car_cfg` mass, friction 0.9, elasticity 0.2, COM y -10, no wheels |
| Path cars | `FUN_004636c0`, `FUN_004658e0`, `FUN_00466db0` | Rigid bodies 1200, 800, 1300 kg |

| Item | Value |
|---|---|
| Wheels | 4 balls FL, FR, RL, RR, 150 kg, radius VDYNS 0x264 x 0.1 m (0.4, 0.5 or 0.6). No contact with own body or any wheel |
| Chassis mass | VDYNS 0x000: 600, 1000 in records 2, 16, 26. `car_cfg` Mass sets only 1/mass for damage and turbo |
| COM | VDYNS 0x004 x 0.1, y flipped: y -8 to -16, z -4 to 2 units |
| Spring | `(len - rest) k - damp v`, k VDYNS 0x1EC, 0x228 N/m, relax damp 0x200, 0x23C, compress damp 0.2 x relax. Anchor 500 m along up. Body force at most 80000 |
| Pre-tension | Front `(g/k_f)(-b) 0.5/(b-a)`, rear `(g/k_r) a 0.5/(b-a)`, no mass term |
| Stabilizer | VDYNS 0x214, 0x250 per axle |
| Body Extra Gravity | Constant `1.5 * mass * 9.81` downward at the object origin |
| Inertia args, damping args | 1.0, 1.7, 1.8; 0.05 and 0.6 x 3 |
| Body counter-torque | Factor 0.1, refreshed only while braking, so its last value stays |

`VDYNS.DAT`: 100 records of 0x268 bytes, 24 distinct, 25 in use. The car update changes only record 7, the truck: COM y, spring, relax damp, radius. On disc 1.01 without updates 23 are distinct, with COM y from -11 and radius 0.4 or 0.6. Per-record values are in the parity table. Upgrades index the records: `motor` (HP, RPMmax, Vmax, axle), `banden` (tyre, spring, damp, stabilizer), `abs` (rear brake differs only in records 1, 12, 22), `versnellingsbak` (level 1 ratios differ from level 0 by at most 5e-7, gear count equal, so no effect), `injectie` (read once, not used).

**Evidence.** [simulation-core.md](../research/simulation-core.md) C5; [sim-vehicle.md](../research/sim-vehicle.md) C1, C9; `vdyns.dat` (read by script), `car_cfg.ini`.

**Status.**
- Confirmed: all of the above.
- Inferred: meaning of the inertia and damping args; slot names of the Ipion car. Tilt amplification by Body Extra Gravity above the COM ([sim-vehicle.md](../research/sim-vehicle.md) I4) is a static reading.
- Unresolved: nose-up in the player's car. The owner did not reproduce it by itself on a clean clock.

**Port.** Runs as shipped. The host supplies `vdyns.dat`, `car_cfg.ini`, `intel.ini`, and `game.ini [PLAYER]` from `source/menu/data.js` `writeQuickRaceStuff`, `writeTourStuff`.

**Comparison.** Same machine code on unchanged data. reference-wine ran record 11 on the original too, see the next sections. Car height `obj+0x44` on the start straight: mean 1.315 to 1.330, range 1.26 to 1.37 in the original, mean 1.315 to 1.326, range 1.27 to 1.36 in the port, with the one original launch that brushed something left out. check-driving ran one car, Edgar de Flits, league 0, level 0, record 11. boot-all booted cars 0 to 7. Record 7, the truck since the car update, also ran in one launch check through the menu on track 9, a fix check: 31.24 m/s after 6 s of gas, 0 console errors, not compared with the original, which has not been run with the updates. Other records have run only as far as the checks listed in the parity table.

## Engine, gears and top speed

**Original behaviour.** `FUN_004a2f70` per tick:

```
speed  = sum(abs(omega_i)) * 0.63661975
rpm(g) = Gear[g] * Axle * speed * 60
g from 0: up while rpm(g) > RPMmax and g < gears-1; down while rpm(g) < RPMmin and g > 0
base   = Gear[g]*Axle*HP*(gas*-0.01)*447420 / (RPMmax*rbar*2*pi)
torque[i] = w[i]*rbar*base*-0.5     w[0,1] = ratio 0.7, w[2,3] = 0.3
```

- Automatic only, recomputed from gear 0 each tick, no hysteresis, shift time or clutch. No torque curve. At gas 0 and brake 0 the gear freezes. Ratios 2.8, 2.2, 1.3, 1.0, 0.8; axle 3.8; 5 gears. The manual shift `0x403020`, `0x403030` has no callers.
- The sum is not averaged, so `speed` is 16 x wheel rev/s: top gear from about 11 km/h. Gear has one effect: drive torque. Sound and HUD ignore it.
- Drive: 70% front, 30% rear. Top-gear thrust at r 0.4: 80 HP at 4500 RPM 9620 N; 120 HP at 4000 RPM 16236 N.
- Limit: a wheel gets torque only if `abs(omega) <= MaxSpeed*0.2777778/radius` (`FUN_004fbd50`). No cap on body speed. Body actuator limit 314.16 rad/s. League 0 stock 100 km/h = 27.8 m/s.
- HUD speed `(int)(car+0xC4 * 3.6)`, signed.

**Evidence.** Disassembly `0x4a2f70`-`0x4a31c9`, `FUN_004fbd50`, `FUN_004a2590`; [sim-vehicle.md](../research/sim-vehicle.md) C3, C6, I2, I3; [simulation-core.md](../research/simulation-core.md) C5, I6.

**Status.**
- Confirmed: formulas, limits, the frozen gear.
- Confirmed, measured: plateau, wheel limit and gear index timing, record 11 on Amsterdam, under Wine.
- Inferred: thrust and shift speeds, by arithmetic with equal wheels. Reading 0.6366 as an averaging mistake is a guess.

**Port.** Runs as shipped. The host supplies gas through DirectInput state.

**Comparison.** reference-wine, record 11, shipped opponents: speed by movement state in the next section. Plateau 27.73 m/s in the original and 27.72 in the port, in state 11111. Wheel limit `act_i+0x70` 69.444 rad/s in both. Gear index reaches 4 after 0.27 to 0.33 s of gas in the original and 0.25 to 0.32 s in the port. Distance after 8 s: 1249 to 1255 units in the original and 1250 to 1256 in the port in 22222, 1492 to 1505 and 1496 to 1504 in 11111, with the one launch that brushed something left out. check-driving, record 11, no opponents: 6.26 m/s at 1 s, 17.29 at 4 s, 23.70 at 8 s of gas, wheel omega 59.24 rad/s. This launch is in movement state 2. check-race-ui after 4 s of gas: keyboard 20.64, stand-in pad 17.32, touch wheel 17.28 m/s; each check asserts only speed above 5 m/s. Same machine code. check-driving logs the gear (index 4 at every sample of 1 s and up). Its first launch reads 25.20 m/s at 10 s, still rising, when it meets the object. The limit in reverse: see Brake, reverse and handbrake.

## Movement state and the launch regimes

**Original behaviour.** The player's car accelerates in a regime set by the movement state its Ipion cores hold when its speed passes 1 m/s. The state is a byte at core+0x5C. The player's sim unit has five cores: four wheels and the body, and each latches on its own. So there are more than two regimes. Written chassis first, then wheels 0 to 3: 11111, 22222, 21111 and 12222 were seen in the original and in the port, and mixed ones such as 11122 and 21122 in the port.

| Step | Function | Behaviour |
|---|---|---|
| Speed test | `FUN_00500820`, per sim unit, per PSI | Sign test on `1 - speed²` over all cores of the unit. If any core is above 1 m/s, no movement check for this unit in this PSI |
| Counter | `FUN_004f7ec0`, env+0x140 | One counter per environment. Every unit that passes the speed test counts it down, and only the unit that brings it to 0 is checked. Reload `15 - ftol(r * -5)`, so 15 to 19 unit-steps, with `r` from `FUN_0050d450` |
| Evaluation | `FUN_00500760`, `FUN_004f4f30` per core | 2 if the core has moved at most 0.01 m from its reference position and the rotation test passes. Otherwise it moves the reference and gives 1. 3 only when the reference times are old, see the wake |
| Effect | `FUN_004f3d20`, from `FUN_005006a0`, per core, per PSI | State 2 and up adds 0.1 to the three rotation damping factors and to the speed damping factor. State 1 does not |
| Wake | `FUN_00428c70` calls `FUN_004f21e0` every tick; `FUN_004f3810`, `FUN_004f5390`, `FUN_00500650`, `FUN_004f47b0` | Sets the reference times core+0x1D8 and +0x1E0 to env time, so a car under its handler never reaches state 3 |

So a car standing with the handler running reads state 2, or 1 after it has crept more than 0.01 m. Once any core is above 1 m/s the state is no longer evaluated, and what it held then stays for as long as the car is fast. Which regime a launch gets depends on the last check before that moment. The other units in the world move the counter too.

Measured by reference-wine. All state changes come within 0.17 s of the gas, and in none of the 119 launches, original and port, does a state change from 1 s after the gas until the obstacle or the end of the gas. The moment of the gas does not decide the regime in the original: `repeat60-1` to `-6`, one key script six times, gave 22222, 11111, 22222, 11111, 21111, 11111. The state before the gas does not decide it either: 22222 before the gas turned into 11111, 21111, 11122 or stayed 22222. The car also goes to sleep during the countdown in some starts (88888).

Record 11, Amsterdam start straight, shipped opponents, speed after gas in m/s, means per state at 1 s, original / port:

| State at 1 s | Launches | 1 s | 4 s | 7 s | 8 s | 10 s | Last 2 s before the obstacle or gas end | 98% of limit at |
|---|---|---:|---:|---:|---:|---:|---:|---:|
| 11111 | 7 / 7 | 6.65 / 6.67 | 20.67 / 20.69 | 27.72 / 27.73 | 27.73 / 27.72 | 27.72 / 27.71 | 27.73 / 27.72 | 6.10 / 6.02 s |
| 22222 | 9 / 3 | 6.35 / 6.37 | 17.33 / 17.34 | 22.64 / 22.65 | 23.71 / 23.72 | 25.22 / 25.22 | 25.71 / 25.70 | not reached |
| 21111 | 5 / 3 | 6.46 / 6.59 | 19.13 / 19.22 | 26.45 / 26.50 | 27.73 / 27.68 | 27.66 / 27.68 | 27.70 / 27.71 | 7.45 / 7.42 s |
| 12222 | 1 / 3 | 6.45 / 6.53 | 18.61 / 18.65 | 25.28 / 25.30 | 26.72 / 26.77 | 27.69 / 27.68 | 27.69 / 27.68 | 8.40 / 8.39 s |

22 launches of the original, the port's 16 moments, read from the raw samples after the two port changes. One launch of the original in 11111 brushed something at 5.2 s: the other six reach 98% of the limit at 6.00 to 6.05 s.

**Evidence.** `functions/00500820_FUN_00500820.c`, `004f7ec0_FUN_004f7ec0.c` (constant `0x5783ec` = -5.0), `0050d450_FUN_0050d450.c`, `00500760_FUN_00500760.c`, `004f4f30_FUN_004f4f30.c`, `004f3d20_FUN_004f3d20.c`, `005006a0_FUN_005006a0.c`, `004f21e0_FUN_004f21e0.c`, `004f3810_FUN_004f3810.c`, `004f5390_FUN_004f5390.c`, `00500650_FUN_00500650.c`, `004f47b0_FUN_004f47b0.c`; `FUN_00428c70` at `0x428ed5`. In the original: `evidence/reference-wine/results.md`, "The regimes"; `launches.csv`. In the port: the same report, `port-sweep.csv`, traces of core+0x5C on Amsterdam, and the `moving` field in `evidence/driving/amsterdam-no-opponents.json`.

**Status.**
- Confirmed, from code: the speed test, the counter, the evaluation, the +0.1, the wake path.
- Confirmed, measured: the regimes exist in the original, under Wine, with the speeds of the table, and the moment of the gas does not decide them there.
- Confirmed in the port, by tracing: the port is exactly repeatable, and it changes regime when the moment moves by a few ticks. `port-sweep.csv`, 81 moments from GO to GO+4 s in steps of 3 ticks: 11111 38, 22222 21, 21111 14, 12222 5, 21122 3. Before the two port changes: 11111 31, 22222 26, 21111 16, 12222 7, 11122 1. An earlier one-off sweep of 39 gas ticks from 278 to 500, no opponents, on an earlier clock, gave 19 launches all state 1, 18 all state 2, and 2 with wheels 1 and body 2: 355 to 358 all state 1, 359 mixed, 360 to 365 all state 2.
- Inferred: the name `must_perform_movement_check` for `FUN_004f7ec0`, from memory of Ipion's API, and that wheels can reach state 1 before the body because the rotation test fails before the body has moved 0.01 m.
- Unresolved: why a core latches in state 1 or 2 and what decides it: the measurement reads the bytes, not the cause. Whether the shares of the regimes are the same: these samples are too small to say. Whether players of the period saw this split. Opponents' launches, not traced. Where 22222 ends: the obstacle comes first, and speed after 12 s is 26.13 m/s in the original and 26.12 in the port, still rising.

**Port.** Runs as shipped, nothing in the host. Restoring the 4-entry ring of `FUN_004a6700` in place of `dt` = T from the first tick changes which regime the fixed-seed runs land in, not the physics.

The tick number in the port is not a constant. The trace that first showed the regimes had state 1 with gas at tick 360. On the final build, check-driving's own sequence, gas after 360 ticks with no opponents, reads state 2 (`movementState` in its JSON). An earlier build with `Opponents=1`, as shipped, gave wheels 1 and body 2 on the same tick. Which tick lands where changes with anything that moves the counter, the first ring samples included.

**Comparison.** reference-wine, criteria set before the results. Plateau within 3%: 27.73 against 27.72 (11111), 27.70 against 27.71 (21111), 27.69 against 27.68 (12222); 22222 has none in 12 s, 25.71 against 25.70 over the last 2 s. Speed at 1, 4 and 8 s within 5%, on means per state: at most +2.05%, +0.44% and 0.18%. For any one launch against any other in a state, two pairs at 1 s were 5.1% and 5.3% before the gas ramp fix, and were not recomputed per pair since. So 17.3 against 20.7 m/s at 4 s is the game's own spread and not a port effect, and any comparison of two runs must first compare the state.

check-driving's log shows state 2 on its first launch and on the launch after the first Enter, 17.42 m/s after 4 s from 1.1 m/s, and state 1 after the second Enter, 16.90 m/s after 3 s from 0.55 m/s. check-race-ui's gas checks read values of both kinds, see Engine, without testing them.

## Brake, reverse and handbrake

**Original behaviour.** There is no reverse gear and no reverse state. `CarBackward` sets `brake`.

```
if brake != 0:
    b = brake*0.01*10000
    if body_speed_z > 0: b *= 2
    torque[i] = -(BrakePower[i/2] * rbar * b * 0.5)    // replaces the gas torque
    update body counter-torque
```

- Moving forward the torque is doubled. At rest or moving backward it is single and drives the car backward. Gas during brake has no effect. The wheel limit is the same in both directions, so reverse tops out at Vmax.
- Force per wheel at full pedal, no doubling: rear 7500 N, front 2500 N, total 20000 N, 10000 N in records 1, 12, 22 at level 0. That is about twice the 80 HP forward drive, limited by grip.
- Brake ramp `trunc(brake + dt*320)`, 0 on release. Brake lights `DAT_006fba2c`, digital modes only.
- Handbrake: on change `FUN_004fcc40` locks wheels 2, 3 to the body by a constraint; caps grip at 2.0 on both axles. Handbrake Power VDYNS 0x044 is stored and not read.

**Evidence.** Disassembly `0x4a30e4`-`0x4a316a`; [sim-vehicle.md](../research/sim-vehicle.md) C4, I3; [simulation-core.md](../research/simulation-core.md) C5.

**Status.**
- Confirmed: code path.
- Confirmed, measured: reverse curve and limit, and brake from speed, record 11 on Amsterdam, under Wine.
- Inferred: forces, by arithmetic.
- Unresolved: reverse feel in the original.

**Port.** Runs as shipped. Touch: wheel down sets `lY` full down on DEVICE 2 (`source/input/keyboard.js` `GameInput.updateJoystick`), so the original ramp and path apply. Pad: left trigger, B, D-pad down or stick down brake (`source/input/gamepad.js`).

**Comparison.** reference-wine, read from the raw samples after the two port changes. Down held from standstill, 8 s, means per state at 1 s, speeds in m/s:

| State | Starts, original / port | | 0.5 s | 1 s | 2 s | 3 s | Steady | 98% of limit at |
|---|---|---|---:|---:|---:|---:|---:|---:|
| 22222 | 3 / 4 | original | -4.00 | -8.50 | -16.55 | -23.74 | -27.79 | 3.60 s |
| | | port | -3.90 | -8.41 | -16.48 | -23.61 | -27.79 | 3.59 s |
| 11111 | 3 / 1 | original | -4.04 | -8.84 | -18.14 | -27.03 | -27.91 | 3.04 s |
| | | port | -3.97 | -8.78 | -18.07 | -27.18 | -27.90 | 3.02 s |

Brake from speed, Down right after 5 s of gas:

| Run | State | Start, m/s | 0.5 s | 1 s | Zero at |
|---|---|---:|---:|---:|---:|
| original 1 | 11111 | 24.10 | 17.36 | 10.24 | 1.73 s |
| port 1 | 11111 | 24.10 | 17.50 | 10.42 | 1.73 s |
| original 2 | 11111 | 24.07 | 17.14 | 9.95 | 1.72 s |
| port 2 | 11111 | 24.00 | 17.46 | 10.31 | 1.73 s |
| original 3 | 21111 | 22.03 | 15.13 | 7.70 | 1.53 s |
| port 3 | 21111 | 22.00 | 15.01 | 8.00 | 1.57 s |

check-driving: brake from 16.9 m/s to 0 in 1.3 s; reverse to -12.45 m/s at 1 s, -21.7 at 2 s and -27.89 m/s at 3 s, wheel omega -69.34 against the limit 69.44; steering while reversing, where full lock at -27 m/s spins the car (yaw 1.73 rad in 1 s, side speed 8.31 m/s); forward again, from -3.5 to 2.65 m/s in 3 s out of the spin. check-race-ui: wheel down brakes, then reverses, fastest -12.61 m/s in the 6 s it samples; it asserts below -1 m/s. Same machine code. Handbrake was not checked beyond the button state.

## Steering

**Original behaviour.** `FUN_004a31d0(phys, steer*0.006666667)` calls `FUN_004fc3d0`, which turns wheels 0 and 1 by one angle; no Ackermann; rear never steers. `FUN_00402de0` clamps to +-100, so +-0.66667 rad = +-38.2 degrees. No speed dependence. Max Steering Angle (35) and Max Speed Steer Angle (30) are stored and not read. `FUN_0046f330` with speed-dependent limits has no callers.

| Input | Path | Behaviour |
|---|---|---|
| Digital, DEVICE 1 | `FUN_0046f530` | Rate `2*dt` on 0..1, so 0.5 s to full lock and 0.5 s to recentre; `steer = (right - left)*100` |
| Analog, DEVICE 2 | `FUN_0046f530`, `0x004f0c60` ignores the ramp | `steer = x*100`, no sensitivity, no slew |
| Analog, DEVICE 3, 4 | `FUN_0046f960` | No ramp, `steer = (x*100)/((100 - SENSITIVITY + 25)*0.04)`, shipped 50 gives +-33.3 |

**Evidence.** [sim-vehicle.md](../research/sim-vehicle.md) C7; [simulation-core.md](../research/simulation-core.md) C5, C6; [input.md](../research/input.md) C6.

**Status.**
- Confirmed: all.
- Inferred: wheel 0 is left under D3D convention.

**Port.** Runs as shipped. Keyboard stays on DEVICE 1, the original ramp. Touch and gamepad use DEVICE 2 (`source/race-runner.js` `chooseDevice`), direct steering to +-100, recorded as intentional. The pad deadzone is in the host, default 0.18, a setting read live. In a DEVICE 2 session the keyboard uses the player's own keys with two ramps at `2*dt` (`GameInput.updateJoystick`).

**Comparison.** check-driving: full left at 17.4 m/s, yaw rate 23.8 degrees per second, 14.2 m/s out, side speed 1.05 m/s, steering value -100; yaw changes while reversing. check-race-ui: keyboard steering value moved (-80), touch steering with turbo at once, stand-in pad to -100, keyboard in a pad session lock to lock in 0.5 s. No check steers through `FUN_0046f960`. None of this is compared with the original.

## Traction, grip, surfaces and slopes

**Original behaviour.** `FUN_00428c70` overwrites the friction of two materials each tick (`FSTP` at `0x428e53`, `0x428ec5`):

```
s_front = vz == 0 ? 0 : steer*0.004 - atan(vx/vz);  s_rear = vz == 0 ? 0 : -atan(vx/vz);  if vz < 0: s = -s
f(s) = (A*0.1*s + B*0.1*sin(C*s)) * 0.1 * Factor
mu   = abs(f(s)) + 0.8;   if handbrake and mu > 2: mu = 2
```

In all 25 records in use A = 45, B = C = 0, rear Factor = 6: `mu_front = 0.8 + 0.45 F abs(s)`, `mu_rear = 0.8 + 2.7 abs(s)`, up to 5.04 at 90 degrees. Contact friction is the product of both materials.

| Material | Friction | Elasticity | Where |
|---|---|---|---|
| `ChunkMaterial` | 1.0 | 0.1 | All track, `FUN_004ac020` |
| `ObjectMaterial` | 0.6 | 0.1 | Car bodies, `FUN_00429710` |
| Wheel materials | 0.7, overwritten per tick | 0.5 | `FUN_004294f0` |
| `Rubber`, `Steel`, `Stone`, `Wood`, `Glas`, `Plastic` | .95, .7, .5, .4, .2, .1 | .9, .75, .6, .4, .95, .4 | `FUN_004a3960`; names referenced nowhere else |

**Surfaces.** No traction per surface. Every chunk uses one `ChunkMaterial`. `FUN_00428c70` takes no surface input, and `FUN_004a4430` has only four callers.

**Slopes.** No slope term in `FUN_00428c70` or `FUN_004a2f70`. Slopes come from Ipion contact on the plane triangles plus gravity and Body Extra Gravity. Plane Y range on Amsterdam -50 to 261 wu, on etappe 1 -198 to 1517.

**Evidence.** `FUN_00427e60`, `FUN_00427dd0`; [sim-vehicle.md](../research/sim-vehicle.md) C5; [simulation-core.md](../research/simulation-core.md) C5; [sim-world.md](../research/sim-world.md) W1, W2.

**Status.**
- Confirmed: formulas, one surface, no slope term in those functions.
- Unresolved: Ipion's friction solver internals.

**Port.** Runs as shipped. Nothing in the host.

**Comparison.** Same machine code. Not covered: x87 on f64. check-driving's corner gives one grip figure, side speed 1.05 m/s at full lock and 17.4 m/s. No skid or slope measurement was run. A whole race by the bot (check-flow, run-bot) shows only that the car stays usable on Amsterdam's road.

## Turbo

**Original behaviour.**
- `FUN_0044e970`, state 0 only: every at least 100 ms (`GetTickCount`) while `CarTurbo` is held: `DAT_006fba74 -= 1`, `ctrl+0x19 = 1`, sound. So 10 units per second. Released or empty: flag 0. Fast-forward pickup `DAT_006c2f28` skips the use, and turns the flag on without the key.
- `FUN_00427b90` forces gas to 100 while the flag is set.
- `FUN_00428c70`, if flag, `car+0xC4 < 60`, airtime at most 0.5 s: `z = dt * m * (0.025 abs(vz) + 0.5) * 25` with `m` = `car_cfg` Mass; `FUN_004a2000`, `FUN_004a5c70` store it at actuator +0x80.
- `FUN_004a5ce0`, each PSI: rotates the stored vector, then `FUN_004f9680` normalises it in place, then applies the rotated copy through `FUN_004f41b0` unless length < 1e-10. So one PSI gets the full value. Every later PSI gets length 1 until the next set.
- At 60 Hz: 60 sets per second. Force `25 m (0.025 abs(v) + 0.5)`: 7500 N at rest and 18750 N at 30 m/s for Mass 600, 2.5 x that for Mass 1500. Against 1200 kg, 6.25 and 15.6 m/s². Below 66 Hz this does not depend on the tick rate. Above 66 Hz sets overwrite each other, and the force falls by 66/f.
- After the last set a unit vector stays: about 66 N. This answers how the push stops.

**Evidence.** Disassembly `0x428f35`-`0x428ffa`, `0x4a5c70`, `0x4a5d28`, `0x4a5d9c`, `0x4f9680`; `FUN_0044e970`; owner's notes part 9, "The driving force"; [sim-vehicle.md](../research/sim-vehicle.md) C8.

**Status.**
- Confirmed: code path and the normalising step, in code and by the owner's reading of stored values (set 480, stored 1.000).
- Inferred: the N and m/s² figures, by arithmetic, reading the applied value as N s.
- Unresolved: nothing about the mechanism. The strength felt in play was not measured.

**Port.** Runs as shipped. Host: `GetTickCount`. Keys: turbo key on keyboard, touch button 0, pad button X.

**Comparison.** check-race-ui: steering with turbo at the same time, button state only. No check measured turbo force or use rate, and the bot does not use turbo. Same machine code.

## Airborne and recovery

**Original behaviour.**
- Airtime `FUN_00403170`: `ctrl+0x30 = 0` if any wheel has contact (`wheel+0x25`), else `+= dt`. Only wheels count, so a car on its roof counts as airborne. `FUN_004031c0` is airtime > 0.5 s.
- In the air: no contact test on torque, brake, steering or friction writes. No air control. Nothing rights the car. Turbo stops after 0.5 s.
- Airtime above `RESETWAITTIME` (10, `game.ini`): HUD message `DAT_0059becc = 0x44`. No automatic reset.
- Spin guard `FUN_00419450`: any `abs(omega)` above 10 rad/s. Held above 0.25 s (`dt` sum): `FUN_0040e5a0(player, chunk, 0)`, log "The player has been corrected."
- Manual reset: `CM_KEYB_RETURN` in `FUN_0044cf90`, `FUN_0040e5a0(player, chunk, 1)`, lockout 5000 ms. Free waypoint of the chunk, searching up to 10 chunks ahead, 20 units above the road.
- Before the start (`DAT_006fba9c == 0`) the handler zeroes local velocity and reads no input.

**Evidence.** [sim-vehicle.md](../research/sim-vehicle.md) C8; [simulation-core.md](../research/simulation-core.md) C5; [input.md](../research/input.md) C7, Enter row; owner's notes: Enter at the start can drop the car on a racer's roof.

**Status.**
- Confirmed: all of the above.
- Inferred: jumps amplify pitch and roll (static reading).
- Unresolved: real airborne feel.

**Port.** Runs as shipped. Manual reset reaches the game from the keyboard, from `#touch-reset` on touch (`source/index.html`, VK 0x0D and DIK 0x1C) and from L3 on a pad (`GamepadInput.pollRace`).

**Comparison.** check-driving: the object on the straight near (-14946, 6362) throws the car up to above 53 wu and it is back on the road 1.5 s later; Enter then puts it back at a road waypoint; the countdown step reads forward speed 0. check-race-ui: "touch: Reset places the car back, with the wheel held and still held after" and "gamepad: left stick click resets the car" read the reset stamp `0x5d1b00`. Same machine code. No check reads airtime, the airtime message or the spin guard.

## Collisions and damage

**Original behaviour.** One static Ipion object per chunk (`FUN_004aba30`). All four plane lists collide (road at most 16, land 24, extra 12, rail 12), 2 triangles per plane, plus invisible rail walls 125 wu tall from `.cmp` positioned from the chunk's Y (`FUN_004abdc0`). Triangle soup per chunk (`FUN_004ac020`).

| Etappe | Chunks | Plane triangles | Walls |
|---|---|---|---|
| 0 Amsterdam | 363 | 14682 | 593 |
| 1 Rotterdam | 507 | 22218 | 502 |
| 2 Scheveningen | 400 | 17154 | 858 |
| 3 Wenen | 645 | 31594 | 836 |
| 4 Berlijn | 634 | 31072 | 1119 |
| 5 Hamburg | 326 | 13220 | 700 |
| 6 Frankfurt | 334 | 14664 | 842 |
| 7 BodenSee | 477 | 20886 | 1228 |
| 8 Munchen - Wenen | 607 | 36628 | 1149 |
| 9 Download-race, on screen Country etappe, since the track update | 401 | 16048 | 857 |

Objects: one convex hull per mesh, cached by name (`FUN_004a0d10`). Masses from 5 to 3000 kg by type ([simulation-core.md](../research/simulation-core.md) C7). Filter `FUN_004a3570`: two bodies collide only if `mask_a & mask_b == 0`. Track objects, traffic, path cars, parts and script objects share one id, so they pass through each other; constraint-car bodies each have their own.

All collision impulses come from Ipion. Game callbacks only read the event (`FUN_0044f970`). Other pushes: turbo and the two traffic functions, see their sections. Local-push API `FUN_004a97f0` has only dead callers.

Damage value `FUN_00427170`: `abs(v)/invmass(other)`, with a floor on invmass of 0.0006, or `abs(v)/(2 invmass(self))` against a static body, times `1 - abs(n.up)` against a chunk. Speed in wu/s. Then `damage = trunc(25 + (min(I,Imax)-Imin) slope + damage)` above Imin, cap 1100; player Imin, Imax 50000, 90000; hits within 60 ms count 0. Above 1098: total loss. Damage bends and drops parts and hides sub-objects, and has **no effect on engine, grip or steering**. Repair changes the number only.

**Evidence.** [sim-world.md](../research/sim-world.md) W1 to W5; [simulation-core.md](../research/simulation-core.md) C7; `damage.ini`.

**Status.**
- Confirmed: all of the above, plane and wall counts parsed from shipped files.
- Inferred: hit speeds ([sim-world.md](../research/sim-world.md) I3), double firing of callbacks (I4).
- Unresolved: `FUN_0050c4e0` (engine pair impulse, not traced); the effect of arg 13 in `FUN_00474d49`, `FUN_00474f46`.

**Port.** Runs as shipped, apart from the traffic share. Nothing in the host except `GetTickCount`, sounds and particles.

**Comparison.** check-driving, no opponents:
- An object on the straight near (-14946, 6362) drops speed from 25.2 to 15.5 m/s with damage 28, and throws the car up. The tool's comment names the owner's object near (-15020, 7570); whether it is the same object was not established.
- A wall hit at 19.5 m/s: 9.4 m/s in one step, damage 0 to 28, then stopped and bouncing back. What it hit, at (-15202, 7219), was not identified as a rail wall.

The input value `I` was not read, so these do not test the damage formula. Neither hit is compared with the original. check-flow and run-bot drive with the bot, which hits things, without measuring it. Same machine code. Not covered: x87 on f64.

## Cameras

**Original behaviour.** Slots `DAT_006c3518[10]` into an array of 10 at `DAT_00719b50`, stride 0x178. Active in a race: slot 0 (player), 5 (finish), 6 (game over, caught). `FUN_004390d0(id)` sets a view on slot 0.

| Id | Offset x, y, z wu | Mode | Damping | Reached by |
|---|---|---|---|---|
| 0 | 0, 30, -80 | -1 | .245, .1, .7 | Key 2, **Statische camera** |
| 1 | 0, 25, -52.5 | -1 | same | Slot init, game over |
| 2 | 0, 38, -55 | -1 | same | No key |
| 3 | 0, 15.5, 12 | -1 | off, car hidden, up from matrix | Key 4, **Bumper camera** |
| 4 | 0, 20, 75 | -1 | keeps previous | Key 3 held, **Achteruitkijk camera** |
| 5 to 9, 0xB | 0, 26, -33 | 1 | k-driven x, z; y .1 | Key 1 and race start for cars 0 to 4, 6, **Dynamische camera**; keys 6, 7, 8, 9 |
| 0xA | 0, 33, -33 | 1 | same | Key 1 for car 5, key 0 |
| 0xC, 0xD | 0, 40, -40; 0, 45, -55 | 1; -1 | | 0xC: key 1 and race start for car 7, reachable since the car update. 0xD: car 8, no route |
| 0xE | free | | | Key U, tweak only |

Update `FUN_004b1380`, per tick, no `dt`:
- Mode 1: above sqrt(150) = 12.2 m/s the camera sits behind the travel direction, at `2*offset.z` (66 wu for -33). `k = clamp(speed*0.01, 0.1, 0.25)`, damp x = k, z = 2.5 k. At the grid the stored vector is (0, 25, -80).
- Other modes: rotate (x, 0, z) with the car, `offset.y` along world Y.
- Damping: `d = eye - prev`, in target object space, `d *= factors`. Time constants at k = .245, .1, .7: 59, 158, 14 ms at 60 Hz, 119, 316, 28 ms at 30 Hz.
- Follow mode +0x7C and target damping +0x70 are written only by the constructor. Dead.

Sequences: start `FUN_0043c5d0` (path flight in `FUN_004632e0` never runs: no `.pth` of type 1); finish `FUN_0043ab70`: fixed eye at chunk +3, y + 40, target player + (0, 20, 0); game over `FUN_0043bc20`: orbit r 52.5, y 25, 4096 units per turn, step `ftol(4096 / ftol(8/dt))` per tick, so one turn takes about 8 s, start -1024, which masks to 3072 ([render.md](render.md), section 29); caught `FUN_0043a690`: fixed eye near the cop. Keys are level-triggered in state 0 through `FUN_004c5e40`. Key 5 is the HUD mode (manual: dashboard), not a camera.

**Evidence.** `functions/004390d0_FUN_004390d0.c`, `00438670_FUN_00438670.c`, `FUN_004b1380`; [sim-world.md](../research/sim-world.md) W6, which corrects [simulation-core.md](../research/simulation-core.md) C8 on mode -1 height; manual `Handleiding`, `Menu.hlp` topic 33.

**Status.**
- Confirmed: all of the above. The orbit is derived from code, not measured.
- Unresolved: nothing that matters for shipped content. `[PLAYER] car` 9 or above has no route: only 0 to 7 are reachable, 7 since the car update, and 0 to 6 on disc 1.01 without updates ([game-content.md](../research/game-content.md) 2.1).

**Port.** Runs as shipped. The host supplies `SetTransform(VIEW)`, read by `D3DRenderer.setTransform`, and blends the view between ticks, see Rendering rate. Keys: all on the keyboard through `GetAsyncKeyState`. Touch and pad cycle keys 1, 2 and 4 from the view in use (`GameInput.nextCameraKey`, reading `DAT_00599c80`). Terugkijken on touch and R3 on a pad hold key 3. Keys 6, 7, 8, 9 and 0, which the manual does not name, are keyboard only.

**Comparison.** reference-wine: the port at 640x480 against the unpatched game's screenshots, same key script, at state 8 + 0.3 s, GO + 4.5 s and GO + 8.5 s (`evidence/reference-wine/side-*.png`). By eye the same framing, camera height and distance. At GO + 8.5 s the car stands within 0.4 m of the original's place at the same speed. reference-frame: first race frame by eye against the owner's screenshot at 4:3, default view. check-race-ui: "touch: Camera goes through 2, 4, 1, and on from what a key chose" (views 0, 3, 5), "touch: Terugkijken holds view 4, the release restores", "gamepad: right stick click holds the view behind". These read the view id, not the framing. check-flow ran the finish camera, framing not compared. No check measured lag. The damping code is the same machine code, and at the same 1/60 tick the same factors apply. The view blend is the port's own, see Rendering rate.

## Field of view and screen shape

**Original behaviour.** `FUN_004b39d0(m, near = 0.5/z, far = 12500, fov = z*pi)`, `z = DAT_006fb974` = 0.375: 67.5 degrees across clip x +-1, near 1.3333. Aspect is not in the matrix: `SetViewport2` `dvClipY = H/W`, `dvClipHeight = 2H/W` (`FUN_004c0e10`), so 0.75 at 640x480: 53.2 degrees vertical. Easing in `FUN_004517f0`: `z += (target - z) dt / rate`, matrix rebuilt each pass until equal. `ChangeFOV` `FUN_00474940`; `pw_fastf` 0.6 over 1 s (108 degrees, near 0.833), back to 0.375 over 0.5 s. No camera mode changes FOV. Tweak keys `+`, `-` scale it, tweak only.

**Evidence.** `functions/004b39d0_FUN_004b39d0.c`, `004517f0_FUN_004517f0.c`; [sim-world.md](../research/sim-world.md) W6 FOV; [render-device.md](../research/render-device.md) sections 3, 4; owner's notes parts 2, 3.

**Status.**
- Confirmed: all.
- Inferred: nothing here.

**Port.** The matrix comes from the game. `source/render/d3d-renderer.js` `updateClipMap` maps clip volume to the view area, with `clipY` from `setViewport`, 0.75 at 640x480: at or above 4:3 keep y +-`clipY` and widen x; below 4:3 keep x +-1 and raise y. `RESOLUTION` 0 gives 0.625, so at 4:3 it fills the view with y stretched 1.2, the port's reading of a monitor of the period ([intentional-differences.md](../intentional-differences.md)); wider views add width at the same `xr` as 640x480. RES 6 (8:5) and 8 (5:4) would take their values the same way; 6 is greyed and 8 has no menu route.

| Aspect | Horizontal | Vertical |
|---|---|---|
| 4:3 | 67.5 | 53.2 |
| 16:9 | 83.4 | 53.2 |
| 800x360, 2.22 | 96.2 | 53.2 |
| 21:9 | 98.9 | 53.2 |
| 3:4 | 67.5 | 83.4 |
| 1:2 | 67.5 | 106.4 |

**Comparison.** reference-wine's three frames at 640x480, by eye, the same framing. reference-frame at 4:3 by eye, first frame only. check-race-ui confirms render sizes and orientation changes, not field of view. Wide and tall framing were not compared with anything, because the original has no such modes.
