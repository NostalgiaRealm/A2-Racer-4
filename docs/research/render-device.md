# Render device: modes, projection, matrices, vertices, fog, blend

> The 8-bit path (`3D kaart` off, `RESOLUTION` 0 and 1) was run on an emulated Windows 98 machine and ported after this note was written: [`render-8bit.md`](render-8bit.md) holds where it differs, and section 2 (the menu can select it) and section 13 (`SHADEMODE` is never sent) are fixed in place below.

Scope: `spel.dat`, static analysis of `decompiled/game__spel.dat/` and raw bytes of `original/install/spel.dat`, plus statistics over the shipped data files. Numbers that matter were read from `disassembly.asm`. COM call lists are in `win32-surface.md`, texture handling in `render-textures.md`, HUD in `hud-overlay.md`, camera behaviour in `simulation-core.md`.

## Confirmed

### 1. Display modes

`0x005B3798` is **not** the table. `0x5B3798`, `0x5B379C`, `0x5B37A0` hold the current width, height and bpp, `0x5B3794` the current index. The table starts at `0x005B37B0`, stride `0x14`: `width, height, bpp, flag, 0`. `FUN_004c4330(0, i, 0)` copies a row; `flag` goes to `DAT_007408e0`. Bound check is `0 <= i < 0x15`, yet row 20 holds garbage (`255, ...`), so 20 rows are valid.

| i | mode | flag | i | mode | flag | i | mode | flag |
|---|---|---|---|---|---|---|---|---|
| 0 | 320x200x8 | 1 | 6 | 320x200x16 | 1 | 14 | 320x200x24 | 1 |
| 1 | 320x240x8 | 1 | 7 | 320x240x16 | 1 | 15 | 320x240x24 | 1 |
| 2 | 640x400x8 | 0 | 8 | 640x400x16 | 0 | 16 | 640x400x24 | 0 |
| 3 | 640x480x8 | 0 | 9 | 640x480x16 | 0 | 17 | 640x480x24 | 0 |
| 4 | 800x600x8 | 0 | 10 | 800x600x16 | 0 | 18 | 800x600x24 | 0 |
| 5 | 1024x768x8 | 0 | 11 | 1024x768x16 | 0 | 19 | 1024x768x24 | 0 |
| | | | 12 | 1280x1024x16 | 0 | | | |
| | | | 13 | 1600x1200x16 | 0 | | | |

`.data` defaults before init: index 3, 640x480x8, cooperative flags `0x11`, `0x5B37AC` = 1.

### 2. `[PROGRAM] RESOLUTION` and what 3 means

Read in `FUN_00447db0` (`0x59e984`), stored in `DAT_0059db38`, mapped in `FUN_00447870`; game flags in `FUN_0044bd10`. Other values are fatal. The string at `0x5a1270` claiming only 320x200 or 640x480 is stale.

| RES | Row | Driver selector `0x5B37AC` | `0x6fb8d0` hardware 3D | `0x6fb890` size class | `0x6fb894` 8-bit |
|---|---|---|---|---|---|
| 0 | 0 320x200x8 | 0 | 0 | 0 | 1 |
| 1 | 3 640x480x8 | 0 | 0 | 1 | 1 |
| 2 | 9 640x480x16 | 0 | 1 | 1 | 0 |
| **3** | **9 640x480x16** | **1** | **1** | **1** | **0** |
| 4 | 10 800x600x16 | 1 | 1 | 2 | 0 |
| 5 | 6 320x200x16 | 0, plus `FUN_004c0450(1)` | 1 | 0 | 0 |
| 6 | 6 320x200x16 | 1 | 1 | 0 | 0 |
| 7 | 11 1024x768x16 | 1 | 1 | 3 | 0 |
| 8 | 12 1280x1024x16 | 1 | 1 | 4 | 0 |
| 9 | 13 1600x1200x16 | 1 | 1 | 5 | 0 |

`raser.ini` ships `RESOLUTION=3`. The menu table only has sizes for 3, 4, 6, 7, 8, 9; with `3D kaart` off the menu writes 0 (`Laag`) or 1 (`Normaal`) (`menu-forms.md` section 12 no. 38). RES 3 in full:

- 640x480 at 16 bpp.
- Selector 1, used by `FUN_004cd170`: 3Dfx driver if enumerated, else another secondary driver, else NULL GUID (primary).
- `DAT_0059dbb4 = 1` overrides `[PROGRAM] FOCUS` (`FUN_004477b0` maps FOCUS 0 to 1 and FOCUS 1 to 2; shipped FOCUS=1 is overridden because `FUN_00447870` runs later, from `FUN_004480f0`).
- `FUN_00447830`: when `[DIRECTX] INDEX` is -1 or > 0, selector 4 (user driver). `raser.ini` has no such section, so atoi gives 0 and nothing happens.
- `FUN_004a6b00(1)`: `0x7152ec = 1`, objects use `FUN_004a9a20` ("drawing normal") instead of `FUN_004a9c20` (`FUN_004a99a0`).

### 3. Viewport (`FUN_004c0e10`)

`D3DVIEWPORT2`: `dwX 0, dwY 0, dwWidth W, dwHeight H, dvClipX -1.0, dvClipY H/W, dvClipWidth 2.0, dvClipHeight 2*H/W, dvMinZ 0.0, dvMaxZ 1.0`. One viewport, no per-pass change (`FUN_004c0d30` only reselects). At 640x480: x/w in -1..1, y/w in +0.75..-0.75.

### 4. Projection (`FUN_004b39d0(out, near, far, fov)`)

From asm `0x4b39d0`-`0x4b3a51`, `[0x576678]` = 0.5, matrix in memory order, `c = cos(fov/2)`, `s = sin(fov/2)`, `Q = s*far/(far-near)`:

```
c 0 0     0
0 c 0     0
0 0 Q     s
0 0 -near*Q 0
```

| Site | near | far | fov | Meaning |
|---|---|---|---|---|
| `0x4bb65a` `FUN_004bb5a0` ctor | 10.0 | 12500.0 | pi*0.2 | device default, replaced by `0x44c305` before the race |
| `0x44c305` `FUN_0044c200` | 0.5/zoom | 12500.0 | zoom*pi | race setup |
| `0x451872` `FUN_004517f0` | 0.5/zoom | 12500.0 | zoom*pi | zoom easing |
| `0x44d431`, `0x44d4ef` `FUN_0044cf90` | 0.5/zoom | 12500.0 | zoom*pi | numpad + and -, debug only: gate `DAT_006fb950`, shipped `TWEAK_MODE=0` (`input.md` C8) |
| `0x484337` `FUN_004840c0` | 0.99 | 10000.0 | pi*0.5 | HUD layer, stored at manager +0x48 |

`zoom` = `0x6fb974`, set to 0.375 (`0x3ec00000`) in `FUN_00449b30` at `0x449c9c`. Default race projection: near 1.33333, far 12500, fov 67.5 degrees horizontal (1.178097 rad), vertical 53.234 degrees via the viewport, `c` 0.831470, `s` 0.555570, `Q` 0.555630, `-near*Q` -0.740839. So x/w = 1.49661*x/z and on a 640x480 screen y spans 1.99547*y/z in NDC.

### 5. Zoom (`FUN_004517f0`)

Runs each loop in `WinMain`, right after the frame `FUN_0044cb80`. Globals: target `0x5a28b8` (.data 0.375), seconds `0x5a28bc` (.data 1.0).

```
if (target != zoom) {                    // exact float compare
  zoom += (target - zoom) * dt / seconds // dt = FUN_004a6800(0x7128b0): 0 -> 0.1, capped at 0.1
  proj = FUN_004b39d0(0.5/zoom, 12500.0, zoom*pi)
  copy to 0x73b3f4; SetTransform(3, &0x73b3f4)
}
```

Script binding `ChangeFOV(fov, sec)` is `FUN_00474940` (pushed at `0x476473`), writes target and seconds. `bonus.dso`: `OnPickup_pw_fastf_ANIM` calls `ChangeFOV(0.6, 1.0)` (fov 108 degrees, vertical 91.82, near 0.8333), `OnTurnoff_pw_fastf_ANIM` calls `ChangeFOV(0.375, 0.5)`. These are the only two uses. Near times fov is a constant pi/2.

Numpad path (`FUN_0044cf90`): `zoom *= [0x5767c8]` 1.1 or `[0x5767c4]` 0.90909; if `zoom <= 0` it becomes 0.01 (`0x3c23d70a`) or -0.01 (`0xbc23d70a`).

