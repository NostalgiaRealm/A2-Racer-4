# Vehicle model of `spel.dat`

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: C8 and Unknown (how the turbo push stops). The rest of the note is as it was written.

Scope: `Car_main.cpp`, `Car_dynm.cpp`, `car_whl.CPP`, `car_data.cpp`, `plr_car.cpp`, `VDYNS.DAT`, `car_cfg.ini`, DaviIpionSupport car wrapper. Input path up to the car: `input.md` C6. Clock, collisions, cameras: `simulation-core.md` C1-C3, C7, C8.

This file re-checks `simulation-core.md` C5 and C9 against the disassembly and adds what they lack. **New** and **Correction** mark the differences. Everything not marked agrees with that file.

Port meaning: all of this runs inside the recompiled `spel.dat`, including Ipion (`0x4f2000-0x540000`). The host writes no physics. It needs the state table in C11.

Units: world units are 0.1 m (`0x5af184` = 0.1). `FUN_004a4180` converts world to Ipion: `(x*0.1, -y*0.1, z*0.1)`. `FUN_004a41b0` is the inverse. Velocities in the car struct are m/s, not world units.

# Confirmed

## C1. It is not a raycast car

The request calls it a raycast car. The shipped game never creates one.

- `FUN_004a2590` (wrapper init): byte at desc+0x258 == 0 → `operator_new(0x140)`, `FUN_004fc4f0` (constraint car with real wheel bodies, vtable `0x578568`). Otherwise `operator_new(0x65c)`, `FUN_004a5e70` (raycast).
- desc+0x258 is arg 11 of `FUN_00429710` (`MOV DL,[ESP+0x400]`, `0x429d51`). `FUN_004a22a0`, the descriptor constructor, has one caller, `FUN_00429710`.
- Arg 11 at all three call sites is 0: `0x42a60b` PUSH 0 (player, AI racer), `0x423b31` PUSH 0 (cop), `0x41e5f0` PUSH ESI with ESI = 0 (supercop).
- Real args of `FUN_00429710`: 1 cfg, 2 object index, 3-5 position, 6 zero, 7 mass (`FILD [cfg+0x40]`), 8 restitution, 9, 10 dimensions, 11 raycast flag, 12 AI flag, 13 use shared collision id `DAT_00715b0c`, 14 collision callback, 15 wheel callback. Evidence: base-ESP read `[ESP+0x3f0]` at `0x42a172`, pushes at `0x42a60b-0x42a628`. Ghidra's `param_5..param_8` in the C are shifted; do not trust them.
- **New:** arg 12 = 0 for cops and supercop (`0x423b2f`, `0x41e5ef`), so they use the **player's** upgrade levels. Only AI racers (arg 12 = 1, `0x42a5e8`) get level 0 plus penalties.
- **Correction:** `0x577234` is not a vtable. It is slot +0x14 of the wrapper vtable `0x577220` (set in `FUN_004a24d0`, `0x4a24da`): `0x4a5240, 0x4a14f0, 0x4a14d0, 0x4a2d70, 0x4a2cb0, 0x4a2590`.

## C2. Tick order (`FUN_00427b90`, `FUN_00428c70`)

`FUN_00427b90(car, ctrl)`: if `ctrl+0x19` (turbo) == 1 then gas = 100 through `FUN_00402ea0`. Tweak keys F and Ctrl+Space+C run only if `DAT_006fb950 == 1`. Then `FUN_00428c70`:

1. Copy of 0xF0 record `0x6c1c68 + type*0xF0` to `0x6b2ad0` (`0x428dc1-0x428dde`). Live readers: none in this path.
2. Front material friction, rear material friction (C5).
3. `FUN_004f21e0`: wake the body (`0x428ed5`).
4. `FUN_004a2f70(phys, gas, brake, handbrake, turbo)` (`0x428efc`). Return value (gear changed) ignored.
5. `FUN_004a31d0(phys, steer*0.006666667)` (`0x428f14`, `0x5765f4`).
6. Player only: `GetAsyncKeyState('O')`, result ignored (`0x428f25`).
7. `FUN_00403170(ctrl, phys)`: airtime (C8).
8. Turbo push if turbo byte == 1, `car+0xC4 < 60`, `FUN_004031c0` false (C8).

## C3. Throttle, engine, gears (`FUN_004a2f70`, disassembly `0x4a2f70-0x4a31c9`)

Gas is 0..100 (`FUN_00402ea0` clamp; forced 0 while `ctrl+0x2C > 0`, but its writers `FUN_00402f70`, `FUN_00402fa0` have no callers).

