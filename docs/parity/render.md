# Rendering parity

Every drawing feature found in `spel.dat`, on the 3D-card path and the 8-bit path, with its implementation and verification status. Part of [`../feature-parity.md`](../feature-parity.md). Original behaviour and numbers: [`../behavior/render.md`](../behavior/render.md).

Evidence is `spel.dat` unless marked `M:` for `menu.exe`. Files in Notes: `d3d-renderer.js` in `source/render/`; `directx.js`, `hud-layout.js`, `game-files.js` in `source/host/`; `group-options.js` in `source/menu/forms/`; `data.js` in `source/menu/`; `race-runner.js`, `settings.js` in `source/`; `settings-panel.js` in `source/ui/`. "Recompiled" means `public/game/spel.wasm`, built from the shipped machine code.

What the verification words mean here. A check covers only what it says.

- `reference-frame`: one frame on etappe 0, by eye, against the owner's screenshot of his patched game under Wine.
- `reference-wine`: the original `spel.dat` under Wine on llvmpipe, `evidence/reference-wine/results.md`. For this area three frames of the port at 640x480 against the unpatched game's screenshots at the same moments, `side-*.png`: by eye, and mean colour within 3 levels per channel. Not a pixel comparison. No row here is marked with it, since it holds for those frames only.
- `reference-86box`: `tools/reference-86box/`, `evidence/reference-86box/results.md`, for the 8-bit path, which Wine cannot run. The original `spel.dat` on a throwaway copy of the owner's 86Box Windows 98 machine: Windows 98 SE, DirectX 9, `D3DRAMP.DLL` of 590096 bytes dated 1999-09-09, an emulated Voodoo3 3000, Pentium MMX 266 or K6-2 550. Disc 1.01 data, etappe 0, car 0, screenshots of the guest. The port's frame at rest against the guest's, same state, `?chunks=15` for the view distance, pixel-exact in RGB by `tools/reference-86box/compare.py`: whole picture 88.1% identical at `RESOLUTION` 1 and 85.5% at 0, world region 92.2% and 93.3%, HUD text region 81.7% and 63.6%. Smoke and skid marks by eye and by reading palette indices, against frames at 320x200 on the K6-2 550. It does not cover the flash, the `wait_lo` pictures as the game draws them, end of race or the pause dialog. One emulated machine, no real one.
- `boot-all`: `tools/build-race-lists.mjs`, 2 s per etappe and car, no renderer. Not a picture.
- `check-flow`: `tools/check-flow.mjs`, a race runs to the end with zero console errors. It says nothing about the picture.
- `check-race-ui`: `tools/check-race-ui.mjs`, named checks in `evidence/race-ui/summary.json`. They read state and rectangles.
- `check-software`: `tools/check-software.mjs`, named checks in `evidence/software/flow/summary.json`. The 8-bit path by real clicks in the real menu, at 1280x720: options with and without `3D kaart`, `Weergave` greyed, a whole race by the bot at `RESOLUTION` 1 to its results, render scale, the flitser's palette, a race at `RESOLUTION` 0 with Esc and J, back on with the 3D card in the same page, 0 console errors. It reads state, not pictures.
- `repeat-trace`: `tools/benchmark.mjs` with `tools/compare-traces.mjs`. Game state only: a checksum over every object with a physics body, 485 on Amsterdam.
- `benchmark`: `tools/benchmark.mjs`. Cost on a desktop GPU only.
- `form check`: per-form browser checks of the menu, `evidence/forms/`.
- `fix check`: a one-off script written for one change and run once, on Amsterdam, not kept in `tools/`. Rates other than 60 Hz come from a timer standing in for `requestAnimationFrame`.
- `fix check: launch through the menu, 6 s of gas, 0 console errors`: the one launch check of track 9 with car 7, a one-off script on the final build when the updates came in, in headless Chromium, not on Amsterdam. The real menu, Quick Race position 9 and character position 7, a race on the keyboard device, 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. By eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else: no lap, no race end, no sound, no comparison with the original. The original has not been run with the updates.
- `not verified`: no check looks at it.

## Device and display modes

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Device selection: HAL, then RGB, Ramp below 9 bpp | `FUN_004bbd40` | yes (host) | checked on Amsterdam: check-software; boot only: boot-all | `CreateDevice` in `directx.js` accepts any GUID, so at 16 bits the game takes the HAL path. At 8 bits it asks for Ramp, `device.ramp`. check-software read the Ramp path at `RESOLUTION` 0 and 1, and the normal one after them |
| `EnumDevices`, results unused | `FUN_004c2e40` | yes (host) | boot only: boot-all | No-op in `directx.js` |
| Caps: HW `dwFlags` selects HAL texture path | `FUN_004c1030` | yes (host) | boot only: boot-all | 0x7FFFFFFF, `GetCaps` in `directx.js`. 0 on the Ramp device: one surface per texture, no `Load` |
| Caps: source and destination blend words keep `alpha_blending` and `clouds` on | `FUN_0044b9d0`, `FUN_00446e50` | yes (host) | boot only: boot-all | 0x1FFF, `GetCaps` |
| Caps: `dwMaxTextureWidth` | `FUN_004c1080`, `FUN_00498760` | partial | boot only: boot-all | Reports 0, no limit. `render-textures.md` rule 8 asks for 32 times a power of 2. No effect at reachable budgets |
| Caps: colour model, depths, light caps, sizes | `FUN_004c15f0`, log only | yes (host) | boot only: boot-all | Zero, `GetCaps` |
| Texture memory probe, stored as `available_texture_memory` | `FUN_004bc0f0`, `FUN_0044b180` | yes (host) | fix check: 0x73b4f9 reads 16777216 after boot, game.ini holds it after a whole race, Maximaal and Normaal enabled | `createSurface` in `directx.js` refuses after 128 surfaces: 16 MiB on every machine. After 256 at 8 bits, for the same 16 MiB, not read back |
| `EnumTextureFormats`: 16-bit no-alpha format chosen | `FUN_004c1e60`, `FUN_004c2b90` | yes (host) | boot only: boot-all | RGB565, plus ARGB4444 the game never selects. The Ramp device offers one 8-bit format instead |
| `RESOLUTION=3`, Normaal, 640x480x16 | `FUN_00447870`, `FUN_0044bd10` | yes (host) | checked on Amsterdam: check-flow | Game code sees this mode; picture size comes from `Settings.renderSize` |
| `RESOLUTION=4`, Hoog, 800x600x16 | `FUN_0044bd10`, `M:0x4960fc` | partial | fix check: Hoog greyed, a save with 4 keeps it, Normaal gives 3 | Hoog greyed with a note pointing to `3D-resolutie`. A save with 4 reaches game code as 800x600, and the picture does not change: `SetDisplayMode` only stores it |
| `RESOLUTION=0` and `1`, `3D kaart` off | `FUN_0044bd10`, `M:0x4960fc` | yes (host) | compared with the original: reference-86box; checked on Amsterdam: check-software | 320x200x8 by `Laag`, 640x480x8 by `Normaal`. Compared: the frame at rest at both. check-software: `Normaal` writes 1 and `Laag` writes 0 through the real options, a whole race at 1, a short one at 0. See 8-bit path |
| `RESOLUTION=2` and `5` | `FUN_00447870`, not in table `M:0x4ab4d8` | n/a | not verified | Outside the original's reachable content: only by editing `raser.ini` |
| `RESOLUTION=6, 7, 8, 9`, `Overige resoluties` | `M:0x4ab4d8`, `M:0x48813c` | no | form check | `cboResolution` shows the fixed `640 x 480`, greyed with `NOTE_RESOLUTION`. `3D-resolutie` and `Renderschaal` set the picture size instead |
| Laag with 3D on | `M:0x496684` | yes (menu port) | form check | Disabled by the original's own rule, `TfrmOptions` |
| `3D kaart` and Laag open by the original's rules | `M:0x487514`, `M:0x496684`, `M:0x4959c4` | yes (menu port) | checked on Amsterdam: check-software | `RESOLUTION` 0, 1, 2, 5 have no 3D card. Laag only without it. `chkVideo3dClick` moves a disabled choice to Normaal. A save at 1 shows `3D kaart` off and Normaal. Hoog stays off as before, `TfrmOptions` |
| `Weergave` without `3D kaart` | `M:0x4884b8`, `M:0x488bd8` | yes (menu port) | checked on Amsterdam: check-software | Mipmapping, brightness, bilinear, alpha and texture detail greyed, as in the original, with `NOTE_NEEDS_3D`. `TfrmDisplaySettings` |
| `Verversingssnelheid synchroniseren op beeldscherm`, `WAITVBL` | `FUN_0044da30`, `M:0x48bcf0` | no | form check | Greyed with `NOTE_WAITVBL`, `TfrmDisplaySettings.greyOut`. The browser decides |
| `Rendergeheugen afgehandeld door videokaart`, `FOCUS` | `FUN_004477b0`, overridden by `FUN_00447870` | no | form check | Greyed with `NOTE_FOCUS` |
| `Videokaart instellen`, `cboDriver`, `[DIRECTX]` | `M:0x4882f4`, `FUN_004cd170`, `FUN_00447830` | no | form check | Greyed with `NOTE_DRIVER`. Shows the save's value, `automatisch` by default |