### 6. Matrices and convention

All three are fields of the device object `0x73b258`.

| Address | Device offset | Slot | Filled by |
|---|---|---|---|
| `0x73b474` | +0x21C | `SetTransform(1)` | `FUN_004b5b10` copies Object3d +0x10; world-space passes copy identity `0x73b538` (track `FUN_004aecd0`, skid `FUN_00445180`); `FUN_00446fe0` and `FUN_0043de00` copy per-sprite matrices from their 300-byte records |
| `0x73b434` | +0x1DC | `SetTransform(2)` | `FUN_00438670` via `FUN_004b3a60`; HUD `FUN_00485ed0` saves it and writes identity, `FUN_00486040` restores |
| `0x73b3f4` | +0x19C | `SetTransform(3)` | section 4; HUD `FUN_00485ed0` writes manager +0x48, `FUN_00486040` restores |

Identity `0x73b538` and zero matrix `0x73b580` are built in `FUN_004bc4e0`. Every matrix is 16 f32 passed by pointer. Object3d +0x10 rows are right, up, forward, position (`simulation-core.md`).

`FUN_004b3a60(out, from, at, up, roll)` (ctor call: from (2,30,30), at (0,0,0), up (0,1,0)): `v = normalize(at-from)`, `r = normalize(up x v)`, `u = normalize(v x r)`.

```
r.x      u.x      v.x      0
r.y      u.y      v.y      0
r.z      u.z      v.z      0
-r.from  -u.from  -v.from  1
```

Row vectors, `p' = p * World * View * Proj`, +X right, +Y up, +Z into the screen. `roll != 0` pre-multiplies a Z rotation of `-roll`; `at == from` is fatal. Camera path passes roll 0 (`simulation-core.md`).

Winding, measured on all `.d3d` triangles: `cross(v1-v0, v2-v0)` agrees with the file's vertex normals on 93,969 triangles and disagrees on 5,120 (3,179 indeterminate, zero normal or area), median model 100%. `0_stoplg.d3d` and `0_stoplr.d3d` score lowest (33%). `SetRenderState` scan over the asm finds only states 1, 4, 7, 8, 9, 14, 17, 18, 19, 20, 21, 27, 28, 34, 41, 47: **no CULLMODE (22), no ZFUNC (23), no ALPHATEST (15), no SPECULARENABLE (29), no FOGTABLE* (35-38)**.

### 7. Vertex types

Mesh table `0x73b5c8`, stride 0xAC, type at +0. All writers: `FUN_004bc8c0` (argument, both callers push 2: `0x4b286f`, `0x4b7cfd`), `FUN_004bcca0` (literal 2), `FUN_004bca20` (copies a source mesh). **Nothing sets type 1, so the D3DVERTEX branch of `FUN_004be340` (`0x4be4cf`) and every type-1 branch in Mesh.cpp are dead.**

| Draw type | Used by |
|---|---|
| 1 `D3DVERTEX` | nothing reachable |
| 2 `D3DLVERTEX` | all meshes, track, every effect |
| 3 `D3DTLVERTEX` | radar only (`gfx_radr.cpp`, `win32-surface.md`) |

`D3DLVERTEX` layout as written by the game: +0 xyz, +0x0C untouched, +0x10 color, +0x14 specular, +0x18 tu, +0x1C tv, stride 0x20. `FUN_004be340` draws `DIP(4, 2, mesh+0x80, mesh+0x84, mesh+0x90, mesh+0x94, 8)`. Mesh +8 == 1 forces FILLMODE 2 around the draw, mesh +8 == 2 forces FILLMODE 1.

### 8. `.d3d` vertices (`FUN_004be590`, asm `0x4be6b7`, `0x4be836`)

Disk records, all f32:

| Offset | 33-byte (`v >= 0`) | 49-byte (`v == -1`) |
|---|---|---|
| 0x00 | x y z | x y z |
| 0x0C | nx ny nz | nx ny nz |
| 0x18 | tu tv | tu tv |
| 0x20 | 1 byte, not read back | r g b a, 0..1 |
| 0x30 | | 1 byte, not read back |