```
speed  = sum(i=0..3, |omega_i|) * 0.63661975        // 0x577254
rpm(g) = Gear[g] * Axle * speed * 60                // FUN_004a2f50
g = 0
while rpm(g) > RPMmax and g < gears-1: g++          // 0x4a2fe6-0x4a302a
while rpm(g) < RPMmin and g > 0:       g--          // 0x4a302c-0x4a305d
phys+0xBC = rpm(g); phys+0xE4 = g

base      = Gear[g]*Axle*HP*(gas*-0.01)*447420 / (RPMmax*rbar*2*pi)    // 0x577250, 0x577248
torque[i] = w[i]*rbar*base*-0.5                     // w[0,1]=ratio, w[2,3]=1-ratio; vtable+0x20
```

- `omega_i` = vtable+0x34 = `FUN_004fc4d0` = actuator+0x94, rad/s (`FUN_004f43e0`: dot of core rot speed and axis).
- rbar cancels. Full-gas torque per wheel = `w[i] * Gear[g] * Axle * HP * 223710 / (RPMmax * 2*pi)` N·m.
- Automatic only: recomputed from gear 0 each tick, no hysteresis, shift time or clutch. No torque curve: RPM selects the gear and nothing else.
- **New: at gas 0 and brake 0 the gear freezes.** The actuator returns before refreshing +0x94 when its torque is 0 (`FUN_004fbd50`, `0x4fbd58-0x4fbd66`), so omega keeps its last value.
- 0.63661975 = 4/(2·pi). The sum is not averaged, so `speed` = 16 × wheel rev/s. Consequence in I2.
- **Gear has one effect: drive torque.** Sound gets it as an ignored argument (`0x44ecc5`, `audio.md`: `0x0042f3e0` ignores a1, a2). The HUD has no gear or RPM element (`hud-overlay.md`). The sound RPM `FUN_004a31f0` = `|omega_x(wheel 2)|*Gear*Axle*60` is also ignored.
- **Correction:** the dead manual shift is `0x403020` (+1, max 5), `0x403030` (-1) on `ctrl+0x0C`; no callers. `FUN_00403016`, `FUN_0040302d` are NOP padding. Do not read the gear from `ctrl+0x0C`.

## C4. Brake and reverse (`0x4a30e4-0x4a316a`)

```
if brake != 0:
    b = brake * 0.01 * 10000                        // 0x5762a4, 0x57633c
    if get_body_speed(2) > 0: b *= 2                // vtable+0x30(2), strictly greater, 0x4a310d
    torque[i] = -(BrakePower[i/2] * rbar * b * 0.5) // replaces the gas torque
    update_body_countertorque()                     // vtable+0x24
```

- `FUN_004fc480(2)`: dot of core speed (core+0xA4..AC) with core matrix column 2 (`core+0x128+8*2`, row stride 0x20). Signed forward m/s.
- **How `CarBackward` becomes reverse:** there is no reverse gear, state or flag. `CarBackward` sets brake (`input.md` C6). Brake is a constant negative wheel torque at any speed. Moving forward it is doubled. At rest or moving backward it is single and drives the car backward. HP, gear and engine values play no part.
- Gas during brake has no effect: the loop overwrites all four torques.
- No brake-to-reverse delay, no separate reverse speed limit: same `|omega| <= max` test (C6).
- **New: the body counter-torque is only refreshed in this branch.** `FUN_004fc2d0` sets actuator car_ivp+0x40 to `-sum(torque[i]) * 0.1` (`car_ivp+0x128`, default desc+0x25C). The only vtable+0x24 call in the wrapper is `0x4a3167`, and there is no direct call. Gas does not touch it and a brake release does not clear it, so it keeps the value of the last brake tick.
- **Handbrake:** on change, vtable+0x2C `FUN_004fcc40` on wheels 2 and 3 (latch phys+0xE8). Press: copies the body's rotation speed to the wheel core, then creates a constraint wheel-to-body (`FUN_004f5a10`), stored at car_ivp+0xB0+4i. Release: deletes it. Handbrake Power (VDYNS 0x044, phys+0x98) plays no part in this.

## C5. Tyres and traction

`FUN_00428c70` overwrites the friction of two materials every tick: `Veh<n>_0_WheelMaterial` (front wheels) and `Veh<n>_2_WheelMaterial` (rear), `FSTP double [mat+0x10]` at `0x428e53`, `0x428ec5`. From `FUN_00427e60`, `FUN_00427dd0`:

```
vx      = core speed at core point (0, 0.1, 0), rotated into car space   // 0x427e8c, FUN_004f3f20, FUN_004aa060
vz      = car+0xC4 (from the last sync)
s_front = vz == 0 ? 0 : steer*0.004 - atan(vx/vz)      // 0x5765a0
s_rear  = vz == 0 ? 0 :             - atan(vx/vz)
if vz < 0: s = -s                                      // 0x428023-0x428031
f(s)    = (A*0.1*s + B*0.1*sin(C*s)) * 0.1 * Factor    // 0x576338
mu      = |f(s)| + 0.8                                 // 0x576590
if handbrake == 1 and mu > 2.0: mu = 2.0               // 0x57658c
```