## 8-bit path, `3D kaart` off

Ported. The race logic is game code in `spel.wasm` as shipped: the host answers its calls and the renderer draws what it asks. Original behaviour and how it was compared: [`../behavior/render.md`](../behavior/render.md) section 26, [`../research/render-8bit.md`](../research/render-8bit.md). Port choices on this path: `docs/intentional-differences.md`. Amsterdam only: the other levels boot at these modes and were not run.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Sky blit from `scrl_lo`, `scrl_hi` | `FUN_004456a0`, `FUN_004455e0`, `FUN_004454c0` | yes (host) | compared with the original: reference-86box | Into the top two-thirds before the scene, no colour clear. `blitToScreen` records it, `SKY_FRAG` draws it. Compared: the frames at rest. Wider views read further along the panorama and taller ones mirror it, in `docs/intentional-differences.md` |
| PCX textures on one page, UV remap | `FUN_004b94e0`, `FUN_004bdcd0`, `FUN_004b9fa0` | yes (recompiled) | compared with the original: reference-86box | `init.pcx`, 2048x2048, 6x6 tiles, tile handles 0, UVs remapped by game code. No `Load`: `HW.dwFlags` 0. The host offers one 8-bit format, `EnumTextureFormats`. Compared: the world region of the frames at rest |
| Stretch into a page tile, 16.16 steps from pixel centres | `FUN_004b9fa0`; `render-8bit.md` | yes (host) | compared with the original: reference-86box | `softBlit` in `directx.js`. Compared: the world region. Plain rounding put a colour column one texel off at the kerb of Amsterdam |
| Sampling of the page, `floor(u * 2048)`, wrapping | `render-8bit.md` | yes (host) | compared with the original: reference-86box | `FRAG_INDEXED`. Compared: the world region. Half a texel either way, and a scale of 2047, all score worse |
| Key index 0xFE on the page | `FUN_004ba810`, `FUN_004c81b0` | yes (host) | compared with the original: reference-86box | `PAGE_KEY`, discard in `FRAG_INDEXED`. Compared: the frames at rest |
| Half a mode pixel of Direct3D's pixel centres | `render-8bit.md` | yes (host) | compared with the original: reference-86box | `updateClipMap`, this path only: the 3D-card path draws at another size. Compared: the world region, 57.5% identical without this and the stretch rule, 91% with both. In `docs/intentional-differences.md` |
| Objects through `FUN_004a9c20` | `FUN_004a99a0`, `0x7152ec` | yes (recompiled) | compared with the original: reference-86box | Compared: the world region of the frames at rest |
| Palette | `FUN_00447d10`, `FUN_004c9c90` | yes (host) | compared with the original: reference-86box | `[PALET]` first argument, `e00_pal.pcx`, `e02_pal.pcx`, the same 768 bytes. `CreatePalette` and `IDirectDrawPalette` with its own copy in `directx.js`. The world as indices in an R8 target, through the palette to colour, `COLOR_FRAG`. Compared: the frames at rest, in RGB |
| Flash: palette entries 0 to 254 at 235, one flip | `FUN_0043b0b0`, `FUN_0043b130`, `FUN_0043b0f0` | yes (host) | checked on Amsterdam: check-software | `setPalette` queues each palette a flip showed, so the flash gets its own present. check-software reads the port's palette only: no frame of the guest caught a flash |
| Ramp device, map blend 7 | `FUN_004bbd40`, `0x44bc25` | yes (host) | compared with the original: reference-86box; checked on Amsterdam: check-software | Copy mode: the texel's palette index goes to the target. No vertex colour, blending, fog or filter. `setIndexed`, `FRAG_INDEXED`. Compared: the frames at rest. check-software read the device at both modes |
| 8-bit surfaces, screen and buffer screen | `FUN_004c4fa0`, `FUN_004c55c0`, `FUN_004c8540` | yes (host) | boot only: boot-all | `PAL8`, `screenFormat`, `host.bufferScreen`, byte-wide `softFill` and `softBlit` in `directx.js`. All 10 etappes boot at both modes |
| Untextured draws, state 1 = 0: ramp index from blue | `0x4451dc`, `FUN_00446fe0`, `FUN_0043de00`; `render-8bit.md` | yes (host) | compared with the original: reference-86box | Palette index `255 - floor(blue / 17)`, `FRAG_INDEXED`. Compared: skid marks and smoke, by eye and by reading palette indices, against frames at 320x200 on the K6-2 550. `gfx_bwlk` takes the same branch and was not seen |
| Stipple by the first vertex's alpha, 4x4 matrix | `0x4451dc`, `FUN_00446fe0`, `FUN_0043de00`; `render-8bit.md` | yes (host) | compared with the original: reference-86box | `16 * T < alpha`, `STIPPLE` in `FRAG_INDEXED`, on the mode's grid at any render size. Compared: the same frames. The thresholds no frame was read at are inferred, `render-8bit.md` |
| Colour buffer stays between frames, only Z clears | `FUN_004c0840`; `evidence/reference-86box/guest-640-offroad.png` | yes (host) | not verified | `presentIndexed`: the world's target keeps its colour. The guest shows it off the track, the sky's rectangle with old pixels below it. No frame of the port was set against that one |
| No sky mesh, car lights, reflection or blending | `FUN_0043d3c0`, `FUN_0043d4f0`, `FUN_00436510`, `FUN_00437370`, `FUN_0044baa0` | yes (recompiled) | compared with the original: reference-86box | Game code's gates. Compared: the frames at rest |
| Black opaque blob shadows only | `FUN_00443710`, `FUN_00443ef0` | yes (recompiled) | compared with the original: reference-86box | The player's too. Compared: the frames at rest |
| No finish flag | `FUN_0043ac80`, `FUN_0043fdd0` | yes (recompiled) | not verified | Its only call is behind `0x6fb8d0`. check-software ran a whole race to its results and does not look for it. End of race was not compared |
| `VISIBLECHUNKS` floor 15 and smoke's 12 FPS gate on a slow machine | `FUN_0044cb30`, `FUN_00446c70` | yes (recompiled) | not verified | Seen firing in the guest. In the port `1/dt` is 60, so `VISIBLECHUNKS` stays 25 and smoke always spawns, which is what the code gives on a fast machine. `?chunks=15` sets the view distance for the comparison. In `docs/intentional-differences.md` |
| Both targets to the canvas with square edges | none, port | yes (host) | not verified | `SCREEN_FRAG`: one screen pixel of blend, so no uneven pixels at scales that are not whole. A CRT had neither. In `docs/intentional-differences.md` |
| `wait_lo` pictures | `FUN_00449cb0` | yes (host) | boot only: boot-all | The game decodes them in `race.boot()`, which shows nothing until it returns, as on the other path. The loading page shows `eNN-lo.png`, and `eNN-8.png` for the PCX of `wait_hi`, through the game's palette, with `bar8-NN.png` from `overlay.pcx`: `prepare_loading`, `prepare_loading_bar_8` in `tools/prepare-assets.py`. No check looks at that page, and the guest's pictures were not compared |