- 33-byte: `color = 0x00FFFFFF` (`0x4be78d`), **alpha 0**, `specular = 0`.
- 49-byte: `color = ftol(a*255)<<24 | ftol(r*255)<<16 | ftol(g*255)<<8 | ftol(b*255)` (`0x4be907`-`0x4be95a`, `[0x576918]` = 255.0), `specular = 0` (`0x4be964`).
- Disk normals are not stored in the vertex. `FUN_004beb10` (type 2 only, `0x4beaf9`) zeroes a separate 12-byte-per-vertex array at mesh +0x88 and accumulates per-triangle vectors into it. No draw path reads it as vertex data.
- Triangle, 9 bytes: three u16 kept in file order (`0x4bea74`-`0x4bea9b`), 3 bytes ignored.
- `FUN_004bf570` then scans the positions into mesh +0x0C (`FUN_004bf5e0`).

Data, 1,971 models: 1,847 49-byte (93,000 vertices), 124 33-byte (4,807 vertices). 966 models hold non-white colours. Top values: white 47,365; `(.973,.984,.557)` 2,936; `(.278,.322,.412)` 2,082; `(.278,.353,.706)` 1,761. Alpha: 1.0 on 90,728 vertices, rest mainly 0.8 (829), 0.75 (680), 0.4, 0.6, 0.5, 0.3, 0.35. 18 vertices in `e03_dacg.d3d` and `e03_whau.d3d` have alpha outside 0..1. RGB is always in range.

### 9. Track vertices (`.rmp`, `FUN_004b31a0`)

Plane = 4 LVERTEX-layout records + 6 indices, stride 0x8C. Ctor `FUN_004b3180` sets each vertex to color `0x00FFFFFF`, specular 0. File vertex: x y z tu tv, plus colour dword when the header is -1 (`DAT_00715f54`). File bytes `R G B x` become `0x00RRGGBB`; the 4th byte is dropped, so **alpha is 0**. `FUN_004ac310` copies records unchanged into four buffers.

All nine `.rmp` have header -1, all 4th bytes 0, every byte accounted for. Colours are baked per track:

| Track | Chunks | Road/land/extra/rail planes | Top road colours | Mean road RGB |
|---|---|---|---|---|
| 0 | 363 | 2352/3597/416/976 | `f8fb8e`, `475ab4` | 202 209 152 |
| 1 | 507 | 3987/4886/780/1456 | `fbfd97`, `4f5b75` | 189 195 143 |
| 2 | 400 | 1872/4914/36/1755 | `fffcf3`, `818fa0` | 204 205 202 |
| 3 | 645 | 4241/7898/2442/1216 | `ffffd9`, `626262` | 207 207 182 |
| 4 | 634 | 6576/5490/1269/2201 | `4d7793`, `fdd293` | 122 133 130 |
| 5 | 326 | 2376/2758/841/635 | `ffffff`, `fef9e7` | 202 200 185 |
| 6 | 334 | 3587/1551/1641/553 | `ffffff`, `36365c` | 162 165 174 |
| 7 | 477 | 2666/6476/565/736 | `ffffb3`, `475ab4` | 194 201 181 |
| 8 | 607 | 2752/11177/316/4069 | `fffef2`, `787994` | 203 206 209 |

Track draw, `FUN_004aecd0`, world identity, one `DIP(4, 2, ...)` per list, index ranges from chunk +0x10..+0x2C:

| Pass | List | Texture | Vertices, indices, count | Flag |
|---|---|---|---|---|
| 1 | road | this+0x4C | +0x6C, +0x70, +0x74 | 8 |
| 2 | land | this+0x50 | +0x7C, +0x80, +0x84 | 8 |
| 3 | extra | this+0x54 | +0x5C, +0x60, +0x64 | 8 |
| 4 | rail | this+0x58 | +0x8C, +0x90, +0x94 | 1 |

### 10. Vertex colour: is there game-side lighting?

No D3D lighting: no type-1 mesh, no `AddLight`, `SetLightState` only with 1, 4, 5, 6, 7 (scan of `+0x64` sites). `[world] lighting=3` in the etappe INI is not read: `spel.dat` has no such string.

**Static:** track and scenery use the baked colours above, never changed after load.

