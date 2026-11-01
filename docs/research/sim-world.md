# Collisions, damage and cameras of `spel.dat`

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. The text below is as it was written.

Scope: how collision geometry reaches Ipion, what damage does, who applies impulses to cars, every camera mode. Companion to `simulation-core.md` C7 and C8 (summaries) and `input.md` C7 (keys). World units = 0.1 m (`FUN_004a4180`: physics = world x·0.1, −y·0.1, z·0.1; constant `0x5af184` = 0.1). Addresses are `spel.dat` VAs.

# Confirmed

## W1. Static track collision (`.rmp`, `.pmp`, `.cmp`)

One static Ipion object per chunk, built while loading in `rd_read_chunk_rmp` `FUN_004aba30` (`Rd_chunk.cpp`, string `chunk_%d`):

1. Reads 4 plane lists from `.rmp`: road ≤16, land ≤24, extra ≤12, rail ≤12 (fatal above). Each plane goes through `FUN_004b30c0` → `FUN_004b31a0` into temp pool `DAT_0073b040` (stride 0x8C). Pool is cleared at the end of each chunk.
2. `FUN_004a4260(&world, name, 4)`: geometry, type 4 ("mesh being built"). Only caller is `FUN_004aba30`, so the box branches of `FUN_004a0670` (types 0, 1, 3) are never used.
3. `FUN_004a1050` BeginBrushBuild (fatal string "Using BeginBrushBuild twice for geometry"): new builder at geometry+0x14, flag +0x20 = 1.
4. `FUN_004abf30` for road, land, extra and rail planes alike: 4 corners from plane+0 (stride 0x20: x,y,z first), then **2 triangles** from 6 shorts at plane+0x80 (file holds 6 i32). **All four lists collide, including `land` and `extra`.**
5. `FUN_004abdc0`: invisible rail walls (below).
6. `FUN_004ac020` → `FUN_004a1430` compiles the soup (`FUN_00512000`). Creates an object from template `MapObject`, material `ChunkMaterial` (friction 1.0, elasticity 0.1 from `FUN_004a4510(&world, name, 1.0, 0.1)`, shared by all chunks through lookup `FUN_004a4430`), filter group `DAT_00715b08` (`FUN_004a02a0`). Description +0xC = 1 (the "unmovable" field, as `FUN_004541c0` arg 11), mass unset (`FUN_004a0210` zeroes). phys+0x28 = −1.
7. `FUN_004ac310`: render side, out of scope.

Triangles (`FUN_004a1180`): world → physics by `FUN_004a4180` for each corner, as doubles, then a 3-point convex piece `FUN_00511cc0` added to the soup `FUN_00511f80`. If `FUN_00511cc0` returns null (no piece), the triangle is skipped silently.

**Rail walls** `FUN_004abdc0`: for each int in chunk list +0x104 (count +0xF0, read from `.pmp` by `FUN_004ab6d0`), rail record `DAT_0073b088 + i*0x60` (`.cmp`, `FUN_004b35f0`: 6 floats x,y,z,dx,dy,dz):

```
Y0 = chunk.y(+0x38) - 25 ;  Y1 = chunk.y + 100     // the record's y is ignored
a = (x, Y0, z)        b = (x+dx, dy+Y0, z+dz)
c = (x, Y1, z)        d = (x+dx, dy+Y1, z+dz)
tris: (a,b,c), (c,b,d)
```

125 world units tall (12.5 m), positioned from the chunk's Y, not the road height. This step adds no render geometry. Chunk header from `.pmp`: `+0x34,+0x38,+0x3C` = 3 floats, `+0xFC` 2 ints, then lists rail, left waypoint, right waypoint (`FUN_004ab6d0`).

Real data, parsed from the shipped files (`.rmp` read to its exact size):

| Track | Chunks | road | land | extra | rail | Plane tris | Walls | Plane Y range | Chunk Y range |
|---|---|---|---|---|---|---|---|---|---|
| etappe0 | 363 | 2352 | 3597 | 416 | 976 | 14682 | 593 | −50..261 | 0 |
| etappe1 | 507 | 3987 | 4886 | 780 | 1456 | 22218 | 502 | −198..1517 | −198..58 |
| etappe2 | 400 | 1872 | 4914 | 36 | 1755 | 17154 | 858 | −54..337 | −20..75 |
| etappe3 | 645 | 4241 | 7898 | 2442 | 1216 | 31594 | 836 | −96..822 | 0 |
| etappe4 | 634 | 6576 | 5490 | 1269 | 2201 | 31072 | 1119 | −47..484 | 0 |
| etappe5 | 326 | 2376 | 2758 | 841 | 635 | 13220 | 700 | 0..314 | 10..120 |
| etappe6 | 334 | 3587 | 1551 | 1641 | 553 | 14664 | 842 | −19..350 | 0 |
| etappe7 | 477 | 2666 | 6476 | 565 | 736 | 20886 | 1228 | −19..1470 | 53..671 |
| etappe8 | 607 | 2752 | 11177 | 316 | 4069 | 36628 | 1149 | −460..441 | −132..161 |

## W2. Object collision

**Generic path:** `FUN_004a79d0(obj, ...)` → `FUN_004a9130` (`obj_main.CPP`, log `Init physics for main-object (%d)`), used by track objects, traffic, parts:

