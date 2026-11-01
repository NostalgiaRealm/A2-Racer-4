# The 8-bit path as measured

`3D kaart` off: `RESOLUTION` 0 (320x200x8) and 1 (640x480x8). Static reading is in [8bit-device.md](8bit-device.md), [8bit-textures.md](8bit-textures.md), [8bit-drawing.md](8bit-drawing.md) and [8bit-ramp.md](8bit-ramp.md). This note holds what a run on the real thing added or corrected. Where they differ, this note holds. Tool: [`tools/reference-86box/`](../../tools/reference-86box/README.md). Frames and numbers: [`evidence/reference-86box/results.md`](../../evidence/reference-86box/results.md).

## How it was run

Wine cannot run this path: its `CreateDevice` refuses an 8-bit target (`d3d_device_init: Failed to set render target`). A throwaway copy of the owner's 86Box machine can: Windows 98 SE with DirectX 9, `D3DRAMP.DLL` of 590096 bytes dated 1999-09-09, the same size and date as the one on the game's disc, an emulated Voodoo3 3000. `spel.dat` started from the machine's StartUp folder with `NOCD` set, disc 1.01 data, etappe 0, car 0. It ran at both resolutions on the first try. Status words below: Confirmed means read from the frames, or read from the frames and reproduced in the port.

## What the frames settled

| Question in the notes | Answer | Status |
|---|---|---|
| Did this path ever work | Yes, with the real Ramp rasteriser: countdown, driving, opponents, HUD, sky, damage | Confirmed |
| Colour of draws with state 1 = 0 (skid marks, `gfx_wolk`, `gfx_bwlk`) | Palette index `255 - floor(blue / 17)`, Gouraud across the triangle. The blue byte picks one of 16 steps, top of the palette downward: smoke runs 244 at its centre (blue 200) to 250 at its rim (blue 100), skid marks are 252 (blue 64). So not the vertex colour and not a nearest grey | Confirmed for those values. Inferred: the Ramp driver took entries 240 to 255 for the white material's ramp while they were free (`FUN_004bb190` comes before `FUN_00447d10`), and the game's palette then replaced their colours, so these draws come out in near-black colours of the art palette |
| Vertex alpha in those draws | Screen-door stipple on a 4x4 ordered matrix, in screen pixels, by the alpha of the triangle's first vertex. A pixel is drawn when `16 * T < alpha`, with T by column x, row y: `0 12 3 15 / 8 4 11 7 / 2 14 1 13 / 10 6 9 5` | Confirmed: the first six thresholds from dot counts over 15 frames, the rows at alpha about 200 from a young skid mark. The rest of the matrix is the same Bayer pattern, Inferred |
| Is alpha ignored | No, although `ALPHABLENDENABLE` is never set. It is ignored only under copy mode, on textured draws | Confirmed |
| Smoke | Sparse dark dots, not solid and not grey | Confirmed |
| Skid marks | Dense hatching when new (alpha near 200), solid dark later (alpha 255) | Confirmed |
| Texture stretch into a page tile | 16.16 steps from pixel centres: `src = ((step >> 1) + x * step) >> 16`, `step = floor(sw * 65536 / dw)`. Plain rounding put a colour column one texel off at the kerb of Amsterdam, where the game's UV lies exactly there | Confirmed |
| Sampling of the page | `floor(u * 2048)`, wrapping | Confirmed: half a texel either way, and a scale of 2047, all score worse |
| Pixel centres | At integer coordinates, Direct3D's rule: half a pixel of the mode from WebGL's. World: 57.5% of pixels identical without this and the stretch rule, 91% with both, 92.2% with the 16.16 steps | Confirmed |
| Filter on the HUD | None visible: state 17, 18 = 2 has no effect | Confirmed |
| Perspective | Correct, near enough: straight on, the road and cars match texel for texel. Far, steep surfaces differ in single texels, which fits spans with subdivision | Inferred |
| `VISIBLECHUNKS` floor | Seen: on the emulated Pentium MMX 266 far scenery is gone by the time the race stands still, and a port frame with `?chunks=15` matches it | Confirmed |
| Smoke gate, `FUN_00446c70`, 12 FPS | No smoke on the Pentium MMX 266 at 640x480, nor on a K6-2 550 at 640x480. A K6-2 550 at 320x200 shows it | Confirmed |
| Colour buffer between frames | Not cleared. Off the track, the sky's rectangle shows as a block with old pixels below it | Confirmed |
| Black opaque blob shadow | Yes, and large when the car is in the air | Confirmed |
| 320x200 in the guest | Double-scanned to 640x400 by the emulated card. On a monitor of the period that fills 4:3, which the HUD's squeeze by `H/W` (`0x0047cd90`) is made for | Confirmed for the scan. Inferred for the monitor |

## Not settled

- Flash: palette writes are read from the code, and the port was seen to do them, but no frame of the guest caught one.
- Index of a step below blue 17: magenta 255 by the rule, and no draw in the game goes there.
- Thresholds above alpha 96 and between 112 and 192: no frame was read at those values.
- What remains between the frames: single-pixel lines on polygon edges, which is the rasteriser's fill rule, single texels on far surfaces, and rows of HUD glyphs in some strings. A sliver one pixel wide right of the speedometer's hub is in the guest only.
- Any real machine of the period: this is an emulated one.
