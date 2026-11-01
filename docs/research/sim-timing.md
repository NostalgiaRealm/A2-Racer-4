# A2 Racer 4: simulation timing

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: C1, C6.3, I1, I3, I4 rule 3 and two Unknown items (first ring samples, turbo). The rest of the note is as it was written.
>
> **Measured since.** This note is still static analysis, but `spel.dat` has now run under Wine: [`evidence/reference-wine/results.md`](../../evidence/reference-wine/results.md). `L` in C1 and I4 rule 3 measured 8.42 ms (7.86 to 8.94, 15 starts), on that machine with its files on tmpfs, so another machine will differ. Tick 4 was not capped at any rate tried: `dt` 0.0303 at 30, 0.0158 at 60, 0.0084 at 120 and 0.0049 at 240 ticks per second, 0.0030 with no limit. Ticks 1 to 3 were capped, on the clean clock and on the host's. So the lines in I1 that assume 4 capped ticks describe a case that did not occur. At 60 ticks `dt*300` mixes +4 and +5, as I1 says: 21 to 23 ticks to full gas. Under Xvfb, at 317 to 393 ticks per second, the gas hardly rises on a clean clock (highest speed 1.25 to 12.7 m/s in 12 s). Against I4 rule 1, the port's steady `dt` is not one fixed value: it alternates its last bit on purpose, which gives that +4 and +5 mix (`hook!updateClock` in `source/host/race.js`).
>
> The 8-bit path (`3D kaart` off, `RESOLUTION` 0 and 1) was run on an emulated Windows 98 machine and ported after this note was written: [`render-8bit.md`](render-8bit.md) saw the FPS gates in C2 fire there, the `visible_chunks` floor of 15 and the smoke gate `FUN_00446c70`, and in the port the fixed tick keeps them from firing, as I4 rule 4 says.

Scope: timing only. Addresses are VAs in `spel.dat`. A tick is one pass of `handle_game` `FUN_0044cb80`. `dt` is the return value of `FUN_004a6800(0x7128b0)`. A PSI is one Ipion integration step. Vehicle and traffic details are in `sim-vehicle.md` and `sim-world.md`, controls in `input.md`, COM calls in `win32-surface.md`. This file rechecks `simulation-core.md` C1-C4 against `disassembly.asm` and corrects it where noted.

Result: use a fixed **60 Hz** tick, with all time APIs fed from one virtual clock (I3, I4). Static analysis only. The game was not run for this file.

# Confirmed

## C1. Frame clock

Object at `0x7128b0`: +0 QPF ok, +4 f32 frequency (1000.0f if QPF fails, then `timeGetTime`), +8 f32 time in s, +0xC f32 smoothed step.

| Function | Callers | Behaviour |
|---|---|---|
| `FUN_004a65e0` init | `init_main` `0x4581c1` | Ring of 4 f32 at `DAT_00712868`, all `0x3dcccccd` (0.1f), index `DAT_007128c0`. Then one update |
| `FUN_004a6700` update | `0x44cb9e` (start of each tick), `0x4a66ee` (init). No others | `t = counter/freq` in x87; `raw = t - time`, stored f32; `time = (f32)t`; `buf[i] = raw`; `dt = .5*buf[i] + .25*buf[i-1] + .125*buf[i-2] + .125*buf[i-3]`, rounded to f32 after each term (`0x4a676d`-`0x4a67c2`); `i = (i+1) mod 4` |
| `FUN_004a6800` get `dt` | 208 call sites in 114 functions | field `== 0.0` → 0.1f; field `> 0.1` (double at `0x576968`) → 0.1f; else field. No lower clamp, negatives pass |
| `FUN_004a67f0` get time | 18 call sites in 13 functions | +8, f32 seconds on the same counter |
| `FUN_004a6840` reset | `FUN_0044ca80` `0x44cb22` only | Ring back to 0.1f, time resynced, field = 0 |
| Direct reads of +0xC | `0x44de28`, `0x44de49` in `FUN_0044da30` | FPS text `frameRate: %f Real: %f` |