**Dynamic, cars only: `FUN_004a8200`.** Called from `FUN_004a8cb0` when owner +0x1C has bit 1 and owner +0x48 == -1. The bit is set for the player (`FUN_0044e340`), cops (`FUN_00407300`, `FUN_0040d6f0`, `FUN_0041ed30`), traffic (`FUN_004275e0`), and in `FUN_00425490`, `FUN_0042de60`:

```
sample = FUN_004ad710(list, tri)        // 3rd vertex colour of track triangle under the car, from FUN_004ad3d0
                                        // list 0 land, 1 road, 2 rail, other -> 0xFFFFFF
t = dt * (|owner+0xC4| * 0.1 + 1.0)     // [0x576338] 0.1, [0x576318] 1.0, no clamp on t
c.rgb += (sample.rgb - c.rgb) * t       // c = owner+0x4C, ARGB, alpha unchanged, initial 0xFFFFFFFF
owner+0x4C = c
out.rgb = min(c.rgb + ambient, 255)     // ambient = 0x7152f8, 0x715b00, 0x715b04
out.a = c.a
write out to +0x10 of ALL vertices of the mesh
```

The result also goes to linked parts (`FUN_004a8100`: list at owner+0x7C, count +0xAC, skipping Object3d +0xA5 modes 1 and 2) and to chained owners (owner+0x44). So baked car colours are overwritten at run time.

**Per-track ambient keys:** `raser.ini [MAPS] N`, args 11, 12, 13, parsed in `FUN_0044a690` (`0x44a974`: `[EBX+0x82]`, record stride 0x94), passed by `FUN_0044c200` (`0x44c7c5`) to `FUN_004a7230`.

| Track | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
|---|---|---|---|---|---|---|---|---|---|
| Ambient R=G=B | 50 | 70 | 128 | 128 | 70 | 70 | 70 | 70 | 60 |

Other runtime writers of vertex colour:

- `FUN_00431140` (from `FUN_00430ea0`): alpha only, car fade, towards 0x80 when owner +0x1C bit 3 else towards 0xFF.
- `FUN_004a8030` (from `FUN_00473db0`, `FUN_00473de0`): ARGB to all vertices of an object's mesh.
- `FUN_00443ef0`: 4-vertex car blob, ARGB bytes all = (R+G+B)/3 of owner+0x4C.
- `FUN_004a8660` (from `FUN_0044ceb0`): applies car `l_changes` vertices, writes color `0x00FFFFFF`, specular 0.
- `FUN_0047d1f0`: HUD elements (`hud-overlay.md`).

Dead: `FUN_004518e0` computes reflection UVs with debug prints; no E8/E9 caller, no pointer in the file.

### 11. Specular field

Specular is written as 0 by the `.d3d` loader, the `.rmp` ctor, skid (`FUN_00444a60`, `+0x14 = 0`), `prt_main.cpp` lines (`FUN_00462bb0`, `param_2[5] = 0`) and `FUN_004a8660`. Only two sites store a constant alpha: `0xFF000000` for car shadow (`FUN_0047b110`, `puVar2[3]`) and radar TLVERTEX (`FUN_00442800`, `0x44282e`). **None of these derive specular alpha from depth, so the game computes no per-vertex fog factor in any builder read here.** A scan of the effect ranges `0x43f000`-`0x440460`, `0x445400`-`0x4462a1`, `0x459000`-`0x463200` for writes at vertex offsets +0x14, +0x34, +0x54, +0x74 found only object members and these sites.

### 12. Fog

Device fields: enable `0x73b4d4` (+0x27C), colour `0x73b4d8` (+0x280), mode `0x73b4dc` (+0x284), density `0x73b4e0` (+0x288), start `0x73b4e4` (+0x28C), end `0x73b4e8` (+0x290). Fog goes through `SetRenderState(28 FOGENABLE, 34 FOGCOLOR)` and `SetLightState(4, 5, 6, 7)`. No FOGTABLE state exists anywhere.

**There are no per-track fog values.** One preset is hardcoded and no INI key per track exists. `FogOn` and `FogOff` in etappe `[triggers]` are editor labels: `spel.dat` has no such strings.