- Geometry: `FUN_004a41f0` looks up by mesh name, else `FUN_004a4330` → `FUN_004a0970` → `FUN_004a0d10`: **one convex hull of all mesh vertices** (`mesh+0x84` count, `mesh+0x80` array, stride 0x20, world → physics each) via `FUN_00511d20`. Hulls are cached by mesh name. No concave objects outside the chunks.
- Material: `FUN_004a44a0(&world, friction, elasticity)` finds an existing pair, else creates `ObjectMaterial%d`. Reused across objects.
- Object name `obj%d`, factory `RealObject` (`FUN_004a4400`), damping hard-coded in the description: linear `0x3FA999999999999A` = 0.05, angular ×3 `0x3FE3333333333333` = 0.6.
- Start position = object +0x50, with **Y + 1.0** world unit. `mass < 0.1` → obj+0xB0 (inverse mass for damage) = 0; else 1/mass. Initial local velocity from args into +0xBC..+0xC4.
- `FUN_004a14f0` builds the Ipion body. Desc fields: +0x84 sphere flag (radius +0x88 × 0.1), +0x8C geometry (fatal "Geometry not defined while initing object named (%s)" if neither), +0x9C..A4 COM shift, +0xAC collision callback (installs listener vtable `0x577210`), +0xA8 → `FUN_004f21f0(body,1)`, +0xB0 → phys+0x28 = game object index (chunks use −1: `FUN_004ac020` `local_14 = -1`).

Mass, friction, elasticity per track-object type: table in `simulation-core.md` C7.

**Cars:** `FUN_00429710` (constraint car) and, for traffic, `FUN_004275e0` (rigid `FUN_004a79d0`, friction 0.9, elasticity 0.2, COM y −10). `obj+0xB0 = 1/param_5` with `param_5` = `car_cfg.ini` Mass (`FUN_0042a3d0`: `*(int*)(iVar4+0x40)`, `FUN_00429710:457`). So damage uses `car_cfg` Mass, not VDYNS mass.

**Materials:** chunk 1.0, 0.1. Car body `ObjectMaterial` 0.6, 0.1 (`FUN_00429710`), wheels `%s_%d_WheelMaterial` start 0.7, 0.5, friction then set per tick (`simulation-core.md` C5). World defaults `Rubber` .95, .9; `Steel` .7, .75; `Stone` .5, .6; `Wood` .4, .4; `Glas` .2, .95; `Plastic` .1, .4 (`FUN_004a3960`) are created but their names are referenced nowhere else.

**Collision groups.** Filter `FUN_004a3570` (vtable `0x57725c`, created in `FUN_004a3960`): two bodies collide only if `(mask_a & mask_b) == 0`. Mask = desc+0x80 → phys+0x20, set by `FUN_004a02a0`. Ids from `FUN_004a3460`: 1, 2, 4, ...; after 32 fatal `No more unique collision IDs`. Nothing resets it; one race per process.

| Bodies | Mask | Evidence |
|---|---|---|
| All chunks | id 1 `DAT_00715b08` | `FUN_004ac020` |
| Track objects, traffic, path cars, parts, script objects | id 2 `DAT_00715b0c`, shared | Arg 14 = 1 at every one of the 24 `FUN_004a79d0` call sites (asm), `FUN_004a9130` takes a new id only for arg 14 = 0 |
| Wheels of constraint cars | id 3 `DAT_006c2f38` \| car id | `FUN_004294f0`, `FUN_004294a0` |
| Constraint-car body: player, AI, cops, Supercop | New id each | Arg 13 = 0 at all 3 `FUN_00429710` call sites |

So: traffic, props and loose parts **pass through each other**, and hit only chunks and constraint cars. Wheels never touch any other wheel or their own body. Id use peaks at 21 of 32 (3 + player + 6 AI + 10 cops + Supercop on etappe 1, 3, 4; `.omp` types 9, 28).

**Parts:** `FUN_00425490`: mass 5 (`0x576560`), friction 0.7, elasticity 0.2 (asm `0x42555c`, `0x425561`), broadphase off (`FUN_004f21f0(body,0)`) until detached, object flag +0x1C |= 2. Details in W5.

## W3. Who pushes cars

All calls checked by raw scan of the file for absolute pointers and rel32 calls.

| Source | Function | What | Live? |
|---|---|---|---|
| Ipion contact solver | engine | All collision response. Game callbacks only read the event (`FUN_0044f970`) | Yes |
| Wheel constraints, gravity | `simulation-core.md` C5 | Normal driving | Yes |
| Turbo | `FUN_00428c70` → `FUN_004a2000` → `FUN_004a5c70` sets actuator vector; `FUN_004a5ce0` (vtable) applies it each PSI through `FUN_004f41b0` | `simulation-core.md` C5 | Yes |
| Traffic A | `FUN_00428950` from `FUN_00414470`, `FUN_00414640` (`ai_nwtrf.cpp`) | Table below | Yes |
| Traffic B | `FUN_00415e40` from `FUN_004161d0` | Table below | Pointer to `FUN_004161d0` stored at `0x465d57` |
| Teleport | `FUN_004a1a90`, `FUN_004a1b50` (`FUN_004f3130`): vtable `0x5771fc` +0x10, +0xC; vehicles `0x577220` +0x10 `FUN_004a2cb0`, +0xC `FUN_004a2d70` | Reset, parts | Yes |
| Reset | `FUN_0040e5a0`, 8 callers incl. Enter `FUN_0044cf90` | Teleport, not an impulse | Yes |
| Local-push API | `FUN_004a97f0` → `FUN_004a18e0` | Local impulse at local point. **All callers dead**: `FUN_00428250` (`FUN_00428320`, `FUN_00428707` have no refs), `FUN_0042fd40`, `FUN_00430860`, `FUN_00431700` (`car_trailer.cpp`, only stored from `FUN_00431320`, which has no refs) | No |
| Engine internal | `FUN_0050c4e0` (vtable slot `0x5788cc`) | Calls `FUN_004f3260` on a pair. See Unknown | ? |