- The field is written only by update and reset, so `dt` is constant within a tick.
- **Start of a race.** `time` starts at 0 (`0x4a644f`), so the init update stores seconds since the counter's origin in `buf[0]`. The load `FUN_0044c200` (`0x4581aa`) runs before clock init (`0x4581c1`), so the first tick stores in `buf[1]` only the time `L` from init to that tick, not the loading time. Nothing resets the clock before the first tick: `DAT_006fb8d8` is set only by the pause and ESC keys (`0x44d9df`, `0x44da10`). Ticks 1 to 3 return the cap 0.1 on any machine up for more than a second. Tick 4 does so only if `0.875 T + 0.125 L` is above 0.1, so `L` above 0.68 s at 60 Hz. `L` measured 8.42 ms (7.86 to 8.94, 15 starts) in the reference runs under Wine, and tick 4 was not capped at any rate tried (`evidence/reference-wine/results.md`).
- **After pause or ESC.** `FUN_0044ca80` runs at the end of the tick and resets. The next ticks read `dt = .5r+.05`, `.75r+.025`, `.875r+.0125`, `r`.
- **Focus loss.** `FUN_00458020` blocks in `WaitMessage` without a clock reset (`simulation-core.md` C2). The next `raw` is the whole gap, so 4 ticks are capped again.
- **`FPSMULT`.** `DAT_005afa48` = 1.0f is labelled by the debug string `vchunks: %d  FPSMULT:%f` (`0x5a1c10`, `0x44de7f`). It multiplies the physics delta only. Written only in `FUN_0044cf90` (±0.01, clamp −1 to 10), inside the tweak block.

The patch README says "about 240 places" call the getter. The real count is 208 call sites, 226 with the time getter. `calls.csv` and `disassembly.asm` agree.

## C2. Callers of `dt`, as classes

By first FPU operation on the returned value (scan of all 208 sites):

| First op | Sites | Meaning | Examples |
|---|---|---|---|
| `FMUL` | 106 | `rate·dt` | 75 and 200 `FUN_00403360`, 300 `FUN_0046f2a0`, 320 `FUN_0046f2e0`, 400 `FUN_00407d90`, 3000 and 1400 `FUN_00438670`, 307.692 LOD |
| `FADD` | 46 | `dt` accumulated into a timer | airtime `FUN_00403170`, spin guard `FUN_0044ea60` |
| `FDIVR` | 24 | `K/dt`, see below | |
| `FLD` | 18 | `dt` kept, another value loaded first | `FUN_0042c710`, `FUN_0042fd40`, `FUN_004517f0` |
| `FSTP` | 8 | `dt` passed or stored | `FUN_0045dc00(dt)` at `0x44cc55` |
| `FSUBR` | 6 | Countdown | `FUN_00414bd0` |

`K/dt` splits three ways. All are correct on a steady tick, and frame counts drift only when `dt` changes after they are set.

| Kind | Sites |
|---|---|
| FPS gate | `FUN_0041cae0` <15 skips AI re-placement; `FUN_0043dd90` ≤12 and `FUN_00446c70` <12 skip spawns; `FUN_0043de00`, `FUN_00446fe0` <10 wipe effects; `FUN_0044cb30` <10 drops `visible_chunks` by 1 per tick, down to 15 (25 if `DAT_006fb8d0`) |
| Frame count, set once and counted per tick | 20/`dt` skid `FUN_00444c40`; 2.5/`dt` sparks `FUN_00445b40`; 4/`dt` clouds `FUN_004469e0`; 6/`dt` `FUN_0043daa0`; 8/`dt` `FUN_0043bc20`; 2/`dt` `FUN_0043fdd0`, `FUN_00440100`; T/`dt` `FUN_0043b7ea`, `FUN_00464b50`, `FUN_004669a0`; 2/`dt` `FUN_0043c885` (dead, C6.4) |
| Fade rate | 0.25/`dt` `FUN_004917b0`; 0.6/`dt` `FUN_00492ac0`, `FUN_00493d60` |

By subsystem (sites/functions): AI `0x400000`-`0x427000` 79/48; car, trailer, wheels `0x427000`-`0x437000` 46/12; world objects, emitters `0x452000`-`0x464000` 23/12; effects `0x43d000`-`0x44c000` 16/12; overlay `0x470000`-`0x4a0000` 12/9; cameras, events `0x437000`-`0x43d000` 9/6; input ramps 9/4; `Gm_main`, `plr_car`, zoom `0x44c000`-`0x452000` 6/5; paths, static anim, script `0x464000`-`0x46f000` 4/4; `FUN_004a8200`, `FUN_004aa0c0` 4/2.

The time getter serves stamps and elapsed checks: `FUN_0042e5b0`, `FUN_0042f220` (`car_snd.cpp`), 0.2 s gate `FUN_00446b60`, bonus durations `FUN_00451250`-`FUN_00451542`, overlay `FUN_004940e0`-`FUN_004950c0`, `FUN_00474450`.

Per-second probabilities are scaled too, for example `FUN_004041d0`: `rand()%100` against `dt·50`. The one per-tick exception found is in C6.1.

## C3. Game clocks and other wall-clock timing

`gm_clock.cpp` `FUN_00448290`-`FUN_004486a0`. All use `GetTickCount` in ms and never the frame clock, so they do not follow the `dt` cap or the physics delta.

