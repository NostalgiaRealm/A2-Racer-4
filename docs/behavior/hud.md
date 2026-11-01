# HUD and overlays

What the race draws on top of the world in `spel.dat`, how the port places and draws it on any screen, and how that was compared. Part of [`../original-behavior.md`](../original-behavior.md). Status per feature: [`../parity/hud.md`](../parity/hud.md). World drawing: [`render.md`](render.md). Unless a line says otherwise this is the path with a 3D card. The 8-bit path has its own section.

Everything about the original here comes from static analysis of `spel.dat` and its data files unless a line says otherwise, so "Confirmed" means read from code and data, not seen running. `original-game-decompiled/dynamic/RESULTS.md` records that `spel.dat` never ran in that package's runtime test. It has since run under Wine in the reference runs, [`evidence/reference-wine/results.md`](../../evidence/reference-wine/results.md). For the HUD those give the countdown durations, see start digits, and three frames of the port at 640x480 against the unpatched game at the same moments, `side-ov8.png`, `side-go4.png`, `side-go8.png`: by eye the countdown digit and the HUD's positions and sizes are the same. The other picture of the HUD compared here is the owner's screenshot of his patched `spel.dat` under Wine, `A2 Racer 4 Patch/A2-Racer-4-Fixes/releases/test-v1.3.0/screenshots/4_4x3_1024x768.png`: car 0, start line of etappe 0, 4:3. The 8-bit path cannot run under Wine. It has run on an emulated Windows 98 machine, `reference-86box`, and in that section confirmed also means read from those frames.

What "same machine code" covers here: logic, data flow, timers, strings and draw order inside the HUD. What it does not cover: x87 results are f64, not 80-bit. Clocks are virtual: `GetTickCount` follows the ticks, and `dt` reads 0.1, 0.1, 0.1, 0.0156, 0.0167 in the first ticks and one tick after that, with its last bit alternating (`hook!updateClock` in `source/host/race.js`). Rendering goes through Three.js and audio through Web Audio, both reimplemented.

Detail for all sections: [`hud-overlay.md`](../research/hud-overlay.md). Addresses are `spel.dat` VAs.

Checks named below are on etappe 0 (Amsterdam) in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan unless stated. Procedures and results: [`../validation.md`](../validation.md).