Other collision callbacks do not push: `FUN_004544c0` (track objects) sets obj+0x2C = 1, `FUN_00454af0` (script objects) calls the script. `FUN_0044f960` (wheels) returns 0.

`FUN_004f3260` (async push, local point in core space) has exactly four call sites: `FUN_004a18e0`, `FUN_004a19c0`, and two in `FUN_0050c4e0`.

Traffic drive per tick (mass `m = 1/obj+0xB0`, gate: up-axis y `obj record+0x24` ≥ 0.9 in A, > 0.9 in B, so **flipped traffic gets no drive and no drag**):

| Step | A `FUN_00428950` | B `FUN_00415e40` |
|---|---|---|
| Thrust, actuator (x, 0, z), local | z = 0.8·m if gas (`ctrl[1]`) > 0; z = −0.25·m if brake (`ctrl[2]`) > 0 (brake wins) | z = 0.013·m·gas or −0.013·m·brake |
| Turn | x = −m·0.0033333·`ctrl[0]`·0.1 | same |
| Lateral kill | world impulse R·(−m·vx, 0, 0), vx = obj+0xBC, at a local point: midpoint of bbox corners +0x1C, +0x4C if vx < 0, else +0x10, +0x40 | same idea, points from `FUN_004066c0` |
| Down | world impulse (0, −m·\|vz\|·0.12, 0) at local origin (double `0x576450` = 0.12) | same |

Those impulses go through `FUN_004a4180`, so they are ×0.1 and Y-flipped before Ipion. Constants checked in asm (`0x5765e8` = 0.8, `0x5765e4` = −0.25, `0x576458` = 0.0033333). Applied by `FUN_004a9830` → `FUN_004a19c0`: local point, world impulse, per tick with no `dt`.

## W4. Hit → damage value

Event from Ipion listener: `FUN_0044f970` is the collision callback for player, AI racers, cops, Supercop, and one path car (pointer stored at `0x41e5ea`, `0x423b29`, `0x42df74`, `0x44e548`, `0x44e58b`, `0x463769`). `FUN_0044fc50` has no refs, dead. Relay `FUN_004a21d0` (listener slot 0) calls phys+0x18 of **both** bodies in the pair.

```
a = phys_a+0x28, b = phys_b+0x28                       // game object index, -1 for a chunk
n = event normal (FUN_004a20f0), v = relative speed, world units/s (FUN_004a20a0, ×10 of Ipion)
I_a = measure(a, b, v, n);  I_b = measure(b, a, v, n)
if a is a racer/cop (FUN_0040dad0 != -1): FUN_0041a5b0(a, b, I_a)     // kind 3
if b is a racer/cop:                      FUN_0041a5b0(b, a, I_b)
if neither is the player: return 0
hitChunk = name of either object starts with "chunk"    // FUN_0044ff50, 5 chars
FUN_0044fe70(player, I_own, point, hitChunk)            // kind 1, FUN_00426fe0
return 0
```

`measure(self, other, v, n)` `FUN_00427170`:

```
if self == -1: 0
I = |v|
if other == -1 or invmass(other) == 0:  I = I / (2 * invmass(self))
else if invmass(other) >= 0.0006:       I = I / invmass(other)
else:                                   I = I / 0.0006
if other == -1: I *= 1 - |n̂ · up(self)|     // up = matrix row +0x10..+0x18
```

`|v|` is the full relative speed vector, not its normal part. Hits on ground (normal along car up) measure near 0. Only chunks get that cut; a static object (inverse mass 0, index ≠ −1) does not.

`FUN_00426fe0(table 0x5d3460, car, kind, I, &point, hitChunk)`:

1. Find car in 250 entries (`this+0x10`, stride 0x14: +0 object, +4 Imin, +8 Imax, +0xC damage, +0x10 slope).
2. Player only: skip the damage when `DAT_006fbde2` (script invulnerable), `DAT_006fb8a0` ≠ 0 (race state not 0) or `DAT_006fb96c` (`Invulnerable`).
3. If `GetTickCount − last_hit < 60` (`0x3C`): `I = 0`.
4. `FUN_00425310`: if `I > Imin`: `damage = ftol(Dmin + (min(I, Imax) − Imin)·slope + damage)`, then cap at 0x44C = 1100. x87 evaluates `Dmin + (...)·slope` then `FIADD damage` (asm `0x425345`–`0x425355`). **Truncation is of the sum**, so fractions do not accumulate.
5. Effects by kind: 1 → `FUN_00426880`, 3 → `FUN_004269c0`, 4 → `FUN_00426920` (identical bodies; kind 4 has no caller). They do the part and wheel checks (W5), then particles: `I < Imin` one `FUN_0045b3b0` (particle type 1), else four and one `FUN_0045bd30` (type 7).
6. Sound `FUN_00427400`, kinds 1 and 3 only.
7. `last_hit = GetTickCount()` **for every event, even when `I` was zeroed.** Contact with events under 60 ms apart therefore does no further damage after the first, and each zeroed event still spawns the `I < Imin` particle and the soft sound.