18 slots at `0x6fa3e8`, stride 0x14, index checked by `FUN_00448290`: +0 limit, +4 start (−1 = not started), +8 mode (0 counts up and clamps at limit, else counts down and clamps at 0), +0xC init flag, +0x10 pause stamp (0 = running).

API: `FUN_00448610` init (limit, mode; start = −1), `FUN_004482c0` start, `FUN_00448330` pause, `FUN_004483a0` resume (moves start forward by the pause), `FUN_00448470` read, `FUN_00448570` set limit and restart if running, `FUN_004486a0` expired.

| Slot | Use | Mode, limit | Paused by `FUN_0044ca80` |
|---|---|---|---|
| 0 | Lap time: `FUN_00456a30` reads it at each finish-line crossing, `0x456af0` restarts it (`startup-flow.md`). Limit `0x6fa618` table ×1000 (`0x44bf33`) | up | yes |
| 1 | Global traffic light: 5000, 500, 5000 ms (`FUN_004550c0`, `FUN_00455052`), read by traffic `FUN_00414d60` | down | no |
| 2 | `FUN_0043cab0`, `0x43cb86`, `0x43cbca` (200 ms). Init only in dead `FUN_0043c885` | | no |
| 3 | Track time, whole race: init `FUN_004504c0`, started in `FUN_00457ab0`, read and stopped in `FUN_004504f0` | up, 0xFFFFFFF | yes |
| 5 | Work lamp blink 1000/500 ms (`Tob_wlmp.cpp`, `FUN_00455690`) | down | no |
| 7 | Work arrow board blink 1000/500 ms (`tob_wplb.cpp`, `FUN_004557b0`) | down | no |
| 8, 9, 0xA, 0xC, 0xD, 0xE | Per-racer finish time, only if `DAT_006fb964` (`FUN_0042e290`, `FUN_0042e340`) | up, 0xFFFFFFF | yes (`FUN_0042e440`, `FUN_0042e4a0`) |
| 0xB | Time limit (`FUN_0044c8c0`). Limit = `DAT_006fcf8c`, 5000 ms if not positive (`0x44bfb2`); `FUN_00457da0` adds `DAT_006fcf8c` | down | yes |
| 0xF, 0x10, 0x11 | Timed bonus effects (`FUN_00451640`, `FUN_004516d0`, `FUN_00451760`), polled by `FUN_004517f0` in the main loop | down | no |

Other direct `GetTickCount` users (34 functions in total, 6 of them above):

| Threshold | Function, use |
|---|---|
| 60, 300 ms | `FUN_00426fe0` hit lockout, `FUN_00427400` hit sound |
| 100 ms | `FUN_0044e830` skid smoke; `FUN_0044e970` turbo use, so 10 units per second |
| 199, 200 ms | `FUN_004239e0` toggle, `FUN_0043b500` repeat; `FUN_00426530` damage smoke per car |
| 1000, 1500 ms | `FUN_0043bd60`, `FUN_0043ac80` event delays; `FUN_004635a0` latch (stamp `FUN_004632e0`) |
| 2000 ms; blink /100, /200, /300 | HUD messages `FUN_0043f330`, `FUN_0043f440`, `FUN_0043f590`, `FUN_0043fa50`, `FUN_0043fc03` |
| 4000 ms | `FUN_00425730`, `FUN_00425a40` (`car_dmg.cpp`); `FUN_0043a910`, `FUN_0043a980` (`ev_cops.cpp`) |
| 5000 ms | `FUN_0040e5a0` manual reset lockout |
| No threshold | `FUN_004264b0` `srand` seed; `FUN_004414e0`, `FUN_00441510`, `FUN_004415e0` load bar; `FUN_0048abe0` stamp |
| 300, 10000 ms, not traced | `FUN_0044fd22`, `FUN_00450190` |

`QueryPerformanceCounter` is also called by `FUN_0050a5e0` in the Ipion range. `timeGetTime` is used only by the two clock functions. `Sleep` is not imported.

## C4. Ipion stepping