| Name | Tool | What it covers here |
|---|---|---|
| `check-flow` | `tools/check-flow.mjs` | A whole race run by the bot, zero console errors, with car 1. It stores screenshots and does not look at them |
| `check-race-ui` | `tools/check-race-ui.mjs`, `evidence/race-ui/summary.json` | Named checks on input, dialogs, sizes and control rectangles, with car 0. Finish and game over are entered through `0x0044cda0` there. It does not compare HUD pictures |
| `check-driving` | `tools/check-driving.mjs` | Scripted driving in Node, no renderer |
| `run-bot` | `tools/run-bot.mjs` | A whole race headless, no renderer. The HUD update path runs, no output is examined |
| `boot-all` | `tools/build-race-lists.mjs` | All 10 etappes with all 8 cars for 2 s in Node, no renderer. A HUD load error is fatal, so this shows each file loads and nothing more |
| `reference-frame` | By eye | The first race frame against the owner's screenshot above. The check does not record the port's window shape |
| `reference-wine` | `tools/reference-wine/`, `evidence/reference-wine/results.md` | The original `spel.dat` under Wine on etappe 0, held to 60 ticks per second from outside, with the same key scripts on the port. For the HUD: the durations of the countdown states, and three frames by eye at 640x480. Not a pixel comparison |
| `reference-86box` | `tools/reference-86box/`, `evidence/reference-86box/results.md` | The original `spel.dat` on a throwaway copy of the owner's 86Box Windows 98 machine, on etappe 0 with car 0, for the 8-bit path only. For the HUD: its text region in frames at rest, pixel-exact in RGB, at both modes. The machine: [`render.md`](render.md), checks |
| `check-software` | `tools/check-software.mjs`, `evidence/software/flow/summary.json` | The 8-bit path by real clicks in the real menu, at 1280x720, with a whole race by the bot. It reads state, not pictures |
| fix check | One-off script | Written for one change and run once, on Amsterdam, partly with touch emulation at DPR 2. Not kept in `tools/`. Screenshots judged by eye. Not a comparison with the original |
| launch check | One-off script, `fix check: launch through the menu, 6 s of gas, 0 console errors` | The one check of track 9 with car 7, not Amsterdam, on the final build when the updates came in, in headless Chromium: the real menu, a race on the keyboard device, 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`, by eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else, no comparison with the original. The original has not been run with the updates |

No real phone or tablet was used. Sound was checked by state only.

## HUD: structure, lifecycle and draw order

**Original behaviour.** The HUD is a retained scene graph of textured 3D meshes, not 2D blits. Every speedometer part, sign, portrait and text glyph is one `SetTransform(WORLD)` plus one `DrawIndexedPrimitive`. A normal frame has about 25 elements and 70 glyphs.

| Step | Code |
|---|---|
| Global `CRaceOverlay` at `0x007126e8`, first member `m_Manager` | ctor `0x00487ea0`, `0x00483ed0` |
| Load INI, build graph, state 0 | `0x00487f20` from `0x0044c200` |
| Wait element | `0x004885b0` |
| Other elements, in order: Portraits, Statistics, Requestors, Communicator, Start | `0x00488380` at the end of `0x0044c200` |
| State 1 | `0x0044c7d7` |
| Each frame, inside `BeginScene`, after road, objects and particles, before skid `0x00445180`, clouds `0x00446fe0`, flag `0x00440160`, `bwlk` `0x0043de00` | `0x0044da30` calls `0x004882f0` if `overlay_detail > 0` and `0x712784 != 2` |
| Update all elements with the state, then draw | `0x00488ef0`, then `0x00484fc0` |

The HUD has no update outside rendering. Pass state: view identity, own projection (near 0.99, far 10000, fov pi/2), filter forced on, blend `SRCALPHA`/`INVSRCALPHA`, Z test and write on. Parts depend on depth: body mesh z 1, stripes 2, glass 3, needles 1, knobs 0.5, health bar 0, backing 0.3. HUD depth is about 0.01 at z = 1, so it wins against the scene by depth, not by order.

Keys live in the shipped game, with no tweak gate:

| Key | Effect | Code |
|---|---|---|
| `5` (`CM_KEYB_5`, edge) | `0x712784`: 0 to 1, then back to 0 (2 only in tweak mode). In mode 1 every group tests its bit in `OVERLAYELEMENTS`. Since the car update `game.ini` has 15, so elements 1, 2, 4, 8 stay. Disc 1.01 without updates has no such key, so 0: all groups hide. Manual: dashboard on/off | `0x0044d823` |
| `D` (`CM_KEYB_D`, edge) | `overlay_detail` + 1, if above 1 then 0. Starts at 3, so the first press gives 0 (no HUD pass), then 0 and 1 alternate | `0x0044d990` |

`game.ini [GFX OPTIONS]`: `overlay_detail=3`, `disable_overlay=0` (only gates the empty `draw_2d_display`), `radar=0`, `finish_flag=1`.

**Evidence.** `spel.dat` `0x0044da30`, `0x004882f0`, `0x00488ef0`, `0x00484fc0`, `0x00485ed0`, `0x00486040`, `0x0044cf90`. [`hud-overlay.md`](../research/hud-overlay.md) sections 1, 2, 7. [`render-frame.md`](../research/render-frame.md) table row 10. [`input.md`](../research/input.md) C7.

**Status.**
- Confirmed: all of the above.
- Inferred: none.
- Unresolved: whether a mesh in `gen_anim.ini` can be other than type 2, which would make `RGBA` silently ineffective on it. Any effect of `CTextureDetailManager` on `overlay`.

**Where the port implements it.** Runs as shipped in the recompiled code. The host supplies the Direct3D device (`source/host/directx.js`), the capture (`setRenderState`, `setTransform`, `drawIndexed` in `source/render/d3d-renderer.js`), and the wrapper `hook!hudDraw` in `source/host/race.js`, which marks the pass and calls `HudLayout.apply` and `restore` around `0x00484fc0`. `D3DRenderer.present` draws the HUD batches in their own scene, at native size, after the world and after `clearDepth`. The HUD keeps its depth test inside that pass. HUD vertices are copied at every full capture, so per-frame vertex colours are honoured. HUD matrices do not blend between ticks. The filter the game forces on for the pass reaches the batch key, so the HUD stays bilinear whatever the world uses ([`render.md`](render.md) section 24). On the 8-bit path the HUD has its own target on the mode's grid and shows no filter: see that section below.

Intentional difference: the late effects (skid, clouds, flag, `bwlk`) draw before the HUD pass instead of after it, because the HUD must draw at native size. In the original they fail the Z test behind HUD parts. In the port a part with alpha, such as a racer portrait at `0xb4`, blends over them, and no world geometry can cover a HUD part.

Keys 5 and D work on the keyboard and through the touch buttons `Dashboard` and `Detail`: behind `Meer` in landscape, always shown in the portrait panel. The pad has no button for them, on purpose: no free button is left.

**How it was compared.** Same machine code for update logic and order inside the HUD. `reference-frame`, by eye, for the look of the first frame. `run-bot` ran the HUD update path through a whole race without a fault, with no renderer, so no HUD output was examined. `check-race-ui`, `touch: Meer shows Roepen, Dashboard and Detail, which work`: `0x712784` goes 0, 1, 0 and `0x6fb924` goes 3, 0, 1, which is the code's cycle. The picture in those modes was not compared. The mask at 15 is not exercised in any check; the vfs trims the key, so the port reads 15 like the original.

## HUD: overlay INI per car

**Original behaviour.** `0x00487f20` picks the file with `switch (0x6fba5c)`: 0..7 give `overlay0.ini`..`overlay7.ini`, anything else `overlay5.ini`. `0x6fba5c` is `[PLAYER] car`, fatal outside 0..10. It is read once per process, and `spel.dat` starts anew per race. `overlay7.ini` comes with the car update, for car 7, the truck of `De Schaduw`, reached by the original's own unlock rule. Disc 1.01 without updates has no such file. Cars 8 and 9 still have no route.

After parsing, the eight files differ only in three `Anim` keys, plus `PLAYER_6` in `overlay6` and `PLAYER_6`, `PLAYER_7` in `overlay7`:

| CAR | Character | File | Body, requestor meshes | Extra |
|---|---|---|---|---|
| 0 | Edgar de Flits | `overlay0.ini` | `ovl0com1`, `ovl0spd1`, `ovl0reqb` | |
| 1 | Tommie 'El Nino' | `overlay1.ini` | `ovl1com1`, `ovl1spd1`, `ovl1reqb` | |
| 2 | James Brons | `overlay2.ini` | `ovl5com1`, `ovl5spd1`, `ovl5reqb` (the `2` anims map to the `5` models) | |
| 3 | Kat | `overlay3.ini` | `ovl3com1`, `ovl3spd1`, `ovl3reqb` | |
| 4 | Barbarally | `overlay4.ini` | `ovl4com1`, `ovl4spd1`, `ovl4reqb` | |
| 5 | D.T. Harry | `overlay5.ini` | `ovl5com1`, `ovl5spd1`, `ovl5reqb` | |
| 6 | politie-auto | `overlay6.ini` | `ovl5com1`, `ovl5spd1`, `ovl5reqb` | element 51 `PLAYER_6` at 25,265,10 |
| 7 | De Schaduw | `overlay7.ini` | `ovl5com1`, `ovl5spd1`, `ovl5reqb` | elements 51 `PLAYER_6`, 52 `PLAYER_7`, both at 25,265,10 |

Contents: 6 composites (`Speedometer`, `Communicator`, `Overlay`, `Tuneups`, `Ornaments`, `Portraits`), 51 elements (52 in `overlay6`, 53 in `overlay7`), 26 strings, 1 font. `[Overlay]` and `[Ornaments]` have no children. `[Tuneups]` holds only `OVL_PW_FASTFORWARD`, which no code references.

Grammar: `GetPrivateProfileIntA` and `GetPrivateProfileStringA`, so sections and keys are case-insensitive. Common keys `Scale`, `Rotation`, `Visible`, `RGBA`. A load error throws `CHudException`, caught as fatal.

**Evidence.** `original/install/overlay0.ini`..`overlay6.ini`, `original/updates/installed/overlay7.ini`, `gen_anim.ini`, `0x00487f20`, `0x0047ed10`, `0x0047f880`. [`hud-overlay.md`](../research/hud-overlay.md) sections 3 and 4. The difference table was re-derived by parsing the seven files for this document, and `overlay7.ini` against them when the update came in.

**Status.**
- Confirmed: file selection, differences, grammar. What [`game-content.md`](../research/game-content.md) left open, a forced `CAR=7`, is settled for the update's data: `CAR=7` takes `overlay7.ini` and the HUD comes up, in the port, in the launch check.
- Inferred: none.
- Unresolved: `CAR=7` on disc 1.01 without the updates, with no `overlay7.ini`: never run. The original has not been run with the updates.

**Where the port implements it.** Runs as shipped. The host supplies the files: `public/assets/game/overlay0.ini`..`overlay7.ini`, `communi.ini`, `language.ini`, `gen_anim.ini` and `raser.ini` are byte-identical to the current install, by SHA-256. `GetPrivateProfile*` is in `source/host/win32.js`, on `IniFile` in `source/host/vfs.js`. Meshes and textures come from `rcs.img` through `source/host/game-files.js`.

**How it was compared.** `boot-all` booted all 8 cars on all 10 etappes for 2 s, which shows that each file loads and nothing more. `check-race-ui` ran car 0, `check-flow` car 1, and `reference-frame` is car 0. The launch check ran car 7 on etappe 9 for 6 s of gas, its HUD by eye on the screenshots. Cars 2 to 6 have no race beyond those 2 s.

## HUD: canvas, transforms and perspective

**Original behaviour.** INI numbers are a 640x480 canvas, y down. The code converts them to world units, with view identity, x right, y up, z into the screen.

```
element, string local: x = 0.99/320*cx - 1    y = (1 - 0.99/240*cy) * (4/3) / (W/H)    z = cz*0.99/320
element scale:         sx = 0.99/320*Sx       sy = (H/W)*0.99/240*Sy                   sz = 0.99/320*Sz
composite local:       x = 2*cx/640 - 1 + width     y = 1 - 2*cy/480 - height          z = cz/640
root transform:        Width 1, Height 0.75, ScreenWidth 1
element world z:       parent z + local z + 1.0
```

The D3D viewport is one for the whole game: `dvClipX=-1, dvClipWidth=2, dvClipY=H/W, dvClipHeight=2*H/W`, so `x_ndc = x/z`. The canvas stretches to the mode and ends 1% short: canvas 640,480 lands on pixel 633.6, 475.2 at 640x480. At 320x200 `H/W` squeezes it to 200 rows: see 8-bit path below. z is real perspective: portrait slot 25,25,10 has z 1.0309 and lands on pixel 33.6, 31.2. The signs have vertex z 12..204 and the start digits -5..20, so they are 3D shapes, foreshortened toward the world origin.

Only `0x0047cd90`, `0x0047fd20` and `0x00480500` read W and H, and only `0x0047cd90` runs after load. Rotation is 4096 units per turn: `0x0045817b` and `0x00458188` pass `0x1000` through `0x004c04b0` to `0x004bc4e0`, which sets table size `0x5b23b8` and mask `0x5b23bc`.

**Evidence.** `0x0047fd20`, `0x00480500`, `0x0047feb0`, `0x0047cd90`, `0x0047c2e0`, `0x00487240`, `0x0047cba0`, `0x004b39d0`, `0x004c0e10`, `0x004bc4e0`, `0x004b3ea0`. [`hud-overlay.md`](../research/hud-overlay.md) section 5, corrected at the end of this document.

**Status.**
- Confirmed: formulas and constants.
- Inferred: none.
- Unresolved: none for the shipped modes.

**Where the port implements it.** Runs as shipped with W, H at 640, 480 (`host.screen` in `RaceRunner.load`). A save with `RESOLUTION=4` gives 800x600 through `SetDisplayMode` in `source/host/directx.js`, which has the same aspect, so these formulas give the same numbers. `Hoog` itself is greyed ([`render.md`](render.md) section 1). `RESOLUTION` 0 gives 320x200 by the same call, with another `H/W`: see 8-bit path below. `D3DRenderer.updateClipMap` replaces the fixed viewport with `x/xr`, `y/yr`. At exactly 4:3, `xr = 1`, `yr = 0.75`, or 0.625 at `RESOLUTION` 0, which equals the original.

**How it was compared.** `reference-frame`, by eye. No numeric comparison of positions was run at 16 bits. The 8-bit path: see below. Fix check, one-off script: rotation mask 4095, table size 4096.0 and sin table[69] = 0.10565 read at run time.

## HUD: overlay states

**Original behaviour.** State lives at `0x0071277c`.

| State | Set at | Meaning |
|---|---|---|
| 0 | `0x00487f20` | loading |
| 1 | `0x0044c7d7`, `0x0043c380`, `0x0043c510`, `0x0044ca80` | normal |
| 2 | `0x0044cf90`, key P | pause |
| 3 | `0x0044cf90`, key Esc | quit question |
| 5 | `0x0043ac80`, 1500 ms after finish | finish table |
| 6 | `0x0043bc20`, mode 0 | game over: total loss, damage above 1098 (`0x0044c950`) |
| 7 | `0x0043bc20`, mode 2 | game over: arrested, more than 2 cop stops (`0x0043a980`) |
| 12 | `0x0043bc20`, mode 1 | game over: time up, clock 11 expired on a chase track (`0x0044c8c0`) |
| 8, 9, 10, 11 | `0x0043c3d0` | countdown 3, 2, 1, GO |

No code writes 4. Visibility by state:

| Element | 0 | 1 | 2 | 3 | 5 | 6, 7, 12 | 8-11 |
|---|---|---|---|---|---|---|---|
| Wait bar `0x004976d0` | shown | - | - | - | - | - | - |
| Speedometer, Communicator `0x0048abe0` | not created | yes | yes | yes | hidden | yes | yes |
| Lap, position, time, countdown `0x00496e20` | not created | yes | yes | yes | hidden | yes | yes |
| Rank portraits, outline `0x00494560` | not created | yes | yes | yes | portraits yes, outline no | yes | yes |
| Requestor strings `0x004950c0` | - | - | body, pause | body, quit | `FINISH_TEXT` | `RACE_OVER` + one line | - |
| Start digit `0x00496320` | - | - | - | - | - | - | one |
| Game text, wrong-way | | any state when triggered | | | | | |

**Evidence.** Functions in the tables. [`hud-overlay.md`](../research/hud-overlay.md) section 8. [`gameplay-systems.md`](../research/gameplay-systems.md) section 8. [`startup-flow.md`](../research/startup-flow.md) lists the same meanings.

**Status.**
- Confirmed: writers and the visibility table.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** Runs as shipped. Exception: `Race.endPause` in `source/host/race.js` writes state 1, as the rest of `0x0044ca80` does, because the pause wait runs across ticks there ([`../recompiler.md`](../recompiler.md)). `Race.overlayState` reads the state, and `RaceRunner.updateResults` uses it for the on-screen controls in states 5, 6, 7 and 12.

**How it was compared.** Same machine code. `check-flow`: the race started and finished, which passes through states 8 to 11 and through 5 (`FINISHED=1` is written only after `0x0043ac80` has set 5). `check-race-ui`: `Race.pause` kinds for P and Esc, state 5 and state 6 reached through `0x0044cda0`. States 7 and 12: no check ran.

## HUD: Speedometer

**Original behaviour.** Composite `Speedometer`. It starts at local 1,0,0 and slides to 0,0,0 in 1.2 s, once, at race start (`0x0048ee50`, `0x0048ef20`). `[Speedometer] Position` is overwritten. In state 5 the group hides.

| Part | Canvas pos | Mesh | Data |
|---|---|---|---|
| `OVL_SPEEDOMETER_BODY` | 640,480 | `ovl*spd1` | art, per car |
| `..._STRIPES` | 640,480 | `ovl_spd3` | art |
| `..._GLAS` | 640,480 | `ovl_spd2` | art |
| `..._HLTH`, `_HLTH_BK` | 629.5,338 | `ovl_shlt`, `ovl_shlb` | scale x = damage/1100 per frame (`0x0048a230`) |
| `..._DIAL`, `_DOP` | 568.5,411 | `ovl_wijz`, `ovl_knop` | rotation z = `min(speed/200, 1)*1820.44`, so 0..160 degrees (`0x0049ca90`). Speed `0x6fba64 = ftol(car+0xc4 * 3.6)` |
| `..._TURBODIAL`, `_TURBODOP` | 478,442 | `ovl_wij2`, `ovl_knp2` | rotation z = `turbo/100*2048`, 0..180 degrees (`0x0049cb00`). Turbo `0x6fba74`, 0..100, drains 1 per 100 ms (`0x0044e970`) |
| `..._RED_LED`, `_LUD`, `_GLOW` | 625,357 | `ovl_rled`, `_rlud`, `_rlit` | on when damage ratio >= 0.8 (`0x00489c10`) |
| `..._GRN_LED`, `_LUD`, `_GLOW` | 510,465 | same red meshes | on when turbo ratio <= 0.2 |
| `STRING_DAMAGE_TXT` | 594,322, centre, 0.7 | font | text 55 `SCHADE` |
| `STRING_EURO_SIGN` | 520,436, left, 0.9 | font | `@`, the euro glyph |
| `STRING_EURO_MONEY` | 538,436, left, 0.6 | font | `%06d` of money `0x6fba68`, clamped 0..999999 |

The three glows use `s_sfx`, with `DESTBLEND=4` for that draw (`0x0047cd70`, `0x0047cba0`). All other parts use `overlay.tga`.

No rev counter and no gear indicator exist.

**Evidence.** `overlay0.ini`, `0x0048a230`, `0x00489c10`, `0x0049ca10`, `0x0049ca90`, `0x0049cb00`, `0x0048f140`. [`hud-overlay.md`](../research/hud-overlay.md) sections 9 and 10. Owner's screenshot for the look at 4:3.

**Status.**
- Confirmed: parts, data sources, thresholds, slide.
- Inferred: `car+0xc4` is m/s-like and the display km/h (factor 3.6, limit 200). The car's real units were not checked in the HUD note.
- Unresolved: the look of `LED` and `LUD` together while on, read from code only.

**Where the port implements it.** Runs as shipped. Layout: `HudLayout` group `right` in `source/host/hud-layout.js`. The host supplies `overlay.tga` and `s_sfx.tga`, and the renderer honours `DESTBLEND` per batch (`pipelineKey`, `materialFor`).

**How it was compared.** `reference-frame`, by eye, for body, stripes, glass, needles at rest, knobs, `SCHADE`, full health bar, euro sign and money, against the owner's 4:3 screenshot, car 0. Fix check, one-off script, needles read at run time: maximum 1820.44, dial z = 737.28 at speed 81, turbo z = 2048 at turbo 100. Health scale and LEDs: same machine code, no check ran.

## HUD: Communicator

**Original behaviour.** Composite `Communicator`, off-screen at local -1,0,0. On a message it slides to 0.011,0,0 in 1.2 s and later out to -1 in 3.0 s (`0x0048a010`, `communi.ini moveaway=true, moveawaytime=0`). `[Communicator] Position=-20,0,0` is overwritten.

| Part | Canvas pos | Mesh | Data |
|---|---|---|---|
| `OVL_COMMUNICATOR_BODY` | 0,480 | `ovl*com1` | art, per car |
| `..._GLAS1` | 0,480 | `ovl_com2` | photo window |
| `..._GLAS2` | 0,480 | `ovl_com3` | text window |
| `..._HLTH`, `_HLTH_BK` | 76.4,378 | `ovl_chlt`, `ovl_chlb` | damage/1100 of the message's car, only when on-screen and the owner is not `HONNEY` or `SHADOW` |
| `..._RED_LED`, `_LUD`, `_GLOW` | 23,448 | as Speedometer | `copalert`: counter +10, cap 100, -7 per frame, blink 500 ms (`0x00489d30`) |
| `STRING_0..3_COMMUNICATOR` | 40,406 / 424 / 442 / 460, left, 0.7 | font | message lines, `chars_per_line=20` |

Photos are nine `OVL_PORTRAITS_*` elements (`SHADOW`, `HONNEY`, `HARRY`, `POLICE`, `EDGAR`, `JAMES`, `BARBARALLY`, `TOMMY`, `KAT`), meshes `ovl_fac0..8`, canvas 0,480, z 3. They are children of `Screen`, not of the composite, and show only when the slide state is 2.

Messages: `SendMessage` `0x0048a910` from AI and triggers (21 callers). Ids and text from `communi.ini`, sections `HARRY`, `POLICE` (no active message), `SHADOW`, `HONNEY`, `EDGAR`, `JAMES`, `BARBARALLY`, `TOMMY`, `KAT`, plus `SYSTEM`. Queue of 10, priority insert `0x00489ec0`. In a message's text, `@` is a comma and `#` a new line. System events: 1 copalert, 2 to 5 direction signs, 6 new-message sample `mesin`. Speech per message from `[SAMPLES]`.