## Port render settings (brief section 8)

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `3D-resolutie` Auto is CSS size times DPR | none, port setting | yes (host) | checked on Amsterdam: check-race-ui | 1600x720 at 800x360 DPR 2. `Settings.renderSize` |
| `3D-resolutie` Auto on the 8-bit path: the mode's own pixels on the view's shape | none, port setting | yes (host) | checked on Amsterdam: check-software | 853x480 at `RESOLUTION` 1 and 427x200 at 0, in a 1280x720 window. `modeGrid`, `Settings.renderSize`. Presets and render scale act as on the other path. In `docs/intentional-differences.md` |
| `3D-resolutie` presets 360p to 1440p | none, port setting | yes (host) | checked on Amsterdam: check-race-ui | 480p checked, during a race and across a reload. Others not run. `RESOLUTIONS` in `settings-panel.js` |
| `Renderschaal` 25% to 200%, both axes | none, port setting | yes (host) | checked on Amsterdam: check-race-ui | 50%, 100% and 200% checked. `Settings.renderSize`, `D3DRenderer.setRenderSize` |
| Effective size shown | none, port setting | yes (host) | checked on Amsterdam: check-race-ui | `SettingsPanel.refresh`, `TfrmDisplaySettings.refreshPortRows`. The check read the panel's line |
| Size kept within the GPU's limit, and shown | none, port setting | yes (host) | checked on Amsterdam: check-race-ui | Stand-in limit of 2048: 2048x922, `GPU-limiet`. `maxTextureSize`, `Settings.renderSize` |
| Settings survive a restart | none, port setting | yes (host) | checked on Amsterdam: check-race-ui | 480p at 50% after a reload. `localStorage`, `Settings` |
| HUD draws at native size at any render scale | none, port setting | yes (host) | checked on Amsterdam: check-race-ui | Drawing buffer stays native. `D3DRenderer.present`. On the 8-bit path the HUD stays on the mode's grid at any render scale: [`hud.md`](hud.md) |
| Game state independent of render size | `FUN_0044cb80` | yes (host) | checked on Amsterdam: repeat-trace | Checksums over all 485 physics bodies equal at all 71 samples at 1280x720 and 800x360 DPR 2 at 8x throttle |
| 800x360, DPR 2, 8x CPU throttle holds 30 FPS | brief section 9 | yes (host) | checked on Amsterdam: benchmark | Mean 60, worst second 60, buffer 1600x720, Auto, 100%. Desktop GPU, which throttling does not slow |

## View and projection

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Viewport `dvClipX -1, dvClipY H/W, dvClipWidth 2, dvClipHeight 2H/W` | `FUN_004c0e10` | yes (host) | checked on Amsterdam: reference-frame | `D3DRenderer.updateClipMap` applies the same map. Of the stored values it reads `dvClipY` and the size, which differ at `RESOLUTION` 0: 0.625, 320x200 |
| Race projection, near 1.33333, far 12500, 67.5 degrees | `FUN_004b39d0`, `0x44c305` | yes (recompiled) | checked on Amsterdam: reference-frame | Same code. Raw matrix reaches the shader, `D3DRenderer.setTransform` |
| HUD projection, near 0.99, far 10000, 90 degrees | `0x484337`, `FUN_00485ed0` | yes (recompiled) | checked on Amsterdam: reference-frame | Per HUD batch, `D3DRenderer.batch` |
| View matrix | `FUN_00438670`, `FUN_004b3a60` | yes (recompiled) | checked on Amsterdam: reference-frame | Blended between ticks, see below |
| `ChangeFOV`: `pw_fastf` to 0.6 in 1 s, back to 0.375 in 0.5 s | `FUN_004517f0`, `FUN_00474940`, `bonus.dso` | yes (recompiled) | not verified | `FUN_004517f0` runs per tick, `Race.tick`. Projection taken from the latest tick |
| Numpad + and - zoom | `FUN_0044cf90`, gate `TWEAK_MODE` | n/a | not verified | Outside the original's reachable content: shipped `TWEAK_MODE=0` |
| D3D z 0..1 to GL | `dvMinZ 0, dvMaxZ 1` | yes (host) | checked on Amsterdam: reference-frame | `2z - w`, `updateClipMap` |
| Framing at exactly 4:3 | `FUN_004c0e10` | yes (host) | not verified | `xr = 1`, `yr = 0.75`: same mapping by arithmetic. `reference-frame` does not record the port's window shape |
| `RESOLUTION` 0 on a 4:3 view: clip 0.625, y stretched 1.2 | `FUN_004c0e10`; `render-8bit.md` | yes (host) | compared with the original: reference-86box; checked on Amsterdam: check-software | `updateClipMap`. Compared: the port at 640x480 reduced to 320x200 against the guest's frame. The guest's card double-scans to 640x400; that this filled 4:3 on a monitor of the period is inferred. check-software read clip 0.625 and 200 rows. Wider views add width at the same `xr` as 640x480. In `docs/intentional-differences.md` |
| Wider than 4:3: keeps vertical field of view, more at the sides | owner's patch parts 2, 3 | yes (host) | not verified | `updateClipMap`. `check-race-ui` covers the buffer size, not the view |
| Taller than 4:3: keeps horizontal field of view, more above and below | none, brief section 8 | yes (host) | not verified | `updateClipMap`. `check-race-ui` covers the buffer size, not the view |
| Portrait area: view on top, controls below | none, brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Portrait and back during a race, controls below the view. `RaceRunner.layout` |
| No culling by aspect in game code | `render-frame.md` section 8 | yes (recompiled) | not verified | `frustumCulled = false`, `syncMeshes` |
| 55 degree chunk window test on wide shapes | `FUN_0044df70` | yes (recompiled) | not verified | Effect recorded in `docs/intentional-differences.md` |

