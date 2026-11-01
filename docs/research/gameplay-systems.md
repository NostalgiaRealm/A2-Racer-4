# Race rules and non-player systems in spel.dat

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: section 19 (event 9). The rest of the note is as it was written.
>
> Davilex's two official updates were found in the installation after this note was written ([`../provenance.md`](../provenance.md), [`../../original-game-decompiled/original/updates/README.md`](../../original-game-decompiled/original/updates/README.md)). "INI" below still means the disc's files. The per-track lists stopped at etappe 8, and track 9 now has its files: added in place in sections 11, 13 and 16 (cops, flitspalen, pickups). The traffic table in section 14 and the path table in section 15 were not redone for it.

All addresses are `spel.dat` virtual addresses (image base 0x400000). Function names in `code` without a quoted string source are mine. "INI" means `original/install/<file>`. Angle units are 4096 per turn (`0x800` = 180 deg, evidence: `0x4191xx`, `0x41a300` window tests). Speeds on objects are m/s unless stated (evidence below).

---

# Confirmed

## 1. Data model (offsets are facts, field names are mine)

**Object record** `OBJS = *0x715e50`, stride `0xf0`, up to 250 cars in the damage table.

| Off | Meaning | Evidence |
|---|---|---|
| +0x10 | physics object | `0x419450` |
| +0x1c | flags, `\|3` player/cop, `\|2` | `0x407300`, `0x44e340` |
| +0x24 | mesh instance index; world position at `*0x73b0d0 + idx*0xa9 + 0x50/54/58`, matrix at `+0x10` | everywhere |
| +0x2c | object state used by Tob handlers (0..3) | `0x454990` |
| +0x30 | 3D sound slot | `0x40d490` |
| +0x34 / +0x38 | current / previous chunk | `0x4a70a0`, `0x456b20` |
| +0x3c | current waypoint | `0x412410` |
| +0x44 | trailer object index or -1 | `0x453480` |
| +0x50 | road side 0/1 | `0x40e340` |
| +0x54 | visible | `0x451420` |
| +0x58 / +0xb0 / +0xb8 | bonus `fadeouttime` / `respawntime` / `effectduration` | setters `0x474130`, `0x474100`, `0x4741d0` |
| +0x5c | active | `0x408520`, `0x415d20` |
| +0x60 | collision-damage enable style flag | `0x408e10` |
| +0x6c | per-frame callback, returned 1/0 | `0x407300`, `0x41ed30`, `0x44ea60`, `0x419600` |
| +0x70 | collision callback (`0x42d820`) | `0x41ed30` |
| +0xbc/+0xc0/+0xc4 | local velocity x/y/z. **+0xc4 forward in m/s**: player speed `0x6fba64 = v*3.6` (`0x44eb9b`, constant `0x5763b0` = 3.6) | asm |
| +0xc8/+0xcc/+0xd0 | angular speed (bonus `anglespeed` getter returns +200) | `0x474080` |
| +0xe0 | bonus "effect running" flag | `0x451420` |

**FSM record** `0x5ce9e8`, stride `0x294`, 19 records: 0..5 racers, 6..17 cops (12), 18 supercop (`0x40db30`).

| Off | Abs | Meaning |
|---|---|---|
| 0x00 | 5ce9e8 | object index, -1 free |
| 0x04 | 5ce9ec | state |
| 0x08 | 5ce9f0 | previous state (transition target 999 returns to it) |
| 0x0c | 5ce9f4 | time in state, s |
| 0x10 | 5ce9f8 | "just entered" byte |
| 0x14 | 5ce9fc | tactic step index |
| 0x18 | 5cea00 | tactic step timer, s |
| 0x1c | 5cea04 | tactic pointer |
| 0x20 | 5cea08 | racer hurry mode: 0 none, 1 hurry, 2 hold back (`0x41a300`) |
| 0x24.. | 5cea0c | racer `TARGETPOS[10]` (value-1, so 0 = -1 = none) |
| 0x4c | 5cea34 | target object |
| 0x50 | 5cea38 | racer driven chunks (signed), compared with player `0x6fbab4` |
| 0x54 | 5cea3c | racer laps done |
| 0x5c | 5cea44 | path index for FOLLOW_PATH |
| 0x60 | 5cea48 | lateral lane preference: 0 centre, 1, 2 |
| 0x64 | 5cea4c | supercop damage copy |
| 0x68 | 5cea50 | general timer |
| 0x6c | 5cea54 | **stuck timer**, s. Set to 0 whenever chunk changes and value >= 0 (`0x417ea0`). Init -10.0 (`0x40d410`) |
| 0x70 | 5cea58 | break-free timer |
| 0x74 | 5cea5c | "no control" timer: while >0 the car coasts, v.x*=1-dt*0.25, ang*=1-2dt (`0x403cd0`) |
| 0x78 | 5cea60 | time since a cop started chasing this racer; set 1.0 at chase start |
| 0x7c | 5cea64 | racer flags |
| 0x84 | 5cea6c | last chunk |
| 0x88 | 5cea70 | previous chunk |
| 0x8c | 5cea74 | last lap trigger seen (0xe/0xf) |
| 0x90 | 5cea78 | speed limit seen by this racer, m/s |
| 0x94 | 5cea7c | car controller: +0 steer -100..100, +4 brake, +8 gas, +0x18 handbrake byte, +0x19 turbo byte, +0x28 dynamics index, +0x30 no-wheel-contact timer (`0x403170`) |
| 0xc8 | 5ceab0 | "corrected" spin timer |
| 0xcc | 5ceab4 | transition table pointer |
| 0xd4 | 5ceabc | behaviour index (supercop) |

Controller setter evidence: `0x421d20` writes gas/brake/handbrake/turbo in the order the debug strings at `0x40b380` print them (`Gas`, `Brake`, `Handbrake`, `Turbo`). `0x402de0` clamps steer to +-100.

**Globals**

| Addr | Meaning | Source |
|---|---|---|
| 6fba58 / 6fba5c | player object / player car index | `game.ini [PLAYER] car` (`0x44aa20`) |
| 6fba60 | unused player damage copy, clamp 0..1100 | `0x450420` |
| 6fba64 | player km/h int | `0x44eba2` |
| 6fba68 | money, clamp 0..999999 | `0x450300`, `[PLAYER] money` |
| 6fba6c | radar bonus, clamp 0..30 | `0x450260` |
| 6fba70 | checkpoint money, clamp 0..999999 | `0x450290` |
| 6fba74 | turbo 0..100 | `0x450110`, `[PLAYER] TURBO_AMOUNT` |
| 6fba7c | player chunk | `0x44ea60` |
| 6fba98 | finished flag | `0x456b20` |
| 6fbaa0 | total race time ms | `0x4504f0` |
| 6fbaa4 | player position, 0-based | `0x4128a0` |
| 6fbab4 | player driven chunks, signed | `0x44ea60` |
| 6fb898 / 6fb958 | etappe / league | `[ETAPPE] etappe`, `[LEAGUE] league` |
| 6fb8a0 | game state | `0x44cda0` |
| 6fb8d4 | difficulty 0 easy, nonzero hard | `[OPTIONS] difficulty` (`0x44a0d0`) |
| 6fb8e8 / 6fb954 | `[ETAPPE] DIRECTION` / `british` | `0x44acb0`, `0x449550` |
| 6fb8f8 / 6fb8fc | laps done / `[OPTIONS] NRLAPS` (1..999; forced to 1 when track Arg0=0) | `0x449e20` |
| 6fb8ec / 6fb8f0 | lap record / race record ms; 0 in INI becomes `0xfffffff` | `0x449ea0` |
| 6fb95c/60/64/68/6c | `[Options] Police`, `traffic`, `opponents`, `BonusCountDown`, `Invulnerable` | `0x449230` |
| 5d2ab0 | `intel.ini [General] NrOpponents` = 4, fatal if >6 | `0x449460` |
| 59becc | pending text index for the 2.75 s in-race message, -1 none | `0x494f10` |
| 59a190 | game over mode | `0x43bc20` |
| 71277c | overlay screen mode | section 8 |
| 6fa58c / 6fa618 / 6fa61c | track table stride 0x94 (`idx*0x25` dwords): Arg0 highway(0)/city(1), Arg10 timer, Arg14 track mode | `raser.ini [MAPS]`, `0x44a690` |

## 2. Game state machine `0x44cda0`

Value goes to `0x6fb8a0`. Side effects listed are all that the setter does.

| State | Meaning | Set by | Registers game action |
|---|---|---|---|
| 1 | pre-race | `start_game 0x44cf60` | action 2: `0x43c5d0` / `0x43c650` / `0x43c660` |
| 0 | racing. `0x6fb8c0=1`, `0x6fba9c=1` | countdown stage 4, end of arrest | none |
| 3 | finishing | `0x456b20` | action 4: `0x43ab70` / `0x43ac80` / `0x43ad40` |
| 8 | arrest | `0x409160` only (unreachable, section 6) | action 0xb: `0x43a910` / `0x43a980` / `0x43a9f0` |
| 6 | game over | `0x44c8c0`, `0x44c950`, `0x43a980` | action 0xc: `0x43bc20` / `0x43bd60` / `0x43be50` |
| 4 | exit. `0x6fb8c0=0`, `0x6fba9c=0`, `0x6fb89c=0` ends the `WinMain` loop `0x458270` | `0x43ad40`, `0x43be50`, `0x44c9f0` | none |
| 2 | unused setter case | none | none |

Game actions (`0x43c120`, 13 slots, each init/tick/exit, tick returning nonzero ends it, driven by `0x43c260` per frame). Registered slots: 0 flash, 1 countdown, 2 start, 4 finish, 5 `0x43b280` (no effect, see trigger 17), 9 `0x43a450` (trigger 7), 0xb arrest, 0xc game over.

Frame order `handle_game 0x44cb80`: timer update `0x4a6700`, input, `rceng_handle_objects 0x4a9870(chunk, visible*2)`, `ai_check_cars_outside_handling_range 0x41ca20`, cameras, sound, particles, `check_game_keys 0x44cf90`, `0x427130` (smoke for damaged cars), `0x44c950` (total loss), reset hint, render, path update `0x464cf0`/`0x464cb0`, `handle_game_actions 0x43c260`, `0x44c8c0` (out of time), HUD, flip, frame drop check, pause/quit. Then `0x4517f0` (bonus timers, FOV) and `0x41c150` (radio) from `WinMain`.

`0x44cb30`: in state 0, if fps < 10 and visible chunks > 15 (flag `0x6fb8d0` off) or > 25 (flag on), visible chunks `0x6fb8b0` decreases by 1 per frame.

## 3. Timers `gm_clock.cpp`

