> Static reading, written before the path was run. [render-8bit.md](render-8bit.md) has what a run on the real Ramp device settled, and where that differs from this note it holds.

# 8-bit path: textures, palettes and files (`RESOLUTION` 0 and 1)

Static evidence: `disassembly.asm`, per-function C, `public/assets/game/` parsed with read-only Python (`rcs.ind`, `rcs.img`, `rc.ind`, `rc.img`, INI, `.omp`, `.rmp`, `.d3d`, `race-files.json`). Nothing was run. Every status is **C** Confirmed (code or parse), **I** Inferred, **U** Unresolved. DirectX flag names come from header knowledge; the numbers come from the binary.

Parse scripts, not project files: `a session scratch folder` (`sim.py` registration order, `meshes.py` UV ranges, `rmp.py` track UV, `pal.py` palettes and index use, `sizes.py`, `meshcheck.py`, `rcsprites.py`).

## 0. Answers in short

| Question | Answer | St | Evidence |
|---|---|---|---|
| How many pages, what size | **One.** Texture table index 0, `init.pcx`, 2048x2048, 8 bpp. "Shared pages" in the older notes is one page | C | `FUN_0044bad0` 0x44bb39, `FUN_004b8910`, PCX header parse |
| Grid | 6x6 tiles: `FUN_004b88a0(6.0)` (`PUSH 0x40c00000` at 0x44bb03). du = dv = float(1/6) = `0x3E2AAAAB` | C | `FUN_004b8b80` |
| Capacity | **35 sub-textures.** The 36th is placed, then fatal "out of main texture space". Shipped etappes use 20 to 29 | C | `FUN_004b9fa0` 0x4ba3bf-0x4ba416, float simulation, `sim.py` |
| How a texture lands | PCX into a temp surface, stretched by `Blt` into its tile, temp released | C | `FUN_004b9fa0` |
| UV remap | `u' = abs(u)*du + u0`, `v' = abs(v)*dv + v0`, rewritten in place. Track at load, meshes at first draw | C | `FUN_004ae2d0` family, `FUN_004bdcd0` |
| Wrap, tiling | None per tile. No address or wrap state is ever set. A UV past 1 reads the neighbouring tile | C | section 4 |
| Palette file | `[PALET] ETAPPEn` **first** argument: `e00_pal.pcx` (etappe 0, 9), `e02_pal.pcx` (1 to 8). `Pallow.pcx`, `Palhigh.pcx` are only the initial contents of the name buffers, overwritten before use, and do not exist in `rcs.img` | C | `FUN_00447db0`, `FUN_00447600`, `FUN_00447d10` |
| Colour key of the page | Index `0xFE`, palette colour (255,0,127). `SetColorKey(8, {0xFE,0xFE})` | C | `FUN_004ba810`, `FUN_004c81b0` case 8 with bpp 8 |
| Colour key of sprites, fonts | Index `0xFF`, (255,0,255) | C | `FUN_004cbd20`, `FUN_004ca420` |
| Pixels of a loaded surface | Raw palette indices, for everything. `0x7409cc` = 0 in `RESOLUTION` 0, 1 | C | section 8 |
| Load, SetPalette | No HAL (`HW.dwFlags` = 0): never `Load`, `SetPalette` twice on the page. HAL: one `Load` at creation plus one per tile, no `SetPalette` on textures | C | section 6 |
| Missing files | None for etappes 0 to 9 | C | section 10 |

Because game code runs as shipped, **everything in sections 2 to 5 happens inside the wasm**. The host only has to provide the surfaces, formats, blits, palette object and a renderer that reads an 8-bit page.

## 1. What differs from `RESOLUTION` 3 (texture side)

| Item | RES 0 | RES 1 | Evidence (C) |
|---|---|---|---|
| Mode, bpp `0x5b37a0` | 320x200x8 | 640x480x8 | `FUN_00447870`, table `0x5b37b0` |
| `0x6fb8d0` hardware / `0x6fb894` 8-bit / `0x6fb890` class | 0 / 1 / 0 | 0 / 1 / 1 | `FUN_0044bd10` |
| `0x7152ec` (track `+0x9c`, `.omp` `param_12`) | 0 | 0 | `FUN_004a6b00` |
| `0x7409cc` pixel mode | 0 | 0 | `FUN_004480f0` calls `FUN_004c7ec0(1)` only when `FUN_00447870` returns nonzero; it returns 0 for 0, 1. `FUN_004c8540` writes 0 when the primary has `DDPF_PALETTEINDEXED8` |
| `0x73b20c` texture source | 0, `.pcx` | 0, `.pcx` | `FUN_004b8840(1)` at 0x44bb77 is skipped by the `JZ 0x44bb89` at 0x44bb4d |
| Partition `0x5b1498` | 6.0 (default 16.0) | 6.0 | 0x44bb03 |
| Animsys `+0x14` (`0x712144`) | 1: frames use `FUN_004b94e0` | 1 | 0x44bb17, `FUN_004b7d30`. Other writer is only the ctor (0x4b6632); `FUN_004b68f0` does not touch it |
| Texture format | `FUN_004c2b90(2)`, slot `0x73b822`, "TXF_8BPP_RAMP" | same | `FUN_004c04b0` |
| `alpha_blending` `0x6fb940` | forced 0 | forced 0 | `FUN_0044baa0` |
| Texture detail manager | off: `FUN_00498760` does nothing, `FUN_00498870` returns -1 | same | those functions |
| Mip flag `0x73b4f8` | no effect: no file is `W = H + H/2` on this path | same | `FUN_004b9800`, PCX parse |

Slots `0x73b81e..0x73b82a` start at -1 (`FUN_004c1cb0` 0x4c1de9). With no 8-bit format enumerated, `FUN_004c2a50` is fatal "out of boundaries" on the first texture. **C**

## 2. The page

Created by `FUN_0044bad0` → `FUN_004b8910("init.pcx")` → `FUN_004b8e00(name, -1)` → `FUN_004b9b40(this, name, 0, -1)`. `FUN_004b8910` is fatal unless the result is index 0 ("main accummulator texture is not index 0"). It runs before the palette load. **C**

| Field of table entry 0 (stride 0x48, `0x73b1b0`) | Value |
|---|---|
| `+0x00` | texture handle |
| `+0x04` | system surface, 2048x2048, caps `0x1800`, 8-bit format, **the page pixels** |
| `+0x08` | video surface (HAL) or the same surface as `+0x04` with AddRef (no HAL) |
| `+0x0c`, `+0x10` | `IDirect3DTexture2` of `+0x04`, `+0x08` |
| `+0x14`, `+0x18` | name `init.pcx` |
| `+0x24`, `+0x28` | 2048, 2048: the load dimension, D=-1 corrected to H in `FUN_004b9b40` |
| `+0x2c`, `+0x44` | 0, 0 |
| `+0x34..+0x40` | 0, 0, 1, 1 |