- `steer` is the raw control value (±100), so `steer*0.004` reaches ±0.4 while the wheel angle reaches ±0.667 rad.
- In all 25 records in use A = 45, B = C = 0, rear Factor = 6 (script over `vdyns.dat`). So `mu_front = 0.8 + 0.45*F*|s|`, `mu_rear = 0.8 + 2.7*|s|`. Rear grip grows with slip: 0.8 at 0, 5.04 at 90°.
- Handbrake caps grip at 2.0 on both axles; it does not lower it below that.
- **Traction per surface: none.** `FUN_00428c70` takes no surface input and these are its only friction writes. `FUN_004ac020` gives all chunks one `ChunkMaterial` (friction 1.0, elasticity 0.1). Material lookup `FUN_004a4430` has only these callers: `FUN_00428c70`, `FUN_004294f0`, `FUN_00429710`, `FUN_004ac020`. No code in scope swaps a material or reads a surface type. Contact friction is the product of both materials (`FUN_004fd120`, `simulation-core.md` C5).

## C6. Top speed

No cap on body speed. The limit is per axle on wheel spin.

- `FUN_004a2590`: `max_omega[axle] = MaxSpeed * 0.2777778 / wheel_radius`, wheel radius from wheel 0 and wheel 2 (`puVar11[5]`, MaxSpeed = desc[0xbf]). Stored in the wheel torque actuator at +0x70.
- `FUN_004fbd50`: `omega = dot(rot_speed, axis)`, stored at +0x94; torque applied only if `|omega| <= max` (`0x4fbdf0-0x4fbdfc`). Above that the wheel gets no torque in that PSI, either sign. No taper.
- The same test gates brake torque, since brake uses the same actuator. Above `max_omega` only contact friction, the handbrake and Ipion's damping slow the wheel.
- Body actuator limit: 314.16 rad/s (`0x439d1463`, `FUN_004fc4f0`).

| VDYNS 0x098 (km/h, level 0/1) | Records | max_omega (rad/s) |
|---|---|---|
| 100/115 | 11-15, 17 (league 0) | 69.4 / 79.9 (r 0.4) |
| 115/130 | 21-25, 27 (league 1) | 79.9 / 90.3 |
| 130/145 | 0, 1, 3, 4, 5, 6, 7, 8, 9 | 90.3 / 100.7 |
| 280/295 | 2, 10, 16, 26 | 129.6 / 136.6 (r 0.6) |

AI racers: MaxSpeed × `[0x5d1b74+league*4]`/100, RPMmax × `[0x5d1b80+league*4]`/100 (`FUN_00429710`, only when arg 12 == 1). HUD speed is body speed: `DAT_006fba64 = (int)(car+0xC4 * 3.6)` (`0x44eb9b-0x44ebad`), signed, no FABS, so negative in reverse.

## C7. Steering

- `FUN_004a31d0(phys, steer/150)` → vtable+0x3C `FUN_004fc3d0`, then vtable+0x38 = `0x4d1400` (bare RET).
- `FUN_004fc3d0`: if the angle equals car_ivp+0x13C nothing happens. Otherwise store it and call vtable+4 `FUN_004fc310` for wheels 0 and 1 (`n_wheels/n_axles`). Same angle on both: no Ackermann. Rear wheels never steer. The `n_wheels > 4` branch does not run.
- `FUN_004fc310` sets the wheel hinge direction, adding pi if `car_ivp+0xD8+4i < 0` (`0x4fc360-0x4fc396`).
- Limit: `FUN_00402de0` clamps to ±100, so ±0.66667 rad = ±38.2°.
- Max Steering Angle (VDYNS 0x010 = 35) and Max Speed Steer Angle (0x014 = 30) go to phys+0x78, +0x7C. `FUN_00428c70`, `FUN_004a2f70`, `FUN_004a31d0` and the wrapper getters do not read them. They do not limit anything in the live path.
- No speed dependence, no self-aligning logic, no air control. Rates and ramps are in the input layer (`input.md` C6, `simulation-core.md` C6).

## C8. Airborne, turbo, recovery

**Contact flag.** Listener vtable `0x577210`: +0 `FUN_004a21d0` (calls wrapper+0x18 callback), +8 `FUN_004a2240` sets wrapper+0x25 = 1 on both touching objects, +0xC `FUN_004a2270` clears it on both. Wrapper reached by `ivp_object+0xB0`.

**Airtime.** `FUN_00403170`: if any of `phys+0x34..0x40` has +0x25 == 1, `ctrl+0x30 = 0`; else `ctrl+0x30 += dt`. Only wheels count, so a car on its roof counts as airborne. `FUN_004031c0` = airtime > 0.5 (`0x5762d8`).