## Vertex types and primitives

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `D3DLVERTEX`, 32 bytes | `FUN_004be340` | yes (host) | checked on Amsterdam: reference-frame | `copyVerts`, attributes in `setupGeometry` |
| `D3DVERTEX` | No writer of mesh type 1 | n/a | not verified | Outside the original's reachable content. Dead branch in `copyVerts` |
| `D3DTLVERTEX` | Radar only, `0x4426a0` unreferenced | n/a | not verified | Outside the original's reachable content. Dead path `uScreenMap` in `VERT` |
| `.d3d` 33-byte records | `FUN_004be590` `0x4be78d` | yes (recompiled) | boot only: boot-all | 124 models |
| `.d3d` 49-byte records with colour | `FUN_004be590` `0x4be907` | yes (recompiled) | boot only: boot-all | 1,847 models |
| `.rmp` planes, colour `0x00RRGGBB`, alpha 0 | `FUN_004b31a0` | yes (recompiled) | checked on Amsterdam: reference-frame | Other 9 etappes: boot only |
| Tri list, indexed | `FUN_004be340`, `FUN_004aecd0` | yes (host) | checked on Amsterdam: reference-frame | `drawIndexed` |
| Tri strip | `FUN_00445180`, `FUN_00440160`, `FUN_00460070` | yes (host) | fix check: flag strips at 7 window shapes | Original winding, `drawPrimitive` |
| Tri fan | `FUN_00446fe0`, `FUN_0043de00`, `FUN_0047b110` | yes (host) | checked on Amsterdam: reference-frame | Seen as the player's shadow only. `drawPrimitive` |
| Line list | `FUN_00462cf0`, AI debug, gated | n/a | not verified | Outside the original's reachable content. Dropped in `drawPrimitive` |
| `D3DDP_WAIT`, `DONOTUPDATEEXTENTS` flags | `win32-surface.md` C3 | yes (host) | not verified | No meaning in GL, ignored in `directx.js` |

## Render states

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| State 1 `TEXTUREHANDLE` | 19 sites, index cache `0x73b4ec` | yes (host) | checked on Amsterdam: reference-frame | `SetRenderState` in `directx.js`, `texInfo` |
| State 4 `TEXTUREPERSPECTIVE` 1 | `0x4bb908` | yes (host) | checked on Amsterdam: reference-frame | Always perspective in GL |
| State 7 `ZENABLE` | `0x4bb976`, `0x440355`, `0x486107` | yes (host) | checked on Amsterdam: reference-frame | `pipelineKey`, `materialFor` |
| State 8 `FILLMODE` | `FUN_004be340`, writer of mesh `+8` not found | no | not verified | Ignored. No reachable writer found; unresolved |
| State 9 `SHADEMODE` 2 | `0x44bce4` | yes (host) | checked on Amsterdam: reference-frame | Smooth `vColor`, `VERT` |
| State 14 `ZWRITEENABLE` | `0x4a753d`, `0x4a7639` | yes (host) | not verified | `pipelineKey`, `materialFor` |
| States 17, 18 filter values 1 and 2 | `FUN_004bc200` | yes (host) | fix check: FILTER 0 and 2 forced, same tick, batches and crops read back | Per batch: `pipelineKey` bit 18, `uNearest`, `sampleTex` |
| States 17, 18 filter values 3, 4, 6 | `FUN_004bc200`, mip flag | partial | fix check: mipmapping=1, FILTER=0 gives TEXTUREMAG 3, world nearest, HUD linear | 3 is nearest, others linear, level 0 only. Hand edit only |
| State 19, 20 blend factors | 10 and 12 sites | yes (host) | checked on Amsterdam: reference-frame | Seen as shadow and lights only. Table `BLEND`, `materialFor` |
| State 21 `TEXTUREMAPBLEND` | 4 sites | yes (host) | checked on Amsterdam: reference-frame | `uMapBlend` in `FRAG` |
| State 27 `ALPHABLENDENABLE` | 18 sites | yes (host) | checked on Amsterdam: reference-frame | `pipelineKey` bit 0 |
| State 28, 34 fog | `FUN_00457040`, `0x4bba32` | partial | not verified | Off on shipped data. See Fog |
| State 41 `COLORKEYENABLE` 1 | `0x4bb93f` | yes (host) | checked on Amsterdam: reference-frame | Shader discard, `FRAG` |
| State 47 `ZBIAS` 1 | `0x443dc7`, `0x4445f8` | yes (host) | checked on Amsterdam: reference-frame | Polygon offset, size chosen. Seen on the player's shadow only. `materialFor` |
| Default `ZFUNC` | no `SetRenderState` site | yes (host) | not verified | Three.js `LessEqualDepth`. D3D default from the SDK, inferred |
| Z buffer, 16 bits | `FUN_004c0610`, `FUN_004c04b0` | yes (host) | not verified | Game sees 16. GL depth from the browser, 24 bits where it gives that. In `docs/intentional-differences.md` |
| Colour buffer, 16 bits | mode table `0x5b37b0` | yes (host) | not verified | 32-bit canvas. In `docs/intentional-differences.md` |
| Default `CULLMODE` | no `SetRenderState` site | yes (host) | checked on Amsterdam: reference-frame | `BackSide`, `materialFor` |

## Blending

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `TEXTUREMAPBLEND` 2, modulate, all 3D draws | `0x44bc4d` | yes (host) | checked on Amsterdam: reference-frame | `FRAG` |
| `TEXTUREMAPBLEND` 1, decal, before first frame | `0x4bb9ad` | yes (host) | not verified | Never visible, inferred |
| `TEXTUREMAPBLEND` 7, copy | `0x44bc25`, `0x43d476` | yes (host) | compared with the original: reference-86box | `FRAG_INDEXED` on the 8-bit path. Compared: the frames at rest. The branch in `FRAG` is reached only with hand-edited `FOG=1`, not supported on purpose: see Fog |
| Alpha mode 0: ONE, ZERO, drawn at once | ctor `0x4b574c` | yes (recompiled) | checked on Amsterdam: reference-frame | `NoBlending`, `materialFor` |
| Alpha mode 1: SRCALPHA, INVSRCALPHA, ZWRITE 0 | `0x5afa50`, `0x437254`, `0x47ce69` | yes (recompiled) | checked on Amsterdam: reference-frame | Reflection and HUD |
| Alpha mode 2: ONE, INVSRCCOLOR, ZWRITE 0 | `0x5afa50`, `0x436318`, `0x436c8b` | yes (recompiled) | checked on Amsterdam: reference-frame | Car lights, one car |
| Alpha mode 3: SRCALPHA, INVSRCALPHA, ZWRITE 1 | `0x5afa50`, `0x431630` | yes (recompiled) | not verified | |
| Alpha queue, FIFO, at most 200 | `FUN_004a74a0`, `FUN_004a74f0` | yes (recompiled) | fix check: GL draw calls of one frame match the capture order | Order kept: `CustomBlending` without `transparent`, `sortObjects` false |
| `Transparante effecten` off, `alpha_blending=0` | `FUN_00449b30`, `FUN_0044baa0` | yes (recompiled) | form check | Writes the key in `data.js`. No race run with it off |
| Vertex alpha decides blending, texture alpha is a mask | `FUN_004c2b90`, patch notes part 6 | yes (host) | not verified | `FRAG` |