Surface steps in `FUN_004b9b40` and `FUN_004b9890`: source 2048² from `FUN_004cb630`; temp 2048² and final 2048², both `0x1800`; `temp.Blt(NULL, src, rect(0,0,2048,2048), DDBLT_WAIT)`, `final.Blt(NULL, temp, NULL, DDBLT_WAIT)`; release temp, release source. So 12 MB of surfaces for a moment, 4 MB stay. **C**

`init.pcx` holds an old screenshot and colour ramps (viewed), with its own palette: 129 of its 131 used indices have another colour in `e00_pal.pcx` (parse). Tiles are written over it from the top left. Tiles that are not used keep these pixels. **C**

`FUN_00460070` (sparks) draws with fixed UV `0x3f7d0000` = 0.98828 and `FUN_0045fd50` skips its bind in 8-bit, so a spark reads page texel (2024,2024), which lies in tile 35, never written: `init.pcx` index 31, RGB (191,203,231) under `e00_pal`. **C** for the code and the texel; whether Ramp copy mode then shows that is **I**.

## 3. How a texture lands on the page

`FUN_004b94e0(name)` takes the next free table slot (`FUN_004b9120`, sequential, capacity 100), calls `FUN_004b9fa0(slot, name, 0)`, sets `+0x44 = 1`. `FUN_004b9fa0`, from the asm, **C**:

1. `+0x14` name, `+0x2c = 0`. `FUN_004c8690(fmt)`, a no-op for palettized.
2. `FUN_004b96c0(name, &w, &h, 0x1800, fmt)`: first 14 chars, cut at the first `.`, append `.pcx`, then `FUN_004cb630`. So `e00_bomn.tga` from an INI and `e00_weg.PCX` from `[MAPS]` both open a `.pcx`; the index match is `strcmpi`. Result in `+0x04`.
3. `+0x24 = w`, `+0x28 = h` (**PCX size, not tile size**). `+0x34 = u0`, `+0x38 = v0`, `+0x3c = u0+du`, `+0x40 = v0+dv`.
4. Dest rect: `L = ftol(2048*u0)`, `R = ftol(2048*u1)`, `T = ftol(2048*v0)`, `B = ftol(2048*v1)` (truncating; 2048 is read from entry 0). Source rect `0,0,w,h`.
5. `entry0.+04->Blt(&dest, tmp, &src, 0x01000000 DDBLT_WAIT, NULL)` at 0x4ba38e. **No key flag**: index `0xFE` is copied like any other. Stretch, because tile size is not PCX size.
6. Release `tmp`, `+0x04 = 0`.
7. `u0 += du` (x87, stored to float). If `u0 >= 1.0`: `v0 += dv`; if `v0 >= 1.0` fatal; `u0 = 0`.
8. `FUN_004c8690(primary)`. If HW.dwFlags ≠ 0: `FUN_004ba4c0(0)` = page `Load`.

A sub-texture entry ends as: `+0x00` handle **0**, `+0x04..+0x10` all 0, `+0x24/+0x28` PCX size, `+0x34..+0x40` tile UV, `+0x44 = 1`. No per-tile key, palette or surface. **C** (`FUN_004b9640` zeroes, `FUN_004b9fa0` never writes a handle.)

**Tile grid**, simulated with single-precision sums: sums land exactly on 1.0 after 6 steps. Tile k: col = k mod 6, row = k div 6, table index = k+1. **C**

| col or row | 0 | 1 | 2 | 3 | 4 | 5 |
|---|---|---|---|---|---|---|
| u0 or v0 | 0 | 0.16666667 | 0.33333334 | 0.5 | 0.66666669 | 0.83333337 |
| L or T | 0 | 341 | 682 | 1024 | 1365 | 1706 |
| R or B | 341 | 682 | 1024 | 1365 | 1706 | 2048 |

Stretch factors: 256 → 341/342 is 1.33, 128 → 2.67, 64 → 5.33. The sampling rule of the real HEL stretch is not in the binary; nearest, as `softBlit` in `directx.js` does for 16 bits, is **I**.

**Registration order**, all inside `FUN_0044c200`, **C**. Result checked by `sim.py`:

| # | Source | Rule |
|---|---|---|
| 1 | `FUN_0044bbd0` → `FUN_00468ca0` | `gen_anim.ini`, then `e%02d_anim.ini` of the etappe, then `L0_anim.ini`: `[config]` order, every frame of every listed anim. `FUN_004b7d30` dedupes by `strcmpi` on the full name within Animsys only, and never asks the global table |
| 2 | 4 × `FUN_004b26f0(name, 0, 1, -1)` | `[MAPS]` arg 2, 3, 5, 4 in that order (`weg`, `gras`, `vang`, `gra2`). `FUN_004b2580` searches the global table by `strnicmp` on `strlen(name)-4` chars, so `e06_weg.PCX` finds `E06_weg.pcx` |
| 3 | `FUN_004691a0` then `FUN_004a6b10` → `FUN_004ae490` → `FUN_004aead0` → `FUN_004536e0` | Each `.omp` record whose name is not an Animsys anim (`FUN_004b76e0`): mesh and texture from `etappeN.ini [objects]`, `FUN_004b2740(..., 0, 1, -1)`, same global search. `param_12 = 0` means no cached pipelines: type 11, 14, 16, 17 objects are ordinary tiles |

`FUN_004b6ff0` has one caller, `FUN_00468990`; `FUN_004b26f0` one, `FUN_0044c200`; `FUN_004b2740` one, `FUN_004536e0`. `FUN_004b94e0` is reached only through those. So the page is final when `FUN_0044c200` returns, and is written to **between** progress draws, so a page already shown can still change during loading. **C**

`S_SFX.PCX`, `S_SHADOW.PCX`, `L1RACER3.PCX` in code go through `FUN_004b7400` (Animsys lookup, fatal if absent), not a load. The HUD font uses `overlay` + `.PCX` (`0x5aa804`) the same way (`FUN_00481b90`, `FUN_00482960`). **C**

