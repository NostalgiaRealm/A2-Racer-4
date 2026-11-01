# Simulation core of `spel.dat`

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: C4, C5, I4, I6 and Unknown (turbo). The rest of the note is as it was written.

Timing, vehicle dynamics, input-to-car, collisions and damage, cameras, and the state map for the renderer and tests.

Notation: all addresses are VAs in `spel.dat` (image base `0x400000`). `FUN_x` is the Ghidra name. A "tick" is one pass of `handle_game` (`FUN_0044cb80`). `dt` is the value returned by `FUN_004a6800`. World units are the render units, physics units are metres: `phys = (0.1·x, −0.1·y, 0.1·z)` (`FUN_004a4180`, scale `DAT_005af184` = 0.1f, inverse `FUN_004a41b0`). World is Y-up, physics is Y-down (gravity `+9.81` on physics Y).

Two corrections to the brief: `0x004a3460` is the collision-ID allocator, not a world function, and `0x004a4600` only writes `PhysicsReport.txt`. The world is initialised in `FUN_004a3960` and stepped through `FUN_004a45d0`.

---

# Confirmed

Evidence is code, strings, INI or data as cited. Numbers in this section are read from the binary or data files, or are direct arithmetic on them.

## C1. Clock (`tmg_main.cpp`)

Clock struct at `0x007128b0`:

| Offset | Type | Meaning |
|---|---|---|
| +0x0 | i32 | QPF succeeded (0 means `timeGetTime` path) |
| +0x4 | f32 | frequency (`1000.0f` if QPF failed) |
| +0x8 | f32 | time in seconds. Getter `FUN_004a67f0`, 13 callers |
| +0xC | f32 | smoothed step. Getter `FUN_004a6800`, 114 callers, 208 call sites |

- **Init** `FUN_004a65e0`, from `init_main`: allocates `g_elapsed_buffer` (string in `FUN_004a6470`), pointer `DAT_00712868`, 4 f32, all `0x3dcccccd` (0.1f). Ring index `DAT_007128c0`.
- **Update** `FUN_004a6700` (assert string `UpdateTimes`), first call in `handle_game`:
  ```
  t   = (f32)counter / freq          // x87 then rounded on store
  raw = t - time;  time = t          // both stored as f32
  buf[i] = raw
  dt  = 0.5*buf[i] + 0.25*buf[i-1] + 0.125*buf[i-2] + 0.125*buf[i-3]   // stored to f32 after each term
  i   = (i+1) & 3
  ```
- **Getter** `FUN_004a6800`: `dt == 0 → 0.1`; `dt > 0.1 → 0.1`; otherwise `dt`. Negative values pass through. Constants: `0x576338` = 0.1f, compare against double 0.1 at `0x576968`.
- **Reset** `FUN_004a6840` (assert string `reset`): refills the ring with 0.1f, resyncs `time`, sets the field to 0. Only caller: `FUN_0044ca80`, after pause or quit dialog.
- **Second smoothing**, only for physics, in `FUN_004aa0c0`: `n = min(n+1, 50)` (`DAT_00715eac`), `ema = ((n−1)·ema + dt)/n` (`DAT_00715b20`, f32; first call starts from `dt`, guard bit `DAT_00715e98 & 1`). Delta passed to the world is `DAT_005afa48 · ema`.
- `DAT_005afa48` = 1.0f. Only changed by COMMA/PERIOD (±0.01, clamp −1 to 10) in `FUN_0044cf90`, inside the tweak block (`DAT_006fb950 != 0`).

Other time sources:

| Source | Users | Use |
|---|---|---|
| `GetTickCount` | 34 functions | Race timers `FUN_00448290`–`FUN_004486a0` (18 slots at `0x6fa3e8`, stride 0x14; ms). Turbo 100 ms, skid smoke 100 ms, hit lockout 60 ms, hit sound 300 ms, damage smoke 200 ms, manual reset lockout 5000 ms. `srand` seed in `FUN_004264b0` |
| `QueryPerformanceCounter` | `FUN_004a6700`, `FUN_004a6840`, `FUN_0050a5e0` | Clock; `0x50a5e0` is in the Ipion range |
| `GetSystemTimeAsFileTime` | `FUN_00559348`, 9 callers | FPS log at exit, script and Ipion-range callers |

`Sleep` is not imported. `WAITVBL` from `game.ini` (0 as shipped) goes to `DAT_006fb8e4`; if set, `render_game` calls `WaitForVerticalBlank` (DirectDraw vtable +0x58). `FUN_004c41e0` presents by `Flip(0, DDFLIP_WAIT)` when `DAT_005b37a8 != 0`, otherwise by blit.

## C2. Main loop

`WinMain` `FUN_00458270`, while `DAT_006fb89c != 0`:

1. `handle_game` `FUN_0044cb80`
2. `FUN_004517f0`: bonus timers 0xF, 0x10, 0x11 expire (`FUN_004516a0`, `FUN_00451730`, `FUN_004517c0`). Eases zoom: `z += (target − z)·dt / time`, then resets the projection when `z != target`
3. `FUN_0044e180`: frame count +1 (log only)
4. `my_handle_win_msg` `FUN_00458020`: `PeekMessage`. While `DAT_00740dfc == 0` (window inactive) it blocks in `WaitMessage`; on return it restores surfaces. It does not reset the clock
5. Ctrl+F10: screenshot `FUN_00458400`
6. `FUN_0041c150`: cop radio state machine

`handle_game`, in order. Names in quotes are from its log strings, the rest are mine.

| # | Call | Purpose | Time basis |
|---|---|---|---|
| 1 | `FUN_004a6700` "gt_update_timer" | Clock | real clock |
| 2 | `FUN_00469fa0` + `FUN_0046fdb0` | Poll all input devices (`FUN_004ea7d0`) | per tick |
| 3 | `FUN_004a9870` "rceng_handle_objects" | Runs object handler (object +0x6C) for objects within ±2·`visible_chunks` of the player, or flagged +0x68. Player handler is `FUN_0044ea60` | mixed, see C7 |
| 4 | `FUN_0041ca20` "ai_check_cars_outside" | Re-places off-screen AI | per tick |
| 5 | `FUN_00438670` "handle_game_cameras" | Camera keys, update, view matrix | per tick, no `dt` in `FUN_004b1380` |
| 6 | `FUN_004509b0` | 3D sound listener | per tick |
| 7 | `FUN_0045dc00(dt)` | Particle emitters | `dt` |
| 8 | `FUN_0044e830` | Skid sound; skid smoke | sound per tick, smoke ≥100 ms |
| 9 | `FUN_00444de0` | Skidmark strip for player | per tick, see C7 |
| 10 | `FUN_0044cf90` "check_game_keys" | Reset, HUD, pause, tweak keys | per tick |
| 11 | `FUN_00427130(&0x5d3460)` | Damage smoke for all cars above `clouds` level | ≥200 ms per car |
| 12 | `FUN_0044c950` | Total loss: damage > 0x44A (1098) in state 0 → state 6 | per tick |
| 13 | `ctrl+0x30 > DAT_005a16fc` | Airtime above `RESETWAITTIME` (10) → message `DAT_0059becc = 0x44` | `dt`-accumulated |
| 14 | `FUN_0044da30` "render_game" | Draws the scene. Also advances effects, see C7 | mixed |
| 15 | `FUN_004aa0c0` | **Physics step**, copies matrices and local velocity | EMA of `dt` |
| 16 | `FUN_00464cf0` | Path triggers when player chunk changes | event |
| 17 | `FUN_00464cb0` | Active path animations | handlers use `dt` |
| 18 | `FUN_0043c260` "handle_game_actions" | 13 event slots | per slot |
| 19 | `FUN_0044c8c0` | Time-limit timer 0xB; tick sound under 6 s | ms timer |
| 20 | `thunk_FUN_0043f8a0` "draw_2d_display" if `DAT_006fb920 == 0` | Debug dashboard text | per tick |
| 21 | `FUN_00472230`, `FUN_00471bd0` | Race console | per tick |
| 22 | `FUN_0044df10` "update_game_screen" | Present | per tick |
| 23 | `FUN_0044cb30` | In state 0, while `1/dt < 10`: `visible_chunks −= 1` per tick down to 15 (25 if `DAT_006fb8d0`) | threshold on `dt` |
| 24 | if `DAT_006fb8d8`: `FUN_0044df10`×2, `FUN_0044ca80`, clear | Pause or quit dialog, then clock reset | blocking |
| 25 | `DAT_006fb8dc += 1` | Frame counter; read only by `FUN_00419300` (log) and `FUN_0044f100` | per tick |

Blocking code inside a tick: `FUN_0044c990` (P pause) and `FUN_0044c9f0` (ESC; J or Y quit, ESC or N resume) spin on `GetAsyncKeyState` with no message pump.