| Path | Enable | Colour | Mode | Start | End | Density | Reached? |
|---|---|---|---|---|---|---|---|
| Ctor `FUN_004bb5a0`, sent by `FUN_004bb7a0` | 0 | `0xFFFFFF` | 3 | 3.25 | 50.0 | 0.8 | always, off |
| `FUN_00457040` | 1 | `0xB4B4C8` | 3 | 3.5 | 1000.0 | 0.8 | only with `FOG != 0`, see below |
| `FUN_00456d90` trigger 17 | 0 | `0xC8C8FF` (state stored, not sent) | 3 | 3.5 | 1000.0 | 0.8 | no track places it |
| `FUN_00456d40` trigger 16 | unchanged | stores 0,0,255 in `0x6fce00`-`08` | | `0x6fce0c` 3.5 | `0x6fce10` 2000.0 | | no track places it; `0x6fce0c`, `0x6fce10` have no reader |
| `FUN_00457370` | 0 | `0xB4B4C8` | 3 | 3.5 | 1000.0 | 0.8 | dead: no E8/E9 caller, no pointer in the file |
| `FUN_0043b280` colour wash (game action 5) | | +5,+2,-5 per step | | | | | dead: `0x6fcdf0` only ever stored 0 at `0x457024` |

Trigger instances: `.pmp` chunks carry two trigger ints (`chunk+0xFC`, `+0x100`, `FUN_004ab6d0`). Parsing all nine files, every byte accounted for: **trigger 16 and 17 occur 0 times.**

Switch: `FUN_0044c200` (`0x44c722`, itself called once from `init_main` at `0x4581aa`) calls `FUN_0043d3c0`, which acts only when `0x6fb8d0 != 0`:

```
FOG = [OPTIONS] FOG from game.ini            // FUN_0044a090, 0x6fb8e0; shipped fog=0
if (FOG != 0 && (rand() & 1)) {              // FUN_00558625 is the MSVC LCG
  if (FOG != 2) { TEXTUREMAPBLEND = 7; if ([options] FILTER == 2) FUN_004bc200(dev, 1) }
  FUN_00457040()
}
```

`menu.exe` contains no `FOG` string, so only a hand edit enables this. `game.ini` comment on the key says it conflicts with alpha blending, default 0. **With shipped data, FOGENABLE stays 0 on all tracks.**

`FUN_00457040` order: FOGENABLE 1; FOGCOLOR current (`0xFFFFFF`); density, start, end, mode with defaults; material `0x5b1bac` diffuse and ambient = colour/255 (`[0x5766d4]`); `SetBackground` of that material; colour `0xB4B4C8`, FOGCOLOR, material again; start 3.5; end 1000.0 via `FUN_004577d0`. Fog off restores `SetBackground(0x5b2b64)` via `FUN_004576f0`.

### 13. `TEXTUREMAPBLEND`

Exactly four sites (scan of `PUSH 0x15` before `+0x5c`), cached in `0x73b505`:

| Site | Value | Condition | When |
|---|---|---|---|
| `0x4bb9ad` `FUN_004bb7a0` | 1 | always | device creation |
| `0x44bc4d` `FUN_0044bbf0` | 2 | `0x6fb8d0 != 0` | once, `FUN_0044c200` at `0x44c2d7` |
| `0x44bc25` `FUN_0044bbf0` | 7 | `0x6fb8d0 == 0` (RES 0, 1) | once, same call |
| `0x43d476` `FUN_0043d3c0` | 7 | `FOG == 1` and `rand() & 1` | once, same setup |

**It is never changed per draw pass.** RES 3 with shipped INI uses 2 for every 3D draw of the session. `FUN_0044bbf0` also sets filtering from `[OPTIONS] FILTER` (`win32-surface.md`). Its SHADEMODE 2 for `0x6fb8d0 != 0` is never sent: the constructor sets `+0x2c9 = 2` (`0x4bb6ff`) and the cache compare then matches ([`8bit-device.md`](8bit-device.md) section 11).

### 14. Draw passes in a frame (`FUN_0044da30`, RES 3)

`FUN_004c0840(0)` clears Z only, not the target (`win32-surface.md`). All rows run with `TEXTUREMAPBLEND` 2.