Validation of `sim.py`: for all 10 etappes the simulated texture basenames equal the TGA basenames recorded by the `RESOLUTION` 3 boot in `race-files.json` (20 to 29 each, no difference either way), and the simulated `.d3d` set equals the recorded one (412 to 520, plus 17 loose `tru*.d3d`). **C** that they match; the order on the page is from code, not from a run.

### Etappe order (k = 0, 1, 2, ...)

Same first 9 everywhere: `s_sfx s_shadow loradar hiradar cars01 l1racer2 l1racer3 overlay l1racer1`. Then:

| Etappe | Tiles | Continues with |
|---|---|---|
| 0 | 24 | sky00 skyref02 general 0_trffc1 e00_weg e00_gras e00_vang e00_gra2 e00_bomn 0c2_cs 0c5_cs 0c3_rijk 0c4_oudk 0c1_dam 0c6_dam |
| 1 | 26 | sky01 skyref01 general 1_trffc1 e01_weg e01_gras e01_vang e01_gra2 e1_cach1 e01_bomn 1_wgwerk e1_cach3 e1_cach4 e1_cach5 e1_cach6 e1_cach7 e1_cach8 |
| 2 | 22 | sky02 skyref02 general e02_weg e02_gras e02_vang e02_gra2 e02_strn e02_trfc e02_dorp e02_bos e02_pier e02_kurh |
| 3 | 25 | sky03 skyref02 e03_bomn e03_sign general e03_weg e03_gras e03_vang e03_gra2 e03_tan e03_mitt e03_park e03_oper e03_mus2 e03_pr2 e03_bors |
| 4 | 29 | sky04 skyref02 e04_bom e04_bau general e04_weg e04_gras e04_vang e04_gra2 e04_sign e04_belv e04_hdk e04_reta e04_frie e04_bebe e04_uni e04_bbt e04_staa e04_lanw e04_lakr |
| 5 | 20 | sky05 skyref05 general e05_weg e05_gras e05_vang e05_gra2 e05_ship e05_obj1 e05_gen e05_land |
| 6 | 24 | sky06 skyref06 e06_weg e6_gen general e06_aica e06_gras e06_vang e06_gra2 e6_2c e61a e62a e06_1b e6_2b e6cargo |
| 7 | 22 | sky07 skyref02 general e7_uobj2 e07_weg e07_gras e07_vang e07_gra2 e7_tsuol e7_uobj1 e7_cach3 e7_cach1 e7_cach2 |
| 8 | 22 | sky08 skyref08 general e08_shi1 e08_gra2 e08_weg e08_gras e08_vang e08_bau1 e08_dorf e08_bru1 e08_gre e08_shi2 |
| 9 | 26 | sky09 skyref02 general e09_tree e09_trfc e09_weg e09_gras e09_vang e09_gra2 e09_uffi e09_bos e09_rotn e09_tnnl e09_maid e09_stnh e09_crne e09_aveb |

`l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini` are byte-identical (`cmp`), so league changes nothing. All racers load whichever car is driven: **no tile depends on the car**. `sky00..09` take a tile but the sky mesh is not created in 8-bit (`FUN_0043d3c0` gated on `0x6fb8d0`). `loradar`, `hiradar` take a tile, all `0xFE`, with `radar=0`. **C**

## 4. UV remap, wrap, mesh cache

**Formula, asm 0x4bdd8f-0x4bdda3 and 0x4bde35-0x4bde4c, 0x4ae2e2-0x4ae31b.** `FLD u; FABS; FMUL du; FADD tex.u0; FSTP u`, the same for v with `tex.v0`. On a D3DLVERTEX `+0x18`, `+0x1c`. **C**

| Geometry | Where | Gate | When |
|---|---|---|---|
| Track road, land, extra, rail | `FUN_004ae2d0`, `FUN_004ae220`, `FUN_004ae370`, `FUN_004ae410`, from `FUN_004ac310` | track `+0x9c == 0` | Once, while the chunk is loaded. Stored vertices are final |
| Meshes | `FUN_004bdcd0` from `FUN_004bd070` | tex `+0x44 != 0`, mesh `+0xa8 != tex` | At first draw with that texture, just before the DIP |
| Radar items | `FUN_00442920` → `FUN_004bdcd0` | `radar != 0` | Not reached, shipped `radar=0` |

**Mesh cache `+0xa8`** (mesh table `0x73b5c8`, stride 0xac). Initial -1 (`FUN_004bd500`, `param_1[0x2a]`). `FUN_004bd070(mesh, tex)`, **C**:

- `tex.+0x44 == 0`: material handle, `SetRenderState(1, handle)` if `0x73b4ec != tex`. Only entry 0 has this in 8-bit, and no mesh is drawn with it.
- `tex.+0x44 != 0`: **no bind**. If `mesh.+0xa8 != tex`: remap in place, `mesh.+0xa8 = tex`.
- then `FUN_004be340(mesh)` draws.

The restore `FUN_004bdff0` is gated by `0x73b610`. That global has one code reference, the read at 0x4bd3dd, and lies in BSS, so it is 0 and **the UVs are never restored**. A mesh drawn with a second texture is remapped again from already remapped values: `u2 = abs(u1)*du + u0B`, which squeezes it to 1/36 of a tile. **C**

Meshes named with more than one texture (parse of every etappe; the third is etappe-dependent):

| Mesh | Textures | Happens? |
|---|---|---|
| `s_licht.d3d` | `s_sfx` (`obj_light01`), `skyrefNN` (`car_reflect`) | No second use: reflection frame gets `+0x90 = 0` in 8-bit (`FUN_00437370` gate on `0x6fb8d0`), and `FUN_004a8cb0` skips the draw. **C** |
| `police01.d3d` | `cars01` (`mpolizei`), `l1racer2` (`PATH_POLITIE_ANIM`) | **U**: needs both anims drawn in one race |
| `dummy.d3d` (4 verts) | `cars01`, `hiradar`, `l1racer2`, `loradar`, `s_sfx` | **U**: whether those frames draw |

Damage clones: `FUN_004bca20` copies vertices and gets a fresh `+0xa8 = -1`. Objects are created at load, before their source was drawn, so the copies hold raw UV. A clone made in a race from an already remapped source would be remapped twice. Whether any is made so late: **U**.

**Wrap and tiling.** A census of immediate state numbers before `CALL [reg+0x5c]` finds 1, 4, 7, 8, 9, 14, 17, 18, 19, 20, 21, 27, 28, 34, 41, 47: never 3 `TEXTUREADDRESS`, 5, 6 `WRAPU/V`. So D3D default addressing over the whole page. There is no tile clamp and no tile repeat: `abs(u) > 1` reads other tiles, a negative UV mirrors. **C**