Consequence of the order: the camera (5) and the render (14) both use the pose from the previous tick's step (15).

## C3. Ipion stepping

| Step | Function | What it does |
|---|---|---|
| World init | `FUN_004a6a10` → `FUN_004a3960(&0x715f58, 0.015151516f)` | Log "Initializing Physical World". Allocates collision IDs, environment named `davilex`, gravity (0, 9.81, 0), materials |
| Step size | `FUN_004a4160` → `FUN_004f7af0` | env+0xC0 = (double)0.015151516f, env+0xC8 = 1/dt. The env constructor `FUN_004f7320` first sets the double `0x3f8f07c1f07c1f08` (1/66) and gravity 9.83 |
| Advance | `FUN_004aa0c0` → `FUN_004a45d0(world, delta)` | world+0x78 = delta; world+0x74 += delta (**f32 accumulator**); calls `FUN_004f8380(env, (double)world+0x74)` |
| Until | `FUN_004f8380` | `FUN_0050a8d0` (1 s statistics latch), then `FUN_0050bfc0` |
| FPU | `FUN_0050bfc0` | Sets x87 precision bits to 11 (`OR AH,3`) for the call, restores after |
| Event loop | `FUN_0050bd80` (vtable `0x578400`) | Pops events from the time-ordered heap while next event < until. Sets env current time to each event, then to `until` |
| PSI event | `FUN_0050c020` (vtable `0x57889c`) | env+0x130 = current; env+0x128 = current + env+0xC0; rebases the heap; runs `FUN_004f86f0`; re-queues itself |
| PSI body | `FUN_004f86f0` | `FUN_00500ac0` (controllers, each `vtable+0x10`), then `FUN_005023f0`, `FUN_005024e0`, `FUN_0053abe0`, `FUN_0053abc0` |

- **Step rate is fixed** at 0.015151516 s per PSI, 66 per second. PSIs per tick = whatever fits before `world+0x74`. With the 0.1 cap on `dt` that is at most 6.6 per tick. There is no separate substep limit.
- `FUN_004aa0c0` also sets x87 precision bits to 01 before the step (`AND 0xfcff`, `OR 0x100`) and does not restore them.
- Copy after step: for each entry in the active list `0x7128c8` (pairs flag, object index; loop ends at `0x714e4c`, so 1200 pairs), if object has physics (+0x18 == 1), a physical object (+0x10), and `phys+0x24 != 0`:
  - 3D object matrix +0x10 = `FUN_004a1e20` (physics matrix converted to world). Rows are right, up, forward, position.
  - 3D object +0x50..58 = translation row.
  - object +0xBC..C4 = `FUN_004a1ea0` (physics velocity, Y flipped, no scale, so m/s) rotated by inverse matrix, so local velocity. +0xC4 is forward m/s.
  - `FUN_004a6c90` updates current and previous chunk.
- **Matrices are extrapolated, not stored at PSI time:** `FUN_004f2b10` → `FUN_004f2c40(env current time)`; `FUN_004f3c20` integrates core position and quaternion from the last PSI to that time. So at frame rates above 66 the rendered pose still moves each frame.

Environment fields used: env+0x120 current time, +0x128 next PSI, +0x130 last PSI, +0x138 time code, +0xC0 PSI step, +0xD0/D8/E0 gravity (double).

## C4. Frame-rate behaviour, mechanisms

| Behaviour | Code | Mechanism | Effect of a different tick rate |
|---|---|---|---|
| Rigid body integration | C3 | Fixed PSI | None while summed time is equal |
| Physics time | `FUN_004aa0c0` | 50-sample EMA | After a rate change, physics time lags or leads wall time for about 50 ticks. Race timers use `GetTickCount`, so they do not follow it |
| Gas ramp | `FUN_0046f2a0` | `gas = trunc(gas + dt·300)`, cap 100, 0 on release | Truncation. Stalls at 0 for `dt·300 < 1` (above 300 Hz) |
| Brake ramp | `FUN_0046f2e0` | `brake = trunc(brake + dt·320)`, cap 100, 0 on release | Same, stalls above 320 Hz |
| Key steering ramp | `FUN_0046f530`, `FUN_004f0df0` | Rate 2·`dt` per poll on 0..1 | Time-correct, no truncation |
| Camera lag | `FUN_004b1380` | Per-tick factor, no `dt` | Time constant scales with tick period |
| Turbo push | `FUN_00428c70`, `FUN_004a5ce0` | `dt·m·(0.025·|v|+0.5)·25` stored per tick. Full strength on the next PSI only, because `FUN_004f9680` (`0x4a5d9c`) normalises the stored vector in place; length 1 on later PSIs | Force independent of the tick rate up to 66 Hz; above that it falls by 66/f |
| Traffic impulses | `FUN_00428950`, `FUN_00415e40` via `FUN_004a9830` → `FUN_004a19c0` | Per tick: lateral velocity kill; down impulse `m·|vz|·0.12` (then ×0.1 in `FUN_004a4180`) | Downforce proportional to tick rate. Lateral kill: longer slip at low rate |
| Tyre friction, torque, steering angle | `FUN_00428c70` | Written once per tick, read per PSI | Update rate only |
| Gear | `FUN_004a2f70` | Recomputed per tick from wheel speeds | Update rate only |
| Skidmark strip | `FUN_00444d20` | +2 vertices per tick, limit 100 | Strip ends after 49 ticks, so length proportional to period |
| Effect lifetime | `FUN_00444c40` 20/`dt`; `FUN_00445b40` 2.5/`dt`; `FUN_004469e0` 4/`dt`; `FUN_0043daa0` 6/`dt` | Frame count taken from `dt` at spawn, then per tick | Correct if `dt` is steady |
| Low FPS cut | `FUN_00446fe0`, `FUN_0043de00`, `FUN_0044cb30` | At `1/dt < 10`: clouds and "bwlk" effects wiped, view distance shrinks | Only below 10 FPS |
| Spin guard, airtime | `FUN_0044ea60`, `FUN_00403170` | `dt`-accumulated | None |
| AI | `ai_*.cpp` | About 40 functions call `dt`: rates such as `dt·75`, `dt·200`, `dt·400` | Mostly time-based; not audited per function |

`render_game` is not free of simulation: `FUN_00446fe0` updates clouds (`FUN_004467d0`) while drawing, `FUN_0043de00` does the same for its effect, and `FUN_0045dce0`, `FUN_00445180`, `FUN_00440160` run in the same pass.

`FUN_0043c885` (`ev_tank.cpp`, fuel station) stores `(int)(2.0/dt)` camera points into a 100-entry array at `0x6c3bac` (`FUN_0043c740`), which overflows above 50 FPS. Its address is not referenced anywhere: a raw scan of the file for pointers to `0x43c870`–`0x43c88f` finds none, and the nine `FUN_0043c120` registrations do not include it.

## C5. Vehicle model

### Which model runs

`FUN_004a2590` (vehicle init, vtable `0x577234`) chooses by byte desc+0x258:

- 0 → `FUN_004fc4f0`: **constraint car** with real wheel bodies (vtable `0x578568`).
- not 0 → `FUN_004a5e70`: `PhysicalRayController` (raycast car; `FUN_004a60f0`, `FUN_004a5ef0`, simulation `FUN_004fd390`).

That byte is parameter 11 of `FUN_00429710`. All three call sites pass 0: `0x42a60b` (push 0), `0x423b2d` area (push 0), `0x41e5ee` (`ESI` = 0 from `XOR ESI,ESI` at `0x41e572`). **The raycast car is never created in shipped code paths.**

Vehicle types by `FUN_0042a3d0` parameter:

| Type | Creator | Physics |
|---|---|---|
| 1 player | `FUN_0044e340` | Constraint car, upgrades apply. Handler `FUN_0044ea60`, collision callback `FUN_0044f970`, wheel callback `FUN_0044f960` (returns 0) |
| 3 AI racer | `FUN_0042de60` | Constraint car, upgrade index 0, Max Speed × `MaxSpeedPenalty[league]`/100, Max RPM × `MaxRPMPenalty[league]`/100. `intel.ini`: 90, 120, 200 and 115, 80, 50 |
| 2 traffic | `FUN_004275e0` | One rigid body `FUN_004a79d0`, mass from `car_cfg`, μ 0.9, e 0.2, COM y −10. Driven by `FUN_00428950` or `FUN_00415e40`. No wheels |
| Cops | `FUN_00423a50` | Constraint car, restitution arg 0.05 |
| Supercop | `FUN_0041e450` | Constraint car, restitution arg 0.2 |
| Path cars | `FUN_004636c0`, `FUN_004658e0`, `FUN_00466db0` | Rigid bodies 1200, 800, 1300 kg |

