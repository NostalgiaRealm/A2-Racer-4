# Rendering

What `spel.dat` draws on its hardware path (`RESOLUTION=3` as shipped, unless a line says otherwise) and on its 8-bit path (section 26), how the port draws it, and how that was compared. Part of [`../original-behavior.md`](../original-behavior.md). Status per feature: [`../parity/render.md`](../parity/render.md). HUD: [`hud.md`](hud.md).

Addresses are `spel.dat` virtual addresses; `M:` marks `menu.exe`.

How to read the status lines:

- **Confirmed** means read from the shipped code or data: pseudocode checked against `disassembly.asm`, or a parse of the files. `spel.dat` was never observed running in the decompile package (`original-game-decompiled/dynamic/RESULTS.md`), so confirmed does not mean seen on screen. It has since run under Wine on llvmpipe in the reference runs, `evidence/reference-wine/results.md`, which measure timing and the car and set three frames of the picture next to the port's, by eye and by mean colour. The 8-bit path cannot run under Wine. It has run on an emulated Windows 98 machine, `reference-86box`, so in section 26 confirmed also means read from those frames.
- **Inferred** means it rests on DirectX 5 SDK semantics or on a derivation.
- **Unresolved** means nobody knows yet.

The "same machine code" argument for rendering stops at the Direct3D call. Everything the game computes before that call (matrices, vertex colours, UVs, which object is drawn, in which order, with which state) is the shipped code, with the two limits from [`../recompiler.md`](../recompiler.md): x87 runs on f64 instead of 80-bit, and clocks are virtual. Rasterisation, blending, filtering, depth and presenting are reimplemented in WebGL and are not covered by that argument.

Checks named below, all on etappe 0 (Amsterdam) in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan unless stated. Procedures and results: [`../validation.md`](../validation.md).

| Name | Tool | What it covers here |
|---|---|---|
| `check-flow` | `tools/check-flow.mjs` | A whole race run by the bot, zero console errors. Says nothing about the picture |
| `check-race-ui` | `tools/check-race-ui.mjs`, `evidence/race-ui/summary.json` | Named checks on size, input, dialogs and layout. It reads state and rectangles, it does not compare pictures |
| `repeat-trace` | `tools/benchmark.mjs` with `tools/compare-traces.mjs` | A checksum once per game second over every object with a physics body, 485 on Amsterdam: record and 3D object with world matrix. Game state only |
| `benchmark` | `tools/benchmark.mjs`, `evidence/performance/final-*.json` | Frame and tick times at 800x360, DPR 2, 8x CPU throttle. Desktop GPU: says nothing about a phone's GPU |
| `check-driving` | `tools/check-driving.mjs` | Scripted driving in Node, no renderer |
| `run-bot` | `tools/run-bot.mjs` | A whole race headless, no renderer |
| `boot-all` | `tools/build-race-lists.mjs` | All 10 etappes with all 8 cars for 2 s in Node, no renderer. Not a rendering check |
| `form-check` | Per-form browser checks, `evidence/forms/` | Menu forms |
| `reference-frame` | By eye | The first race frame against the owner's screenshot of his patched game under Wine, `A2-Racer-4-Fixes/releases/test-v1.3.0/screenshots/4_4x3_1024x768.png`: car 0, start line, 1024x768. The check does not record the port's window shape |
| `reference-wine` | `tools/reference-wine/`, `evidence/reference-wine/` | The original `spel.dat` under Wine on etappe 0, Wine's wined3d on llvmpipe. For this area: the mode it ended up in, and the port at 640x480 against the unpatched game's screenshots at the same moments, `side-ov8.png`, `side-go4.png`, `side-go8.png`, by eye and by mean colour. Not a pixel comparison. Software rendering says nothing about a card of 2000 |
| `reference-86box` | `tools/reference-86box/`, `evidence/reference-86box/` | The original `spel.dat` on a throwaway copy of the owner's 86Box Windows 98 machine: Windows 98 SE, DirectX 9, `D3DRAMP.DLL` of 590096 bytes dated 1999-09-09, an emulated Voodoo3 3000, Pentium MMX 266 or K6-2 550. Disc 1.01 data, etappe 0, car 0, screenshots of the guest. For the 8-bit path only, section 26: the port's frame at rest against the guest's, pixel-exact in RGB |
| `check-software` | `tools/check-software.mjs`, `evidence/software/flow/summary.json` | The 8-bit path by real clicks in the real menu, at 1280x720, with a whole race by the bot. It reads state, not pictures |
| `check-phone-flow` | `tools/check-phone-flow.mjs`, `evidence/flow-phone/` | Taps on an emulated touch profile at 844x390 and 390x844. Its screenshots were judged by eye, like those of the other checks |
| fix check | One-off script | Written for one change and run once, reading game state, draw lists and pixels back, with the bot. Not kept in `tools/`. The 144, 30 and 20 Hz figures come from a timer standing in for `requestAnimationFrame`, not from real displays |
| launch check | One-off script, `fix check: launch through the menu, 6 s of gas, 0 console errors` | The one check of track 9 with car 7, on the final build when the updates came in, in headless Chromium: the real menu, a race on the keyboard device, 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`, by eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else, no comparison with the original. The original has not been run with the updates |

No real phone, no other browser engine. Three comparisons of a picture with a run of the game exist for this area, all on Amsterdam at 4:3. `reference-86box` holds for the 8-bit path only and is pixel-exact, on frames at rest: section 26. `reference-wine`: three frames against the unpatched game, same key script, frozen at the same moments (state 8 + 0.3 s, GO + 4.5 s, GO + 8.5 s). By eye the framing, camera, textures, vertex colours and lamps are the same, and the mean colour of the whole picture differs by at most 3 levels per channel. `reference-frame`: the first race frame by eye against the owner's patched game. Neither of these two is a pixel comparison: motion and llvmpipe's filtering make per-pixel differences large. Outside section 26 the sections below name `reference-frame` only.

## 1. Direct3D device, capabilities and display modes

**Original behaviour.** `[PROGRAM] RESOLUTION` picks the mode and whether the 3D path runs at all. `raser.ini` ships 3.

| RESOLUTION | Mode | `0x6fb8d0` hardware 3D | How a player gets it |
|---|---|---|---|
| 0, 1 | 320x200x8, 640x480x8 | 0 | Opties: `3D kaart` off, then Laag or Normaal |
| 2, 5 | 640x480x16, 320x200x16 | 1 | Not in the menu's table `M:0x4ab4d8`. Only by editing `raser.ini` |
| **3** | 640x480x16 | 1 | Opties: Normaal |
| 4 | 800x600x16 | 1 | Opties: Hoog |
| 6, 7, 8, 9 | 320x200, 1024x768, 1280x1024, 1600x1200, all x16 | 1 | Geavanceerd: `Overige resoluties`, a list that only fills when `cboDriver` is past `standaard` and `automatisch` (`M:0x4882f4`) |

Device selection: HAL GUID first, RGB device on failure, Ramp below 9 bpp. `EnumDevices` results are logged and not used.

The game reads only these capabilities:

| Field | Offset | Effect |
|---|---|---|
| HW `dwFlags` | `+4` | Non-zero selects the HAL texture path and the HW copy of all getters |
| `dwMaxTextureWidth` | `+0xb4` | Texture detail limit. 0 means no limit. A texture over a non-zero limit is fatal |
| `dpcTriCaps.dwSrcBlendCaps`, `dwDestBlendCaps` | `+0x74`, `+0x78` | Both 0 clears `alpha_blending`. `SRCALPHA` and `ONE` must be present or `clouds` turns off (`FUN_00446e50`) |

Texture memory probe `FUN_004bc0f0`: creates 256x256 `LOCALVIDMEM` surfaces until `CreateSurface` fails, with room for 1024 pointers and no bound check. It stores `count * 65536 * (bpp/8)` at `0x73b4f9`. That value caps `custom_texture_memory` and goes into `game.ini` as `available_texture_memory` when the race exits. The menu's Texture detail reads it: below 16 MiB it disables Maximaal, below 8 MiB also Normaal (`M:0x488bd8`).

**Evidence.** `FUN_00447870`, `FUN_0044bd10`, `FUN_004bbd40`, `FUN_004bc160`, `FUN_004c1030`, `FUN_004c1080`, `FUN_0044b9d0` (asm `0x44ba54`, `0x44ba58`), `FUN_0044b180` through `FUN_00458210`. Notes: [`render-device.md`](../research/render-device.md) sections 1 and 2, [`win32-surface.md`](../research/win32-surface.md) C3 "Caps the game reads", [`menu-forms.md`](../research/menu-forms.md) `cboDriverChange`.

**Status.**

- Confirmed: the mode table, the three capability readers, the probe, the exit write, the menu limits.
- Inferred: the names of flags and enums come from the DirectX 5 headers.
- Unresolved: what real cards of 2000 reported. Whether any card reached `dwMaxTextureWidth` above 256 at the time.

**Where the port implements it.** Runs as shipped in the recompiled code. The host supplies, in `source/host/directx.js`:

- `GetCaps`: `dwFlags` 0x7FFFFFFF, both blend cap words 0x1FFF, everything else 0, so `dwMaxTextureWidth` is 0. On the Ramp device the `HW` description is empty.
- `EnumDevices` is a no-op. `CreateDevice` accepts any GUID, and notes the Ramp one. `EnumTextureFormats` offers RGB565 and ARGB4444; the game takes 565 and never uses the alpha slot. The Ramp device offers one 8-bit format instead.
- `createSurface` refuses the probe after 128 surfaces, or 256 at 8 bits. That gives exactly 16,777,216 bytes (0x1000000) on every machine, the least value that keeps Maximaal. So `TfrmDisplaySettings.limitTextureDetail` in `source/menu/forms/group-options.js` leaves all three radios enabled after a race with `3D kaart` on. Without it `Weergave` greys them (section 26).
- `SetDisplayMode` only stores the mode in `host.screen`, bits included. A save with `RESOLUTION=4` still reaches the game code as 800x600, and nothing on screen changes: picture size comes from `3D-resolutie` (section 3). On the 8-bit path the mode also sets the grid of the picture (section 26).

Hoog in `TfrmOptions` is greyed, with a note pointing to `3D-resolutie` (`NOTE_VIDEO_HIGH`). A save with `RESOLUTION=4` or a custom value still shows Hoog chosen and keeps its value; choosing Normaal gives 3. `3D kaart`, Laag and the 8-bit modes: section 26. `Overige resoluties` shows the fixed `640 x 480`, greyed with a note.

**How it was compared.** No comparison of these answers with a real card was run. Observed on the original under Wine with llvmpipe (`reference-wine`): the game ended up in 640x480x16, with hardware 3D flag `0x6fb8d0` = 1 and visible chunks 25. The harness set `VideoMemorySize` to 32, since the probe overflows above about 128 MB.

- `boot-all`: all 10 etappes with all 8 cars pass device setup and texture budgeting with no fatal message, without a renderer. That is a boot, not a rendering check.
- Fix check, one-off script: `0x73b4f9` reads 16777216 after boot, `game.ini` holds 16777216 after a whole race, and `TfrmDisplaySettings` then shows Maximaal and Normaal enabled.
- Fix check, one-off script: Hoog greyed, a save with 4 keeps it, Normaal gives 3, by state and screenshot.
- `RESOLUTION` 0 and 1: section 26.

## 2. Viewport, projection and matrices

**Original behaviour.** One viewport for the whole game: `dvClipX -1, dvClipY H/W, dvClipWidth 2, dvClipHeight 2H/W, dvMinZ 0, dvMaxZ 1`. At 640x480 that is x/w in -1..1 and y/w in +0.75..-0.75.

Projection `FUN_004b39d0(out, near, far, fov)`, with `c = cos(fov/2)`, `s = sin(fov/2)`, `Q = s*far/(far-near)`: rows `c 0 0 0`, `0 c 0 0`, `0 0 Q s`, `0 0 -near*Q 0`.

| Use | near | far | fov | Set by |
|---|---|---|---|---|
| Race, default | 0.5/zoom = 1.33333 | 12500 | zoom*pi = 67.5 degrees across | `0x44c305`, `zoom = 0.375` from `0x449c9c` |
| Race, `ChangeFOV` easing | 0.5/zoom | 12500 | zoom*pi | `FUN_004517f0`. `bonus.dso`: `pw_fastf` pickup goes to 0.6 in 1 s (108 degrees), then back to 0.375 in 0.5 s |
| HUD | 0.99 | 10000 | 90 degrees | `0x484337`, stored at manager `+0x48` |
| Numpad + and - | 0.5/zoom | 12500 | zoom*pi | `0x44d431`, tweak only, shipped `TWEAK_MODE=0` |

Default race numbers: `c` 0.831470, `s` 0.555570, vertical 53.234 degrees through the viewport. Matrices are row vectors, `p' = p * World * View * Proj`, +Z into the screen. The HUD saves view and projection, sets identity and its own projection, and restores both (`FUN_00485ed0`, `FUN_00486040`). The camera passes roll 0.