Array `0x6fa3e8`, 18 records (`0x448290` fatal otherwise), 0x14 bytes: +0 duration ms, +4 start tick (-1 unstarted), +8 countdown flag, +0xc initted, +0x10 pause tick (0 none). All based on `GetTickCount`, so timers are real time, not simulation time.

API: init `0x448610(i,ms,countdown)`, start `0x4482c0`, pause `0x448330`, resume `0x4483a0`, get `0x448470` (0 if unstarted; count-up clamped to duration; countdown clamped at 0), set `0x448570(i,ms)` (sets duration, restarts if started), expired `0x4486a0` (false if unstarted).

| # | Duration, mode | Init | Start | Purpose |
|---|---|---|---|---|
| 0 | `Arg10*1000` = 10,000,000 ms, up | `0x44bf10` | trigger 13 | lap time. Restarted each lap by `0x456a30`. `lap_N_time`, splits, HUD `STRING_RACE_TIME_VALUE` |
| 1 | 5000, down | `0x4550c0` from `0x453440` | same | traffic light cycle (section 17, type 4) |
| 2 | 200, down | `0x43c885` | `0x43cab0` | fuel station. Unreachable, section 17 |
| 3 | `0xfffffff`, up | `0x4504c0` from `0x4500b0` | trigger 13 | total race time. `0x4504f0` copies to `0x6fbaa0` and pauses at finish |
| 4 | none | never | never | unused, no reference |
| 5 | 500, down | `0x4556e0` | same | werklamp blink: 500 on, 1000 off (`0x455690`) |
| 6 | none | never | never | unused, no reference |
| 7 | 500, down | `0x4559d0` | same | werkpijlbord blink: 500 / 1000 (`0x4557b0`) |
| 8,9,10,12,13,14 | `0xfffffff`, up | `0x42e290` if opponents | trigger 13 via `0x42e300` | race time of racer 0..5; `0x42e340` stores it and pauses |
| 11 | `checkpoint_value*checkpoint_speed`, down | `0x44bf10` | trigger 13 | checkpoint countdown, section 4 |
| 15 | sum of seconds*1000, down | `0x451640` | same | invulnerable |
| 16 | same | `0x4516d0` | same | freeze racers |
| 17 | same | `0x451760` | same | fast forward |

Pause list (`0x44ca80`): timers 0, 3, 11 and the six racer timers (`0x42e440`/`0x42e4a0`). Timers 1, 5, 7, 15, 16, 17 keep running during pause.

## 4. Laps, checkpoints, finish

Triggers are per chunk, two per chunk (`chunk+0xfc`, `+0x100`), fired for the player by `0x4a70a0` when the chunk changes, for the higher of old/new chunk (wrap handled). AI racers read them themselves in `0x412410`, plus the waypoint trigger (`wp+4`). Trigger table `0x5a3ab8`, 69 entries, registered in `0x457820`:

| Id | Func | Action |
|---|---|---|
| 1 | `0x457880` | flitser check, section 13 |
| 2 | `0x457c00` | quick service: if waypoint type (`wp+4`) == 2: if `[PLAYER] turbo` upgrade `0x6fbb48`, turbo=100; damage=0; sample `REPAIR`; text 48 |
| 3 | `0x457870` | empty |
| 4/5/6/8 | `0x4578f0`/`900`/`910`/`920` | flitser limit `0x5a3ab0` = 50/70/100/120 km/h. Default 70 (`0x457900` in `0x457820`) |
| 7 | `0x457930` | game action 9 toggle; flag `0x6c35a4` has no other reader |
| 9 | `0x457f50` | `0x6fbab0=1` if player; no reader |
| 13 | `0x457ab0` | one-shot (`0x5a3edc`): start timers 0, 11, 3 and racer timers |
| 14 | `0x456b20` | finish line |
| 15 | `0x456bf0` | arm finish: `0x6fcde0=1` |
| 16 | `0x456d40` | if player: fog colour vars 0,0,255; `0x6fce0c`=3.5, `0x6fce10`=2000.0; `0x6fcdf8`=1 |
| 17 | `0x456d90` | `0x6fcdf0=0`, restores fog render state. `0x6fcdf0` has no non-zero writer (asm `0x457024` is the only store), so the colour wash tick `0x43b280` (action 5) never acts |
| 45 | `0x457e40` | checkpoint |
| 48..57 | `0x457960..` | radio location index 0..9 (`0x41aa60`, `0x41ae70`) |
| 58..61 | `0x456600..` | `system_goleft`, `goright`, `gofork`, `gozigzag` |
| 62 | `0x456050` | `~game_position_0(N+1)`, N = player position 0..4 |
| 63 | `0x455e90` | `~call_for_backup`, one-shot `0x5a384e` |
| 64 | `0x455f70` | `~go_for_it` |
| 65 / 66 | `0x456390` / `0x456470` | `~junction_ahead_left` / `right`, one-shot `0x5a384f` / `0x5a3850` |
| 67 | `0x455cc0` | `~challenge_at_start`, one-shot `0x5a384c` |
| 68 | `0x455da0` | `~challenge_at_finish`, one-shot `0x5a384d`, only when laps done >= NRLAPS-1 |

Unlisted ids are NULL in the table (`0x4a6c40` skips NULL at dispatch).

**Start chunk.** `0x457ae0` finds the chunk with trigger 13, returns that chunk-1. Used unless `[OPTIONS] STARTCHUNK` is set (`0x44c200`). `0x456c00` finds trigger 14.

**Finish `0x456b20`.** Accepted only in state 0, 7 or 8 and when `0x6fcde0 != 0`.
- `prev chunk < chunk` (forward): `0x456a30` then, if laps >= NRLAPS, `0x456b00` (race time, race record), state 3, `0x6fcf8c = timer 11 remaining`, object +0x54=1, finished=1, position clamped to NrOpponents.
- otherwise: `0x6fcde0=0` ("car is trying to finish illegal"), so the line must be re-armed by trigger 15.

**Lap `0x456a30`.** Lap time = timer 0; `lap_time[laps]=t` (max 999); laps++ clamped to NRLAPS; if t < lap record: record=t and current splits copied to best splits; else if laps == NRLAPS-1: text 45 `LAATSTE RONDE`. Note the text is only shown when no lap record was set. Timer 0 restarts, split index resets, `0x5a3ee8` keeps the split count.

**Checkpoint `0x457e3f`.** Requires `0x6fb968` (BonusCountDown) and `0x457dd0`: driven chunks >= 0 and not within chunk+-1 of a checkpoint already recorded this lap (records `{chunk, lap+1}` at `0x6fce80`, counter `0x6fcf90`).
- Track mode 1: `0x457da0`: timer 11 = remaining + `0x6fcf8c` (110,000 ms), sample `CHECKPOINT`.
- Track mode 0: `0x457d20`: split `0x6fce28[n]=lap time`; `0x6fcf80 = t - best split` if a lap record exists else 0; max 10 splits (fatal beyond). No sound.
- Both: text 44 `EXTRA TIJD`, `0x6fcf88=1`.

**Checkpoint time.** `0x44bf10`: `speed = [PLAYER] checkpoint_speed` (110; if <1 then 50); `0x6fcf8c = [PLAYER] checkpoint_value * speed` = 1000*110 = 110,000 ms; if <1 then 5000. Timer 11 starts at that value on every track.

**Out of time `0x44c8c0`.** Only track mode 1 and state 0: if timer 11 expired: mode 1, state 6. Below 6 s remaining: sample `TIME_TICK` once per displayed second.

**AI laps `0x412270`** (trigger value `t`): 4/5/6/8 set own limit (`MaxSpeed60/80/120`, `NoMaxSpeed`, m/s). 0xf: last=0xf. 0xe: on highway: racer finishes at once. On city: if last==0xf and chunk > prev chunk: laps+1, last=0xe, if laps >= NRLAPS finish. Otherwise only last=0xe. Finish: `0x42e340` (stores time) and state FINISHED. Cops: `0x4123d0` sets FINISHED on 0xe/0xf on highway tracks.

## 5. Race positions

`0x4128a0`, per frame from `0x44ea60`. Skipped if opponents disabled (position 0).
- Player position = count of racers with driven chunks greater than player's, tie break by bearing `0x412130(player, racer pos)==0`. Frozen once finished (`0x6fba98`).
- Racer position (only unfinished, `+0x5973d0==0`) = same count against other racers; +1 if >= player position.
- Position change sends `~racer%dpassing` when player falls back (racer now one position ahead) and `~racer%dpassed` when player gains; arg = racer car index (`0x5973c0`). Message object index is that racer.

**Results at end `0x42e150`** (from `0x44afe0`, only if finished and opponents on). Unfinished racers: `time += (time / (total - toGo)) * toGo`, `total = chunks*NRLAPS`, `toGo = player chunks - racer chunks`. Position = count of lower times, +1 if >= player position.

`0x42e0d0`: racer start positions: lowest free slot not taken by player position.

## 6. Game over, arrest, penalties

| Mode `0x59a190` | Cause | Overlay mode | Text |
|---|---|---|---|
| 0 | `0x44c950`: player damage > 1098 in state 0 | 6 | `STRING_RACE_OVER` + `STRING_TOTAL_LOSS` |
| 1 | `0x44c8c0`: out of time | 0xc | `STRING_RACE_OVER` + `STRING_TIME_UP` |
| 2 | `0x43a980`: caught 3 times | 7 | `STRING_RACE_OVER` + `STRING_ARRESTED`. Unreachable, below |

Game over action: `0x43bc20` selects overlay and starts an orbit camera (angle table, step from frame time, start angle -0x400). `0x43bd60`: after 1000 ms, ESC, Enter or Space ends it. `0x43be50`: state 4. `0x6fba98` stays 0, so no prize data is written.

**Arrest is dead code in v1.01.** The arrest chain is `state INIT_ARREST(5)` handler `0x409160` -> `0x44cda0(8)` -> `0x43a910`/`0x43a980`. Evidence:
- State 5 has no writer. Every writer of the state field: table targets (`0x413000`, `0x413250`, `0x41e910`, none is 5, 6 or 7), direct stores (`0x40d6a3`=0x1a, `0x40d817`=0x18, `0x40da04`=0x13, `0x4091fe`=7 inside `0x409160`, `0x412339`/`0x412402`=9), `0x40d470` callers (0x19, 0x1d, 0x29, stored behaviour), `0x40d410` (init values).
- `RacerCloseAndStopped 0x4043dc` and `ArrestReady 0x40452f` have no call and no pointer anywhere in the file (raw byte scan for rel32 and imm32).
- `StopSpeed` is read only by `0x4043dc`. `ChaseTimeEasy/Hard` and `GiveUpDist` only by `0x40492a`, which also has no reference.

Consequently `g_times_caught 0x6c35c0`, texts 49/50 (`EERSTE/LAATSTE WAARSCHUWING`), samples `ARREST_*` and radio event 3 never occur.