| Function | Exact behaviour |
|---|---|
| `FUN_004aa0c0` | Second smoothing: `n = min(n+1, 50)` (`DAT_00715eac`); first call starts `ema` from `dt` (guard bit `DAT_00715e98 & 1`); `ema = (dt + (n-1)·ema)/n` (`DAT_00715b20`, f32). So a plain mean for 50 ticks, then 49/50. Sets x87 PC bits to 01 (`0x4aa147`-`0x4aa15a`) and does not restore them. Calls the next row with `FPSMULT·ema` |
| `FUN_004a45d0(world, delta)` | `world+0x78 = delta`; `until = delta + world+0x74` in x87; `world+0x74 = (f32)until`; passes the unrounded `until` as a double |
| `FUN_004f8380(env, until)` | `FUN_0050a8d0` statistics latch, then the next row |
| `FUN_0050bfc0` | Sets PC bits to 11 (`OR AH,3`), calls the time manager, restores the word on exit |
| `FUN_0050bd80` (vtable `0x578400`) | `while (until - base > next_event)`: pop event, set env time to `next_event + (f32)base`, run it. Then env time = `until`. **No substep limit** |
| `FUN_0050c020` PSI event | `last = current`; `next = current + env+0xC0`; rebases the heap (`base = last`, events −= last); runs `FUN_004f86f0`; requeues itself |
| `FUN_004f86f0` | PSI body: controllers (`FUN_00500ac0`), collisions, integration |

- Step: `FUN_004a6a10` → `FUN_004a3960(&0x715f58, 0.015151516f)` → `FUN_004a4160` → `FUN_004f7af0`: env+0xC0 = (double)0.015151516f. That is 66 PSIs per second, independent of tick rate.
- With `dt ≤ 0.1` and `FPSMULT` = 1, a tick runs at most 7 PSIs. `FPSMULT` up to 10 raises that, debug only.
- The three stack args that `handle_game` pushes before `FUN_004aa0c0` (`0x44ccd2`-`0x44cce9`) are never read. There is no `[EBP+8..0x10]` access, so the copy loop covers all 1200 active-list pairs regardless of distance.
- Matrices are extrapolated to env time, which is `until` (`simulation-core.md` C3), so the pose moves every tick even if no PSI ran.
- Time values go through f32 twice: `world+0x74` and `(f32)base`. Their resolution falls with race time.

## C5. `handle_game`, in order

Names in quotes are the binary's own log strings (`0x5a1934`-`0x5a1a74`). "Tick" means once per pass with no scaling.

| # | Call site | Call | Purpose | Time basis |
|---|---|---|---|---|
| 1 | `0x44cb9e` | `FUN_004a6700` "gt_update_timer" | Clock | Real clock |
| 2 | `0x44cba3` | `FUN_00469fa0`, `FUN_0046fdb0` | Poll input devices | Tick |
| 3 | `0x44cbdd` | `FUN_004a9870` "rceng_handle_objects" | Handler +0x6C of objects within ±2·`visible_chunks` or flagged +0x68. Player `FUN_0044ea60` (gas, brake, steer, `FUN_00428c70`), AI, traffic | Handler runs per tick; contents mixed, C6 |
| 4 | `0x44cbf2` | `FUN_0041ca20` "ai_check_cars_outside" | Re-places AI out of view | Tick; gate `1/dt ≥ 15`, 20% per tick (C6.1) |
| 5 | `0x44cc01` | `FUN_00438670` "handle_game_cameras" | Camera keys, `FUN_004b1380` | Keys `dt`·3000, ·1400; follow lag per tick (C6.1) |
| 6 | `0x44cc06` | `FUN_004509b0` | 3D listener | Tick |
| 7 | `0x44cc55` | `FUN_0045dc00(dt)` | Particle emitter update | `dt` |
| 8 | `0x44cc5a` | `FUN_0044e830` | Skid sound, smoke | Sound tick; smoke ≥100 ms wall |
| 9 | `0x44cc6c` | `FUN_00444de0` | Skidmark strip | Tick (C6.1) |
| 10 | `0x44cc81` | `FUN_0044cf90` "check_game_keys" | Reset, HUD, pause, tweak keys | Tick |
| 11 | `0x44cc8b` | `FUN_00427130` | Damage smoke | ≥200 ms wall per car |
| 12 | `0x44cc90` | `FUN_0044c950` | Total loss, damage > 1098 | Tick |
| 13 | `0x44cc9a` | `FUN_004031e0` vs `RESETWAITTIME` (10) | Airtime message | `dt` accumulated |
| 14 | `0x44ccc2` | `FUN_0044da30` "render_game" | Draw. Also advances effects (`FUN_00446fe0`, `FUN_0043de00`, `FUN_0045dce0`, `FUN_00445180`, `FUN_00440160`) | Mixed |
| 15 | `0x44ccea` | `FUN_004aa0c0` | Physics step, then copies matrices and local velocity | `ema` |
| 16 | `0x44ccef` | `FUN_00464cf0` | Path triggers on chunk change | Event |
| 17 | `0x44ccf4` | `FUN_00464cb0` | Path animations via table `0x5a64d0` | Frame counts from `T/dt` |
| 18 | `0x44cd03` | `FUN_0043c260` "handle_game_actions" | 13 event slots | Per slot |
| 19 | `0x44cd08` | `FUN_0044c8c0` | Time limit, tick sound below 6 s | Wall clock |
| 20 | `0x44cd30` | `0x4409c0` "draw_2d_display" if `DAT_006fb920 == 0` | Debug dashboard | Tick |
| 21 | `0x44cd35`, `0x44cd3c` | `FUN_00472230`, `FUN_00471bd0` | Race console | Tick |
| 22 | `0x44cd4e` | `FUN_0044df10` "update_game_screen" | Present: `Flip(NULL, DDFLIP_WAIT)`, or blit when no back buffer | Blocks on the flip |
| 23 | `0x44cd53` | `FUN_0044cb30` | View distance governor | `1/dt < 10` |
| 24 | `0x44cd58` | If `DAT_006fb8d8`: `FUN_0044df10` ×2, `FUN_0044ca80` | Pause or quit dialog, clock reset | Blocking, no message pump |
| 25 | `0x44cd80` | `DAT_006fb8dc += 1` | Frame counter. Read only by log `FUN_00419300` and guard `FUN_0044f100`, so no rate effect | Tick |