**In the air.** `FUN_004a2f70` and `FUN_004a31d0` have no contact test: torque, brake, steering and the friction writes keep running. A wheel spins up to `max_omega`. Body Extra Gravity keeps pulling. Nothing rights the car or damps it beyond Ipion's normal damping.

**Long airtime.** `ctrl+0x30 > RESETWAITTIME` (`FUN_0044cb80`, `0x5a16fc`, `game.ini` = 10): `DAT_0059becc = 0x44`, a HUD flash message. No automatic reset. Manual reset: `simulation-core.md` C5 (`CM_KEYB_RETURN` → `FUN_0040e5a0`).

**Spin guard.** `FUN_00419450`: any `|omega|` of the body > 10 rad/s. `FUN_0044ea60`: `0x6fba44 += dt` while true; above 0.25 s `FUN_0040e5a0(player, chunk, 0)`, log "The player has been corrected." The timer resets only when the guard is false.

**Turbo.**

- `FUN_0044e970`, state 0 only: every ≥100 ms by `GetTickCount`, `DAT_006fba74 -= 1` unless `DAT_006c2f28`, `ctrl+0x19 = 1`. Released or empty: 0.
- **New: fast-forward pickup = turbo on without the key.** With `DAT_006c2f28` set, the released-key test at `0x44e985-0x44e98c` falls through, so the byte goes to 1 with no fuel used. Its force value `0x6c2f2c` is read only in `FUN_00428494`, `FUN_004284a0`, reached only from dead `FUN_00428707`.
- Gas forced to 100 (`FUN_00427b90`).
- Push (`0x428f6c-0x428ffa`): `z = dt * (1/(car+0xB0)) * (0.025*|car+0xC4| + 0.5) * 25`, x = y = 0, through `FUN_004a2000` → `FUN_004a5c70`. `1/(car+0xB0)` is the `car_cfg` Mass, so RACER_7..9 (1500) push 2.5× harder than 600.
- `FUN_004a5ce0` (actuator at phys+0x10, vtable `0x577324`) rotates a copy of the vector by the core matrix each PSI, normalises the stored vector in place through `FUN_004f9680` (`0x4a5d9c`), and applies the copy through `FUN_004f41b0` unless the length was < 1e-10 (`0x577344`) or core state byte (core+0x5C) >= 8. So one PSI gets the full value, and every later PSI length 1 until the next set. No `dt` in that step. Anchor (0, -1, 1) world units (`FUN_004a1f30`, `FUN_00429710`).
- **The vector is never cleared in the code.** `FUN_004a5c70` is the only writer after the constructor, `FUN_004a2000` has three callers (`0x428ffa` here, `0x428b0b`, `0x416075` traffic), raw pointer count 0 for both. In `FUN_00428c70` the update is skipped when turbo is off (`JNZ 0x428fff`, no else). After the last set a unit vector stays, about 66 N, and that is how the push stops.

## C9. Car configuration

`FUN_0042a3d0` type arg: 1 player (`DAT_006fba58` set), 3 AI racer, other = one rigid body without wheels (`FUN_004a79d0`, friction 0.9, elasticity 0.2). Cops and supercop call `FUN_00429710` directly.

**`car_cfg.ini` rows** (`FUN_00423e40`, `[league%d]`, `[traffic]`): `RefName, AnimName, DriverName, SoundType, Mass, CarType, Price, DynamicsType, DamageModel`. `cfg+0x40` Mass, `cfg+0x44` CarType, `cfg+0x4C` DynamicsType (= `VDYNS` record). `[wheel_positions]` by CarType: `front x,y,z, rear x,y,z` (`FUN_004354e0`).

| Car | CarType | Front x, y, z | Rear x, y, z | Records L0, L1, L2 |
|---|---|---|---|---|
| RACER_0 | 0 | 8.64, 0, 17.11 | 8.64, 0, -16.05 | 11, 21, 0 |
| RACER_1 | 1 | 6.82, 0, 18.35 | 7.72, 0, -15.54 | 12, 22, 1 |
| RACER_2 | 5 | 8.39, 0, 12.36 | 8.91, 0, -13.23 | 13, 23, 5 |
| RACER_3 | 3 | 7.708, 0, 14.197 | 7.949, 0, -14.033 | 14, 24, 3 |
| RACER_4 | 4 | 6.59, 0, 11.76 | 7.76, 0, -9.73 | 15, 25, 4 |
| RACER_5 | 2 | 11.56, 5.27, 25.03 | 11.56, 5.27, -9.89 | 16, 26, 2 |
| RACER_6 | 6 | 6.55, 0, 12.919 | -6.19, 0, -13.073 | 17, 27, 6 |
| RACER_7, 8 | 7 | 6.55, 0, 12.919 | -6.19, 0, -13.073 | 7, 8 |
| RACER_7 since the car update, the truck | 42 | -7.797, 5.123, 47.32 | -10.56, 5.123, -23.222 | 7 |
| RACER_9 | 9 | 7.5, 0, 13.13 | 7.5, 0, -15.82 | 9 |