| # | Pass | Function | RGB into the blend | Vertex alpha | SRC, DEST | Z |
|---|---|---|---|---|---|---|
| 1 | Track road, land, extra, rail | `FUN_004aec50` -> `FUN_004aecd0` | `.rmp` baked | 0 | blend off | on |
| 2 | Sky | `FUN_0043d4f0` -> `FUN_004b5b10` | white | 1.0 | off, mode 0 from ctor `0x4b574c` | on |
| 3 | Opaque objects | `FUN_004a9a20` -> `FUN_004a8cb0` -> `FUN_004b5b10` | `.d3d` baked | file, unused | off | on |
| 4 | Blended objects, list `0x715b28` | `FUN_004a74f0` | baked or section 10 | file or owner | table below | below |
| 5 | Particles | `FUN_0045dce0` | not traced | not traced | 5, 6 (mode 1) | |
| 6 | HUD | `FUN_004882f0` | `hud-overlay.md` | | 5, 6 in `FUN_00485ed0`; element DEST in `FUN_0047cba0` | view identity, HUD proj |
| 7 | Skid marks | `FUN_00445180` | `0x404040` | `clamp(200 - 16*max(n-4,0), 0, 255)`, `FUN_00444a60` | 6, 5 (inverted) | |
| 8 | Sprites `gfx_wolk` (6-vertex fan, 70 records) | `FUN_00446fe0` | centre `A0A0C8`, rim `646464` (`FUN_00446cf0`) | centre 0x80 lowered by 0x80/life per tick (`FUN_00446730`), rim 0x10 | 5, 2 (additive) | |
| 9 | Finish flag | `FUN_00440160` | not traced | not traced | 5, 6 | ZENABLE toggled |
| 10 | Sprites `gfx_bwlk` (6-vertex fan, 70 records) | `FUN_0043de00` | centre `AAAAAA`, rim `323232` (`FUN_0043dba0`) | centre 0x80 lowered by 0x80/life (`FUN_0043d8f0`), rim 0 | 5, 6 | |

Passes 8 and 10 are skipped below 10 fps (`1/dt < 10`), need `0x6fb904`, and blend only with `alpha_blending` (`0x6fb940`, `game.ini` ships 1). Pass 7 needs `0x6fb90c`.

Elsewhere: car shadow `FUN_00443100` -> `FUN_0047b110`: texture `S_SHADOW.PCX`, DP fan, colour `0x80000000` (`0x443770` area, `local_114`), specular `0xFF000000`, 5, 6, ZBIAS 1. Car blob `FUN_00443ef0`: mode 0 or 1 (`0x444581`, `0x444594`), ZBIAS 1. Both are reached through callback `FUN_00443710` (pushed at `0x4446a0`). Radar: TLVERTEX, 6, 5.

Object3d +0xA5 blend mode (`0x5afa50` table, `FUN_004a74f0`, `FUN_004b5b10`):

| Mode | SRC, DEST | ZWRITE | Writers seen |
|---|---|---|---|
| 0 | 2, 1 | unchanged | ctor `0x4b574c`; blend off, drawn immediately in `FUN_004a8cb0` |
| 1 | 5, 6 | 0 | `0x437254`, `0x47ce69` |
| 2 | 2, 4 | 0 | `0x436318`, `0x436c8b` |
| 3 | 5, 6 | 1 | `0x431630` in vehicle setup `FUN_00431320`, only when `alpha_blending` and hardware 3D |

Modes 1 to 3 queue the object on list `0x715b28` (`FUN_004a74a0`). Script `FUN_00473f50` and HUD code (`0x47d11f`, `0x482db3`) can also write the mode.

Sky: `eNN_anim.ini [sky]` gives `skyboxNN.d3d, skyNN.pcx`, object name `SKY`. Scale (10, 4, 10) (`0x6c40a0`-`a8`, `FUN_004b4360`), position = camera (`FUN_0043d4f0`). All sky vertices white, alpha 1.0. Extents before scale: 285 x 100..472 on tracks 0, 1; up to 1047 x -451..971 on track 5.

## Inferred

Items here rest on DirectX 5 SDK semantics (not on the binary) or on derivation.