**Evidence.** `0x0048a910`, `0x00489ec0`, `0x00489e80`, `0x0048f0d0`, `0x0048abe0`, `0x0048ef80`, `0x00489d30`, `communi.ini`. [`hud-overlay.md`](../research/hud-overlay.md) sections 6, 9, 10. [`audio.md`](../research/audio.md) section 12.

**Status.**
- Confirmed: parts, slide constants, queue size, event numbers.
- Inferred: none.
- Unresolved: full semantics of queue priorities and lifetimes. Categories `warning_about_harry`, `a_lotta_damage`, `reactions_on_warnings` and `reactions_on_challenge` have no sender literal, so those messages appear unreachable (`audio.md` section 12).

**Where the port implements it.** Runs as shipped. The host supplies `GetTickCount` from the virtual clock and DirectSound (`source/audio/game-audio.js`). Layout: group `left` in `source/host/hud-layout.js`, which also carries the nine photos. Touch in landscape: `RaceRunner.layout` in `source/race-runner.js` sets `leftShift` so the Communicator sits right of the wheel, and `HudLayout.apply` multiplies it by the slide, so the Communicator is out of view while hidden. This is a port change. When the action buttons would then cover it, `layout` sets class `actions-lifted` and they move above the Speedometer.

The copalert counter falls per tick, so its decay depends on the fixed 60 ticks per second. See the simulation-rate row in [`../intentional-differences.md`](../intentional-differences.md).

**How it was compared.** Same machine code. Sound was checked only by state. `check-race-ui`, `layout:` checks at 8 sizes: no control on the Communicator's rectangle, computed with `leftShift`, and the action row lifted at 640x360, 1024x768 and 800x880. Fix check, one-off script: `leftShift` at 800x360, and at 390x844 the Communicator fully out of view while hidden. `evidence/race-ui/race-480p-50.png` shows a message on screen; that is a screenshot, not a comparison. Nothing was compared with the original.

## HUD: rank portraits

**Original behaviour.** Composite `Portraits` holds `PLAYER_0..5` (`PLAYER_6` in `overlay6`, `PLAYER_6` and `PLAYER_7` in `overlay7`) at 25, 25+60*i, 10, meshes `player_k`, 54x54, and `OVL_PLAYER_OUTLINE`. `PLAYER_7` uses `player_8.d3d`, since the car update. `PLAYER_5`, `PLAYER_6` and `PLAYER_7` share the slot of `PLAYER_4`. The element name per car comes from `game.ini [Portraits]`. A missing name is fatal (`0x004932a0`).

Order is rank. Alpha: player 255, racers `0xb4` (`0x00493640`), which replaces the INI's 200. Each frame (`0x00493090`), with the target from `m_OrigPosTable[rank]`: if idle and rank changed, swap over 0.6 s with `sin`, and `z += +-0.03*sin(2x)`. The outline copies the player's portrait position every frame (`0x00493d60`) with scale 0.95, and its colour pulses between grey `0xff808080` and white with a period of 0.6 s. Racer table `0x5973c0`, stride `0x58`. Player rank `0x6fbaa4`.