Per-car side record at `this+0xDE6A8` stride 0x10: +0 last smoke, +4 wheels-done flag, +8 smoke position, +0xC last hit.

Sound `FUN_00427400(car, slot, I, hitChunk)`, samples from `FUN_00427340`:

| Condition | Sample |
|---|---|
| Within 300 ms of last hit and `I < Imin/3` (0.33333334) and `hitChunk` | `SCHUUR` too, then continues below |
| `I < Imin` | `SOFT_CAR_HIT1/2`, random |
| `I < Imin + (Imin + Imax)·0.5` | `MID_CAR_HIT1/2`, random |
| else | `HARD_CAR_HIT1/2`, random |

Note the mid limit as coded: 120000 for the player's 50000..90000 model, above Imax.

`damage.ini`, read by `FUN_00426a90` (`[Damage Limits]` Dmin 25, Dmax 45; `[Damage Levels]` clouds 900, wheels 900; both must be 0..1100, Dmin ≤ Dmax) and `FUN_00426bb0` (selects model by name; `param_2 == 1` uses "as player" columns; 7 fields or fatal; column 6 = smoke position). `FUN_00425240`: fatal unless Imax > Imin; `slope = (Dmax − Dmin)/(Imax − Imin)`.

| Model | AI Imin, Imax | Player Imin, Imax | Damageable car | Smoke pos |
|---|---|---|---|---|
| racer0,1,2,3,4,5, politie, polizei, truck | 70000, 90000 | 50000, 90000 | cab, hotrod, humvee, mercedes, buggy, countach, politie, polizei, truck | see below |
| dummy | 70000, 90000 | 50000, 90000 | dummy (no parts) | 1 |
| supercop | 260000, 270000 | 60000, 90000 | supercop | 1 |

Smoke position: 0 for hotrod, buggy, countach; 1 for the others. 0 → −z of bbox half, 1 → +z (W5).

Other writers of damage (`FUN_004252e0`, clamps 0..1100):

| Caller | Value | Live? |
|---|---|---|
| `FUN_0044e340` (race start) | 0 | Yes |
| `FUN_00457c00` quick service, waypoint type 2 | 0, plus turbo 100 if upgrade; sample `REPAIR`; text 48 | Yes |
| `FUN_00473cc0` script `CPlayer.damage` | `pw_reps` −100, `pw_repb` −300 (`bonus.pseudo.txt` `UPDATE<sub 3>`, `gameplay-systems.md` §16) | Yes |
| `FUN_0043cb69` `ev_tank` | −110 per 200 ms | No, `gameplay-systems.md` §17, §22 |
| `0x4510f0` | damage − 30 | No: no pointer, no call |

## W5. What damage does

Thresholds use strict `limit < damage`. Checked only when a hit event arrives (`FUN_00426880` etc.), except smoke.

**Part state machine** (`FUN_00426280`, handler `this+0x1398+i*0xE28`). Handler +0 current phase, +4 part count (max 50, `0x32`), parts at +8 stride 0x48, +0xE18 car, +0xE1C model, +0xE20 window, +0xE24 lights. Part fields, from `[Damageable Car Objects]` (`FUN_00425c30`):

| Offset | INI column | Meaning |
|---|---|---|
| +0x08 | 1 | Mesh id (`FUN_004b75a0`) |
| +0x0C | | Phase = 5 + index of the mesh in `[Damageable Cars]` (`FUN_00425fb0`: column + 2; handler +0 starts at 5). Also the render record's frame, +8 |
| +0x10 | | Object index |
| +0x14..1C | 2,3,4 | Mounted position, Y − 1.0 |
| +0x20..28 | 5,6,7 | Damaged-state position |
| +0x2C..34 | 8,9,10 | Damaged-state rotation, degrees × 1024/360 = angle-table units (`0.0027777778`, `0x5b23b8` = 1024.0; `FUN_004a5a40` truncates them) |
| +0x38 | 11 | Damaged threshold; > 1100 sets state 2 at init (body, driver, inert) |
| +0x3C | 12 | Detach threshold; fatal if < +0x38 |
| +0x40 | 14 (optional) | Group 1..10; all shipped rows have 14 fields, so **group logic `FUN_00425ac0` is inert** |
| +0x44 | | State 0, 1, 2 |
| +0x48 | | Time of entering state 1 |
| +0x4C | 13 | Remove on detach |

```
for parts of the current phase, state != 2:
  if damaged_limit < damage and state==0 and group==0: enter state 1      // FUN_00425730
  if now - t_state1 > 4000 and detach_limit < damage and state==1: detach  // FUN_00425850
if all parts of the phase are state 2 and a next mesh exists:             // FUN_00425bb0, FUN_00425be0
  phase++, render record +8 = phase, show parts of the new phase (+0x5C = 1) // FUN_004256c0
```