Main loop after each pass: `FUN_004517f0` (bonus timers, zoom by `dt`), `FUN_0044e180` (log count), `FUN_00458020` (message pump), Ctrl+F10 screenshot, `FUN_0041c150` (cop radio).

Order consequences: input in tick N reaches `ctrl` in step 3, the physics in step 15, and the screen in step 14 of tick N+1. Render shares the tick, so the simulation rate is also the draw rate.

Present is the only pacing. With `DAT_005b37a8 = 1` (one back buffer, default in fullscreen, `win32-surface.md`) `Flip` has no `DDFLIP_NOVSYNC`. `WAITVBL` is 0 as shipped.

## C6. Logic not scaled by `dt`

### C6.1 Reachable, per tick

| Code | Effect per tick | Constant |
|---|---|---|
| `FUN_00428950` (traffic FSM, `ai_nwtrf.cpp`, handler `FUN_00421f50` set at `0x4162a0`, passed at `0x427759`, `0x466e84`) | Lateral velocity impulse R·(−m·vx, 0, 0) at a local point; down impulse (0, −m·\|vz\|·0.12, 0) at origin. Both ×0.1 in `FUN_004a4180` | 0.1, 0.012 |
| `FUN_00415e40` (`FUN_004161d0`, handler set at `0x465d57`) | Same two impulses | 0.1, 0.012 |
| `FUN_0042fd40` (`car_trailer.cpp`, handler `FUN_004319a0` passed at `0x43141d`) | Local impulses when towing. On the player car if `param_1[1] == DAT_006fba58`: factors −0.98·m, 1.96·m, and −`vz`·2000 in reverse. `FUN_00430860` adds one more | `functions/0042fd40_FUN_0042fd40.c:130-158` |
| `FUN_004b1380` chase damping (`DAMPENING_is_ON`) | Position lerp per tick in the target's frame. x = clamp(speed·0.01, 0.1, 0.25), z = 2.5·x, y = field +0x8C | 0.1, 0.25, 2.5 |
| `FUN_004b1380` follow mode (`FOLLOW_MODE_is_ON`) | Delay ring of 5 ticks (`0x4b1380`, wraps at `4 < idx+1`) | 5 |
| `FUN_00444d20` skidmark | +2 vertices per tick; stops at 98, so 49 ticks. Spacing is v/tick rate | 100 limit |
| `FUN_0041cae0` | `rand()%10 < 8` returns, so a 20% chance per tick | 8/10 |
| `FUN_00428c70`, `FUN_004a2f70` | Friction, torque, steering angle, gear written once per tick, read per PSI | Update rate only |
| `_DAT_006c2f30 += vz` in `FUN_0044ea60` | Sum for a log average (`0x419388`) | No game effect |

### C6.2 Scaled by `dt`, then truncated to int

`__ftol` truncates toward 0.

| Code | Formula | Effect |
|---|---|---|
| `FUN_0046f2a0` (gas), called from `FUN_0046f530` | `gas = min(100, (int)(gas + dt·300))`, 0 on release | Below 1/300 s per tick the term never adds: gas stays 0 above 300 Hz |
| `FUN_0046f2e0` (brake) | Same with `dt·320` | Stalls above 320 Hz |
| `FUN_00469c63` (`anm_type.cpp`, entered through `FUN_00469c60`, called from `0x45366a`, `0x453693`) | `if (timer < frame_ms) timer += (int)(dt·1000); else { next frame; timer = 0 }` | Per frame: `ceil(frame_ms / (int)(dt·1000)) + 1` ticks. `anmtypes.ini` holds 30 to 800 ms frames |
| `FUN_00458e20`, `FUN_0045a040`, `FUN_0045a890`, `FUN_0045be90`, `FUN_0045c8a0`, `FUN_0045edc0`, `FUN_00460a30`, `FUN_004613e0`, `FUN_00461c30` | Particle count `(int)(base − dt·307.692)`, base 15, 20, 25, 35 or 40, floor 1 in some | Cosmetic count, deliberately rate-dependent. 307.692 = 20/0.065 |
| `FUN_00430ea0` (trailer) | 0-255 value `(int)(a ± dt·128)` | Stalls above 128 Hz when rising |
| `FUN_00436dc0` (`car_whl.CPP`) | `(int)(dt·6000)` added to 3D object +0x78 | Loses the fraction per tick |