**Evidence.** `0x00493640`, `0x004932a0`, `0x00493090`, `0x00492ac0`, `0x00493d60`, `0x00494560`, `0x004944e0`, `overlay0.ini`, `game.ini [Portraits]`. [`hud-overlay.md`](../research/hud-overlay.md) sections 6, 9, 10.

**Status.**
- Confirmed: positions, alpha, swap timing, outline.
- Inferred: none.
- Unresolved: what `racer+0x0c` (`0x5973cc`) holds exactly.

**Where the port implements it.** Runs as shipped. Layout: group `rank` in `source/host/hud-layout.js` moves the composite, and the children keep their code-written values. In state 5 the composite takes no offset and each `PLAYER_*` carries its part of it: see the finish screen below.

**How it was compared.** `reference-frame`, by eye, for five portraits and the outline. Swap animation: same machine code, no check ran.

## HUD: statistics

**Original behaviour.** Children of `Screen`.

| String | Canvas pos | Text | Code |
|---|---|---|---|
| `STRING_RACE_TIME_VALUE` | 515,25, Fixed, left, 0.8 | clock 0, `%02d:%02d:%d` (m:s:tenths) | `0x00497230` |
| `STRING_CUR_LAP` | 515,55, left, 0.8 | text 39 `RONDE` + ` %d/%d` of `0x6fb8f8+1`, `0x6fb8fc` (`NRLAPS`, 1 on highway tracks) | `0x00496b10` |
| `STRING_CUR_POS` | 515,85, left, 0.8 | text 38 `POSITIE` + ` %d/%d` of `0x6fbaa4+1`, `0x5d2ab0+1` (`intel.ini NrOpponents=4`) | `0x00496b10` |
| `STRING_COUNTDOWN_TIMER` | 335,32, Fixed, centre, 1.5, RGBA 255,0,0,220 | clock 11, same format, only when `[MAPS]` arg 14 = 1 (chase tracks 1, 3, 4) | `0x00496dd0` |

All are hidden in states 0 and 5. Below 6 s of clock 11, sample `TIME_TICK` plays once per second (`0x0044c8c0`). At zero the race ends in state 12.

**Evidence.** `0x00496e20`, `0x00496dd0`, `0x00496b10`, `0x00497230`, `0x0044c8c0`, `overlay0.ini`, `language.ini`. [`hud-overlay.md`](../research/hud-overlay.md) section 9. [`gameplay-systems.md`](../research/gameplay-systems.md) section 8.

**Status.**
- Confirmed: all of the above.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** Runs as shipped, on the virtual clock. Layout: group `stats` for the first three, `topCentre` for the countdown (`source/host/hud-layout.js`).

**How it was compared.** `reference-frame`, by eye: `00:00:0`, `RONDE 1/2`, `POSITIE 5/5`. Countdown timer: chase tracks were only booted (`boot-all`). `check-race-ui`, `layout:` checks: no control on its rectangle at 8 sizes, with no chase level run.

## HUD: direction signs and wrong-way frame

**Original behaviour.** All at canvas 320,50.

| Element | Mesh | Shown |
|---|---|---|
| `OVL_DIRECTION_GOLEFT` | `ovl_left` | message event 2 (`system_goleft`), 6000 ms |
| `OVL_DIRECTION_GORIGHT` | `ovl_righ` | event 3, 6000 ms |
| `OVL_DIRECTION_GOBOTH` | `ovl_fork` | event 4, 6000 ms |
| `OVL_DIRECTION_GOZIGZAG` | `ovl_bend` | event 5, 6000 ms |
| `OVL_TURNAROUND_FRAME` | `ovl_wway` | `0x00429360(player) == 0` (heading against the waypoints), while the fractional game time is above 0.4 |

While driving the wrong way the signs are hidden (`0x00489c10`, `0x00489b70`). Signs hide in state 5 (`0x0048ef80`). The wrong-way test runs in every state (`0x004950c0`).

All five are extruded arrows lying in depth, not flat signs: y within 10, z 12..204, x up to 108 in mesh units, so world z 1.04..1.63. They sit above the eye, which is why moving them changes their shape.

**Evidence.** `0x00489b70`, `0x00489bd0`, `0x00489c10`, `0x004950c0`, `0x00429360`, `overlay0.ini`, `communi.ini [SYSTEM]`. [`hud-overlay.md`](../research/hud-overlay.md) sections 5 and 9. Mesh bounds read from `rcs/ovl_left.d3d`, `ovl_righ.d3d`, `ovl_fork.d3d`, `ovl_bend.d3d`, `ovl_wway.d3d`.

**Status.**
- Confirmed: all of the above.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** Runs as shipped. All five are group `plates` in `source/host/hud-layout.js`: one place, as in the original, moved to the top on tall shapes by the same amount as the game text, and respecting the top inset. A plain y move would stretch them, because the far end moves less. So `HudLayout.setShape` computes a tilt about x from the shift `o = dy - inset`: rotation `atan(o)` in `+0x1c`, factors on `+0x14` and `+0x18`. `apply` pokes it and `restore` undoes it after the draw, so game code never sees it. With `o = 0`, at 4:3 and on wide shapes with no inset, no tilt applies. Intentional difference: on tall screens their place relative to the 3D view differs from the original.

**How it was compared.** Same machine code. No check triggered them by driving. Fix check, one-off script, with the plates forced visible:

- Calculated on all five `.d3d` meshes: largest vertex error 0.75 canvas units at the 360x432 shift (`o` = 0.45) and 0.91 at `o` = 0.75, against 39 to 73 units for a plain move at those shifts and up to 94 for `ovl_bend`.
- By eye, as side-by-side crops against 4:3, at 360x800 touch, 390x844 touch and 360x800 mouse.
- A negative tilt from a fake top inset in landscape, on one screenshot and numerically.

## HUD: game text

**Original behaviour.** `STRING_GAME_TEXT`, canvas 330,135, centre, 30 characters. Index in `0x59becc`, set by triggers and the bonus script, read from `language.ini`. Alpha `255 - 255*t/2.75`, hidden at 2.75 s (`0x00494f10`). A new text replaces the old at once.

| Text | Dutch | Trigger |
|---|---|---|
| 44 | `EXTRA TIJD` | checkpoint, cheat Ctrl+Space+T |
| 45 | `LAATSTE RONDE` | `0x456a30` |
| 46 | `INVINCIBLE` | cheat Ctrl+Space+I |
| 47 | `COP MODE` | copland start, `0x0043c3d0` |
| 48 | `QUICK SERVICE` | trigger 2 |
| 49, 50 | `EERSTE WAARSCHUWING`, `LAATSTE WAARSCHUWING` | `0x43a540`, unreachable per `gameplay-systems.md` |
| 51 | `FLITS BONUS +100 EURO` | flitspaal hit |
| 56..65 | `STUURSLOT`, `FAST FORWARD`, `20 SEC ONKWETSBAAR`, `+100 EURO`, `+500 EURO`, `+1000 EURO!`, `KLEINE REPARATIE BONUS`, `GROTE REPARATIE BONUS`, `KLEINE TURBO BONUS`, `GROTE TURBO BONUS` | script `PrintText` |
| 66 | `RESET (ENTER/RETURN)` | reset done |
| 67 | `FLITS BOETE -50 EURO` | flitser |
| 68 | `DRUK ENTER/RETURN VOOR RESET` | controller `+0x30` above `RESETWAITTIME=10` |

**Evidence.** `0x00494f10`, `0x0044cb80`, `0x0044cf90`, `0x0043c3d0`, `language.ini` lines 58-88, `overlay0.ini`. [`hud-overlay.md`](../research/hud-overlay.md) section 9. [`gameplay-systems.md`](../research/gameplay-systems.md) section 8.

**Status.**
- Confirmed: display and fade. Triggers for 44, 45, 46, 47, 66, 68 read in code.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** Runs as shipped. Layout: group `topCentre`. Text 68 still names Enter, as the original does. On touch the same action is `Reset`, on a pad the left stick click: `#touch-reset` in `source/index.html`, `GamepadInput.pollRace`. Controls near it: see the overlap section.

**How it was compared.** Same machine code. Fix check, one-off script: a real bonus message on screen, and the longest text forced through `0x59becc` at 320x568, where it does not touch the `POSITIE` letters. Nothing was compared with the original.

## HUD: requestors and game-over lines

**Original behaviour.**

| State | Shown | Text (INI `Text`) | Position, scale |
|---|---|---|---|
| 2 | `OVL_REQUESTOR_BODY`, `STRING_PAUZE_HEADER`, `STRING_PAUZE_TEXT` | `Pauze`, `Druk een toets` | body 320,240, rect 196.8-443.1, 159.3-320.7. Strings 320,220 and 320,250, centre |
| 3 | body, `STRING_QUIT_HEADER`, `STRING_QUIT_TEXT` | `Wilt u echt`, `stoppen!? (J/N)` | same |
| 6 | `STRING_RACE_OVER`, `STRING_TOTAL_LOSS` | `RACE OVER`, `TOTAL LOSS` | 320,260, 1.5; 320,220, 1.25 |
| 7 | `STRING_RACE_OVER`, `STRING_ARRESTED` | `RACE OVER`, `GEARRESTEERD` | same |
| 12 | `STRING_RACE_OVER`, `STRING_TIME_UP` | `RACE OVER`, `JE TIJD IS OM` | same |