The older model in `FUN_00428320`, `FUN_00428707`, `FUN_00428581`, `FUN_0042877e`, `FUN_00427c10`, `FUN_00427cd8` has no callers and no pointers (raw scan). `FUN_00428c70` still copies a 0xF0 record from `0x6c1c68 + type·0xF0` to `0x6b2ad0`; readers are that dead code and the trailer path (`FUN_00431700`). `stuur_model` and `ai_model` (`game.ini`) are written to `DAT_006fb914`, `DAT_006fb934` and never read.

### `VDYNS.DAT`

100 records of 0x268 bytes loaded to `0x6b2bc0` by `FUN_004290f0` (`FUN_0044c200`). Field names are the tweak-menu strings (`FUN_00434c20`, `FUN_00434900`, `FUN_004345a0`, `FUN_00433f30`, `FUN_00433c30`, setters `FUN_00433300`). Index: `[k]` is the upgrade level: Engine `DAT_006fbb40` (`motor`), Wheel `DAT_006fbb44` (`banden`), Brake `DAT_006fbb4c` (`abs`), Gearbox `DAT_006fbb50` (`versnellingsbak`); from `FUN_0044a110`, `[PLAYER]` in `game.ini`.

| Offset | Field | Index | Shipped values |
|---|---|---|---|
| 0x000 | Vehicle Mass | | 600 (1000 in recs 2, 16, 26) |
| 0x004 | Center Of Mass x, y, z (world units) | | x 0; y −11 to −16; z −4 to 2 |
| 0x010 | Max Steering Angle (deg) | | 35 |
| 0x014 | Max Speed Steer Angle | | 30 |
| 0x018 | Body Extra Gravity | | 1.5 |
| 0x01C | Front Brake Power | Brake | 0.5 |
| 0x030 | Rear Brake Power | Brake | 1.5 (0.5 at level 0 in recs 1, 12, 22) |
| 0x044 | Handbrake Power | | 10.5 (7 in recs 1, 12, 22) |
| 0x048 | Number Of Gears (i32) | Gearbox | 5 |
| 0x05C | Engine Horsepowers | Engine | table below |
| 0x070 | Maximum RPM | Engine | 4500 or 4000 |
| 0x084 | Minimum RPM | Engine | 1500 |
| 0x098 | Maximum Speed (km/h) | Engine | table below |
| 0x0AC | Axle Torque Ratio | Engine | 0.7 |
| 0x0C0 | Axle Ratio | Engine | 3.8 |
| 0x0D4 | Gear Ratio 1–6 (6 f32 per level) | Gearbox | 2.8, 2.2, 1.3, 1.0, 0.8, 0 |
| 0x14C, 0x160, 0x174 | Front wheel set A, B, C | Wheel | 45, 0, 0 |
| 0x188 | Front Wheel Factor | Wheel | table below |
| 0x19C, 0x1B0, 0x1C4 | Rear wheel set A, B, C | Wheel | 45, 0, 0 |
| 0x1D8 | Rear Wheel Factor | Wheel | 6.0 |
| 0x1EC | Wheelspring Constant Front | Wheel | table below |
| 0x200 | Wheelspring Dampening Front | Wheel | table below |
| 0x214 | Stabilizer Front | Wheel | table below |
| 0x228, 0x23C, 0x250 | Same, rear | Wheel | table below |
| 0x264 | Wheel Radius (world units) | | 4 (6 in recs 2, 10, 16, 26) |

Tweak-menu labels also mark "A: steepness, B: fall off, C: fall off moment, Friction factor of tires" under "Magic Formula II" (`FUN_00432640`). 23 of the 100 records are distinct.

`car_cfg.ini` `[league0..2]`, `[traffic]`: `RefName, AnimName, DriverName, SoundType, Mass, CarType, Price, DynamicsType, DamageModel` (field names from `FUN_00423ce0`). `FUN_00423e40` loads section `league%d`, then `traffic`. `CarType` selects `[wheel_positions]` (`front x,y,z, rear x,y,z`, `FUN_004354e0`). The `Mass` field sets only object+0xB0 (1/mass) and +0xB4; the physical mass is VDYNS 0x000.

Records in use (`s/u` = upgrade level 0/1; spring, damp and stabilizer are equal front and rear unless noted):

| Rec | Mass | COM y, z | HP | RPM max | Vmax km/h | F factor | Spring | Relax damp | Stabilizer | Radius | Used by |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 11 | 600 | −11, −1.5 | 80/85 | 4500/4000 | 100/115 | 0.5/0.4 | 13000/20000 | 1500/3000 | 3000/5000 | 4 | L0 RACER_0 |
| 12 | 600 | −11, 2 | 95/110 | 4500/4000 | 100/115 | 0.5/0.4 | 17000/20000 | 4000/3000 | 2500/5000 | 4 | L0 RACER_1 |
| 13 | 600 | −13, −1.5 | 100/110 | 4500/4000 | 100/115 | 0.6/0.4 | 20000/15000 | 3000/3000 | 5000/5000 | 4 | L0 RACER_2 |
| 14 | 600 | −16, −1.5 | 80/95 | 4500/4000 | 100/115 | 0.5/0.4 | 25000/20000 | 3000/3000 | 5000/5000 | 4 | L0 RACER_3 |
| 15 | 600 | −16, −4 | 85/95 | 4500/4000 | 100/115 | 0.5/0.4 | 15000/20000 | 3000/3000 | 5000/5000 | 4 | L0 RACER_4 |
| 16 | 1000 | −12, 0 | 120/120 | 4000/4000 | 280/295 | 0.4/0.4 | 50000/50000 | 8000/8000 | 5000/5000 | 6 | L0 RACER_5 |
| 17 | 600 | −16, −1.5 | 80/90 | 4000/4000 | 100/115 | 0.4/0.4 | 20000/15000 | 3000/3000 | 5000/5000 | 4 | L0 RACER_6 |
| 21 | 600 | −11, −1.5 | 80/95 | 4500/4000 | 115/130 | 0.7/0.6 | 13000/20000 | 2500/3000 | 4500/5000 | 4 | L1 RACER_0 |
| 22 | 600 | −11, 2 | 110/120 | 4500/4000 | 115/130 | 0.7/0.6 | 17000/20000 | 4000/3000 | 2500/5000 | 4 | L1 RACER_1 |
| 23 | 600 | −13, −1.5 | 110/120 | 4500/4000 | 115/130 | 0.6/0.5 | 22000/15000 | 3000/3000 | 5000/5000 | 4 | L1 RACER_2 |
| 24 | 600 | −16, −1.5 | 95/120 | 4500/4000 | 115/130 | 0.6/0.5 | 25000/20000 | 3000/3000 | 5000/5000 | 4 | L1 RACER_3 |
| 25 | 600 | −16, −4 | 95/170 | 4500/4000 | 115/130 | 0.5/0.4 | 15000/20000 | 3000/3000 | 5000/5000 | 4 | L1 RACER_4 |
| 26 | 1000 | −12, 0 | 120/150 | 4000/4000 | 280/295 | 0.5/0.5 | 50000/50000 | 8000/8000 | 5000/5000 | 6 | L1 RACER_5 |
| 27 | 600 | −16, −1.5 | 100/110 | 4000/4000 | 115/130 | 0.6/0.5 | 20000/20000 | 3000/3000 | 5000/5000 | 4 | L1 RACER_6 |
| 0 | 600 | −11, −1.5 | 95/105 | 4500/4000 | 130/145 | 0.6/0.6 | 13000/20000 | 1500/3000 | 3000/5000 | 4 | L2 RACER_0; default for traffic and trailers |
| 1 | 600 | −11, 2 | 120/130 | 4500/4000 | 130/145 | 0.7/0.6 | 17000/20000 | 4000/3000 | 2500/5000 | 4 | L2 RACER_1 |
| 5 | 600 | −11, −1.5 | 120/140 | 4500/4000 | 130/145 | 0.6/0.5 | 22000/15000 | 3000/3000 | 5000/5000 | 4 | L2 RACER_2 |
| 3 | 600 | −16, −1.5 | 120/130 | 4500/4000 | 130/145 | 0.6/0.5 | 25000/20000 | 3000/3000 | 5000/5000 | 4 | L2 RACER_3 |
| 4 | 600 | −16, −4 | 120/130 | 4500/4000 | 130/145 | 0.5/0.4 | 15000/20000 | 3000/3000 | 5000/5000 | 4 | L2 RACER_4 |
| 2 | 1000 | −12, 0 | 120/150 | 4000/4000 | 280/295 | 0.6/0.5 | 50000/50000 | 3000/8000 | 5000/5000 | 6 | L2 RACER_5 |
| 6 | 600 | −16, −1.5 | 120/120 | 4000/4000 | 130/145 | 0.5/0.5 | 20000/20000 | 3000/3000 | 5000/5000 | 4 | L2 RACER_6 |
| 7, 8, 9 | 600 | −11, 2 | 120/120 | 4000/4000 | 130/145 | 1.5/1 | 5000/5000 | 2000/2000 | 5000/5000 | 4 | RACER_7, 8, 9. Disc 1.01 |
| 7, since the car update | 600 | −8, 2 | 120/120 | 4000/4000 | 130/145 | 1.5/1 | 5000/65000 | 2000/6500 | 5000/5000 | 5 | RACER_7, the truck. Records 8, 9 as above |
| 10 | 600 | −12, 0 | 175/175 | 4000/4000 | 280/295 | 0.5/0.5 | 50000/50000 | 8000/8000 | 5000/5000 | 6 | SUPERCOP |

