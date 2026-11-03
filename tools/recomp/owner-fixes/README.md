# The owner's fixes in the port

`A2-Racer-4-Fixes` is the owner's patch for the Windows game, played on Windows and under Wine. Version 1.5.4, commit `6c46de2`, 2026-11-03. Its technical notes are `README_technical_spel.dat.md` in that project. The port runs some of its code as it is: the recompiler lifts it from the patched bytes like the rest of `spel.dat`.

| File | What it is |
|---|---|
| `spel_patch.asm` | The patch's source of the code it adds to `spel.dat`, copied unchanged. `nasm -f bin` builds `spel_patch.bin` from it, byte for byte |
| `spel_patch.bin` | Those bytes, from the patcher's `spelPatchCode`. `tools/recomp/replacements.py` writes them at `0x575500`, in free space at the end of `.text` |
| `sites.json` | The patcher's `fixPatches` table, all 115 rows, unchanged: file offset, original bytes, replacement, label. `OWNER_LABELS` in `replacements.py` picks the rows the port applies. Each row is checked against the original bytes first |

## What the port takes

The port runs the race at a fixed 60 ticks per second. The patch's notes measure the game at many frame rates, and these parts change what the game does at 60:

| Part | What | At 60 ticks without it |
|---|---|---|
| 11 | `hung_check`: a car that stands still for 3 s with an axle off the ground or tipped over goes back on the road | A racer caught on a ramp or a bridge part stays there until the race ends |
| 12 | `contact_check`, `move_object`: body contacts end when they leave their triangle, and when an object is moved | Contacts that outlive their triangle: the notes count 3 in one race at 60 FPS, and from 66 FPS on 21 to 30. A car climbs an invisible plane nose first and stops |
| 12 | `reset_unlink`, `reset_done`, `reset_next_section`, `reset_previous_section`, `reset_height`: the reset cleans up after itself | Not about the frame rate. Lanes stay marked as taken, a racer's reset blocks the Enter key, the last section stops the game with `Illegal chunk`, and on etappes 5, 6 and 7 a reset can land under the road or on a tunnel |
| 13 | Police brake, Supercop pedals and patrol, chase camera, car lighting, portrait outline, skid marks, smoke, mud and water, pickups, animated objects, debris, letters, speed camera flash, turbo tank: held to what they did at 25 FPS | The notes' table at 60 FPS: a car stays 59 of 255 levels too dark after a shadow, mud fills the particle room in 0.4 s, pickups spin 2.4 times as fast, animations step 1.7 times as fast, the police brake is about 6 against 16 |

Part 13's `frame_limit` hook is in, for the 25 Hz tick it keeps (`TICK`). Its wait for 1/240 s ends at once here, since every tick is 1/60 s of the port's clock.

## What the port leaves out

| Part | Why |
|---|---|
| 1, 2, 3, 5: display mode, 3D view and HUD for any screen shape | The browser does this its own way: `source/render/`, `source/host/hud-layout.js`. The HUD would move twice |
| 4: texture memory probe | The host answers the probe and stays under its limit: `source/host/directx.js` |
| 6: transparency by alpha test | The shader discards key texels: `docs/intentional-differences.md`, Colour key |
| 7: no CD | Already in: `PATCHES`, `0x004CD478`, the same bytes |
| 8, 10: Z-buffer depth, 32-bit display mode | The browser's buffers: 24-bit depth, 32-bit colour |
| 9: the clock, world time, timer step | The port's virtual clock replaces the game's clock function, `0x004A6700`. No uptime, no rounding of a float clock |
| 9: driving force, turbo above 66 FPS | Matters only above 66 frames per second. The port runs 60 ticks |
| 9: gas and brake pedals | Matter only above 300 frames per second |
| 9: trailer push and fade | That code has no route in the shipped game |
| 9: traffic mass | Already in, in the port's own form with the same rule: `TRAFFIC_SHARE`, `min(1, tick * 25)` |
| 14: long Windows uptime | The port's `GetTickCount` counts from 1 to 101 s at the start of a race, so the 24.9 days are never reached |
| 15: the launcher's wait under Wine | No launcher, no display change |

## What the recompiler needed for it

- `pushad`, `popad` and `pause` in `lift.py`.
- Five functions that take a value on the x87 stack, as the instruction they replace did: `OWNER_FPU_ARGS`.
- `color_round` ends in a jump to `__ftol`, which the port inlines: a tail jump into an inline helper.
- `reset_done` reads the return address of the reset function from the stack, to tell the Enter key's reset from the others. The port does not normally store return addresses: calls to `0x0040E5A0`, and calls from the added code, now do (`RET_STORE_TARGETS`).
- Four hooks replace plain instructions and hand back results in `ecx`, `edx`, `esi` or `ebp`, which a call does not return in the port: `reset_unlink`, `reset_next_section`, `reset_previous_section`, `patrol_step`. Their code is spliced into the caller at their one call site (`OWNER_SPLICES`): the call becomes a jump in, the `ret` a jump back, with the stack as a call leaves it.
- Original functions the added code calls through a register are lifted as roots: a hook can take a function's only direct call (`owner_call_targets` in `build.py`).

Checks: [`docs/validation.md`](../../../docs/validation.md#the-owners-fixes).