**Money penalties and bonus.** Flitser fine -50, flitspaal hit +100, section 13. Texts 1, 7, 9, 11 (`BOETE: FL %d`) are referenced only by old HUD code `0x43e130`, see section 17.

**Lap times** have no penalty rule. Going backwards makes driven chunks fall (`0x44ea60`), which blocks checkpoints when negative and lowers position.

## 7. Countdown

`0x43c5d0` (action 2): if a path of type 1 exists, start camera path `0x4632e0` (duration +1000 ms); its exit `0x463350` then starts action 1. No shipped `.pth` has type 1 (section 15), so action 1 starts at once and `0x4390d0(car+5)` runs.

Action 1 `0x43c380`/`0x43c3d0`/`0x43c510`:

| Stage | Wait | Then |
|---|---|---|
| init | | sample `START_ENGINES`, `0x5a2a58=1` if not -1, overlay 1, `0x42f0a0(0x6fb9c0)` |
| 0 | 2.2 s | overlay 8 (digit 3) |
| 1 | 0.9 s | overlay 9 (digit 2) |
| 2 | 0.9 s | overlay 10 (digit 1) |
| 3 | 0.9 s | overlay 0xb (GO) |
| 4 | | state 0 every frame; if copland text 47; after 1.0 s action ends, overlay 1 |

Total 4.9 s to race start. Timers do not run yet: race time starts at trigger 13 (start line), not at GO. `0x4961f0` drives element +0x20 at overlay 8, +0x1c at 9, +0x18 at 10, +0x24 at 0xb, scale `1+8*t/dur` over 0.9 s (GO 1.0 s) (`0x496110`). Sample `GO` exists in `sound.ini`; its caller was not traced.

## 8. Overlay screens and results

Mode `0x71277c`: 1 normal, 2 pause, 3 quit, 5 finish, 6 total loss, 7 arrested, 8..0xb countdown, 0xc time up. `0` and `5` hide the statistics group (`0x496e20`).

**Requestors `0x4950c0`** (`Ovl_Requestors.cpp`), elements by offset (`0x495330`): +0x18 body, +0x20 turnaround frame, +0x24/28 pause header/text, +0x2c/30 quit header/text, +0x34 game text, +0x38 race over, +0x3c total loss, +0x40 arrested, +0x44 time up, +0x48 finish text.

| Mode | Shown |
|---|---|
| 2 | pause header+text+body |
| 3 | quit header+text+body |
| 5 | finish text |
| 6 / 7 / 0xc | race over + total loss / arrested / time up |

Wrong way: `0x429360(player)==0` blinks `OVL_TURNAROUND_FRAME` when `frac(time) > 0.4` (`0x5764ac`).

Game text: `0x494f10` shows `0x59becc` text, alpha `255 - t/2.75*255`, visible 2.75 s. A new text replaces the old at once.

| Index | Dutch text | Trigger |
|---|---|---|
| 44 | EXTRA TIJD | checkpoint; cheat Ctrl+Space+T |
| 45 | LAATSTE RONDE | `0x456a30` |
| 46 | INVINCIBLE | Ctrl+Space+I |
| 47 | COP MODE | start with copland |
| 48 | QUICK SERVICE | trigger 2 |
| 49/50 | EERSTE/LAATSTE WAARSCHUWING | `0x43a540`, unreachable |
| 51 | FLITS BONUS +100 EURO | flitspaal hit |
| 56..65 | bonus texts | script `PrintText` |
| 66 | RESET (ENTER/RETURN) | reset done |
| 67 | FLITS BOETE -50 EURO | flitser |
| 68 | DRUK ENTER/RETURN VOOR RESET | controller +0x30 > `RESETWAITTIME` (10) |

**Statistics `0x496b10`**: `STRING_CUR_LAP` (+0x18) text 39 + ` %d/%d`, `STRING_CUR_POS` (+0x24) text 38 + ` %d/%d` (`0x5adc0c`, `0x5adc14`), `STRING_RACE_TIME_VALUE` (+0x20) = timer 0, `STRING_COUNTDOWN_TIMER` = timer 11 only when track mode 1 (hidden otherwise, `0x496dd0`), format `%02d:%02d:%d` (`0x497230`).

**Wait screen `0x4976d0`**: `OVL_PROGRESS_BAR` visible in mode 0.

**Finish sequence.** `0x43ab70`: chase camera, sample `FINISH_JUICHEN`. `0x43ac80`: wait 1500 ms, then overlay 5 (and `0x43fdd0(1)` if `0x6fb8d0`), wait ESC/Enter/Space then release. `0x43ad40`: radar bonus = `0x6fbdec`, finished=1, state 4. In state 3 `0x44ea60` forces gas, brake, turbo to 0.

**Data written `0x44afc0`** (at exit via `0x4490a0`), all to `game.ini`:

`0x44b1c0` always: `[PLAYER] finished`, `lap_%d_time` (1-based, lap count entries), `lapcount`, `out_of_time` (timer 11 == 0), `total_loss` (damage >= 1000). `checkpoint_money` internal = `0x6fcf8c / checkpoint_speed` (remaining ms / 110).

If finished: `money`, `TURBO_AMOUNT`, `radarbonus`, `checkpoint_money`, `tracktime`, `position`, `DAMAGE_MESH` (8 ints), `DAMAGE_VALUE` (8 floats), `damage` (final car damage).

`0x44afe0` if opponents and finished: `[RACERS] N=car,position,time`, `DAMN`, `VALN`.

`0x44ae80` if finished: `LAP_RECORD_E%d_L%d`, `RACE_RECORD_E%d_L%d`, `TIME_CHECK_COUNT_E%d_L%d`, `TIME_CHECK_E%d_C%d_L%d`.

Prize money is **not** computed in live `spel.dat`: `0x4501c0` (table 55000, 35000, 15000, 0...; x4 on last track; 5000 if last and easy) is called only from `0x43e130`/`0x43e4c0`, which have no references.

## 9. Pause, quit, reset, restart

`0x44cf90`, not in state 6 or 3:
- `P` (0x50): overlay 2, `0x6fb8d8=1`. `Esc` (0x1b): overlay 3, `0x6fb8d8=2`.
- Handled after the frame is flipped twice: `0x44ca80` saves and silences mixer channel 4, pauses timers, then blocks:
  - Pause `0x44c990`: wait P release, then any of 256 keys pressed and released.
  - Quit `0x44c9f0`: wait Esc release. `J` or `Y`: state 4 and return. `Esc` or `N`: wait release and resume. Dutch J and English Y both work.
- On resume: overlay 1, timers resume, frame timer reset `0x4a6840`.

**Reset.** `CM_KEYB_RETURN` on `keyboard0` -> `0x40e5a0(player, chunk, 1)`; text 66 if done. `0x40e5a0`: with throttle param, refused unless > 5000 ms since last reset. Up to 10 chunks forward (direction by `DIRECTION`), first waypoint of the chunk on the object's side with no car on it (`wp+0x24==0`). Car placed at road height + 20, heading from `0x4a6e80`, chunk/prev/waypoint set. Also called with throttle 0 as "corrected" by `0x419600`, `0x407300`, `0x41ed30`, `0x44ea60` when `0x419450` (any |component| > 10 of the vector from `0x4a1d20`) holds > 0.25 s.

**Restart.** None in `spel.dat`. One process runs one race: `WinMain 0x458270` loops while `0x6fb89c`, then exits; `A2Racer4.exe` relaunches the menu.

**Cheats, active in release.** Ctrl+Space+T on highway tracks: text 44, timer 11 = 100,000 ms. Ctrl+Space+I: text 46, `0x6fb96c=1`. Ctrl+F10: `0x458400`. `0x6fb950` (`raser.ini TWEAK_MODE`, 0 shipped) gates camera and debug keys.

## 10. Opponent AI

**Setup.** `0x42de60`: racers on grid `start chunk - position`, cars `RACER_%d`, callback `0x419600`. `0x42a3d0` type arg: 1 player, 3 AI racer (wheeled vehicle via `0x429710`), any other type a plain rigid body with car_cfg mass, friction 0.9, elasticity 0.2 (so traffic has no wheel physics). For type 3 only, `0x429710` scales the car's max speed and RPM fields with `MaxSpeedPenalty{Easy,Normal,Hard}` = 90/120/200 % and `MaxRPMPenalty{...}` = 115/80/50 %, indexed by league (`&0x5d1b74 + league*4`).

**Per frame `0x419600`.** Corrected check; if not paused and not frozen: `0x40d490` (one transition) and `0x412570` (state handler, path bookkeeping `0x417ea0`, triggers `0x412410`). Then `0x435470(obj, IsRacerBraking)` where `IsRacerBraking 0x403750` = gas field != 100, and `0x41a300` (target position).

**FSM racers `0x413000`, first match wins, table order:**

| From | To | When |
|---|---|---|
| RACING, BREAK_FREE, IRRITATING, AGGRESSIVE, PUSHING_L/R | PENALTY_BONUS | freeze flag; never fires, FSM is skipped while frozen (`0x419600`) |
| PENALTY_BONUS | RACING | freeze off |
| RACING | BREAK_FREE | ObjectStuck `0x404c90`: stuck > 2.0 s |
| BREAK_FREE | RACING | BreakTimeElapsed `0x404eb0`: timer > 2.5 s; gas 100, brake 0, stuck = -5 |
| RACING | IRRITATING | `0x404f30`==1 |
| IRRITATING | RACING | `0x405190`==0 |
| RACING | AGGRESSIVE / PUSHING_L / PUSHING_R | `0x404f30`==2/3/4 |
| those | RACING | `0x405190`==0 |
| all above and PENALTY_BONUS | TOTAL_LOSS | damage > 1099 |

`0x404f30` by flag:
- 8 IRRITATING: `-2 < chunkDiff(self,player) < 8` and racer position < player position.
- 0x10 AGGRESSIVE: same chunk, bearing to player < 0x52c or > 0xad4.
- 0x20 PUSHING: same chunk, player > 35 m/s, bearing 0x200..0x600 -> 3, 0xa00..0xe00 -> 4.

`0x405190` stay conditions: IRRITATING: `0 < chunk distance < 6` and still ahead. AGGRESSIVE: player on waypoint link 7 or 6 of own waypoint. PUSHING: target >= 30 m/s, |chunks| < 2, bearing still in window.

All shipped `opponent.ini` lines use `IRRITATING` and one skill word; AGGRESSIVE and PUSHING never occur with shipped data. `[Racer N Level L]` key = etappe, N 0..3 (Racer 4 section header is empty).

**State handlers** (`0x412570`, jump table `0x4127b4`):

