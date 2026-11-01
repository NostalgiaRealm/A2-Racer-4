> Static reading, written before the path was run. [render-8bit.md](render-8bit.md) has what a run on the real Ramp device settled, and where that differs from this note it holds.

# 8-bit path: drawing differences, frame by frame

Scope: `spel.dat`, `RESOLUTION` 0 (320x200x8) and 1 (640x480x8). Static reading only: nothing here was run, and this path cannot run under Wine.

Status words: **C** Confirmed (read from asm, a decompile checked against asm, or a parse of the shipped files). **I** Inferred (arithmetic on top of C, or DirectX 5 semantics from memory, which the binary cannot prove). **U** Unresolved.

Live or dead below means reachability: BFS over `calls.csv`, `data_refs.csv` and pointers in `.rdata`/`.data`, plus a raw scan of `spel.dat` for absolute pointers and `E8`/`E9` targets. Several listed addresses are Ghidra pads: `0043b0af`, `0043ae4a`, `0043f0d5`, `0043fb7b`, `0043fc03`, `00440b54`, `00440de7`, `00440fa9`, `0044269d`, `00443ee1`, `004460c1` start with NOPs or fall into the real entry a few bytes on.

## 0. State of the globals in this path

| Global | RES 0 | RES 1 | Evidence | |
|---|---|---|---|---|
| `0x6fb8d0` hardware 3D | 0 | 0 | `FUN_0044bd10` | C |
| `0x6fb894` 8-bit | 1 | 1 | same | C |
| `0x6fb890` size class | 0 | 1 | same | C |
| `0x7152ec` = track object `+0x9c` | 0 | 0 | `FUN_004a6b00(0)` from `FUN_0044bd10`; `0x715250 + 0x9c` | C |
| `0x6fb940` alpha_blending | forced 0 | forced 0 | `FUN_0044baa0` `0x44bab7`, whatever `game.ini` says | C |
| `0x59dbb4` focus | 2 | 2 | shipped `FOCUS=1` -> 2, `FUN_004477b0`; `FUN_00447870` overrides to 1 only for RES 3,4,6,7,8,9 | C |
| Render target | buffer screen `0x740890`, system memory | same | `FUN_004bbc50` with focus 2 | C |
| Z buffer | 16 bit, attached to `0x740890`, caps `0x20800` | same | `FUN_004c0610(2,...)` | C |
| Device | Ramp GUID, device `+0x278`=4, `+0x2b9`=1 (no reader of `+0x2b9`) | same | `FUN_004bbd40` `0x4bbd78`, `0x4bbe77` | C |
| Pixel mode `0x7409cc` | 0, raw palette index | 0 | `FUN_004c7ec0(1)` only when `FUN_00447870` returned 1, `FUN_004480f0` | C |

`clouds`, `skidmarks`, `particles`, `finish_flag`, `overlay_detail` keep their `game.ini` values (`FUN_00449b30`). Shipped: 1, 1, 1, 1, 3. `FUN_00446e80` turns `clouds` off only when `0x6fb8d0 != 0` (asm `0x446e8a`-`0x446eac`), so in this path clouds stay on with alpha off. `docs/behavior/render.md` section 18 ("`alpha_blending=0` turns clouds off") holds only for 16-bit modes. C.

The whole 8-bit picture in one list, each row detailed below: no vertex colour on textured draws, no blending anywhere, no fog, no filter on the scene, no sky mesh, no car lights or reflection, black opaque blob shadows only, skid marks and smoke untextured, no finish flag, flash by palette.

## 1. Frame order, side by side

`FUN_0044cb80` -> `FUN_0044da30`. Everything not in the last column is the same in both paths.

| # | RES 3 | RES 0, 1 | Evidence | |
|---|---|---|---|---|
| 0 | WAITVBL if set | same | `0x44da56` | C |
| 1 | nothing | **Sky `Blt` to the focus surface**, outside the scene, before the Z clear | `0x44da6c` -> `FUN_004456a0` | C |
| 2 | `Clear` flags 2 (Z only) | same. Colour target never cleared | `FUN_004c0840(0)` | C |
| 3 | nothing | Material `0x5b1ba8`: `+0x60`=0, `+0x48`=handle of texture 0, `+0x58`=1, SetMaterial. If cache `0x73b4ec` != 0: `0x73b4ec`=0, `SetRenderState(1, tex[0].handle)` | `0x44da83`-`0x44dad3` | C |
| 4 | BeginScene | same | `0x44db07` | C |
| 5 | Track, 4 DIP, texture per pass | Same DIPs, same flags 8,8,8,1. **No texture call**: gates on `+0x9c` at `0x4aeda4`, `0x4aeec3`, `0x4af014`, `0x4af137` | `FUN_004aecd0` | C |
| 6 | Sky mesh | Nothing: `0x6fb8d0`=0 and `0x6c40c8`=0 | `FUN_0043d4f0`, `FUN_0043d3c0` | C |
| 7 | nothing | Same as row 3 again | `0x44db55`-`0x44dba8` | C |
| 8 | `FUN_004a9a20`: shadows, then objects | `FUN_004a9c20`: page-textured objects, then shadows and own-textured objects | `FUN_004a99a0` | C |
| 9 | Alpha queue draws | Queue may hold entries (`FUN_00436510`, `FUN_00436850` push), all with `+0x90`=0: no draw. States 14, 19, 20 still sent per entry, state 14 = 1 at the end | `FUN_004a74f0` | C |
| 10 | Particles, blend on | Same draws, blend off | `FUN_0045dce0` | C |
| 11 | HUD, blend on | Same elements, blend off | `FUN_004882f0`, `FUN_00485ed0` | C |
| 12 | Skid, `S_SFX`, 6,5 blend | `TEXTUREHANDLE` 0, blend off | `FUN_00445180` | C |
| 13 | Smoke, `S_SFX`, 5,2 blend | Handle 0, blend off | `FUN_00446fe0` | C |
| 14 | Flag at the finish | Never: `0x6cbef0` stays 0 | `FUN_0043ac80`, section 6 | C |
| 15 | `bwlk`, `L1RACER3`, 5,6 | Handle 0, blend off | `FUN_0043de00` | C |
| 16 | EndScene | same | `0x44dcc0` | C |
| 17 | `FUN_0043c260`, flash: colour fill of index 15 | Flash: palette, section 6 | `FUN_0043b130` | C |
| 18 | `thunk_FUN_0043f8a0`: nothing with shipped data | same | section 8 | C |
| 19 | `FUN_0044df10`: flip | `FUN_004c8b90(2,1,0,0,W,H,0,0,W,H,0)`: `Blt` buffer screen to back, `WAIT` only, then flip | asm `0x44df33`-`0x44df58` | C |
| 20 | `FUN_0044cb30`, floor 25 | Floor 15 | section 12 | C |

## 2. Sky

Three functions, all game code. The host only sees `Blt` with rectangles.

**Load.** `FUN_004454c0` (`0x44c3b0`, in `FUN_0044c200`, after fonts). Gate: `0x6fb8d0 == 0` and `0x6fb8a4 == 0`. `0x6fb8a4` is `[OPTIONS] BACKGROUND` (`FUN_0044a540`), not in the shipped `game.ini`, so 0 (`FUN_004c3cd0` default). C.