**Evidence.** `FUN_004c0e10`, `FUN_004b39d0` (asm `0x4b39d0` to `0x4b3a51`), `FUN_004b3a60`, `FUN_0044c200`, `FUN_004517f0`, `FUN_00474940`, `FUN_004840c0`. Notes: [`render-device.md`](../research/render-device.md) sections 3 to 6, [`hud-overlay.md`](../research/hud-overlay.md) sections 5 and 7.

**Status.**

- Confirmed: all numbers above.
- Inferred: with a 3D card too, D3D5 pixel centres sit half a pixel away from GL's. Measured on the Ramp device, and the port applies it on the 8-bit path only (section 26). The 3D-card path draws at another size and does not reproduce it.
- Unresolved: nothing here.

**Where the port implements it.** The numbers run as shipped. `SetTransform` in `source/host/directx.js` passes pointers to `D3DRenderer.setTransform` in `source/render/d3d-renderer.js`. The vertex shader `VERT` computes `uClipMap * uViewProj * world * p`. `updateClipMap` replaces the game's viewport: `setViewport` keeps the values, and of those only `dvClipY` and the size reach the shader. `dvClipY` is 0.75, except at `RESOLUTION` 0, 0.625 (section 26). z becomes `2z - w`. The first non-HUD draw of a tick captures view and projection (`noteView`), so one view applies to the whole world pass; the game only changes it for the HUD. The projection used at present is the latest tick's (`blendPalette`).

**How it was compared.** `reference-frame`: the first race frame by eye against the owner's screenshot. The matrices themselves are the same machine code. No numeric comparison of projected points was run.

## 3. Widescreen and tall views

**Original behaviour.** 4:3 only. Nothing in the game culls by aspect: no frustum, distance or screen-size test exists in the track or object draw path. The constants 4/3 and 0.75 are read by HUD code only (`0x47fe63`, `0x4805a5`, `0x484163`). The only view-angle constant in visibility is the 55 degree test in section 11. The owner's patch (`README_technical_spel.dat.md` parts 2 and 3) shows the same Hor+ scheme works in the real game by setting `dvClipX = -0.75*W/H`.

**Evidence.** `render-frame.md` section 8 "4:3 in game code". Notes: [`render-frame.md`](../research/render-frame.md) sections 8 and "Wider screens", [`hud-overlay.md`](../research/hud-overlay.md) inferred section B.

**Status.**

- Confirmed: no culling by aspect, in the functions listed in `render-frame.md` section 8.
- Inferred: the 55 degree test leaves more of the chunk window's end visible on wide shapes. The table in `render-frame.md` is geometry only.
- Unresolved: the visual effect of out-of-window chunks on wide screens.

**Where the port implements it.** `D3DRenderer.updateClipMap`, with `A` the shape of the 3D area:

```
wider  (A >= 4/3): xr = 0.75*A, yr = 0.75
taller (A <  4/3): xr = 1,      yr = 1/A
x_ndc = (x/w)/xr, y_ndc = (y/w)/yr
```

Those values of `yr` are for `dvClipY` 0.75. In general `yr` is `dvClipY`, or `dvClipY*(4/3)/A` on taller shapes: `RESOLUTION` 0 has 0.625, and on 4:3 its y is stretched 1.2 (section 26).

**At exactly 4:3** the map gives `xr = 1`, `yr = 0.75`: x untouched, y divided by 0.75. That is the same mapping the original viewport gives, so the framing is the original's. The HUD shift `dx`, `dy` in `HudLayout.setShape` (`source/host/hud-layout.js`) is 0 as well.

| Shape | xr | yr | Across, default | Up, default | Across, `pw_fastf` | Up, `pw_fastf` |
|---|---|---|---|---|---|---|
| 4:3 | 1 | 0.75 | 67.50 | 53.23 | 108.00 | 91.82 |
| 16:10 | 1.2 | 0.75 | 77.45 | 53.23 | 117.61 | 91.82 |
| 16:9 | 1.3333 | 0.75 | 83.40 | 53.23 | 122.83 | 91.82 |
| 800x360 | 1.6667 | 0.75 | 96.15 | 53.23 | 132.89 | 91.82 |
| 21:9 | 1.75 | 0.75 | 98.93 | 53.23 | 134.91 | 91.82 |
| 5:4 | 1 | 0.8 | 67.50 | 56.25 | 108.00 | 95.51 |
| 1:1 | 1 | 1 | 67.50 | 67.50 | 108.00 | 108.00 |
| 5:6, touch portrait limit | 1 | 1.2 | 67.50 | 77.45 | 108.00 | 117.61 |
| 2:3, portrait limit without touch | 1 | 1.5 | 67.50 | 90.13 | 108.00 | 128.31 |

Area: `RaceRunner.layout` in `source/race-runner.js`. The whole window, except in portrait (`ch > 1.15 cw`): top part, height `min(0.62 ch, 1.2 cw)` with touch, `min(ch, 1.5 cw)` without. The finish flag grows with the view: section 19.

**How it was compared.** `check-race-ui` covers sizes only: Auto gives 1600x720 at 800x360 DPR 2, portrait at 360x800 gives 720x864, and back. `reference-frame` compared one frame with a 4:3 screenshot of the original, and the check does not say the port ran at 4:3 for it, so the framing at exactly 4:3 rests on the arithmetic above. No wide or tall view has an original to compare with.

## 4. Vertex types and vertex data

**Original behaviour.**

| Draw type | Used by |
|---|---|
| 1 `D3DVERTEX` | Nothing reachable: no writer sets mesh type 1 (`FUN_004bc8c0`, `FUN_004bcca0`, `FUN_004bca20`) |
| 2 `D3DLVERTEX` | All meshes, track, every effect |
| 3 `D3DTLVERTEX` | Radar only, whose draw `0x4426a0` has no reference |

`D3DLVERTEX` as written: `+0` xyz, `+0x10` color, `+0x14` specular, `+0x18` tu, `+0x1c` tv, stride 32. `.d3d` files: 33-byte records (colour `0x00FFFFFF`, alpha 0, specular 0) or 49-byte records (`ftol(a*255)<<24 | ftol(r*255)<<16 | ...`). 1,847 of the 1,971 models in `rcs.img` use the 49-byte form; 90,728 vertices have alpha 1.0. The car update's 17 loose `tru*.d3d` are not in those counts. Disk normals never reach a vertex. `.rmp` track vertices: `x y z u v R G B x`, colour `0x00RRGGBB`, so alpha is 0 on every track vertex. All geometry is `DrawPrimitive` or `DrawIndexedPrimitive`; prim 4 list, 5 strip, 6 fan, 2 line list (debug and rain only). Flags are 8, 1 or 0.

Winding: `cross(v1-v0, v2-v0)` agrees with the file normals on 93,969 of 99,089 determinate triangles. `0_stoplg.d3d` and `0_stoplr.d3d` score lowest (33%).

**Evidence.** `FUN_004be590`, `FUN_004be340`, `FUN_004b31a0`, `FUN_004ac310`, `FUN_004ae1f0`. Notes: [`render-device.md`](../research/render-device.md) sections 6 to 9, [`render-frame.md`](../research/render-frame.md) sections 1, 2 and 7.

**Status.**

- Confirmed: layouts and counts, parsed from all shipped files with every byte accounted for.
- Inferred: 18 vertices in `e03_dacg.d3d` and `e03_whau.d3d` have alpha outside 0..1. Their effect depends on `__ftol` low bits.
- Unresolved: the purpose of the ignored bytes (33rd or 49th vertex byte, last 3 triangle bytes). Readers of the array at mesh `+0x88`: `FUN_004518e0` (dead) is the only one seen.

**Where the port implements it.** Vertex builders run as shipped. In `source/render/d3d-renderer.js`: `copyVerts` copies the 32-byte records at draw time, so per-draw colours and UVs are kept. `staticVerts` uploads vertex arrays of at least 512 vertices with an identity world only once: the track. `drawPrimitive` turns strips and fans into triangles with the original winding and drops lines and points. The `vtype === 1` branch of `copyVerts` and the `screen` path of `VERT` for type 3 exist but nothing reaches them.

**How it was compared.** `reference-frame` by eye. No per-vertex comparison.

## 5. Render states, Z, Z-bias and culling

**Original behaviour.** A scan of `SetRenderState` sites finds only these states. There is no `CULLMODE`, `ZFUNC`, `ALPHATEST`, `SPECULARENABLE` or `FOGTABLE*` call anywhere.

| State | Values | Port (`source/render/d3d-renderer.js`) |
|---|---|---|
| 1 `TEXTUREHANDLE` | handle from table `0x73b1b0` | `SetRenderState` in `directx.js` resolves the surface; `texInfo` reads its id at draw time |
| 4 `TEXTUREPERSPECTIVE` | 1, once | Always perspective in GL |
| 7 `ZENABLE` | 1, once; set to 1 again after the flag and HUD. Set to 0 only in dead rain code | `pipelineKey` bit 9, `depthTest` |
| 8 `FILLMODE` | 1, 2 only if mesh `+8` is 1 or 2; else default 3 | Ignored |
| 9 `SHADEMODE` | 2 Gouraud | Always smooth interpolation |
| 14 `ZWRITEENABLE` | 0 in the alpha queue except mode 3, then 1 | `pipelineKey` bit 10, `depthWrite` |
| 17, 18 `TEXTUREMAG`, `MIN` | 1, 2, or 3, 4, 6 with mips | `pipelineKey` bit 18 from `TEXTUREMAG`, uniform `uNearest`; see section 24 |
| 19, 20 `SRCBLEND`, `DESTBLEND` | 2, 4, 5, 6, table `0x5afa50`, per effect | `pipelineKey`, table `BLEND` |
| 21 `TEXTUREMAPBLEND` | 1, 2, 7 | `pipelineKey` bits 14 to 16, shader `uMapBlend` |
| 27 `ALPHABLENDENABLE` | 0, 1 | `pipelineKey` bit 0 |
| 28, 34 `FOGENABLE`, `FOGCOLOR` | off, `0xFFFFFF` as shipped | Section 7 |
| 41 `COLORKEYENABLE` | 1, once | Shader discard is always on |
| 47 `ZBIAS` | 1 around both shadow draws, else 0 | `polygonOffset`, factor -1, units -2, in `materialFor` |

Z buffer: 16 bits (`FUN_004c0610`), near 1.33 to far 12500. Default D3D `ZFUNC` and `CULLMODE` apply.

**Evidence.** `FUN_004bb7a0`, `FUN_004bc200`, `FUN_0044bbf0`, `FUN_004a74f0`, `FUN_00443770`, `FUN_00443ef0`, `FUN_004be340`, scan of `+0x5c` sites. Notes: [`win32-surface.md`](../research/win32-surface.md) C3 "Render states used", [`render-device.md`](../research/render-device.md) sections 6 and 13.

**Status.**

- Confirmed: state numbers, values and sites.
- Inferred: `D3DCULL_CCW` and `LESSEQUAL` as defaults, from the SDK. Cross-product agreement in section 4 fits front = clockwise on screen. A D3D5 `ZBIAS` of 1 has no defined size in depth units; the port's offset is a choice.
- Unresolved: who writes mesh `+8`. A text search of the mesh functions finds no writer. If one exists it would show points or wireframe in the original, and solid in the port.

**Where the port implements it.** The state stream is the recompiled code's. `setRenderState` stores it, `pipelineKey` turns it into a batch key at each draw. `side: THREE.BackSide` in `materialFor` makes Three.js set `frontFace(CW)` with back-face culling: the same pixels as `D3DCULL_CCW`. Three.js defaults to `LessEqualDepth`. Depth is 24 bits where the browser gives it, recorded in [`../intentional-differences.md`](../intentional-differences.md).

**How it was compared.** `reference-frame` by eye. No state-by-state comparison was run. A trace of the state calls would be the same machine code by construction.

## 6. Blending: map blend and alpha modes

