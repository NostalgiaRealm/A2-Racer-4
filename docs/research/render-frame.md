# Render frame: draw order, visibility, vertex lifetime (`spel.dat`)

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. The text below is as it was written.
>
> The 8-bit path (`3D kaart` off, `RESOLUTION` 0 and 1) was run on an emulated Windows 98 machine and ported after this note was written: [`render-8bit.md`](render-8bit.md) holds where it differs, and the short list of software path differences below is complete only in [`8bit-drawing.md`](8bit-drawing.md) section 1.

Static evidence only: Ghidra pseudocode, `disassembly.asm`, raw byte scans of `original/install/spel.dat`, parsed track files. Nothing was run. COM method names and render state numbers: `win32-surface.md`. Projection, matrices, vertex records, fog: `render-device.md`. Textures: `render-textures.md`. HUD: `hud-overlay.md`.

Everything below is the hardware path, `DAT_006fb8d0 != 0` (`FUN_0044bd10`, `[PROGRAM] RESOLUTION` ships 3, `render-device.md`). The software path is only noted where it differs.

Shipped `game.ini` values used here: `visiblechunks=25`, `alpha_blending=1`, `clouds=1`, `finish_flag=1`, `skidmarks=1`, `particles=1`, `overlay_detail=3`, `disable_overlay=0`, `FOG=0`. Every "blend on" below is gated by `alpha_blending` (`DAT_006fb940`, forced to 0 by `FUN_0044baa0` without hardware support) and does not happen when it is 0.

## Confirmed

### 1. Frame order, `render_game` `FUN_0044da30`

Caller: `handle_game` `FUN_0044cb80`. Before it in the same tick: cameras and view matrix `FUN_00438670` (`SetTransform(VIEW)` at `0x438b58`), particle tick `FUN_0045dc00`, `FUN_0044e830`, skid update `FUN_00444de0`. After it: `FUN_004aa0c0`, `FUN_00464cf0`, `FUN_00464cb0`, then `thunk_FUN_0043f8a0`, then flip `FUN_0044df10`.

All live geometry is `DrawPrimitive` (DP) or `DrawIndexedPrimitive` (DIP) with vertex type 2 (`D3DLVERTEX`, 32 bytes), never with `D3DDP_DONOTCLIP`. Prim 4 = tri list, 5 = strip, 6 = fan. Flags 8 = `DONOTUPDATEEXTENTS`, 1 = `WAIT`.