| | RES 0 | RES 1 | |
|---|---|---|---|
| Name source | `[MAPS]` arg 6, `0x6fa5d6 + track*0x94` | arg 7, `0x6fa5e4 + track*0x94` | C |
| File, all tracks | `scrl_lo.pcx` | `scrl_hi.pcx` | C, `raser.ini` |
| Parsed size | 480x200 | 960x320 | C, parse |
| Palette indices used | 14, all equal to the game palette | 15, same | C, parse |
| Index 254 or 255 in the file | none | none | C, parse |
| `srcW` `0x6ed6a0` | 480 | 960 | C |
| Blit width `0x6ed6a8` = W | 320 | 640 | C |
| Blit height `0x6ed6ac` = `H - H/3` | 134 | 320 | asm `0x445550`-`0x445581` |
| Source rows used | 0..133 of 200 | 0..319 of 320 | C |

`FUN_004cb230` makes a `FUN_004c4a80(w, h)` surface, caps `0x800`, primary format, and copies raw indices (pixel mode 0). The file's own palette is not read (only `if 0x7409cc != 0`). C.

**Scroll.** `FUN_004457d0(float t)`, asm `0x4457d0`-`0x445834`:

```
sx = ftol(-(srcW/2) * (t + 1.0))        // truncating; srcW/2 by CDQ, SAR
if (sx < 0)     sx += srcW
if (sx >= srcW) sx -= srcW
FUN_004456e0()
```

`0x6ed69c` (float copy) is written, never read. `sy` `0x6ed698` is always 0. C.

**t from the camera**, last call before the draw: `FUN_00438670`, asm `0x438b7a`-`0x438c2c`, at the end of the function, with no earlier return. Camera = `[0x719b50] + [0x6c3518 + [0x6c3568]*4]*0x178`; position `+8`, look-at `+0x54`.

```
dx = look.x - pos.x;  dz = look.z - pos.z;  len = sqrt(dx*dx + dz*dz)
a   = atan2(dz/len, dx/len)                 // FPATAN, ST1 = dz/len, ST0 = dx/len
idx = ftol((a - pi*0.5) * 4096 / (2*pi)) & 4095   // [0x5b23b8] is 4096.0 at run time, [0x5b23bc] 4095
t   = cos table [0x73b578][idx]             // FUN_004bc4e0, FUN_004c04b0(.., 0x1000)
```