Parse, what this means in the data, **C**:

- `.rmp`: all road, land, extra and rail UVs of all 10 etappes lie in 0..1 (file consumed to the byte by `FUN_004ae570` rules). No track bleed. UV = 1.0 lands exactly on the next tile's first row or column.
- `.d3d`: most meshes are within ±0.01. Clearly outside: `e04_bud3` v up to 2.008 (`e04_lakr`), `hot_drv` v 1.095 (`l1racer3`), `e03_whau` u 1.036, `1_wint` u 1.027, `e0_nkrk` u 1.011; negative: `e04_tan2` u -0.075..-0.005, `e9_bom3` u -0.369..0.003. These look different from RES 3, where the D3D wrap repeats. That is the original's behaviour and comes out of the wasm by itself.

PCX and TGA share orientation: page row 0 is the image top, as in the TGA loader after its flip. Mean difference per channel, PCX under `e00_pal` against TGA: `0c1_dam` 5.6, `e00_gras` 6.7, `general` 9.1, `e00_weg` 10.4, `s_sfx` 11.8, against 50 to 100 when flipped. `overlay.pcx` has the same layout as `overlay.tga` but portrait tints differ (viewed; 25.8). `sky00.pcx` is other art (58.5), not drawn. **C**

## 5. Which handle is bound

Sub-texture handles are 0 (section 3), so the texture state decides everything. **C**

| When | Site | State 1 becomes |
|---|---|---|
| Init | `FUN_004b8910` (`0x73b4ec` starts -1, ctor 0x4bb6ed) | page handle |
| Every frame before track | `FUN_0044da30` 0x44da89 | page, if `0x73b4ec != 0`; material too |
| Every frame before objects | `FUN_0044da30` 0x44db5a | page, same |
| Track | `FUN_004aecd0` binds only under `+0x9c != 0` | unchanged |
| Objects, blob shadow, HUD | `FUN_004bd070` branch for `+0x44 != 0` | unchanged, so page |
| Particles | `FUN_0045fd50`, `FUN_0047b110` bind only under `0x6fb8d0 != 0`. `FUN_00443710` calls only `FUN_00443ef0` in 8-bit | unchanged |
| After the HUD | `FUN_00445180` skid, `FUN_00446fe0` clouds, `FUN_00440160` flag, `FUN_0043de00` bwlk: **no 8-bit gate on the bind**, table `+0x00` of a sub-texture | **0**, untextured, until the next frame |

So skid marks, smoke, flag and `bwlk` draw with `TEXTUREHANDLE` 0 in 8-bit, with raw vertices. Their gates remain `skidmarks`, `clouds`, `finish_flag` as read by `FUN_00449b30`; 8-bit does not clear them. Colour a Ramp device gives such a draw: **U** (out of this note). The host maps handle 0 to `renderState.texture = null` already.

`FUN_004a9c20` draws objects with `+0x44 != 0` first, then `+0x44 == 0`. The second pass is empty in 8-bit. **C**

Cached pipelines: `FUN_004b2e40` tests `tex.+0x2c == 4`; in 8-bit `+0x2c` is 0 for all entries. No `Load` while driving. **C**

## 6. Load, SetPalette, SetColorKey, GetHandle, in order

HAL test: `FUN_004c1030(0x73b258)` = `HW.dwFlags != 0` (`FUN_004bc160`, `FUN_004c0ff0` copies HW first). **C**

| Step | No HAL (`HW.dwFlags == 0`) | HAL (`HW.dwFlags != 0`) |
|---|---|---|
| Page pixels | `+04` as section 2 | same |
| QI memory | `+04` → `+0c` | same |
| Video | `+08 = +04`, `AddRef` (0x4b9dae) | `FUN_004b9ab0`: caps `0x4005000`, same format |
| Palette | `FUN_004c2af0() == 2`: `+04.SetPalette(0x7409ec)` 0x4b9dd4, `+08.SetPalette(0x7409ec)` 0x4b9e06, the same surface twice | **none on texture surfaces** |
| QI video | `+08` → `+10` (0x4b9e3a) | `+08` → `+10` (0x4b9d3b) |
| Load | none | `+10.Load(+0c)` 0x4b9d68, `+30 = 1` |
| Key | `+04.SetColorKey(8,{FE,FE})`, `+08.SetColorKey(8,{FE,FE})` | same, **after** the Load |
| Handle | `+0c.GetHandle` 0x4b9f56 | `+10.GetHandle` 0x4b9efc |
| Each sub-texture | `Blt` into `+04`; `FUN_004ba4c0(0)` returns at once | `Blt` into `+04`; `+10.Load(+0c)` of **entry 0** (`FUN_004ba4c0(0)`: entry 0 has `+44 = 0`, else-branch, 0x4ba44b) |
| After a wait | `FUN_004b8bc0` for entries with `+08 != 0`, so entry 0 only: `IsLost` → `Restore`, `FUN_004ba4c0(0)` (no-op) | same, with `Load` |

Palette object, **C**: `FUN_004c9c90` (from `FUN_004c4fa0` 0x4c5593): `LocalAlloc(0x40, 0x400)` at `0x7409f0`, `CreatePalette(0x44 8BIT|ALLOW256, entries, &0x7409ec, NULL)`, `FUN_004c9d50` → `SetPalette` on primary `0x7408ac`, back `0x7408b0`, buffer `0x740890`. One palette for all.

Which branch is the real one: a Ramp device is a software device, so its HW description should be empty and the no-HAL branch taken (**I**, DirectX knowledge, not in the binary). The HAL branch gives a palettized texture no palette, which fits this: it was not meant for 8-bit (**I**). `FUN_0044b9d0` (blend caps) returns 0 at once in 8-bit and `FUN_004c1080` is reached only under the manager, so **reporting no HAL costs nothing here** (**C**).

## 7. Palette

**Which file.** `FUN_00447db0`: reads `[ETAPPE] ETAPPE` from game.ini into ESI (0x447deb), `sprintf("etappe%d", ESI)` (0x447f1f), `[PALET]` key from raser.ini, must have 2 args (fatal), arg 0 and 1 cut to 12 chars into `FUN_00447600` → `strncpy` into `0x59db8c`, `0x59db9c`. `FUN_00447d10`, jump table 0x447d90: RES 0, 1, 2, 5 use `0x59db8c`; 3, 4 use `0x59db9c`; 6 to 9 load none. **C**