**Original behaviour.** `TEXTUREMAPBLEND` is set at four sites and never per pass: 1 at device creation, 2 once for hardware (`0x44bc4d`), 7 for 8-bit modes (`0x44bc25`), 7 again when `FOG=1` wins its coin toss (`0x43d476`). So in `RESOLUTION=3` everything draws with 2, `MODULATE`.

Object3d `+0xa5` alpha mode, table `0x5afa50`:

| Mode | SRC, DEST | ZWRITE | Used for |
|---|---|---|---|
| 0 | ONE, ZERO | unchanged | Blend off, drawn at once. Default from ctor `0x4b574c` |
| 1 | SRCALPHA, INVSRCALPHA | 0 | Car reflection `0x437254`, HUD `0x47ce69` |
| 2 | ONE, INVSRCCOLOR | 0 | Car lights `0x436318`, `0x436c8b` |
| 3 | SRCALPHA, INVSRCALPHA | 1 | Set in vehicle setup `0x431630` when `alpha_blending` and hardware 3D |

Modes 1 to 3 queue the object on `0x715b28`: FIFO, no sort, at most 200 entries, drawn after the opaque pass.

Effects set their own state: shadows and particles SRCALPHA, INVSRCALPHA; skid marks **INVSRCALPHA, SRCALPHA**, the only live use of that pair; `gfx_wolk` SRCALPHA, ONE; flag and `gfx_bwlk` SRCALPHA, INVSRCALPHA. `alpha_blending=0` (`Transparante effecten` off) gates nearly all of these and, with hardware 3D, turns `clouds` off through `FUN_00446e80`.

**Evidence.** `FUN_004bb7a0`, `FUN_0044bbf0`, `FUN_0043d3c0`, `FUN_004a74a0`, `FUN_004a74f0`, `FUN_004b5b10`, `FUN_00445180`, `FUN_00446fe0`, `FUN_00440160`, `FUN_0043de00`. Notes: [`render-device.md`](../research/render-device.md) sections 13 and 14, [`render-frame.md`](../research/render-frame.md) sections 1 and 4.

**Status.**

- Confirmed: all sites and table values. `COPY` on the Ramp device: the texel's palette index goes to the target, with no vertex colour or alpha, on textured draws. Read from the frames of `reference-86box`, section 26.
- Inferred: `MODULATE` gives `rgb = tex.rgb * vertex.rgb` and alpha from vertex alpha, because the textures have no alpha format. `DECAL` is never visible, since no `BeginScene` runs before `FUN_0044bbf0`.
- Unresolved: nothing beyond the fog path in section 7.

**Where the port implements it.** State and queue run as shipped. Fragment shader `FRAG` in `source/render/d3d-renderer.js`: `uMapBlend == 2` gives `vec4(t.rgb * vColor.rgb, vColor.a)`, value 7 falls to `vec4(t.rgb, 1.0)`. The 8-bit path has its own shader, `FRAG_INDEXED` (section 26). Discard tests the texture's key mask only, so alpha-0 skid marks stay visible, as the owner's patch notes (part 6, item 4) require. `materialFor` maps the factors with `CustomBlending` and leaves `transparent` off, so blended batches stay in capture order: section 9.

**How it was compared.** `reference-frame` by eye for what shows in that frame: car lights and shadow. Copy mode: `reference-86box`, section 26. No other comparison was run.

## 7. Fog

**Original behaviour.** There are no per-track fog values and no `FOGTABLE` state. `[OPTIONS] FOG` ships 0 and `menu.exe` has no such string, so only a hand edit of `game.ini` turns it on. With `FOG != 0` and `rand() & 1` at start, `FUN_00457040` runs: `FOGENABLE 1`, colour `0xB4B4C8`, mode 3 linear, start 3.5, end 1000, density 0.8. With `FOG == 1` map blend also becomes 7. Trigger 16 and 17 fog functions occur 0 times in the ten `.pmp` files. `FogOn`, `FogOff` in `etappeN.ini` are editor labels with no string in `spel.dat`. Specular alpha is 0 on nearly every vertex and no builder computes a fog factor.

**Evidence.** `FUN_0043d3c0` (`0x44c722`), `FUN_00457040`, `FUN_00456d90`, `FUN_00456d40`, `FUN_00457370` (dead), `FUN_0043b280` (dead), parse of all `.pmp`, `etappe9.pmp` since the track update. Notes: [`render-device.md`](../research/render-device.md) sections 11 and 12. `game.ini` comment: "conflicts with alpha blending".

**Status.**

- Confirmed: with shipped data `FOGENABLE` stays 0 on all tracks.
- Inferred: fog would be D3D vertex fog on view z, `f = (end - z)/(end - start)`.
- Unresolved: whether a D3D5 HAL on period drivers computes that factor for `D3DLVERTEX` and overwrites specular alpha.

**Where the port implements it.** Off on all shipped paths. The recompiled code still sends the states. Hand-edited fog is deliberately not supported: `FRAG` mixes fog by specular alpha, which is 0 nearly everywhere, so `FOG=1` or `2` would give a flat colour rather than linear fog. `setLightState` stores fog mode, start, end and density and nothing reads them. `setBackground` is a no-op.

**How it was compared.** No comparison was run. Nothing to compare on shipped data.

## 8. Materials, lights, ambient light and car colour

**Original behaviour.** No D3D lighting: no type-1 mesh, no `CreateLight` site, `SetLightState` only with 1, 4, 5, 6, 7. `[world] lighting=3` in `etappeN.ini` is not read. `SetMaterial` has 26 sites; nothing the game draws takes its colour from a material.

Track and scenery use baked vertex colours, never changed after load. Cars are lit by the game itself in `FUN_004a8200`, called from `FUN_004a8cb0` when owner `+0x1c` has bit 1 and owner `+0x48 == -1`:

```
sample = 3rd vertex colour of the track triangle under the car   (FUN_004ad3d0, FUN_004ad710)
t = dt * (|owner+0xC4| * 0.1 + 1.0)                              (no clamp on t)
c.rgb += (sample.rgb - c.rgb) * t                                (c = owner+0x4C, starts 0xFFFFFFFF)
out.rgb = min(c.rgb + ambient, 255), out.a = c.a                 written to all vertices of the mesh
```

Ambient per track, `raser.ini [MAPS]` args 11 to 13: etappe 0 50; 1 70; 2 128; 3 128; 4, 5, 6, 7 70; 8 60; 9 66, a row already on the disc, reachable since the track update; R = G = B on all. Rows 10, 11 (128) exist with no reachable track. Other writers: `FUN_00431140` car fade alpha, `FUN_004a8030` script colour, `FUN_00443ef0` blob, `FUN_004a8660` damage vertices, `FUN_0047d1f0` HUD. `object_lights` (`0x6fb930`) has one reference, the read from `game.ini`, and gates nothing.

**Evidence.** `FUN_004a8200`, `FUN_004a8100`, `FUN_004a8cb0`, `FUN_0044a690` (`0x44a974`), `FUN_0044c200` (`0x44c7c5`), `FUN_004a7230`, `FUN_00449b30`. Notes: [`render-device.md`](../research/render-device.md) section 10, [`render-frame.md`](../research/render-frame.md) section 7, [`win32-surface.md`](../research/win32-surface.md) C3 `IDirect3D2`.

**Status.**

- Confirmed: all of the above.
- Inferred: `D3DLVERTEX` carries its own colour, so with no lights a material could only affect the viewport background, which is part of the fog path. `setcolor`, `SetColor` in `bonus.dso` are probably `FUN_00473db0`, `FUN_00473de0`.
- Unresolved: nothing else here.

**Where the port implements it.** Runs as shipped in the recompiled code. The host supplies `raser.ini` through the VFS and captures colours at draw time, which matters because cars of one type can share a mesh and `FUN_004a8200` rewrites that memory right before each car's draw (`copyVerts`). `IDirect3DMaterial2` in `source/host/directx.js` stores values. The renderer uses none of them.

**How it was compared.** Same machine code for the colour logic, within the f64 limit. `reference-frame` by eye for etappe 0. `boot-all` loads the `[MAPS]` values of all 10 etappes without a renderer. Dynamic car colour over time was not compared.

## 9. Frame order and batching

**Original behaviour.** `render_game` `FUN_0044da30`, inside one `BeginScene`:

| # | Pass | Function | Blend, Z |
|---|---|---|---|
| 1 | Z clear only | `FUN_004c0840(0)` | |
| 2 | Track: road, land, extra, rail | `FUN_004aec50` | off, Z on |
| 3 | Sky | `FUN_0043d4f0` | off, Z on. Fills what the track left, through Z |
| 4 | Car shadows (object pass 1) | `FUN_00443710` | SRCALPHA, INVSRCALPHA, ZBIAS 1, Z write on |
| 5 | Objects, car bodies, wheels with mode 0 | `FUN_004a9a20` pass 2 | off, Z on |
| 6 | Alpha queue | `FUN_004a74f0` | per mode, ZWRITE per mode |
| 7 | Particles | `FUN_0045dce0` | SRCALPHA, INVSRCALPHA |
| 8 | AI debug lines | `0x40aaf0` etc. | gated off |
| 9 | HUD | `FUN_004882f0` | own view and projection, Z write on |
| 10 | Skid marks | `FUN_00445180` | INVSRCALPHA, SRCALPHA |
| 11 | `gfx_wolk` | `FUN_00446fe0` | SRCALPHA, ONE |
| 12 | Finish flag | `FUN_00440160` | SRCALPHA, INVSRCALPHA |
| 13 | `gfx_bwlk` | `FUN_0043de00` | SRCALPHA, INVSRCALPHA |

The HUD draws before skid marks, smoke, flag and `bwlk`. It stays on top by depth: HUD depth is about 0.01 at z = 1, and those late effects fail the Z test where the HUD wrote depth. Shadows draw before the opaque objects and write Z.

**Evidence.** `FUN_0044da30`, `FUN_0044cb80`, `FUN_004a99a0`, `FUN_00484fc0`. Notes: [`render-frame.md`](../research/render-frame.md) section 1 and "Batching limits", [`hud-overlay.md`](../research/hud-overlay.md) section 2 and inferred section D.

**Status.**

- Confirmed: the order and the states.
- Inferred: where semi-transparent HUD parts cover a late effect, the original shows no effect through them. That follows from Z write staying on; it has not been seen.
- Unresolved: real per-frame draw counts on the original. The port's count on Amsterdam at the end of the `benchmark` run is 221 matrices, 10 batches, 4070 copied vertices and 13191 indices (`evidence/performance/final-8x.json`).

**Where the port implements it.** The call order is the recompiled code's. In `source/render/d3d-renderer.js`, consecutive draws with the same `pipelineKey` merge into one batch (`batch`), since textures and world matrices are selected per vertex. `materialFor` does not set `transparent`, and `sortObjects` is false, so Three.js draws all world batches in capture order: track, sky, shadows, objects, alpha queue, particles, skid marks, smoke, flag, `bwlk`.

One intentional difference: HUD batches go to `sceneHud` and `present` draws them last, after `clearDepth`, at native size, so the HUD stays sharp at any render scale. So the HUD covers the late effects by order instead of depth: skid marks, smoke, the flag and `bwlk` show through semi-transparent HUD parts such as racer portraits at alpha `0xb4`, where the original's Z test keeps them out, and no world geometry can cover a HUD part. The 8-bit path keeps that order, with the HUD on its own target on the mode's grid (section 26).

**How it was compared.** `reference-frame` by eye for one frame. `check-flow` ran a whole race with zero console errors, which says nothing about order on screen. Fix check, one-off script: GL draw calls logged for one frame match the capture order exactly, with shadows before objects and 0 materials marked transparent. That compares the port with its own capture, whose order is the same machine code; no draw order was compared with a run of the original.

## 10. Clear behaviour and presenting

**Original behaviour.** `Viewport.Clear` with Z only each frame: the colour target is not cleared. A pixel nothing covers keeps the previous frame. `Flip` is the only present call. Around pause and quit, `FUN_0044cb80` flips twice with nothing drawn, then the thread spins on the keyboard: the picture stays frozen.

Colour fills: the flitser, at 16 bits, calls `FUN_0043b130` after `render_game` and before the flip. `FUN_004c4f70`, `FUN_004c4e00` do `Blt` with flags 0x1000400 (WAIT, COLORFILL) on the back buffer, colour `FUN_004c81b0(0xF, 8)`, `0xFFFF` in the race. One full frame is white. At 8 bits the flitser writes the palette instead (section 26). Fills with colour 0 clear the screen at start-up and exit (`FUN_004c4fa0`, `FUN_00448160`).