- **Enter 1:** teleports the part body to (+0x20) with rotation (+0x2C) in car-relative terms; callback `FUN_004253b0` keeps multiplying by the parent matrix. The part stays attached, bent.
- **Detach:** state 2, unlinks from the car's child chain (+0x44), parent +0x48 = −1, random sample `DAMAGE_GLASS`, `DAMAGE_DOP`, `DAMAGE_GLASS2` or `DAMAGE_METALBAR` (`0x595cdc`, `FUN_00425800`). Remove flag → object +0x5C = 0. Otherwise moves the body to car position + R·(+0x20) with rotation +0x2C, `FUN_004f21f0(body,1)`, wake `FUN_004f32e0`. The part is now a free body. No game code sets its velocity.
- A detach needs another hit event at least 4 s after the bend. A single huge hit bends, it does not detach.
- Damage reaching a threshold without a hit event (for example by script) changes nothing until the next hit.

**Other visuals** (`FUN_00426280`, `FUN_004266f0`, `FUN_00426530`):

| Limit | Condition | Effect |
|---|---|---|
| Window (+0xE20) | object child count (+0xAC) > 8 | Sub-object 8 hidden (`+0x90 = 0`) |
| Lights (+0xE24) | child count > 7 | Sub-objects 4,5,6,7 hidden |
| `wheels` 900 | once per car, child count > 4 | Sub-objects 0..3: angle +0x7C = 60.0 table units (21°), consumers truncate +0x74..7C and mask into the 1024-entry tables, e.g. `FUN_0041d38d` |
| `clouds` 900 | each frame, `FUN_00427130` from `handle_game` | ≥ 200 ms per car: smoke `FUN_0043dd90` at car pos + R·(rand%10−5, 5, ±\|bbox z\|/2) with car velocity |

`[Damageable Cars]` window, lights: cab 218, 162; hotrod 36, 540; humvee and supercop 54, 630; politie 333, 1101; polizei 342, 1101; dummy 1101, 1101; mercedes 360, 675; buggy 270, 405; countach 270, 360; truck 200, 550. Value 1101 can never trigger: cap 1100.

Shipped `damage.ini` has 128 part rows over 10 meshes (7 to 21 parts each; body and driver rows inert). First bend at damage 0 (cab `CHE_A04`, remove flag) to 200 (truck); last bend 450 to 810; last detach 450 to 950. Only the Humvee has a second phase: fase1 (15 parts, 2 remove flags, all gone by 450), then fase2 (14 parts, up to 837). Other remove flags: none.

**Total loss:** `FUN_0044c950`: player damage > 1098 in state 0 → state 6 (`simulation-core.md` C2, `gameplay-systems.md` §6). AI, cops: > 1099 in their FSMs (`FUN_00405610`, `gameplay-systems.md` §11, §12).

**Second part-loss system is inert:** `FUN_0042b730` (per-object callback for connected objects, detaches when parent +0x64 ≠ 0 and damage > obj+0x58; free fall −100 wu/s²) only attaches through `FUN_0042b550`, and shipped `car_cfg.ini` has `[Connected Object Types] count=0`, `[Connected Object Assignments] count=0`.

**Damage does not affect driving:** no read of the damage record in `FUN_00428c70`, `FUN_004a2f70` (`simulation-core.md` C7). All 20 callers of getter `FUN_00425300` checked: parts, smoke, total loss, AI records and FSMs, HUD `FUN_0043fa50`, `FUN_00492180`, `FUN_0048a230`, results `FUN_0044b1c0`, script getter, the dead and inert paths above. None feeds the car model.

**Repair does not restore visuals:** repair paths only write the number (`FUN_004252e0`). None touches part state, `+0xDE6AC`, or sub-object `+0x90`, `+0x7C`. Part reset exists only as visibility `FUN_00426fc0(car, flag)` (`FUN_00426460` sets object +0x5C for all parts), called from `FUN_00408f00`, `FUN_00413520`, `FUN_00465010`, `FUN_00465345`.

## W6. Cameras

### Structure

`FUN_00437fd0` (`init_cameras`, from `FUN_0044c200`) allocates a `T_ARRAY` of 10 (`DAT_00719b50`, stride 0x178, `FUN_004b0a30`, `FUN_004b0a60`), uses 9. Slot table `DAT_006c3518[]` → array index, active slot `DAT_006c3568`, per-slot chunk `DAT_006c3540[]`. Slot names from the log strings in `FUN_00437fd0`:

| Slot | Array idx | Name | Setup | Ever active? |
|---|---|---|---|---|
| 0 | 0 | player | `FUN_00438d20`: target car `DAT_00599c84` = player, eye = car + (0,15,0), lock (0, 20, −150), then view 1 | **Yes**, all race views |
| 1 | 1 | start | `FUN_00437950`, empty | No |
| 8 | 2 | temp | `FUN_004380f0`: pos lock on `DAT_005d3318` (0, 30, −90), target lock (0, 0, 0) | No |
| 9 | 3 | ai cockpit | `FUN_004381f0`: pos lock (0, 13.5, 0) | No |
| 3 | 4 | topview | `FUN_00438290`: eye = player + (0,15,0), pos lock (100, 15, 0), target lock (0, 15, 0) | No |
| 4 | 5 | tankstation | `FUN_00437970` | Only `FUN_0043c885`, `FUN_0043cc70`: dead |
| 6 | 6 | any | `FUN_00437910` | **Yes**: game over, caught |
| 7 | 7 | any | `FUN_00437930` | Only `FUN_004397f0` (view 0xE) |
| 5 | 8 | any, `DAT_006c352c` | | **Yes**: finish |