`raser.ini` says: ETAPPE0, 9, 10, 11 `e00_pal.pcx`; ETAPPE1..8 `e02_pal.pcx`. **The two files have equal palettes** (`e00_pal == e02_pal`, parse), and 189 of the 199 PCX in `rcs.img` share this exact palette, including all wait pictures and every tile texture. So in the shipped game **one palette serves all etappes**, and raw indices are correct for the art. Own palette: `scrl_lo`, `scrl_hi` (but every index they use has the same colour in `e00_pal`, 0 differences), `init` (129 of 131 used indices differ, section 2), and `e01_pal`, `e02_pl16`, `palet`, `scroll`, `_backup_`, `back1`, `back2`, which are not loaded. No file is ever shown with its own palette. `render-textures.md` section 1 lists rows only for 2 to 9; 0 and 1 belong with 2 and 5. **C**

**Load order** at start, **C**:

| # | Site | Call |
|---|---|---|
| 1 | `FUN_004c9c90` | zeroed entries, CreatePalette, three SetPalette |
| 2 | `FUN_004c04b0` ("setting palette") | `SetEntries(0, 0, 256, zeros)` |
| 3 | `FUN_0044bad0` → `FUN_004b8910` | page and `init.pcx`; palette still black, no display |
| 4 | `FUN_00447d10` → `FUN_004cab50(name, 1)` | seek end-768 of the member, R,G,B into `0x7409f0[i*4]`, peFlags untouched; `SetEntries(0, 0, 256)` |
| 5 | `FUN_00447d10` | `SetEntries(0, 0, 255)` |
| 6 | `FUN_004c9ff0(pal, 0, 255, 0x40, 1)` | peFlags = `0x40` for 0..254; `SetEntries(0, 0, 255)` |

**Entries of `e00_pal`/`e02_pal`**, parse. Index 0 (0,0,0), 1 (23,19,19), 15 (255,255,255), 253 (0,16,0), 254 (255,0,127), 255 (255,0,255).

| Index | Role | peFlags |
|---|---|---|
| 0..253 | Art | `0x40`. `FUN_004c9ff0` accepts only 0, `0x40`, `0x80`; these are `D3DPAL_FREE`, `READONLY`, `RESERVED` by header (**I** for the name). Log text "Locking Pallette" |
| 254 `0xFE` | Texture key, `DAT_005b149c`. Stays (255,0,127): `FUN_004cab50` does not force it. Used by art: e.g. `e00_gras` 4382, `e00_weg` 833, `0_trffc1` 9553 texels; `loradar`, `hiradar` all | `0x40` |
| 255 `0xFF` | Sprite and font key, `DAT_005b3940`, and primary, back, buffer key from `FUN_004c4fa0`. Almost unused in textures: 0c1_dam 11, e01_vang, e03_gras, e09_crne 1 each | 0 (`FREE`): count 255 stops before it |

`render-textures.md` section 2 says `FUN_004cac30` runs in 8-bit modes and forces palette[0xFE]. **That is wrong for 0 and 1.** Its callers are `FUN_004cb630` and `FUN_004cb230` under `0x7409cc != 0`, and `FUN_004cae20` under flag 2, while `FUN_004409d0` passes `0x19`. In `RESOLUTION` 0, 1 it never runs; the PCX's own palette is never read. `FUN_004cab50` is the only palette reader. **C**

`FUN_0044c030` sets the buffer screen's key to `{0,0}` afterwards ("init color key bufferscreen"). No wait or sky blit uses a key flag. **C**

**Later changes**: only the flitser, `FUN_00457880` → `FUN_0043c120(0, FUN_0043b0b0, FUN_0043b130, FUN_0043b0f0)`, **C**:

- Start `FUN_0043b0b0`: `GetEntries(0, 0, 255, 0x6c35d4)`, peFlags `0x40`, `SetEntries`, counter 0.
- Tick `FUN_0043b130`: `SetEntries(0, 0, 255, all (0xEB,0xEB,0xEB,0))`; returns true on the second call (`1 < counter`). So all but entry 255 turn light grey for two calls. The 16-bit branch is a colour fill instead.
- End `FUN_0043b0f0`: restores with flags `0x40`, then again.

A palette change affects what is on screen at once, since scan-out reads through it (**I**, indexed display). All other `SetEntries` callers are in the table above; `FUN_004cae20` would call it with flags 6, never passed. **C**

## 8. What a loaded surface holds

`0x7409cc` writers are 0x4c7ec4 and 0x4c85ad only. Values ever written: 0 and 1. Cases 2 and 4 are dead. **C**

| Loader, target | `0x7409cc` = 0 (RES 0, 1) | = 1 (RES 2..9) |
|---|---|---|
| `FUN_004cb630` PCX texture, `FUN_004c4b90` surface in the passed format | raw index bytes, RLE as stored | `FUN_004c81b0(i,8)` u16 |
| `FUN_004cb230` PCX sky, `FUN_004c4a80` | raw index | same as above; not reached |
| `FUN_004cae20` PCX screen, buffer | raw index | not reached |
| `FUN_004cc0b0` RC sprites, `FUN_004c4a80` | raw index, `fread` per row | u16 per pixel |
| `FUN_004ca420` fonts, `FUN_004c4a80` | raw index, `fread` per row | u16 per pixel |

`FUN_004c4a80` passes no pixel format (flags 7, caps `0x800`), so these surfaces take the primary's format: 8-bit palettized here. `FUN_004c4b90` has flags `0x1007`. TGA is unreachable in RES 0, 1. **C**

`FUN_004c81b0(x, 8)` returns x when bpp is 8, so key `0xFE` and `0xFF` stay indices. `FUN_004c8540` needs `GetPixelFormat(primary)` to have flag `0x20`; then it sets `0x740988 = 1`, `0x7409cc = 0` and skips the mask loops. `FUN_004c8690` skips on flag `0x20`. These mask loops never end on a zero mask, so a palettized format must carry the flag. **C**

## 9. Loaders

**PCX, `FUN_004cb630` / `FUN_004cb230` / `FUN_004cae20`.** Open `FUN_004c62c0` (`strcmpi` in the index, else file). Header 0x80 bytes, needs `0x0A 0x05`. w = xmax-xmin+1, h likewise, bytes per line at offset 66. Rows top-down. RLE: `(b & 0xC0) == 0xC0`, run `b & 0x3F`; a row ends when its count reaches bytes per line. `FUN_004c48f0(surface, &pitch)` has **two** arguments (asm; the C shows one), returns `lpSurface`, writes `lPitch`. `FUN_004cae20` takes pitch from globals saved in `FUN_004c4fa0` and clamps rows to screen height. All 199 members decode with exactly 769 bytes left (0x0C + 768). **C**