## Fog

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Fog off with shipped data | `fog=0`, `FUN_0043d3c0`, no menu string | yes (recompiled) | not verified | |
| `FOG=1` or `2`, 50% per launch, `0xB4B4C8`, 3.5 to 1000 | `FUN_0043d3c0`, `FUN_00457040` | no | not verified | Hand edit of `game.ini` only, not supported on purpose. `FRAG` would give a flat colour |
| Fog triggers 16, 17 | `FUN_00456d40`, `FUN_00456d90`, 0 instances in `.pmp` | n/a | not verified | Outside the original's reachable content |
| `FUN_00457370`, colour wash `FUN_0043b280` | No caller, `0x6fcdf0` only stored 0 | n/a | not verified | Outside the original's reachable content |
| `FogOn`, `FogOff` in `etappeN.ini`, `[world] lighting` | No such strings in `spel.dat` | n/a | not verified | Editor labels |
| Viewport `SetBackground` | `FUN_004576c0`, `FUN_004576f0`, fog path only | no | not verified | `setBackground` is a no-op. Fog path only |
| `SetLightState` 4 to 7 | 15 sites in fog code | no | not verified | Stored and not read, `setLightState`. Fog path only |

## Materials, lights and car colour

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| No D3D lights | no `CreateLight`, no type-1 mesh | yes (recompiled) | checked on Amsterdam: reference-frame | Nothing to do in the host |
| Material objects | `FUN_004bb190`, 26 `SetMaterial` sites | yes (host) | boot only: boot-all | Stored, no draw reads them. `IDirect3DMaterial2` in `directx.js` |
| Baked vertex colours, track and scenery | `.rmp`, `.d3d`, `FUN_004be590` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Car colour from the track under the car | `FUN_004a8200`, `FUN_004ad710` | yes (recompiled) | not verified | Captured at draw time, `copyVerts` |
| Same colour on linked parts and chained owners | `FUN_004a8100` | yes (recompiled) | not verified | |
| Car fade alpha | `FUN_00431140`, `FUN_00430ea0` | yes (recompiled) | not verified | |
| Script colour, `setcolor`, `SetColor` | `FUN_004a8030`, `FUN_00473db0`, `FUN_00473de0` | yes (recompiled) | not verified | Binding inferred |
| `object_lights` key | one reference, `0x449c0e` | yes (recompiled) | not verified | Gates nothing in the original |

## Per etappe: environment