Wheel layout (`FUN_00429710`): 0 = (-xf, yf, zf), 1 = (xf, yf, zf), 2 = (-xr, yr, zr), 3 = (xr, yr, zr). A negative rear x in CarType 6, 7 swaps wheels 2 and 3 side-to-side.

**`VDYNS.DAT`**: 100 records × 0x268 at `0x6b2bc0` (`FUN_004290f0`). `[k]` = upgrade level 0/1 from `game.ini [PLAYER]`, `FUN_0044a110`. The record table in `simulation-core.md` C5 was checked by script against `vdyns.dat`: 23 rows, 0 differences.

| VDYNS | Field | k | Stored at (+x = phys) | Value in use |
|---|---|---|---|---|
| 0x000 | Mass | | desc+0x18 | 600; 1000 in 2, 16, 26 |
| 0x004 | COM x, y, z (units) | | desc+0x9C | y -11..-16, z -4..2 |
| 0x010, 0x014 | Steer angles | | +0x78, +0x7C | 35, 30, unused |
| 0x018 | Body Extra Gravity | | desc+0x268 | 1.5 |
| 0x01C, 0x030 | Brake F, R | abs | +0x90, +0x94 | F 0.5; R 1.5 (level 0 of 1, 12, 22: 0.5) |
| 0x044 | Handbrake Power | | +0x98 | 10.5 (1, 12, 22: 7), unused |
| 0x048 | Gears (i32) | box | +0xC0 | 5 |
| 0x05C, 0x070, 0x084 | HP, RPMmax, RPMmin | motor | +0x80, +0x84, +0x88 | per record, RPMmin 1500 |
| 0x098 | MaxSpeed | motor | +0x9C | C6 |
| 0x0AC, 0x0C0 | Axle torque ratio, axle | motor | +0x8C, +0xA0 | 0.7, 3.8 |
| 0x0D4 | Gear ratios, 6 per level | box | +0xA4..B4 | 2.8, 2.2, 1.3, 1.0, 0.8 |
| 0x14C..0x188 | Front A, B, C, Factor | banden | +0xC4..D0 | 45, 0, 0, per record |
| 0x19C..0x1D8 | Rear A, B, C, Factor | banden | +0xD4..E0 | 45, 0, 0, 6 |
| 0x1EC, 0x200, 0x214 | Spring, relax damp, stabilizer F | banden | template | per record |
| 0x228, 0x23C, 0x250 | Same, R | banden | template | equal to F in all 25 |
| 0x264 | Wheel radius (units) | | wheel desc+0x88 | 4; 6 in 2, 10, 16, 26 |

Only five gear ratios are copied to phys (`0x4a2c04-0x4a2c22`); +0xB8 is not written by `FUN_004a2590`.

**Upgrades** (`0x6fbb40` motor, `0x6fbb44` banden, `0x6fbb4c` abs, `0x6fbb50` versnellingsbak; `FUN_0044a110`), shipped data, script over the 25 records in use:

- Motor: HP, RPMmax, MaxSpeed. RPMmax falls 4500 → 4000 in most records, which alone adds 12.5% torque (divisor in C3).
- Banden: front Factor, spring, damp, stabilizer.
- ABS: no ABS logic. Only the rear brake value, and that only differs in records 1, 12, 22.
- **New: versnellingsbak has no effect.** Level 1 ratios and gear count equal level 0 in all 25, despite the `game.ini` comment "6-shift-gear".
- `0x6fbb54` `injectie` is written once and has no other reference in `decompiled.c`.

**Ipion setup** (`FUN_00429710`, `FUN_004294f0`, `FUN_004a2590`, `FUN_004fc4f0`):