### Per-tick car update

Entry `FUN_00427b90(car, ctrl)`; callers `FUN_0044ea60` (player), `FUN_00403cd0`, `FUN_00408a00`, `FUN_00419000`, `FUN_004191c0` (AI, cops). If `ctrl+0x19` (turbo) is 1, gas is forced to 100. Then `FUN_00428c70`:

1. Tyre friction per axle (below).
2. `FUN_004f21e0`: wake the body.
3. `FUN_004a2f70(phys, gas, brake, handbrake, turbo)`.
4. `FUN_004a31d0(phys, steer·0.006666667)` → vtable +0x3C.
5. `FUN_00403170`: airtime (ctrl+0x30). Reset to 0 if any wheel has contact (`wheel+0x25 == 1`), otherwise += `dt`.
6. Turbo push, below.

### Tyres

Front and rear each have one material, `Veh<n>_0_WheelMaterial` and `Veh<n>_2_WheelMaterial`. `FUN_00428c70` overwrites its friction (double at +0x10, returned by `FUN_004fd280`) every tick:

```
s_front = steer*0.004 - atan(vx/vz)      // 0 if vz == 0; negated if vz < 0   (FUN_00427e60)
s_rear  =             - atan(vx/vz)
f(s)    = (A*0.1*s + B*0.1*sin(C*s)) * 0.1 * Factor                           (FUN_00427dd0)
mu      = |f(s)| + 0.8
if handbrake and mu > 2.0: mu = 2.0
```

`vz` is object+0xC4 from the previous copy. `vx` is the velocity at core point (0, 0.1, 0) (`FUN_004f3f20`), rotated by the inverse render matrix. With shipped data (A 45, B = C = 0): `mu_front = 0.8 + 0.45·F·|s|`, `mu_rear = 0.8 + 2.7·|s|`. So rear grip rises steeply with slip, up to 0.8 + 2.7·π/2 = 5.04.

Contact friction is the product of both materials (`FUN_004fd120`). Elasticity is a product too (`FUN_004fd150`). The third value is a sum (`FUN_004fd180`).

| Material | Friction | Elasticity | Where |
|---|---|---|---|
| `ChunkMaterial` | 1.0 | 0.1 | All track geometry, `FUN_004ac020` |
| `ObjectMaterial` | 0.6 | 0.1 | Car bodies, `FUN_00429710` |
| Wheel materials | 0.7, overwritten per tick | 0.5 | `FUN_004294f0` |
| Rubber, Steel, Stone, Wood, Glas, Plastic | .95, .7, .5, .4, .2, .1 | .9, .75, .6, .4, .95, .4 | `FUN_004a3960` |
| `ObjectMaterial%d` | per object | per object | `FUN_004a9130`, reuses a match via `FUN_004a44a0` |

**No traction per surface:** every chunk uses the one `ChunkMaterial`. `FUN_00428c70` takes no surface input and the two `FSTP double [..+0x10]` at `0x428e53` and `0x428ec5` are the only friction writes found.

### Engine, gears, brakes (`FUN_004a2f70`)

Fields below are phys-relative (C8). Evidence is the disassembly at `0x4a2f70`–`0x4a31c9`; the C output for this function is unreliable.

```
speed  = sum(|omega_wheel_i|) * 0.63661975        // 0x577254, wheel omega from vtable+0x34
rpm(g) = Gear[g] * AxleRatio * speed * 60         // FUN_004a2f50
g = 0
while rpm(g) > RPMmax and g < gears-1: g++
while rpm(g) < RPMmin and g > 0: g--
phys+0xBC = rpm(g);  phys+0xE4 = g

base = Gear[g]*AxleRatio*HP*(gas*-0.01)*447420 / (RPMmax*rbar*2*pi)
torque_i = w_i * rbar * base * -0.5               // w_0,1 = AxleTorqueRatio; w_2,3 = 1 - ratio
if brake != 0:
    b = brake*0.01*10000
    if body_speed_z > 0: b *= 2                   // vtable+0x30(2), FUN_004fc480
    torque_i = -(BrakePower[i/2] * rbar * b * 0.5)   // replaces the gas torque
    update body counter-torque                    // vtable+0x24, only in this branch
handbrake: fix_wheel(2), fix_wheel(3) on change, release on change   // vtable+0x2C
```

- `rbar` is the mean wheel radius in metres, so it cancels in the gas formula. No torque curve: drive torque depends only on the gear.
- Automatic only. Gear is recomputed from zero each tick, no hysteresis or shift time. `FUN_00403016`, `FUN_0040302d` (manual shift) have no callers.
- Torque limit: wheel torques go through a torque actuator, `FUN_004fbd50`: applied only if `|omega| <= max`, where `max = MaxSpeed·0.2777778 / wheel_radius` per axle (`FUN_004a2590`, `0x4a29ed`). This is the only speed limiter. Brake torque uses the same actuator, so it is also ignored above that wheel speed.
- Handbrake: `FUN_004fcc40` creates a fixed joint between rear wheel and body, removes it on release. Handbrake Power (phys+0x98) is stored and not read by anything found.
- HUD speed: `DAT_006fba64 = (int)(object+0xC4 · 3.6)` (`0x44eba2`, `0x5763b0` = 3.6f).
- Sound RPM (`FUN_004a31f0`): `|omega_x of wheel 2|·Gear·AxleRatio·60`; passed to `FUN_0042f3e0` with gear and forward km/h.

### Reverse

There is no reverse gear and no reverse state. `CarBackward` sets `brake`. In `FUN_004a2f70` brake means a constant negative wheel torque at any speed: above 0 forward speed it is doubled, at or below 0 it continues at single strength and drives the car backward. Gear and engine values play no part. The wheel-speed limit is `|omega|`, the same in both directions. Gas pressed during brake is overwritten. Steering in reverse uses the same path.

### Steering

`do_steering(steer/150)`, `FUN_004fc3d0` (vtable +0x3C): stores the angle at car+0x13C and applies it to wheels 0 and 1 (`n_wheels/n_axles`), same angle on both (`FUN_004fc310`). Limit: `ctrl` clamps to ±100 (`FUN_00402de0`), so ±0.66667 rad = ±38.2°. Max Steering Angle and Max Speed Steer Angle (phys+0x78, +0x7C) are written and not read by anything found. **Live code has no speed-dependent steering limit.**

### Turbo

- `FUN_0046f050` → `FUN_0044e970`: while `CarTurbo` is held in state 0, every ≥100 ms (`GetTickCount`): turbo amount `DAT_006fba74` −1, `ctrl+0x19 = 1`, sound. So 10 units per second. Released or empty: flag 0. Infinite-turbo bonus `DAT_006c2f28` skips use.
- In `FUN_00428c70`, if turbo, `object+0xC4 < 60` and airtime ≤ 0.5 s:
  `push = (0, 0, dt · (1/object+0xB0) · (0.025·|object+0xC4| + 0.5) · 25)`, sent via `FUN_004a2000` → `FUN_004a5c70` to the actuator at phys+0x10.
- `FUN_004a5ce0` (actuator simulation, vtable `0x577324`+0x10, priority 0x5DC) takes a copy of that vector, rotated by the core matrix, normalises the stored vector in place through `FUN_004f9680` (`0x4a5d9c`), and applies the copy as an impulse at each PSI, with no `dt`. So one PSI gets the full value, and every later PSI length 1 until the next set. Anchor (0, −1, 1) world units (`FUN_004a1f30`, `FUN_00429710`).

### Suspension and wheels (`FUN_004fc4f0`, `FUN_004a2590`, `FUN_00429710`)