| State | Id | Handler | Does |
|---|---|---|---|
| RACING | 0 | `0x419e00` | side 0, follow path, stuck timer += dt |
| FINISHED | 9 | `0x419000` | handbrake on, steer += 75*dt, gas 0, brake 0, turbo off. Applied directly |
| BREAK_FREE | 10 | `0x419e80` | when stuck >= 2: gas 0, steer `20-rand%40`, timer 0, stuck -3. Else brake += 100*dt; timer counts while speed < 2 |
| IRRITATING | 20 | `0x419f70` | target=player, side = lane relation `0x4235f0`, follow path |
| AGGRESSIVE | 21 | `0x41a000` | same as 20 |
| PUSHING_L/R | 22/23 | `0x41a1a0` | steer to waypoint + lateral offset `0x41a090` |
| UNDER_ARREST | 7 | `0x41a520` | unreachable |
| TOTAL_LOSS | 27 | `0x41a6d0` | gas, brake, steer 0, not applied again |
| PENALTY_BONUS | 28 | `0x41a720` | same, unreachable |

Ids 1..4, 11..14, 16, 17, 32 are not in the table: `Fatal "State missing"`. States named FAR_AHEAD, FAR_BEHIND, FOLLOW_GHOST, MAKE_SPACE etc. therefore do not exist as behaviour.

**Route following.** Each frame `0x418890`. Five route slots at `0x5d2b70` (stride 12: valid byte, speed, waypoint), built by `0x418280` from waypoint links `0x423290(wp, dir)`, dir 0 = wp+0x18, dir 1 = wp+0x14, dir 2 = wp+0x1c (waypoint stride 0x50):

| Slot | First link, second link |
|---|---|
| 0 | 0, 0 |
| 1 | 0, 1 (else 1, 0) |
| 2 | 1, 1 |
| 3 | 2, 1 (else 1, 2) |
| 4 | 2, 2 |

Slot speed = lowest of curve speed `0x422c00` on its waypoints and traffic speed `0x423560`. `0x418100` scans other cars on the own waypoint by bearing: `<0x200` or `>0xe00` and slower than self: invalidates slot 2. `0xa00..0xe80`: invalidates 0, 1. `0x180..0x5ff`: invalidates 3, 4.

`0x418710` selection by lane preference `0x5cea48`: preference 0: 2,1,0,3,4; 1: 1,2,0,3,4; 2: 3,2,4,0,1. A valid slot with speed > own speed is set to MAX (1.7e38 if waypoint flag 4). First MAX slot in order wins, else the fastest valid, else `0x4185c0`. So overtaking is route choice, no separate state.

Steer `0x403a70`: angle to target waypoint; `|a| < MinAngle(0)` 0; beyond `MaxAngle(400)` +-100; else `a/SteerFactor(4)`.

Speed `0x4038a0`: angle to 6-links-ahead waypoint `0x4188c0`, |a| clamped 500.
- Corner speed `0x403440`: NOVICE `60-a/15`, NORMAL `60-a/17`, else `60-a/19`.
- Hold back mode 2: replaces the corner value with `speed of car at position+1 - SlowDownFactor (30*0.25=7.5)`, floor 10 (`0x403977` asm).
- `0x403490` limit, take lower.
- Route speed `0x5d2b74[route]` if lower and stuck timer >= 0.
- PUSHING: also cap at target speed.
- `0x4037a0`: below target gas += 100*dt, brake 0; above: brake += 200*dt, gas 0.
- Turbo only: mode 1 and |a| < 50.

**Rubber band `0x403490`** (`intel.ini`, all *0.25 m/s):

| League | If player > CatchUpSpeed (17.5) | Cap |
|---|---|---|
| 0, 1 | chunk lead > CatchUpFarChunk (40) | playerSpeed - Far (12.5 / 8.75), floor 10 |
| 0, 1 | chunk lead > CloseChunk (15 / 20) | playerSpeed - Close (5 / 1.25), floor 10 |
| 2 | no such rule | |

Then, when racer is ahead of player: for the racer at position+1: if its speed >= 20 and chunk gap > `Distance` for that position (`opponent.ini [Level L] DISTANCEnm`) cap = its speed - 5. Default no cap 3.4e38.

Distances: L0 14,10,10,10,10; L1 10,10,10,12,12; L2 20,10,10,14,5.

**Target position `0x41a300`.** `n = floor(0.1 * racerChunks*100/(chunks*NRLAPS))`, clamped 0..9.5; `t = TARGETPOS[n]`. If `t==-1` mode 0. `t < pos` mode 1. `pos < t` mode 2. Equal: if mode 1 and not last and gap to next position car >= 5 chunks: mode 0, else stays.

**Collisions `0x41a5b0`:** damage kind 3 for that car; if other is player: `~racer%dcollision` from that racer.

## 11. Police

**Spawn.** `.omp` type 9 objects. `0x4536e0` builds `COP%c` with char = name[7]-1: `police01_ANIM` -> `COP0`, `police02_ANIM` -> `COP1` (`car_cfg.ini` traffic list: mass 600, type 7, `dam_dummy`). `0x423a50`: parked, callback `0x407300`, sound `POLITIE_SIRENE`, damage model from car data.

Per track: etappe 0: 2, 1: 10, 2: 4 (police01); 3: 10, 4: 10, 8: 1 (police02); 5, 6, 7: 0; 9, from the track update: 3 (2 police01, 1 police02).

**Detection `0x412e20`** runs while not yet in FSM, from `0x407300` and for traffic with flag 0x2000 (`0x415d20`, no setter found). `c = cop chunk - 2` (wrap).
1. For racers: `racer chunk == c` and racer speed >= its limit -> chase it.
2. Player: `player chunk == c` and `0x40e340` finds a speed trigger walking from the cop backwards. Trigger 4: speed > 12.5 m/s, 5: > 17.5, 6: > 25, 8: > 0 (`MaxSpeed60=50, 80=70, 120=100, NoMaxSpeed=0`, *0.25). No trigger found: defaults to 8.

**Chase start `0x40d6f0`:** needs Police on, not type 2 unless league 2; free cop slot; cops already on target < limit: racer `CopsPerRacer`=1, player `CopsPerPlayerEasy/Hard`=4/4. Sets state FOLLOW_TACTIC, target, radio event 1 if player, target's chase time=1.0, flags |3, side = player side, active siren `0x423990`, traffic slot |0x4000, callback, tactic, stuck=-3.

**Tactics `0x407730`.** Per-cop-type lists never load: `0x4079a0` loops on `0x58fd68`, a constant -1 with only reads (`0x407b93`, `0x407c81`). So every cop uses `[Track N Tactics] Default=0,1` at random, all tracks:

| Tactic | Steps (stage, seconds) |
|---|---|
| 0 | BESIDE 2, INTO 4, BESIDE 1, MEGAPHONE 2, BESIDE 1, INTO 5 |
| 1 | FRONT 3, MEGAPHONE 2, BESIDE 5, INTO 3 |

Stage ids `0x4074c0`: BESIDE 0, SIGN 1, INTO 2, MEGAPHONE 3, HANDBRAKE 4, FRONT 5, ROAD_BLOCK 6, PUSHING 7, STATUS 8. Table: 30 tactics of 20 pairs at `0x5c9b10`, default stage -1.

Step timer `0x408cb0`: next step when timer > seconds. Timer advances only while the step's condition holds.

| Stage | Func | Behaviour |
|---|---|---|
| BESIDE | `0x4081e0` | same chunk and bearing 0x300..0x500 or 0xb00..0xd00: match speed (`0x407d90`), lane opposite relation, timer runs. Else behind: catch up `0x407ed0`; ahead: `0x408030` |
| INTO | `0x408410` | same chunk, bearing 0x200..0x600 or 0xa00..0xe00: drive target's lane, match speed, timer runs |
| MEGAPHONE | `0x408370` | centre lane, match speed, timer, radio event 5 if target is player |
| FRONT | `0x408120` | diff<1 catch up; diff>1 slow; diff==1 hold and timer |
| HANDBRAKE | `0x408a00` | same lane and diff 2, or handbrake byte already on: handbrake, steer -100, timer runs |
| PUSHING | `0x408b50` | like BESIDE with lateral offset |
| SIGN | `0x408320` | lane match, timer (not in shipped INI) |

Speed helpers: `0x407ed0` cap `target + max(0, 5-3*diff)`, brake 400*dt above; `0x408030` cap `target-5`; `0x407d90` cap target speed.

**FSM cops `0x413250`:**

| From | To | When |
|---|---|---|
| FOLLOW_TACTIC | BREAK_FREE | `0x405500`: stuck > 2 and target > 20 m/s; else stuck=0 |
| BREAK_FREE | FOLLOW_TACTIC | timer > 2.5 |
| FOLLOW_TACTIC | HANDBRAKE_TURN | cop more than 3 chunks ahead of target and step not ROAD_BLOCK. Handler `0x4191c0`: handbrake, steer += 75*dt, no gas or brake |
| HANDBRAKE_TURN | FOLLOW_TACTIC | not more than 3 ahead |
| FOLLOW_TACTIC | GIVE_UP | tactic finished (stage -1) |
| ACT_LIKE_TRAFFIC | KILL_COP | > 30 chunks from player |
| FOLLOW_TACTIC | GIVE_UP | |chunk diff| > 50 |
| GIVE_UP | ACT_LIKE_TRAFFIC | always, next frame |
| all | TOTAL_LOSS | damage > 1099 |

GIVE_UP `0x408df0`: radio event 2 (no sample, `0x43a5a4` returns -1). ACT_LIKE_TRAFFIC `0x408e10`: follows path, capped 16 m/s, no siren. KILL_COP `0x408f00`: object +0x5c=0, damage reset, target's chase time=1.0, `0x40da60` frees the FSM slot.

Regular cops start only from their parked `.omp` position. There is no arrest; contact only causes physics and damage.

**FSM roadblock dead.** `0x408520` and `0x40894a` have no reference; `0x40d640` (ROADBLOCK state) is called only from `0x408520`. State handler `0x409070` therefore unused.

**Blockade cars (live, path types 13..18).** `pth_ptrf 0x4658e0` at race load creates, per path, a car: types 13..15 `COP0` (`PATH_POLITIE_ANIM`), types 16..18 `COP1` (`PATH_POLIZEI_ANIM`), types 19..21 random traffic type; rigid body mass 800, friction 0.9, elasticity 0.2, at point 0 height +10. `0x464de0` turns the path's ms field into a speed: `total point length / (ms*0.001) * 0.1` (doubles `0x5767d8`, `0x576968`). Trigger `0x465d00` (player enters path trigger chunk, right lap, path not in use): traffic slot state 0, callback `0x4161d0`. It drives point to point at full gas (`+= 100*dt`) up to that speed, next point when < 30 units. At the last point: 13/16/19 removed; **14/17/20 stop, gas 0, brake 100, stays as obstacle**; 15/18/21 callback `0x421f50`, ordinary traffic. No chase, no siren FSM. Shipped use: etappe 0: 3, 1: 14, 2: 3 (type 14, Dutch); 3: 17, 4: 18, 8: 6 + 1 of type 18 (type 17, German). Lap field 1 or 2 limits some (etappe 1, 2, 4). Examples: etappe 0 chunk 148->160 in 1500 ms; etappe 3 chunk 394->407 in 1900 ms.