| Kind | Function | File, size | Surface | Key | Blit |
|---|---|---|---|---|---|
| Texture | `FUN_004b96c0` → `FUN_004cb630` | section 3 | temp, caps `0x1800`, 8-bit fmt | none on temp | stretch into page, `WAIT` |
| Sky | `FUN_004454c0` → `FUN_004cb230` | RES 0 `[MAPS]` arg 6 `scrl_lo.pcx` 480x200; RES 1 arg 7 `scrl_hi.pcx` 960x320. Skipped if `[OPTIONS] BACKGROUND` ≠ 0; the key is absent from the shipped `game.ini`, so 0 | caps `0x800` | none | `FUN_004455e0`, `WAIT`, to back or buffer; view W x (H - H/3) |
| Wait | `FUN_004416f0` → `FUN_004cada0` (header) + `FUN_004409d0` → `FUN_004cae20(2, name, 0x19)` | RES 0 `[wait_lo]` 320x200, RES 1 `[wait_hi]` 640x480 (`FUN_00449cb0`: `0x6fb894 == 0 || 0x6fb890 == 1` → hi). Decoded anew at every progress step | buffer screen | none | `FUN_004c8b90(2,1,0,0,w,h,0,0,W,H,0)`, equal sizes |
| Font | `FUN_0043ce10` → `FUN_004ca420` | set 0, below | one surface per glyph | `0xFF` | Only live use is tweak mode (`FUN_0043fc90`, `hud-overlay.md`) |
| Sprite | `FUN_00440950` → `FUN_00458730(2)`, `FUN_00458810` → `FUN_004cc0b0` | list `0x5a4768` | one surface per image, `FUN_004cbd20` | `0xFF` | Old 2D HUD, not live (`hud-overlay.md`) |

In the port the wait picture is decoded but `Blt` to a screen is `render().blitToScreen`, which does nothing, and `RaceRunner.load` shows `assets/loading/e0N.png`, built from the TGA. Showing `e0N_w_lo.pcx` needs new art or host work. **C** for the current state.

## 10. Files

### Pre-flight

`FUN_00468390` (`FUN_00468030`, `FUN_00468050`) runs in all modes: **every** `[objects]` row of `etappeN.ini` and every anim frame in the three anim INIs is checked with `FUN_004683f0` (`FUN_004c64d0` index lookup, or `_access`), texture name forced to `.PCX` when `0x6fb8d0 == 0` (`FUN_00467960`). Any miss is fatal: "The following texture files are missing". Parse of etappes 0 to 9: **no misses**, meshes and textures. **C**

### Etappe 0, car 0 (Edgar), by load order

Non-image files are as for `RESOLUTION` 3: the same 520 `.d3d` in `rcs.img`, 17 loose `tru*.d3d`, `etappe0.*`, all INI. Car 0's HUD is the loose `overlay0.ini`; its recorded `car` set holds only 11 WAV. No gate on mode in mesh loading, so **I** that the mesh set stays the same; a boot will confirm.

| Step | Function | Member | Bytes, size |
|---|---|---|---|
| Page | `FUN_0044bad0` | `init.pcx` | 1,034,677, 2048x2048 |
| Palette | `FUN_00447d10` | `e00_pal.pcx`, last 768 bytes | 929 |
| Sprites | `FUN_00458810` | `rc.img`, section below | 138,826 |
| Fonts | `FUN_0043ce10` | below | 123,735 |
| Sky | `FUN_004454c0` | RES 0 `scrl_lo.pcx`; RES 1 `scrl_hi.pcx` | 29,284; 60,203 |
| Wait | first `FUN_004415e0` | RES 0 `e00_w_lo.pcx`; RES 1 `e00_w_hi.pcx` | 27,553; 160,729 |
| Tiles | section 3 | table below, 24 members | 1,002,123 |

| k | Index | File | Added by | Size | Bytes | Rect L,T,R,B |
|---|---|---|---|---|---|---|
| 0 | 1 | `s_sfx.pcx` | gen_anim | 128² | 7,442 | 0,0,341,341 |
| 1 | 2 | `s_shadow.pcx` | gen_anim | 64² | 1,269 | 341,0,682,341 |
| 2 | 3 | `loradar.pcx` | gen_anim | 64² | 1,153 | 682,0,1024,341 |
| 3 | 4 | `hiradar.pcx` | gen_anim | 128² | 1,665 | 1024,0,1365,341 |
| 4 | 5 | `cars01.pcx` | gen_anim | 256² | 49,768 | 1365,0,1706,341 |
| 5 | 6 | `l1racer2.pcx` | gen_anim | 256² | 50,612 | 1706,0,2048,341 |
| 6 | 7 | `l1racer3.pcx` | gen_anim | 256² | 60,703 | 0,341,341,682 |
| 7 | 8 | `overlay.pcx` | gen_anim | 256² | 38,728 | 341,341,682,682 |
| 8 | 9 | `l1racer1.pcx` | L0_anim | 256² | 46,274 | 682,341,1024,682 |
| 9 | 10 | `sky00.pcx` | e00_anim | 256² | 34,515 | 1024,341,1365,682 |
| 10 | 11 | `skyref02.pcx` | e00_anim | 64² | 2,690 | 1365,341,1706,682 |
| 11 | 12 | `general.pcx` | e00_anim | 256² | 52,576 | 1706,341,2048,682 |
| 12 | 13 | `0_trffc1.pcx` | e00_anim | 256² | 54,316 | 0,682,341,1024 |
| 13 | 14 | `e00_weg.pcx` | track | 256² | 58,911 | 341,682,682,1024 |
| 14 | 15 | `e00_gras.pcx` | track | 256² | 68,870 | 682,682,1024,1024 |
| 15 | 16 | `e00_vang.pcx` | track | 256² | 61,357 | 1024,682,1365,1024 |
| 16 | 17 | `e00_gra2.pcx` | track | 256² | 62,745 | 1365,682,1706,1024 |
| 17 | 18 | `e00_bomn.pcx` | .omp | 256² | 55,761 | 1706,682,2048,1024 |
| 18 | 19 | `0c2_cs.pcx` | .omp | 256² | 44,192 | 0,1024,341,1365 |
| 19 | 20 | `0c5_cs.pcx` | .omp | 256² | 46,665 | 341,1024,682,1365 |
| 20 | 21 | `0c3_rijk.pcx` | .omp | 256² | 60,499 | 682,1024,1024,1365 |
| 21 | 22 | `0c4_oudk.pcx` | .omp | 256² | 17,768 | 1024,1024,1365,1365 |
| 22 | 23 | `0c1_dam.pcx` | .omp | 256² | 52,630 | 1365,1024,1706,1365 |
| 23 | 24 | `0c6_dam.pcx` | .omp | 256² | 71,014 | 1706,1024,2048,1365 |