Loading: `FUN_004415e0` per progress step stretches the `wait_hi` picture to the back buffer, draws the HUD with `OVL_PROGRESS_BAR`, and flips. `raser.ini [progress]` gives 10, 20, 30, 40, 50, 60, 60, 70, 80, 90, 100.

**Evidence.** `FUN_004c0840`, `FUN_004c0780`, `FUN_004c41e0`, `FUN_0044df10`, `FUN_0043b130`, `FUN_004415e0`, `FUN_004416f0`, `FUN_00488ef0`. Notes: [`win32-surface.md`](../research/win32-surface.md) C3 `IDirect3DViewport2`, C4, [`render-frame.md`](../research/render-frame.md) sections 1 and 8, [`hud-overlay.md`](../research/hud-overlay.md) sections 11a and 12, [`gameplay-systems.md`](../research/gameplay-systems.md) section 13.

**Status.**

- Confirmed: Z-only clear, present path, the fill and its colour, loading path.
- Inferred: sky corners of track 5 reach about 14768 units, beyond far 12500, so they can clip and the previous frame would show there.
- Unresolved: how often gaps show in the original.

**Where the port implements it.** In `source/render/d3d-renderer.js` and `source/race-runner.js`:

- With a 3D card `present` clears to black each frame, recorded in [`../intentional-differences.md`](../intentional-differences.md). The 8-bit path keeps the colour, as the original (section 26).
- `Flip` ends a capture (`endFrame`), and a flip with nothing drawn is ignored, so a dialog stays over the last frame.
- `RaceRunner.frame` passes alpha 1 to `present` while `race.pause` is set or the race has ended, and `endWait` does too. The picture under a dialog stays on its key's tick at any display rate. `blendPalette` also runs at alpha 1, so moving vertices left blended by an earlier present of that tick return to the tick's own values.
- `fillScreen` stores a non-zero colour and `present` fills the 3D area with a scissored clear after the HUD (`drawScreenFill`). It shows at least once, until the next tick has flipped, or for one tick's time when ticks have stopped. So the white frame lasts one tick: one display frame at 60 Hz or lower, about 16.7 ms above that, which is shorter than a frame on a period machine at 25 to 30 FPS.
- Colour-0 fills at start-up and exit are deliberately not drawn: the page swaps canvases at those moments, and the last frame stays up while `RaceRunner.endWait` waits for Esc, Enter and Space to be released.
- `blitToScreen` does nothing here. On the 8-bit path it records the sky (section 26). The race's own loading frames never reach the screen, on either path, because `race.boot()` is synchronous. The page shows `#loading`, with the wait picture as PNG and the bar frames as PNG at the original rectangle: [`hud.md`](hud.md), "wait screen". The bar's frame follows the file download, not `[progress]`, and stands on the last frame while the game boots.

**How it was compared.**

- `check-race-ui`, `pause: the picture stays still`: 98 frames under a pause dialog, all presented at alpha 1. It reads the alpha, not pixels.
- `check-race-ui`, pause and quit: keys and clocks.
- Fix check, one-off script, on the flitser: a real one on the bot's route at tick 20720 put `0xFFFF` on the back buffer. Forced through `FUN_0043c120`, with pixels read back per present: 144 Hz stand-in 2 to 3 white presents over 13 to 21 ms; 60 Hz 1 present, 16.5 ms; 30 Hz and 20 Hz 1 present. At render scale 50 all sample points were white for one present. With ticks stopped right after the fill: 2 presents, then cleared. A whole race made three fills: one white and two black at exit. The other caller, `FUN_0043b7ea`, has no reference in a raw scan of `spel.dat`.
- No comparison with the original was run.

## 11. Draw distance and visibility

**Original behaviour.** Only a window of chunk indices decides visibility. There is no frustum test, distance test or screen-size test, and no model LOD (`spel.dat` has no hi/lo model logic; `ltr_h.d3d`, `ltr_l.d3d` exist but no INI names them).

`N` = `[OPTIONS] VISIBLECHUNKS`, at least 10, shipped 25. `c` = camera chunk. `d` = dot of chunk forward and camera look, in 3D.

| Condition | Meaning | Start | Window at N = 25 |
|---|---|---|---|
| `d > 0.5736` | within 55 degrees of forward | `c - 2` | `c-2 .. c+23` |
| `-0.5736 <= d <= 0.5736` | sideways | `c - N/2` | `c-12 .. c+13` |
| `d < -0.5736` | within 55 degrees of backward | `c - N + 2` | `c-23 .. c+2` |

The range is inclusive, so N + 1 chunks. A chunk is about 128 units, so 2944 units ahead at most. Far plane 12500 does not limit it. `FUN_0044cb30` drops N by 1 per frame below 10 FPS, only above 25 in hardware, so never at shipped 25, and above 15 on the 8-bit path (section 26). Track, objects and shadows use this window. Object update uses `2N`.

**Evidence.** `FUN_0044df70` (asm `0x44e04b` to `0x44e0a4`, `[0x5767d0]` 0.5736), `FUN_004af520`, `FUN_0044a630`, `FUN_0044cb30`, `FUN_004a9870`. Notes: [`render-frame.md`](../research/render-frame.md) section 8.

**Status.**

- Confirmed: the table and the limits.
- Inferred: objects per window, using nearest `.pmp` chunk as a stand-in for `+0x34`.
- Unresolved: all setters of `obj+0x54`, `obj+0x5c`, used as draw filters.

**Where the port implements it.** Runs as shipped. The host only draws what the game asks for. `frustumCulled = false` on all batch meshes (`syncMeshes`), so Three.js adds no culling of its own. `VISIBLECHUNKS` stays at the shipped 25, on the 8-bit path too, because `1/dt` is 60. `?chunks=N` with `?race=1` sets it for a comparison. Recorded in [`../intentional-differences.md`](../intentional-differences.md): the 55 degree test on very wide shapes.

**How it was compared.** Same machine code. No comparison of what is visible was run, other than `reference-frame` and the `reference-wine` frames, by eye, and on the 8-bit path `reference-86box` with `?chunks=15` (section 26). `repeat-trace` shows game state does not change between the render profiles it ran; it does not look at the window.

## 12. Track

**Original behaviour.** `FUN_004aec50` calls `FUN_004af520` for one or two chunk ranges, then `FUN_004aecd0` per range: up to 4 indexed draws, world identity, tri lists.

| Pass | `.rmp` list | Max quads per chunk | Texture from `[MAPS]` | Flag |
|---|---|---|---|---|
| 1 | road | 16 | `e0N_weg` | 8 |
| 2 | land | 24 | `e0N_gras` | 8 |
| 3 | extra | 12 | `e0N_gra2` | 8 |
| 4 | rail | 12 | `e0N_vang` | 1 |

`nverts` is the whole pass on every call; the largest is etappe 8 land, 44708 vertices. Quads share no vertices. Vertex arrays are written at load only: no runtime writer. Colours are baked per track; alpha is 0. Blend stays off because every earlier frame ends with blend off.

| Etappe | Chunks | Road | Land | Extra | Rail | Tris |
|---|---|---|---|---|---|---|
| 0 Amsterdam | 363 | 2352 | 3597 | 416 | 976 | 14682 |
| 1 Rotterdam | 507 | 3987 | 4886 | 780 | 1456 | 22218 |
| 2 Scheveningen | 400 | 1872 | 4914 | 36 | 1755 | 17154 |
| 3 Wenen | 645 | 4241 | 7898 | 2442 | 1216 | 31594 |
| 4 Berlijn | 634 | 6576 | 5490 | 1269 | 2201 | 31072 |
| 5 Hamburg | 326 | 2376 | 2758 | 841 | 635 | 13220 |
| 6 Frankfurt | 334 | 3587 | 1551 | 1641 | 553 | 14664 |
| 7 BodenSee | 477 | 2666 | 6476 | 565 | 736 | 20886 |
| 8 Munchen - Wenen | 607 | 2752 | 11177 | 316 | 4069 | 36628 |
| 9 Country etappe | 401 | 1747 | 4153 | 861 | 1263 | 16048 |

**Evidence.** `FUN_004aecd0` (asm `0x4aed05`), `FUN_004aba30`, `FUN_004b31a0`, parse of all ten `.rmp`, `etappe9.rmp` since the track update, bytes consumed equal file size. Notes: [`render-frame.md`](../research/render-frame.md) sections 2 and 7, [`render-device.md`](../research/render-device.md) section 9.

**Status.**

- Confirmed: all of the above.
- Inferred: nothing.
- Unresolved: whether track specular `+0x14` holds a defined value. It does not matter with fog off.

**Where the port implements it.** Logic runs as shipped. `staticVerts` in `source/render/d3d-renderer.js` uploads each pass once to the top of the vertex buffer. Per frame only index ranges are copied. Static upload can be turned off with `?nostatic`.

**How it was compared.** `reference-frame` by eye for etappe 0. `boot-all` for loading all 10. The other tracks' pictures were not looked at, apart from the launch check's screenshots of etappe 9. `benchmark` on the same route: 4070 instead of 31770 vertices uploaded per frame, tick mean 7.19 instead of 7.47 ms, present mean 0.65 instead of 0.85 ms, 60 FPS in both. That is a cost measurement, not a picture check.

## 13. Sky

**Original behaviour.** Hardware path only. `FUN_0043d230` creates one object from model `SKY`, scale (10, 4, 10). `FUN_0043d4f0` per frame: identity with that scale, translation = camera position, then `FUN_004b5b10`: opaque, Z test and write on, drawn after the track. The sky turns on screen only through the view matrix. No UV change. All vertices white, alpha 1.0. `skybox00` to `09`: 14 to 49 vertices, x and z up to about 1071, y from -451 to 1260 unscaled. The software path instead blits `[MAPS]` `scrl_lo`, `scrl_hi` (section 26).

| Etappe | Mesh, texture | Reflection for cars |
|---|---|---|
| 0 Amsterdam | `skybox00`, `sky00` | `skyref02` |
| 1 Rotterdam | `skybox01`, `sky01` | `skyref01` |
| 2 Scheveningen | `skybox02`, `sky02` | `skyref02` |
| 3 Wenen | `skybox03`, `sky03` | `skyref02` |
| 4 Berlijn | `skybox04`, `sky04` | `skyref02` |
| 5 Hamburg | `skybox05`, `sky05` | `skyref05` |
| 6 Frankfurt | `skybox06`, `sky06` | `skyref06` |
| 7 BodenSee | `skybox07`, `sky07` | `skyref02` |
| 8 Munchen - Wenen | `skybox08`, `sky08` | `skyref08` |
| 9 Country etappe | `skybox09`, `sky09` | `skyref02` |

**Evidence.** `FUN_0043d3c0`, `FUN_0043d230`, `FUN_0043d4f0`, `FUN_004b4360`, `eNN_anim.ini [sky]`, `[car_reflect]`. Notes: [`render-frame.md`](../research/render-frame.md) section 3, [`render-device.md`](../research/render-device.md) section 14, [`game-content.md`](../research/game-content.md) section 1.2.

**Status.**

- Confirmed: all of the above.
- Inferred: the far plane can clip corners on track 5. The previous frame would then show in the original and black in the port.
- Unresolved: nothing else.

**Where the port implements it.** Runs as shipped. The draw arrives as an indexed draw with a world matrix; the world row and the view blend between ticks.

**How it was compared.** `reference-frame` by eye for etappe 0. `boot-all` for loading all 10 etappes.

## 14. Objects, cars, wheels, car lights and reflection

**Original behaviour.** Object table `0x715e50`, stride `0xf0`, 2500 slots, scanned twice per frame up to the highest used slot. Filter: `+0x5c != 0`, used, `+0x34` inside the chunk window, `+0x54 != 0`. For one object `FUN_004a8cb0`: damage mesh override; cached-pipeline `Load` (section 23); car colour if `+0x1c & 2`; draw or queue by mode; then each sub-object.

| Sub-object | Function | Mesh | Mode |
|---|---|---|---|
| Body | own instance | | 0 |
| 0-3 wheels | `FUN_00435760` | car frame 1 | 0 |
| 4-7 lights, `LIGHT_POSITIONS` | `FUN_00436170` | car frames 3, 4, on `s_sfx` | 2 if `alpha_blending` |
| 8 reflection | `FUN_004370f0` | car frame 2 mesh, `CAR_REFLECT` texture | 1 if `alpha_blending` |

Reflection UVs are rewritten per car tick (`FUN_00437370`): reflection vector, `0.5 + 0.5*(r.x, r.z)`. Timed animations swap meshes (`anmtypes.ini`, 14 groups); no UV scroll exists in Animsys. Damage writes vertices into a per-object clone (`FUN_004a8660`). `FUN_00431140` fades frame 2 alpha.