| Item | Value | Evidence |
|---|---|---|
| Axes | index x 0, y 1, z 2. Wheel axis along x, spring along y, forward z | `local_2ec[4,6,8]`, `FUN_004a2590`, `FUN_004fc4f0` |
| Wheel | Ball, radius VDYNS 0x264 × 0.1 m, mass 150 kg | desc+0x84 = 1, `FUN_004a14f0` line with `_DAT_005af184`; `0x4062c000` at +0x18 |
| Chassis mass | VDYNS 0x000, not `car_cfg` Mass | `local_334`; `car_cfg` Mass only sets car+0xB0, +0xB4 |
| Inertia args | 1.0, 1.7, 1.8 | desc+0x24..2C |
| Damping args | 0.05 (double, +0x38), 0.6 ×3 (doubles, +0x40..50), body and wheels | `FUN_00429710`, `FUN_004294f0` |
| Spring | Body point 500 m along y, to wheel; rest `500 - pre_tension` | `FUN_004fc4f0` `local_3b0` |
| k, relax damp | VDYNS, per wheel | desc[0xa4..a7], [0xa8..ab] |
| Compress damp | 0.2 × relax | `FUN_00429710`, `local_9c`, `local_94` |
| Max body force | 80000 per wheel | `0x479c4000` ×4 |
| Pre-tension | F `(g/k_f)*(-b)*0.5/(b-a)`, R `(g/k_r)*a*0.5/(b-a)`; a, b = front, rear wheel z + COM z | `0x4a2aca-0x4a2b69`, vtable+0x18 |
| Stabilizer | Per axle, VDYNS 0x214, 0x250 | desc[0xb4,0xb5], `FUN_004f8220` |
| Torque actuators | One per wheel (car_ivp+0x44+4i), one on body (+0x40) | `FUN_004fc4f0`, `FUN_004f8040` |
| Body counter-torque factor | 0.1 | desc[0x97], car_ivp+0x128 |
| Body Extra Gravity | Constant force `ExtraG * mass * g` at object origin, along gravity. Actuator car_ivp+0xAC | template[0x30]; anchor template[0x31] = 0 |
| Body downforce | Actuator car_ivp+0xA8, anchor y = 2.0 m (desc[0x99]), force 0 at creation | template[0x32] |
| Wheel materials | 2, shared per axle | `%s_%d_WheelMaterial` |

## C10. Wheel state and visuals

- Handler `FUN_0044ea60` → `FUN_00435470` → `FUN_00435ab0`: for wheels 0-3, wheel world matrix × inverse car rotation, translation = wheel position - car position, rotated into car space, **relative Y clamped to ±5 world units** (`FUN_00435a70`). Written to `obj(sub i)+0x10`. These matrices are relative to the car.
- Sub-objects (`FUN_004a8600`: `car+0x7C+4i`, count car+0xAC): 0-3 wheels (`FUN_00435760`), 4, 5 front lights, 6, 7 rear lights (`FUN_00436170`, `FUN_00436850`), 8 window (`FUN_00437370`: vertex writer using the camera eye, for the player always, for others on a mesh condition).
- `FUN_00436850` takes `DAT_006fba2c` as the brake-light flag.
- **Skid level.** `FUN_0044ea60` (`0x44ecca-0x44ed4c`): `s = (0.5*vx)^2 + (omega_x(wheel 2)*r_2 + vz)^2`; `ctrl+0x14 = (int)sqrt(s)` if wheel 2 or 3 has contact, else 0, clamped 0..10 (`FUN_00403050`). Fed to `FUN_00444de0` (`gfx_skid.cpp`) from `FUN_0044cb80`.
- Wrapper getters `FUN_004a2e70` (omega_x), `FUN_004a2eb0` (radius), `FUN_004a2ee0` (rest position) reject index ≤ 0: wheel 0 gives 0, 1.0 and no value. Do not use them for wheel 0 in tests.
- Before the start (`DAT_006fba9c == 0`) the handler zeroes `ctrl+0x14`, `ctrl+0x1C`, car+0xBC, +0xC0, +0xC4, +0xCC each tick and returns before reading input.

## C11. State table

Bases (VAs; packed structs, floats unaligned, use `DataView`):

```
ctrl  = 0x6fbabc
car   = u32[0x715e50] + i32[0x6fba58]*0xF0
obj   = u32[0x73b0d0] + i32[car+0x24]*0xA9
sub_i = u32[0x73b0d0] + i32[car+0x7C+4*i]*0xA9
phys  = u32[car+0x10]
ivp   = u32[phys+0x30]
core  = u32[u32[phys+8]+0xA4]
wheel_i = u32[phys+0x34+4*i]
act_i = u32[ivp+0x44+4*i]
cam   = u32[0x719b50] + i32[0x6c3518+4*i32[0x6c3568]]*0x178
```