- **Enum names** (`d3dtypes.h`, as in `win32-surface.md`): `D3DTBLEND_DECAL` 1, `MODULATE` 2, `COPY` 7; `D3DFOG_LINEAR` 3; blend 2 ONE, 4 INVSRCCOLOR, 5 SRCALPHA, 6 INVSRCALPHA.
- **MODULATE in RES 3:** `out.rgb = tex.rgb * vertex.rgb`, `out.a` = texture alpha if the format has it, else vertex alpha. The owner's patch notes state the game asks for `16BPP_RGB` and use colour key, so textures have no alpha and **vertex alpha decides all blending**. Host: unlit material with vertex colours in RGBA, multiply by texture, keep vertex alpha, discard key texels (`render-textures.md`).
- **COPY (7):** would drop vertex colours and vertex alpha, so `FOG=1` also loses the baked track colour.
- **DECAL (1):** never visible. BeginScene exists only in `FUN_0044da30` and `FUN_004415e0` (`win32-surface.md`); `FUN_004415e0` runs first at `0x44c49a`, after `FUN_0044bbf0` at `0x44c2d7`.
- **Specular adds nothing:** all RGB parts are 0. Host can omit it.
- **Cull:** no CULLMODE call means the D3D default `D3DCULL_CCW`. With the left-handed setup, cross-product agreement in section 6 matches front = clockwise on screen.
- **Z:** default ZFUNC LESSEQUAL. Z buffer is 16-bit in the original (owner's patch notes, `FUN_004C0610`), near 1.33 to far 12500. Z-fighting in the original is expected at distance; a host with 24 or 32 bits draws cleaner.
- **Fog would be vertex fog:** with light states set and no table mode, D3D's transform stage is the only place that could produce a factor, using `f = (end - z)/(end - start)` with z in view space. With `start 3.5, end 1000`, full fog at 1000 units. Host: leave fog off to match shipped data. If `FOG` support is wanted, linear fog on view z with colour `0xB4B4C8` and a 50% per-launch chance.
- **Host transform.** A D3D row-vector row-major array and a column-vector column-major array have the same element order, so `new THREE.Matrix4().fromArray(d3d)` is the same transform, multiplied as `P*V*W`. Bypass Three.js camera conventions; use raw matrices:

```
clip = P * V * W * vec4(p, 1)
clip.y *= W_px / H_px          // dvClipY = H/W
clip.z = 2*clip.z - clip.w     // D3D 0..1 to GL -1..1
// frontFace = CW, cull back: same pixels as D3DCULL_CCW (Three.js: side = BackSide)
```

  Or bake it in: row-major `[[c,0,0,0],[0,c*W/H,0,0],[0,0,2Q-s,s],[0,0,-2*near*Q,0]]`. Widescreen follows from `dvClipX/dvClipWidth`, see part 3 of `README_technical_spel.dat.md`.
- **Target not cleared + sky:** the sky must cover every pixel. Track 5 sky corners reach about 10468 x 10418 after scale, a diagonal of 14768, beyond far 12500, so corners can clip; the previous frame would then stay visible. If holes show in the port, keep the back buffer between frames (no colour clear, `preserveDrawingBuffer`).
- **`setcolor`, `SetColor`** (`bonus.dso` externs, strings at file offsets 0x1a90e8, 0x1a919c) are probably what `FUN_00473db0`, `FUN_00473de0` implement; the binding push was not read.

## Unknown

- Whether a real D3D5 HAL computes vertex fog for `D3DLVERTEX` on the original drivers, overwriting specular alpha. `dynamic/RESULTS.md` has no render evidence. Mesh specular 0 would mean full fog if nothing overwrites it. Moot with shipped `fog=0`.
- Why car shadow keeps specular `0xFF000000` when other LVERTEX use 0.
- Meaning of `n` in the skid alpha formula (`FUN_00444c40`, `FUN_00444d20` arg). Owner's notes say fresh marks have alpha 0.
- Particle (`Par_Main.cpp`, `par_spark.cpp`, `prt_main.cpp`) and finish flag vertex colours: not traced, out of scope here.
- Who sets mesh +8 (FILLMODE override in `FUN_004be340`).
- Purpose of the ignored bytes: 33rd or 49th vertex byte (values look arbitrary: 136, 15, 0, 140, 160; 33-byte: 1, 109) and the last 3 triangle bytes.
- Effect of the 18 out-of-range alpha values in `e03_dacg.d3d` and `e03_whau.d3d`; depends on `__ftol` low bits and whether those meshes blend.
- Readers of the accumulated array at mesh +0x88: `FUN_004518e0` (dead) is the only one seen; shadow code was not checked.
