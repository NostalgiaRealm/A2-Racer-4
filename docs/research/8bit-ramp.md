> Static reading, written before the path was run. [render-8bit.md](render-8bit.md) has what a run on the real Ramp device settled, and where that differs from this note it holds.

# DirectX 5 Ramp device: public documentation, and what spel.dat asks of it

Nothing was run. No project file was edited. Microsoft documents are paraphrased; section names are given so each statement can be found.

Marks: **C** Confirmed (a document states it, or asm/parse shows it). **I** Inferred (follows from those, not stated). **U** Unresolved (no public source; needs a real device, see section 10). The Src column separates documents (D, H, S, W, O tags) from our code (addresses).

## 0. Result in one screen

On the software path every draw runs with `TEXTUREMAPBLEND = 7` (section 8.2), so all the ramp, material and lighting machinery has no visible effect. The per-pixel rule the port needs:

```
for each covered pixel, point sampled:
  t = page[v wrapped][u wrapped]     texel byte = palette index          C (copy), I (rounding U)
  if t == 0xFE: skip                 colour key, index compare           C (honoured), I (index)
  if ZENABLE and not z <= zbuf: skip 16-bit Z, LESSEQUAL default         C (Z honoured), I (func)
  zbuf = z                           ZWRITEENABLE stays 1 on this path   I
  fb = t                             raw index into the 8-bit target     C
```

Not consulted in copy mode: vertex colour, specular, material colour, `dwRampSize`, fog, alpha blend, shade mode, dither, filter (C for lighting and shading, I for the rest, section 2). The palette only matters when the frame is shown. Perspective correction is requested (state 4 = 1); whether copy spans are exact or subdivided is U.

New finding for the palette work: the game knows the Ramp palette flags. `FUN_004c9ff0` writes `peFlags` and only accepts 0, 0x40, 0x80, which are `D3DPAL_FREE`, `D3DPAL_READONLY`, `D3DPAL_RESERVED`. `FUN_00447d10` logs "Locking Pallette" and marks entries 0..254 read-only (section 8.4).

## 1. Sources