| # | Function | Draws | States set here | Call | Vertex source |
|---|---|---|---|---|---|
| 0 | `+0x58` on `DAT_00740894` | nothing | wait for VBL if `[OPTIONS] WAITVBL` (`DAT_006fb8e4`) | | |
| 1 | `FUN_004c0840(0)` | Z clear only; colour target is not cleared | `Viewport.Clear` | | |
| 2 | `BeginScene` | | | | |
| 3 | `FUN_004aec50` -> `FUN_004aecd0` (1 or 2 times) | Track: road, land, extra, rail | world = identity `0x73b538`, set once per `FUN_004aecd0`. Texture per pass (section 2). No blend, Z or zbias change | DIP 4, flags 8, 8, 8, 1 | Static after load, whole-track arrays |
| 4 | `FUN_0043d4f0` -> `FUN_004b5b10` -> `FUN_004bd070` -> `FUN_004be340` | Sky box (section 3). Gate `DAT_006c40c8` | world rebuilt each frame; `ALPHABLENDENABLE` 0 (`+0xa5` = 0); mesh texture; Z test and write on | DIP 4, flag 8 | Static mesh |
| 5 | `FUN_004a99a0` -> `FUN_004a9a20` pass 1 -> `DAT_007152fc` = `FUN_00443710` | Car shadows (section 5) | `FUN_00443770`: blend on, `SRCALPHA/INVSRCALPHA`, `ZBIAS` 1, then both off. `FUN_00443ef0`: `+0xa5` = 1, same blend, `ZBIAS` 1 around the draw | `FUN_00443770`: DP 6, flag 1. `FUN_00443ef0`: DIP 4, flag 8 | Rebuilt per car, per frame |
| 6 | `FUN_004a9a20` pass 2 -> `FUN_004a8cb0` | Track objects, car bodies, wheels and other sub-objects with `+0xa5 == 0` | per draw: world, `ALPHABLENDENABLE` 0, texture | DIP 4, flag 8 | Static mesh, except the writers in section 7 |
| 7 | `FUN_004a74f0(&DAT_00715b28)` | Alpha queue: instances with `+0xa5 != 0`, for example car lights and reflection. FIFO, no sort, at most 200 entries (`FUN_004a74a0`, clamps at 199) | per item: `ZWRITEENABLE` 0, or 1 for mode 3; `SRCBLEND`, `DESTBLEND` from table `0x5afa50`; `ALPHABLENDENABLE` 1. At the end: `ZWRITEENABLE` 1 | DIP 4, flag 8 | As #6 |
| 8 | `FUN_0045dce0` | Particles, list `DAT_00709980`, each emitter through vtable `+4` via `FUN_0045ec10` (section 6) | blend on, `SRCALPHA/INVSRCALPHA` (`0x5afa58/5c`), off at the end | DIP 4, flag 8 per particle; spark DP 5, 4 verts, flag 0 | Static mesh; spark on stack |
| 9 | `FUN_0040aaf0`, `FUN_0040a4f0`, `FUN_0040a3d0`, `FUN_0040a260`, `FUN_0040b370` | AI debug lines. Gates `DAT_006fb97d` with `DAT_006fb950`, and `DAT_006fb97c` | debug only | DP | Not needed |
| 10 | `FUN_004882f0(&DAT_007126e8)` | HUD: `FUN_00488ef0`, then `FUN_00484fc0`. Gate `overlay_detail > 0` and `DAT_00712784 != 2`. See `hud-overlay.md` | own VIEW and PROJECTION, blend on, then restored | one DIP per element and glyph | Mesh; vertex colours rewritten per frame |
| 11 | `FUN_00445180` | Skid marks. Gate `skidmarks` | Texture `S_SFX.PCX`; blend on, `SRCBLEND` 6 `INVSRCALPHA`, `DESTBLEND` 5 `SRCALPHA` (see patch notes, alpha 0 marks stay visible); world = identity; blend off | DP 5, flag 1, 2 strips per slot | Global `0x6ce144`, rewritten per frame |
| 12 | `FUN_00446fe0` | `gfx_wolk` smoke clouds, not sky. Gate `clouds` | Texture `S_SFX.PCX`; blend on, `SRCALPHA/ONE` (additive); world per slot; blend off | DP 6, 6 verts, flag 1, per slot | Global slots `0x6f5090`, rewritten and sorted per frame |
| 13 | `FUN_00440160` | Finish flag. Gate `finish_flag` and `DAT_006cbef0` | Texture `S_SFX.PCX`; blend on, `SRCALPHA/INVSRCALPHA`; filter off via `FUN_004bc200` when `DAT_006fb900 == 2`; world = camera matrix (`FUN_0043ff60`); blend off; filter on; `ZENABLE` 1 | DP 5, 34 verts, flag 1, 10 strips | Global `0x6c9468`, Z and colour rewritten per frame |
| 14 | `FUN_0043de00` | `gfx_bwlk` effect. Gate `clouds` | Texture `L1RACER3.PCX` (`FUN_0043dd40`); blend on, `SRCALPHA/INVSRCALPHA`; world per slot; blend off | DP 6, 6 verts, flag 1, per slot | Global slots `0x6c4208`, rewritten and sorted per frame |
| 15 | `EndScene` | | | | |
| 16 | `FUN_0040b380`; tweak text | GDI debug text on the back buffer. Gates `DAT_006fb97c`, `DAT_006fb950`, `DAT_006fb982` | | `FUN_004c5930` | |
| 17 | `thunk_FUN_0043f8a0` (`0x4409c0`) | Nothing: `draw_2d_display`, live but empty (`hud-overlay.md`). Called from `FUN_0044cb80` outside the scene if `DAT_006fb920 == 0` | | | |

Order facts that matter:

- The track is drawn before the sky. The sky fills what the track left, through Z.
- The HUD (#10) is drawn before skid marks, smoke, flag and `bwlk`. It stays on top by depth, not by order (`hud-overlay.md`).
- `FUN_00445180` is the only live draw with `INVSRCALPHA, SRCALPHA`.
- `FUN_00446fe0` and `FUN_0043de00` update effect vertices inside the scene (`simulation-core.md`).

Software path differences (`DAT_006fb8d0 == 0`): `FUN_004456a0` blits the `[MAPS]` sky with `FUN_004455e0` (`Surface.Blt`, flag `0x1000000`) before the scene, set up by `FUN_004454c0`. `FUN_0043d4f0` draws nothing. Objects go through `FUN_004a9c20` instead of `FUN_004a9a20` (`DAT_007152ec`). Texture index 0 is forced before road and objects. `TEXTUREMAPBLEND` is 7 instead of 2 (`FUN_0044bbf0`).

### Code that is present but does not draw

| Code | Evidence |
|---|---|
| `gfx_sprk`: spawn `0x445ec0` (Ghidra `FUN_00445eb2`), draw `0x4460d0` (Ghidra `FUN_004460c1`, NOP pad before the real entry) | Raw scan of `spel.dat`: no absolute pointer and no `E8`/`E9` target for either address, nor for the Ghidra starts. Only init `FUN_004460a0` runs (from `FUN_0044c200`). The DP at `0x446220` listed in `win32-surface.md` never executes. Visible sparks are `par_spark.cpp`, section 6 |
| Rain `FUN_00462cf0` (DP 2 line list, Z off, 8000 verts on stack) | Its only reference is a store to emitter `+0x114` (`0x462846`). The only reader of that field `0x709aec` is `FUN_004625e0` (`0x462619`), and `FUN_004625e0` has no reference at all. So `part_rain` has no visible effect |
| Radar draw `0x4426a0` | No reference, shipped `radar=0`. See `hud-overlay.md` |
| `FUN_004bdff0` mesh UV restore | Gate `DAT_0073b610` has one code reference, the read at `0x4bd3de`, and sits in zero-initialised data, so it stays 0 |
| `FUN_004518e0` reflection debug print | No caller |
| `D3DVERTEX` branch of `FUN_004be340` | No writer of mesh type 1 (`render-device.md`) |
| `object_lights` `DAT_006fb930` | One code reference, the write at `0x449c0e`. It gates nothing |

### 2. Track, `FUN_004aec50` and `FUN_004aecd0`

`&DAT_00715250` is the track object. `FUN_004aec50(this, start, count)` calls `FUN_004af520` to get one or two chunk ranges, then one `FUN_004aecd0(this, first, last)` per range. Each of those issues up to 4 DIPs:

| Pass | `.rmp` list | Max quads per chunk | Texture field, `[MAPS]` source | Verts, indices, vert count | Chunk first/last index fields | Flag |
|---|---|---|---|---|---|---|
| 1 | road | 16 | `+0x4c`, `0x6fa59e` | `+0x6c`, `+0x70`, `+0x74` | `+0x10`, `+0x14` | 8 |
| 2 | land | 24 | `+0x50`, `0x6fa5ac` | `+0x7c`, `+0x80`, `+0x84` | `+0x18`, `+0x1c` | 8 |
| 3 | extra | 12 | `+0x54`, `0x6fa5c8` | `+0x5c`, `+0x60`, `+0x64` | `+0x20`, `+0x24` | 8 |
| 4 | rail | 12 | `+0x58`, `0x6fa5ba` | `+0x8c`, `+0x90`, `+0x94` | `+0x28`, `+0x2c` | 1 |

- Call form: `DIP(4, 2, verts, totalVertsOfPass, indices + 2 * firstIndex, indexCount, flag)`, with `firstIndex = chunk[first].start` and `indexCount = chunk[last].end - chunk[first].start`. A pass with count <= 0 is skipped. Ghidra shows the first start as `unaff_EBX`; the asm takes it from `[EDI+ECX+0x10]` (`0x4aed05`).
- Indices are `u16` (`FUN_004ae1f0`). The `nverts` argument is the whole pass for the whole track, on every call.
- The texture goes through the redundancy filter `DAT_0073b4ec`, plus `SetMaterial` when the material is current (`FUN_00440430`). When `+0x9c` (`DAT_007152ec`, hardware flag) is 0, no texture is set and UVs are remapped to a page at load (`FUN_004ae2d0`).
- Stats for the debug text: `+0xa0` triangles (`0x7152f0`), `+0xa4` indices (`0x7152f4`). Reset each frame in `FUN_004aec50`.

Record format (`FUN_004aba30`, `FUN_004b31a0`): `.rmp` is `i32 -1`, `i32 total`, `i32 chunks`, then per chunk 4 lists of `i32 count` plus 120-byte planes: 4 vertices of `x, y, z, u, v, RGB_` and 6 `i32` indices. The colour becomes `0x00RRGGBB`, so **alpha is 0 on every track vertex by construction**. `+0x0c` and specular `+0x14` are never written by this reader.

Per track, parsed from `original/install/etappeN.rmp`, bytes consumed equal file size on all 9:

| Track | Chunks | Road quads | Land | Extra | Rail | Total tris | Total verts | Tris in 26 chunks avg / max |
|---|---|---|---|---|---|---|---|---|
| 0 | 363 | 2352 | 3597 | 416 | 976 | 14682 | 29364 | 1051 / 1222 |
| 1 | 507 | 3987 | 4886 | 780 | 1456 | 22218 | 44436 | 1139 / 1396 |
| 2 | 400 | 1872 | 4914 | 36 | 1755 | 17154 | 34308 | 1115 / 1404 |
| 3 | 645 | 4241 | 7898 | 2442 | 1216 | 31594 | 63188 | 1273 / 1536 |
| 4 | 634 | 6576 | 5490 | 1269 | 2201 | 31072 | 62144 | 1274 / 1486 |
| 5 | 326 | 2376 | 2758 | 841 | 635 | 13220 | 26440 | 1054 / 1384 |
| 6 | 334 | 3587 | 1551 | 1641 | 553 | 14664 | 29328 | 1141 / 1376 |
| 7 | 477 | 2666 | 6476 | 565 | 736 | 20886 | 41772 | 1138 / 1458 |
| 8 | 607 | 2752 | 11177 | 316 | 4069 | 36628 | 73256 | 1568 / 1760 |

`FUN_004ac310` appends 4 new vertices and 6 indices per quad, so quads share no vertices. The largest single pass is track 8 land: 44708 verts, within `u16`.

### 3. Sky (hardware)

- Init `FUN_0043d3c0` (from `FUN_0044c200`), hardware only: `FUN_0043d230(mesh, tex)` creates one instance `DAT_006c40c0` from model `SKY`, frame 0, `+0xa1 = 2`, `+0x90 = 1`, scale `DAT_006c40a0..a8` = (10, 4, 10).
- The model comes from each `eNN_anim.ini`, for example `[sky] 0=skybox00.d3d,sky00.pcx` in `e00_anim.ini`.
- `FUN_0043d4f0` per frame: matrix = identity `0x73b538` with scale (`FUN_004b4360`) and translation = camera position (camera `+8`), then `FUN_004b5b10`. It has no rotation of its own and turns on screen only through the view matrix.
- `skybox00`-`09`: 14 to 49 verts, 12 to 40 tris. Unscaled x/z up to about 1071, y from -451 to 1260. After scale that is up to about +-10700 per horizontal axis. Far is 12500.

### 4. Objects, `FUN_004a99a0`

- Object table `DAT_00715e50`, stride `0xf0`, used flags `DAT_00715e60`, count `DAT_00715e54`, sized to `0x9c4` = 2500 (`FUN_004a6a10` -> `FUN_004a7700` -> `FUN_004aa680`).
- `FUN_004a9a20` scans the table twice per frame, up to the highest used slot. Filter: `+0x5c != 0`, used, `+0x34` (chunk) inside a window range, `+0x54 != 0`. Pass 1 also needs `+0x40 != -1` (shadow instance). There is no other test (section 8).
- `FUN_004a8cb0(obj)` for one object:
  1. Mesh override when `+0xe8` and `+0xec` are set (per-object clone used for damage): writes instance `+0x99`, restores it after.
  2. `FUN_004b2e40(&DAT_0073b020, tex)`: cached-pipeline `Texture.Load` (`render-textures.md` section 8).
  3. If `(+0x1c & 2)`: `FUN_004a8200(obj)` (section 7).
  4. Instance `+0xa5 == 0` and `+0x90 != 0`: `FUN_004b5b10` now. `+0xa5 != 0`: `FUN_004a74a0` queues it.
  5. Each sub-object in `+0x7c[]`, count `+0xac`: `FUN_004b4110(out, parent, child)` is written into child `+0x10`, then draw or queue, then stats `FUN_004a7670`.
- `FUN_004b5b10(instance)`: rebuild matrix if `+0xa1 == 1` (`FUN_004b5760`), resolve mesh and texture, `SetTransform(WORLD)`, `ALPHABLENDENABLE` from `+0xa5` through cache `DAT_0073b529`, then `FUN_004bd070(mesh, tex)`.
- `FUN_004bd070`: if texture `+0x44 == 0`, set texture through `DAT_0073b4ec`; else software-page UV remap `FUN_004bdcd0`, cached in mesh `+0xa8`. `+0x44` is only set by the software creator `FUN_004b94e0`. Then `FUN_004be340` issues `DIP(4, 2, +0x80, +0x84, +0x90, +0x94, 8)`. It changes `FILLMODE` only if mesh `+8` is 1 or 2.
- Blend table `0x5afa50` by `+0xa5`: 0 `ONE, ZERO`; 1 `SRCALPHA, INVSRCALPHA`; 2 `ONE, INVSRCCOLOR`; 3 `SRCALPHA, INVSRCALPHA`.
- Instance table `DAT_0073b0d0`, stride `0xa9`: `+0` type (1 fixed, 2 model/frame), `+4` model, `+8` frame, `+0x10` world matrix, `+0x50` position, `+0x80` scale, `+0x90` visible, `+0x95` texture override, `+0x99` mesh override, `+0xa1` matrix mode, `+0xa5` alpha mode.
- Mesh table `DAT_0073b5c8`, stride `0xac`: `+0` type, `+8` fill, `+0x80` vertices, `+0x84` vert count, `+0x90` indices, `+0x94` index count, `+0xa8` cached page texture.

### 5. Cars, wheels, shadows

Cars are entries in the same object table, so they follow `FUN_004a9a20`. `FUN_004353e0` builds the sub-objects:

| Sub-object | Function | Mesh argument | Alpha mode |
|---|---|---|---|
| Body | the object's own instance | | 0 |
| 0-3 wheels | `FUN_00435760` -> `FUN_004aa390` | car model, frame 1 | 0 |
| 4-7 lights (`LIGHT_POSITIONS`) | `FUN_00436170` | car model, frames 3, 4 | 2 if `alpha_blending` |
| 8 reflection | `FUN_004370f0` -> `FUN_004aa4a0` | car model frame 2 mesh, texture of `CAR_REFLECT` (`[car_reflect] 0=s_licht.d3d,skyref02.pcx`) | 1 if `alpha_blending` |

So one car is at most 10 DIPs with 10 world transforms, 5 of them in the alpha queue. Instance `+0x90` is toggled by `FUN_00426280`, `FUN_004304e0`, `FUN_00430ea0`, `FUN_00431320` and `FUN_00436510`, so fewer may draw; which sub-objects each one toggles was not traced. Wheel and light matrices are updated in the car tick (`FUN_00435c60`, `FUN_00435ab0`, `FUN_00436850`).

Shadows, `FUN_00443710(index)` from object pass 1:

| Case | Function | Behaviour |
|---|---|---|
| Player car `DAT_006fba58`, or its linked object `+0x44` when `FUN_004316d0 != -1` | `FUN_00443770` | Projected shadow. 4 corners placed on the track (`FUN_004af230`, `FUN_004ad3d0`, `FUN_004ad640`). Then 4 x `FUN_00443100`: clips land, road and rail planes of those chunks (read through `FUN_004ad7e0`) against a beam volume. Each clipped polygon: `FUN_0047b110`, heap vertices, specular `0xff000000`, texture `S_SHADOW.PCX`, DP 6, flag 1. World = identity |
| Any other object with a shadow | `FUN_00443ef0` | Blob. Only if chunk distance to the player < 6 (`FUN_004a7200`). One shared instance `DAT_006fb8b4` (model `S_SHADOW`, `FUN_0042a740`) with a 4-vertex mesh, fatal otherwise. Writes position and grey colour of those 4 vertices for each object, world = identity, draws via `FUN_004b5b10` with `ZBIAS` 1 |

Writes to `obj+0x40` found by text search: `FUN_0042a7f0` (`DAT_006fb8b4`) and a clear to -1 (decompiled.c:47533).

### 6. Particles and effects

| Effect | Slots and limits | Update and rewrite | Sort |
|---|---|---|---|
| Particles `FUN_0045dce0` | Linked emitters `DAT_00709980`. Types `0x45d170`: spark, leaf, bird, mail, trash, paper, car part, dirt, dirt piece, water, water wave (`gameplay-systems.md`). Creation gated by `particles` | Generic emitter draw `FUN_0045ec30`: per particle world `SetTransform`, then virtual mesh draw (`FUN_00459590` and 9 others) to `FUN_004bd070` | none |
| Spark `par_spark.cpp` | Emitter draw `FUN_0045fd50` (vtable `0x576908`, `+4`): texture from emitter `+0x9c` | Per spark: world = emitter `+0x10`, `FUN_00460070` builds 4 verts on stack, DP 5, flag 0 | none |
| Skid `FUN_00445180` | 20 slots, stride `0x1910`, count `0x6ce140`, strips `0x6ce144` and `0x6cedc4`, 100 verts each by layout | `FUN_004450e0` per frame: age +1, then `FUN_00444f80` or `FUN_00444ec0`. New marks `FUN_00444b40` from the tick | none |
| Smoke `FUN_00446fe0` | 70 slots, stride 300 at `0x6f5090`: `+0` world, `+0x40` 6 verts, `+0x118` limit, `+0x11c` age, `+0x128` active | `FUN_004467d0` per active slot, `FUN_004467f0` per slot after the draw | `qsort` `FUN_00446f00`: far to near by XZ distance to camera |
| `bwlk` `FUN_0043de00` | 70 slots, stride 300 at `0x6c4208`, same layout; 5 frames (`% 5` in `FUN_0043d7b0`) | `FUN_0043d950`, `FUN_0043d970` | `qsort` `FUN_0043dc90`, same order |
| Flag `FUN_00440160` | 10 strips x 34 verts at `0x6c9468`, built by `FUN_0043fff0`: x = `0.625 j - 5`, y = `0.75 i - 3.75`, z = 5, a 4:3 sheet | `FUN_0043fe20` per frame: Z and colour (alpha `0x64`). XY and UV static. World = camera matrix and position | none |

Smoke and `bwlk` are wiped and skipped when `1/dt < 10` (`FUN_00446fb0`; inline loop in `FUN_0043de00`).

### 7. Vertex lifetime

| Array | Filled by | Runtime writers | When |
|---|---|---|---|
| Road, land, extra, rail vertices `+0x6c`, `+0x7c`, `+0x5c`, `+0x8c`, and index arrays | Alloc `FUN_004adef0`. Append `FUN_004ae2d0`, `FUN_004ae220`, `FUN_004ae370`, `FUN_004ae410`, `FUN_004ae040`, `FUN_004ae0a0`, `FUN_004ae120`, `FUN_004ae180`, only from `FUN_004ac310`, only from load chain `FUN_004aba30` <- `FUN_004ab570` <- `FUN_004ae570` <- `FUN_004ae490` <- `FUN_004a6b10` | **None.** Other users of `DAT_00715f50` only read (`FUN_004ad3d0`, `FUN_004ad710`, `FUN_004ad7e0`). Raw scan finds no absolute reference to these fields. Other users of `&DAT_00715250` only call `FUN_004af230` (chunk search) | Load only, once per race |
| Mesh vertices `+0x80` | `FUN_004be590` / `FUN_004beb10` (load), `FUN_004bca20` / `FUN_004bd840` (clone), `FUN_004bcca0` (HUD) | Next table | |

Runtime writers of mesh vertices, hardware path:

| Writer | Writes | Trigger | Caller chain |
|---|---|---|---|
| `FUN_004a8200` | Colour of **all** vertices, one value: track colour under the object (`FUN_004ad3d0`, `FUN_004ad710`), smoothed in `obj+0x4c` | Every draw of an object with `+0x1c & 2` | `FUN_004a8cb0`, inside the scene. Flag set by `FUN_00407300`, `FUN_0040d6f0`, `FUN_0041ed30`, `FUN_00425490`, `FUN_004275e0`, `FUN_0042de60` |
| `FUN_004a8100` | Same colour on sub-objects | Same | `FUN_004a8200`, which also walks chain `+0x44` |
| `FUN_00443ef0` | Position and colour of the 4 shadow vertices | Per object per frame | Object pass 1, inside the scene |
| `FUN_00437370` | U, V of car frame 2 mesh: reflection vector, `0.5 + 0.5 * (r.x, r.z)` | Per car tick | `FUN_00435410` (`FUN_0042fd40`), `FUN_00435440` (`FUN_0041eeb0`), `FUN_00435470` (`FUN_00407300`, `FUN_00419600`, `FUN_0044ea60`, `FUN_00464ff0`) |
| `FUN_00431140` | Alpha of frame 2 mesh | When the value changes | `FUN_00430ea0` <- `FUN_0042fd40` |
| `FUN_004a8660` | Position of changed vertices in clone `+0xec`, change lists at `DAT_00719c28` | Damage event | `FUN_0044ceb0`, `FUN_0044f473` |
| `FUN_004a8030` | Colour of all vertices | Script setters `FUN_00473db0`, `FUN_00473de0` | Bonus scripts |
| `FUN_0047d1f0` | HUD vertex colours | Per frame | `hud-overlay.md` |
| `FUN_004370f0` | UV normalise | Car creation | `FUN_004353e0` |

Not writers: fog is render and light state only (`FUN_00457040`; shipped `FOG=0`). `FUN_00442920` copies UVs out. `FUN_004bdcd0` is software only. `FUN_00429710` and `FUN_004a9130` pass the vertex pointer to physics `FUN_004a4330`.

Scan method: all functions whose decompiled text touches `DAT_0073b5c8` or `FUN_004b6080` together with offset `0x78` or `0x80`. A writer reaching the array in another way would be missed.

Effect arrays are not cached anywhere: skid, smoke, `bwlk` and flag live in globals and are altered per frame; player shadow uses `operator_new` per polygon; spark uses the stack.

### 8. Visibility

**Only a window of chunk indices.** No frustum test, distance test or screen-size test exists in `FUN_004aec50`, `FUN_004aecd0`, `FUN_004a9a20`, `FUN_004a8cb0`, `FUN_004b5b10`, `FUN_004bd070` or `FUN_004be340`.

Window start, `FUN_0044df70(2)`, checked in asm `0x44e04b`-`0x44e0a4`. `c` = camera chunk `DAT_006c356c` (`FUN_00438670`, half-plane search `FUN_004af230`). `N` = `DAT_006fb8b0`. `d` = dot of normalised chunk forward `chunk+0x58` and camera look (`cam+0x54` minus `cam+8`), in 3D:

| Condition | Meaning | Start | Window at N = 25 |
|---|---|---|---|
| `d > 0.5736` (`0x5767d0`) | within 55 degrees of forward | `c - 2` | `c-2 .. c+23` |
| `-0.5736 <= d <= 0.5736` | sideways | `c - N/2` | `c-12 .. c+13` |
| `d < -0.5736` (`0x5767cc`) | within 55 degrees of backward | `c - N + 2` | `c-23 .. c+2` |

- A negative start wraps to `start - 1 + DAT_00715258`, one below plain modulo. `DAT_00715258` is the chunk sequence count.
- `FUN_004af520(start, N, ...)`: inclusive range `start .. start + N`, so **N + 1 chunks**. Past the end it splits into `start .. C-1` and `0 .. rest`, `C = DAT_00715f04`. Start out of range is fatal.
- Track, objects and shadows use this same window. Object update uses `FUN_004a9870(chunk, 2N)`.
- Chunk length: 128 units (average 128.0-128.4 from `.pmp` positions on tracks 0-7; track 8 has one 70880 jump between its ends). 26 chunks is about 3330 units. Ahead of the camera: 23 x 128 = 2944 units. Far plane is 12500.

Draw distance `DAT_006fb8b0`:

- `FUN_0044a630`: `[OPTIONS] VISIBLECHUNKS`, at least 10. Shipped 25.
- `FUN_0044cb30` each frame: if `DAT_006fb8a0 == 0`, `1/dt < 10`, and N > 25 (hardware) or 15 (software), N drops by 1, with no way back up. At shipped 25 in hardware it never fires.
- N is also read by game logic: `FUN_00409070`, `FUN_00415640`, `FUN_00415d20`, `FUN_004275e0`, `FUN_0041ca20`, and `FUN_004a9870` above.

`.pmp`: `+0xf4`/`+0x134` carries the error text "chunk waypoint left overflow", `+0xf8`/`+0x164` has the same limit of 12. `+0xf0`/`+0x104` and `+0xfc`, `+0x100` are used elsewhere (decompiled.c:21016, 185601). None of the render functions above read these. So "visibility" in `game-data.md` does not hold for rendering.

LOD: **there is none for models.**

- `spel.dat` has no hi/lo model name logic. `wait_hi`, `wait_lo` and `e00_w_hi` are load-screen pictures.
- `.d3d` files such as `ltr_h.d3d`, `ltr_l.d3d` exist, but no shipped INI names them.
- Instance `+0x99` is written only by `FUN_004a8cb0` (damage clone) and init (decompiled.c:190563).
- Of the callers of chunk-distance helper `FUN_004a7200`, only the shadow gate in section 5 is in the draw path.
- Size selection exists for textures only (`CTextureDetailManager`, `render-textures.md`).

4:3 in game code:

- Viewport clip and projection: `render-device.md`. Projection is `FUN_004b39d0(m, 0.5/k, 12500, k*pi)`, `k = _DAT_006fb974 = 0.375`, so fov 67.5 degrees, near 1.3333.
- `_DAT_006fb974` is read only to build the projection (`FUN_0044c200`, `FUN_0044cf90`, `FUN_004517f0`). The view matrix `0x73b434` is read only for HUD save and restore. So nothing derives a frustum from them.
- Constants 4/3 (`0x576e08`) and 0.75 (`0x576e0c`) are referenced from HUD code only (`0x47fe63`, `0x4805a5`, `0x484163`). The other 0.75 (`0x57673c`) is the flag grid step and `0x452742`-`0x4527b1`.
- The only view-angle constant in visibility is the 55 degree test above.

### 9. Per-frame draw counts

| Source | Calls per frame | Basis |
|---|---|---|
| Track | 4 DIP, 8 when the window wraps | Section 2 |
| Sky | 1 DIP | Section 3 |
| Car | up to 10 DIP, plus 1 blob DIP or the player shadow DPs | Section 5 |
| HUD | about 25 elements + 70 glyphs, each DIP | `hud-overlay.md` |
| Skid | at most 40 DP, 4000 verts | 20 slots x 2 x 100 |
| Smoke | at most 70 DP | Slots |
| `bwlk` | at most 70 DP | Slots |
| Flag | 10 DP when on, 340 verts | |

Each object DIP and each effect slot also costs one `SetTransform(WORLD)`.

## Inferred

Objects in the window. Nearest `.pmp` chunk in XZ stands in for the game's `+0x34` assignment, 26-chunk window:

| Track | `.omp` objects | In window avg | Max |
|---|---|---|---|
| 0 | 1037 | 74 | 134 |
| 1 | 616 | 31 | 112 |
| 2 | 628 | 40 | 109 |
| 3 | 991 | 39 | 84 |
| 4 | 1015 | 41 | 78 |
| 5 | 328 | 26 | 51 |
| 6 | 584 | 45 | 143 |
| 7 | 371 | 20 | 52 |
| 8 | 770 | 32 | 122 |

So a normal frame is on the order of 200 to 400 draw calls, about 100 of them HUD.

**What this means for a WebGL host:**

- **Track:** build 4 static VBO/IBO pairs on the first DIP of each pass, or when `FUN_004ac310` has finished. Per frame, draw index ranges only. Never convert `nverts` per call: up to 44708 verts per call on track 8. Vertex alpha is 0 here, so a host alpha test must not use vertex alpha (patch notes, alpha 0 section).
- **Meshes:** positions and indices can stay in a static GPU buffer per mesh id, except `FUN_004a8660` clones and the shadow mesh.
- **Colour and UV:** cannot be assumed static. If cars of one type share a mesh, `FUN_004a8200` overwrites the same memory for each car right before its draw, so colour must be captured at DIP time. That writer sets one value on all vertices, so a uniform tint read from one vertex is a cheap path for those meshes.
- **Dirty tracking:** the writer list in section 7 is short, so the recompiled functions can set a mesh dirty flag instead of hashing. `FUN_00437370`, `FUN_004a8200`, `FUN_00443ef0` and `FUN_0047d1f0` will mark their meshes nearly every frame, so stream those.
- **Streamed draws:** skid, smoke, `bwlk`, flag, spark, player shadow and HUD. Slots are moved by `qsort` every frame, so an address cannot serve as a cache key.
- **Batching limits:** keep alpha queue order, effect order, and HUD before late effects. Merging consecutive opaque DIPs with the same texture is safe under Z, apart from equal-depth cases. `ZBIAS` needs `polygonOffset` for both shadow paths.

**Wider screens:**

- The game does not cull by aspect, so a Hor+ viewport draws correctly what is in the window. No object is dropped by a frustum test, and no culling code needs changing.
- The 55 degree threshold looks chosen for 4:3: 55 + 33.75 = 88.75 degrees, so in forward mode the frustum edge stays just short of straight sideways. Half FOV under Hor+ is 41.70 at 16:9, 49.46 at 21:9, 60.70 at 32:9. On those, near the 55 degree limit, the frustum edge looks backward past the 2-chunk margin.
- Rough measure, camera at chunk position looking along chunk forward, forward window, XZ only: percentage of chunks where a chunk centre outside the window but within 2944 units falls inside the horizontal wedge:

| Track | 4:3 | 16:9 | 21:9 | 32:9 |
|---|---|---|---|---|
| 0 | 32.0 | 40.5 | 52.6 | 76.9 |
| 1 | 17.0 | 23.9 | 34.3 | 42.4 |
| 2 | 28.8 | 38.5 | 47.0 | 55.8 |
| 3 | 12.7 | 16.4 | 21.2 | 27.3 |
| 4 | 28.2 | 45.3 | 53.6 | 61.2 |
| 5 | 31.0 | 34.7 | 42.0 | 46.9 |
| 6 | 29.6 | 42.5 | 50.3 | 63.2 |
| 7 | 28.9 | 40.7 | 49.5 | 63.1 |
| 8 | 1.8 | 1.8 | 1.8 | 1.8 |

  This ignores terrain occlusion and road width, so it is an upper indication. The 4:3 column shows the original already has this condition. Wide screens make an existing effect more frequent rather than create a new one.
- Raising `VISIBLECHUNKS` also changes AI and object update ranges, because N is shared. If more visible track is wanted, the safer route is for the host to draw extra index ranges of the static track buffers itself and leave N alone. Objects outside the window would still be missing.
- The sky box surrounds the camera, so aspect should not expose gaps in it. The finish flag stops covering beyond about A = 2.0 (`hud-overlay.md`).
- The colour target is not cleared and the sky is drawn with Z, so a pixel missed by everything keeps the previous frame. A host with `preserveDrawingBuffer=false` behaves differently there.

## Unknown

- Actual per-frame counts in play: nothing was run. The debug counters `0x7152f0`, `0x7152f4`, `DAT_00715e9c`, `DAT_00715ea0` give track and object totals if read from wasm memory.
- Typical active particle counts per emitter type. Emitter sizing was not traced.
- Whether cars of one type share one mesh in all cases. Clones exist through `obj+0xec` only when `DAT_00719c28[mesh]` is set (`FUN_004a7d70`); which cars qualify was not traced.
- Spawn sources and visual meaning of `gfx_bwlk`. Only its slot layout and drawing are confirmed.
- All setters of `obj+0x54` and `obj+0x5c`. Only their use as draw filters is confirmed.
- Whether track specular `+0x14` holds a defined value. `FUN_004b31a0` does not write it; plane table initialisation was not read.
- Writers of mesh `+8` (fill mode).
- `etappe6.omp` has 136 bytes after the declared 584 records (exactly 2 records). The loader's handling was not read.
- Exact visual effect of out-of-window chunks on wide screens. The percentages above are geometry only.