**Evidence.** `FUN_004a99a0`, `FUN_004a9a20`, `FUN_004a8cb0`, `FUN_004353e0`, `FUN_00426280`, `FUN_00436510`. Notes: [`render-frame.md`](../research/render-frame.md) sections 4, 5 and 7, [`render-textures.md`](../research/render-textures.md) section 12.

**Status.**

- Confirmed: table, filter, sub-objects, UV and colour writers.
- Inferred: instance `+0x90` toggles which sub-objects draw, through five functions not traced one by one.
- Unresolved: whether cars of one type share one mesh in all cases. The port captures per draw, so it does not depend on the answer.

**Where the port implements it.** Runs as shipped. `drawIndexed` in `source/render/d3d-renderer.js` copies vertices per draw, so per-car colour, UV and damage arrive as written.

**How it was compared.** Same machine code. `reference-frame` by eye for the player's car and scenery at the start line of etappe 0. Traffic, cops, damage and pickups were never looked at against the original.

## 15. Shadows

**Original behaviour.** Called from object pass 1 through `FUN_00443710`.

| Case | Function | Behaviour |
|---|---|---|
| Player's car, or its linked object | `FUN_00443770` | 4 corners placed on the track; 4 calls to `FUN_00443100` clip land, road and rail planes against a beam volume; each polygon goes through `FUN_0047b110`: heap vertices, colour `0x80000000`, specular `0xFF000000`, texture `S_SHADOW.PCX`, fan. World identity, blend on if `alpha_blending`, `ZBIAS` 1 |
| Any other object with a shadow | `FUN_00443ef0` | Blob, only if chunk distance to the player is below 6. One shared instance with a 4-vertex mesh; position and grey colour rewritten per object; ARGB bytes all (R+G+B)/3 of `owner+0x4C`. `ZBIAS` 1 |

**Evidence.** `FUN_00443710`, `FUN_00443770` (lines at `0x443da4` to `0x443e9e`), `FUN_00443ef0` (`0x444581` to `0x444637`), `FUN_0047b110`, `FUN_004a7200`, `FUN_0042a740`. Notes: [`render-frame.md`](../research/render-frame.md) section 5, [`render-device.md`](../research/render-device.md) section 14.

**Status.**

- Confirmed: both paths.
- Inferred: `ZBIAS` needs a polygon offset in a WebGL host.
- Unresolved: why the player's shadow keeps specular alpha 0xFF when other vertices use 0.

**Where the port implements it.** Runs as shipped. `ZBIAS` becomes `polygonOffset` (`materialFor`). Shadow batches draw before the objects, in capture order (section 9). `drawIndexed` records moving vertices for 4-vertex draws with `ZBIAS`, so blob shadows blend with their cars (section 27).

**How it was compared.** `reference-frame` by eye for the player's shadow at the start line. With a 3D card blob shadows were not looked at against the original. On the 8-bit path they were: section 26. Fix check, one-off script: with blob shadows recorded, 67 of 3842 vertex pairs in 1168 ticks were more than 30 units apart, which is why each moving draw now has a first-vertex distance test.

## 16. Particles

**Original behaviour.** Linked emitters `0x709980`, types from `FUN_0045d170`: 1 Spark, 2 Leaf, 3 Bird, 4 Mail, 5 Trash, 6 Paper, 7 CarPart, 8 Dirt, 9 Dirtpiece, 10 Water, 11 Waterwave. Creation gated by `particles` (shipped 1, though the `game.ini` comment calls it unused). `FUN_0045dce0` turns blend on when `alpha_blending`, draws each emitter through vtable `+4`, then blend off. Generic emitter `FUN_0045ec30`: per particle a world `SetTransform` and a mesh draw, no sort. Spark `FUN_0045fd50`, `FUN_00460070`: world = emitter `+0x10`, 4 vertices on the stack, strip. `part_rain` has no visible effect: rain's draw `FUN_00462cf0` is only reachable from `FUN_004625e0`, which has no reference. `gfx_sprk` (`0x445ec0`, `0x4460d0`) also has no caller.

**Evidence.** `FUN_0045dc00`, `FUN_0045dce0`, `FUN_0045ec10`, `FUN_0045ec30`, `FUN_0045fd50`, `FUN_00462cf0`, raw scan of `spel.dat` for references. Notes: [`render-frame.md`](../research/render-frame.md) section 6, [`gameplay-systems.md`](../research/gameplay-systems.md) section 17.

**Status.**

- Confirmed: types, draw path, dead code.
- Inferred: nothing.
- Unresolved: particle and spark vertex colours were not traced. Typical active counts per type. Emitter sizing.

**Where the port implements it.** Runs as shipped. `GUARDED` in `tools/recomp/replacements.py` keeps the original's catch-and-continue around particle functions (the host's JavaScript `try/catch` in `source/host/hooks.js`). Drawn through `drawIndexed` and `drawPrimitive`. `D3DRenderer.attach` wraps the thunk `hook!guard_0045dce0` and sets `noBlend` for the draws inside it, so all particles, sparks included, show the latest tick (section 27). That wrapper throws `unknown thunk` if `0x0045DCE0` leaves `GUARDED`.

**How it was compared.** Same machine code for logic. `check-flow` ran a race with zero console errors, which does not show particles look right. Fix check, one-off script: over 1168 ticks, 3922 particle rows and none linked to the tick before. No comparison with the original was run.

## 17. Skid marks

**Original behaviour.** 20 slots, stride `0x1910`, two strips per slot of up to 100 vertices, world identity, texture `S_SFX.PCX`, blend **INVSRCALPHA, SRCALPHA**, flag 1. Colour `0x404040`, alpha `clamp(200 - 16*max(n-4, 0), 0, 255)` (`FUN_00444a60`). `FUN_004450e0` ages slots per frame, new marks from `FUN_00444b40`. Gate `skidmarks`; `fade_skmarks` picks fade or disappear. Strip drawn only with more than 2 vertices. With inverted blend, vertex alpha 0 means fully visible, so a host must not alpha-test on vertex alpha.

**Evidence.** `FUN_00445180`, `FUN_004450e0`, `FUN_00444a60`, `FUN_00444b40`, `FUN_00444de0`. Notes: [`render-frame.md`](../research/render-frame.md) sections 1 and 6, [`render-device.md`](../research/render-device.md) section 14, owner's patch notes part 6 item 4.

**Status.**

- Confirmed: slots, blend, colour, alpha formula.
- Inferred: nothing.
- Unresolved: the meaning of `n` in the alpha formula.

**Where the port implements it.** Runs as shipped. `drawPrimitive` keeps positions for blending when the vertex count stays the same between ticks and the first vertex moved at most 30 units; other strips show the latest tick. The shader tests only the texture key, so alpha-0 marks stay. Marks draw before the HUD instead of after it (section 9).

**How it was compared.** With a 3D card no comparison was run. `check-driving` and `run-bot` run without a renderer. On the 8-bit path skid marks were compared with the guest: section 26.

## 18. Clouds: `gfx_wolk` and `gfx_bwlk`

**Original behaviour.** Not sky clouds: billboards with world = camera rotation plus slot position. Both have 70 slots of 300 bytes (`+0` world, `+0x40` 6 vertices, `+0x118` limit, `+0x11c` age, `+0x128` active), drawn as 6-vertex fans. Each frame the whole slot array is sorted with `qsort`, far to near by XZ distance to the camera, so a slot's address holds a different puff from one frame to the next.

| Effect | Slots | Texture | Centre colour, rim colour | Alpha | Blend |
|---|---|---|---|---|---|
| `gfx_wolk` | `0x6f5090` | `S_SFX.PCX` | `A0A0C8`, `646464` | centre 0x80 lowered by 0x80/life per tick, rim 0x10 | SRCALPHA, ONE |
| `gfx_bwlk` | `0x6c4208` | `L1RACER3.PCX` | `AAAAAA`, `323232` | centre 0x80 lowered by 0x80/life, rim 0 | SRCALPHA, INVSRCALPHA |

Both need `clouds` (`0x6fb904`), turned off at init if the card lacks `SRCALPHA` and `ONE` or `alpha_blending` is 0 (`FUN_00446e80`, `FUN_00446e50`). That test runs with hardware 3D only: on the 8-bit path `clouds` stays on with `alpha_blending` forced 0, and both draw untextured (section 26). Both wipe their slots and skip when `1/dt < 10`.

**Evidence.** `FUN_00446fe0`, `FUN_00446f00`, `FUN_004467d0`, `FUN_004467f0`, `FUN_00446cf0`, `FUN_0043de00`, `FUN_0043dc90`, `FUN_0043dba0`. Notes: [`render-frame.md`](../research/render-frame.md) sections 1 and 6, [`render-device.md`](../research/render-device.md) section 14.

**Status.**

- Confirmed: slots, sort, states.
- Inferred: nothing.
- Unresolved: spawn sources and the visual meaning of `gfx_bwlk`.

**Where the port implements it.** Runs as shipped. With `dt` fixed at 1/60 the below-10-FPS wipe never fires in a race, covered by the falling-behind row of [`../intentional-differences.md`](../intentional-differences.md). `D3DRenderer.blends` excludes the two slot arrays by vertex pointer (`SMOKE_VERTS`, `BWLK_VERTS`), because a slot cannot be paired across ticks, so both show the latest tick (section 27).

**How it was compared.** Fix check, one-off script: over 1168 ticks, 2968 smoke rows and none linked to the tick before, no smoke moving vertices. `gfx_bwlk` drew 0 times in a whole Amsterdam race, so its pointer range did not run on real draws. With a 3D card no comparison with the original was run. On the 8-bit path smoke was compared with the guest: section 26.

## 19. Finish flag

**Original behaviour.** A sheet fixed to the camera, shown after a finish. `FUN_0043ac80` calls `FUN_0043fdd0(1)` in state 5. Gate `finish_flag` (shipped 1).

- Grid `FUN_0043fff0`: 10 strips of 34 vertices. x = `0.625 j - 5` for j 0..16, y = `0.75 i - 3.75` for i 0..10. A 4:3 sheet.
- Wave `FUN_0043fe20` per frame: z = `5 + sin` from the table at `0x73b530`, so 4 to 6. Colour grey `c = clamp(0x100 - ftol((sin + 1)*64), 0x80, 0xFF)`, alpha `0x64`.
- UV: u = `0.445313 + j/256`, v = `0.046875*(1 - i/10)`. On `s_sfx.tga`, which is 128x128, that is x 57..65, y 0..6: an 8 by 6 checker of `3c0000` and `ffffff` with key colour on its right and lower edge.
- `FUN_00440160`: blend SRCALPHA, INVSRCALPHA. **Filter off for this draw** when `[OPTIONS] FILTER == 2`, then on again. So 8 by 6 texels stretched over the screen stay hard-edged squares. World = camera matrix and position (`FUN_0043ff60`).
- Z stays on. HUD pixels already wrote nearer depth, so the flag is behind the HUD.

Grid reach in clip units with the default projection, against the visible half-ranges at the original 4:3 (x 1, y 0.75):

| z | x reach | y reach |
|---|---|---|
| 4 | 1.871 | 1.403 |
| 5 | 1.497 | 1.122 |
| 6 | 1.247 | 0.935 |

So at 4:3 the sheet's edges are never on screen.

**Evidence.** `FUN_0043fff0`, `FUN_0043fe20` (asm `0x43fe46` to `0x43ff18`, `[0x576308]` 5.0, `[0x576730]` 64.0), `FUN_0043ff60`, `FUN_00440160`, `FUN_0043fdd0`, `FUN_0043ac80`. `s_sfx.tga` read from `rcs.img`. Notes: [`render-frame.md`](../research/render-frame.md) sections 1 and 6, [`hud-overlay.md`](../research/hud-overlay.md) sections 12 and D.

**Status.**

- Confirmed: grid, wave, colours, UV rectangle, filter toggle, order after the HUD.
- Inferred: hard-edged squares as the look intended by the filter toggle. If `pw_fastf`'s `ChangeFOV(0.6)` is still active at the finish, the sheet reaches only about 0.6 at z 6 and stops short of the edges on the original at 4:3 too; read from code, not run.
- Unresolved: nothing else.

**Where the port implements it.** Geometry and wave run as shipped. In `source/render/d3d-renderer.js`:

- Filter: `TEXTUREMAG` is part of the batch key, so the flag's strips draw nearest while the rest of the frame is bilinear (section 24).
- Coverage, an intentional difference: `scaleFlag` multiplies rows 0 and 1 of the sheet's world matrix by `s = max(1, xr / FLAG_REACH_X, yr / FLAG_REACH_Y)`, with reach 1.2472 and 0.9354, the values at z 6. So the edges never show at any phase of the wave. Squares stay square and UVs do not change. `s` is 1 between A = 1.07 and A = 1.66, 4:3 included, so there the sheet equals the original. Examples: 1.069 at 16:9, 1.336 at 800x360, 1.283 at the touch portrait limit. `worldIndex` applies it once per new world row, for draws in `FLAG_VERTS` (`0x6c9468..0x6cbee8`), because `FUN_00440160` sets one world for its 10 strips. The scale uses the default projection, so the `pw_fastf` case above stays as in the original.
- The flag draws before the HUD pass (section 9).

**How it was compared.** No comparison with the original was run. `check-flow` passes through the finish state with no console errors.

- Fix check, one-off script, on coverage: per-tick numeric edge check over a whole wave. Reach 0.9999 to 1.0 of the view at 1280x720, 800x360, 1920x800, 390x468 and 390x585; `s` = 1 at 960x720 and 1000x900; world times view is a plain scale. Measured z range 4.000 to 6.000.
- Fix check, one-off script, on the filter: at `FILTER=2` only the flag is nearest, squares hard. The real flag from a whole bot race, at speed 8, was looked at by eye.

## 20. Texture formats, colour key and loaders

**Original behaviour.** 16-bit modes load TGA only (`FUN_004b8840(1)`), 8-bit modes PCX. TGA: type 2, 24 or 32 bpp, rows flipped by the descriptor, one `fread` per byte. Conversion `FUN_004c7ee0`, with `0x7408f0` = RGB (255, 0, 127), the magic colour set at `0x44bb81`:

| Source | 565 result |
|---|---|
| Exactly (255, 0, 127) | `0x0000`, the key |
| Any other colour with R<8, G<4, B<8 | `0x0800`: red forced to 1, opaque near-black |
| Near-magic, truncating to (31, 0, 15) | `0xF80F`, opaque magenta |
| Other | `(R>>3)<<11 \| (G>>2)<<5 \| B>>3`, truncating, no dither |

Key registers `0x740d24..2c` stay 0. `SetColorKey` (`DDCKEY_SRCBLT`) takes `FUN_004c81b0(0xFE, 8)`, so `0x0000` in `RESOLUTION` 3, 4 and 6 to 9, `0xF80F` in 2 and 5, where magic texels are not keyed, and index 0xFE in 0 and 1 (section 26). The first `Load` runs **before** `SetColorKey`. `COLORKEYENABLE` is set to 1 once. Textures never use an alpha format (`FUN_004c2b90` is called with 3 or 2). 173 TGA in `rcs.img`: 126 at 256x256, 17 at 768x512 multi-size, 12 at 64x64, 5 at 128x128, 11 wait screens, plus `s_letter`, `e03_pr` that no INI names. Texture table `0x73b1b0` holds 100.

RC.IMG sprites are DirectDraw surfaces, never textures, and reach no live draw in a race.

**Evidence.** `FUN_004c00b0`, `FUN_004c7ee0`, `FUN_004c81b0`, `FUN_004c4030`, `FUN_004b9b40`, `FUN_004ba810`, `FUN_00447d10`, scan of all 173 TGA. Notes: [`render-textures.md`](../research/render-textures.md) sections 1, 2, 6 and 13, owner's patch notes part 6.

**Status.**

- Confirmed: conversion, key, order of `Load` and `SetColorKey`, scan results.
- Inferred: bit replication as the 5-to-8-bit expansion on reference cards is an assumption in `render-textures.md`.
- Unresolved: the edge look of bilinear plus colour key on reference hardware. The owner's notes show black fringes on one GPU and not on another.

**Where the port implements it.** Conversion runs as shipped. `uploadPixels` in `source/render/d3d-renderer.js`, per system surface, honouring pitch, row 0 first: texels equal to the key become RGBA 0 (key 0 until `SetColorKey` has run; no re-upload after it, fine as long as the key is `0x0000`). Other texels expand with `(c*527+23)>>6` and `(c*259+33)>>6`, which differ from bit replication by 1 on 4 of 32 and 10 of 64 codes. `FRAG` discards below 0.5 and divides by the filtered alpha. Recorded as intended in [`../intentional-differences.md`](../intentional-differences.md). `arrayFor` makes the wrap mode repeat and holds texture arrays per size, up to 6 sizes.

**How it was compared.** `reference-frame` by eye. No texel-level comparison with a capture of the original exists. `boot-all` loads all textures of all etappes and cars without a renderer.

## 21. Multi-size textures and mip-mapping

**Original behaviour.** A file with W = H + H/2 holds authored levels: for 768x512, 512 at (0,0), 256 at (512,0), 128 at (512,256), 64 at (512,384), 32 at (512,448). Level pixels resemble a box downsample but are not one, and each carries its own magic texels. Requested D above H is corrected to H; D below 64 is fatal; a square file with D different from its size is fatal.

Mip-mapping: flag `0x73b4f8`, on in the constructor, cleared by `FUN_0044c200` when `[GFX OPTIONS] mipmapping` is 0. Shipped 0. With it on: chains down to 64 from authored levels, filter states 3 (off) or 6, fallback 4 (on). Square files never get a chain.

The `Mip-mapping (alleen met 3D kaart)` checkbox in `TfrmDisplaySettings` stores into the save only. `WriteGeneralStuffToIni M:0x48bcf0` writes gamma, alpha_blending, `CUSTOM_TEXTURE_MEMORY`, waitvbl and filter, not mipmapping. The only INI access to the name in `menu.exe` is the read of `[DEFAULTSETTINGS]` at `M:0x4a6de4`. So only a hand edit of `game.ini` turns mips on.

**Evidence.** `FUN_004b9800`, `FUN_004b9840`, `FUN_004b9890`, `FUN_004b9ab0`, `FUN_004b9b40`, `FUN_004bc200`, `M:0x48bcf0`. Notes: [`render-textures.md`](../research/render-textures.md) sections 3 and 4, [`menu-forms.md`](../research/menu-forms.md) TfrmDisplaySettings.

**Status.**

- Confirmed: level layout, rules, mip flag, the menu writer.
- Inferred: nothing.
- Unresolved: nothing else.

**Where the port implements it.** Level extraction runs as shipped through `Blt` (`softBlit` in `source/host/directx.js`). Mips are deliberately not implemented: `createSurface` builds the chain so the game's writes land somewhere, `Load` uses level 0 only, and a hand-edited `mipmapping=1` is not supported. `pipelineKey` treats states 1 and 3 as nearest and everything else as linear, so the filter choice still holds on that path. The checkbox behaves as in the original: it goes into the save and has no effect on a race (`TfrmDisplaySettings.btnOkClick`), and it is greyed without `3D kaart` (section 26).

**How it was compared.** `form-check` for the form. Fix check, one-off script: with `mipmapping=1` and `FILTER=0`, `TEXTUREMAG` is 3, the world draws nearest and the HUD linear. No comparison of mip-mapped output was run; nothing shipped uses it.

## 22. Texture detail and texture memory

**Original behaviour.** `CTextureDetailManager` runs once at load (`FUN_00498760` in `FUN_0044c200`). No per-frame state: no LOD while driving.

1. Register names: objects, anims, league, general, 4 track textures, 2 cached pipelines.
2. Classify: pipelines 256, square files by size, W != H as multi-size.
3. Budget = `min(custom_texture_memory, measured) - single bytes`. Negative is fatal.
4. A window of `multi` entries slides over a flat table of rows `32<<k`, one entry per step, while `2*sum(d^2)` fits (1/3 more with mips). First entries get the smaller size. So at most two adjacent sizes occur.

`[PRIORITY LIST]` is read from `eNN_anim.ini`; no shipped INI has it. `dwMaxTextureWidth` 0 ends the row count by 32-bit overflow at n = 27, giving 28 rows; non-zero values must be 32 times a power of 2 or the loop spins.

| Texture detail | `custom_texture_memory` | Etappe 0, 5 multi-size files, single bytes 1,400,832 |
|---|---|---|
| shipped `game.ini`, used only by hand | 4,000,000 | 4 at 512, 1 at 256 |
| Minimaal | 2 MiB | all 256 |
| Normaal, the menu's default | 8 MiB | all 512 (rows above H clamp to H) |
| Maximaal | 16 MiB | all 512 |

Etappe 5 at Minimaal: budget 434,176, so 3 at 128 and 2 at 256.

**Evidence.** `FUN_00498030`, `FUN_00498490`, `FUN_00497cb0`, `FUN_00497d40`, `FUN_00497dc0`, `FUN_00498870`, `M:0x4a7160`, `M:0x488bd8`. Notes: [`render-textures.md`](../research/render-textures.md) sections 7, 8 and 12, [`startup-flow.md`](../research/startup-flow.md) section on `[GFX OPTIONS]`.

**Status.**

- Confirmed: algorithm and table. The worked numbers are derived here from the code, not from a run.
- Inferred: nothing.
- Unresolved: which texture gets the smaller size in a mixed window: `FUN_00498340` list order was not read.

**Where the port implements it.** Runs as shipped. The host reports `dwMaxTextureWidth` 0 and a measured 16,777,216. Reachable budgets never reach an overflowing row: a window's sum passes the budget at size 2048 or 4096, while the rows that overflow are sizes `32<<26` and up. So the deviation from the note's rule 8 has no effect. Radios: `TfrmDisplaySettings.copySettingsToControls` and `btnOkClick` in `source/menu/forms/group-options.js`. With `3D kaart` on all three stay enabled after a race (section 1). Without it they are greyed, and no detail manager runs (section 26). `arrayFor` in `d3d-renderer.js` holds 128 layers below 512 and 32 at 512. At most 5 textures per etappe reach 512 and the game's table holds 100.

**How it was compared.** `boot-all` at the shipped 4,000,000: no "Not enough texture memory" and no "Error subdividing" on any pair. `form-check` for the radios. Fix check, one-off script, on Maximaal: section 1. The sizes chosen were not compared with the original.

## 23. Cached pipelines

**Original behaviour.** `[objecttypes]` 11, 14 use "Cached 1" and 16, 17 "Cached 2". All members of a pipeline are 256x256 and share one video surface, one `IDirect3DTexture2` and one handle (`FUN_004b2cb0`). Before a member's draw, `FUN_004b2e40` calls `IDirect3DTexture2::Load` if that member is not current. This is the only `Load` while driving. Queued alpha objects do not call it, so they see whatever was last loaded. Objects with a `g_damages` entry take the branch without `Load`. `FUN_00458020` resets the current slots after a wait.

| Etappe | Members 1/2 | Placed objects 1/2 |
|---|---|---|
| 0 | 4/2 | 13/3 |
| 1 | 5/2 | 16/18 |
| 2 | 2/2 | 140/110 |
| 3 | 5/2 | 162/6 |
| 4 | 5/5 | 16/18 |
| 5 | 0/0 | 0/0 |
| 6 | 3/3 | 26/32 |
| 7 | 3/0 | 4/0 |
| 8 | 3/1 | 202/3 |
| 9 | 5/3 | 56/113 |

**Evidence.** `FUN_004536e0`, `FUN_004b2740`, `FUN_004b2db0`, `FUN_004b2e00`, `FUN_004b2e40`, `FUN_004b2ea0`, `FUN_004ba4c0`. Notes: [`render-textures.md`](../research/render-textures.md) section 9. The etappe 9 row: parse of `etappe9.omp` and `etappe9.ini`, since the track update, with the rule that gives the note's numbers for the other nine.

**Status.**

- Confirmed: the mechanism and the counts.
- Inferred: nothing.
- Unresolved: `Load` calls per frame in play. Whether any cached object's mesh has a `g_damages` entry.

**Where the port implements it.** Runs as shipped. `loadTexture` in `source/render/d3d-renderer.js` keeps one array layer per system surface and only repoints the video surface. `texInfo` reads the surface's layer at draw time, so draws before and after a `Load` keep their own image, and queued alpha objects see the last `Load`, as in the original.

**How it was compared.** No comparison was run. Same machine code up to the `Load` call.

## 24. Filtering

**Original behaviour.** Device state, set by `FUN_004bc200(on)`:

| `on` | Mip flag 1 | Mip flag 0 (shipped) |
|---|---|---|
| 0 | MAG = MIN = 3 | 1 nearest |
| 1 | 6, fallback 4 | 2 bilinear |