**Other cop sources.** Path types 2/8 and `pth_pcop 0x465010`: types 2/8 are absent from all `.pth` and `0x465010` has no reference. No roadblock radio samples exist (section 19).

**Helicopter.** Path type 5 (`pth_heli`): mesh `C_HELI` + rotors `C_LBLADE`, `C_SBLADE`, sound `HELI`, flies path over duration: etappe 4 (2 paths, e.g. chunks 190-230, 15 s, 7 points), 7 (389-420, 7 s). `0x463d70` only moves and rotates it, sets +0x34 to player chunk. No gameplay effect, no reference to player state.

## 12. Supercop

Object type 28 `humvee_ANIM`: etappe 1, 3, 4, one each (mode-1 tracks). `0x41e450`: side per direction/british, callback `0x41ed30`, `POLITIE_SIRENE`, damage model `dam_supercop` (impulse 260000-270000, as player 60000-90000). `0x41e6c0` at race init: FSM slot 18, behaviour by `behavior.ini [Track N Behaviors]` (all `Default`), target = player.

Behaviour fields `0x4013f0` (struct 0x54): +0x10 FrontVisibilityRange 12, +0x14 RearVisibilityRange 8, +0x18 MegaphoneFrequency 70, +0x1c OvertakeBashFrequency 80, +0x20 StayInLaneDistance 220, +0x24 HandBrakeSlowDownBias 0.70, +0x28 PatrolSpeed 8.33 m/s, +0x2c MaxCornerSpeed 61.1 m/s, +0x30 Acceleration 1.0, +0x34 Aggression 1.0, +0x38 BehaviorBiases 24,64,64, +0x44 Risk 1.0, +0x48 Cheat 1, +0x4c threshold 10, +0x50 replace 4.

Common tick `0x41eeb0`: `0x4218b0` computes: `d = chunkDiff(target, self)`, position (`d<0` or `d==0 and side>=0` -> INFRONT 1; else BEHIND 2), distance to waypoint, lateral and longitudinal offsets to target, lane, corner limit: bend angle <=20: none; else `(MaxCorner-8.33)*(1-0.002*a)+8.33`. If `|d| < 7`: `System_CopAlert` each frame. Stage timers count down.

**FSM `0x41e910`** (ids: PATROL 29, CHASE 30, BASH_INACTIVE 33, BREAK_FREE 34, TOTAL_LOSS 35, ROLLED_OVER 36, INACTIVE 37, BEHAVIOR_01..04 = 38..41):

| Predicate | Func | True when |
|---|---|---|
| chase | `0x4213c0` | BEHIND and |d| <= 7 |
| patrol | `0x421410` | |d| > 10 |
| breakfree | `0x421370` | time in state > 5 and stuck > 5 |
| loss | `0x421490` | own damage > 1099 |
| rolled | `0x4214c0` | matrix up.y <= 0.2 |
| bash | `0x4215d0` | |d| <= 6 and target speed < 40 km/h for >= 3 s |
| b4 | `0x4217c0` | d==0, side != 0, target >= 16 m/s |
| done | `0x4216f0` | flag `0x5cec60` |
| end | `0x421790` | player damage > 1099 |
| fast | `0x421680` | target > 40 km/h |

| From | Transitions, in order |
|---|---|
| PATROL | chase->CHASE, breakfree, loss, rolled, bash, b4->41, end->37 |
| CHASE | patrol->29, breakfree, loss, rolled, bash, b4->41, end->37 |
| 38,39,40 | done->29, patrol->29, breakfree, bash, end |
| 41 | done->previous, breakfree, end |
| 33 | breakfree, rolled, fast->previous, end |
| 34 | loss, rolled, done->29, end |
| 36 | not rolled->29, loss, end |

STATE_ATTACK (31) handler is an empty function; no transition reaches it.

**Handlers.**
- PATROL `0x41f070`: on entry timer 2 s; if came from 38..41, BEHIND and outsmart flag: `~police_outsmarted`. Follows path. INFRONT: gas/brake toward PatrolSpeed, +-Acceleration per frame. BEHIND: gas `0x405c80`, turbo if bend < 50. Cheat: if `d >= 10`, teleport to target chunk-4 (`0x40e5a0`).
- CHASE `0x41f350`: on entry pick behaviour by biases (`0x421d80`, weights 24:64:64 -> 38/39/40); `~warning_from_harry` if from PATROL. INFRONT `0x405e90` brake; BEHIND gas. `d < 3`: enter chosen behaviour.
- Gas `0x405c80`: `d<3`: `-(longitudinal)*(Acc*16+4)` else 100, clamp 0..100. Brake `0x405e90` (when `d >= -2`, moving): `longitudinal*(Acc*2.42+0.08)`.
- Risk `0x406390`: above corner limit `L`: allowed `L+(v-L)*Risk`; if v above that, gas 0, brake v-allowed. With Risk=1 no effect.
- BEHAVIOR_01 `0x4200e0` frontal: stage FRONTAL_CHASE(4) gas; `d<0`: STAYINLANE(5), timer 2-4 s; b4 with `rand%100 < 80` -> 41. STAYINLANE: target lane, keep 220 units ahead; BEHIND back to 4; timer out or (same lane, d>-3, > 30 m/s): timer 3; `0.7 <= rand%100` -> HANDBRAKE(7) else SLOWDOWN(6). Effect: stage 6 only when rand%100==0 (bias is stored *0.01). SLOWDOWN: brake `dt*(Aggr*700+100)` until timer out, BEHIND, or dist<40; flag outsmart; PAUSE(8) timer 3-5. HANDBRAKE: gas 100, handbrake, steer +-100 by side; same end. PAUSE: gas 100 until timer or BEHIND; done.
- BEHAVIOR_02 `0x420740` sideways: SIDEWAYS_CHASE(0xb) until side by side `0x421550` (d==0, adjacent lane): MEGAPHONE(0xc) timer 2; once `rand%100<70` radio 5. b4: steer `(aggr%+-20)*0.01*100` toward target, BASH(0xd) timer 2-6; |d|>0 or dist<40: outsmart, PAUSE(0xe) timer 3-5, gas 100, done.
- BEHAVIOR_03 `0x420ca0` rear: REAR_STAYINLANE(9) keep -220; timer out, same lane, d<3, >30 m/s: REAR_BASH(10) timer 3: gas `dt*(Aggr*700+100)`, turbo; ends timer, INFRONT, dist<40: outsmart, done.
- BEHAVIOR_04 `0x4210e0` bash: BASH_BASH(0x12) steer as above, gas by position; |d|>=1 or dist<40: BASH_PAUSE(0x13) 3-5 s.
- BASH_INACTIVE `0x41fca0`: stage 3 forward toward target gas += Acc*28+4 while dist >= 40 and timer>0; stage 1 stop to <2 km/h; stage 0 reverse brake += 0.6*(Acc*28+4) until dist>=300 or timer. Cycle 3,1,0,1,3 with timers 2-4 s, 11-13 s before forward.
- BREAK_FREE `0x41f5e0`: forward/reverse 0xf/0x10 with `dt*(Aggr*700+100)`, stage 0x11 stop, timer 3-5 s, random steer +-10%, ends after count; if target >= 9 ahead or > 4 behind (`0x421710`): reset and PATROL.
- TOTAL_LOSS `0x41f9f0`: `~knock_out`, no gas/brake, handbrake. No exit.
- ROLLED_OVER `0x41fbd0`: 1 s, then if `0x421710`: reset, PATROL.
- INACTIVE `0x41fb50`: no gas/brake, handbrake.

`dist` above is the distance to the aim point `0x5cebf4` (the current path waypoint; in BASH_INACTIVE the target position), not to the player. `FrontVisibilityRange` and `RearVisibilityRange` are loaded and shown by debug `0x40b380`, but `0x4213c0` and `0x421410` use literals 7 and 10.

**What the Supercop does to the player:** physics contact only, no arrest, no direct damage call.

## 13. Flitser

Two separate things:
1. **Fine, trigger 1 `0x457880`:** if player km/h > `0x5a3ab0` (limit from triggers 4/5/6/8) and prev chunk < chunk: money -50, text 67, sample `FLITS`, game action 0 flash (`0x43b0b0`/`0x43b130`: if `0x6fb894`: 2 frames palette 0xebebeb, else one frame fill). Fires once per trigger crossing, for the player only.
2. **Flitspaal object, type 7 `g_fltsrp_ANIM`, `Tob_flts`:** mass 150, friction 0.9, elasticity 0.2, collision callback `0x4544c0` (state 0->1 on contact). `0x451f90` state 1: `0x452020` effect, `0x450b30(obj,0)` plays the attached sample `PAAL_HIT_CAR`, money +100, text 51; state 2 (stays, one bonus per object). Count per etappe: 0:4, 1:4, 2:4, 3:4, 4:4, 7:5, 8:4, 5:0, 6:0; 9, from the track update: 5.

Radar bonus: `0x6fbdec` has no writer in the file except a read in `0x43ad40`, so `[PLAYER] radarbonus` stays 0.

Damage from the flitspaal is normal car collision.

## 14. Traffic

Slots `0x5d1ba8`, 50, stride 0x38: +0 object, +4 state, +8 saved state, +0xc last chunk, +0x10 flags, +0x14 waypoint/param, +0x18 path, +0x1c, +0x20 timer, +0x24 target speed.

**Setup `0x427970`.** `traffic.ini [Traffic Track N]` always read by `0x413a10`: `RANDOM`, `COUNT`, entries `name,count[,flags]`, `MAX_TRAFFIC_RIGHT` -> `0x5962b4`, `MAX_TRAFFIC_LEFT` -> `0x5962b8`. These overwrite the 5/7 (easy) or 10/14 (hard) set in `0x44c200`. Spawn loop `rand&3`: 0,1 left, 2,3 right until both used. `0x4275e0` places at `start - 3*n - visible - 5`. Type pick `0x413cf0` (`RANDOM=0`: walk counts).

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

Flags `0x4138e0`: TOO_SLOW 4, TOO_FAST 8, SPEED_FREAK 0x10, GRANNY 0x20, SLOPPY 0x40, BLIND 0x80, LEFT 0x100, RIGHT 0x200, DRUNK 0x400, RED_LIGHT 0x800, VLUCHTSTROOK 0x1000. Base value 1 (`0x413a10`), flag words are added. Shipped INI gives none, so all roaming traffic has flags 1. Path type 10 cars use 3 (`0x467160`).