So `t` is about `dz/len`, the z of the look direction: C for the code, I for the simplification. Facing +x and -x gives the same offset. The other call, `0x44ee78` in `FUN_0044ea60` (`t` = cos of the player object's rotation y), comes from the object tick before the camera in `FUN_0044cb80`, so the camera value wins (I: the callback was not traced to `FUN_004a9870`).

**Rectangles.** `FUN_004456e0`, asm `0x4456e0`-`0x4457c4`. RECT = left, top, right, bottom. `r = srcW - sx`.

| Case | Blit | Source | Dest |
|---|---|---|---|
| `sx <= srcW - W` | one (`0x6ed6b0`=0) | `sx, 0, sx+W, blitH` | `0, 0, W, blitH` |
| else | first | `sx, 0, srcW, blitH` | `0, 0, r, blitH` |
| else (`0x6ed6b0`=1) | second | `0, 0, W-r, blitH` | `r, 0, W, blitH` |

**Draw.** `FUN_004456a0` -> `FUN_004455e0(dest, src)`. Asm `0x4455ef`-`0x44561d`: `dst->Blt(destRect, 0x6ed690, srcRect, 0x1000000, NULL)`, `DDBLT_WAIT` only, no key, no stretch. Target: focus 2 = `0x740890`; focus 1 = `0x7408b0`. Fatal on a nonzero result. C.

**It does not clear.** Rows `blitH..H-1` are never touched by the sky. C. Whatever the track and objects leave uncovered there keeps the previous frame's pixels, and on the first race frame the last wait picture (section 9). I for the visual effect.

**Renderer must.** Draw the source indices through the current palette as a quad into colour, depth test off, depth write off, at the point of the `Blt`, before the Z clear and the scene. No filter. Keep the colour buffer between frames, including rows below `blitH`. `source/render/d3d-renderer.js` `blitToScreen() {}` is empty today and must tell this `Blt` (source = the sky surface) apart from the present `Blt` (source = buffer screen), section 9. On a view wider than the mode the game only fills `0..W`: extending the same panorama with wrap at `srcW` is an adaptation to document, not original behaviour. I.

## 3. Road and objects

**Every texture but one lives on one page.** C for all rows.

| Fact | Evidence |
|---|---|
| Texture 0 = `init.pcx`, 2048x2048, parse. The first slot of the table, own handle, `+0x44`=0 | `FUN_004b8910` from `FUN_0044bad0`; string at `0x5a11e0` is `init.pcx` (Ghidra's `init_pcx` label is cosmetic) |
| Page grid 1/6 x 1/6: `FUN_004b88a0(6.0)`, `0x73b200 = 0x73b204 = 1/6`. 36 slots. Row advance works out at 6 (float sum reaches 1.0 at the 7th, computed in float32); past the last row fatal `out of main texture space` | `FUN_0044bad0`, `FUN_004b8b80`, `FUN_004b9fa0` `0x4ba3bf`-`0x4ba419` |
| All anim textures: `FUN_004b82e0(0x712130, 1)` -> `FUN_004b7d30` takes `FUN_004b94e0` | `0x44bb15`, `0x4b8053` |
| 4 track textures: `FUN_004b26f0(name, 0x6fb8d0=0, ...)` -> `FUN_004b94e0` | `0x44c510`.. |
| `.omp` objects: `FUN_004aead0` passes `+0x9c`=0 as `param_12` of `FUN_004536e0`, which calls `FUN_004b2740(.., 0, 1, ..)` -> `FUN_004b94e0`. No cached pipelines | `0x4aebc0`, `FUN_004536e0` |
| `FUN_004b94e0`: `FUN_004b9fa0`, then `+0x44`=1. Slot rect `u0,v0` at `+0x34,+0x38`, `u1,v1` at `+0x3c,+0x40`. **Handle `+0` is never written**: ctor `FUN_004b9640` zeroes it, no write to `[EBP]` in `FUN_004b9fa0` | asm `0x4b9fa0`-`0x4ba45e` |
| Slot blit: `Blt(page, rect, src, rect, WAIT)`, no key, stretching 256x256 into 341 or 342. Dest x = `ftol(2048*u0)`: 0, 341, 682, 1024, 1365, 1706, 2048. The source surface is then released | `0x4ba0d8`-`0x4ba2a6`, `0x4ba38e` |
| Textures in a race: at most 19 of 36 (anim INIs and 4 track names, E0..E9, league 0). The sky texture takes a slot though never drawn | parse |
| Texture PCX palettes: all 77 named files agree with `e00_pal.pcx` on every index they use (`e02_pal.pcx` is byte-equal). `init.pcx`'s own palette differs in 252 entries and is not used | parse |

**UV remap**, both `u' = |u|/6 + u0`, `v' = |v|/6 + v0`, no wrap into the slot:

| Geometry | When | Evidence | |
|---|---|---|---|
| Track, 4 lists | At load, per vertex appended, `+0x9c == 0` | `FUN_004ae220`, `2d0`, `370`, `410` | C |
| Meshes | **At draw**, in `FUN_004bd070`: if `tex+0x44 != 0` and mesh `+0xa8 != tex`: `FUN_004bdcd0`, then `+0xa8 = tex`. No `SetRenderState(1)` on this branch, right before the DIP | asm `0x4bd107`, `0x4bd30a` | C |
| Restore `FUN_004bdff0` | Never: gate `0x73b610` has one reference, the read at `0x4bd3dd` | | C |

Consequences:

- `.rmp` UVs are all inside 0..1 on all 10 tracks, parse: no spill. C.
- 46 of 1971 `.d3d` have UV above 1, up to 7.0 (`0_thouse`, `e00_munt` v 1.995, `e04_bud3` v 2.0, `e9_vide` 4.5), 57 below 0. With the remap these read neighbouring slots or the mirror, where the 16-bit path wraps. Sample the page with the raw `u', v'`, no clamp to the slot. C for the arithmetic, parse for the counts. Which of these meshes appear in a race was not counted.
- A mesh drawn with a second texture is remapped again from already remapped UVs, because `FUN_004bdcd0` reads the current values. Anim INIs pair `police01.d3d` with `cars01`, `l1racer2`; `s_licht.d3d` and `dummy.d3d` with several. C for the code, U whether two pairings meet in one race and draw.
- `FUN_004bdcd0` is a run-time writer of mesh UV that the 16-bit path never runs. It goes through game memory, so reading UVs at draw time reproduces it. A renderer that caches mesh UVs must treat it as a dirty event. `FUN_00437370` writes UVs too but only on the car's frame 2 mesh, whose instance is hidden here. C.

**Object loop.** `FUN_004a9c20`, asm `0x4a9c20`-`0x4aa05b`. Same window as `FUN_004a9a20` (`FUN_004af520`, chunk `+0x34`, `+0x54 != 0`, `+0x5c != 0`, used flag).

| Pass | Test | Action |
|---|---|---|
| A | texture of the current frame has `+0x44 != 0` | `FUN_004a8cb0(obj)` |
| B | every object in the window: `+0x40 != -1` | `FUN_004a6b90(i)` -> shadow callback |
| B | texture `+0x44 == 0` | `FUN_004a8cb0(obj)` |

Since all textures but #0 have `+0x44`=1, pass A draws every object and sub-object, pass B draws only shadows. So shadows come **after** objects here, and before them in RES 3. Z sorts it out. C for the code, I that no object uses texture 0.

`FUN_004a8cb0` itself is unchanged. `FUN_004b2e40` does nothing here: `+0x2c` is 0 on page textures. `FUN_004a8200` still writes car vertex colours, with no visible effect under COPY. C.

**Renderer must.** One 8-bit page texture, indices through the game palette, key index 0xFE (section 4). Bind it when `SetRenderState(1, pageHandle)` arrives, and keep it until state 1 changes: track and meshes rely on the state staying set. Treat handle 0 as "no texture" (section 5). Read UVs at DIP time for meshes.

## 4. Render states in this path

Whole-binary scan of `+0x5c` calls: states 1, 4, 7, 8, 9, 14, 17, 18, 19, 20, 21, 27, 28, 34, 41, 47. **No state 11 MONOENABLE, 26 DITHERENABLE, 22 CULLMODE, 23 ZFUNC, 15 ALPHATEST, 29 SPECULAR, 35-38 FOGTABLE.** C.

| State | Value in 8-bit | Where | Meaning for a renderer | |
|---|---|---|---|---|
| 21 TEXTUREMAPBLEND | 1 at creation, then **7** | `0x4bb9ad`; `0x44bc4d` in `FUN_0044bbf0`, before any draw | Never changed per pass. `0x43d476` is behind `0x6fb8d0 != 0` | C |
| | COPY: output = texel; vertex RGB, vertex alpha, baked track colours, ambient, HUD `RGBA` all ignored on textured draws | | `FRAG`'s `else c = vec4(t.rgb, 1.0)` | I |
| 4 TEXTUREPERSPECTIVE | 1 | `0x4bb908`, `+0x298` | Perspective correct, as in RES 3 | C |
| 9 SHADEMODE | **Never sent.** Cache `0x73b521` starts at 2 (`+0x2c9`, ctor), and the send at `0x44bce4` is behind hw and `cache != 2`. Never sent in RES 3 either | `0x44bcc2`-`0x44bce4` | D3D default, Gouraud (I) | C |
| 7 ZENABLE | 1, never turned off here. Other toggles: flag (not drawn), `FUN_00462cf0` rain (dead), `FUN_00486040` sets 1 | `0x4bb976` | Depth test on | C |
| Z clear | Flags 2 each frame, because `0x73b77c` (Z attached) and `0x73b4fd` are set | `FUN_004c0840` | | C |
| 14 ZWRITEENABLE | 1 in practice. Queue entries send 0 or 1, the end sends 1, no draw happens between | `FUN_004a74f0` | Depth write on, also for the late effects | C |
| 17,18 filter | Scene: never sent with `FILTER=2`, because `FUN_0044bbf0` returns at `0x44bcb0`; `FUN_004bc200(0)` -> 1,1 with `FILTER != 2`. After the first HUD pass 1,1 either way | `FUN_0044bbf0` | Nearest on the scene | C |
| | HUD: `FUN_00485ed0` -> `FUN_004bc200(1)`: 2,2 with `0x73b4f8`=0 (`mipmapping=0`), with **no 8-bit gate**. `FUN_00486040` restores from `+0x89` (0 here) -> 1,1 | | Host must return 0, failure is fatal. Whether Ramp filters: section 15 | C |
| | Flag toggles at `0x440250`, `0x440328` are behind `0x6fb8d0 != 0` | | | C |
| 27 ALPHABLENDENABLE | **Never sent.** `+0xa5` stays 0 on every instance: every writer found by a scan of `+0xa5` stores is behind `0x6fb940`, or stores 0, or is dead (`0x431630`, `FUN_00430e10`). All 18 sites of state 27 are gated or cached | scan of `+0xa5` and state 27 | Blending off for every draw, D3D default | C |
| 19,20 blend factors | Only `FUN_004a74f0` entries (2,1) and `0x47cd07`, `0x47cd5b` on `*_GLOW` (4, then 6). No effect | | Ignore | C |
| 28,34 fog | 0 and `0xFFFFFF` at creation, never changed: `FUN_0043d3c0` and `FUN_00457040` gated by hw. `FUN_00456d90`, trigger 17, has no hw gate but no track places it (`render-device.md` section 12) | `0x4bb9fb` | No fog | C |
| 41 COLORKEYENABLE | 1 | `0x4bb93f` | Key honoured: texels equal to the key are not drawn | C for state, I for Ramp |
| Key value | `FUN_004ba810`: `FUN_004c81b0(0xFE, 8)` returns 0xFE at 8 bpp | `0x4c81f0` | Compare palette **index** 0xFE, no colour compare. Palette[0xFE] = 255,0,127 | C |
| 47 ZBIAS | 1 around blob shadows | `0x4445f8`, `0x444637` | | C |
| 8 FILLMODE | As RES 3, mesh `+8` only | `FUN_004be340` | | C |
| Material | `0x5b1ba8` selected by light state 1 (`0x4badda`): diffuse and ambient 1,1,1, ramp size 16 (`+0x4c`), `hTexture` `+0x48` rewritten per texture | `FUN_004bab70`, `FUN_004bb190` | Matters for untextured draws only (section 5) | C |

Cull as in RES 3 (no state sent). Ramp, 16-bit Z, viewport and transforms are the same calls. Same projection code; viewport differs by mode (section 13).

## 5. Draws with no texture

Handles of page textures are 0 (section 3). So any code that binds a page texture through the `tex[i].handle` pattern turns texturing **off**: `SetRenderState(1, 0)`, and material `+0x48` = 0. The cache `0x73b4ec` holds the index, so the state is sent on index change only. C.

| Draw | Texture asked for | Sent | Vertex colour (RGB) | Evidence |
|---|---|---|---|---|
| Skid marks | `S_SFX.PCX` (`0x6ed680`) | State 1 = 0, cache = S_SFX | `0x404040`, both strips | `0x4451dc`-`0x4451f9`, `FUN_00444a60` |
| `gfx_wolk` | `S_SFX.PCX` (`0x6f5088`) | No send, same index as skid (a send if skid marks are off) | Centre `A0A0C8`, rim `646464` | `FUN_00446fe0`, `FUN_00446cf0` |
| `gfx_bwlk` | `L1RACER3.PCX` (`0x6c4200`) | State 1 = 0, cache = that index | Centre `AAAAAA`, rim `323232` | `FUN_0043de00`, `FUN_0043dba0` |
| Finish flag | | Not drawn | | section 6 |
| Radar, `gfx_sprk`, rain | | Dead | | section 14 |

The next frame's rows 3 and 7 of section 1 put the page back. HUD and particles run before these, so they see the page. C.

Spark `FUN_0045fd50` is the opposite case: its bind is behind `0x6fb8d0 != 0`, so it keeps the current state, the page, section 6. C.

**What colour reaches the screen is not provable from the binary.** C: state 1 = 0, blend off, Z on, map blend 7, material white, ramp 16, vertex colours as above, Gouraud default. I (DX5 memory): with no texture Ramp shades with the current material's ramp, the vertex colour's **blue** byte gives the level, and the result is matched to the palette because entries 0..254 carry `peFlags` 0x40 (`D3DPAL_READONLY`, `FUN_00447d10`, values allowed by `0x4ca074`).

So the two readings give:

| Draw | Vertex RGB as is | Ramp reading, gray from blue |
|---|---|---|
| Skid | 64,64,64 | 64,64,64 |
| Smoke centre, rim | 160,160,200 / 100,100,100 | 200,200,200 / 100,100,100 |
| `bwlk` centre, rim | 170,170,170 / 50,50,50 | same |

**Renderer must.** Opaque, Gouraud across the fan or strip, Z tested and written, UV unused, vertex alpha ignored. `FRAG` with `vTex == 7` outputs `vColor`; with blending off that gives the first reading. Smoke becomes solid gray 6-vertex fans: code says so, how a period machine showed it is U.

## 6. Effects, one by one

**Blob shadow.** `FUN_00443710`: `0x6fb8d0 == 0` -> always `FUN_00443ef0`, the player too. `FUN_00443770` with `FUN_00443100`, `FUN_0047b110` is never reached. C.

`FUN_00443ef0`: gate chunk distance to the player < 6. Instance `0x6fb8b4`, mesh must have 4 vertices (fatal otherwise). Corners placed on the track + 1.0, world identity, vertex colour rewritten (no effect). `+0xa5`=0 at `0x444594`, no blend states, `ZBIAS` 1 around `FUN_004b5b10`. Texture `s_shadow.pcx`, 64x64: parse gives index 0 (black) 3394 texels and 0xFE (key) 702, a black fill with a keyed rim. So: **opaque black quad with a ragged edge**, under COPY. C for code and parse, I for the COPY look.

**Car lights, reflection, cop lights.** Created with `+0xa5`=0 here (`FUN_00436170`, `FUN_004370f0`, `FUN_00436b90` behind `0x6fb940`), then `+0x90`=0 each tick. C.

| Function | Sub-objects hidden | Tick caller |
|---|---|---|
| `FUN_00436510` | 0..3 (vehicles with lights first) | `FUN_00415cf2`, `FUN_00415d20`, `FUN_004161d0` |
| `FUN_00436850` | 4..7 | `FUN_00435440`, `FUN_00435470`; `FUN_00435410` only from dead `FUN_0042fd40` |
| `FUN_00437370` | 8 reflection, end of function | same three |
| `FUN_00436dc0` | 9, 10 cop lights | `FUN_00407300` |

`FUN_00436510` and `FUN_00436850` still push two entries on the alpha queue before hiding them, `FUN_004a74f0` skips them on `+0x90`. Other `+0x90` writers: `FUN_00426280` writes 0; `FUN_004304e0` writes 1 but only from `FUN_0042fd40` and `FUN_0042faa0`, trailer code that is dead (callers `FUN_004319a0`, `FUN_00431320`, unreachable by the same scan, and `original-behavior.md`). C.

**Skid marks.** `FUN_00445180`: `0x6fb90c`. Blend gate `0x6fb894 == 0 && alpha` at `0x44521e`, `0x4453da`: off. World identity. Up to 20 slots, 2 strips, count > 2, DP 5, type 2, flag 1. Gray strips, opaque. Alpha fade (`fade_skmarks`) has no visible effect, they disappear when `FUN_004450e0` frees the slot. C for code, I for look.

**Particles.** `FUN_0045dce0` blend gate `hw && alpha`: off. `FUN_0045ec30` per-particle world, then virtual draw (`FUN_00459590` and 9 others) -> `FUN_004bd070`: page UV remap, COPY, keyed. C.

**Sparks, `par_spark`.** `FUN_0045fd50` (vtable `0x57690c`) skips its bind. `FUN_00460070` draws DP 5, 4 vertices, flag 0, all UV `0.98828125` (`0x3f7d0000`), colours red, yellow, alpha in one vertex. With the page bound (row 7, objects leave it): one texel, 0.98828125*2048 = 2024,2024 of `init.pcx`, index 31 (parse), palette colour 191,203,231. Slot 5,5 is unused (19 of 36). So sparks are flat light blue-gray streaks, red and yellow ignored. C for the calls and parse, I for the outcome.

**Smoke `gfx_wolk`.** Spawn `FUN_00446c70` needs `clouds` and `1/dt >= 12`. Draw `FUN_00446fe0`: wipes when `1/dt < 10`. Blend gate hw and alpha: off. 70 slots, qsort, DP 6, 6 vertices, flag 1. Section 5. C.

**`gfx_bwlk`.** Same shape. Spawn `FUN_0043dd90` from `FUN_00426530`. C. It drew 0 times in an Amsterdam race in the port (`render.md` section 18).

**Finish flag.** `FUN_00440160` needs `0x6cbef0`. Its only setter to non-zero is `FUN_0043fdd0(1)`, whose only call is `0x43acc1` in `FUN_0043ac80`, behind `0x6fb8d0 != 0`. `FUN_00440100` sets 0. So **no flag in this path**. The `0x6fb894` and hw gates inside are never reached with this data. C.

**Flitser flash.** `FUN_00457880` (trigger) -> `FUN_0043c120(0, init=FUN_0043b0b0, update=FUN_0043b130, exit=FUN_0043b0f0)`. `FUN_0043c120` runs init at once, in the object tick. `FUN_0043c260` runs update after the scene, before the flip (`FUN_0044cb80`); nonzero return -> `FUN_0043c1f0` -> exit, same call. C.

| Moment | 8-bit | 16-bit | |
|---|---|---|---|
| Init | `GetEntries(0,255)` into `0x6c35d4` (1020 bytes); `peFlags`=0x40; `SetEntries(0,0,255)`; `0x6c39d8`=0. No visible change | nothing | C |
| Update, frame N | `SetEntries(flags 0, start 0, count 255, all 0x00EBEBEB)`: entries 0..254 = 235,235,235. **Entry 255 keeps 255,0,255.** Counter 1, returns 0 | `FUN_004c4f70(focus, FUN_004c81b0(15,8))`: `COLORFILL` white over the render target, returns 1 | C |
| Flip N | Picture of frame N, shown white | White | C |
| Update, frame N+1 | Same `SetEntries`, counter 2, returns 1 -> exit: `peFlags`=0x40, `SetEntries(saved)` twice. All before the flip | | C |
| Flip N+1 | Normal picture | Normal | C |

So one white frame, 235 gray instead of 255, by palette. Index 255 occurs once each in `e01_vang.pcx`, `e03_gras.pcx`, and nowhere in sky or wait pictures: parse. A full-screen 235,235,235 at present is equivalent to one or two pixels.

**COLORFILL in 8 bits.** `FUN_004c4e00`: `bpp` 16 or 24 uses `param_6` (conversion behind `0x7408f4`, read-only, stays 0). Otherwise `param_6` raw, a **palette index**, at `DDBLTFX+0x50`. Live callers: `FUN_004c4f70(2,0)`, `(1,0)` at setup (`0x4c559c`, `0x4c55a4`), `FUN_00448160` at exit. All index 0 = black. `0x43b92d` in `FUN_0043b7ea` is dead. So no colour fill in a race in this path. C.

## 7. Palette functions

No fades exist in live code. C.

| Function | Live | What it does |
|---|---|---|
| `FUN_004c9c90` | yes | 8 bpp: `CreatePalette(0x44, 0x7409f0, ..)` (entries zeroed `LPTR`), `SetPalette` on primary, back, buffer screen (`FUN_004c9d50` x3) |
| `FUN_004c04b0` `0x4c0562` | yes | `SetEntries(0,256)` zeros, at device setup |
| `FUN_00447d10` | yes | `FUN_004cab50(first [PALET] arg, 1)`: last 768 bytes, `SetEntries(0,256)`; `SetEntries(0,255)`; flags 0x40 on 0..254, `SetEntries(0,255)`. Runs in `FUN_0044bad0`, before the first picture. `e00_pal` and `e02_pal` are byte-equal, parse |
| `FUN_0043b0b0`, `FUN_0043b130`, `FUN_0043b0f0` | yes | Flash, section 6 |
| `FUN_0043cdd0` | yes | Not palette: selects a `.fnt` set (`FUN_004ca110`) and writes its gaps `+0x88`,`+0x8c` (`FUN_004ca0d0`), 8-bit value or 16-bit value |
| `FUN_0043ce10` | yes | `0x6c4098 = (8-bit == 0)`, loads 17 fonts of set 0: `lo_fnt3, lomid, logeel, lo_geld, lo_vlag, lo_bts, lo_fnt1, marc10, slider13, slider15, lo_fnt1, lo_fnt2, lo_fnt4, lo_fnt1, lo_fnt8, lo_fnt9, lo_fnt1` (all in `rcs`, missing is fatal). 8-bit gaps by index: 2:-4, 6:0, 3:-3, 5:-2, 10:0, 11:-1, 12:0, 13:0, 0:-2, 14:-5, 15:-1, 16:0. Class 0: `FUN_004c87f0(0)` |
| `FUN_0043ae4a`, `FUN_0043af57`, `FUN_0043b065` | dead | Full-screen 16-bit fills, no references |
| `FUN_0043b280` action 5 | runs, inert | Gate `0x6fcdf0`, only ever 0. Fog colour wash, no palette |
| `FUN_004cae20` `0x4cb209` | not with 0x19 | `(flags & 6) == 6` |

Host needs a real `IDirectDrawPalette` with `SetEntries` (`+0x18`) and `GetEntries` (`+0x10`). Today `CreatePalette` writes no object (`source/host/directx.js`), so `FUN_004c9d50`, `FUN_004c9e70` would fault. C.

## 8. HUD

**Same mesh HUD as RES 3.** `FUN_00487f20` picks `overlayN.ini` by car (`0x6fba5c`) only: no size-class or depth variant. Sets manager `+0x8a` = (hw != 0), `+0x8b` = (alpha != 0), and `0x7126a6` = hw. C.

| Item | 8-bit | Evidence | |
|---|---|---|---|
| Blit or GDI in the live HUD | None. `.fnt` and rc sprites are not drawn | Section 14 dead list; `FUN_0043f8a0` only `FUN_0043e120` (empty) and tweak | C |
| Texture | `overlay.pcx`, `s_sfx.pcx` for three `*_GLOW`, on the page; `[FONT1]` rects `x/256`, `y/256` then remapped | `gen_anim.ini`, `FUN_00482960`, `FUN_004bd070` | C |
| Blend | `FUN_00485ed0` block skipped (`+0x8a`=0). `FUN_0047ce40`, `FUN_0047ceb0`, `FUN_00482960` set `+0xa5`=1 only with alpha | | C |
| Colour | `FUN_0047d1f0` still writes `RGBA` into vertices, unused under COPY. `FUN_0047bdc0`, `FUN_0047c510` skip the stored colour (`0x7126a6`=0) | | C, I for COPY |
| Text colour | `overlay.pcx` glyph `A` (1,1,12,17): indices 0 black, 15 white, 109 gray, 0xFE key, same as `overlay.tga` by sample. So **white text with black edge**, no green 118,250,0, no red countdown | parse | I |
| Fades | `STRING_GAME_TEXT`, start digits, racer portraits `0xb4`: alpha has no effect. Digits still scale 1 to 9, and text still hides at 2.75 s. Digits end large and opaque | `FUN_00494f10`, `0x00496110` | I |
| Glass, glows | Opaque with key where `overlay.pcx`/`s_sfx.pcx` have colour. All Z tested and written | | I |
| `FUN_00494ec0` | Skipped. Its handlers are empty or only reset a timer | `FUN_00494e80`, `e90`, `ea0` | C |
| Filter | Section 4 | | C |
| Size class | Section 13 | | C |

Update and order are as in `hud-overlay.md`. HUD still before skid, smoke, `bwlk`; stays on top by depth. The port's `sceneHud` draws last, which differs only where late effects meet HUD key holes. C for the original.

## 9. Loading, wait screens, before the race

| Function | 8-bit | Evidence | |
|---|---|---|---|
| `FUN_00449cb0` | Key list: `[wait_lo]` when 8-bit and class != 1, else `[wait_hi]`. Asm `0x449d28`-`0x449d41` | | C |
| Files | RES 0 `e0N_w_lo.pcx` 320x200, RES 1 `e0N_w_hi.pcx` 640x480, E0..E9 (10, 11 use `e01`). Palette equal to the game's, no index 254, 255 in E0, parse | | C |
| `FUN_004409d0(2, idx)` | Range checks, then `FUN_004cae20(2, name, 0x19)` (asm `0x440a28`-`0x440a44`): decode into a **lock of the buffer screen**, rows `min(h, H)`, pitch `0x7408a8`, raw indices, 0x19 has no palette bits. 16-bit path instead `FUN_004c00b0` TGA and `FUN_004c9930` | | C |
| `FUN_004416f0` | `FUN_004cada0` header, `FUN_004409d0`, then `FUN_004c8b90(2,1,0,0,w,h,0,0,W,H,0)`: buffer to back, 1:1 here | | C |
| `FUN_004415e0` | `FUN_004416f0`, Begin, `FUN_004882f0`, End, `FUN_0044df10`. No Z clear. 10 calls. In focus 2 the HUD lands on the buffer screen, then present copies it to back | `calls.csv` | C |
| `FUN_00440950` | `FUN_00458730(2)`, `FUN_00458810`: 13 anims `5,1,13,8,10,2,7,43,15,16,18,22,20` at `0x5a4768` -> 38 rc images, surfaces key 0xFF. **Never drawn with shipped data** | parse of `0x5a4768`, `0x5a4830` | C |
| `FUN_00440990` | `FUN_004588a0`: frees them at exit | `FUN_004490a0` | C |
| `FUN_00441760` | **Dead**, no references: sprite progress bar | raw scan | C |
| `FUN_00440b60`, `FUN_00440cb0` | **Dead group** | section 14 | C |

**On screen, in order.** C unless marked.

1. `FUN_004c4fa0`: palette all 0, buffer and back filled with 0, flip: black.
2. `FUN_0044c200`: `FUN_00447d10` sets the palette, screen stays index 0 = black. Page, fonts, sky, anims load with no picture.
3. First `FUN_004415e0` at `0x44c49a`, then `0x44c5e6`, track load x5, `0x44c713`, `0x44c763`: picture, `OVL_PROGRESS_BAR` mesh frame `ftol(11*pct*0.01)` (`percent0..` in `raser.ini`).
4. Last call `0x4581d0`, overlay state 1: picture plus normal HUD.
5. Main loop: game state 1, camera path, countdown states 8..11, as RES 3 with section 1's frame.

The buffer screen is not cleared between 4 and 5, so the first race frame draws over picture and HUD. Pixels below `blitH` not covered by the track keep them. I for the visual outcome.

**Renderer must.** Treat a `Lock`/`Unlock` of the buffer screen as a full-screen picture write in indices, and keep it as colour content under the 3D of the same frame. `Blt` buffer-to-back and buffer-to-back-at-present are no-ops when buffer and back are one GPU target, and must not count as draws: `endFrame` uses `drawsThisFrame` for the pause case. `softFill`, `softBlit`, `Lock` pointer arithmetic in `directx.js` assume 2 bytes per pixel, and 8-bit surfaces need 1. C for the host code.

## 10. Pause and quit

Same code path as RES 3. C.

- `FUN_0044cf90`: key P: state 2, `0x6fb8d8`=1. ESC: state 3, `0x6fb8d8`=2.
- The frame draws the requestor mesh and strings in COPY: opaque body, keyed, white text.
- `FUN_0044cb80`: present, then two more `FUN_0044df10`, then `FUN_0044ca80` spins. In focus 2 each is `Blt` buffer to back and a flip, so the picture is stable on every flip without a re-render. RES 3 relies on the third flip landing on the right page.
- No palette change. A flash in progress at this moment stays as set (I: an edge case of one frame).

## 11. End of race

| Stage | 8-bit | Evidence | |
|---|---|---|---|
| Finish `FUN_0043ab70`, `FUN_0043ac80` | Same camera, sound; after 1500 ms state 5. **No flag** | `0x43acb6` | C |
| Finish table | Same HUD code. Portraits and strings as mesh, COPY | `0x00492c70`, `hud-overlay.md` 10 | C |
| Game over `FUN_0043bc20`, `FUN_0043bd60` | Same orbit, strings | | C |
| Cop stop `FUN_0043a910` | Same | | C |
| Results | `game.ini`, process ends, menu. No drawing difference | | C |
| Exit `FUN_00448160` | `FUN_004c4f70(focus,0)`, flip, twice. In focus 2 the fill goes to the buffer screen and the flips show back buffers that were not filled | `0x448192`-`0x4481ac` | C |
| Release | `FUN_004455c0` sky when `BACKGROUND==0`; `FUN_00440990` | `FUN_004490a0` | C |

Port: the exit fills are invisible anyway, since the race page is torn down.

## 12. `VISIBLECHUNKS`, `FUN_0044cb30`

Asm `0x44cb30`-`0x44cb76`. Every frame, only in game state 0 (`0x6fb8a0 == 0`):

```
floor = hw ? 25 : 15      // NEG, SBB, AND 0xA, ADD 0xF
if (1.0 / dt < 10.0 && N > floor) N--
```

`dt` = `FUN_004a6800`: 0.1 when the stored value is 0 or above 0.1. 1/0.1f = 9.9999998 is below 10, so a capped frame counts. No way back up. Start: `[OPTIONS] VISIBLECHUNKS`, at least 10, shipped 25 (`FUN_0044a630`). C.

So in this path N can fall from 25 to 15, and RES 3 at shipped 25 never moves. N drives the draw window (`FUN_0044df70`, `FUN_004aec50`, object loop) and also game logic: `FUN_00409070`, `FUN_00415640`, `FUN_00415d20`, `FUN_004275e0`, `FUN_0041ca20`, `FUN_004a9870(chunk, 2N)`. So a slow 8-bit run changes AI ranges. C. On the port's fixed tick dt stays 1/60, so N stays 25 unless the host feeds a capped dt in state 0. I.

## 13. RES 0 against RES 1

| Item | RES 0 | RES 1 | Evidence | |
|---|---|---|---|---|
| Mode | 320x200x8, modex flag 1 | 640x480x8, flag 0 | table `0x5b37b0`. `FUN_004c4ce0(0)` skips the test lock of the primary with the flag | C |
| Cooperative flags | `0x51` in both | | `FUN_00447870`, `FUN_004c4330(1,0x40,1)` | C |
| Sky | section 2 | | | C |
| Wait pictures | `wait_lo` | `wait_hi` | | C |
| Viewport | `dvClipY` 0.625, `dvClipHeight` 1.25 | 0.75, 1.5 | `FUN_004c0e10` reads H/W | C |
| Scene FOV | Horizontal the same, vertical narrower | As RES 3 | Same projection `FUN_004b39d0`, viewport only | C |
| Z, render target | 320x200 | 640x480 | `FUN_004c04b0` | C |
| HUD layout | `sx_px = 0.495*cx`, `sy_px = 0.4125*cy`: canvas squeezed anisotropically to the mode, 1% short at the edges as always | `0.99*cx`, `0.99*cy` | `0x0047cd90`, `0x0047fd20`, `0x00480500` read W, H | C |
| Composites | Local position does not use W, H; shipped composites have position 0 (`Width 640, Height 480`) or code-written x, so no shift | | `0x0047feb0`, `overlay0.ini` | C |
| Finish table rows | Code constants, y0*0.75 in world: px 40, 76, 112, 148, 184 of 200 | 120, 192, 264, 336, 408 of 480 | `0x00492980` with N=4 | I, arithmetic |
| Fonts | Same set 0. `FUN_004c87f0(0)`: `0x5b570c` 1 -> 0, so `FUN_004c9560` no longer rounds text x to even | default 1 | `0x43d12d`, `0x4c9698`. Only `.fnt` text, tweak only | C |
| `0x6fb890` in old 2D | y offset `class*0xf0`, x+0x140 for class 1, wrong-way position | | **Dead code** | C |

Anything keyed to 320x200: the list above is complete for live code. Live readers of W and H: `FUN_004416f0`, `FUN_004454c0`, `FUN_0044df10`, `0x0047cd90`, `0x0047fd20`, `0x00480500`, `FUN_004c0e10`, `FUN_004c04b0`, `FUN_004c41e0`, `FUN_004c4f70`, `FUN_004c4fa0`, `FUN_004c55c0`, `FUN_004c8b90`, `FUN_004cae20`. C, `data_refs.csv`. `FUN_004ce140` (BMP shot) reads them too.

**Renderer must, for RES 0.** `D3DRenderer.updateClipMap` hard-codes `0.75`, `4/3`, and `source/host/hud-layout.js` the same. With `dvClipY` 0.625 use the viewport's `clipY`: base aspect W/H = 1.6, `xr = (H/W)*aspect`, `yr = H/W`. Otherwise the HUD ends at y +-0.62 inside a +-0.75 view and the sky quad is off. I.

## 14. Every branch

**A. `0x6fb8d0` (hardware 3D).** "Effect" is with 0.

| Function | Live | Condition | Effect at 0 | Renderer |
|---|---|---|---|---|
| `00431320` | dead | alpha && hw: body `+0xa5`=3 | - | - |
| `00436510` | yes | `alpha==0 \|\| hw==0` | Sub 0..3 hidden | No lights |
| `00436850` | yes | same | Sub 4..7 hidden | No lights |
| `00436dc0` | yes | same | Sub 9,10 hidden | No lights |
| `00437370` | yes | same | Sub 8 hidden; UV writes run on an unseen mesh | No reflection |
| `0043ac80` | yes | hw: `FUN_0043fdd0(1)` | No flag; state 5 still set | - |
| `0043d3c0` | yes | hw | No sky mesh, no fog setup, `0x6c40c8`=0 | No fog |
| `0043d4f0` | yes | hw && `0x6c40c8` | Nothing | - |
| `0043de00` | yes | hw && alpha, twice | Blend skipped, handle 0 | Section 5 |
| `0043f0d5`/`0043f0e0` | dead | y offset 0 or `class*0xf0` | - | - |
| `0043fc03` | dead | wrong-way sprite offset | - | - |
| `00440160` | not drawn | filter toggles behind hw | - | - |
| `0044269d` (`004426a0`) | dead | radar quad blend | - | - |
| `00442920` | only `radar!=0`, shipped 0 | `hw==0 && param_6`: `FUN_004bdcd0` | - | - |
| `00442a20`, `00442a25` | dead | radar item bind | - | - |
| `00443710` | yes | hw==0: `FUN_00443ef0` | Blob for all | Section 6 |
| `00443ee1`/`00443ef0` | yes | `alpha && hw`: `+0xa5`=1, else 0 | Opaque | Section 6 |
| `004454c0` | yes | hw==0 && `BACKGROUND`==0 | Sky surface | Section 2 |
| `004460c1` (`004460d0`) | dead | spark bind | - | - |
| `00446e80` | yes | hw: caps test | Clouds stay on | Section 5 |
| `00446fe0` | yes | hw && alpha | No blend | Section 5 |
| `0044a690` | yes | ext `TGA` or `PCX` | Track textures `.PCX` | Host serves PCX |
| `0044b9d0` | yes | hw==0 returns 0 | No caps call | - |
| `0044baa0` | yes | | alpha=0 | No blend |
| `0044bad0` | yes | hw==0: `FUN_004b88a0(6)`, `FUN_004b82e0(1)`, `FUN_004b8910(init.pcx)`; hw: `FUN_004b8840(1)` TGA, gamma, key `0x7f00ff` | Page, PCX source (`0x73b20c`=0), no magic key | Section 3 |
| `0044bbf0` | yes | | Map blend 7; filter section 4; no shade | Section 4 |
| `0044bd10` | yes | writes | Section 0 | - |
| `0044c200` | yes | `FUN_004b26f0(.., 0, ..)`, `FUN_004422f0` | Page | - |
| `0044cb30` | yes | floor | 15 | Section 12 |
| `0044da30` | yes | sky, texture 0 twice | Section 1 | Section 1 |
| `00457040` | no-op | gate at entry | - | No fog |
| `00457370` | dead | | - | - |
| `00458440` | tweak only (`FUN_00427b90`) | hw==0 only | Writes `PICTURE.PCX` from a lock of page `+4` | Page lockable |
| `0045dce0` | yes | hw && alpha | No blend | - |
| `0045fd50` | yes (vtable) | hw: bind `+0x9c` | No bind | Section 6 |
| `00467960` | yes | ext | `.PCX` names for a manager never used | - |
| `00473f00` | yes (script) | hw && alpha | Script blend mode ignored | - |
| `0047b110` | not reached | hw: bind, blend | - | - |
| `00487f20` | yes | flags | Section 8 | - |
| `00494ec0` | yes | hw && alpha | No visual effect | - |
| `00497ab0` | not reached | `FUN_00498760` only | - | - |
| `00498760` | yes | hw | No detail manager | Sizes from file |
| `00498870` | yes | | Returns -1 | - |

**B. `0x6fb894` (8-bit).** Each is C.

| Function | Live | Effect at 1 | Renderer |
|---|---|---|---|
| `0043ae4a` (`0043ae50`) | dead | Fill skipped | - |
| `0043b0af`/`0043b0b0`, `0043b130`, `0043b0f0` | yes | Palette flash | Section 6 |
| `0043cdd0` | yes | Font gap | - |
| `0043ce10` | yes | Font set 0 | Host: fonts, surfaces |
| `0043fa50`, `0043fb7b`/`0043fb80`/`0043fb81` | dead | Old 2D table offset | - |
| `00440160` | not drawn | Blend off | - |
| `00440950`, `00440990` | yes | rc lists, section 9 | Host: 8-bit surfaces |
| `004409d0` | yes | PCX to buffer | Section 9 |
| `00440b54`/`00440b60`, `00440cb0` | dead | Table offset, x+0x140 | - |
| `00440de7` (`00440df0`), `00440fa9` (`00440fb0`) | dead | Translucent fills: skipped | - |
| `00441760` | dead | Sprite bar | - |
| `00445180` | yes | Blend off | Section 6 |
| `00449cb0` | yes | `wait_lo` when class != 1 | Section 9 |
| `0044bd10` | yes | writes | - |

**C. `0x6fb890` (size class).**

| Function | Live | Effect |
|---|---|---|
| `0043ce10` | yes | Class 0: `FUN_004c87f0(0)` |
| `0043f0d5`/`0043f0e0`, `0043fc03`, `0043fa50` | dead | Old 2D offsets |
| `004409d0` | yes | Range check 0..5 only |
| `00440b60`, `00440b54`, `00440cb0` | dead | x+0x140 |
| `00441760` | dead | Table index |
| `004454c0` | yes | Class 0 lo, 1..3 hi, else fatal |
| `00449cb0` | yes | Range check, list |
| `0044bd10` | yes | writes |
| `0044bfc0` | dead, no references | `LORADAR.PCX`, `HIRADAR.PCX`, texture-copy test |

**D. `0x7152ec`.** Absolute: `FUN_004a6b00` write, `FUN_004a99a0` read. Through `this+0x9c`: `FUN_004ae220`, `2d0`, `370`, `410` (load remap), `0x4aebc0` (object loader argument), `FUN_004aecd0` x4. `FUN_004addd0` ctor writes 0. At 0: `FUN_004a9c20` instead of `FUN_004a9a20`, section 3. C.

**E. Bit depth `0x5b37a0`.** C.

| Site | Function | At 8 bpp |
|---|---|---|
| `0x4bbd78` | `FUN_004bbd40` | Ramp device |
| `0x4c0351`, `0x4c035f` | `FUN_004c00b0` | TGA branch writes 0 bytes; not reached, no TGA here |
| `0x4c0579` | `FUN_004c04b0` | `FUN_004c2b90(2)`: 8-bit palettised texture slot |
| `0x4c43e5` | `FUN_004c4330` | write |
| `0x4c4e28` | `FUN_004c4e00` | Fill value raw index |
| `0x4c5881`, `0x4c58ab` | `FUN_004c55c0` | Log, `SetDisplayMode(W,H,8,0,0)` |
| `0x4c7f00` | `FUN_004c7ee0` | Fatal (24-bit colour) |
| `0x4c8043` | `FUN_004c8020` | Fatal (32-bit colour) |
| `0x4c81f0`, `0x4c82f4` | `FUN_004c81b0` | Size 8 returns the index; size 0x10 fatal `not yet supported` |
| `0x4c83bd`, `0x4c83f9`, `0x4c848a` | `FUN_004c8380` | Byte write |
| `0x4c9ccc` | `FUN_004c9c90` | Creates the palette |

Dead group by raw scan, no pointer and no `E8`/`E9` from live code: `0043e130`, `0043e4c0`, `0043e720`, `0043e780`, `0043ea80`, `0043f0e0`, `0043f2d6`, `0043f330`, `0043f440`, `0043f570`, `0043f590`, `0043f690`, `0043fa50`, `0043fb81`, `0043fc10`, `00440b60`, `00440cb0`, `00440df0`, `00440fb0`, `00441760`, `004426a0`, `00442a20`, `00445ec0`, `004460d0`, `0044bfc0`. C. Live but only in tweak mode: `FUN_0043fc90` -> `FUN_004ca3d0` from `FUN_0043f8a0` (thunk `0x4409c0`, gate `0x6fb950`), the one `.fnt` text left. C.

## 15. Renderer checklist

Nothing below needs game logic in the host. Game code computes rects, UVs, visibility.

1. **Target model.** Buffer screen, back and primary behave as one persistent colour buffer. No colour clear per frame.
2. **Palette.** 256 entries, `SetEntries` and `GetEntries` on a real object. Convert indices to RGB at texture upload with the game palette, and handle the flash separately: at present, if entries 0..254 are all 235,235,235, show that colour for the frame.
3. **8-bit surfaces.** 1 byte per pixel in `Lock`, `softBlit`, `softFill`, pitch W, `Blt` stretch for the page slots.
4. **`Blt` to the screen.** Source surface picture: draw in place, section 2. Source buffer screen: no-op.
5. **`Lock` of the buffer screen.** Picture write, section 9.
6. **Shader.** Map blend 7 exists in `FRAG`. Key: discard on index 0xFE. Keep an index-derived mask, no colour compare, because the 2048 page is built by stretching with no blending of indices.
7. **Sampling.** Nearest, including the HUD (see below). Raw UVs on the page, no slot clamp, wrap at the page edge.
8. **No texture** when state 1 = 0, opaque.
9. **No blend** in this path at all; no state to honour beyond state 27 staying off.
10. **Z.** On for everything, write on. `ZBIAS` as today.
11. **Mesh UV.** Dynamic on first draw (`FUN_004bdcd0`). Capture at DIP.
12. **Viewport.** Honour `clipY`, section 13.

## 16. Unresolved

| Question | Why open | Suggested default |
|---|---|---|
| Colour of untextured draws under Ramp and read-only palette | D3D internals, no run possible | Vertex RGB. The differences are blue-tinted smoke only |
| Does COPY with colour key behave as assumed in Ramp | Binary only sets state 41 | Discard on key. Game data relies on it: `s_shadow.pcx` rim, `overlay.pcx` 19604 key texels, `s_sfx.pcx` 9565 |
| HUD filter 2,2 in Ramp | Ramp writes palette indices to an 8-bit target, which cannot blend (I) | Nearest. The state call must still return 0 |
| Stretch steps of the slot `Blt`, 256 to 341 or 342 | HEL or driver dependent | Existing nearest `softBlit` formula |
| Does Ramp honour `ZBIAS` | Blob is also lifted 1.0 unit | Keep polygon offset |
| Effect of a second texture on a shared mesh (`police01`, `s_licht`, `dummy`) in a real race | Depends on which anims a race draws | Nothing to do: game memory reproduces it |
| Exact bottom-third content on period hardware | Never seen | Persistent colour buffer |
| Whether the shipped 8-bit mode looked as this reads (solid smoke, gray skid strips) | No run under Wine, no period footage in the evidence | Follow the code, flag it to the owner |