Pause and quit: the HUD draws one frame, `0x0044cb80` flips twice more, then `0x0044ca80` stops clocks 0, 3, 11, mutes mixer channel 4 and spins on `GetAsyncKeyState`. No HUD update runs during the wait, so the picture is still. Pause waits for P up, then any key but Shift alone, pressed and released. Quit: J or Y ends the race. Esc or N resumes.

Game over: orbit camera, the rest of the HUD stays. After 1000 ms, Esc, Enter or Space ends it (`0x0043bd60`).

Requestor body mesh per car: `ovl*reqb`.

**Evidence.** `0x004950c0` with jump table `0x495250`, `0x0044cb80`, `0x0044ca80`, `0x0044c990`, `0x0044c9f0`, `0x0043bc20`, `0x0043bd60`, `overlay0.ini`. [`hud-overlay.md`](../research/hud-overlay.md) sections 8, 9, 12. [`gameplay-systems.md`](../research/gameplay-systems.md) section 9.

**Status.**
- Confirmed: all of the above.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** Display runs as shipped. `0x0044ca80` is replaced by `hook!pauseBegin`, with `Race.pollPause` and `Race.endPause` in `source/host/race.js` running the same steps across ticks.

- The picture: `D3DRenderer.endFrame` ignores flips with nothing drawn, so the requestor frame stays on screen. `RaceRunner.frame` keeps the dialog's key tick at capture level 2 and passes alpha 1 to `present` while `race.pause` is set, so the world stays still on any display rate.
- Answers: on touch, and for a mouse user who pressed `#race-stop`, `#dialog-keys` adds `Ja`, `Nee` and `Verder` (`RaceRunner.updateDialogKeys`), as recorded in [`../intentional-differences.md`](../intentional-differences.md). A mouse button or tap on the race resumes a pause once released (`RaceRunner.canvasPress`).
- Game over and finish: in states 5, 6, 7 and 12 `RaceRunner.updateResults` adds class `race-results`, which hides wheel, action buttons and control column, and shows `#dlg-results` on touch, VK 0x20. Pad A pulses Space there (`GamepadInput.pollRace`); a press held since driving does not count. Port addition; the original prompt text stays.
- End of a race: `RaceRunner.endWait` keeps the last frame until Esc, Enter and Space are up, as `0x0043ac80` does, with a 5 s safety limit the original does not have.

**How it was compared.** `check-race-ui`:

- `pause: P stops the race clocks, the wall clock runs on`; `pause: any key resumes, and the race clock goes on from where it stood`; `pause: a mouse button on the race resumes, once released`; `pause: Shift alone resumes nothing, and masks other keys`.
- `pause: the picture stays still`: 98 frames at alpha 1. It reads the alpha, not pixels.
- `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release`; `quit dialog: J ends the race, finished=0`; `full screen: Stop asks, and Nee answers on screen`. Y was not tried.
- `game over: Enter ends it, the race waits for its release, and the menu ignores repeats`, with state 6 entered through `0x0044cda0`. States 7 and 12 did not run. Their lines were not looked at.
- `check-phone-flow`: `Stop and Ja return to the menu, finished=0`, tapped on an emulated touch profile at 844x390.

`evidence/race-ui/pause.png` and `quit-dialog.png` show the requestor over the last frame. Those are screenshots, not a comparison. Nothing was compared with the original.

## HUD: start digits

**Original behaviour.** `OVL_START_DIGIT_3`, `_2`, `_1`, `OVL_START_GO`, meshes `ovl_dig3`, `_dig2`, `_dig1`, `ovl_strt`, canvas 320,200,8, RGBA 0,250,0,255. Timing from `0x0043c3d0`: 2.2 s after the action starts, state 8 (digit 3, 0.9 s), state 9 (digit 2, 0.9 s), state 10 (digit 1, 0.9 s), state 11 (GO). The race starts (`0x0044cda0(0)`) on the frame after state 11 is set, and 1.0 s later the action ends. Total 4.9 s. Animation `0x00496110`: scale `(1+8t, 1+8t, 1)`, alpha `255-255t`, `t = T/0.9`, GO `T/1.0`. Mesh z is real depth (-5..20). `COP MODE` text in copland mode. Start `0x00496010` ("shake") is dead code.

**Evidence.** `0x0043c380`, `0x0043c3d0`, `0x00496110`, `0x00496320`, `0x004961f0`, `overlay0.ini`. [`hud-overlay.md`](../research/hud-overlay.md) sections 9, 12. [`gameplay-systems.md`](../research/gameplay-systems.md) section 7.

**Status.**
- Confirmed: timing, scale, alpha, colour.
- Inferred: none.
- Unresolved: caller of sample `GO` (`gameplay-systems.md` section 7).

**Where the port implements it.** Runs as shipped, on a `dt` of one tick. Ticks 1 to 3 of a race read the capped `dt`, 0.1, and tick 4 does not, as measured in the original. No layout group: the digits stay in the middle of the 4:3 box.

**How it was compared.** `check-flow`: a race can only start through this sequence, so it ran. `reference-wine`, states 8, 9, 10 and 11 at 60 ticks per second: 0.92, 0.90, 0.92, 1.02 s in the original under Wine, 0.92, 0.92, 0.92, 1.02 s in the port. GO comes at pass 280 or 281 in the original and 283 in the port, since the original's `dt` has noise. `evidence/reference-wine/side-ov8.png` sets the digit next to the original's at state 8 + 0.3 s: the same by eye, not a pixel comparison.

## HUD: finish screen and finish table

**Original behaviour.** First 1500 ms after the finish: state 1, normal HUD, finish camera, sample `FINISH_JUICHEN`. Then `0x0043ac80` sets state 5 and turns the flag on. Esc, Enter or Space ends it, then `0x0043ad40` writes finished and game state 4.

State 5 hides Speedometer, Communicator, current photo, signs, statistics and outline. Shown: `PLAYER_*` moving to the table, `STRING_FINISH_POS_1..5`, `STRING_FINISH_TEXT` (`DRUK 'SPATIE' OM VERDER TE GAAN`, 320,460, apostrophes have no glyph), and the flag.

Layout, one call of `0x00492980` per racer on the first frame of state 5, with `N = 0x5d2ab0`:

```
rows       y0 = 0.5 - 1.5/(N+1) * rank       local; world y = y0*0.75
portrait   start = current, target = (-0.4, y0, 0)
string     start = ( 1.0, y0, 0), target = (0.1, y0, 0)
timer      rank 0: 0; others: -(1.2 + 0.2*rank)
duration   rank 0: 1.2 s; others 0.6 s
each frame s = sin(pi/2 * t/d)
           position = start + (target-start)*s, z += 0.4*sin(2x)
           rank 0 also: rotation z +2 turns, scale 1 + 0.3*s
at end     portrait snaps to target, rotation 0; the string keeps its last value
```

With `N = 4`, at 640x480: rows at y 120, 192, 264, 336, 408, portraits at x 192, strings from x 640 to 352. At 4:3, world x 1.0 is the screen edge, so strings slide in from outside the picture.

Text `0x004940e0`, every frame: best time `%02d:%02d:%d`, others `+` and the difference, unfinished `--:--:-`. The player's row blinks: visible while `ms % 600 < 300`, from the first frame. The other strings become visible only when their timer reaches 0 (tail of `0x00492c70`).

Flag: not a HUD element: [`render.md`](render.md) section 19.

**Evidence.** `0x0043ab70`, `0x0043ac80`, `0x0043ad40`, `0x00494480`, `0x00492980`, `0x00492c70`, `0x004940e0`, `0x0043fdd0`, `0x0043fff0`, `0x00440160`, `0x0048ef80`, `0x0048f040`. [`hud-overlay.md`](../research/hud-overlay.md) sections 10, 12. [`render-textures.md`](../research/render-textures.md) section 11.

**Status.**
- Confirmed: all of the above.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** Logic runs as shipped. `HudLayout.apply` in `source/host/hud-layout.js`, in state 5:

- Group `finish`, each `STRING_FINISH_POS_n`: while `x > 0.1`, x gains `(x-0.1)/0.9*(xr-1)`. So the start at 1.0 maps to the screen edge `xr`, the target 0.1 stays, and rows slide in from outside the view, as at 4:3, the player's blinking row included. The match is on one digit, `/^STRING_FINISH_POS_\d$/`, because glyph children carry their string's name plus an index (`STRING_FINISH_POS_10` to `_113` at run time).
- Group `players`, each `PLAYER_*`: it takes the rank offset times `clamp((-0.4-x)/0.5227, 0, 1)`, where 0.5227 is the distance from slot x -0.9227 to -0.4. So it leaves from the edge column with no jump and ends at the table.
- At 4:3 both terms are zero. `saved` and `restore` undo both after the draw.
- `STRING_FINISH_TEXT` is in `bottomCentre`.

The touch controls are gone in this state: see requestors above. The flag covers wide and tall views and keeps its hard squares: [`render.md`](render.md) section 19.