| Item | Location | Type | Notes | Evidence |
|---|---|---|---|---|
| Player object index | `0x6fba58` | i32 | | `FUN_0042a3d0` |
| Player car in league | `0x6fba5c` | i32 | | `FUN_0044e340` |
| Physics present | car+0x18 == 1, car+0x10 != 0 | i32, ptr | | `FUN_004aa0c0`, `FUN_00429710` |
| World matrix | obj+0x10 | 16×f32 | D3D rows right, up, forward, pos; world units, Y up | `FUN_004aa0c0`, `FUN_004a1e20`, `FUN_004a5970` |
| Position | obj+0x40..48 | 3×f32 | Translation row | same |
| Position copy | obj+0x50..58 | 3×f32 | Copied right after the matrix | `FUN_004aa0c0` |
| Position, player copy | `0x6fba80..88` | 3×f32 | From obj+0x50 in the handler, so one step older | `FUN_0044ea60` |
| Start rotation | obj+0x74..7C | 3×f32 | **Not updated by physics.** Use the matrix | `FUN_004aa0c0` has no write |
| Local velocity x, y, z | car+0xBC, +0xC0, +0xC4 | f32 | m/s, car space, +z forward, signed | `FUN_004aa0c0`, `FUN_004a1ea0`, `FUN_004b42a0` |
| Velocity, player copy | `0x6fba8c..94` | 3×f32 | | `FUN_0044ea60` |
| HUD speed | `0x6fba64` | i32 | km/h, signed | `0x44ebad` |
| Gear (0-based) | phys+0xE4 | i32 | Freezes at gas 0, brake 0 | `FUN_004a2f70` |
| RPM | phys+0xBC | f32 | The 16× value, C3 | `FUN_004a2f70` |
| Controls | `0x6fbabc` steer, `0x6fbac0` brake, `0x6fbac4` gas | f32 | ±100, 0..100, 0..100 | `FUN_00402de0`, `FUN_00402e40`, `FUN_00402ea0` |
| Skid level | `0x6fbad0` | i32 | 0..10 | `FUN_00403050` |
| Handbrake, turbo | `0x6fbad4`, `0x6fbad5` | u8 | | `FUN_00403040`, `FUN_00403100` |
| Airtime | `0x6fbaec` | f32 | s | `FUN_00403170` |
| Dynamics record | `0x6fbae4` | i32 | VDYNS index | `FUN_00403140` |
| Brake-light flag | `0x6fba2c` | i32 | Digital input modes only | `input.md` C6 |
| Turbo fuel | `0x6fba74` | i32 | | `FUN_0044e970` |
| Steering angle | ivp+0x13C | f32 | rad | `FUN_004fc3d0` |
| Wheel torque | act_i+0x74 | f32 | N·m | `FUN_0050d610`, `FUN_004fbd50` |
| Wheel limit | act_i+0x70 | f32 | rad/s | `FUN_004fbd50` |
| Wheel omega | act_i+0x94 | f32 | rad/s, stale at torque 0 | `FUN_004fbd50`, `FUN_004fc4d0` |
| Wheel contact | wheel_i+0x25 | u8 | | `FUN_00403170`, `FUN_004a2240` |
| Wheel world position | wheel_i, `FUN_004a1dd0` | | World units | `FUN_00435ab0` |
| Wheel rest position | phys+0x44+0xC*i | 3×f32 | Object space, world units | `FUN_004a2590`, `FUN_004a2ee0` |
| Wheel pose rel. to car | sub_i+0x10 | 16×f32 | C10 | `FUN_00435ab0` |
| Rear wheel lock | ivp+0xB8, +0xBC; phys+0xE8 | ptr; u8 | Joint when locked; latch | `FUN_004fcc40`, `FUN_004a2f70` |
| Wheel radius mean | phys+0x74 | f32 | m | `FUN_004a2590` |
| Body counter-torque | u32[ivp+0x40]+0x74 | f32 | Sticky, C4 | `FUN_004fc2d0` |
| Turbo push vector | u32[phys+0x10]+0x80..88 | 3×f32 | Ipion axes, y negated | `FUN_004a5c70` |
| Core position | core+0x188, +0x190, +0x198 | f64 | Metres, Ipion axes, centre of mass, not object origin | `FUN_004f41b0` |
| Core matrix | core+0x128 | f64, stride 0x20 | Ipion axes | `FUN_004fc480` |
| Core speed, rot speed | core+0xA4..AC, core+0x94..9C | f32 | m/s, rad/s | `FUN_004fc480`, `FUN_004f43e0` |
| Camera eye, target, up | cam+8, cam+0x54, cam+0x60 | 3×f32 each | World units | `FUN_00438670` → `FUN_004b3a60` |
| Camera slots | `0x6c3518`[10], active `0x6c3568`, array `0x719b50` | i32, ptr | Stride 0x178 | `FUN_00438670` |
| View matrix | `0x73b434` | 16×f32 | LookAt result, passed to SetTransform type 2 | `FUN_00438670`, `decompiled.c` 52532 |
| Projection matrix | `0x73b3f4` | 16×f32 | SetTransform type 3 | `0x44c328`, `0x451895`, `decompiled.c` 73836 |

Order inside `FUN_0044cb80`: `FUN_004a9870` (object handlers, `FUN_0044ea60`: reads the last sync, input, torques) → `FUN_00438670` (camera, view matrix) → `FUN_0044da30` (draw) → `FUN_004aa0c0` (Ipion step, writes obj+0x10, car+0xBC..C4) → `FUN_0044df10` (present).

**So the original draws the state from before the physics step.** For an exact frame, a renderer must snapshot car matrices at `FUN_0044da30` together with `0x73b434`. Reading at the end of the tick pairs the new car pose with the old camera. Tests should read after `FUN_004aa0c0`. Game state, chunks, damage: `simulation-core.md` C9.