### C6.3 Scaled by `dt`, through the actuator

Turbo, `FUN_00428c70` `0x428f35`-`0x428ffa`, while `ctrl+0x19 == 1`, `car+0xC4 < 60`, airtime ≤ 0.5 s: vector `(0, 0, dt·m·(0.025·|vz| + 0.5)·25)` goes to `FUN_004a2000` → `FUN_004a5c70`. `FUN_004a5ce0` (actuator controller, vtable `0x577324` slot 4, priority 0x5DC) takes a rotated copy each PSI, normalises the stored vector in place through `FUN_004f9680` (`0x4a5d9c`), and applies the copy with no time factor. So one PSI gets the full value, and every later PSI length 1 until the next set. The value has `dt` in it and lands once per set, so up to 66 Hz, with tick rate f:

`force per second = f·dt·m·25·(0.025·|vz| + 0.5) = 25·m·(0.025·|vz| + 0.5)`

`m` here is `car_cfg.ini` Mass (`1/car+0xB0`), while the body's mass is VDYNS 0x000 (`simulation-core.md`, `sim-world.md`), so Δv also scales by their ratio. Force does not depend on the tick rate up to 66 Hz. Above 66 Hz sets overwrite each other and it falls by 66/f.

The same actuator carries traffic thrust and turn (`FUN_00428950`, `FUN_00415e40`). Those vectors have no `dt` and also land once per set, so traffic thrust grows with the tick rate up to 66 Hz.

### C6.4 Not reachable, so no effect

| Code | Evidence |
|---|---|
| `FUN_00428250`, named in the patch README | Only callers are `FUN_00428320` and `FUN_00428707`. A scan of the file finds no CALL, JMP or pointer to either. Its magnitudes `DAT_006b2ae0`, `DAT_006b2ae4` have no direct write |
| `FUN_00431700` (trailer impulse) | No CALL, JMP or pointer |
| `FUN_00402fa0` (`x = (int)(x − dt)`) | No CALL, JMP or pointer |
| `FUN_0046f330` | Already in `input.md` |
| `FUN_0043c885` (`(int)(2/dt)` into a 100-entry array, overflow above 50 Hz) | No CALL, JMP or pointer, as in `simulation-core.md` C4 |

Correction to the patch README: of its three "pushes", `FUN_00428950` and `FUN_00415e40` act on traffic only, and `FUN_00428250` never runs. Of the two game-side impulse wrappers `FUN_004a9830` and `FUN_004a97f0`, the player car is reached only through the trailer code.

# Inferred

## I1. Values at each tick rate

Direct arithmetic from C4-C6 plus a Python replica of the clock, the EMA and the PSI loop (f32 stores, x87 modelled as double, QPC from 0 at 10 MHz). The game was not run. The exact f32 noise pattern depends on x87 precision.

| | 30 Hz | 40 Hz | 50 Hz | 60 Hz | 66 Hz |
|---|---|---|---|---|---|
| PSIs per tick | 2 or 3 (2.20) | 1 or 2 (1.65) | 1 or 2 (1.32) | 1 or 2 (1.10) | 1 |
| Gas step, `dt·300` | 10, noise 9-10 | 7.5 → 7 | 6, noise 5-6 | 5, noise 4-5 | 4.5 → 4 |
| Gas 0 to 100 | 0.367 s | 0.375 s | 0.36-0.38 s | 0.37-0.38 s | 0.379 s |
| Brake 0 to 100 | 0.333 s | 0.350 s | 0.340 s | 0.333 s | 0.379 s |
| `(int)(dt·1000)` | 33 | 24-25 | 19-20 | 16 | 15 |
| 50 ms anim frame | 100 ms | 75-100 ms | 80 ms | 83 ms | 76 ms |
| Particles, base 15 and 35 | 4, 24 | 7, 27 | 8, 28 | 9, 29 | 10, 30 |
| Turbo coefficient `f·dt·25`, one full value per set (C6.3) | 25 | 25 | 25 | 25 | 25 |
| Turbo force, m/s² at `vz`=0 and 30, if body mass = cfg Mass | 12.5, 31.3 | 12.5, 31.3 | 12.5, 31.3 | 12.5, 31.3 | 12.5, 31.3 |
| Traffic lateral decay, τ = 9.5 ticks, if body mass = cfg Mass | 0.32 s | 0.24 s | 0.19 s | 0.16 s | 0.14 s |
| Traffic down Δv per second at 20 m/s (0.012·20·f) | 7.2 | 9.6 | 12 | 14.4 | 15.8 |
| Skidmark strip, 49 ticks | 1.63 s | 1.23 s | 0.98 s | 0.82 s | 0.74 s |
| Chase lag x at a=0.25 (3 ticks); z (0.6 ticks) | 100, 20 ms | 75, 15 ms | 60, 12 ms | 50, 10 ms | 45, 9 ms |
| Input to draw | 33 ms+ | 25 ms+ | 20 ms+ | 17 ms+ | 15 ms+ |
| Physics ahead of wall clock after start, with 4 capped ticks (C1) | +1.17 s | +1.33 s | +1.42 s | +1.48 s | +1.51 s |