"Ever active" = all 14 call sites of `FUN_00438410` (`change_active_camera`) read. Array index 7 test in `FUN_00438670` selects the free-camera handler `FUN_00439910`.

Camera record layout: `simulation-core.md` C9. Additions: constructor `FUN_004b0b20` defaults are mode −1, +0x80 (up from matrix) = **1**, all flags 0, damp factors 1.0. `FUN_004b1110` sets +0x6C and factors +0x88..90 and copies eye to prev +0xA0; `FUN_004b1150` clears it, factors 1. `FUN_004b1190` sets position lock with object (render record index, `obj+0x24`) and offset, `FUN_004b1210` the offset only (fatal if unlocked), `FUN_004b1260` clears. `FUN_004b1290`, `FUN_004b1310` same for target lock.

**Dead fields:** only the constructor (value 0) writes +0x70 target damping (asm `0x4b0c67`) and +0x7C follow mode with its 5-entry history (`Follow positions`, `Follow orientations`, asm `0x4b0c7d`).

`FUN_004b1060` (set eye) is fatal when position lock or follow is on; `FUN_004b10b0` (set matrix) likewise.

### Update `FUN_004b1380(cam)`, once per `FUN_00438670` call, no `dt`

```
if position lock:
    M = matrix of lock object; cam.matrix = M
    if mode == 1:
        v = lock object's game object +0xBC..C4           // local velocity, m/s, FUN_004aa0c0
        s2 = vx²+vz²; s = sqrt(s2)                        // y ignored
        if s2 > 150: STORED = 2*offset.z * (vx, 0, vz)/s  // global 0x719bb8, shared; init (0,25,-80) by FUN_004b1340, CRT table 0x58d988
        k = clamp(s*0.01, 0.1, 0.25)
        damp.x = k; damp.z = k*2.5                        // damp.y unchanged
        w = M.rotate(STORED)
    else:
        w = M.rotate(offset.x, 0, offset.z)               // offset.y excluded
    eye.x = obj.x + w.x; eye.z = obj.z + w.z
    eye.y = obj.y + offset.y                              // WORLD Y, not rotated (asm 0x4b1668-0x4b16f5)
target = eye + cam.matrix.forward
if target lock: target = obj.pos + M_target.rotate(lock_offset)
if damping:                                               // space of the TARGET-lock object +0xC8
    d = M_t⁻¹.rotate(eye - prev); d *= (damp.x, damp.y, damp.z); eye = prev + M_t.rotate(d)
up = +0x80 ? cam.matrix.up : (0,1,0)
rebuild orthonormal cam.matrix from target-eye and up   // FUN_004b40b0, 40d0, 40f0
prev = eye
```

Correction to `simulation-core.md` C8: for mode ≠ 1 it shows `pos = objpos + R*offset`. The code rotates only (x, 0, z) and adds `offset.y` along world Y. So all views hold a fixed height above the car whatever its tilt; bumper too.

Each tick `FUN_00438670`: keys; chunk lookup `FUN_004af230(&0x715250, slot chunk, old eye)` → `DAT_006c356c`; `FUN_004b1380`; `FUN_004b3a60(eye, target, up, 0)` → `0x73b434`, `SetTransform(VIEW)` (`win32-surface.md`); yaw `trunc((atan2(dz/h, dx/h) − π/2)·1024/2π)` to `FUN_004457d0`. It uses the pose of the previous physics step (`simulation-core.md` C2).

Slots 5, 6 keep the constructor's +0x80 = 1 and have no damping: game over takes up from the car (position lock copies its matrix), finish and caught from their own last matrix.

### Views, `FUN_004390d0(id)`

`DAT_00599c80` = current id, `FUN_004390c0` getter. All write to slot 0 and force active slot 0. Ids 0..0xD except 3 set car visible (obj+0x54 = 1), target lock (obj, 0, 10, 0), +0x80 = 0.

| Id | Offset x,y,z | Mode | Damping | Used for |
|---|---|---|---|---|
| 0 | 0, 30, −80 | −1 | 0.245, 0.1, 0.7 | Key 2 |
| 1 | 0, 25, −52.5 | −1 | same | Slot 0 init, game over |
| 2 | 0, 38, −55 | −1 | same | no key |
| 3 | 0, 15.5, 12 | −1 | **off** | Key 4. No target lock, up from matrix, **car hidden** (obj+0x54 = 0) |
| 4 | 0, 20, 75 | −1 | **not touched**, keeps previous factors | Key 3 hold |
| 5, 6, 7, 8, 9, 0xB | 0, 26, −33 | 1 | k-driven x,z; y 0.1 | Character views |
| 0xA | 0, 33, −33 | 1 | same | Ratter |
| 0xC | 0, 40, −40 | 1 | same | Piet |
| 0xD | 0, 45, −55 | **−1** | 0.245, 0.1, 0.7 | Abu |
| 0xE | | | | Free camera `FUN_004397f0` |
| other | no-op | | | |