| Item | Value | Evidence |
|---|---|---|
| Wheels | 4 rigid balls, order FL, FR, RL, RR. Positions `(∓x, y, z)` from `[wheel_positions]` | `FUN_00429710` |
| Wheel radius | VDYNS 0x264 × 0.1 m | `FUN_004a14f0`, `FUN_004294f0` |
| Wheel mass | 150 kg (double `0x4062c000` at +0x18) | `FUN_004294f0` |
| Wheel filter | Group `chassis_id | DAT_006c2f38`. No contact with own chassis or any wheel | `FUN_004a3570` (`a & b == 0`) |
| Spring | Between body anchor 500 m along up axis and wheel; length `500 − pre_tension` | `FUN_004fc4f0`, `FUN_004fc250` |
| Spring force | `(len − rest)·k − damp·v`; damp = compress or relax by sign of v | `FUN_0050d990` |
| k | VDYNS 0x1EC, 0x228 [Wheel], N/m, not mass-relative | `FUN_0050d4f0`, template +0x10 = 0 |
| Relax damp | VDYNS 0x200, 0x23C | |
| Compress damp | 0.2 × relax | `FUN_00429710` |
| Max body force | 80000 (`0x479c4000`). Wheel gets the full force, body the clamped force | `FUN_0050d990` |
| Pre-tension | Front `(g/k_f)·(−b)·0.5/(b−a)`, rear `(g/k_r)·a·0.5/(b−a)`, with `a`, `b` = front, rear wheel z + COM z. No mass term | `0x4a2aca` |
| Stabilizer | VDYNS 0x214, 0x250 per axle | `FUN_004fc030` |
| Body counter-torque factor | 0.1 (desc+0x25C default) | `FUN_004a22a0`, `FUN_004fc2d0` |
| Body Extra Gravity | Constant force `1.5·mass·9.81` downward at object origin | `0x4a2a29`, `FUN_004fc4f0`, direction `FUN_004fbe40` |
| COM | VDYNS 0x004 × 0.1, Y flipped: (0, +1.1, −0.15) m for −11, −1.5 | `FUN_004a14f0` |
| Chassis inertia args | 1.0, 1.7, 1.8 at desc+0x24..2C | `FUN_00429710` |
| Damping args | 0.05 at +0x38, 0.6 at +0x40/48/50 (doubles), bodies and wheels | `FUN_00429710`, `FUN_004294f0` |
| Chassis geometry | From mesh via `FUN_004a4330` → `FUN_004a0970` | |

Wheel meshes copy their physics pose relative to the car each tick: `FUN_00435ab0`, relative Y clamped to ±5 world units (`FUN_00435a70`).

### Airborne and recovery

- No air control code. Steering and torque keep running. `Body Extra Gravity` still applies. Turbo push stops updating after 0.5 s airtime.
- Airtime above `RESETWAITTIME` = 10 s → warning message (`FUN_0044cb80`, `game.ini`, read in `FUN_0044aa20`).
- Spin guard: `FUN_00419450` true if any |angular velocity| > 10 rad/s; held for > 0.25 s → "The player has been corrected" → `FUN_0040e5a0` (`FUN_0044ea60`).
- Manual reset: `CM_KEYB_RETURN` → `FUN_0040e5a0(player, chunk, 1)`, 5000 ms lockout. Places the car on a free waypoint of the chunk, 20 units above the road (`FUN_004ad640` + 20), searching up to 10 chunks ahead.
- Before the start (`DAT_006fba9c == 0`) the player's local velocity fields are zeroed and no input is read.

## C6. Input to car

Actions from `game.ini [INPUT]` (`FUN_0046d360`, `FUN_0046d8a0`, `FUN_0046e350`, by `DEVICE`, read in `FUN_0046ee10`):

| INI key | Default VK | Action | Device binding |
|---|---|---|---|
| LEFT, RIGHT | 37, 39 | `CarLeft`, `CarRight` | `CM_JOY_LEFT`, `CM_JOY_RIGHT` |
| UP, DOWN | 38, 40 | `CarForward`, `CarBackward` | `CM_JOY_UP`, `CM_JOY_DOWN` |
| EXTRA1 | 17 Ctrl | `CarTurbo` | joystick buttons |
| EXTRA2 | 18 Alt | `CarHandbrake` | joystick buttons |
| EXTRA3 | 72 H | `CarHorn` | joystick buttons |

Call chain: `FUN_0044ea60` → `FUN_0046fd10` → `FUN_0046fcb0`:

- Internal device 1 or 2 (keyboard, joypad): `FUN_0046f530`.
- Internal device 3 (`DEVICE` 3 or 4): `FUN_0046f960`.
- Both: `FUN_0046f050` handbrake (`value > 0` → ctrl+0x18), turbo, horn.

Polling: `FUN_0046fdb0` → `FUN_004ea7d0`, device vtable +0xC. Keyboard `FUN_004ed610`: DirectInput 256-byte state, bit 7 per key, `FUN_004f0df0` per command. Value getters: `FUN_004eadd0` → `FUN_004eac80` → device vtable +0x10 (`FUN_004eef40`, current, +0x18), +0x14 (`FUN_004f11e0`, previous, +0x14). `FUN_004eb7a0` is the rising-edge test. Camera, pause and tweak keys bypass this and use `GetAsyncKeyState` (`FUN_004c5e40`).

**Digital path `FUN_0046f530`:**

- `FUN_004eafb0("CarLeft"/"CarRight", 2·dt, 2·dt, 1)` sets rise and fall rate and the ramp flag on the bound commands. The next poll does `value ± rate`, clamp 0..1 (`FUN_004f0df0`).
- `gas = FUN_0046f2a0(CarForward > 0.5)`, `brake = FUN_0046f2e0(CarBackward > 0.5)` (C4). Release gives 0 at once. Brake also sets `DAT_006fba2c` (brake lights).
- `steer = (right·200 − left·200)·0.5` = `(right − left)·100`.
- Full lock takes 0.5 s; so does recentring on release (autocentering = the fall rate). From full right to full left takes 0.5 s, since both ramps act at once.

**Analog path `FUN_0046f960`:**

- `v = −left if left > 0, else right`. `p = −backward if backward > 0, else forward`.
- `(int)(p·100)`: positive → gas, else brake = −value. No ramp.
- `steer = (v·100) / ((100 − SENSITIVITY + 25)·0.04)` (5.0 if the divisor is 0). `SENSITIVITY` = 50 gives divisor 3, so steer limit ±33.3, ±0.222 rad. 100 gives ±100; 0 gives ±20.
- No autocentering beyond the device. No dead zone constant in `FUN_004ef650`, `FUN_004f0020`, `FUN_004f0450`, `FUN_0046f960`.
- Axis normalisation `FUN_004ef650`: `raw / ((max−min)/2) − 1`. Joypad mode `FUN_004f0020` turns |x| > 0.5 into digital commands.

**Speed dependence:** none in the live paths. `FUN_0046f330` has it (limit `max(50, 100 − 2|v|)`, rate `200·(1 − v·0.00714)/s`, recentre 400/s) but no callers and no pointers. Do not port it as original behaviour.

States 3, 6, 8 force gas, brake and turbo to 0 before `FUN_00427b90` (`FUN_0044ea60`).

## C7. Collisions and damage

### World geometry

`.rmp` + `.pmp` + `.cmp` are loaded in `FUN_004ae570` etc. For each chunk `rd_read_chunk_rmp` `FUN_004aba30`:

1. Reads plane index lists: road ≤16, land ≤24, extra ≤12, rail ≤12.
2. `FUN_004a4260`: geometry `chunk%d`, type 4, starts a brush (`FUN_004a1050`).
3. `FUN_004abf30` per list: each plane adds **2 triangles**, 4 vertices with 6 index shorts at plane+0x80 (stride 0x8C, table `DAT_0073b040`).
4. `FUN_004abdc0`: for each rail index in the chunk's `.pmp` list (+0xF0 count, +0x104 list): a vertical wall of 2 triangles between `(x, chunkY−25, z)` and `(x+dx, chunkY+100, z+dz)`. Rails come from `.cmp`: (x,y,z,dx,dy,dz) per record, `FUN_004b35f0`, stride 0x60 at `DAT_0073b088`.
5. `FUN_004ac020`: compiles the soup (`FUN_00512000`), creates a static `MapObject` with `ChunkMaterial`, filter group `DAT_00715b08`.

So one static Ipion object per chunk. Triangles go through `FUN_004a1180`: world to physics, then `FUN_00511cc0`, `FUN_00511f80`.

Correction to `docs/formats/game-data.md`: `.cmp` holds rail segments (`rd_rail.cpp`), not camera or path points.

Track objects (`.omp` → `FUN_004aead0` → `FUN_004536e0`) get bodies through `FUN_004a79d0` → `FUN_004a9130`, geometry from the mesh, Y + 1, damping 0.05 and 0.6:

| Function | Mass | μ | e |
|---|---|---|---|
| `FUN_00451ed0` | 150 | .9 | .2 |
| `FUN_00452ee6`, `FUN_00452ef0` | 2000 | .9 | 0 |
| `FUN_00453200` | 500 | .9 | .2 |
| `FUN_004541c0` | fixed ("Adding Unmovable physics") | 1.0 | .6 |
| `FUN_004542a0`, `FUN_00454320`, `FUN_004543a0` | 2000 (μ 1.4), 400, 100 | .9 | .2 |
| `FUN_004546b0`, `FUN_004548d0` | 10, 10 | .9, 1.0 | .2, .6 |
| `FUN_004551a0`, `FUN_004554b0`, `FUN_00455aa0` | 2000, 100, 50 | .9 | .2 |
| `FUN_004557fb`, `FUN_00455800` | 3000 | .2 | .9 |
| Script objects `FUN_004749b0`, `FUN_00474af0`, etc. | from script | | |
| Car parts `FUN_00425490` | 5 | .7 | .2 |

### Response

All collision impulses come from Ipion. No game code pushes bodies in response to a hit; the callbacks only read the event.

- Listener: `FUN_004a14f0` installs vtable `0x577210` when desc+0xAC ≠ 0. `FUN_004a21d0` calls phys+0x18 for both objects. `FUN_004a2240` and `FUN_004a2270` set phys+0x25 = 1 and 0 on both (wheel contact flag).
- Sleep listener: `FUN_004a04a0`, `FUN_004a04c0` set phys+0x24 = 0, 1.
- Event record: +0 normal f32×3 (`FUN_004a20f0`), +0x10 relative speed f32×3 (`FUN_004a20a0`), +0x20 point f64×3 (`FUN_004a2050`), +0x40, +0x44 objects (`FUN_004a2140`, `FUN_004a2150`, then +0xB0 = phys).
- `FUN_0044f970`: computes the value both ways, gives AI hits to `FUN_0041a5b0`, player hits to `FUN_0044fe70` → `FUN_00426fe0`.

Impulse measure `FUN_00427170(a, b, speed, normal)`; speed in world units/s (×10 of m/s):

- `b` is a car with inverse mass ≥ 0.0006: `|v| / invmass_b`. Below that: `|v| / 0.0006`.
- `b` absent or inverse mass 0: `|v| / (2·invmass_a)`. If `b` is −1, then × `(1 − |n̂·up_a|)`.

### Damage (`damage.ini`, `FUN_00426a90`, `FUN_00426bb0`, `FUN_00425240`, `FUN_00425310`)

- Up to 250 cars at `0x5d3470`, stride 0x14: +0 object, +4 Imin, +8 Imax, +0xC damage, +0x10 slope.
- `[Damage Limits]` min 25, max 45. `[Damage Levels]` wheels 900, clouds 900.
- `[Damage Models]`: `Imin, Imax` for AI, then for player. Players use 50000, 90000 (`dam_supercop` 60000, 90000); AI use 70000, 90000 (`dam_supercop` 260000, 270000). Slope = (45−25)/(Imax−Imin).
- If `I > Imin`: `damage = trunc(25 + (min(I,Imax)−Imin)·slope + damage)`, cap 1100.
- Hits within 60 ms of the last one count as `I = 0`. Player damage is skipped when invulnerable (`DAT_006fbde2`), not in state 0, or `DAT_006fb96c`.
- > 1098 → total loss (state 6, `DAT_0059a190 = 0`).

Effects:

- Part detach and mesh changes: `FUN_00426280`, `[Damageable Car Objects]` thresholds, `FUN_00425490`, `FUN_00425850`.
- > window, lights levels: sub-objects hidden (`FUN_00426280`).
- > wheels level: wheel sub-objects get rotation +0x7C = 60 (`FUN_004266f0`). Visual only.
- > clouds level: smoke every 200 ms (`FUN_00426530`).
- Damage does not enter `FUN_00428c70` or `FUN_004a2f70`. **It has no effect on engine, grip or steering.**
- Sounds `FUN_00427400`: `I < Imin` soft; `I < Imin + (Imin+Imax)/2` mid; otherwise hard. `SCHUUR` on repeat hits within 300 ms under Imin/3.

## C8. Cameras (`cm_main.cpp`, `cam_main.cpp`)

Slots at `DAT_006c3518[10]`, active slot `DAT_006c3568`, each an index into camera array `DAT_00719b50` (stride 0x178, `FUN_004b0a30(10)`). Slot 0 is the player camera (`FUN_00438d20`), 1 start, 3 topview, 4 fuel station, 5 finish, 6 game over, 7 free, 8 temp, 9 AI cockpit. Current view id `DAT_00599c80`, target car `DAT_00599c84`.

Keys, polled each tick with `GetAsyncKeyState`, in state 0 (`FUN_00438670` → `FUN_004390d0(view)`):

| Key | View | Manual name (`Handleiding`) |
|---|---|---|
| 1 | car index + 5 (`DAT_006fba5c + 5`), also the race default (`FUN_0043c5d0`) | Dynamische camera |
| 2 | 0 | Statische camera |
| 3 (hold) | 4; returns to the previous view on release (`DAT_00599728`) | Achteruitkijk camera |
| 4 | 3 | Bumper camera |
| 6, 7, 8, 9, 0 | 6, 7, 8, 9, 10 | none |
| U, tweak only | 0xE free camera (`FUN_004397f0`, `FUN_00439910`) | none |

Key 5 is not a camera: `CM_KEYB_5` cycles HUD detail `DAT_00712784`. Cameras are not cycled, each key selects directly.

Views (`FUN_004390d0`). Offset is the position lock in target-object space, world units. Target lock `(obj, 0, 10, 0)` unless noted.

| View | Offset (x, y, z) | Mode | Notes |
|---|---|---|---|
| 0 | 0, 30, −80 | −1 | |
| 1 | 0, 25, −52.5 | −1 | Used by events |
| 2 | 0, 38, −55 | −1 | |
| 3 | 0, 15.5, 12 | −1 | No target lock, no damping, up from car matrix (+0x80 = 1), car hidden (object+0x54 = 0) |
| 4 | 0, 20, 75 | −1 | Damping setting left as it was |
| 5, 6, 7, 8, 9, 0xB | 0, 26, −33 | 1 | |
| 0xA | 0, 33, −33 | 1 | |
| 0xC | 0, 40, −40 | 1 | |
| 0xD | 0, 45, −55 | −1 | Car index 8 |

All views except 3 set object+0x54 = 1. Damping (except 3, 4) is `FUN_004b1110(0.245, 0.1, 0.7)` (`FUN_00438d00`: `0x3e7ae148`, `0x3dcccccd`, `0x3f333333`).

`FUN_004b1380` update, per tick, no `dt`:

```
mode 1 (velocity-led):
    v = target car local velocity (x, z)
    if vx^2+vz^2 > 150: stored = 2*offset_z * (vx, 0, vz)/|v|        // 0x719bb8; initial (0, 25, -80)
    k = clamp(|v|*0.01, 0.1, 0.25); damp_x = k; damp_z = k*2.5
    pos = objpos + R*(stored) in x,z;  pos.y = objpos.y + offset_y
other modes with position lock:
    pos = objpos + R*offset
target = pos + camera forward; if target lock: target = objpos + R*lock_offset
if damping: d = pos - prev; in target object space d *= (damp_x, damp_y, damp_z); pos = prev + d
if target damping (+0x70): target = prev_t + (target - prev_t)*factors
up = (0,1,0), or matrix up if +0x80
rebuild basis; prev = pos
```

Mode 1 puts the camera behind the car along its direction of travel, not its heading, once speed exceeds √150 = 12.2 m/s. Damp_y stays 0.1.

After that `FUN_00438670` builds the view with `FUN_004b3a60(eye, target, up, 0)`, stores it at `DAT_0073b434`, and calls `SetTransform(VIEW)`.

FOV: `FUN_004b39d0(m, near, far, fov)`, called with `near = 0.5/z`, `far = 12500`, `fov = z·π`, `z = DAT_006fb974` = 0.375 (`FUN_00449b30`). That is 67.5° horizontal at clip ±1, near 1.333, far 12500. Script can change target and rate (`FUN_00474940` → `DAT_005a28b8` = 0.375, `DAT_005a28bc` = 1.0); eased in `FUN_004517f0`. The device's first projection (`FUN_004bb5a0`: near 10, far 12500, fov 0.628) is replaced in `FUN_0044c200`, so the "10" in the patch notes is not the game's near plane.

Other active-camera paths: game over orbit `FUN_0043bc20`, `FUN_0043bd60`; finish `FUN_0043ab70`; caught by police `FUN_0043a690`.

## C9. State map

Bases are pointers read from `.data`, the arrays are on the heap:

```
car   = *(u32*)0x715e50 + *(i32*)0x6fba58 * 0xF0
obj3d = *(u32*)0x73b0d0 + *(i32*)(car+0x24) * 0xA9      // packed: floats are UNALIGNED, use DataView
phys  = *(u32*)(car+0x10)
```