Rows 4 and 5 of the page (v0 ≥ 0.667) keep `init.pcx` on etappe 0. Overlay art is `overlay.pcx` (tile 7) and the `ovl_*.d3d` meshes, as in RES 3. Every member above exists in `rcs.img`, by parse. **C**

### Other etappes and cars, by rule

| Item | Rule | Exists |
|---|---|---|
| Tiles | section 3 table | All, by parse |
| Palette | `[PALET] ETAPPEn` arg 0 | `e00_pal.pcx`, `e02_pal.pcx` yes |
| Sky | always `scrl_lo.pcx` (RES 0), `scrl_hi.pcx` (RES 1) | yes |
| Wait | `e0N_w_lo.pcx` 320x200, `e0N_w_hi.pcx` 640x480, N = 0..9 | all 20 yes. `[wait_lo] 7` has a trailing space; the host's `IniFile` trims, as `FUN_00449cb0` needs ≤ 12 chars |
| Fonts set 0 | `lo_fnt3 lomid logeel lo_geld lo_vlag lo_bts lo_fnt1 marc10 slider13 slider15 lo_fnt2 lo_fnt4 lo_fnt8 lo_fnt9` `.fnt`, from table `0x59a8c0`, set `(0x6fb894 == 0)`, entries 0..16 with `lo_fnt1` four times | all 14 yes. A miss here is fatal |
| Cars | No PCX per car. `race-files.json` `car` sets are WAV only for all 8, `pair` empty | |
| Etappes 10, 11 | named in raser.ini, but no track files, no `e10_anim.ini` | not installed, not reachable (`M:0x461a4c`) |

**Missing: nothing that is loaded.** Absent from `rcs.img` but harmless: `Pallow.pcx`, `Palhigh.pcx` (defaults, overwritten; `FUN_004cab50` would return 1000 silently), `back3..7.pcx` (`back1..7` is a pointer table at `0x5a0d3c` with no code reference), `e07_pal`, `e09_pal` (no INI names them). `e02_h_hi.tga` is the only TGA without a PCX, and no INI names it. Never loaded in 8-bit by any shipped etappe, by parse: `_backup_`, `back1`, `back2`, `e01_pal`, `e02_duin`, `e02_pl16`, `e03_gra2_ja`, `e03_gras_alt`, `e03_pal`, `e03_pr`, `e04_pal`, `e04_schi`, `e05_bomn`, `e05_pal`, `e06_pal`, `e08_arb`, `e08_pal`, `e08_qsrv`, `e6_2d`, `palet`, `refsky08`, `s_letter` and others. `.omp` count is what is read: `etappe6.omp` has 136 bytes (2 records) past its count. **C**

### `rc.img`

Image k is at the offset in `rc.ind` at `k*4-2`: 1-based (`FUN_004cc0b0`). Anim lists: 8-bit `0x5a4768` = 5, 1, 13, 8, 10, 2, 7, 43, 15, 16, 18, 22, 20, records `0x5a4830`, stride 12. **38 images**: 34, 35, 37..46, 47, 48..58, 59..71, 76. Applying the same parse to the 16-bit list `0x5a47a0` reproduces the recorded RES 3 ranges exactly, so the method holds. **C**

| Mode | Byte ranges `[start, length]` | Bytes |
|---|---|---|
| 8-bit | `[141645,12161]`, `[153961,121937]`, `[689220,4728]`, plus the count at offset 0, which a recording stores as member 0: `[0,15010]` | 138,826 + 15,010 |
| 16-bit, recorded `common` | `[0,141645]`, `[275898,413322]`, `[693948,39680]` | 594,645 |

## 11. Getting the files to a race in this mode

**Today.** `race-files.json` holds `files['rcs.img'|'rc.img'] = {common, etappe[0..9], car[0..7], pair}`, `late`, `music`, from `RESOLUTION` 3 boots only. By parse, for etappe 0, car 0: 646 members: 520 `.d3d`, 82 `.wav`, 25 `.tga`, 17 `.fnt`, 2 `.pcx` (`e00_w_hi.pcx`, `e02_pl16.pcx`). Of these, the 8-bit path uses the `.d3d`, `.wav`, and four fonts; nothing else. `prepareRace` does not look at the mode, so RES 0, 1 would download about 10 MB of TGA and hi-fonts for nothing, then miss every 8-bit member. `SparseFile.read` catches a miss with a **synchronous** XHR for the rest of that member, so it would still run: 38 blocking requests in `rcs.img` (24 tiles, `init`, palette, sky, wait, 10 fonts) and 38 in `rc.img`, whose 8-bit ranges do not overlap the recorded ones. **C** (by reading; not run)

With lists, etappe 0, car 0 goes from 15,694,459 bytes of `rcs.img` to 7,705,923 (RES 0) or 7,870,018 (RES 1), `.d3d` and `.wav` included, music apart.

| Etappe | Tiles | Palette | RES 0 bytes, image files | RES 1 | RES 3 same class |
|---|---|---|---|---|---|
| 0 | 24 | e00 | 2,218,301 | 2,382,396 | 10,206,837 |
| 1 | 26 | e02 | 2,170,535 | 2,308,188 | 9,437,568 |
| 2 | 22 | e02 | 2,047,593 | 2,194,949 | 8,803,045 |
| 3 | 25 | e02 | 2,276,594 | 2,436,251 | 10,393,507 |
| 4 | 29 | e02 | 2,408,226 | 2,574,551 | 10,893,689 |
| 5 | 20 | e02 | 1,969,740 | 2,108,033 | 9,383,309 |
| 6 | 24 | e02 | 2,037,543 | 2,187,846 | 10,492,408 |
| 7 | 22 | e02 | 2,098,206 | 2,259,538 | 9,805,253 |
| 8 | 22 | e02 | 2,049,090 | 2,204,170 | 7,829,879 |
| 9 | 26 | e00 | 2,268,971 | 2,420,545 | 8,613,112 |

Image files means tiles, `init`, palette, fonts, sky, wait. RES 3 same class: TGA, `w_hi.pcx` header, `e02_pl16`, hi fonts. `.d3d` and `.wav` come on top in both.