| Caller | Effect |
|---|---|
| `FUN_0044bbf0` at init | `[OPTIONS] FILTER == 2` on, else off. Shipped 2. Menu: `Bilineaire filtering aan` writes 2 or 0 |
| `FUN_00485ed0`, `FUN_00486040` | HUD: forced **on** for the pass, since manager `+0x88` is set to 1 in ctor `FUN_00483ed0` and its setter `FUN_00485d10` has no caller. Previous value restored after |
| `FUN_00440160` | Flag: forced **off** for the draw if `FILTER == 2`, then on |
| `FUN_0043d3c0` | On, under `FOG == 1` only |

So one frame mixes filter settings: world by option, HUD always bilinear, flag always nearest.

**Evidence.** `FUN_004bc200`, `FUN_0044bbf0`, `FUN_00483ed0`, `FUN_00485ed0`, `FUN_00486040`, `FUN_00440160`. Notes: [`render-textures.md`](../research/render-textures.md) section 11, [`hud-overlay.md`](../research/hud-overlay.md) section 7, [`win32-surface.md`](../research/win32-surface.md) C3.

**Status.**

- Confirmed: all callers and values.
- Inferred: nothing.
- Unresolved: nothing.

**Where the port implements it.** Filter is draw state, as in the game. `pipelineKey` in `source/render/d3d-renderer.js` reads `TEXTUREMAG` at each draw and sets bit 18 for nearest (state 1, or 3 with mipmapping on). `materialFor` passes the bit as uniform `uNearest`. The texture arrays stay `LinearFilter`, and `sampleTex` in `FRAG` samples nearest with `texelFetch` and wrap when the uniform is set. Nothing writes sampler state or sets `needsUpdate` for a filter change, so a filter change uploads nothing. The 8-bit path has no filter at all (section 26).

| `FILTER` | World | HUD | Flag |
|---|---|---|---|
| 2 | bilinear | bilinear | nearest |
| 0 | nearest | bilinear | nearest |

Both rows equal the original.

**How it was compared.** Fix check, one-off script, with `FILTER` forced through `game.ini`, same tick on fixed seeds: at 0 all world batches are nearest and the HUD linear, with a speedometer crop within 8/255 of `FILTER=2`; at 2 only the flag is nearest. 0 full array uploads in every run, 22 to 25 single-layer uploads. `form-check` for option persistence. No comparison with the original was run.

## 25. Gamma (`Helderheid`)

**Original behaviour.** Menu: `Helderheid instellen`, `licht` (Gamma 0, default) or `donker` (1), written to `[GFX OPTIONS] gamma`. Race: with gamma on, `FUN_004c7ed0(1)` sets `0x7409d0`, and each colour channel becomes `(c*c)>>8` during texture conversion, after the magic colour check. So it darkens textures at load and does not touch the display adapter or the frame buffer. `FUN_00447a00` and `FUN_0044bad0` set it.

**Evidence.** `FUN_00447a00`, `FUN_0044bad0`, `FUN_004c7ed0`, `FUN_004c7ee0`, `M:0x48bcf0`. Notes: [`render-textures.md`](../research/render-textures.md) section 1, [`startup-flow.md`](../research/startup-flow.md), [`menu-forms.md`](../research/menu-forms.md) TfrmDisplaySettings.

**Status.**

- Confirmed: all of the above.
- Inferred: nothing.
- Unresolved: nothing.

**Where the port implements it.** Runs as shipped: the converted texels reach `uploadPixels`. The radios stay enabled with `3D kaart` on, and are greyed without it (`TfrmDisplaySettings.copySettingsToControls`, `btnOkClick`, section 26), and the writer is in `source/menu/data.js`.

**How it was compared.** Same machine code for the conversion. `form-check` for the radios. No race with `donker` was compared.

## 26. 8-bit software path

**Original behaviour.** `3D kaart` off selects `RESOLUTION` 0 (320x200x8, menu `Laag`) or 1 (640x480x8, menu `Normaal`): `0x6fb8d0 = 0`, `0x6fb894 = 1`, Ramp device. On an emulated Windows 98 machine it ran at both modes on the first try: countdown, driving, opponents, HUD, sky, damage. What differs from the other sections:

- Textured draws: all copy mode (`TEXTUREMAPBLEND` 7). The texel's palette index goes to the 8-bit target. No vertex colour, blending, fog or filter. State 17, 18 = 2 on the HUD shows no effect.
- Page: one, `init.pcx`, 2048x2048, 6x6 tiles, tile handles 0, UVs remapped by game code (`FUN_004b94e0`, `FUN_004bdcd0`, `FUN_004b9fa0`). No `Load`: `HW.dwFlags` 0. No texture detail manager. A texture stretches into its tile in 16.16 steps from pixel centres. The page is read at `floor(u * 2048)`, wrapping. Pixel centres lie at integer coordinates, Direct3D's rule.
- Palette: one, `[PALET]` first argument, `e00_pal.pcx`, `e02_pal.pcx`, the same 768 bytes (`FUN_00447d10`, `FUN_004c9c90`). Key index 0xFE on the page.
- Objects: through `FUN_004a9c20` instead of `FUN_004a9a20`.
- Sky: `Blt` of `scrl_lo.pcx` or `scrl_hi.pcx` into the top two-thirds, before the scene, with no colour clear (`FUN_004456a0`). Only Z clears, so a pixel nothing covers keeps the frame before: off the track the sky's rectangle shows as a block with old pixels below it.
- Untextured draws, state 1 = 0: skid marks, `gfx_wolk`, `gfx_bwlk`. Palette index `255 - floor(blue / 17)`, Gouraud across the triangle. Stipple by the alpha of the triangle's first vertex on a 4x4 matrix in screen pixels, drawn when `16 * T < alpha`, although `ALPHABLENDENABLE` is never set. So smoke is sparse dark dots, and skid marks dense hatching when new, solid dark later.
- Flash: palette entries 0 to 254 at 235, one flip (`FUN_0043b130`).
- Not on this path: sky mesh, car lights, reflection, finish flag, alpha blending. Shadows are black opaque blobs only (`FUN_00443ef0`), large when the car is in the air.
- A slow machine: `VISIBLECHUNKS` falls to its floor of 15 below 10 FPS (`FUN_0044cb30`), and smoke stops spawning below 12 FPS (`FUN_00446c70`). Both fire on the emulated machine.
- 320x200: `dvClipY` 0.625. The emulated card double-scans it to 640x400. On a monitor of the period that fills 4:3, which the HUD's squeeze by `H/W` (`0x0047cd90`) is made for: [`hud.md`](hud.md), 8-bit path.
- The menu's rules: `3D kaart` from `M:0x487514` (0, 1, 2, 5 have no 3D card), `Laag` only without it, `Hoog` only with it. `chkVideo3dClick` `M:0x4959c4` moves a disabled choice to `Normaal`. `Weergave` greys mipmapping, brightness, bilinear, alpha and texture detail without it (`M:0x4884b8`, `M:0x488bd8`).

**Evidence.** `FUN_0044bd10`, `FUN_00447d10`, `FUN_004a99a0`, `FUN_004a9c20`, `FUN_004456a0`, `FUN_004454c0`, `FUN_004c9c90`, `FUN_004bbd40`, `FUN_004c0840`, `FUN_00443ef0`, `FUN_0043ac80`, `FUN_0043b130`, `FUN_0044cb30`, `FUN_00446c70`. Frames: [`evidence/reference-86box/results.md`](../../evidence/reference-86box/results.md). Notes: [`render-8bit.md`](../research/render-8bit.md), the measured summary, which holds over the static reading in [`8bit-device.md`](../research/8bit-device.md), [`8bit-textures.md`](../research/8bit-textures.md), [`8bit-drawing.md`](../research/8bit-drawing.md) and [`8bit-ramp.md`](../research/8bit-ramp.md). Earlier: [`render-frame.md`](../research/render-frame.md) section 1 "Software path differences", [`render-textures.md`](../research/render-textures.md) sections 1, 2, 6, [`render-device.md`](../research/render-device.md) sections 1, 2.

**Status.** Confirmed here means read from the code, or from the frames of the real Ramp rasteriser in `reference-86box`.

- Confirmed: copy mode, the page, the palette, the key, the sky, colour kept between frames, the stretch, sampling and pixel-centre rules, the palette index of untextured draws at the values read, the stipple at the alpha values read, the blob shadow, no filter on the HUD, the double scan, the `VISIBLECHUNKS` floor and the smoke gate. The menu's rules, read from `menu.exe`.
- Inferred: why these palette indices: the Ramp driver took entries 240 to 255 for the white material's ramp while they were free (`FUN_004bb190` comes before `FUN_00447d10`), and the game's palette then replaced their colours. The rest of the stipple matrix, as the same Bayer pattern. Perspective correct near enough, with far surfaces off in single texels, which fits spans with subdivision. 4:3 on a monitor of the period.
- Unresolved: the flash on the real thing: its palette writes are read from the code, and no frame of the guest caught one. The index below blue 17. The stipple at alpha values no frame was read at. What remains between the frames, below. Any real machine of the period.

**Where the port implements it.** The race logic is untouched: it is game code in `spel.wasm` as shipped, and it ran there once the host answered its calls. On fixed seeds a whole race by the bot gives the same result on this path and with the 3D card: `TRACKTIME` 593233, laps 289450, 303783.

| Where | What |
|---|---|
| `source/host/directx.js` | `PAL8` format, `screenFormat`, `SetDisplayMode` keeps bits, `host.bufferScreen`, byte-wide `softFill` and `softBlit` with the 16.16 stretch, `IDirectDrawPalette` with its own copy, `CreatePalette`, Ramp GUID in `CreateDevice`, empty `HW` caps, one 8-bit texture format, probe limit by bytes (256 surfaces at 8 bits) |
| `source/render/d3d-renderer.js` | `setIndexed`, `FRAG_INDEXED`, `VERT_INDEXED`, `presentIndexed`, `indexedTargets`, `syncSurface`, `blitToScreen` for the sky, `setPalette` with a queue so each palette a flip showed gets a present, `SKY_FRAG`, `COLOR_FRAG`, `SCREEN_FRAG`, half-pixel shift in `updateClipMap`, clip from the viewport (`clipY`), `screenMap` by the mode's size |
| `source/host/hud-layout.js` | `setShape(..., clipY)` |
| `source/settings.js` | `softwareMode`, `modeGrid`, `renderSize(..., grid)` |
| `source/race-runner.js` | `layout` passes the grid, a second layout after boot, loading art and bar frames by mode |
| `source/host/game-files.js`, `tools/build-race-lists.mjs` | `race-files.json` has `soft[0]`, `soft[1]`: per mode lists of pictures and fonts, from boots of all 10 etappes at each |
| `tools/prepare-assets.py` | `decode_pcx`, `prepare_loading` writes `eNN-8.png` and `eNN-lo.png`, `prepare_loading_bar_8` writes `bar8-NN.png` |
| `source/menu/forms/group-options.js` | `isMode3d`, `chkVideo3dClick`, `3D kaart` and `Laag` open by the original's rules, `Weergave` greys its 3D-only controls without it, `Hoog` stays off as before, notes `NOTE_LOW` and `NOTE_NEEDS_3D` |
| `source/host/race-setup.js`, `source/app.js` | `?resolution=N`, `?chunks=N` with `?race=1` |

The picture: the world as indices in an R8 target, through the palette to a colour target; the HUD in colour on its own target on the mode's grid; both to the canvas with sharp edges. The colour of the world target stays between frames: only Z clears, as in the original. `present` blends between ticks as on the other path (section 27).

Port choices, recorded in [`../intentional-differences.md`](../intentional-differences.md):

- Automatisch at 100% draws the world on the mode's own pixels on the view's shape: 640x480 gives 853x480 at 16:9, 320x200 gives 427x200, not the native size. Explicit presets and render scale act as on the other path. So the original's look is the default, and higher is one setting away.
- 320x200 fills the 4:3 screen as on a monitor of the period, with its y stretched 1.2. Wider views add width at the same `xr` as 640x480.
- Wider views read further along the sky's panorama, wrapping at its width. Taller views mirror it upward. Stipple and sky stay on the mode's grid at any render size.
- The HUD's own target on the mode's grid means render scale does not touch it. It covers late effects by order and not by depth, as on the other path.
- Scaling to the canvas keeps pixels square-edged with one screen pixel of blend, so no uneven pixels at scales that are not whole. A CRT had neither.
- The loading page shows the PCX pictures through the game's palette, by a PNG made ahead, and the bar from `overlay.pcx`. The game draws these in `race.boot()`, which shows nothing until it returns: as on the other path.
- Fixed tick: `VISIBLECHUNKS` stays 25 and smoke always spawns, because `1/dt` is 60. That is what the code gives on a fast machine. On period hardware this path ran slowly enough to lose smoke and view distance. Smoke's alpha reaches 0 at 128 ticks here, before its limit: invisible, by the same rule.
- Half a mode pixel of Direct3D's pixel centres is applied on this path only. The 3D-card path draws at another size and does not have it.