| Tag | Document | Location |
|---|---|---|
| D1 | *Running fast with the D3D Ramp Driver*, DirectX Team, 1996-09-05 | [DX5 SDK docs/web/d3dramp.htm](https://archive.org/download/ms-dx5-sdk/DirectX5SDK.iso/docs/web/d3dramp.htm); same file in DX3 |
| D2 | Direct3D Notes, DirectX 5, 1997-07-07 | [docs/readme/d3dim.txt](https://archive.org/download/ms-dx5-sdk/DirectX5SDK.iso/docs/readme/d3dim.txt) |
| D3 | DX5 Immediate Mode overview | [docs/worddoc/d3dimovr.doc](https://archive.org/download/ms-dx5-sdk/DirectX5SDK.iso/docs/worddoc/d3dimovr.doc) |
| D4 | DX5 Immediate Mode reference | [docs/worddoc/d3dimref.doc](https://archive.org/download/ms-dx5-sdk/DirectX5SDK.iso/docs/worddoc/d3dimref.doc) |
| D5 | DX5 Retained Mode | [docs/worddoc/d3drm.doc](https://archive.org/download/ms-dx5-sdk/DirectX5SDK.iso/docs/worddoc/d3drm.doc) |
| D6 | Direct3D Notes, DX3, 1996-09-05 (RAMP driver support, MMX notes) | [DIRECTX3/DOCS/README/D3D.TXT](https://archive.org/download/directx3sdk/DIRECTX3.rar/DIRECTX3/DOCS/README/D3D.TXT) |
| D7 | DX3 overview (Lighting Module, Palette Entries, Fog, Copy Mode) | [DIRECTX3/DOCS/WORDDOC/D3DOVER.DOC](https://archive.org/download/directx3sdk/DIRECTX3.rar/DIRECTX3/DOCS/WORDDOC/D3DOVER.DOC) |
| D8 | DX3 reference | [DIRECTX3/DOCS/WORDDOC/D3DIMREF.DOC](https://archive.org/download/directx3sdk/DIRECTX3.rar/DIRECTX3/DOCS/WORDDOC/D3DIMREF.DOC) |
| D9 | DX6 Immediate Mode (Ramp Device, Emulation Modes, Ramp Emulation Properties, Fog Formulas, Texture Perspective State, D3DTEXTUREBLEND) | [DX6.1 SDK DXF/DOC/DIRECTX6/WORD/D3DIM.DOC](https://archive.org/download/ms-dx61-sdk/Dx6_1_Gold.iso/DXF/DOC/DIRECTX6/WORD/D3DIM.DOC) |
| D10 | DX7 help text as reproduced by tdxlibrary.org | [D3DRENDERSTATETYPE](http://tdxlibrary.org/TDx_Library/TDx_3DI_Library/Glossary/Glossary_D3DRENDERSTATETYPE.htm), [D3DCOLORMODEL](http://tdxlibrary.org/TDx_Library/TDx_3DI_Library/Glossary/Glossary_D3DCOLORMODEL.htm) |
| H1, H2, H3 | DX5 `d3dtypes.h`, `d3dcaps.h`, `d3d.h` | [sdk/inc/](https://archive.org/download/ms-dx5-sdk/DirectX5SDK.iso/sdk/inc/d3dtypes.h) |
| S1-S5 | DX5 samples: `tri3/ddcalls.c` S1, `tri3/texture.c` S2, `tri3/d3dcalls.c`+`misc.c` S3, `flip3d/flipcube.cpp`+`d3dtex.cpp` S4, `boids/boids.cpp` S5 | [sdk/samples/](https://archive.org/download/ms-dx5-sdk/DirectX5SDK.iso/sdk/samples/tri3/ddcalls.c) |
| W1, W2, W3 | Wine `dlls/ddraw/device.c`, `ddraw.c`, `tests/ddraw2.c`, master 2528aff26208 (2026-10-30). Wine tests are written against native behaviour, so W3 counts as evidence of Windows, of an unstated Windows version | [wine-mirror](https://github.com/wine-mirror/wine/tree/master/dlls/ddraw) |
| O1 | DDrawCompat wiki, SoftwareDevice setting | [link](https://github.com/narzoul/DDrawCompat/wiki/Configuration) |
| O2 | Igor's Lab retro benchmark, DirectX 5 page | [link](https://www.igorslab.de/en/games-performance-windows-directx/5/) |
| O3 | Microsoft Q&A, Direct3D registry export on Windows 10 | [link](https://learn.microsoft.com/en-us/answers/questions/23b2eb9c-955b-4d09-a9f7-16969839f68b/need-default-values-for-direct3d-registry?forum=windows-all&referrer=answers) |
| O4 | *Inside Direct3D* (1999), Setting Render States | [link](https://flylib.com/books/en/1.541.1.51/1/) |

Word documents were read as text extracted with a printable-run scan, so figures and formula images are missing. Not reachable: the idlebeaver mirror of the DX7 docs (no DNS; its search snippets match D9), web.archive.org (WebFetch refused, CDX offline), two GameDev tutorials (403). Fetched text is in the session scratchpad under `web/`; no executable from these images was downloaded or run.

## 2. Q1: `D3DTBLEND_COPY` (7) in a Ramp device

| Question | Answer | Mark | Src |
|---|---|---|---|
| Are texture bytes written unchanged? | Yes. Bytes go straight to the target, placed by the vertex texture coordinates. On an 8-bit target that is index to index | C | D1 Copy Mode; D3 Copy Texture-blending Mode |
| Format rule | Texture must match the destination pixel and palette format, otherwise nothing is drawn. D3 also asks for the same palette as the primary | C | D4 D3DTEXTUREBLEND; D3; D7 Copy Mode |
| Vertex colour | Ignored: "no lighting or shading is performed on the texture" (D1). Formula is cPix = cTex, aPix = aTex | C | D1; D4 |
| Specular, material colour, ramp | Not used by that rule | I | D1, D4 |
| Colour key | Honoured. Copy mode has exactly two options, Z buffering and chroma key | C | D1; D3 |
| Key on/off | On devices from `CreateDevice`, `COLORKEYENABLE` controls it, default off. `BLENDENABLE` doing both is the older QueryInterface device | C | D2 Changes vs DX3; D4 |
| Keyed texel | Only the texture read happens, so no colour write | C | D1 |
| Keyed texel and Z | No Z write is expected, since the pixel stops after the texture read. D1 says this in the non-Z paragraph | I, confirm P7 | D1 |
| Alpha blend, fog, dither, filter under copy | Outside the two options, so no effect | I, confirm P8 | D1 |
| Later meaning | DX6 calls the mode obsolete and equal to `DECAL`; Wine maps both to the same stage setup. That describes Device3 and Wine, not Ramp copy, so do not use it for 8-bit | C | D9; W1:2843 |

## 3. Q2: `D3DCOLOR_MONO`, ramps, palette

| Topic | Answer | Mark | Src |
|---|---|---|---|
| Colour used from a vertex | Only blue, as brightness. Red and green are not interpolated | C | D4 D3DCOLORMODEL, dwShadeCaps; D3 shade modes; D10 |
| Applies to LVERTEX, TLVERTEX | The documents speak of vertex colour without excluding pre-lit types. S5 uses LVERTEX grid colours and, in a comment, sets the wanted colour in the material's emissive with ramp size 2 so that ramp mode gets it. So the hue comes from the material | I (strong) | D4; S5 `boids.cpp` grid material |
| Formula | Shade 0..1 is scaled by ramp size and used as index into a precomputed ramp. Blue = shade is the inference; rounding is unknown | C for the scaling, I for blue, U for rounding | D7 Lighting Module |
| Ramp layout | First three quarters: ambient to full diffuse. Last quarter: full diffuse to full specular | C (DX3 text) | D7 |
| DX6 wording of the same | Full light gives the base colour; less light mixes in grey or black | C | D9 Emulation Modes |
| Ambient | Built into the ramp, so the scene cannot go darker than it | C | D3 Colored Lights |
| Textured form | One lookup table per colour of the texture palette, each with `dwRampSize` entries. 32 colours and 16 shades give 32 tables of 16. Shared colours in one material share a ramp | C | D1 Introducing Lighting; D3 Ramp Textures |
| So the index is | `table[texel][shade step]` | I | D1 |
| `dwRampSize` | Number of palette entries per ramp; 16 or less advised; same size for all materials | C | D9 Ramp Emulation Properties; D3 Ramp Performance Tips |
| Background material | Must be ramp size 1 or less, otherwise no background appears | C | D4 D3DMATERIAL; D2 |
| `D3DLIGHTSTATE_MATERIAL` | Must be set for textures on Ramp. Default none | C | D4; D3 Materials |
| `hTexture` | Used only by Ramp, so the ramps can be computed ahead for that material | C | D3 Materials; D9 D3DMATERIAL |
| `D3DERR_INVALIDRAMPTEXTURE` | Draw calls return it when the current material's `hTexture` differs from state 1 | C | D4 DrawPrimitive, DrawIndexedPrimitive, Vertex, Index, End, BeginIndexed; D9 |
| `D3DLIGHTSTATE_COLORMODEL` | D4 lists default RGB; D9 says the state is unused and the device decides. Wine logs MONO as an error | C | D4; D9 Ramp Mode Lighting; W1:2951 |
| `MONOENABLE` | True when the device has no RGB; D9: unused, Ramp lighting is automatic | C | D4; D9 Ramp State |
| peFlags | `D3DPAL_FREE` 0x00 renderer may take the entry; `READONLY` 0x40 may use, may not change; `RESERVED` 0x80 may not use. Same flags work on texture palettes: S2 marks unused texture entries RESERVED so they are skipped | C | H1 end of file; D3 Palette Entries; S2 |
| What the driver takes | Writes new colours into FREE entries; `GetEntries` shows them. Fullscreen sample leaves entries 0 and 255 read-only, the rest free; windowed keeps 20 | C | D3; S1 |
| Out of entries | Closest existing match. D9 phrases it as matching materials of equal ramp size; D5 as matching palette colours | C | D9; D5 Color Models |
| Application owns the whole palette | Allowed, and better on Ramp than on RGB. No more is documented. Ramps then come from existing colours | C for allowed, I for the mapping | D3, D7 Palette Entries |
| Target needs a palette | Yes, attached to the render target and the primary | C | D3 Palette Entries, debugging list; W1 `d3d_device_create`; W3 |
| `PaletteChanged` | Only affects Ramp. The game never calls it (win32-surface.md lists only `GetHandle`, `Load`) | C | D9; notes |

## 4. Q3: untextured triangles

| Case | Answer | Mark | Src |
|---|---|---|---|
| Shade modes | Flat and Gouraud. Flat takes the first vertex; Phong is not supported | C | D6; D3; D4 dwShadeCaps |
| `TEXTUREHANDLE` NULL | Texturing off, back to flat or Gouraud | C | D4 |
| Colour with a material | Material or vertex colours per D9; on Ramp only blue counts, so the hue comes from the material's ramp | C (D9), I (Ramp) | D9 Texture states section; D3 |
| No material | Default is none. D3 says always set one in mono. D9: no material turns the lighting engine off. Output on Ramp not documented | U | D4; D3; D9 Material State |
| In the game | Moot. A material is selected once at init (`0x4badda`) and no site passes a NULL handle: every state 1 site reads the texture table | C (parse) | section 8 |

## 5. Q4: render states on Ramp

Baseline list from D6 (RAMP driver support): optional Z, colour key and stippled transparency, mono interpolation only, point-sampled perspective-correct textures, flat and Gouraud. D5 (`CreateDeviceFromClipper` remarks) gives default caps for a search that falls back to Ramp: LESSEQUAL, CULLCCW, FOGVERTEX, ALPHAFLATSTIPPLED, address WRAP, blend COPY and MODULATE, PERSPECTIVE, TRANSPARENCY, filter NEAREST. That Ramp advertises each one is I.

| State | On Ramp | Mark | Src | spel.dat on software path |
|---|---|---|---|---|
| 27 alpha blend | Not in the D6 list. In copy mode no effect. Non-copy: U | I | D6, D1 | Never set to 1 (section 8.2) |
| 33, 39 stipple | Software rasterizers ignore `STIPPLEDALPHA`, yet D6 lists stippled transparency and D5 defaults transparency to stipple. Likely the mechanism behind alpha, not a switch | C for ignore, I reconcile, U detail | D4; D9; D6; D5 SetRenderMode | No site |
| 7 ZENABLE | Honoured, default on if a Z buffer was attached at creation. 16-bit | C | D6, D1, D2, D3 | 1, section 8.2 |
| 23 ZFUNC | Default LESSEQUAL. Other functions on Ramp: U | C default | D4, D5 | No site |
| 14 ZWRITEENABLE | General text only; D1 says the Z value is written only when the test passes | I honoured | D4, D1 | 1 |
| 4 perspective | Section 6 | | | 1 |
| 17, 18 filter | Point sampled. Whether `LINEAR` returns an error: U | C sampled | D6, D5 | 2 for the overlay only, section 8.2 |
| Mip filter | Works on software from DX5 except with colour key | C | D2 | Off, shipped `mipmapping=0` |
| 3, 44, 45 address; 5, 6 wrap | Default WRAP, WRAPU and WRAPV off: plane tiles, UV above 1.0 valid. Page tip: one page means UV stays within 1.0 | C | D4; D3 Texture Wrapping; D1 | No site |
| 9 shade | Flat, Gouraud; default Gouraud. No effect in copy | C | D6, D4, D1 | Not set |
| 22 cull | D2 says Ramp honours all three since DX5; D4 still says fixed order. D2 is the specific one | C, conflict noted | D2, D4 | No site, CCW |
| 28 fog, 34 colour | Ramp fog goes through light states, table fog is for RGB and HAL. Works properly only with black fog; unlit, any colour acts as black. Fog factor scales diffuse and specular, so it walks down the ramp. Only linear exists | C | D3 Fog; D4 D3DFOGMODE; D9 Fog Formulas | Off |
| 26 dither | General text only. D6 ties 8-bit dither to RGB. On Ramp: I no effect | U | D4, D6 | No site, default off |
| 41 colour key | Honoured | C | D1, D2 | 1 |
| 47 ZBIAS | New in DX5, aimed at accelerators (D2). On Ramp: U | U | D2 | 1 around the car, fatal on error |
| 29 specular | Observed by software since DX5, default on for Device2 | C | D2; D4; W1:6948 | No site; no effect in copy |

Texture sizes:

| Question | Answer | Mark | Src |
|---|---|---|---|
| Bit depth | 8-bit palettized only | C | D3 Textures; D9; D6 |
| Power of two | Required. Ramp HEL caps have `D3DPTEXTURECAPS_POW2` on line and triangle. A wrong size gives `D3DERR_TEXTURE_BADSIZE` | C | D3; W3:16713; D9 |
| Square | Not required, only most efficient | C | D3 |
| 256x256 | Fastest and best, not a stated limit | C | D6 MMX note 4; D3 Texture Size |
| Maximum | Not documented | U | P3 |
| UV wrap | Tiling on default state; masking by pow2 size | C tiling, I masking, U rounding | D3 |

Data, by parse of all 199 PCX in `extracted/game-archives/rcs`: 256x256 142, 64x64 12, 128x128 8, 16x16 8, 32x64 1, and `init.pcx` 2048x2048, all pow2. Non-pow2 are pictures and scrolls: 640x480 12, 320x200 10, `palet` 73x65, `scrl_hi` 960x320, `scrl_lo` 480x200, `scroll` 800x200, `e03_pr` 265x256 (no INI mentions it, only the manifest). **`init.pcx` is the "main accumulator" texture 0 on the software path** (`FUN_0044bad0` to `FUN_004b8910`, message at `0x5b152c`). `GetHandle` failure on the no-HAL path is fatal (`0x4b9f56`..`0x4b9f73`), so a real Ramp must have accepted 2048x2048 if this path ever worked (I).

## 6. Q5: affine or perspective

| Question | Answer | Mark | Src |
|---|---|---|---|
| Default of state 4 on Device2 | FALSE. DX3, DX5, DX6 and DX7 agree: TRUE only from Device3 on | C | D8, D4, D9 Texture Perspective State, D10 |
| Conflicting source | O4 says TRUE; it describes DX7. Not applicable | C | O4 |
| Can Ramp do it | Yes: D6 names it, and HEL caps have `D3DPTEXTURECAPS_PERSPECTIVE` | C | D6; W3:16718 |
| So the Ramp default | Affine, until state 4 is set | I | above; S3 defaults `bPerspCorrect` to FALSE |
| spel.dat | Sets 1 once at `0x4bb908` from `[+0x298]`. Only writer is the constructor at `0x4bb6a1` (value 1). The default never applies | C | parse |
| Copy honours it? | D1's two options do not mention perspective; D6 and caps do not split by blend mode. S4 lets both be chosen. Port should use perspective-correct | U, P4 | D1, D6, S4 |
| Span precision | Not documented | U, P4 | |

## 7. Q6: availability

| Package | Ramp file | Mark | Src |
|---|---|---|---|
| DX2 SDK | `D3DRAMPF.DLL` | C | archive listing `directx2sdk` |
| DX3 SDK | `D3DRAMPF.DLL`, also NT and Alpha, MIPS builds under `EXTRAS/D3DFORNT` | C | listing `directx3sdk` |
| DX5 SDK | `d3drampf.dll` | C | listing `ms-dx5-sdk` |
| DX6.1 SDK | `D3DRAMP.DLL` | C | listing `ms-dx61-sdk` |
| DX7 SDK | `d3dramp.sym`, Win9x and Win2000 | C | listing `ms-dx70-sdk` |
| **Game disc** `DXSetup/DirectX.cab` | `d3dramp.dll`, 590096 bytes, 1999-09-09; `dxver.inf` version 4.07.00.0716 (DirectX 7.0a by version string, I). Names only, not analysed | C | 7z listing |
| `rampmmx` | No such name in any listing above. MMX files are RGB ones (`D3DRG55X`, `D3DRG56X`) | C for names | listings; D6 |

- Interface rule: from DX6 a Ramp device needs `IDirect3D2`, or older; no `IDirect3DDevice3` (D9). The game uses `IDirect3D2::CreateDevice` with GUID `F2086B20-259F-11CF-A31A-00AA00B93356` (H3; `FUN_004bbd40`). **C**
- Software devices may target 8 bits, hardware may not (D2, D9). W3:5536 expects `DD_OK` for a software device on P8 with a palette and marks it `todo_wine`, which is why Wine refuses here. **C**
- Later Windows: O1 says not supported on recent versions, O2 needed `d3dramp.dll` copied in on Vista and 7, O3 shows a Windows 10 registry entry with base `ramp`. The version where it stopped: **U**.

## 8. What spel.dat does

Parsed from `disassembly.asm` with a script: every `CALL [reg+0x5C]` and `[reg+0x64]`, pushes read back from the call. 103 `SetRenderState` and 21 `SetLightState` calls are on the device.

### 8.1 SetLightState (+0x64)

| Sites | Function | State = value | Software path | On Ramp |
|---|---|---|---|---|
| `0x4badda` | `FUN_004bab70` | 1 = mat 0 handle `[+0x50]`, cached `0x73b50d` | Once at init | The required selection (D3, D4) |
| `0x4bba69`, `0x4bbaa0`, `0x4bbad7`, `0x4bbb0e` | `FUN_004bb7a0` | 7 = 0.8, 5 = 3.25, 6 = 50.0, 4 = 3 linear | Device init | Stored; fog off; no effect in copy (I) |
| `0x456e26`..`0x456ff0` (5) | `FUN_00456d90` | 7, 5, 6, 4, then 5 = 3.5 | Not gated on hardware flag; fog off | No effect (I) |
| `0x4570d2`..`0x457331` (5), `0x457402`..`0x4575cc` (5) | `FUN_00457040`, `FUN_00457370` | same | Not run: `DAT_006fb8d0 != 0` gate | |
| `0x4577f6` | `FUN_004577d0` | 6 | Only if `[+0x27c]` != 0 | |

No site for 2 `AMBIENT` or 3 `COLORMODEL`. **C**. The other `+0x64` calls in the parse are not on the device (`0x45848d`, `0x4c47d5`, `0x4c48b6`, `0x4c4925`, `0x4c4d6d`, `0x4ef534`).

### 8.2 SetRenderState (+0x5C)

| State | Sites and values | Software path | Mark | On Ramp |
|---|---|---|---|---|
| 21 | `0x4bb9ad` = `[+0x2ad]` = 1; `0x44bc4d` = 7 if `DAT_006fb8d0 == 0`; `0x44bc25` = 2 else; `0x43d476` = 7 under `DAT_006fb8d0 != 0` | 1 from device init, 7 from `FUN_0044c200` at `0x44c2d7`. Loading screens draw later (`0x44c49a` on, `0x4581d0`). So DECAL is never drawn with | C sites, I order | Copy mode |
| 4 | `0x4bb908` = 1 | On | C | Section 6 |
| 9 | `0x44bce4` = 2, only `DAT_006fb8d0 != 0` | Not set, default Gouraud | C | Irrelevant in copy |
| 7 | `0x4bb976` = 1; `0x440355` = EBP (1 per `0x44018f`); `0x462e11` = 0 and `0x462e80` = 1 (`FUN_00462cf0`); `0x486107` = 1 | On except in `FUN_00462cf0` | C | Honoured |
| 14 | `0x4a753d` = 0 (mesh type != 3), `0x4a7560` = 1 (type 3), `0x4a7639` = 1 after the loop, all in `FUN_004a74f0` | The list can hold car parts (`FUN_00436510`, `FUN_00436850` with `param_2` != 0), so 0 can be set, but this path clears their `+0x90` draw flag there, and `FUN_004a74f0` draws only if it is set. `FUN_004a8cb0` adds only for `+0xa5` != 0. So every draw has 1 | I | Default value anyway |
| 26 | No site | Default off | C | |
| 27 | `0x43defb`, `0x43e04c`, `0x440226`, `0x44031c`, `0x44275e`, `0x442b50`, `0x443d90`, `0x443e9e`, `0x44523c`, `0x4453fb`, `0x4470c5`, `0x447278`, `0x45dd26`, `0x45dd9a`: all behind `DAT_006fb940`. `0x485f2b`, `0x48614c`: `[+0x8a]` and `[+0x8b]`. `0x4b5e50`, `0x4b5e6f`: mesh `+0xa5` | **Never 1.** `FUN_0044baa0` forces `DAT_006fb940 = 0`. `FUN_00487f20` sets `[+0x8a] = DAT_006fb8d0 != 0`. Every nonzero `+0xa5` write has a `JZ` on `DAT_006fb940` (13 sites checked) or the constant path in `FUN_00443ef0` (`0x444581`, also needs `DAT_006fb8d0`) | C parse, I flow | Blend question is moot |
| 28 | `0x4bb9fb` = 0; `0x456dba` = 0; `0x457066` = 1 and `0x457396` = 0 behind `DAT_006fb8d0 != 0` | Always 0 | C | No fog |
| 1 | Table handle at 19 sites | Index 0 forced each frame (`0x44dad3`, `0x44dba8`), both behind `DAT_006fb8d0 == 0` | C | Honoured |
| 17, 18 | `FUN_004bc200` | `FUN_0044bbf0` returns before it on `FILTER=2` (shipped). **`FUN_00485ed0` calls it with `[+0x88]`, 1 from the constructor at `0x483f61`**, so 2 (LINEAR, or 6 then 4 with mip) during the overlay; `FUN_00486040` restores. Any failure except 6 is fatal | C | Point sampled. Must return OK (I); P8 |
| 34 | `0x4bba32` = 0xffffff and fog handlers | Stored | C | Unused, fog off |
| 41 | `0x4bb93f` = 1 once | On | C | Key honoured |
| 47 | `0x4445f8` = 1, `0x444637` = 0 around `FUN_004b5b10` in `FUN_00443ef0` (car). Fatal on error. `FUN_00443710` sends all cars here on this path | Runs | C | U. Port: ignore until P8 |
| 19, 20 | `FUN_004a74f0` (table `0x5afa50` by `+0xa5`), alpha gates; `0x47cd07`, `0x47cd5b` by `[ESI+0x48]` | No effect without 27 | I | |

Key: `FUN_004ba810` passes `DAT_005b149c` (0xFE, data at `0x5b149c`) through `FUN_004c81b0(i, 8)`, which returns `i` unchanged on an 8-bit display. `SetColorKey` flag 8 `DDCKEY_SRCBLT` with low = high = 0xFE. So the key is an index compare. **C**

### 8.3 Materials

`FUN_004bb190` builds a `D3DMATERIAL` in the object (H1 layout): `+0x00` dwSize 0x50; `+0x04` diffuse rgb 1.0; `+0x14` ambient rgb 1.0; specular, emissive, power 0; `+0x48` `hTexture` 0; `+0x4c` `dwRampSize` 16. Object fields after it: `+0x50` handle, `+0x54` `IDirect3DMaterial2`, `+0x58` dirty, `+0x5c` write-through = 1, `+0x60` texture index = -1, `+0x64` = 4. `FUN_004bab70` makes two with `FUN_004baf10`: `DAT_005b1ba8` (current, all binds) and `DAT_005b1bac` (fog background), both white (`FUN_004bfdc0`). White with ramp 16 follows D3 Ramp Performance Tips (I on intent).

Every bind has one shape: mat 0 `+0x60` = index, `+0x48` = `table[index].handle` (`0x73b1b0`, stride 0x48), `SetMaterial`, then state 1 if `0x73b4ec` != index. That keeps `hTexture` equal to state 1, so `D3DERR_INVALIDRAMPTEXTURE` cannot occur (I). On hardware this write has no use (D9), so the code exists for Ramp (I).

| Kind | Sites (direct, or helper call into `0x440445`) | Software path |
|---|---|---|
| Create | `0x4bb21f`, `0x4bb286`; colour `0x4bb097`, `0x4bb14b`, `0x4bb171` | Init |
| Bind index 0 | `0x4b8a80` (`FUN_004b8910`), `0x44daae`, `0x44db85` (`FUN_0044da30`) | Software only |
| Bind, gated by flags, not by hardware flag | `0x43de8b`, helper `0x4401b3`, helper `0x4451c5`, `0x447055`, `0x4426f2`, `0x442a72`, `0x442aec`, `0x462d34`, helper `0x4bd1d4` (only if texture `+0x44` == 0) | Can run |
| Bind, hardware only | `0x446123`, `0x45fdc9`, `0x47b203`; helper `0x4aede0`, `0x4aef04`, `0x4af055`, direct `0x4af185` (`[this+0x9c]`) | Not run |
| AI debug | `0x40a2fc`, `0x40a46b`, `0x40a6e3`, `0x40a903`, `0x40b2f4` | Debug only |
| Fog colour | `0x43b3d5`, `0x43b406`, `0x457782`, `0x4577c2`, helper `0x457235` | Fog off, not run (I) |
| Background | `0x457708` (`FUN_004576f0`): sets `+0x4c` = 1 as D3, D4 require, then `SetBackground` | Not run: `DAT_005b2b64` stays -1 (`0x5b2b64`, reads only) and fog is off (I) |

On Ramp these calls can only rebuild ramp data, or claim palette entries. In copy mode none of it reaches pixels except through the palette (8.4).

### 8.4 Palette flags and order, software path

| Step | Code | Palette state |
|---|---|---|
| 1 | `FUN_004c9c90`: `LocalAlloc(0x40)` zeroed, `CreatePalette(0x44)`, `SetPalette` on primary, back, buffer | All black, flags 0 = FREE |
| 2 | `FUN_004c04b0`: 16-bit Z, `CreateDevice(Ramp)`, `FUN_004bb7a0`, `SetEntries(0, 256)`, `FUN_004c2b90(2)` "TXF_8BPP_RAMP", materials, viewport | FREE. Untextured materials with ramp 16 exist |
| 3 | `FUN_0044c200` to `FUN_0044bad0`: `FUN_004b8910("init.pcx")`: texture 0, `SetPalette` on it with the same object (`0x4b9dd4`, `0x4b9e06`), `GetHandle`, material gets `hTexture`, `SetMaterial` | **Still FREE, blend still DECAL** |
| 4 | `FUN_00447d10`: load track palette, `SetEntries(0, 256)` and again 255 entries; `FUN_004c9ff0(pal, 0, 0xff, 0x40, 1)`, log "Locking Pallette" | 0..254 READONLY, 255 FREE |
| 5 | `FUN_0044bbf0` | Blend 7 |
| Later | `FUN_0043b0b0` saves with `GetEntries`, relocks. `FUN_0043b130` flash writes 255 entries with flags 0. `FUN_0043b0f0` restores with 0x40 | Speed camera flash ("FLITS", `FUN_00457880`) |

Loaders write only bytes +0, +1, +2 (`FUN_004cab50`, `FUN_004cac30`), so byte +3 survives. **C**

Reading (**I**): the lock after step 3 suggests the authors knew Ramp may touch free entries; step 4 rewrites whatever it did to 0..254. The palette is the application's, read-only as D3 allows, with one free entry left. Entry 255 is magenta (255,0,255) in the `e0?_pal.pcx` files and used by 14 texels in pages: `0c1_dam` 11, `e01_vang`, `e03_gras`, `e09_crne` 1 each (parse; also `palet.pcx` 65 and `e02_pl16.pcx`, a whole 16-bit-mode palette picture). So even if Ramp claims it, little shows. Whether Ramp writes anything in steps 2 to 4: **U**, P2.

## 9. Host rules that follow

| Call | Rule | Mark |
|---|---|---|
| `CreateDevice` | Accept the Ramp GUID on an 8-bit target with a palette; `DDERR_NOPALETTEATTACHED` without (W1) | C |
| `GetCaps` | Hardware desc `dwFlags` = 0 and color model 0 (W2:3905-3907; `FUN_004c1030`). HEL `dwFlags` with bit 0, `dcmColorModel` = 1 so `FUN_004c1250` logs Ramp; texture caps POW2, PERSPECTIVE | C for Wine values, I for need |
| `EnumDevices` for IDirect3D2 | Order Ramp, RGB, HAL, MMX, name "Ramp Emulation" (W3:16710, W2:3914) | C |
| `EnumTextureFormats` | Report 8-bit palettized (`0x20` in `FUN_004c1e60`), so format 2 exists | I |
| `SetRenderState` | Return 0 for everything, including 17, 18 = 2 or 6 and 47. With blend 7 use only 1, 4, 7, 14, 41 | I |
| `SetLightState`, `SetMaterial`, material `GetHandle`, `SetBackground` | Store only. Do not emulate palette claims. Optional debug assert on `hTexture` == state 1 | I |
| Texture surface | System memory, one surface, palette object shared (`FUN_004b9b40`; S4 does the same for software devices) | C |
| Palette | Keep byte +3 for `GetEntries` round trip (`FUN_0043b0b0`); ignore it for colour. Apply at present | I |
| Viewport `Clear` with TARGET | Only at init (`FUN_004c0780`, caller `0x4c05f4`); frames clear Z only (`FUN_004c0840`). No background set; D4 says clears to it if set. Leave target unchanged | I, U detail |
| Lines | `FUN_00462cf0` draws list lines with texture 0 and Z off. Ramp has line texture caps (W3). Sample texture 0 at the vertex UV | U, P9 |

## 10. Settle on a real Ramp device

A Win9x guest with the disc's DirectX, in an 8-bit mode, is enough since Ramp is software only (Rick's `win98-clone` or 86Box). A small `IDirect3D2` program covers P1 to P10; P11 is the game itself.

| # | Probe | Settles |
|---|---|---|
| P1 | Dump HEL caps (`dxview` from DX5 SDK `sdk/bin`): blend, raster (ZBIAS, DITHER, SUBPIXEL), shade, filter, address, min and max texture size, line caps | Section 5 rows, host `GetCaps` |
| P2 | Replay 8.4, `GetEntries` with flags after each step: `CreateDevice`, plain `SetMaterial`, `SetLightState`, `SetMaterial` with `hTexture` under FREE, lock, first copy draw, later `SetMaterial` | Does Ramp write entries; entry 255 |
| P3 | `GetHandle` on 8-bit 2048x2048, draw in copy, read back | Size limit, UV precision on large textures |
| P4 | Copy quad with strong w gradient, state 4 = 1 and 0, read back | Copy honours state 4; span subdivision; default truly affine |
| P5 | Ramp-pattern texture, known UVs including above 1 and below 0 | Texel rounding, wrap |
| P6 | Triangles with fractional coordinates | Fill rule, subpixel |
| P7 | Keyed near quad over an opaque far quad, Z on | Keyed texel writes Z or not |
| P8 | Copy with state 27 = 1, fog on, 17, 18 = 2 and 6, 47 = 1: return codes and pixel difference | Ignored or not; failure codes |
| P9 | Textured line list and point in copy, with LVERTEX | Lines under copy |
| P10 | Read the Z surface after `Clear` and after a draw | Clear value (0xFFFF expected, D2 notes 0x7FFF for MMX), Z format |
| P11 | Run `spel.dat` with `RESOLUTION=0` and `1`, grab frames at fixed points | Golden pictures for the port; shows if the path ever worked |
| P12 | Mismatch of `hTexture` and state 1 in copy | Is the error raised in copy (moot for the game) |

Port defaults until then: exact perspective, floor and mask for texels, no Z write on keyed texels, ZBIAS ignored, D3D fill rule.

## 11. Corrections to the notes

| Note | Says | Parse says |
|---|---|---|
| `win32-surface.md`, IDirect3DMaterial2 | 26 `SetMaterial` sites | The list has 28 addresses. `0x440445` is helper `FUN_00440430` with 8 callers: `0x4401b3`, `0x4451c5`, `0x44daae`, `0x457235`, `0x4aede0`, `0x4aef04`, `0x4af055`, `0x4bd1d4` |
| `win32-surface.md`, IDirectDrawPalette | Lists `SetEntries` and `GetEntries` only | `FUN_004c9ff0` also writes `peFlags`; values are the `D3DPAL_*` flags |
| `win32-surface.md`, device selection | Ramp: type 4 | Also `[+0x2b9]` = 1 at `0x4bbe77`; writers only, no reader found by `+ 0x2b9]` grep or `0x73b511` |
| `render-textures.md`, section 1 | RES 0, 1 not in the palette table | Same mechanism as 2, 5: first `[PALET]` argument, palette[0xFE] = 255,0,127 (parse of `e0?_pal.pcx`), key is index 0xFE, not a colour |