Damping constants: `FUN_00438d00` from static init, `DAT_006c3578..80` = 0x3E7AE148, 0x3DCCCCCD, 0x3F333333 (0.245, 0.1, 0.7). No other writer. `game.ini [CAMS]` is read only when `DAT_006fb950` (tweak) is set (`FUN_00437fd0`).

Default view = `DAT_006fba5c + 5` (`FUN_0043c5d0`, key 1), `DAT_006fba5c` = player's car index, `game.ini [PLAYER] car` (default `car=0`): Edgar 5, Tommie 6, James 7, Katharine 8, Barbara 9, Ratter 0xA, Telebuggy 0xB, Piet 0xC, Abu 0xD (`car_cfg.ini [league1]` order). Effective mode-1 eye distance is 2·|offset.z|: 66 world units (6.6 m) for 0, 26, −33, along the travel direction once above 12.25 m/s (44 km/h); below that, the last stored local direction stays. Reversing faster than that puts the eye in front of the car. At the grid STORED is still (0, 25, −80), so the eye sits 8 m back until the first time above that speed.

### Keys, `FUN_00438670` (cross-check `input.md` C7: all match)

Polled by `GetAsyncKeyState` wrapper `FUN_004c5e40`, each tick, in this order, each only in race state 0 (`DAT_006fb8a0 == 0`):

| Key | Action |
|---|---|
| `1` | view `5 + car`. Manual: Dynamische camera |
| `2` | view 0. Statische camera |
| `3` | held: first tick saves current id to `DAT_00599728`, view 4. Released while view is 4: restores. Achteruitkijk camera |
| `4` | view 3. Bumper camera |
| `6 7 8 9 0` | views 6, 7, 8, 9, 10. **Not tweak gated**, not in the manual. View 10 for any car is the Ratter framing, 6..9 equal the default framing |
| `5` | Not a camera, HUD (`input.md` C7) |

Level-triggered, so holding re-runs `FUN_004390d0` each tick; that re-copies eye to prev, which has no effect since the update overwrites prev too. Tweak only (`DAT_006fb950`, shipped 0): `U` → 0xE, `I K J L A Z R T` + mouse edit the offset of the active slot (`FUN_00437990`, `FUN_00437a80`), `M` cycles target (`FUN_00438f00`, `input.md` C8), `+ −` scale FOV ×1.1, ×0.9090909 (`FUN_0044cf90`).

### Scripted sequences (registered in `FUN_0044cda0`)