**How it was compared.** `check-flow`: `FINISHED=1` was written, which can only follow `0x0043ac80`, so state 5 ran, and Enter left it (the bot's stuck rule in `Bot.tick` is its only source of that key). `check-race-ui`: `finish: wheel and actions gone, Verder shown`; `finish: Verder ends the race, which waits for the finger to lift`; `finish: pad A held does not skip it, a new press does`, all entered through `0x0044cda0`. Esc was not tried. Fix check, one-off script, with the bot at speed 8, at 1280x720, 800x360 and 360x800, DPR 2, touch: frozen frames during the slide and at the end, plus position dumps. Table look and blink were not compared with the original. `evidence/race-ui/finish-touch.png` is a screenshot of this state, not a comparison.

## HUD: wait screen and progress bar

**Original behaviour.** `0x004415e0` runs at 10 call sites during loading. Each time it stretches the wait picture to the mode (`raser.ini [wait_hi] N=e0N_w_hi.pcx`, loaded as `.tga`, 640x480; `0x004416f0`), draws the overlay in `BeginScene`/`EndScene`, and flips. `OVL_PROGRESS_BAR` at 295,450, anim of 11 frames `ovl_p00..p10`, rect 308.5-596.5, 438-462. Frame = `ftol(11 * pct * 0.01)`, written directly to `obj+8` (`0x004976d0`). `pct` from `raser.ini [progress] percent0..` = 10,20,30,40,50,60,60,70,80,90,100. The last call runs with state 1, so one frame draws the normal HUD on the picture.

On the 8-bit path the picture is a real PCX, decoded in palette indices into the buffer screen (`0x004409d0`): `[wait_lo]` `e0N_w_lo.pcx`, 320x200, at `RESOLUTION` 0, `e0N_w_hi.pcx`, 640x480, at 1. The bar's meshes draw from `overlay.pcx`.

**Evidence.** `0x004415e0`, `0x004416f0`, `0x004976d0`, `0x00449cb0`, `0x004409d0`, `raser.ini`, `gen_anim.ini [OVL_PROGRESS_BAR]`. [`hud-overlay.md`](../research/hud-overlay.md) sections 2, 9, 11a. [`8bit-drawing.md`](../research/8bit-drawing.md) section 9.

**Status.**
- Confirmed: all of the above.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** `RaceRunner.load` in `source/race-runner.js` shows `#loading` with `assets/loading/eNN.png` (the same `e0N_w_hi.tga`, in a 4:3 box) and `#loading-bar`, at the original rectangle by percentages in `source/style.css`. `RaceRunner.showBar` picks one of `assets/loading/bar-00..10.png` by the original formula. `prepare_loading_bar` in `tools/prepare-assets.py` renders those frames from the `ovl_pNN.d3d` UVs on `overlay.tga`, with the race's 565 key rule and filter, 576x48 for the 288x24 rectangle.

On the 8-bit path `RaceRunner.load` takes `assets/loading/eNN-lo.png` at `RESOLUTION` 0 and `eNN-8.png` at 1, the PCX pictures through the game's palette (`prepare_loading`), and `bar8-NN.png`, from `overlay.pcx` with one texel per pixel and index 0xFE keyed (`prepare_loading_bar_8`).

Intentional difference: the frame follows the download of the race's files, up to 90%, then 95%, not `[progress]`. It stands on the last frame while the game boots, because `race.boot()` blocks the browser and the game's own progress calls run inside it, unpainted, on both paths. `D3DRenderer.blitToScreen` ignores them. The last load frame with the normal HUD does not show.

**How it was compared.** `check-flow` passes through loading and does not look at it, and `check-software` does the same on the 8-bit path. Fix check, one-off script: 11 frames on a contact sheet, 0 to 10 lit beads, and the rectangle measured at 308.5, 438, 288, 24. No comparison with the original bar in motion was run, and `reference-86box` does not cover the wait pictures as the game draws them.

## HUD: fonts

**Original behaviour.** The HUD font is `[FONT1]` and `[FONT1_ASCII]` in the overlay INI: rectangles in `overlay.tga` (256x256, 24-bit, key colour `0x7f00ff`), built into glyph quads in `0x00481800`, `0x00481b90`, `0x00482960`. Letters 11x17 (`A` 12, `I` 7, `J`, `L` 9, `M`, `W` 17, `Z` 13), digits 20x25, `MINUS` 9, `DIV` 6, `SPACE` 7. ASCII: `/` 11, `?` 11, `!` 6, `)` `(` 7, `_` 11, `;` 6, `#` `$` `&` 17 (smileys), `%` 17x19, `.` 6, `+` 12, `@` 17 (euro), `,` 6. Widest 20, `DISTANCE=0`. `a`..`z` alias to `A`..`Z` (`0x0047ea10`). A character with no glyph has object -1 and width 0, so `'` draws nothing. Other keys in the file (`SLASH`, `N_UMLAUT`, `PLAYER1`...) are never read. Glyph objects and meshes are shared, so colour and position are written before each draw.

Text layout: Fixed uses a cell of `MaxCharWidth/320`, pads with spaces and draws them. Proportional uses glyph widths and hides unused children. Text beyond `Length` is cut.

`.fnt` bitmap fonts: 17 sets (`olfnt03, himid, higeel, hi_geld, hi_vlag, hi_bts, olfnt07, marc10, slider13, slider15, olfnt01, olfnt02, olfnt04, olfnt06, olfnt08, olfnt09, lo_fnt1`), loaded in `0x0043ce10` through `0x004ca420`, with other names on the 8-bit path (`lo_fnt3`, `lomid` and so on, [`8bit-drawing.md`](../research/8bit-drawing.md) section 7). Only live use: `0x0043fc90`, font 11, in `tweak_mode` with key C.

GDI text `0x004c5930`: every live path needs `tweak_mode`, `0x6fb97c` or communicator `testmode`.

**Evidence.** `overlay0.ini`, `0x0047ea10`, `0x0047dde0`, `0x004869e0`, `0x00486ad0`, `0x00486c20`, `0x004ca420`, `0x0043ce10`, `0x0043fc90`, `0x0047108d`. [`hud-overlay.md`](../research/hud-overlay.md) sections 10, 11. All 31 `.fnt` files were checked against the layout there.

**Status.**
- Confirmed: glyph tables, layout, `.fnt` format, gating. With shipped `TWEAK_MODE=0` the race console is inert: see corrections.
- Inferred: none.
- Unresolved: the four `i16` after the `.fnt` table.

**Where the port implements it.** INI font: runs as shipped. The host supplies `overlay.tga` through the texture path, with key texels at alpha 0, so the shader discards them. On the 8-bit path the glyphs come from `overlay.pcx` on the page: see that section below. `.fnt` sets load through the host surfaces in the recompiled init. `ExtTextOutA` and `TextOutA` are stubs in `source/host/win32.js`, which only matters in tweak or test modes that do not ship.

**How it was compared.** `reference-frame`, by eye, for the glyphs in `SCHADE`, `RONDE`, `POSITIE`, digits, `:`, `/`, `@`. Other glyphs: same data, no check ran.

## HUD: what is not on the HUD

**Original behaviour.** Nothing draws these in the shipped game.

| Item | Result | Evidence |
|---|---|---|
| Rev counter, gear indicator | none. `Gear` and `Rpm` strings are car sound and the tweak menu | `0x0042e9b0`, `0x0042eea0`, `0x00432020` |
| Radar | not drawn. Texture only if `radar != 0` (shipped 0). The draw `0x004426a0` has no reference | raw scan |
| Dashboard `Ovl_Dashboard.cpp`, `0x00491510-0x004922b0` | dead. Created only by `0x00488a70`, which has no reference | raw scan |
| Old 2D HUD `0x0043e130`, `0x0043e4c0`, `0x0043e720`, `0x0043e780`, `0x0043ea80`, `0x0043f0e0`, `0x0043f330`, `0x0043f440`, `0x0043f590`, `0x0043f690`, `0x0043b7f0` | dead | raw scan, `recovered_functions.tsv` |
| `draw_dashboard` `0x0043f8a0` | live but empty | thunk `0x004409c0` |
| Communicator end-of-race photos `0x0048fc90` | dead. Needs `+0x3c0`, set only by `0x0048fc70`, no reference | raw scan |
| Start "shake" `0x00496010` | dead | no reference |
| `OVL_PW_FASTFORWARD` | hidden forever | no string in the binary |
| Race console | inert. Needs `TWEAK_MODE`, shipped 0 | `0x0047108d` |

**Evidence.** [`hud-overlay.md`](../research/hud-overlay.md) section 9, table "Not on the HUD at all". [`input.md`](../research/input.md) C8.

**Status.**
- Confirmed: all of the above. The "no reference" results are raw scans of the binary.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** The same code runs and the same paths stay unreached. Nothing was added.

**How it was compared.** Not applicable: there is nothing to draw.

## HUD: screen shapes

**Original behaviour.** Only 4:3 modes in normal use, counting 320x200, whose squeeze is made for a 4:3 monitor (8-bit path, below). The canvas stretches to the mode. The HUD does not adapt to other shapes.

**Evidence.** [`hud-overlay.md`](../research/hud-overlay.md) sections 5, 13, B, C. `A2-Racer-4-Fixes/README_technical_spel.dat.md` part 5 for the owner's patch.

**Status.**
- Confirmed: the original's behaviour and the numbers below, which follow from the transforms section.
- Inferred: the recipe in `hud-overlay.md` B and C was a recommendation; what the port does is listed further down.
- Unresolved: none.

**Where the port implements it.** `D3DRenderer.updateClipMap` gives the HUD a clip of `xr`, `yr`, with `A` = area width / height:

```
wide (A >= 4/3): xr = 0.75*A, yr = 0.75
tall (A <  4/3): xr = 1,      yr = 1/A
CSS px per canvas unit at z = 1: 0.99 * min(W/640, H/480)
```

So the canvas is never stretched. `HudLayout` in `source/host/hud-layout.js` wraps `0x00484fc0`, adds offsets to the groups below and restores them after the draw, so game code never sees them. `dx = xr - 1`, `dy = yr - clipY`, and `dyLocal = dy/0.75`. `clipY` is the mode's `H/W`, which `RaceRunner.layout` passes to `setShape`: 0.75 in the formula above and the table below, 0.625 at `RESOLUTION` 0 (8-bit path, below). The groups are found once by name in `HudLayout.scan`.

| Group | Members | Offset x | Offset y (local) | Also |
|---|---|---|---|---|
| `right` | `Speedometer` composite | `dx - insetR` | `-dyLocal + insetB` | Scale `k` about corner (1, -1) |
| `left` | `Communicator` composite, 9 `OVL_PORTRAITS_*` | `-dx + max(insetL, leftShift*slide)` | `-dyLocal + insetB` | Scale `k` about corner (-1, -1) |
| `stats` | `STRING_RACE_TIME_VALUE`, `STRING_CUR_LAP`, `STRING_CUR_POS` | `dx - insetR` | `dyLocal - insetT` | Scale `k` about corner (1, 1) |
| `rank` | `Portraits` composite, not in state 5 | `-dx + insetL` | `dyLocal - insetT` | |
| `topCentre` | `STRING_COUNTDOWN_TIMER`, `STRING_GAME_TEXT` | 0 | `dyLocal - insetT` | |
| `plates` | `OVL_TURNAROUND_FRAME`, 4 `OVL_DIRECTION_*` | 0 | `dyLocal - insetT` | Tilt, above |
| `bottomCentre` | `STRING_FINISH_TEXT`, `OVL_PROGRESS_BAR` | 0 | `-dyLocal + insetB` | |
| `finish`, state 5 | `STRING_FINISH_POS_1..5` | `(x-0.1)/0.9*(xr-1)` while `x > 0.1` | 0 | |
| `players`, state 5 | each `PLAYER_*` | `(-dx + insetL)*t` | `(dyLocal - insetT)*t` | `t = clamp((-0.4-x)/0.5227, 0, 1)` |
| none | Requestor body and strings, start digits, game-over strings | 0 | 0 | |

| Shape | xr | yr | dx world | dy world | k |
|---|---|---|---|---|---|
| 4:3 | 1 | 0.75 | 0 | 0 | 1 |
| 16:9 | 1.3333 | 0.75 | 0.3333 | 0 | 1 |
| 800x360 | 1.6667 | 0.75 | 0.6667 | 0 | 1 |
| 3:4 | 1 | 1.3333 | 0 | 0.5833 | depends on width |
| 390x468 (portrait touch area) | 1 | 1.2 | 0 | 0.45 | 1.231 |
| 360x432 (portrait touch area) | 1 | 1.2 | 0 | 0.45 | 1.333 |

Portrait (`RaceRunner.layout` in `source/race-runner.js`): when height is above 1.15 x width, the view and HUD take the top. With touch the area height is `min(0.62*h, 1.2*w)`, without touch `min(h, 1.5*w)`. The controls get the panel below. `layout` sets class `race-portrait`, and `source/style.css` keys on that one rule, so script and CSS agree: near-square screens use the landscape layout throughout. `source/app.js` calls `layout` on `resize` and `orientationchange`, also during a race.

Scale, an intentional difference, since the original has no portrait mode: `k = clamp(480 / CSS width, 1, 1.35)` for areas taller than wide, `k = 1` everywhere else (`HudLayout.setShape`). So below 480 CSS px wide, the Speedometer, the Communicator with its photo, and the time, lap and position lines grow back to the 0.7425 CSS px per canvas unit of an 800x360 phone, as far as the cap allows. Slide positions scale with them, so the Communicator stays out of view while hidden. Scale z and z stay unchanged, which keeps depth layering and perspective as shipped: a 2D similarity. The cap comes from the `POSITIE` letters, down to canvas y 91.8*k, which must stay above the game text at y 126.5. On purpose not scaled: rank portraits, game text, countdown, signs, requestor, start digits and finish table. `RaceRunner.layout` multiplies `--hud-unit` by `k`, so controls placed around the corner groups follow.

Calculated glyph heights in CSS px:

| Text | 800x360 | 390x844 | 360x800 | 320x568 |
|---|---|---|---|---|
| Communicator, `SCHADE` (17 x 0.7) | 8.8 | 8.8 | 8.8 | 8.0 |
| `RONDE`, `POSITIE` letters (17 x 0.8) | 10.1 | 10.1 | 10.1 | 9.1 |
| Money digits (25 x 0.6) | 11.1 | 11.1 | 11.1 | 10.0 |

**How it was compared.** No original to compare with, except the 4:3 case. `check-race-ui`: `orientation: portrait keeps the controls on screen` and `orientation: back to landscape` test the render size (720x864, then 1600x720) and that the wheel stays on screen; `layout:` checks at 8 sizes use computed rectangles. They do not read HUD positions from the game. Fix check, one-off script: `k` read from `hud.scale` as 1.333 at 360x800, 1.231 at 390x844, 1.35 at 320x568, 1 at 640x480, 800x360 and 1280x720; by eye on screenshots at 360x800, 390x844 and 320x568; a mid-race rotation from 800x360 to 360x800 and back. The glyph heights and the tilt errors are calculations, not measurements.

## HUD: independence from render scale

**Original behaviour.** The HUD draws in the one 3D pass, at the mode's resolution.

**Evidence.** `0x0044da30`, [`hud-overlay.md`](../research/hud-overlay.md) section 1.

**Status.**
- Confirmed: as above.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** The world renders to `renderTarget` at the effective size when that differs from native, and is blitted. The HUD pass always renders to the default framebuffer at native size in the view area (`D3DRenderer.present`, `setRenderSize`). Menus and touch controls are DOM or their own canvas. So render scale and the resolution setting do not change HUD sharpness or size. Recorded in the Resolution row of [`../intentional-differences.md`](../intentional-differences.md). On the 8-bit path the same holds with the HUD on the mode's grid: see the next section.

**How it was compared.** `check-race-ui`: at 480p and 50% the render target is 533x240 and the drawing buffer stays 1600x720; at Auto 200% the target is 3200x1440 and the buffer stays 1600x720. HUD pixels themselves were not compared. `evidence/race-ui/race-480p-50.png` is a screenshot of a sharp HUD over a coarse world, not a comparison.

## HUD: 8-bit path

**Original behaviour.** `RESOLUTION` 0 and 1 draw the same mesh HUD: same `overlayN.ini`, same update and order, no blit and no GDI. What differs:

- Every part is a copy-mode draw from the one page: `overlay.pcx`, and `s_sfx.pcx` for the three glows. The texel's palette index goes to the 8-bit target, with key index 0xFE. No vertex colour, blending or fog, and state 17, 18 = 2 shows no effect.
- At 320x200, `0x0047cd90`, `0x0047fd20` and `0x00480500` read W, H as 320, 200, and the viewport's `dvClipY` is 0.625. So `H/W` squeezes the canvas to 200 rows: 0.495 pixels per canvas unit across, 0.4125 down. The emulated card double-scans the mode to 640x400. On a monitor of the period that fills 4:3, which the squeeze is made for.

**Evidence.** `0x00487f20`, `0x0047cd90`, `0x0047fd20`, `0x00480500`, `0x00485ed0`, `0x004c0e10`, `gen_anim.ini`. Frames: [`evidence/reference-86box/results.md`](../../evidence/reference-86box/results.md). [`render-8bit.md`](../research/render-8bit.md), which holds over [`8bit-drawing.md`](../research/8bit-drawing.md) sections 8 and 13. [`render.md`](render.md) section 26.

**Status.**
- Confirmed: read from the code, the same HUD code and files, and the readers of W and H. Read from the frames, the HUD on this path, copy mode, no filter showing, the double scan.
- Inferred: 4:3 on a monitor of the period. What copy mode does to each fade, `8bit-drawing.md` section 8: racer portraits at `0xb4`, game text, start digits.
- Unresolved: rows of HUD glyphs in some strings differ from the guest, and a sliver one pixel wide right of the speedometer's hub is in the guest only.

**Where the port implements it.** Game code as shipped, with W, H from `SetDisplayMode`.

- `D3DRenderer.presentIndexed` draws the HUD in colour on its own target, `hud8`, on the mode's grid: 640x480 or 320x200 at 4:3, 853x480 or 427x200 at 16:9. Render scale does not touch it. `SCREEN_FRAG` lays it over the world on the canvas with sharp edges. It covers late effects by order and not by depth, as on the other path. Recorded in [`../intentional-differences.md`](../intentional-differences.md).
- `D3DRenderer.updateClipMap` takes `clipY` from the viewport, so at 4:3 `yr` is 0.625 at `RESOLUTION` 0 and 320x200 fills the view, with y stretched 1.2. Wider views add width at the same `xr` as 640x480.
- `HudLayout.setShape(aspect, insets, cssSize, clipY)` follows it: `yr = clipY`, on tall shapes `clipY*(4/3)/A`, and `dy = yr - clipY`. `RaceRunner.layout` passes `renderer.clipY`, and runs a second time after boot, when the mode is known.

**How it was compared.** `reference-86box`: the port's frame at rest against the guest's, pixel-exact in RGB. HUD text region identical: 81.7% at `RESOLUTION` 1, 640x480, and 63.6% at `RESOLUTION` 0, 320x200. Rank portraits differ by the opponents' order, which is not the same run. By eye the port's frames look like the guest's. It does not cover the pause dialog or end of race.

`check-software` at 1280x720: 320x200 with clip 0.625 and 200 rows read at `RESOLUTION` 0, render scale halves the world only, Esc and J end a `RESOLUTION` 0 race, a whole race at `RESOLUTION` 1 ends with the results written. The compared frames are at 4:3, where `dy` is 0, and `check-software` runs at one wide shape, so `clipY` on a tall shape at `RESOLUTION` 0 has no check.

## HUD: safe areas

**Original behaviour.** Does not exist: full-screen on a plain monitor.

**Evidence.** Not applicable. Requirement from [`../request.txt`](../request.txt) section 7.

**Status.**
- Confirmed: no such concept in `spel.dat`.
- Inferred: none.
- Unresolved: none.

**Where the port implements it.** `safeAreaInsets` in `source/ui/safe-area.js` reads `env(safe-area-inset-*)`. `RaceRunner.layout` passes the values to `HudLayout.setShape` as fractions of the area, and `HudLayout.apply` adds them to groups `right`, `left`, `rank`, `stats`, `topCentre`, `plates` and `bottomCentre`, and to the `players` offset in state 5. In portrait the bottom inset is 0, because the area ends above the panel. Touch controls use the same insets in CSS. `source/index.html` sets `viewport-fit=cover`.

**How it was compared.** Headless Chromium reports zero insets, and no real phone was used. Fix check, one-off script: fake insets at 800x360. Insets are added after the scale, and no run combined them with `k` above 1. Nothing else.

## HUD: overlap with touch controls

**Original behaviour.** No touch controls exist.

**Evidence.** Requirement from [`../request.txt`](../request.txt) section 7. Rectangles from `overlay0.ini`, `.d3d` bounds, `hud-overlay.md` section 5 and `source/style.css`.

**Status.**
- Confirmed: the rectangles follow from data and CSS.
- Inferred: none.
- Unresolved: real-device behaviour, since no real phone or tablet was used.

**Where the port implements it.** `source/style.css`, with `--hud-unit` from `RaceRunner.layout`:

| Control | Landscape | Portrait, below `--panel-top` |
|---|---|---|
| `#touch-wheel` | Bottom left. Below 600 px height its left margin is 10% of the height, so the fifth rank portrait stays clear | Bottom left of the panel |
| `.touch-actions` | Bottom row between Communicator and Speedometer. With `actions-lifted`: right edge, above the Speedometer | Column at the right of the panel |
| `.touch-top`: `Camera`, `Terugkijken`, `Reset`, `Pauze`, `Stop`, `Meer` | Column at the right edge between statistics and Speedometer, wrapping to the left on short screens. `Meer` adds `Roepen`, `Dashboard`, `Detail` | Two rows of four at the top of the panel, no `Meer` |
| `#race-settings` | Beside the statistics, clear of the chase timer | In the panel with touch, beside the statistics with a mouse |
| `#race-stop` | Beside the gear, for a mouse in full screen | Same |
| On result screens | Only `Verder`, bottom right, and the gear | Only `Verder`, bottom centre, and the gear |

**How it was compared.** `check-race-ui`, `layout:` checks at 800x360, 640x360, 1024x768, 360x800, 800x880, 844x390, 390x844 and 360x640: no control on the rectangles of Communicator, Speedometer, statistics or chase timer, none over another control, none off screen, in portrait none over the view, and the wheel's rim clear of the rank portraits. All pass. Those rectangles are computed from the canvas formulas, with `Meer` closed, and no chase level ran.

Not in those rectangles, calculated with touch from the same formulas and not checked:

| Viewport | Game text | Requestor body |
|---|---|---|
| 640x360 | `DRUK ENTER/RETURN VOOR RESET` x 215-435 at y 94-107: 37 px under `Stop`, whose column starts at x 398. `FLITS BONUS +100 EURO` 16 px, `KLEINE REPARATIE BONUS` 11 px, `FLITS BOETE -50 EURO` 8 px | Top right corner, 11 by 26 px, under `Meer` |
| 800x360, 844x390, 1024x768, 1180x820, 1280x720, 800x880 | Clear | Clear |
| 360x800, 390x844, 360x640, 320x568 | Clear: all controls are below the view | Clear |

With `Meer` open the column widens: 5 columns at 640x360, from x 238, over the game text's row. The player opened it.

## HUD: the research note's recommendations, checked against the source

**Original behaviour.** Not applicable: this section checks the port rules in [`hud-overlay.md`](../research/hud-overlay.md) Inferred B, C and D.

**Evidence.** The note and the source files named below, read for this document.

**Status.** Each line is confirmed by reading the source. The recommendations themselves are inferred.

**Where the port implements it.**

| Recommendation | State in the source |
|---|---|
| B: keep W, H at 640, 480 and handle shape in the host | Done. A save with `RESOLUTION=4` gives 800x600, same aspect. `RESOLUTION` 0 gives 320x200, another aspect, which `clipY` handles |
| B lever 1: HUD clip | Done, `updateClipMap` |
| B lever 2: draw-time pokes | Done, `HudLayout.apply`, `restore` |
| B lever 3: per-group scale k | Done for Speedometer, Communicator with photos, and stats, without `+0x18` and z, as the note's whole-HUD variant does |
| C: Speedometer, Communicator, photos, stats, bottom centre, middle centre | Done |
| C: rank portraits, delta 0 in state 5 | Done differently: composite delta 0, and each `PLAYER_*` keeps its share of the delta until it reaches the table, so nothing jumps |
| C: top centre includes the 4 signs, "or leave the signs where they are" | Signs and wrong-way frame move together, with a tilt |
| C note: finish strings start at `xr`, not 1.0 | Done by mapping x each frame in `apply`, without a hook on `0x00492980` |
| C note: `delta/z` correction "if it matters" | Not applied to portraits, about 3%. For the signs the tilt replaces it, no post-projection offset |
| C note: raise k on small screens | Done, `k` up to 1.35 |
| C note: safe areas, add insets to the deltas | Done |
| C note: wait-screen background letterboxed | `#loading-stage` is a 4:3 box, and the bar frames sit at the original rectangle in it. The game's blit is not drawn |
| D: batch, keep depth, do not cache HUD vertex colours | Done |
| D: HUD pass after late effects "equivalent except ..." | Done, intentional, native size, or the mode's grid on the 8-bit path |
| D: `.fnt` loading can be skipped | Not skipped. No effect on the picture |
| D: radar, dashboard, old 2D HUD: nothing to implement | Nothing implemented |
| D: car 7 | The note's "unreachable" holds for disc 1.01. Since the car update it is reachable with its own `overlay7.ini`, which runs as shipped, so nothing to do |
| D: finish flag stops covering beyond A = 2.0 and below 0.89 | Handled by `D3DRenderer.scaleFlag`, with the wave limits |

**How it was compared.** Reading only.

## HUD: corrections to the research notes

[`hud-overlay.md`](../research/hud-overlay.md) stays as written. Where it differs from this document, this table holds. Rendering's own corrections: [`render.md`](render.md) section 29.

| Note section | Says | Correct | Evidence |
|---|---|---|---|
| 2 | `0x712784 == 1` is reachable only in `tweak_mode` through `CM_KEYB_COMMA` | The key is `CM_KEYB_5`, with no tweak gate. `input.md` C7 has it right | The string at `0x5a1b28` is `CM_KEYB_5`, and that test comes after label `0x0044d55a`, outside the tweak block. `check-race-ui`: `0x712784` goes 0, 1, 0 |
| 11, Unknown | The race console `0x00471c90` has no `tweak_mode` check, and whether `CM_KEYB_TILDE` works is open | `0x0047108d` tests `0x6fb950` before activating it. With shipped `TWEAK_MODE=0` the console is inert, which settles the open question. `input.md` C8 says the same | `0x0047108d` |
| 4, 5, 6 | 1024 rotation units per turn, mask `0x3ff`, sine table of 1024; the `Rotation` multiplier 11.3778 is odd | 4096 units per turn, mask 4095, table of 4096 at run time. The multiplier fits. The image's 1024.0 and 1023 at `0x5b23b8`, `0x5b23bc` hold until start-up | `0x0045817b` and `0x00458188` pass `0x1000` through `0x004c04b0` to `0x004bc4e0`. Fix check, one-off script: run-time reads 4095, 4096.0, sin table[69] = 0.10565 = sin(69*2*pi/4096) |
| 9 | Needle factors 455.11 and 512 | 1820.44 and 2048. The 160 and 180 degrees are right | `0x0049ca90`: table/360*160. `0x0049cb00`: table/2. Fix check, one-off script: dial z = 737.28 at speed 81, turbo z = 2048 at turbo 100 |
| 10 | Finish table: `over 256 table units`, `rotation z += 2048 (2 turns)` | Over 1024 table units, and rotation z += 8192. Still 2 turns: the code uses fractions of the table size | `0x00492c70`: table*0.25, table*0.5, table*2 per duration |
| 5, 9 | The signs are plates | Extruded arrows lying in depth: y within 10, z 12 to 204, x up to 108. A plain y move at `o` = 0.45 is off by 39 to 56 canvas units | `.d3d` vertex dump, fix check |
| C | Side by side needs `k <= 1.57` at full canvas width | 2/(0.652+0.635) = 1.55 once the Communicator's 0.011 rest offset is counted. The port's cap of 1.35 is tighter, from the stats and game text | Rectangles in section 9, `0x0048a010` |
| D | The flag stops covering beyond about A = 2.0 and below about A = 0.89 | Those are a flat sheet at z 5. With the wave the edges come on screen above A = 1.66 and below A = 1.07 | `0x0043fe20`: [`render.md`](render.md) section 19 |
| D | Moving the HUD after the late effects needs only depth kept | Holds, and in addition no world geometry can cover a HUD part. See structure above | `D3DRenderer.present` |