**Target speed `0x413de0`** (m/s; trigger -> no flag / slow / fast / freak):

| Trigger | Normal | TOO_SLOW | TOO_FAST | SPEED_FREAK |
|---|---|---|---|---|
| 4 | 12.5 | 7.5 | 17.5 | 25 |
| 5 | 17.5 | 7.5 | 27.5 | 45 |
| 6 | 25 | 10 | 40 | 60 |
| 8 / other | 17.5 | 7.5 | 17.5 | 45 |

**Update `0x415d20`** (+0x6c): > visible chunks from player: inactive, physics sleep. Else `0x415c60` drive, `0x415ba0` state.

| State | Drive | Next |
|---|---|---|
| 0 | `0x414950` follow path | waypoint type 10 and light state 0 and not RED_LIGHT -> 1. Trigger 0x2c -> 2. Look ahead `0x423040(car, 5)` (GRANNY 10, BLIND 3): blocked -> `0x4155b0` |
| 1 | `0x414c00` brake v,w `*(1-3dt)` | light != 0 -> 0 |
| 2 | `0x414c80` +0x60=0, active | none |
| 3 | `0x414cc0` timer down, w damp | timer<0 -> flags&3 2->4, 3->5, else saved |
| 4 | `0x414d60` wait for light 0 with timer1 > 2000, then accelerate 5 m/s^2 to 12.5 along path | waypoint count reached -> inactive |
| 5,6 | path variants | |
| 7,8,9,10 | lane change variants | clear -> `0x4155b0`, or back to 0 within 5 links |

**Recycling `0x41ca20`** per frame for inactive slots with `flags&3==1`: `0x41cae0`: 20% chance per frame, only at >= 15 fps; pick random waypoint at visible-1 chunks ahead of the player (per player travel direction), skip if waypoint flag 4, any car within +-1 chunk, or any non-FSM car within +-2..4 chunks; place at waypoint +2 height.

## 15. Path system `pth_main`

`.pth`: `version -1`, count (max 40), each: trigger chunk, end chunk, type, lap (0 any, else lap+1), duration ms, points (max 49), 16 bytes per point. Fired `0x464cf0` when player chunk == trigger chunk, once per lap per path. Slots 25 (`0x709b18`). Table `0x5a64c8`, stride 0x14: init, trigger, update, exit, cleanup.

| Type | Init | Content | Tracks present |
|---|---|---|---|
| 0 | none | `0x464a60` update only | 3, 4, 8 |
| 1 | none | start camera | none |
| 2, 8 | `0x4636c0` `MPOLIZEI` | cop along path | none |
| 3 | `0x465ea0` `e00_rond` | scenic object | 4 |
| 4 | `0x466290` `C_TREIN`, `TRAIN` | train | 4, 6, 8 |
| 5 | `0x463a60` | helicopter | 4, 7 |
| 6 | `0x4666c0` | path car, sound `HOOG4` | 1, 8 |
| 7 | `0x4654b0` `a_VLIEGT`, `PLANE` | plane | 3, 4, 6 |
| 9, 10 | `0x466db0` | path traffic | none |
| 11, 12 | none | no code | 12 in 0, 1 |
| 13..21 | `0x4658e0` | scripted car, section 11 blockade cars | 14 in 0, 1, 2; 17 in 3, 4, 8; 18 in 8 |

FOLLOW_PATH `0x413520` (cop, types 2/8): waypoint reached at < 30 units; then per type 0xd/0x10 remove, 0xe/0x11 stop, 0xf/0x12 ACT_LIKE_TRAFFIC. Effectively unused.

## 16. Pickups and DaviScript

**Hosting.** `script_init 0x475b50` from `init_main`. Registers classes with getters/setters: `D3DVECTOR` x,y,z,Set; `D3DCOLOR` r,g,b,a; `CPlayer` damage, turbo, money, MakeInvulnerable, FreezeRacers, ChangeFOV, FastForward; `CBonus` scale, angle, anglespeed, respawntime, fadeouttime, effectduration, active, color, setcolor, shademode, CreateParticles; `CScriptedObject` (color, shademode, SetColor, InitPhysics, InitPhysics2, InitMultiObjectPhysics, InitPiledObjectPhysics `0x474ea0`, InitSound3D, PlaySound3D, DeleteSound3D, AddConstraint, AddConstraintX/Y/ZAxis, CreateParticles); globals GetPlayer, GetSin, PlaySample, PrintText, PerSecToPerFrame; then loads `bonus.dso` (`0x475860`, fatal "Scriptfile not found").

Natives:

| Native | Func | Effect |
|---|---|---|
| CPlayer.damage get/set | `0x473c80` | car damage record, clamp 0..1100 |
| CPlayer.turbo | `0x473cf0` | `0x6fba74` clamp 0..100 |
| CPlayer.money | `0x473d30` | `0x6fba68` clamp 0..999999 |
| GetPlayer | `0x474420` | object `0x6fba58` |
| GetSin(f,a) | `0x474450` | `a*sin_table[ftol(now..) & mask]` |
| PerSecToPerFrame | `0x474630` | `x*dt` |
| PlaySample | `0x474500` | `0x450950(name,0)` |
| PrintText | `0x4745c0` | `0x59becc=i`, fatal if out of range |
| ChangeFOV(fov,sec) | `0x474940` | `0x5a28b8` target, `0x5a28bc` sec; each frame `0x6fb974 += (target-fov)*dt/sec`, projection `0x4b39d0(0.5/fov, 12500, fov*pi)`. Default target 0.375, rate 1.0 |
| MakeInvulnerable(sec) | `0x474320` | flag `0x6fbde2`, timer 15; duration = old + sec*1000 |
| FreezeRacers(sec) | `0x4743a0` | `0x5d3111=1`, timer 16 |
| FastForward(sec,force) | `0x474270` | `0x6c2f28=1`, force clamp 0..50000, timer 17; adds force to player only in `0x4284a0` |
| CreateParticles | `0x474690` | `0x45d170(type,...)`; type 1 world offset, else local |

**Events.** Built names, one per `.omp` object name: `OnInit_%s` `0x477b90`, `OnPickup_%s` `0x477df0`, `OnFadeout_%s` `0x478010`, `OnTurnoff_%s` `0x478230`, `OnFramecall_%s` `0x478450`. Fatal if missing.

**Bonus object type 25, `0x451420`** states: 0 idle: if player or its trailer touches bbox (`0x453480`, player only, AI cannot collect) -> 1, else spin `0x451380` and OnFramecall. 1: OnPickup, pickup time now, +0xe0=1 -> 2. 2: OnFadeout until `fadeouttime` elapsed, then invisible -> 3. 3: if `respawntime >= 0` and elapsed >= respawntime: visible -> 0. Any state: when +0xe0 and elapsed >= `effectduration`: OnTurnoff once. Times counted from pickup. `0x451250` defaults: respawn -1, fadeout 1.

Script `bonus.pseudo.txt` values (spin `anglespeed.y = 600*dt`, shademode 1 all):

| Object | Respawn s | Fade s | Effect s | OnPickup | Sample | Text | Pulse amp |
|---|---|---|---|---|---|---|---|
| pw_fastf | 5 | 3 | 4 | ChangeFOV(0.6,1), FastForward(4 s, 4000). Turnoff ChangeFOV(0.375,0.5) | PW_FAST | 57 | 0.3 |
| pw_stop | 15 | 3 | 6 | FreezeRacers(6) | PW_FREEZ | 56 | 0.3 |
| pw_godm | 5 | 3 | 20 | MakeInvulnerable(20) | PW_INV | 58 | 0.3 |
| pw_1pts | never | 3 | 4 | money op 100 | PW_1PT | 59 | 0.2 |
| pw_5pts | never | 3 | 4 | money op 500 | PW_5PTS | 60 | 0.3 |
| pw_10pts | never | 3 | 4 | money op 1000 | PW_10PTS | 61 | 0.3 |
| pw_turbs | 15 | 3 | 4 | turbo op 10 | PW_TURBS | 64 | 0.3 |
| pw_turbb | 15 | 3 | 4 | turbo op 50 | PW_TURBB | 65 | 0.3 |
| pw_reps | 15 | 3 | 4 | damage op 100 | PW_REPS | 62 | 0.3 |
| pw_repb | 15 | 3 | 4 | damage op 300 | PW_REPB | 63 | 0.3 |

Pulse: `s = GetSin(0.5, amp)+1` on scale x,y,z. `DoDefault_OnFadeout`: scale shrink with color fade.

Counts per etappe (`.omp` type 25): reps/repb/1pts/5pts/10pts/turbs/turbb/godm/fastf/stop:
- 0: 18/2/6/10/2/19/1/1/0/1
- 1: 16/3/0/15/1/0/0/2/0/0
- 2: 8/5/13/8/2/16/2/2/4/3
- 3: 14/2/10/5/5/0/0/0/0/0
- 4: 18/0/31/8/2/0/0/5/0/0
- 5: 13/6/0/5/5/16/4/5/5/2
- 6: 2/3/8/9/0/1/1/1/2/1
- 7: 26/2/12/8/6/19/4/1/3/4
- 8: 2/7/10/13/3/0/6/3/2/2
- 9: 12/1/10/3/5/10/0/2/1/1 (from the track update)

**Freeze effect.** `0x419600` in the first racer callback with `0x5d3111`: `0x5d3112=1`, saves and zeroes velocity (+0xbc..+0xd0) of every FSM object once. While set, racers skip FSM and controller. Cops and Supercop keep running (`0x407300`, `0x41ed30` check `0x5d3110` only). On end, saved velocities of racers are restored.

**Invulnerable effect.** Player impulse damage skipped `0x426fe0`. Timer 15. Also blocked outside state 0 and with `Invulnerable`.

## 17. Track objects

`.omp` type -> init in `0x4536e0`; per-frame handler table `0x5a2a60` (`0x453440`). Physics signature `0x4a79d0(obj,x,y,z,rx,ry,rz,mass,friction,elasticity,unmovable,collisionCb,?,1)`. State pattern for objects with `0x4544c0`: contact sets 0->1; 1 runs effect ->2; 2 until a condition ->3; 3 ->0.