**`tools/build-race-lists.mjs`**

1. `run(etappe, car, opponents, resolution = 3)`: after `pinRace`, `vfs.iniSet('raser.ini', 'PROGRAM', 'RESOLUTION', String(resolution))`. `FUN_00447db0` reads it through the host's `GetPrivateProfileStringA`. `nullRender` needs nothing new, but the boot needs the 8-bit host (section 12) first.
2. Keep the RES 3 loops. Add, for `resolution` 0 and 1, for each etappe: `run(e, 0, 1, res)` and `run(e, 0, 0, res)`. Cars need no 8-bit runs: `car` sets are WAV only and `pair` is empty, by parse. That is 40 boots instead of 160.
3. Reuse the `intersect` and `toRanges` code to fill `out.soft[res] = { 'rcs.img': {common, etappe}, 'rc.img': {common, etappe} }`. All these runs drive car 0, so its WAV would land in `common`: subtract `out.files[file].car[0]` first. `MUSIC`, `isMusic`, `late` stay.
4. Check after writing: the result must contain `init.pcx`, palette, `scrl_*`, `e0N_w_*.pcx`, and the tile list of section 3, no `.tga`. Section 10 is the expected answer per etappe.

Before the host boots in 8-bit, the same JSON can be built by rule from the RES 3 lists: drop `.tga`, `e02_pl16.pcx`, hi fonts; add the section 10 members; `rc.img` ranges from section 10. **I** that this equals a real recording; only the `.d3d` part is unproven.

**`source/host/game-files.js`**, `prepareRace` only:

```js
const res = parseInt(this.vfs.parsedIni('raser.ini').get('PROGRAM', 'RESOLUTION'), 10);
const soft = res === 0 || res === 1 ? this.lists.soft?.[res] : null;
for (const [file, sets] of Object.entries(this.lists.files)) {
  const main = soft ? soft[file] : sets;
  add(file, main.common);
  add(file, main.etappe[etappe]);
  add(file, sets.car[car]);                 // WAV, same in every mode
  add(file, sets.pair[`${etappe}/${car}`]);
}
```

`raser.ini` is the right source: `race-runner.js` calls `prepareRace` after the menu wrote the file (`group-options.js:188`, `menu/data.js:1180`), and `raceMusic()` reads it the same way. `loadBase`, `SparseFile`, `fetchLate`, `files.json` need no change: every 8-bit member is in `rcs.img` or `rc.img`, no loose PCX exists, `rc.ind` and `rcs.ind` are already eager. **C**

`source/host/race-setup.js` `pinRace` may take a `resolution` for the `?race=1` route and headless checks; optional.

`tools/prepare-assets.py` needs no change for the race. `assets/loading/e0N.png` come from `e0N_w_hi.tga`: for RES 0 a `w_lo` set would be new art, and optional, since the port's loading page already replaces the game's wait draw.

## 12. Host consequences, texture side only

All **C** from `directx.js` and `d3d-renderer.js` as they stand, unless marked.

| Where | Today | Needed |
|---|---|---|
| `SetDisplayMode` | keeps w, h | Keep bpp. Primary, back, buffer get a palettized format when 8 |
| `createSurface` default format | `RGB565` | The primary's format when `DDSD_PIXELFORMAT` is absent (`FUN_004c4a80`, primary) |
| `PIXELFORMAT` | no 8-bit | `{flags: 0x20, bits: 8, r: 0, g: 0, b: 0, a: 0}`; flags `0x20` is what `FUN_004c8540`, `FUN_004c8690`, `FUN_004c1e60` test. `GetPixelFormat` and `Lock` then report it |
| `EnumTextureFormats` | 565, 4444 | On the Ramp device: this 8-bit format; else fatal in `FUN_004c2a50` |
| `CreatePalette` | returns `S_OK`, writes nothing | Must write an object to `pOut`. `FUN_004c9e70` calls `+0x18 SetEntries(0, start, count, entries)` through `0x7409ec`, `FUN_004c9f30` `+0x10 GetEntries`. With 0 there it reads a vtable at address 0 in the very first palette call; possibly tied to the page hang (**I**) |
| `SetPalette` | no-op | May stay a no-op: there is one palette object |
| `softBlit`, `softFill` | u16 only | Byte version by `format.bits`. Stretch with `floor(y*sh/dh)`, `floor(x*sw/dw)` (**I**, section 3). Three 2048² blits at start |
| `GetCaps` | `dwFlags` nonzero in both | Recommended for Ramp: `HW.dwFlags = 0`, `HEL.dwFlags` nonzero: section 6. Otherwise `Load` fires 30 times |
| `uploadPixels` | u16 to RGBA, key 0 by default | 8-bit branch: index → palette R,G,B; `index == colorKey` → alpha 0. Read the key from the surface: `0xFE`. Ignore peFlags |
| `arrayFor(2048,2048)` | `layers = 8`, a 134 MB array | One layer for this size |
| `texInfo`, `loadTexture` | `textureId` set only by `Load` | No HAL has no `Load`: upload on bind or draw when `surface.generation` changed. The page changes during loading (section 3) |
| Sampling | `uNearest` from state 17, linear if unset | Force nearest: with shipped `FILTER=2`, `FUN_0044bbf0` returns before `FUN_004bc200` in 8-bit, so the state stays unset. Linear would mix neighbouring tiles. **I** that Ramp copy is point-sampled |
| Palette change | none | The flitser's `SetEntries` must reach the picture: section 7. The palette is otherwise constant, so RGBA once plus an override for the flash would do (**I**, a design choice) |
| UV | | Nothing. Meshes are remapped in wasm memory before their DIP, track before upload. `staticVerts` copies at first draw, by then remapped (**I**, read, not run) |

## 13. Unresolved

| Item | Why open |
|---|---|
| Exact pixel rule of the DirectDraw stretch into a tile | Driver or HEL, not in the binary |
| Max texture size of a real Ramp device against the 2048² page | Not in the binary. `FUN_00498490`'s check does not run in 8-bit |
| Whether `police01.d3d`, `dummy.d3d` really draw with two textures; late damage clones | Needs a run or a path parse |
| Colour of handle 0 draws on a Ramp device (skid, smoke, flag, `bwlk`), and of the sparks | Driver behaviour; ramp allocation with entries 0..254 read-only |
| The `.d3d` set under a real 8-bit boot | Code shows no gate, a recording will settle it |
| Why `RESOLUTION=1` hung the page | Not traced here; `CreatePalette` above is a candidate only |