Other computed points:

- Above 120 Hz: gas needs 0.417 s at 120 and 240 Hz, and at 301 Hz gas never reaches 100.
- PSIs per wall second stay within 0.2% of 66 at all five rates over 25 minutes.
- With 4 capped ticks, at 60 Hz the physics delta in ticks 1 to 8 is 0.1, 0.1, 0.1, 0.1, 0.083, 0.072, 0.064, 0.058 s, with 4 to 7 PSIs per tick. The offset then stays, because physics and wall clock advance alike. With 3 capped ticks physics leads by 1.16 s at 60 Hz and 0.92 s at 30 Hz.
- `dt` noise from f32 `time` at 60 Hz: ±2 µs in the first minute, ±30 µs at 20 minutes, never negative. This assumes QPC starts at 0, as in patch part 9.

The patch README's "at about 450 FPS it reaches only 8.3" and "why is not established" is most likely the gas truncation in C6.2: at 450 Hz `dt·300` = 0.67, so gas rises only on a `dt` spike and then holds. It fits 390 FPS too, and fits 30-240 FPS staying equal. Not tested here. Measured later under Wine, see the note at the top.

## I2. What rate each constant seems tuned for

| Item | Reading |
|---|---|
| PSI 1/66 s | Ipion's own step; the env constructor `FUN_004f7320` sets the same value. Not a game tuning |
| Turbo `·25` | If read as a per-frame impulse, `dt·25 = 1` at 25 Hz. A hint of a reference near 25 FPS, weak |
| FPS gates 10, 12, 15; ring start 0.1 | Floors: the code treats 10-15 FPS as too slow, and expects to run above them |
| LOD 20/0.065 | Base 20 reaches 0 at 15.4 FPS, the same floor |
| `2/dt` into 100 entries (dead code) | Written when frame rates stayed ≤50, otherwise it would have overflowed. Weak, the code was cut |
| Gas and brake 300, 320 | Intent: about 1/3 s to full. Holds from 30 to 240 Hz, so no specific rate |
| Traffic 0.1 and 0.012 per tick | Down impulse equals gravity at `|vz|·f` ≈ 817: 27 Hz at 30 m/s, 41 Hz at 20 m/s, 58 Hz at 14 m/s. Traffic speeds not checked here, so no firm rate |
| Camera 0.1-0.25, strip 49, follow 5 | No rate can be derived. They shrink linearly in time as rate rises |
| `Flip` without NOVSYNC | Original tops out at refresh in fullscreen, and double buffering holds it to refresh/n. So 60 and 30 on a 60 Hz mode, 75 or 37.5 or 25 on 75 Hz. 15, 12 and 10 are also 60/4, 60/5, 60/6, which may or may not be a coincidence |

Taken together: the code runs free between about 15 FPS and refresh, and no single rate is designed in. Per-tick values were likely tuned on 2000-era machines at around 25-40 FPS, but nothing in the binary proves this.

## I3. Fixed tick: evidence for and against