| Type | Init | Mass/fr/el | Handler | Behaviour |
|---|---|---|---|---|
| 0, 0xb, 0x10 | none | | none | scenery; 0xb and 0xe share mesh cache 1, 0x10 and 0x11 cache 2 |
| 1 | `0x454170` | | `0x4535d0` | looping sample from `.omp` param |
| 2 | `0x4548d0` | 10/1.0/0.6 | `0x454990` Tob_piln | pilon. Contact: sample `PION_HIT_CAR` once, state 2 until `0x4a1f10` true, state 3, state 0 |
| 3 | `0x455aa0` | 50/0.9/0.2 | `0x455b60` Tob_wrkb | werkbord (road sign), same pattern, `PAAL_HIT_CAR` |
| 4 | none | | `0x454f70` | traffic light; `0x455052`, timer 1: state 0 frame 2 5000 ms -> state 3 frame 0 5000 ms -> state 2 frame 1 500 ms -> state 0 |
| 5, 0xe, 0xf, 0x11 | `0x4541c0` | 0/1.0/0.6, unmovable, y-1 | 5,14,17 none; 15 `0x453660` | static collider |
| 6 | `0x4554b0` | 100/0.9/0.2 | `0x455570` Tob_wlmp | werklamp (work lamp), timer 5 toggle, state pattern, `PAAL_HIT_CAR` |
| 7 | `0x451ed0` | 150/0.9/0.2 | `0x451f90` Tob_flts | section 13 |
| 8 | `0x455800` | 3000/0.2/0.9 | `0x4558c0` tob_wplb | werkpijlbord (arrow board), frame 1/0 by timer 7, state pattern |
| 9 | `0x423a50` | | none | cop |
| 10 | `0x4542a0` | 2000/1.4/0.2 | `0x453600` | velocities *0.9 per frame |
| 0xc | `0x454440` | | `0x453660` | 3D animation |
| 0xd | `0x454480` | | `0x453680`/`0x453675` | start animation; plays once from countdown init (`0x5a2a58=1`) until `0x469c60` reports done |
| 0x12 | `0x452ef0` | 2000/0.9/0, constraint at own position (`0x4a02f0` kind 3) | `0x452ee0` | pivoting object |
| 0x13 | `0x4551a0` | 2000/0.9/0.2 | `0x455250` Tob_tras | trash emitter: particle Trash |
| 0x14 | `0x453200` | 500/0.9/0.2 | `0x4532b0` Tob_lett | mailbox: particle Mail |
| 0x15 | `0x454320` | 400/0.9/0.2 | `0x4545a0` | velocities *0.95 per frame |
| 0x16 | `0x4546b0` | 10/0.9/0.2 | `0x454770` Tob_pap | paper box: sample `PION_HIT_CAR`, particle Paper |
| 0x17 | none | | `0x450f90` | touch: Birds |
| 0x18 | none | | `0x4530c0` | touch: Leaves |
| 0x19 | `0x451250` | | `0x451420` | bonus |
| 0x1a | none | | `0x4553b0` | touch: Water + Waterwave |
| 0x1b | none | | `0x451dd0` | touch: Dirt + Dirtpiece |
| 0x1c | `0x41e450` | | none | Supercop |
| 0x1d | `0x454b80` | | `0x454ce0` | scripted object |

Particle ids `0x45d170`: 1 Spark, 2 Leaf, 3 Bird, 4 Mail, 5 Trash, 6 Paper, 7 CarPart, 8 Dirt, 9 Dirtpiece, 10 Water, 11 Waterwave.

**Tob_ScriptedObject `0x454ce0`:** 0: OnFramecall each frame; 1 (set by `0x454af0` on collision, which also calls OnCollision): OnRevive -> 2; 2: OnSimulation each frame until returns false -> 3; 3: OnFreeze -> 0.

Script init (mass, friction, elasticity, unmovable), `InitMultiObjectPhysics` unless stated:

| Mass | Objects |
|---|---|
| 50 | 0_NAGW1 |
| 100 | B_vuil1, B_phon (TELEFOON on revive), B_hek1, B_STEI1, B_TOIL1, B_GRB1, B_MARK1 |
| 250 | B_crat1 (KRATTEN), E0_STAT, B_OIL1 (OLIEVATEN), B_HALT1 (BUSHALTE), B_TRL2, B_NPOL1, 0_KIOSK, 0_BUD1, 0_ORGL1 (DRAAIORGEL plays every frame until revive deletes it), B_DPOL1 |
| 250, unmovable | B_TRUCK1, e2_boe2, e2_box2 |
| `InitPhysics` 50 + `AddConstraintYAxis` | B_CONT1 |
| `InitPhysics` 400 + `AddConstraint(1,...)` | 1_CONTR2 |

All friction 1.0, elasticity 0.2.

**Fuel station `ev_tank` is dead:** `0x43c885`, `0x43caf0`, `0x43cc70` have no reference (no action registers them). Damage -110 per 200 ms and turbo refill inside it never run. Old HUD `0x43e130`, `0x43e4c0` (fines, prize) also unreferenced.

## 18. Damage, repairs, money

**Damage model `car_dmg.cpp`,** table `0x5d3460`, 250 entries of 0x14: +4 min impulse, +8 max impulse, +0xc damage, +0x10 slope `(Dmax-Dmin)/(Imax-Imin)`. Clamp 0..1100.

`0x426fe0` (kind, impulse): if car is player and invulnerable, not state 0 or `Invulnerable`: no damage. Hit within 60 ms of last hit: impulse 0. `0x425310`: if impulse > min: `damage += trunc(Dmin + (min(impulse,max)-min)*slope)`.

`damage.ini`: `[Damage Limits] min=25, max=45` per hit. `[Damage Levels] clouds=900, wheels=900`. Model impulses: normal AI 70000-90000, as player 50000-90000; supercop 260000-270000 / 60000-90000.

Thresholds: smoke when damage > clouds (`0x427130`, 200 ms interval). Racer/cop/supercop TOTAL_LOSS > 1099. Player game over > 1098. HUD bar `damage*0.0009090909` = damage/1100 (`0x48a230`). Damage alert LED at bar >= 0.8, turbo alert <= 0.2 (`0x489c10`).

Car parts: `[Damageable Car Objects]` per mesh, damage level for damaged state and detached state; `0x426280`.

Collision sounds `0x427400`: within 300 ms of last hit and impulse < min/3: `SCHUUR`. Impulse < min: `SOFT_CAR_HIT1/2`. Impulse < min + (min+max)/2: `MID_CAR_HIT1/2`. Else `HARD_CAR_HIT1/2` (random of pair). Collision callback for cars `0x44f970`.

Damage at start: `[PLAYER] damage` and `DAMAGE_MESH/VALUE` restored (`0x44e340`, `0x44ceb0`).

**Repairs in race:** pw_reps, pw_repb, trigger 2 (full).

**Turbo.** `0x44e970`: state 0 only; while held, every 100 ms turbo -1 (10 s for 100), unless Fast Forward is active (`0x4290e0`): then no use and it works at 0. Sample id in `0x5a1ce8` plays once per press. Key `EXTRA1`.

**Money sources in race:** pw_1pts/5pts/10pts, flitspaal +100, flitser -50. Starting value `[PLAYER] money`. All clamped 0..999999. Written only if finished.

## 19. Cop radio `ai_radio.cpp`

Object `0x5d3118`, tick `0x41c150` every frame in `WinMain`. Event request `0x41be70(event,obj,sample)`: accepted only when idle (+0x1d8==0 and +0x1dc==0). Ducking during speech `0x41c0f0`: all sound groups except `MUSIC` and `COPS` go to `SFXVOLUME-30`, `MUSIC` to `MUSICVOLUME-30` (floor 0), `COPS` unchanged; restored by `0x41c0d0`. Group lists have round-robin play (`0x41c610`).

Lists built `0x41b220`: START_PURSUIT_0..7, CSTAY_0..5, BLOCK_0..2, CBLOK_0..5, MEGA_0..7; locations `CE%dL%d` by track from triggers 48..57 (max 50 slots); car description `R%d%d` by player car `0x41aa80`; per racer CPA, CBP, CCO `%02d_%02d`, 16 each, `0x41bde0`.

| Event | Caller | Sequence | Shipped audio |
|---|---|---|---|
| 1 | chase of player starts `0x40d6f0` | START_PURSUIT, car desc, location, CSTAY | **none**: names absent from `sound.ini`, sample lookup fails at first step, sequence ends silently |
| 2 | GIVE_UP `0x408df0` | `0x43a5a4` returns -1 | none (stub) |
| 3 | arrest | ARREST_1A/1B, 2A, 3A/3B by times caught | unreachable |
| 4 | roadblock | BLOCK, CBLOK | unreachable |
| 5 | MEGAPHONE stage, supercop stage 0xc | MEGA_x; 3D from chasing cop if any | MEGA_0..3 = CMP05_00..03.wav. Loader stops at first missing, so 4 |
| 6 | no caller | position switch | none |
| 7 | no caller | | none |
| 8 | no caller | | none |
| 9 | player key `CM_KEYB_T` (`0x44ea60`) | CPA of player car: case 9 selects list +0xec (`0x41c076`) | CPAnn_mm from `0x41b9d0` |
| 10 | `0x489800` from communicator | given sample, no ducking | all `communi.ini` samples |

Event 10 needs the radio idle or already in event 10 (then it restarts with the new sample); while another event runs the sample is dropped. The speech actually heard comes from the communicator samples (section 20), plus MEGA and the T key.

## 20. Communicator `Ovl_Communicator.cpp`

Singleton `0x4891a0`. `SendMessage 0x48a910(name, obj)`, name uppercased. `~` prefix -> category: random member (`0x489e50`); category record 0x114 bytes, count at +0x10, indexes from +0x14. No prefix -> direct id search; `0x4899a0` runs the message's event at once, and it queues unless its owner has priority -1. Category sends also call `0x4899a0` on message index = category loop index (call at `0x0048aba2`); which event that hits depends on message load order, not checked.

`communi.ini`: `moveaway=true`, `moveawaytime=0`, `chars_per_line=20`, `initwaittime=5` (unused per comment).

Player priority: harry 1, police 2, shadow 3, honney and racers 4.

Line format: `id,[category],prio,sample,event,showtime,lifetime,text`. Shipped: showtime 11 s, lifetime 10 s (racer collision/pass lines 1 s), `@`=comma, `#`=newline.

Queue `+0x2d0`: max 10 (new messages dropped when full); inserted by `0x49d720` (player priority first); duplicate message+object only updates expiry. Expiry removed by `0x48a190`. `0x48a230` shows next when none or showtime over; message with priority 100 and a waiting lower one is preempted. New message: sample after panel slide-in (`+0x34==2`), event `system_newmessage` (sample 0 `mesin`) if own event 0. Harry/police etc. show damage bar of the given object, except HONNEY and SHADOW.

System table: copalert sample 1 event 1; goleft 2, goright 3, gofork 4, gozigzag 5; newmessage event 6 sample 0.

Events `0x4899a0`: 1: alert level +10 to 100 (LED `OVL_COMMUNICATOR_RED_LED`). 2..5: arrow element `OVL_DIRECTION_GOLEFT/GORIGHT/GOBOTH/GOZIGZAG` shown 6000 ms, sample 1. Alert tick `0x489d30`: -7 per frame, LED toggles every 500 ms, sample loops. Wrong-way hides arrows.

Category triggers:

| Category | Sender |
|---|---|
| game_position_01..05 | trigger 62 |
| call_for_backup | trigger 63 once |
| go_for_it | trigger 64 |
| junction_ahead_left/right | triggers 65, 66 once |
| challenge_at_start | trigger 67 once |
| challenge_at_finish | trigger 68 once, last lap |
| warning_from_harry | Supercop CHASE entered from PATROL |
| attack | Supercop BEHAVIOR_01/02/03 entry |
| police_outsmarted | Supercop back to PATROL with flag |
| knock_out | Supercop TOTAL_LOSS |
| racerNcollision | racer hit by player |
| racerNpassing / passed | position change |
| warning_about_harry (13), a_lotta_damage (14), reactions_on_warnings (17), reactions_on_challenge (18) | no sender string in `spel.dat`, never sent |

Racer index N in `~racer%d...` is car index 0..4: Edgar 0, Tommy 1, James 2, Kat 3, Barbarally 4 (`communi.ini` sample prefixes).

## 21. Game mode differences, as code

There is no "Tour" or "Quick Race" concept in `spel.dat`; the menu expresses modes through INI values.

| Switch | Source | Effect (all that exists) |
|---|---|---|
| Track mode Arg14 = 1 "chase" (`raser.ini`: etappe 1, 3, 4) | `0x6fa61c` | Timer 11 enforced, game over at 0 (`0x44c8c0`). Checkpoint adds 110 s and plays sound instead of recording a split. HUD countdown. Nothing else; Supercop presence comes from `.omp`, on the same tracks |
| Track mode 0 | | Timer 11 runs but is not enforced; only `out_of_time` in INI and `checkpoint_money` depend on it |
| Arg0 = 0 highway (`raser.ini`: etappe 8 only) | `0x6fa58c` | NRLAPS forced 1. Racer finishes at first trigger 14, cop goes FINISHED at 14/15. Old HUD branch `0x43f2d6`. Cheat T allowed. `0x44e340` fatal if start chunk <= position |
| League 0/1/2 | `[LEAGUE] league` | Car max speed/RPM penalty. Rubber band rules (league 2 none). Opponent settings section. Records key. `L%d_anim.ini`. Type 2 cop chase only in league 2 |
| Difficulty 0/1 | `[OPTIONS] difficulty` | `CopsPerPlayer` Easy/Hard (both 4 shipped). Traffic defaults (overwritten by INI). `0x44fdeb` cap 12 vs 6 (purpose unknown). `0x4501c0` dead. `ChaseTime` dead |
| Copland | `[PLAYER] copland` | Player car name `COP` instead of `RACER_%d`, text 47. `car_cfg.ini` has no entry `COP`, so non-zero is `Fatal "Could not find car"` (`0x44e340`) with shipped data |
| British | `[ETAPPE] british` | Road side swap |
| DIRECTION | `[ETAPPE] DIRECTION` | Track direction for placement and reset |
| Police, traffic, opponents, BonusCountDown, Invulnerable | `[OPTIONS]` | Direct on/off. BonusCountDown off disables checkpoints entirely, also the time extensions |
| NRLAPS | `[OPTIONS]`, menu `0x461c8c` reads it | Lap count, city tracks |

`demo`, `stuur_model`, `ai_model`, `traffic_ai_model`, `dif_mod`, `benzineprijs` values are read at most into variables with no gameplay branch found in this research; see Unknown.

## 22. Summary of dead or unused features

| Feature | Evidence |
|---|---|
| Arrest (states 5,6,7; game state 8; game over 2) | section 6 |
| `StopSpeed`, `ChaseTimeEasy/Hard`, `GiveUpDist`, FSM predicates `0x404080`..`0x404e16` except ObjectStuck, BreakTimeElapsed | raw scan: no rel32, no imm32 |
| FSM roadblock state `0x408520`, `0x40894a`, `0x40d640`, `0x409070` (blockade cars of section 11 are separate and live) | no reference |
| `pth_pcop 0x465010` | no reference |
| Fuel station | no reference |
| Per-type cop tactics | `0x58fd68` constant -1 |
| Tactic stage ROAD_BLOCK, PUSHING, HANDBRAKE, SIGN | shipped default tactics do not use them |
| `SpeedUpFactor` | written, never read |
| Prize calculation, fines HUD `0x43e130`, `0x43e4c0` | no reference |
| `GAMEPLAY.TXT` writer `0x419300` | no reference |
| Radar bonus counter `0x6fbdec` | no writer |
| Radio events 1,4,6,7,8 audio | no samples or callers |
| INI names `ChaseDuration`, `AttackDuration`, `Irritation*`, `AttackRange`, `AttackPositionRadius` at `0x5a2bf8` | zero references |

---

# Inferred

Each item is a reading of code, not proven by data or by name.

- `0x6fb8c0` = "AI may run", `0x6fba9c` = "player control enabled". They gate `0x412570` and `0x44ea60`.
- BREAK_FREE reverse: `brake` input with low speed reverses the car. The FSM only raises brake; the reversing is in dynamics (`0x427b90`, not traced here).
- `FOLLOW_TACTIC` lanes: `0x5cea48` 0/1/2 centre/left/right. From debug text `preferred lane`.
- `0x435470`: brake-light state, by the name in the error string of `0x403750`.
- Blockade cars are the "blokkades" Harry and Honney talk about (`communi.ini` `call_for_backup`). No code links them.
- Controller +0x30 is "seconds with no wheel flagged" (`0x403170`, wheel byte +0x25). The hint text 68 fits "car on its roof or airborne", so `RESETWAITTIME=10` means 10 s without wheel contact.
- `UPDATE<sub 1>` add, `<sub 3>` subtract in `bonus.dso`. Supported by the texts: `+100 EURO`, `REPARATIE BONUS`. Manual says yellow turbo +30 %, script value is 50.
- `FUN_004d2290` binds methods, `FUN_004d1c10` binds members, `FUN_004d16d0` binds globals (registration pattern in `0x475b50`).
- Cops: `chunk-2` test means "player is approaching from 2 chunks behind the parked cop". With `DIRECTION` reversed the same test would look ahead; the code does not adjust it.
- Vector from `0x4a1d20` is an angular velocity (three projections from the physics core `0x4f43e0`); "corrected" then means "spinning faster than 10 for 0.25 s".
- `0x450b30(obj,flag)`: plays the object's 3D sample, flag 1 looping (siren, ambient), 0 once (hits).
- Countdown digit mapping: +0x18/+0x1c/+0x20/+0x24 = `OVL_START_DIGIT_1/2/3`, `OVL_START_GO` by load order in `0x495d40`; so overlay 8,9,10 display digits 3,2,1.
- World scale: `0x464de0` factor 0.1 suggests 10 world units = 1 m, since the result is compared with +0xc4 in `0x4161d0`.
- `[Racer N Level L]` picks L = league; `[Level L]` same (`FUN_0049df90` varargs pass racer and `0x6fb958`; key is `0x6fb898` per asm `0x419ad0`). League arg was read in asm only for the key.
- BEHAVIOR stage names in my tables come from strings at `0x402760` in order: REVERSE 0, BRAKE 1, PAUSE 2, FORWARD 3, FRONTAL_CHASE 4, STAYINLANE 5, SLOWDOWN 6, HANDBRAKE 7, FRONTAL_PAUSE 8, REAR_STAYINLANE 9, REAR_BASH 10, SIDEWAYS_CHASE 11, MEGAPHONE 12, SIDEWAYS_BASH 13, SIDEWAYS_PAUSE 14, BREAKFREE_FORWARD 15, REVERSE 16, STOP 17, BASH_BASH 18, BASH_PAUSE 19. Numeric use in handlers agrees.
- Prize money and fines must be computed in `menu.exe` from `position`, `money`, `checkpoint_money`, since `spel.dat` no longer does. Not checked here.
- Lap count by league: `game.ini` best times imply laps = league+1 in shipped saves (`RACE_RECORD_E2_L2` about 3x `LAP_RECORD_E2_L2`); menu writes `Nrlaps`.

---

# Unknown

- `0x452020` (Tob_flts state 1 effect) is outside a defined function in the export; effect not read. Its visible neighbours: sound stop, +100, text 51.
- Traffic flag `0x2000` (runs cop detection on a traffic car): no setter found, so likely never true. `0x4000` is set when a traffic car starts a chase; reader not traced.
- Exact `GetSin` time scale: `0x474450` uses `__ftol` on `now*?`; constant not read.
- `0x423040`, `0x4155b0`, `0x4153a0`, `0x414640`, `0x414950`: traffic lane change and overtake details not traced beyond table level.
- `0x422c00`, `0x423560`: curve and traffic speed functions used by route selection not read.
- Bound-to-game script handlers `OnInit_B_crat2`, `B_BUS1`, `B_VENT1`, `B_PIPE1`, `B_BEER1`, `B_mbox1..3`, `TestAnim`: declared `extern` in `bonus.dso` with no native registered in `0x475b50`. Objects with these names use types other than 29 in the `.omp` lists read here (`b_crat2` type 10/21, `b_pipe1` 21, `b_beer1` 2), so the lookup probably never runs. Full cross-check of every type-29 name against script functions was not done.
- `0x44f970` tests names against `"chunk"` (collision with track geometry): exact rule for whether wall hits damage the player was only partly read; it does call `0x44fe70` -> `0x426fe0` kind 1 at the end.
- `demo`, `dif_mod`, `stuur_model`, `ai_model`, `traffic_ai_model`: readers exist (`0x4495d0`..`0x449af0`), consumers not searched exhaustively.
- `[OPTIONS] Difficulty` value mapping when menu writes 2 (manual lists easy/normal/hard, game.ini comment says 0/1). Code only tests `== 0` and `== 1` (`0x44fdeb`).
- `0x44fdeb` purpose (difficulty cap 12 or 6, input clamp 15..200), and which reader uses `[Damage Levels] wheels=900`.
- Bodies of type handlers `0x453660`, `0x453680` (no decompiled file; located in a code gap).
- `0x43a980` key/timing of overlay during arrest: unreachable, not needed.
- `CE%dL%d`, `START_PURSUIT_*`, `CSTAY_*`, `BLOCK_*`, `CBLOK_*` wavs: `sound.ini` has no such names and `extracted/game-archives` holds no matching wav. `0x41af00` also loads `CE%dL%d.wav` directly by file; on the shipped disc no such file was found, so location speech is silent. Not observed at runtime.
- Racer-index meaning of radio per-racer lists (`0x41b690`, `0x41b9d0`): files CCO/CPA/CBP exist and are also used by `communi.ini`; the radio copies have no event caller except event 9.
- Behaviour at timer rollover: all timers use 32-bit `GetTickCount`; no handling seen.
- Runtime confirmation: none of this was observed running; `dynamic/RESULTS.md` never reaches `spel.dat`.
