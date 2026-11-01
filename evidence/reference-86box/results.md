# The original's 8-bit path on an emulated Windows 98 machine, against the port

Measured on 2026-11-01, on etappe 0 (Amsterdam), car 0, with `game.ini` and `raser.ini` of disc 1.01 and `RESOLUTION` set. Scripts and commands: [`tools/reference-86box/README.md`](../../tools/reference-86box/README.md). What the runs established: [`docs/research/render-8bit.md`](../../docs/research/render-8bit.md).

## Environment

| Item | Value |
|---|---|
| Host | Fedora 44, Linux 7.2.13, AMD Ryzen 9 5950X |
| Emulator | 86Box 6.0, Flatpak, private Xvfb, software presenting, no network, no sound device |
| Machine | The owner's, as a throwaway copy: AX59 Pro, 128 MB, Voodoo3 3000 AGP, Windows 98 SE, DirectX 9, `D3DRAMP.DLL` 590096 bytes dated 1999-09-09. Pentium MMX 266, or AMD K6-2 550 where this says so |
| Game | `spel.dat` from disc 1.01 as `SPEL.EXE`, byte-identical, no patch, `NOCD=C`, started from the StartUp folder |
| Port | `public/game/spel.wasm` sha256 `c7249252...`, headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan, canvas at 640x480 |
| Picture | Screenshots of the X window. The guest's 640x480 at its own pixels; 320x200 double-scanned by the card to 640x400 and reduced with `-filter point` |

## Frames at rest

No keys. The opponents have left and the car waits on its grid, so camera and world stand still. Guest at about 200 s after boot, port at 41 s of game clock, `?chunks=15` because the slow machine fell to that view distance. Compared pixel by pixel in RGB by `compare.py`. World is the region without the HUD's corners and the zeppelin, HUD text the timer, lap and position. Files: `side-640-rest.png` and `side-320-rest.png`, port, guest and differences times three.

| | Whole picture identical | World identical | HUD text identical |
|---|---:|---:|---:|
| `RESOLUTION` 1, 640x480 | 88.1% | 92.2% | 81.7% |
| `RESOLUTION` 0, 320x200 | 85.5% | 93.3% | 63.6% |

By rule, at `RESOLUTION` 1, world identical:

| Port | |
|---|---:|
| First try: floor of `x * sw / dw` in the tile stretch, WebGL pixel centres | 57.5% |
| Half-pixel shift only | 67.5% |
| Stretch from centres only | 65.0% |
| Both | 91.0% |
| Both, with 16.16 steps in the stretch, final | 92.2% |
| Final, with a texel bias of -0.25 | 82.1% |
| Final, with a texel bias of -0.5 | 68.3% |
| Final, with a texture scale of 2047 for 2048 | 75.9% |

What remains in the pictures: the rank portraits, which depend on the order the opponents happened to take. Single-pixel lines on polygon edges. Single texels on far, steep surfaces such as the buildings on the right. Rows of glyphs in some HUD strings, more at 320x200, where they are most decimated. A sliver one pixel wide beside the speedometer's hub is in the guest only.

## Smoke and skid marks

K6-2 550 at 320x200, since the game spawns no smoke below 12 FPS, and the Pentium MMX 266 and the K6-2 at 640x480 did not reach that. Gas for 9 s, then brake with full left. Files: `guest-320-smoke.png`, `guest-320-skid-young.png`, `side-320-smoke.png`: the port on the left and the guest on the right, different moments in different runs, for the look only.

| Read from the frames | Palette index or pattern |
|---|---|
| Skid mark, vertex blue 64 | 252, solid when old, hatched when new |
| Smoke, vertex blue 200 at the centre, 100 at the rim | 244 to 250 across a fan |
| Rule that fits | `255 - floor(blue / 17)` |
| Dots counted per 4x4 cell over 15 frames, less about 1600 of art | (0,0) 11850, (2,2) 9400, (0,2) 3870, (2,0) 1285, (1,1) about 360, (3,3) about 240 |
| A young skid mark, alpha about 200 | Odd rows full; rows at y mod 4 = 2 at x mod 2 = 0; rows at y mod 4 = 0 three of four. That is thresholds below 13 |
| Rule that fits | Draw when `16 * T < alpha`, with T of column x, row y: `0 12 3 15 / 8 4 11 7 / 2 14 1 13 / 10 6 9 5`, alpha of the triangle's first vertex |

## Other things seen

- `guest-640-offroad.png`: off the track the colour buffer shows old pixels under the sky's rectangle.
- Without keys the race starts by itself. The timer stands at 0 until the car crosses trigger 13, as in the code, and that was the only surprise in the first run.
- The wait picture and progress bar show during loading, on the K6-2 as well.

## Not established

- The flash on the guest: no frame caught one.
- Thresholds of the matrix above alpha 96, except near 200.
- Any real machine.