**How it was compared.** `reference-86box`: the port's frame at rest against the guest's, same state, `?chunks=15` for the view distance, pixel-exact in RGB (`tools/reference-86box/compare.py`).

| | Whole picture identical | World region | HUD text region |
|---|---:|---:|---:|
| `RESOLUTION` 1, 640x480 | 88.1% | 92.2% | 81.7% |
| `RESOLUTION` 0, 320x200 | 85.5% | 93.3% | 63.6% |

Rank portraits differ by the opponents' order, which is not the same run. Remaining: single-pixel polygon edges, single texels on far surfaces, rows of HUD glyphs. Smoke and skid marks were compared by eye and by reading palette indices, against frames at 320x200 on the K6-2 550. By eye the port's frames look like the guest's. That is one emulated machine, etappe 0, car 0. It does not cover the flash, the `wait_lo` pictures as drawn by the game, end of race or the pause dialog. The off-road frame `guest-640-offroad.png` shows the kept colour in the guest; no port frame was set against it.

- `check-software`, `evidence/software/flow/summary.json`: real clicks. Options with and without `3D kaart`, `Weergave` greyed, a whole race by the bot at `RESOLUTION` 1 to its results, render scale halves the world only, the flitser's palette seen in the port and nothing more, the menu shows the saved state, a `RESOLUTION` 0 race with Esc and J, back on with the 3D card in the same page, 0 console errors. It reads state, not pictures. 17 of 17 named checks.
- `boot-all`, at both modes: all 10 etappes boot, in `tools/build-race-lists.mjs`. Amsterdam is the only level that ran. No sound difference is expected and none was checked.

## 27. Picture between ticks (port addition)

**Original behaviour.** One pass of the main loop per rendered frame. Nothing blends: world, camera and effects on screen are all from the same pass. A dialog freezes the picture (section 10).

**Evidence.** `FUN_00458270`, `FUN_0044cb80`, `FUN_004b3a60`, [`sim-timing.md`](../research/sim-timing.md).

**Status.**

- Confirmed: no blending in the original. `FUN_004b3a60` writes view row 3 as `-dot(axis, eye)`, so that row changes with rotation as well as position.
- Inferred: the estimate below for scenery, because object chunks are the nearest road chunk, as in `render-frame.md`.
- Unresolved: nothing.

**Where the port implements it.** `blendPalette` in `source/render/d3d-renderer.js`, an intentional difference. `endFrame` pairs draws across ticks by key (vertex address, occurrence). `blends` decides which draws can be paired.

| What | Between ticks | Cut when |
|---|---|---|
| World matrix rows | Blended | Pair missing, or translation moved more than 30 units (`TELEPORT_DIST2`). A draw that shows the latest tick has no pair |
| Moving vertices of `drawPrimitive`: skid strips, player's shadow, flag | Blended | Vertex count changed, or first vertex moved more than 30 units |
| Blob shadows: 4-vertex `drawIndexed` with `ZBIAS` | Blended with their cars | As above |
| Camera view matrix | Blended, also while turning | Eye moved more than 30 units in one tick, as on a camera switch. `eyeAxis` recovers the eye from the view; the test does not read row 3 |
| Projection | Latest tick | Always |
| `gfx_wolk`, `gfx_bwlk` | Latest tick | Slots are re-sorted every frame, so nothing can be paired. `SMOKE_VERTS`, `BWLK_VERTS` |
| All particles, sparks included | Latest tick | One mesh per live particle, so an occurrence names another particle after one dies. `noBlend`, set around `FUN_0045dce0` |
| HUD | Latest tick | `this.hud` in `blends` |

On displays faster than 60 Hz the latest-tick draws step at 60 Hz while the rest moves smoothly. Under a dialog everything stays on tick B (section 10). Scenery: a parse of `.omp` with the 26-chunk window shows occurrence changes for the same mesh almost always land more than 30 units away: none on etappes 0, 1 and 7, and 2 to 4 percent of window steps with one or two objects on etappes 2 to 6 and 8. Etappe 9 was not parsed for this. On a wrong pair the first-vertex test limits the error to one tick within 30 units. Player-shadow polygons pair by heap address and occurrence, with the same limit.

**How it was compared.** `repeat-trace`: checksums over every object with a physics body, 485 on Amsterdam, identical at all 71 samples between normal rendering at 1280x720 DPR 1 at 60 FPS, the mobile profile at 8x throttle at 60 FPS, and every second display frame at 30 FPS. That shows game state does not depend on the render profile; it does not cover the picture. No comparison with the original is possible, since it does not blend. Fix checks, one-off scripts, on the bot's route:

- Camera: over 28 s at a 144 Hz stand-in, 4031 presents, 0 with the view unblended. At 60 Hz, 1680 presents, 0. The old row-3 test would have cut 1331 and 555. Camera switches (eye steps of 85 and 62 units in a tick) still cut. The largest eye step outside camera switches was 13.3 units per tick, at ticks 2 to 4 of the race.
- Smoke and particles: over 1168 ticks, 2968 smoke rows and 3922 particle rows, none linked to the tick before.
- Moving vertices: 67 of 3842 pairs in 1168 ticks were more than 30 units apart before the first-vertex test.
- Game state: the flag went up at tick 36944 and the flitser fired at tick 20720 in both whole-race runs, before and after the last renderer edits, on fixed seeds.

## 28. Host rules from the research notes, checked against the source

**Original behaviour.** The rules restate what the game relies on, from the sections above.

**Evidence.** [`render-textures.md`](../research/render-textures.md) "WebGL host rules", [`render-frame.md`](../research/render-frame.md) "What this means for a WebGL host" and "Wider screens", [`render-device.md`](../research/render-device.md) Inferred.

**Status.** All rules are Inferred in the notes. The table says what the source does; Confirmed here means read in the source.

**Where the port implements it.**

| Rule | Source | Result |
|---|---|---|
| Textures 1: `Load` returns OK, applies to later draws | `Load` in `directx.js`, `loadTexture`, `texInfo` | Holds, for level 0 |
| 2: read the key from the surface, re-upload if set later | `uploadPixels` | Not as written: key 0 until set, no re-upload. No effect in `RESOLUTION` 3 and 4, the only values reachable with a 3D card. `RESOLUTION` 0 and 1 compare the index, `PAGE_KEY` |
| 3: 565 to RGBA8 by mask, bit replication, honour pitch | `uploadPixels` | Rounded expansion, off by 1 on some codes. Masks fixed to 565, the only format reported that the game uses with a 3D card |
| 4: row 0 first, no flip | `uploadPixels`, default `flipY` false | Holds |
| 5: texture alpha is a mask only | `FRAG` | Holds |
| 6: filter is draw state | `pipelineKey`, `uNearest`, `sampleTex` | Holds, by uniform and `texelFetch` instead of sampler objects. No re-upload |
| 7: authored mip levels | `Load` in `directx.js` | Not implemented, deliberately. Hand edit only, section 21 |
| 8: report `dwMaxTextureWidth` as 32 times a power of 2 | `GetCaps` | Reports 0. Harmless at reachable budgets, section 22 |
| 9: serve every registered TGA, case-insensitive | `source/host/game-files.js`, `vfs.js` | Holds. A member missing from `race-files.json` falls back to a synchronous request |
| 10: one GL texture per system surface | `loadTexture` | Holds, as array layers |
| 11: un-premultiply at keyed edges | `FRAG` | Holds |
| 12: repeat wrap | `arrayFor`, `sampleTex` | Holds |
| 13: `IsLost` returns 0, keep `custom_texture_memory`, use 8 MB | `IsLost` in `directx.js`, `source/menu/data.js` | Holds. Normaal is the default |
| 14: RC.IMG needs only surfaces | `directx.js` | Holds |
| Frame: static track buffers | `staticVerts` | Holds |
| Frame: capture colour and UV at draw time | `copyVerts` | Holds |
| Frame: slot addresses are not keys | `blends`, `SMOKE_VERTS`, `BWLK_VERTS`, `noBlend` | Holds for smoke, `bwlk` and particles |
| Frame: keep alpha queue and effect order | Capture order, no `transparent` | Holds for all world batches |
| Frame: HUD before late effects | `present`, `presentIndexed` | Deliberately not: HUD last, at native size or on the mode's grid, sections 9 and 26 |
| Frame: `ZBIAS` needs polygon offset | `materialFor` | Holds |
| Frame: no culling code needed for wide views | `frustumCulled = false` | Holds |
| Frame: leave `VISIBLECHUNKS` alone | no write in a normal race | Holds. `?chunks=N` with `?race=1` writes it, for comparisons |
| Frame: flag coverage on wide views | `scaleFlag` | Handled, section 19 |
| Device: bypass Three.js camera conventions, raw matrices | `VERT` | Holds |
| Device: omit specular | `VERT`, `FRAG` | Holds. Only its alpha is read, for fog |
| Device: leave fog off for shipped data | no change to the states | Holds. Hand-edited fog is not supported, section 7 |
| Device: keep the back buffer if holes show | `present` clears, `presentIndexed` keeps it | Intentional and recorded with a 3D card. Holds on the 8-bit path |

**How it was compared.** Reading the source. No run.

## 29. Corrections to the research notes

The notes in [`../research/`](../research/) stay as written. Where they differ from this document, this table holds.

| Note | Says | Correct | Evidence |
|---|---|---|---|
| [`8bit-device.md`](../research/8bit-device.md), [`8bit-textures.md`](../research/8bit-textures.md), [`8bit-drawing.md`](../research/8bit-drawing.md), [`8bit-ramp.md`](../research/8bit-ramp.md) | Static reading of the 8-bit path, written before it ran. Among others: untextured draws in vertex colour and opaque, vertex alpha ignored | [`render-8bit.md`](../research/render-8bit.md) holds: palette index by blue, stipple by alpha, section 26 | Frames of `reference-86box` |
| [`render-textures.md`](../research/render-textures.md) section 4 | "`menu.exe` can write" `mipmapping` | Only a hand edit of `game.ini` turns it on. The checkbox stores into the save only | `WriteGeneralStuffToIni M:0x48bcf0` does not write the key. The only INI access is the read of `[DEFAULTSETTINGS]` at `M:0x4a6de4` |
| [`hud-overlay.md`](../research/hud-overlay.md) section D, [`render-frame.md`](../research/render-frame.md) "Wider screens" | The flag stops covering beyond about A = 2.0 and below about A = 0.89 | Those are the limits of a flat sheet at z 5. With the wave, z 4 to 6, the edges come on screen above A = 1.66 and below A = 1.07 | `FUN_0043fff0`, `FUN_0043fe20`. Fix check, one-off script: z range 4.000 to 6.000 in the port |
| [`hud-overlay.md`](../research/hud-overlay.md) sections 4, 5, 6, 9, 10 | Sine and cosine tables of 1024, mask `0x3ff`, 1024 rotation units per turn | 4096 entries, mask 4095, 4096 units per turn at run time. The image's 1024.0 and 1023 at `0x5b23b8`, `0x5b23bc` are start-up values. Details in [`hud.md`](hud.md), corrections | `FUN_004c04b0(.., 10, 10, 0x1000)` at `0x0045817b` and `0x00458188` calls `FUN_004bc4e0(0x1000)`. `FUN_0043fe20` loads `0x1000` itself (`0x43fe46`). Fix check, one-off script: run-time reads 4095, 4096.0, sin table[69] = 0.10565 |
| [`sim-world.md`](../research/sim-world.md) damage rotation, wheel angle, camera yaw, game-over orbit | `0x5b23b8` = 1024.0, "1024 units = one turn", orbit "about 0.5 turns per second" | Same table: 4096 units per turn. The orbit's step is `ftol(4096 / ftol(8/dt))` per tick (`[0x57632c]` 4096.0), so one turn takes about 8 s. Its start -1024 masks to 3072, not 0. Derived from code, not measured | `FUN_0043bc20` (`0x43bd2e` to `0x43bd3f`), `FUN_0043bd60` |