| State | Enter | Slot | Eye | Target | Notes |
|---|---|---|---|---|---|
| 1 start | `FUN_0043c5d0` | 0 | View `5+car` | | If a `.pth` path of type 1 exists: `FUN_004632e0` path flight in slot 6 (1000 ms wait, one point per tick, then eye += (slot-0 pos − eye)·0.1 until within 1.0). **No shipped `.pth` has type 1** (record field +8: 0, 3..7, 12, 14, 17, 18), so never runs |
| 3 finish | `FUN_0043ab70` | 5 | Fixed: chunk table `0x715254` entry [chunk+3], `.pmp` pos, y + 40 | Player + (0, 20, 0) | Sample `FINISH_JUICHEN`. Finish path also sets obj+0x54 = 1 (`FUN_00456b20`) |
| 6 game over | `FUN_0043bc20` | 6 | Orbit around player | Same lock as view 1: (0, 10, 0) | View 1 first, its offset copied (`FUN_0043b680`). Update `FUN_0043bd60`: offset = (cos(a)·r, y, sin(a)·r), `r = 52.5`, `y = 25`; `a` starts at −1024 (`&0x3FF` = 0, so at the car's right), step per tick = `ftol(4096 / ftol(8/dt))` with `dt` sampled once at entry. 1024 units = one turn, so about 0.5 turns per second. Tables `DAT_0073b578` cos, `DAT_0073b530` sin (`FUN_004bc4e0`). No damping |
| 8 caught | `FUN_0043a910` → `FUN_0043a690` | 6 | Fixed. Cop known (`FUN_004072b0`): cop pos + 40·û + (0, 30, 0), û = unit(cop − player). Else chunk table entry [chunk+1], y + 20 | Player + (0, 20, 0) | Saves id and slot; id 3 → car visible. Exit `FUN_0043a9f0` restores both if still state 8 |

Exit keys of game over: Esc, Enter, Space, after 1000 ms (`FUN_0043bd60`).

### FOV

| Item | Value | Evidence |
|---|---|---|
| Variable | `DAT_006fb974` z, start 0.375 | `FUN_00449b30` |
| Projection | `FUN_004b39d0(m, near = 0.5/z, far = 12500, fov = z·π)` | `FUN_0044c200`, `FUN_004517f0` |
| Matrix | c = cos(fov/2), s = sin(fov/2), q = s·far/(far−near). m00 = m11 = c, m22 = q, m23 = s, m32 = −near·q, m33 = 0 | `FUN_004b39d0` |
| At z = 0.375 | fov 67.5°, near 1.3333 | |
| Aspect | Not in the matrix. Viewport clip height 2·H/W (`win32-surface.md`, patch notes part 2) | |
| Easing | Each pass of `FUN_004517f0`, when z ≠ target `DAT_005a28b8`: `z += (target − z)·dt/DAT_005a28bc`, matrix rebuilt. Defaults 0.375, 1.0 (data section) | |
| Script | `ChangeFOV(fov, sec)` `FUN_00474940`. `pw_fastf`: 0.6 over 1 s, back to 0.375 over 0.5 s (`gameplay-systems.md` §16) | |

Near plane moves with FOV: at z = 0.6, fov 108°, near 0.8333. The easing has no snap, so the matrix is rebuilt every pass until float rounding makes z equal the target. No camera mode changes FOV.

# Inferred

**I1. Ipion names.** Going by the `IVP_SurfaceBuilder_Pointsoup`, `IVP_SurfaceBuilder_Ledge_Soup` strings and my memory of the API: `FUN_00511cc0` point soup to ledge (a triangle becomes a flat two-sided ledge, winding does not matter), `FUN_00511f80` insert into soup, `FUN_00512000` compile, `FUN_00511d20` convex hull, `FUN_004a3570` collision filter callback, `FUN_004f3260` async push, `FUN_004f3130` beam to position, `FUN_004f21f0` enable collision detection, `FUN_004f32e0` ensure in simulation. Argument order of `FUN_004a4510` (friction, elasticity) comes from the same memory. The names are mine.

**I2. Attached parts** are created asleep (desc+0xA9 unset, so no `FUN_004f32e0`) with collision off. So they neither fall nor collide until detach, then drop from rest under gravity.

**I3. Hit speeds** from `measure` and the shipped numbers. Masses from `car_cfg.ini` (racers 600, Piet and Abu 1500, traffic 600 or 6000). World units/s, ÷10 for m/s. Perpendicular to `up` for walls.

| Situation | I per wu/s | Player: first damage (25) | Player: max (45) | AI: first, max |
|---|---|---|---|---|
| Own mass 600 into chunk | 300 | 167 wu/s, 60 km/h | 300 wu/s, 108 km/h | 233, 300 wu/s (84, 108 km/h) |
| Hit by mass 600 | 600 | 83 wu/s, 30 km/h closing | 150 wu/s, 54 km/h | 117, 150 wu/s |
| Hit by mass 1500 | 1500 | 33 wu/s, 12 km/h | 60 wu/s, 22 km/h | 47, 60 wu/s |
| Hit by mass > 1667 (traffic 6000) | 1667 (cap) | 30 wu/s, 11 km/h | 54 wu/s, 19 km/h | 42, 54 wu/s |
| Own mass 600 into a fixed prop | 300 | as chunk, with no up-axis cut | | |

Total loss needs 44 hits at 25 down to 25 at 45 (damage > 1098).

**I4. Double firing.** If Ipion fires each body's own listener (my memory of its event system), a contact between two listening cars runs `FUN_0044f970` four times through the relay. The 60 ms lockout then is what stops double damage: first call counts, the rest see `I = 0` and only make soft sound and particles. Consistent with the code; not observed.

**I5. Timing for the host.** Lockouts use `GetTickCount` (60 ms hit, 200 ms smoke, 300 ms scrape, 4000 ms detach, 1000 ms game-over keys), while camera smoothing is per tick with no `dt` (`simulation-core.md` C4). Both follow from the code. With `f` per tick at rate `R`, the time constant is −1/(R·ln(1−f)): for 0.245 about 119 ms at 30 Hz, 59 ms at 60 Hz. So camera feel depends on tick rate, and `GetTickCount` must advance with game time.

**I6. Rendering meaning.** Window sub-object 8 and light sub-objects 4..7 are named from the `damage.ini` comment; the hidden meshes were not looked at. Wheel angle 60 being a visible camber is read from the consumers, not seen.

**I7. Nothing here needs a host rewrite.** Ipion, collision building, damage and cameras are all inside `spel.dat` and run as recompiled. The host sees them only as `SetTransform` calls, sounds, particles and draw state. Parsing `.rmp` is needed only by host-side tools.

# Unknown

- `FUN_0050c4e0` (vtable slot `0x5788cc`, object made in Ipion environment constructor `FUN_004f7320`): impulse on two bodies along the line between their cores, scale (|g| + 9.81)·env+0xC0·core+0x20. When Ipion calls it was not traced.
- `FUN_004457d0` → `FUN_004456e0`, consumer of camera yaw. Out of scope.
- Whether `[PLAYER] car` can be ≥ 9. `[league1]` also lists `CHICK` (9) and `TEST` (10..12). Index 9 would make key 1 and race start select view 0xE (free camera slot 7) without tweak mode; 10 and up give a no-op, leaving view 1. Menu side not checked.
- Meaning of `DAT_00715254` beyond "indexed by chunk" (the finish and caught eyes use entries +3 and +1, each a chunk index into `DAT_00715f00`).
- `FUN_00474d49`, `FUN_00474f46`: script objects with arg 13 = 1 (`InitPiledObjectPhysics`). Effect of arg 13 (desc+0x10) not traced.
- Runtime: nothing here was run, and `dynamic/RESULTS.md` has no entry on cameras, damage or collisions.