Ambient is `raser.ini [MAPS]` args 11 to 13, R = G = B. Texture names are args 2 to 5: `e0N_weg`, `e0N_gras`, `e0N_gra2`, `e0N_vang`. All run as shipped; the host serves the files. Evidence for all rows: `FUN_0044a690`, `FUN_004a7230`, `FUN_00497ab0`, `FUN_0043d230`, `eNN_anim.ini`.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Etappe 0 Amsterdam: `skybox00`, `sky00`, `skyref02`, ambient 50, 1037 objects | `e00_anim.ini`, `etappe0.*` | yes (recompiled) | checked on Amsterdam: reference-frame | Start line only |
| Etappe 1 Rotterdam: `skybox01`, `sky01`, `skyref01`, ambient 70, 616 objects | `e01_anim.ini`, `etappe1.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 2 Scheveningen: `skybox02`, `sky02`, `skyref02`, ambient 128, 628 objects | `e02_anim.ini`, `etappe2.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 3 Wenen: `skybox03`, `sky03`, `skyref02`, ambient 128, 991 objects | `e03_anim.ini`, `etappe3.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 4 Berlijn: `skybox04`, `sky04`, `skyref02`, ambient 70, 1015 objects | `e04_anim.ini`, `etappe4.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 5 Hamburg: `skybox05`, `sky05`, `skyref05`, ambient 70, 328 objects | `e05_anim.ini`, `etappe5.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 6 Frankfurt: `skybox06`, `sky06`, `skyref06`, ambient 70, 584 objects | `e06_anim.ini`, `etappe6.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 7 BodenSee: `skybox07`, `sky07`, `skyref02`, ambient 70, 371 objects | `e07_anim.ini`, `etappe7.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 8 Munchen - Wenen: `skybox08`, `sky08`, `skyref08`, ambient 60, 770 objects | `e08_anim.ini`, `etappe8.*` | yes (recompiled) | boot only: boot-all | |
| Etappe 9 Country etappe: `skybox09`, `sky09`, `skyref02`, ambient 66, 778 objects | `e09_anim.ini`, `etappe9.*` since the track update | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | `static.ini` names it `Download-race`, the menu's art `trname09` reads "Country etappe". Sky and ambient were on the disc; disc 1.01 without updates has no `etappe9.*`. Picture by eye only, no comparison with the original |
| `[MAPS]` rows 10, 11, ambient 128 | no files | n/a | not verified | Outside the original's reachable content |

## Frame passes, in original order

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Wait for VBL | `0x44da61`, `WAITVBL` | no | not verified | `WaitForVerticalBlank` no-op in `directx.js`. Browser decides |
| Z clear only, colour kept | `FUN_004c0840` | partial | not verified | `present` clears to black too, with a 3D card. In `docs/intentional-differences.md`. The 8-bit path keeps the colour: see there |
| Track: road, land, extra, rail | `FUN_004aec50`, `FUN_004aecd0` | yes (recompiled) | checked on Amsterdam: reference-frame | Static buffers, `staticVerts`. `benchmark`: 4070 instead of 31770 vertices uploaded per frame |
| Track window wrap, 8 draws | `FUN_004af520` | yes (recompiled) | not verified | |
| Sky after track | `FUN_0043d4f0` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Car shadows before objects | `FUN_00443710` | yes (recompiled) | fix check: GL draw calls of one frame match the capture order, shadows before objects | No `transparent` in `materialFor`, so capture order holds |
| Objects, bodies, wheels, mode 0 | `FUN_004a9a20`, `FUN_004a8cb0` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Alpha queue | `FUN_004a74f0` | yes (recompiled) | fix check: GL draw calls of one frame match the capture order | |
| Particles | `FUN_0045dce0` | yes (recompiled) | fix check: GL draw calls of one frame match the capture order | |
| AI debug lines | `FUN_0040aaf0` etc., gates off | n/a | not verified | Outside the original's reachable content |
| HUD inside the scene, before late effects, by depth | `FUN_004882f0`, `FUN_00484fc0` | partial | not verified | On purpose: drawn last in its own scene after `clearDepth`, at native size, `present`. Late effects show through alpha HUD parts, and no world geometry can cover the HUD. The 8-bit path has the same order, with the HUD on the mode's grid, `presentIndexed` |
| Skid marks after HUD | `FUN_00445180` | partial | not verified | On purpose: before the HUD, as above |
| `gfx_wolk` after skid marks | `FUN_00446fe0` | partial | not verified | On purpose: before the HUD. Order among world batches kept |
| Finish flag | `FUN_00440160` | partial | not verified | On purpose: before the HUD. See Finish flag |
| `gfx_bwlk` | `FUN_0043de00` | partial | not verified | On purpose: before the HUD. Drew 0 times in a whole Amsterdam race |
| Flitser's white frame after the scene | `FUN_0043b130`, `FUN_004c4e00` | yes (host) | fix check: real fill at tick 20720; pixels read back at 144, 60, 30, 20 Hz stand-ins and render scale 50 | `fillScreen`, `drawScreenFill`. One tick long, shorter than at 25 to 30 FPS |
| Colour-0 fills at start-up and exit | `FUN_004c4fa0`, `FUN_00448160` | no | fix check: with Space held at exit the pixel kept its last-frame value over 8 presents | On purpose: the page swaps canvases there and the last frame stays up while keys are released |
| GDI debug text | `FUN_0040b380`, `FUN_004c5930`, gates off | n/a | not verified | Outside the original's reachable content. `TextOutA` no-op in `source/host/win32.js` |
| Race console | `FUN_00471c90`, needs `TWEAK_MODE` | n/a | not verified | Outside the original's reachable content |
| `draw_2d_display` | `thunk_FUN_0043f8a0`, empty | yes (recompiled) | not verified | Draws nothing in the original |
| Two flips with nothing drawn, then frozen dialog | `FUN_0044cb80`, `FUN_0044ca80` | yes (host) | checked on Amsterdam: check-race-ui | `endFrame` ignores empty flips. `RaceRunner.frame` presents at alpha 1 under a dialog: 98 frames, all alpha 1. The check reads the alpha, not pixels |
| Picture from one pass of the loop, nothing blended | `FUN_0044cb80` | partial | not verified | On purpose: the port blends between ticks. See below. `repeat-trace` covers game state only |

## Picture between ticks (port addition)

The original has no such thing, so nothing here can be compared with it. In `docs/intentional-differences.md`, Rendering rate.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| World rows blended, cut above 30 units | none | yes (host) | not verified | `blendPalette`, `endFrame` |
| Camera blended through turns, cut when the eye jumps above 30 units | `FUN_004b3a60`, row 3 is `-dot(axis, eye)` | yes (host) | fix check: 28 s at a 144 Hz stand-in, 4031 presents, 0 unblended; 60 Hz, 1680, 0; camera switches of 85 and 62 units cut | `eyeAxis`, `blendPalette` |
| The player's shadow moves with its car between ticks | `FUN_00443770` copies the car's pose at `0x443ab8` | yes (host) | checked on Amsterdam: check-shadow | At a 144 Hz stand-in, within one tick the shadow moved in the car's frame by 2.87 units on average and 3.67 at most in 1.1.1, 0 now. `hook!playerShadow`, `blendPalette` |
| Moving vertices blended, same count, first vertex within 30 units | none | yes (host) | fix check: 67 of 3842 pairs in 1168 ticks were above 30 units before the first-vertex test | `noteMoving`, `blendPalette`. Skid strips, player's shadow, flag |
| Blob shadows blend with their car | `FUN_00443ef0` | yes (host) | fix check: recorded as moving vertices, same run | `drawIndexed`, 4 vertices with `ZBIAS` |
| `gfx_wolk` shows the latest tick | `FUN_00446fe0`, `qsort` per frame | yes (host) | fix check: 2968 smoke rows in 1168 ticks, none linked to the tick before | `SMOKE_VERTS`, `blends`. Steps at 60 Hz on faster displays |
| `gfx_bwlk` shows the latest tick | `FUN_0043de00`, `qsort` per frame | yes (host) | not verified | `BWLK_VERTS`, `blends`. It drew 0 times in a whole Amsterdam race, so the range never ran on real draws |
| All particles show the latest tick | `FUN_0045ec30` | yes (host) | fix check: 3922 particle rows in 1168 ticks, none linked to the tick before | `noBlend`, set in `D3DRenderer.attach` around `guard_0045dce0` |
| HUD shows the latest tick | none | yes (host) | not verified | `this.hud` in `blends` |
| Game state independent of the picture | `FUN_0044cb80` | yes (host) | checked on Amsterdam: repeat-trace | Checksums over all 485 physics bodies equal at all 71 samples at normal rendering, the mobile profile, and every second frame at 30 FPS |

## Loading

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `wait_hi` picture per etappe | `FUN_004416f0`, `FUN_00449cb0` | yes (host) | not verified | PNG on the loading page, `RaceRunner.load`. 4:3, centred. `check-flow` passes it and does not look at it. The 8-bit path has its own: see `wait_lo` pictures |
| `OVL_PROGRESS_BAR`, 11 frames, percent table in `raser.ini` | `FUN_004976d0`, `0x004415e0` | partial | fix check: 11 frames on a contact sheet, rectangle measured at 308.5, 438, 288, 24 | On purpose: original art at the original rectangle, `bar-00..10.png`, or `bar8-NN.png` on the 8-bit path, `RaceRunner.showBar`, but the frame follows the download, not `[progress]`, because `race.boot()` blocks |

## Draw distance

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Forward window `c-2 .. c+23` | `FUN_0044df70` | yes (recompiled) | not verified | |
| Sideways window `c-12 .. c+13` | `FUN_0044df70` | yes (recompiled) | not verified | |
| Backward window `c-23 .. c+2` | `FUN_0044df70` | yes (recompiled) | not verified | |
| N + 1 chunks, split past the end | `FUN_004af520` | yes (recompiled) | not verified | |
| `VISIBLECHUNKS=25`, at least 10 | `FUN_0044a630` | yes (recompiled) | not verified | Not raised by the port. `?chunks=N` with `?race=1` sets it for a comparison |
| N drops below 10 FPS, only above 25 in hardware, above 15 on the 8-bit path | `FUN_0044cb30` | yes (recompiled) | not verified | Never fires at 25, and on the 8-bit path never with `dt` fixed at 1/60. The floor of 15 was seen in the guest |
| No frustum, distance or size test | `render-frame.md` section 8 | yes (recompiled) | not verified | Three.js culling off, `syncMeshes` |
| No model LOD | `render-frame.md` section 8 | yes (recompiled) | not verified | `ltr_h.d3d`, `ltr_l.d3d` named by no INI |

## Objects and cars

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Object table, 2500, two scans | `FUN_004a9a20`, `FUN_004aa680` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Timed animations swap meshes, 14 groups | `anmtypes.ini`, Animsys | yes (recompiled) | not verified | |
| Damage clones | `FUN_004a7d70`, `FUN_004a8660` | yes (recompiled) | not verified | Copied per draw, `copyVerts` |
| Car body | `FUN_004353e0` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Wheels, 4 | `FUN_00435760` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Car lights, 4, `LIGHT_POSITIONS` | `FUN_00436170`, `FUN_00436510` | yes (recompiled) | checked on Amsterdam: reference-frame | Seen as tail lights on one car |
| Reflection, UV per car tick | `FUN_004370f0`, `FUN_00437370` | yes (recompiled) | checked on Amsterdam: reference-frame | One car |
| Car model `checker`, Edgar de Flits | `L0_anim.ini` | yes (recompiled) | checked on Amsterdam: reference-frame | The car in that frame, start line only |
| Car model `hotrod`, Tommie 'El Nino' | `L0_anim.ini` | yes (recompiled) | checked on Amsterdam: check-flow | Default in Quick Race. Picture not compared |
| Car model `countach`, James Brons | `L0_anim.ini` | yes (recompiled) | boot only: boot-all | |
| Car model `merceslk`, Katharina 'Kat' | `L0_anim.ini` | yes (recompiled) | boot only: boot-all | |
| Car model `buggy`, Barbarally | `L0_anim.ini` | yes (recompiled) | boot only: boot-all | |
| Car model `humvee`, D.T. Harry | `L0_anim.ini` | yes (recompiled) | boot only: boot-all | |
| Car model `politie`, politie-auto | `L0_anim.ini` | yes (recompiled) | boot only: boot-all | |

## Shadows

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Player's projected shadow, `S_SHADOW.PCX`, colour `0x80000000` | `FUN_00443770`, `FUN_00443100`, `FUN_0047b110` | yes (recompiled) | checked on Amsterdam: reference-frame | Start line only |
| Blob for other objects, chunk distance below 6 | `FUN_00443ef0`, `FUN_004a7200` | yes (recompiled) | not verified | Blends with its car, see above |
| `ZBIAS` 1 on both | `0x443dc7`, `0x4445f8` | yes (host) | not verified | `materialFor` |

## Particles

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Emitter list, draw per particle, no sort | `FUN_0045dce0`, `FUN_0045ec30` | yes (recompiled) | not verified | Guarded like the original's catch, `GUARDED` in `tools/recomp/replacements.py` |
| `particles` key | `FUN_00449b30`, `0x6fb918` | yes (recompiled) | not verified | Shipped 1 |
| 1 Spark | `FUN_0045d170`, `FUN_0045fd50`, `FUN_00460070` | yes (recompiled) | not verified | |
| 2 Leaf | `FUN_0045d170` | yes (recompiled) | not verified | |
| 3 Bird | `FUN_0045d170` | yes (recompiled) | not verified | |
| 4 Mail | `FUN_0045d170`, `0x4532b0` | yes (recompiled) | not verified | |
| 5 Trash | `FUN_0045d170`, `0x455250` | yes (recompiled) | not verified | |
| 6 Paper | `FUN_0045d170`, `0x454770` | yes (recompiled) | not verified | |
| 7 CarPart | `FUN_0045d170` | yes (recompiled) | not verified | |
| 8 Dirt | `FUN_0045d170` | yes (recompiled) | not verified | |
| 9 Dirtpiece | `FUN_0045d170` | yes (recompiled) | not verified | |
| 10 Water | `FUN_0045d170` | yes (recompiled) | not verified | |
| 11 Waterwave | `FUN_0045d170` | yes (recompiled) | not verified | |
| Rain, `part_rain` | `FUN_00462cf0`, only from unreferenced `FUN_004625e0` | n/a | not verified | Outside the original's reachable content |
| `gfx_sprk` | `0x445ec0`, `0x4460d0`, no reference | n/a | not verified | Outside the original's reachable content. Only init runs |

## Skid marks, clouds, finish flag

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Skid marks: 20 slots, 2 strips, `S_SFX`, INVSRCALPHA, SRCALPHA | `FUN_00445180`, `FUN_00444a60` | yes (recompiled) | not verified | Shader ignores vertex alpha for discard, `FRAG` |
| `skidmarks` key | `0x6fb90c` | yes (recompiled) | not verified | |
| `fade_skmarks` key | `0x6fb910`, `FUN_00444f80`, `FUN_00444ec0` | yes (recompiled) | not verified | |
| `gfx_wolk`: 70 slots, sorted, SRCALPHA, ONE | `FUN_00446fe0`, `FUN_00446f00` | yes (recompiled) | not verified | Draws seen by the fix check above; the look with a 3D card was not compared. The 8-bit path: see there |
| `gfx_bwlk`: 70 slots, sorted, `L1RACER3`, SRCALPHA, INVSRCALPHA | `FUN_0043de00`, `FUN_0043dc90` | yes (recompiled) | not verified | 0 draws in a whole Amsterdam race |
| `clouds` key, needs `SRCALPHA`, `ONE`, `alpha_blending` | `FUN_00446e80`, `FUN_00446e50` | yes (recompiled) | not verified | With hardware 3D only: on the 8-bit path clouds stay on |
| Clouds wiped and skipped below 10 FPS | `FUN_00446fb0`, `FUN_0043de00` | yes (recompiled) | not verified | Never fires with `dt` fixed at 1/60 |
| Flag: 10 strips of 34 vertices, 4:3 sheet, z wave 4 to 6, alpha `0x64` | `FUN_0043fff0`, `FUN_0043fe20` | yes (recompiled) | fix check: measured z range 4.000 to 6.000 | |
| Flag on at finish, state 5 | `FUN_0043ac80`, `FUN_0043fdd0` | yes (recompiled) | fix check: went up at tick 36944 in whole bot races, looked at by eye | `check-flow` passes it and does not look at it |
| Flag: world = camera | `FUN_0043ff60` | yes (recompiled) | fix check: world times view is a plain scale | |
| Flag: filter off, 8 by 6 hard checks from `s_sfx` | `FUN_00440160`, `s_sfx.tga` | yes (host) | fix check: at FILTER=2 only the flag is nearest, squares hard | `pipelineKey` bit 18, `sampleTex` |
| Flag covers the view | at 4:3 by its size | yes (host) | fix check: reach 0.9999 to 1.0 of the view over a whole wave at 1280x720, 800x360, 1920x800, 390x468, 390x585; s = 1 at 960x720, 1000x900 | On purpose: `scaleFlag` grows the sheet above A = 1.66 and below A = 1.07. Equal to the original between those |
| `finish_flag` key | `0x6fb908` | yes (recompiled) | not verified | |

## Textures

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| TGA loader, 24 and 32 bit, rows by descriptor | `FUN_004c00b0` | yes (recompiled) | boot only: boot-all | Host gives lockable surfaces, `Lock` in `directx.js` |
| `rcs.img` member lookup, case-insensitive | `FUN_004c62c0` | yes (recompiled) | boot only: boot-all | Ranges from `race-files.json`, sync fallback, `game-files.js` |
| Missing TGA gives a bad pointer | `FUN_004c00b0` `0x4c0438` | yes (recompiled) | not verified | `boot-all` hit no such fault on any etappe and car |
| Magic (255,0,127) to key `0x0000` | `FUN_004c7ee0`, `0x44bb81` | yes (recompiled) | boot only: boot-all | |
| Other near-black to `0x0800`, stays opaque | `FUN_004c7ee0` | yes (recompiled) | not verified | Compare on raw value, `uploadPixels` |
| Near-magic to `0xF80F`, stays opaque | `FUN_004c7ee0` | yes (recompiled) | not verified | Same |
| Key read from the surface, first `Load` before `SetColorKey` | `FUN_004b9b40`, `FUN_004ba810` | partial | not verified | Key 0 until set, no re-upload, `uploadPixels`. Same result in `RESOLUTION` 3 and 4 |
| 565 to RGBA8 | none known for period cards | yes (host) | not verified | Rounded, not bit replication: off by 1 on 4 of 32 and 10 of 64 codes. `uploadPixels` |
| Texel discard, edges without fringe | patch notes part 6 | yes (host) | checked on Amsterdam: reference-frame | Choice, in `docs/intentional-differences.md`. `FRAG` |
| Repeat wrap | no address state set | yes (host) | checked on Amsterdam: reference-frame | D3D default inferred. `arrayFor`; `sampleTex` wraps on the nearest path |
| `IsLost` and `Restore` path | `FUN_004b8bc0` | yes (host) | not verified | `IsLost` returns 0 in `directx.js`, so never runs |
| Texture object table, 100 | `FUN_004b8b80` | yes (recompiled) | boot only: boot-all | |
| No texture alpha format | `FUN_004c2b90` | yes (recompiled) | boot only: boot-all | ARGB4444 branch unused, `uploadPixels` |
| PCX textures | `FUN_004cb630`, 8-bit only | yes (recompiled) | compared with the original: reference-86box; boot only: boot-all | Raw palette indices into a surface. `soft[0]`, `soft[1]` in `race-files.json` list pictures and fonts per mode, `game-files.js`. Compared: the textures in the frames at rest on etappe 0. All 10 etappes boot at both modes |
| RC.IMG sprites | `FUN_004cc580`, `FUN_004588f0`, no live draw | yes (recompiled) | boot only: boot-all | Surfaces only, no picture to reproduce |
| `.fnt` fonts | `FUN_004ca420`, live use under tweak only | yes (recompiled) | boot only: boot-all | Loaded, not drawn |
| Multi-size files, levels 512 to 32 | `FUN_004b9800`, `FUN_004b9840` | yes (recompiled) | boot only: boot-all | `softBlit` in `directx.js` |
| Mip chains with authored levels | `FUN_004b9890`, `FUN_004b9ab0` | no | not verified | Not supported, on purpose: `Load` uses level 0 only. Needs a hand edit of `game.ini`. The filter states on that path: see Render states |
| `Mip-mapping` checkbox | `M:0x488ba0`, not written by `M:0x48bcf0` | yes (menu port) | form check | Save only, as in the original, `TfrmDisplaySettings.btnOkClick` |
| `RESIZETEXTURE` | `0x73b208`, read only when `0x6fb8d0 == 0` | n/a | not verified | Software path, shipped 0 |
| `texturecopy` | `0x6fb8c8`, no effect on textures | yes (recompiled) | not verified | Shipped 0 |

## Texture detail and memory

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Size assignment at load | `FUN_00498760`, `FUN_00498030` | yes (recompiled) | boot only: boot-all | Shipped 4,000,000 on all pairs: no fatal |
| `[PRIORITY LIST]` | `FUN_00497dc0`, no shipped INI has it | yes (recompiled) | not verified | |
| Texture detail: Minimaal, 2 MiB | `M:0x4a7160`, `M:0x488bd8` | yes (menu port) | form check | Writes the key in `data.js`. No race run at this size |
| Texture detail: Normaal, 8 MiB, default | `M:0x4a7160`, `M:0x480dd4` | yes (menu port) | checked on Amsterdam: check-flow | All multi-size at 512 by the algorithm |
| Texture detail: Maximaal, 16 MiB | `M:0x4a7160`, `M:0x488bd8` | yes (menu port) | fix check: game.ini holds 16777216 after a whole race, Maximaal and Normaal enabled | Stays selectable after a race. Same textures as Normaal. A save lowered by an earlier build stays lowered until changed |
| `custom_texture_memory` clamp to measured | `FUN_0044c200` | yes (recompiled) | boot only: boot-all | |
| Array textures by size | none, port | yes (host) | checked on Amsterdam: check-flow | 128 layers below 512, 32 at 512, `arrayFor`. Fix check on uploads: 0 full array uploads, 22 to 25 single-layer uploads |

## Cached pipelines

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Object types 11, 14, 16, 17 | `FUN_00453400`, `FUN_004536e0` | yes (recompiled) | boot only: boot-all | |
| Shared video surface and handle | `FUN_004b2cb0` | yes (recompiled) | boot only: boot-all | |
| `Load` before a member's draw | `FUN_004b2e40`, `FUN_004ba4c0` | yes (host) | not verified | Repoints the surface, `loadTexture` |
| Queued alpha objects see the last `Load` | `FUN_004a74f0`, `FUN_004b5b10` | yes (host) | not verified | Layer read at draw time, `texInfo` |
| Slots reset after a wait | `FUN_004b2ea0`, `FUN_00458020` | yes (recompiled) | not verified | |

## Filtering and gamma

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `Bilineaire filtering` on, `FILTER=2`, world | `FUN_0044bbf0`, `FUN_004bc200` | yes (host) | checked on Amsterdam: reference-frame | `pipelineKey` bit 18 clear, linear array |
| `Bilineaire filtering` off, `FILTER=0`, world | `FUN_0044bbf0`, `FUN_004bc200` | yes (host) | fix check: at FILTER=0 all world batches nearest, 0 full array uploads | `sampleTex`, `texelFetch` with wrap |
| HUD always bilinear | `FUN_00483ed0`, `FUN_00485ed0`, `FUN_00486040` | yes (host) | fix check: at FILTER=0 HUD linear, speedometer crop within 8/255 of FILTER=2 | The state the game sets reaches the batch key. No filter shows on the 8-bit path: see [`hud.md`](hud.md) |
| Flag always nearest | `FUN_00440160` | yes (host) | fix check: at FILTER=2 only the flag nearest, squares hard | See Finish flag |
| Filter is per draw, one texture both ways in a frame | `render-textures.md` section 11 | yes (host) | fix check: same tick on fixed seeds, batches read back | Arrays stay linear; a filter change uploads nothing |
| `Helderheid`, `licht`, gamma 0 | `FUN_004c7ee0`, `M:0x48bcf0` | yes (recompiled) | checked on Amsterdam: reference-frame | Default |
| `Helderheid`, `donker`, gamma 1: `(c*c)>>8` | `FUN_00447a00`, `FUN_0044bad0`, `FUN_004c7ed0` | yes (recompiled) | form check | Radio writes the key in `data.js`. No race compared |

## `game.ini` and `raser.ini` graphics keys not listed above

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `overlay_detail` | `0x6fb924` | yes (recompiled) | checked on Amsterdam: check-race-ui | Key D through the touch button: 3, 0, 1. See [`hud.md`](hud.md) |
| `disable_overlay` | `0x6fb920`, gates the empty `draw_2d_display` | yes (recompiled) | not verified | |
| `radar` | `0x6fb970`, draw unreferenced | n/a | not verified | Outside the original's reachable content. Shipped 0 |
| `drawwp` | `0x6fb97d`, with `TWEAK_MODE` | n/a | not verified | Outside the original's reachable content |
| `BACKGROUND`, `[OPTIONS]` | `FUN_0044a540`, absent from shipped file | yes (recompiled) | not verified | |
| `OVERLAYELEMENTS` | `0x5ab3c0`, read by the HUD groups in `0x712784` mode 1 | yes (recompiled) | not verified | 15 in `game.ini` since the car update: key 5 keeps elements 1, 2, 4, 8. Absent on disc 1.01, so 0: key 5 hides all groups. Not exercised in any check. Not tweak-only |

## Code present in `spel.dat` that does not draw

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Radar draw | `0x4426a0`, no reference | n/a | not verified | |
| Mesh UV restore | `FUN_004bdff0`, gate `0x73b610` stays 0 | n/a | not verified | |
| Reflection debug print | `FUN_004518e0`, no caller | n/a | not verified | |
| Dashboard, old 2D HUD | `0x491510`, `0x43e130` etc., no reference | n/a | not verified | `hud-overlay.md` section 9 |