| Item | Location | Type | How known |
|---|---|---|---|
| Player object index | `0x6fba58` | i32 | `FUN_0042a3d0`, `FUN_0044e340` |
| Player car index in league | `0x6fba5c` | i32 | `FUN_0044e340`, camera key |
| Matrix (world, rows right, up, forward, pos) | obj3d+0x10 | 16×f32 | `FUN_004aa0c0` |
| Position | obj3d+0x50..58 (also +0x40..48) | 3×f32 | `FUN_004aa0c0` |
| Previous position copy | `0x6fba80..88` | 3×f32 | `FUN_0044ea60` |
| Owner object | obj3d+0x0C | i32 | `FUN_004a7ed0` |
| Visible flag | obj3d+0x90 | u8 | `FUN_004a7ed0`, `FUN_00426280` |
| Local velocity x, y, z (m/s) | car+0xBC, +0xC0, +0xC4 | f32 | `FUN_004aa0c0` |
| Copy for player | `0x6fba8c..94` | 3×f32 | `FUN_0044ea60` |
| HUD speed km/h | `0x6fba64` | i32 | `FUN_0044ea60` |
| Current chunk, previous, waypoint | car+0x34, +0x38, +0x3C | i32 | `FUN_004a6c90` |
| Player chunk copy | `0x6fba7c` | i32 | `FUN_0044ea60` |
| 1/mass from `car_cfg` | car+0xB0 | f32 | `FUN_00429710` |
| Handler, draw function | car+0x6C, +0x70 | ptr | `FUN_004a7ed0`, `FUN_0042a3d0` |
| Draw car flag | car+0x54 | i32 | `FUN_004390d0` |
| Sub-objects | car+0x7C + 4i, count car+0xAC (≤12): 0–3 wheels, then lights | i32 | `FUN_004a8600`, `FUN_00435760`, `FUN_004aa390` |
| Wheel matrix **relative to car** | obj3d(sub)+0x10 | 16×f32 | `FUN_00435ab0` |
| Controller | `0x6fbabc`: +0 steer, +4 brake, +8 gas (f32); +0x14 skid level i32 0–10; +0x18 handbrake u8; +0x19 turbo u8; +0x28 dynamics type i32; +0x30 airtime f32 | | `FUN_00402d30` and setters |
| AI controllers | `0x5cea7c + i·0x294`, object `0x5ce9e8 + i·0x294` | | `FUN_00419000` |
| Gear (0-based), RPM | phys+0xE4 i32, phys+0xBC f32 | | `FUN_004a2f70` |
| Vehicle constants | phys+0x74 r̄, +0x78 steer max, +0x7C, +0x80 HP, +0x84 RPM max, +0x88 RPM min, +0x8C torque ratio, +0x90/94 brake, +0x98 handbrake, +0x9C Vmax, +0xA0 axle, +0xA4..B8 gears, +0xC0 gear count, +0xC4..D0 front A, B, C, factor, +0xD4..E0 rear | f32 | `FUN_004a2590`, setters `FUN_004a3240`–`FUN_004a33b0` |
| Wheel bodies | phys+0x34 + 4i | ptr | `FUN_004a2590` |
| Wheel contact | wheel+0x25 | u8 | `FUN_004a2240` |
| Awake | phys+0x24 | u8 | `FUN_004a04c0`, `FUN_004aa0c0` |
| Ipion car | phys+0x30 | ptr | `FUN_004a2590` |
| Steering angle (rad) | car_ivp+0x13C | f32 | `FUN_004fc3d0` |
| Wheel torque actuator | car_ivp+0x44 + 4i: +0x74 torque, +0x70 max omega, +0x94 omega | | `FUN_004fc290`, `FUN_004fc4d0`, `FUN_004fbd50` |
| Turbo push vector | *(phys+0x10)+0x80..88 | 3×f32 | `FUN_004a5c70` |
| Ipion body, core | phys+8, then +0xA4 | ptr | `FUN_004a1cb0` |
| Core position (physics) | core+0x188, +0x190, +0x198 | f64 | `FUN_004f4050` |
| Core matrix | core+0x128 | f64 rows | `FUN_004f41b0` |
| Core speed, rotation speed | core+0xA4..AC, core+0x94..9C | f32 | `FUN_004f3f20`, `FUN_004fc480` |
| Camera | `cam = *(u32*)0x719b50 + DAT_006c3518[DAT_006c3568]*0x178`: +0 mode, +8 eye, +0x14 matrix, +0x54 target, +0x60 up, +0x6C damp flag, +0x70 target damp, +0x74 pos lock, +0x78 target lock, +0x7C follow, +0x80 up from matrix, +0x88..90 damp, +0x94..9C target damp, +0xA0 prev pos, +0xB8 lock object, +0xBC lock offset, +0xC8 target object, +0xCC target offset | | `FUN_004b1380`, accessors |
| View matrix, projection matrix | `0x73b434`, `0x73b3f4` | 16×f32 | `FUN_00438670`, `FUN_0044c200` |
| Zoom, target, rate | `0x6fb974`, `0x5a28b8`, `0x5a28bc` | f32 | `FUN_004517f0` |
| Game state | `0x6fb8a0`: 0 race, 1 start, 2, 3 finish, 4 exit, 6 game over, 8 | i32 | `FUN_0044cda0` |
| Controls live, started | `0x6fb8c0`, `0x6fba9c` | i32 | `FUN_0044cda0` |
| Turbo fuel | `0x6fba74` | i32 | `FUN_0044e970` |
| Damage of player | `0x5d3470 + i·0x14 + 0xC` (i where +0 == player) | i32 | `FUN_00426f60` |
| World object | `0x715f58`: +0x14 env, +0x74 sim time f32, +0x78 last delta | | `FUN_004a45d0` |
| Visible chunks | `0x6fb8b0` | i32 | `FUN_0044cb30` |

---

# Inferred

## I1. Names

Ipion names below come from comparing structure with the public Ipion API as I remember it, plus the `IVP_` strings in the binary. They are mine. Behaviour above does not depend on them.

| Function | Likely name |
|---|---|
| `FUN_004f8380` | `IVP_Environment::simulate_until` |
| `FUN_0050bd80` | `IVP_Time_Manager::event_loop` |
| `FUN_0050c020`, `FUN_004f86f0` | PSI event, `simulate_psi` |
| `FUN_004fc4f0` | `IVP_Constraint_Car` (`IVP_Car_System` interface) |
| `FUN_004fbd50`, `FUN_004fbe40`, `FUN_0050d990`, `FUN_004fc030` | Actuator Torque, Force, Spring, Stabilizer |
| Damping args in C5 | `speed_damp_factor`, `rot_speed_damp_factor` |
| `FUN_004fc2b0`, `FUN_004fcc40`, `FUN_004fcd80` | `change_body_downforce`, `fix_wheel`, `activate_booster`. The Ipion booster is unused; the game has its own push |

## I2. Frame rate the original was built for

Estimated range: about 10 to 50 FPS.

- Lower bound: 0.1 s is the `dt` cap and ring start value, and three separate features switch to emergency behaviour at `1/dt < 10`.
- Upper bound (weak, dead code): the fuel-station buffer holds 2 s only up to 50 FPS. `dt·25` in the turbo formula reads like a normalisation to 25 FPS.
- The gas and brake truncation works best at low rates. At 10–60 FPS it gives about 1/3 s; above 100 FPS it starts losing steps.
- `Flip` with `DDFLIP_WAIT` when available would cap at display refresh, so this game was not exposed to high rates on period hardware. No FPS measurement of a period machine exists in this package.

## I3. Owner's 450 FPS result

The patch notes (`README_technical_spel.dat.md`, part 9) leave open why top speed falls to 8.3 at about 450 FPS while 30 to 240 FPS is normal. The gas truncation fits: at 450 FPS `dt·300 = 0.67`, so gas stays near 0 and only rises on ticks where jitter pushes `dt·300` above 1. Not tested. His other observation fits too: 26–28 on that road matches 100 km/h = 27.8 m/s, the stock Vmax of league 0 records.

## I4. Choice of fixed tick

The tick does not set the physics rate. PSI stays at 66 Hz in all candidates. The tick sets how often controls, AI, camera and per-tick effects run. All values below use a constant `dt`, computed with f32 rounding through the smoothing code.