# Inferred

## I1. Ipion slot names

Vtable `0x578568` by code shape and my memory of Ipion's car interface, not by strings: +0x04 do_steering_wheel, +0x18 change_spring_pre_tension, +0x20 change_wheel_torque, +0x24 update_body_countertorque, +0x28 change_body_downforce, +0x2C fix_wheel, +0x30 get_body_speed, +0x34 get_wheel_angular_velocity, +0x3C do_steering.

Listener slots `0x577210`: +8 friction created, +0xC friction deleted. If so, one contact ending clears the flag while another still holds, so airtime can tick briefly on the ground.

Left and right: wheel 0 is -x, read as left under the D3D convention.

## I2. Gears in practice

Rolling wheels, r 0.4 m, RPMmax 4500, stock ratios, all four wheels equal: `rpm(g) = Gear*3.8*60*(8*omega/pi)`. Upshifts at 4.0, 5.1, 8.6, 11.2 km/h. Above about 11 km/h the car stays in index 4, so torque is constant. So the five-speed box only matters from a standstill. Reading the factor as an averaging mistake is my guess; the arithmetic is not.

## I3. Forces (rbar cancels, all wheels the same radius)

- Top-gear drive, whole car: `3.04*HP*447420/(RPMmax*2*pi)/r`. 80 HP at 4500: 9620 N. Against 1200 kg total (600 + 4×150): 8 m/s².
- Reverse and standstill brake: per wheel `BrakePower*10000*0.5` N: rear 7500, front 2500, total 20000 N. That is about double the 80 HP forward drive, and grip-limited in practice. Records 1, 12, 22 at level 0: total 10000 N.
- Forward braking: double, 40000 N before grip.
- Reverse top speed by the same rule: MaxSpeed. Check this first in a port test, since it looks high.
- The 447420 = 10 × 745.7 × 60: engine power in watts per HP, to torque at RPMmax, with an extra factor 10 and then 0.5. No evidence of why.

## I4. Tilt with Body Extra Gravity

COM y -11 units is 1.1 m below the object origin (`FUN_004a14f0`). Extra gravity acts at the origin, so its line passes above the COM. When the car tilts, the force makes a torque toward more tilt: about `1.5*600*9.81*1.1 = 9700 N·m * sin(tilt)`. On the ground springs resist this; in the air nothing does. So jumps tend to amplify pitch and roll. Static reading, not observed.

## I5. Sticky counter-torque

Body and wheel actuators are built with the same anchor order (`+x`, `-x`, `FUN_004fc4f0`), so positive body torque has the same sense as forward wheel roll: nose down. After a full brake it stays at up to 1600 N·m (r 0.4, forward: 16000 × 0.1). At typical spring rates that is under 1°. It does not explain nose-up.

## I6. Test expectations

From the owner's patch notes, runs under Wine, gas held on a flat road (`README_technical_spel.dat.md`, part 9): top speed 26 to 28 at 30, 60, 120, 240 FPS with a correct clock; 8.3 at about 450 FPS; car height normally 1.30 to 1.37. The notes give no units or car. 26 to 28 fits `car+0xC4` in m/s at MaxSpeed 100 km/h (27.8). A port test: run at 60 Hz, hold gas on a flat stretch, expect `car+0xC4` to plateau near MaxSpeed/3.6 and `act_i+0x94` near `max_omega`.

# Unknown

- **Turbo push after release: settled.** No clear exists. `FUN_004f9680` normalises the stored vector in place on the first PSI after each set, so after the last set a unit vector stays: about 66 N, not 100+ N·s per PSI (C8). The owner's notes read the same in the stored values (set 480, stored 1.000).
- **Why 450 FPS loses speed** (`README_technical_spel.dat.md`, "Why is not established"). Not explained here.
- **Object callback car+0x70** (`FUN_0042c710`, `FUN_0042d820`): a scan for `MOV reg,[..+0x70]` followed by `CALL reg`, and `CALL [..+0x70]`, finds no dispatch, while car+0x6C is dispatched in `FUN_004a9870` (`0x4a993c`, `0x4a996e`). If it is dead, the wheel-height code at `0x6c30b8` and key `F` never run, and wheel poses come only from `FUN_00435ab0`. Not proven.
- **Meaning of the damping args** 0.05 and 0.6, and the 1.0, 1.7, 1.8 inertia args: names not established. They run unchanged.
- **Ipion solver internals:** constraint solver object `FUN_0050e460`, friction solving, sleep rules. Recompiled unchanged. Rate sensitivity not established.
- **`ctrl+0x1C`** (0..10000): live writes found are 0 at `0x44ed8b`; others are in dead code (`FUN_0042877e`). No live reader traced.
- **Nose-up** in the patch notes: not explained. C4 and I5 point the other way.