| Rate | For | Against |
|---|---|---|
| **30 Hz** | Plausible period rate (60/2). Traffic impulses, skid length and camera lag sit near what a mid-range period PC showed. Integer mapping to 60 Hz displays. Patch README: same car model at 30 FPS | Visible 30 FPS, since draw equals tick. Double input delay. Control values refreshed only every 2.2 PSIs. Owner's released fix caps at 60, not 30. Anim 50 ms frames take 100 ms |
| **40 Hz** | Middle traffic values. `dt·320` and `dt·1000` near integer | No support in the binary. Uneven cadence on 60 Hz (2,1,2,1 vsyncs). Near-integer values add noise |
| **50 Hz** | The dead `2/dt` array fits exactly (100). `dt·1000` = 20. Mid values | Evidence is dead code only. Uneven cadence on 60 Hz (5 ticks per 6 vsyncs). Near-integer gas and anim noise |
| **60 Hz** | Owner's shipped `frame_limit` is 1/60, with clock tests under Wine, and the car model is equal from 30 to 240 FPS. A period machine could reach it on a 60 Hz mode (C5). 1:1 with most displays, no pacing tricks. Lowest input delay of the four. Ticks almost match PSIs, so tyre, steering and gear are fresh nearly every PSI. Brake and gas ramps within 0.33-0.38 s. `(int)(dt·1000)` is a stable 16 | Traffic thrust, down impulse and lateral kill twice as strong per second as at 30 Hz. Skid strip and chase lag half as long. Two PSIs on every tenth tick. `dt·300` near 5 gives a 4 or 5 mix |

**Choice: 60 Hz.** The player car is the same across 30-240 FPS (owner's test), and the rate-sensitive items have no canonical value because the original ran free. 60 Hz matches the owner's released behaviour and the display, and needs nothing added to the game. The main cost is traffic differing from a slower period machine; turbo does not depend on the tick rate up to 66 Hz (C6.3). Only runtime comparison can judge that (Unknown). The overflow above 50 Hz in `FUN_0043c885` is no obstacle, because that code is dead.

66 Hz was not asked for, but it locks one PSI per tick. It does not fit common displays and has no behavioural evidence for it, so it is not recommended.

## I4. Host rules that follow

1. One `handle_game` per tick, virtual time advancing exactly 1/60 s per tick. Feed `QueryPerformanceCounter`, `timeGetTime` and `GetTickCount` from that same time, so `dt` is steady and the race timers stay in step with the physics.
2. `QueryPerformanceFrequency` succeeds, with a value exact in f32 (for example 10 000 000). QPC starts near 0 at process start, not from `Date.now()`, because `time` is f32 (patch part 9).
3. Keep the capped start: give the first ring sample a value that stands for the counter's uptime, so ticks 1 to 3 are capped as on any machine up for more than a second. The second sample stands for `L`, the time from clock init to the first tick (C1). `L` measured 8.42 ms on that machine and tick 4 was not capped at any rate tried, so the port feeds 8.4 ms and caps 3 ticks (`INIT_TO_FIRST_TICK` in `source/host/race.js`). Physics leads the wall clock by about 1.16 s with 3 capped ticks and 1.47 s with 4, at 60 Hz.
4. Behind real time: run extra ticks with D3D calls no-oped and present once, because `render_game` also advances effects. Limit extra ticks per rAF, then let virtual time slip. `dt` stays 1/60 in that case, so the FPS gates in C2 never fire after the start and the view distance governor will not help on a slow device.
5. Tab hidden: stop virtual time. This differs from the original, where `GetTickCount` kept running while inactive and `raw` then jumped, so document it as an intentional change.
6. Displays other than 60 Hz: tick by accumulated time, not per rAF, or the game speed follows the display.
7. A deterministic virtual clock makes the `srand` seed in `FUN_004264b0` fixed. Add real entropy to the seed unless replay tests need it fixed.

# Unknown

- **The frame rate the developers tuned at, and typical period rates.** No string or table gives it. `dynamic/RESULTS.md` has no FPS data.
- **How turbo push stops: settled.** `FUN_004a5c70` is the only writer of the actuator vector, through `FUN_004a2000`. The player path writes it only while turbo is active, and nothing clears it, but `FUN_004f9680` normalises it in place at `0x4a5d9c`. After the last set a unit vector stays: about 66 N (C6.3).
- **Turbo strength in practice.** Depends on VDYNS mass against `car_cfg` Mass per car. The m/s² row in I1 assumes they are equal.
- **30 Hz against 60 Hz in play:** traffic stability under the down impulse (patch README notes vehicles stuck on their side). Needs a comparison run.
- **x87 PC=01 behaviour.** `FUN_004aa0c0` selects the reserved value and leaves it set outside Ipion. Effect on the clock's rounding on real CPUs, and whether the recompiler models it, not established.
- **AI per-function audit.** C2 classifies by first FPU op, not by reading all 79 AI sites. Only `FUN_0041cae0` was found as a per-tick probability, but this list is not exhaustive for integer counters in AI state machines.
- **Trailer use:** which levels spawn `car_trailer.cpp` vehicles was not checked.
- **`FUN_0043cab0`** and slot 2: reached from `0x43cb60`, whether that path runs without init from dead `FUN_0043c885` was not traced.