| Tick | PSI/tick | Gas step, 0→100 | Brake step, 0→100 | Camera τ, k=0.245 / 0.1 / 0.7 | Turbo force vs 60 Hz | Traffic downforce vs 60 Hz | Skid strip |
|---|---|---|---|---|---|---|---|
| 30 | 2.2 | +10, 0.333 s | +10, 0.333 s | 119 / 316 / 28 ms | ×1 | ×0.5 | 1.63 s |
| 50 | 1.32 | +5 (5.99999987), 0.40 s | +6, 0.34 s | | ×1 | ×0.83 | 0.98 s |
| **60** | 1.1 | +5 (5.00000026), 0.333 s | +5, 0.333 s | 59 / 158 / 14 ms | ×1 | ×1 | 0.82 s |
| 66 | 1.0 | +4, 0.379 s | +4, 0.379 s | 54 / 144 / 13 ms | ×1 | ×1.1 | 0.74 s |
| 100 | 0.66 | +2 (2.99999993), 0.50 s | +3, 0.34 s | | ×0.66 | ×1.67 | 0.49 s |
| 120 | 0.55 | +2, 0.417 s | +2, 0.417 s | 30 / 79 / 7 ms | ×0.55 | ×2 | 0.41 s |
| 240 | 0.28 | +1, 0.417 s | +1, 0.417 s | | ×0.275 | ×4 | 0.20 s |

**Recommendation: logic tick 1/60 s, PSI unchanged at 0.015151516 s, render interpolated.**

For 60:

- It is the only candidate with direct evidence: the owner tested 30, 60, 120 and 240 FPS with a clean clock and got normal speed, and ships a 60 FPS limit as the known-good state.
- The gas and brake constants give their nominal 1/3 s (300 and 320 units per second truncate cleanly), with brake and gas in step.
- 1.1 PSI per tick: a steady pattern of one extra PSI every 10 ticks, so no tick runs far from one control update per PSI.
- Inside the range the code handles without any known fault.

Against 60:

- It is above the estimated design range. If period machines ran 25–30 FPS, the camera was twice as loose and traffic downforce half what 60 gives. This cannot be settled from the binary. It needs a reference run, and it would be the one reason to pick 30.
- `dt·300` = 5.00000026 is very close to an integer. It only stays +5 if `dt` is exact, see below.

Against the others:

- **66:** the only rate the game itself names, and exactly one PSI per tick. But nobody has tested it, gas and brake ramps come out 14% slower than at 60, and tick and PSI times are nearly equal, so f32 rounding in `world+0x74` would flip single ticks between 0 and 2 PSIs when the two drift across each other. A half-PSI phase offset would avoid that.
- **30:** closest to probable period behaviour and the same gas ramp, but it doubles camera lag and saves little CPU since PSI cost stays at 66/s.
- **100 and up:** `dt·300` truncation loses steps, turbo weakens and traffic downforce grows. No benefit once rendering is interpolated.

## I5. Host rules that follow

1. **Drive all clocks from the tick counter:** `QueryPerformanceCounter`, `timeGetTime`, `GetTickCount`. Race timers and the 60, 100, 200, 300 ms checks then stay consistent when the browser falls behind or pauses. Stopping ticks on focus loss needs no clock reset.
2. **Do not feed the clock as `count/freq` and leave `FUN_004a6700` alone.** At exactly 60 Hz f32 rounding of `time` (7.6e-6 s step at t = 100 s) moves `dt·300` around 5.0 and gas would alternate +4 and +5. Replace `FUN_004a6700` so that `time += T` and the `dt` field = `0x3c888889` exactly. Log this as an intentional difference. It also removes the uptime bug in the patch notes. Keep `FUN_004a6840` and the 0.1 start values harmless.
3. **Run `render_game` on every tick** with drawing discarded on non-presented ticks, because effects update inside it. Do not skip the call.
4. **Replace the blocking spins** `FUN_0044c990`, `FUN_0044c9f0` and `WaitMessage` in `FUN_00458020`. In a browser they would hang: they wait on key state that cannot change without yielding. Use a state machine or suspend the wasm stack.
5. **Interpolate at render:** keep the last two tick copies of each drawn matrix and of the camera eye, target and up, and blend. Skip blending for teleports (`FUN_0040e5a0`, start). Sub-object matrices are parent-relative. Do not rely on Ipion's own extrapolation for this; it only runs at `simulate_until`.
6. **Falling behind:** the original clamps `dt` at 0.1, so at low FPS game time slows. The port can do the same: cap catch-up at 6 ticks per frame, and drop the rest.
7. **World time** is a f32 in `world+0x74`, spel.dat restarts per race, so it stays precise; do not widen it without need.
8. **Seed:** `FUN_004264b0` seeds `rand` from `GetTickCount`. With a tick clock the seed becomes constant, which gives repeatable runs for tests. For play, seed from real time instead.
9. **Numeric behaviour:** x87 runs at 64-bit precision inside the step and with reserved precision bits in `FUN_004aa0c0`. wasm has f32 and f64 only. Exact float paths will differ from a native run; do not expect bit-equal comparison with Wine traces.
10. **Blocking input poll order:** the poll runs before the handlers, and the ramp rates set in a tick apply at the next poll. Keep that order for the touch wheel if it feeds the same commands.

## I6. Derived physics numbers

Assuming rolling wheels, r = 0.4 m, 600 kg chassis + 4×150 kg wheels:

- Total mass 1200 kg. Static load per wheel about (600·9.81·2.5)/4 + 150·9.81 = 5150 N, including Body Extra Gravity. Grip at μ 0.8 about 4100 N per wheel.
- Gear choice from `rpm(g) = Gear·3.8·60·(8/π)·v/r = Gear·1451·v`: the 4500 limit passes 1st at 1.1 m/s, 2nd at 1.4, 3rd at 2.4, 4th at 3.1. **From about 3.1 m/s (11 km/h) the car is in top gear.** The factor 0.6366 is 4/(2π) where a mean would be 1/(4·2π), which looks like an original bug that gives this short gearbox.
- Top gear thrust `3.04·HP·447420/(RPMmax·2π)/r`: 80 HP 9600 N (8 m/s²), 120 HP 14400 N (12 m/s²), 175 HP at 4000 RPM 23700 N.
- First gear torque far exceeds grip, so launches are grip-limited.
- Reverse and braking at full pedal: F = 0.5, R = 1.5 give 2500 N and 7500 N per wheel (double when braking forward), both also limited by grip.
- Top speed is Maximum Speed: league 0 stock 100 km/h = 27.8 m/s. Reverse limit by the same rule: Vmax. This is high for a reverse gear, so check it first in the port.
- Turbo at 60 Hz, 600 kg arg, v = 30 m/s: impulse 312 N·s per set, 60 sets per second: 18750 N, about 15.6 m/s² on the whole car if the wheels follow. Above Vmax the turbo still pushes (up to 60 m/s) while wheel torque is cut.
- Static spring deflection at 13000 N/m: about 0.28 m. Pre-tension is about 0.2 mm (no mass term), so it has almost no effect. Probably an original oversight.
- Damage: a car-to-car hit starts counting at about 8.3 m/s (100 world units/s × 600 kg = 60000 ≥ 50000 player Imin) if the other car has `car_cfg` mass 600. A wall hit needs about 17 m/s of relative speed at a vertical surface, times the normal factor.

---

# Unknown

- **Turbo push after release: settled.** Only `FUN_00428c70` writes the vector at *(phys+0x10)+0x80, only while turbo is active, and nothing clears it (`FUN_004a5c70` is the only writer, `FUN_004a2000` has three callers, raw pointer scan empty). But `FUN_004f9680` (`0x4a5d9c`) normalises it in place on the first PSI after each set, so after the last set a unit vector stays: about 66 N (C5, Turbo).
- **Original frame rate on period hardware.** `spel.dat` has never run in `dynamic/`. Camera lag and traffic downforce depend on it. A Wine reference run with a frame counter (`[fps:%f]`, `frameRate:` strings under tweak mode, `TWEAK_MODE` in `raser.ini`) gives handling at a chosen rate, but not what 2000 hardware did.
- **Ipion internals** not traced: collision and friction solving (`FUN_005023f0`, `FUN_005024e0`), the car constraint solver (`vtable 0x5789f0`, `FUN_0050e930`, constant 240.0 at +0x7C), sleep rules. They are recompiled unchanged, so they do not need porting, but their rate sensitivity is not established. `FUN_004a2eb0` uses wheel core +4 as radius (matches a ball) by reading only.
- **Reverse feel.** Top reverse speed and acceleration are derived, not observed.
- **`DAT_006fb8d0`:** sets the 25 vs 15 floor in `FUN_0044cb30` and gates sky and texture steps in `render_game`. Meaning not traced.
- **Joystick dead zone.** None in the code read. `FUN_004f0820` and DirectInput properties beyond range (`FUN_004f06c0`) were not fully traced. Moot for the Gamepad API, but the original feel is unknown.
- **Whether handling depends on x87 precision** in any visible way. No evidence either way.
- **Purpose of `DAT_006c2f30`** (sum of player speed per tick) and `DAT_006fbab4` (chunk-based progress) were not followed beyond `FUN_004128a0`. See the gameplay research.
- **Nose-up behaviour** mentioned in the patch notes is not explained by this file. Candidates to test: Body Extra Gravity at the object origin above the COM, and the turbo anchor below it.
