# Render research: textures

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: section 4 (who can write `mipmapping`). The rest of the note is as it was written.
>
> Davilex's two official updates were found in the installation after this note was written ([`../provenance.md`](../provenance.md), [`../../original-game-decompiled/original/updates/README.md`](../../original-game-decompiled/original/updates/README.md)). Section 12 counts the disc's files: the car update renames the anim `TOURNAMENT_BONUS` to `DOWNLOADCAR` and adds anims to `gen_anim.ini`, and etappe 9 has no row in its table. The name is fixed in place below; the counts were not redone.
>
> The 8-bit path (`3D kaart` off, `RESOLUTION` 0 and 1) was run on an emulated Windows 98 machine and ported after this note was written: [`render-8bit.md`](render-8bit.md) holds where it differs, and section 1 (its row in the palette table) and section 2 (`FUN_004cac30` does not run on it) are fixed in place below.

Static evidence: Ghidra pseudocode, `disassembly.asm`, shipped files read with my own parsers. Nothing was run. COM call lists are in `win32-surface.md`, RC sprite context in `hud-overlay.md`, frame order in `render-frame.md`. All statements assume `RESOLUTION=3` (shipped `raser.ini`) unless a row says otherwise.

## Confirmed

### Short answers

| Question | Answer | Section |
|---|---|---|
| Which texels are transparent? | Exactly the 16-bit texels equal to the surface colour key, `0x0000` | 1 |
| Source of those texels | TGA RGB (255,0,127); any real black is moved to `0x0800` | 1 |
| Does a race reload textures per frame? | Files: never. `IDirect3DTexture2::Load`: yes, for cached pipeline objects only | 8, 9 |
| LOD while driving? | None. Sizes are fixed once before the race. | 7 |
| Texture animation? | No flipbook or UV scroll in Animsys. Time-based anims swap meshes | 12 |
| RC.IMG | 2D sprites on DirectDraw surfaces, never D3D textures, no live HUD draw | 13 |

### 1. Pixel conversion and colour key (`Pformat.cpp`, `0x4c7ee0`-`0x4c8690`)

Registers: `0x7409bc/c0/c4` R/G/B bit position, `0x7409ac/b0/b4` R/G/B right shift (`8 - width`), from `DDPIXELFORMAT` masks by `FUN_004c8690(fmt)` and `FUN_004c8540()` (primary). `0x5b37a0` = screen bpp.

| Call | Input | Rule |
|---|---|---|
| `FUN_004c81b0(v, 0x18)` → `FUN_004c7ee0` | `0x00BBGGRR` | `v == [0x7408f0]`: fields = key registers. Else `c >> shift`, truncating, no rounding, no dither. If a non-magic result equals the key: red = 1 when key red is 0, else red - 1 |
| `FUN_004c81b0(v, 0x20)` → `FUN_004c8020` | `0xAABBGGRR` | same, plus alpha. Path needs an alpha pixel format, see below |
| `FUN_004c81b0(i, 8)` | palette index | palette `0x7409f0[i*4]` R,G,B to packed. If `i != 0xFE` and the result equals the key: red = key red + 1 |
| `FUN_004c81b0(v, 0x10)` | packed | unchanged |

- **Key registers** `0x740d24/28/2c`: in BSS, `disassembly.asm` has reads only. They stay 0, so the key target is RGB (0,0,0), packed `0x0000`.
- **Magic source colour:** `FUN_004c4030(0x7f00ff)` at `0x44bb81` stores `0x7408f0` = R 255, G 0, B 127. It runs only when `DAT_006fb8d0 != 0` (`JZ 0x44bb89` at `0x44bb4d`), meaning the 16-bit modes.
- **565 result for RESOLUTION 3:** texel (255,0,127) → `0x0000`. Any other colour with R<8, G<4, B<8 → `0x0800` (red = 1). Other colours `(R>>3)<<11 | (G>>2)<<5 | B>>3`.
- **Near-magic texels stay opaque:** a colour that truncates to (31,0,15) without being exactly (255,0,127) becomes opaque `0xF80F`.
- `gamma` key (`0x6fb93c`, shipped 0): `FUN_004c7ed0(1)` sets `0x7409d0`, then each channel is `(c*c)>>8` during conversion, after the magic check. Inside recompiled code, nothing for the host to do.
- **Scan of all 173 TGA files:** 127 contain exact magic (3,028,497 texels), 44 contain near-magic (1,043 texels), 144 contain exact black, 147 contain dark colours that truncate to 0. None contain (255,0,255).
- **SetColorKey value:** `FUN_004ba810` = `FUN_004c81b0(0xFE, 8)`, low = high. Flag `8` = `DDCKEY_SRCBLT` on memory and video surface (`FUN_004b9b40`).
- **Key depends on the palette.** Palette: `FUN_00447d10` (`FUN_004cab50`, last 768 bytes of the file):

| RESOLUTION | Palette file (`[PALET] ETAPPEn`) | palette[0xFE] | Texture key | Effect |
|---|---|---|---|---|
| 3, 4 | second arg, always `e02_pl16.pcx` | 0,0,0 | `0x0000` | matches magic texels |
| 2, 5 | first arg, `e00_pal.pcx`/`e02_pal.pcx` | 255,0,127 | `0xF80F` | magic texels (`0x0000`) are **not** keyed; near-magic ones are |
| 0, 1 | first arg, `e00_pal.pcx`/`e02_pal.pcx` | 255,0,127 | index `0xFE`, not a colour | texels of index `0xFE` on the page are keyed |
| 6-9 | none (switch default) | zeroed `LocalAlloc` at `FUN_004c9c90` | `0x0000` | matches; sprites lose their palette |

`COLORKEYENABLE` (state 41) is set to 1 once and never changed (`0x4bb93f`, `win32-surface.md`).

No alpha in textures: `FUN_004c2b90` has one call, at `0x4c058a`, with 3 or 2, never the alpha slot 4. The 0x20 branch of `FUN_004c00b0` needs `DDPF_ALPHAPIXELS` in the passed format (`fmt+4` bit 0), and no shipped path passes one. The one 32-bit TGA, `e06_w_hi.tga`, is a wait screen in the primary format: its fourth byte is read and dropped.

### 2. Loaders

`FUN_004b96c0(name, &w, &h, caps, fmt)`: copies 14 chars of the name, cuts at the first `.`, appends `.pcx` when `0x73b20c == 0`, `.tga` when 1. `FUN_004b8840(1)` in `FUN_0044bad0` runs only for `DAT_006fb8d0 != 0`. **In 16-bit modes only TGA reach this code.**

**TGA `FUN_004c00b0(name, &w, &h, caps, fmt)`** (callers `FUN_004b96c0`; `FUN_004409d0` for wait screens with caps `0x800` and the primary format):

| Step | Detail |
|---|---|
| Open | `FUN_004c62c0`: `strcmpi` in the `rcs.img` index, else file. Missing file: returns the `caps` argument as the surface pointer (`MOV EAX,EBP` at `0x4c0438`), not a fatal message |
| Header | id length byte read, not skipped; shipped value 0 in all 173. Colour map type ≠ 0: fatal. Image type ≠ 2: fatal. Skips 9 bytes. u16 w, u16 h, u8 bpp, u8 descriptor. bpp not 24/32: logs and returns 0 |
| Surface | `FUN_004c4b90(w, h, caps, fmt)` |
| Rows | descriptor bit 0x20 set: top-down. Clear: from row h-1 upward. Shipped: clear in all. Surface row 0 is the image top |
| Pixels | per byte `fread` B, G, R (A if 32-bit). 16-bit screen: `FUN_004c81b0(BBGGRR, 0x18)`, stored as u16 at `base + pitch*row` from `FUN_004c48f0`. 768×512 means about 1.18 M one-byte reads |
| End | Unlock, close, `FUN_004c8540()` restores primary registers |

**PCX `FUN_004cb630` (texture), `FUN_004cae20(focus, name, flags)` (screen):** needs `0x0A 0x05`; w = xmax-xmin+1, h likewise; bytes per line at offset 66; RLE with `(b & 0xC0) == 0xC0`, run `b & 0x3F`. `0x7409cc` 0: raw index; 1: `FUN_004c81b0(i, 8)` per pixel. `FUN_004cac30` reads the palette from the last 768 bytes, forces palette[0xFE] to the key registers, and with `0x5b5dbc = 1` bumps equal entries to red = 1. It can run only for PCX loads with `0x7409cc == 1`, that is `RESOLUTION` 2 and up, so not in the 8-bit modes, where the palette comes from `[PALET]` alone ([`8bit-device.md`](8bit-device.md) section 6). The two loaders are reached only when `0x73b20c == 0` (texture) or `DAT_006fb894 != 0` (`FUN_004409d0`), so in 8-bit modes. In RESOLUTION 3 neither runs.

### 3. Multi-size files (`FUN_004b9800`, `FUN_004b9840`)

A file with W = H + H/2 holds several levels. For height H, requested size D:

| D | Source rect L,T,R,B |
|---|---|
| D == H | 0, 0, H, H |
| D < H | H, sum of level sizes between H and D, H+D, T+D |

For 768×512: 512 at (0,0), 256 at (512,0), 128 at (512,256), 64 at (512,384), 32 at (512,448). Checked on `e04_weg`, `l1racer1`, `e05_gen`, `e02_gras`: each column level resembles a box downsample of the base (mean difference per channel 5-27) and carries its own magic texels.

`FUN_004b9b40` rules: D = -1 or D > H is corrected to H. W == H with D ≠ W: fatal. D < `0x73b4f4` (64): fatal.

### 4. Mipmaps (`FUN_004b9890`, `FUN_004b9ab0`)

- Flag `0x73b4f8` = `+0x2a0` of device `0x73b258`, 1 in the constructor (`0x4bb6b9`), cleared by `FUN_0044c200` when `mipmapping` = 0. Shipped 0. No writer in `menu.exe`: `WriteGeneralStuffToIni` `M:0x48bcf0` does not write the key and the checkbox goes into the save only, so only a hand edit of `game.ini` turns it on.
- Level count `FUN_004b9800(W, H, D)`: 0 unless W == H + H/2; else the count of sizes from H down to, not including, 64 that are ≤ D. Chain = count + 1: D=512: 4 levels (512,256,128,64); D=256: 3; D=128: 2; D=64: count 0, no chain.
- **Square files never get a chain**, even with the flag on.
- Mip on: `FUN_004c4c30(D, D, 0x1800, fmt, levels)`; per level a temp surface, `Blt` from the file rect of that level, `Blt` to the level, release, `GetAttachedSurface`, size halves. Levels are **authored pixels**, not generated. Video chain same, caps `0x4005000`.
- Mip off: temp and final D×D, both `0x1800`; `Blt` rect to temp, temp to final.

### 5. Texture object table `0x73b1b0`

`T_ARRAY` of `c_texture`, stride `0x48`, capacity 100 (`FUN_004b8b80(100)`). Header: `0x73b1b0` data, `0x73b1b4` capacity, `0x73b1b8` search cursor, `0x73b1bc` initialised, `0x73b1c0` used bytes.

| Offset | Meaning | Evidence |
|---|---|---|
| `+0x00` | `D3DTEXTUREHANDLE` | `PUSH EBX` as out param `0x4b9ef7`; read at `0x43deb3` for state 1 |
| `+0x04` | system surface (with chain) | `FUN_004b9890`, `FUN_004c48f0` in `FUN_00441fa0` |
| `+0x08` | video surface | `FUN_004b9ab0`, `FUN_004b8bc0` |
| `+0x0c` | system `IDirect3DTexture2` | Load source in `FUN_004ba4c0` |
| `+0x10` | video `IDirect3DTexture2` | Load target, `GetHandle` |
| `+0x14`,`+0x18` | `c_string` name, text pointer | `FUN_004c1ae0`, `FUN_004b2580` (`strcmpi`) |
| `+0x24`,`+0x28` | width, height (= D) | `FUN_004b9b40` |
| `+0x2c` | 0 normal; 4 no own video chain or cached member | `FUN_004b8e00`, `FUN_004b91c0`, `FUN_004b2db0`, tested by `FUN_004b2e40` |
| `+0x30` | first Load done | `FUN_004b9b40` |
| `+0x34`-`+0x40` | u0, v0, u1, v1; 0,0,1,1 in hardware | `FUN_004b8e00`, `FUN_004b91c0` |
| `+0x44` | 1 = sub-rect of shared page, UV rewrite (`FUN_004bdcd0`) | `FUN_004b94e0`, 8-bit modes only |

Per-frame binding uses the index cache `0x73b4ec` (`0x43de93`...`0x4bd215`): `SetRenderState(1, handle)` only when the **index** changes.

### 6. Creators

| Function | When | Result |
|---|---|---|
| `FUN_004b8e00(name, D)` | `FUN_004b26f0`/`FUN_004b2740` with `param_3` ≠ 0, Animsys in hardware | `FUN_004b9b40(type 0)` |
| `FUN_004b91c0(name, D)` | `param_3 == 0` | `FUN_004b9b40(type 4)`, no video chain, no Load, no handle of its own |
| `FUN_004b94e0(name)` | `param_2 == 0`, 8-bit modes | `FUN_004b9fa0`, page sub-rect |

`FUN_004b9b40(this, name, type, D)` order, as in the disassembly: log, source surface (`0x1800`), checks, `FUN_004b9890` memory chain, release source, QI memory `IDirect3DTexture2` → `+0xc`; HAL and type ≠ 4: `FUN_004b9ab0` video chain; HAL: QI video → `+0x10`, **`Load` (`0x4b9d68`), `+0x30 = 1`; then `SetColorKey` on memory, on video if type ≠ 4**; `GetHandle` from video (HAL) or memory (no HAL). **The key arrives after the first `Load`.** No HAL: video pointer = memory surface + AddRef, no `Load` (`FUN_004ba4c0` returns at once).

Names dedupe by `strcmpi`: `FUN_004b26f0`/`FUN_004b2740` call `FUN_004b2580` first.

### 7. CTextureDetailManager (`0x497960`-`0x498760`): one assignment at load

Singleton `FUN_00497960`, 0x28 bytes: `+0x00` count, `+0x0c` name list, `+0x14` int array, `+0x20` priority list. Holds no pixels and no per-frame state. Its only run: `FUN_00498760` in `FUN_0044c200`, skipped when `DAT_006fb8d0 == 0`. `FUN_0044c200` has one caller, `init_main`.

| Step | Function | Result |
|---|---|---|
| Register | `FUN_00468030` (`FUN_00467c30` etappe objects and anims, `FUN_00467f60` league, `FUN_00467fd0` general); `FUN_00497ab0` (4 track textures, `CACHED_PIPELINE_1/2`) via `FUN_00498340` | unique names by `strcmpi` |
| Classify | `FUN_00498490` | pipelines: 256. Else opens file, reads u16 w,h at offset 12: W == H gives size W, fatal if above `dwMaxTextureWidth` when that is ≠ 0; else -1 (multi-size) |
| Sums | `FUN_00497cb0`, `FUN_00497d40` | single bytes = `(bpp/8)·Σ size²`, multi count |
| Priority | `FUN_00497dc0` | `[PRIORITY LIST]` from `eNN_anim.ini`. **No shipped INI has this section**; `GetPrivateProfileIntA` default 0 |
| Levels | `FUN_00498760` | from 32, doubling to `dwMaxTextureWidth` |
| Assign | `FUN_00498030(32, levels, budget, multi, mipflag)` | below |

`budget = DAT_006fb978 - singleBytes`, negative: fatal ("Not enough texture memory, at least %d bytes more required"). Flat table: `levels` rows of `multi` ints, row k all `32<<k`. A `multi`-long window slides one entry per step while `(bpp/8)·Σd²` (+ 1/3 via `FMUL [0x57656c]` = 0.33333 when mips on) ≤ budget, up to the start of the last row. If the very first window fails: fatal "Error subdividing". Priority names take window entries first, the rest in list order; window start is the smaller row, so **earlier entries get the smaller size**. So at most two adjacent sizes occur among multi-size textures.

`dwMaxTextureWidth` must be 32·2ⁿ: the loop at `FUN_00498760` compares `0x20<<n != max` and spins forever on other values. 0 ends by 32-bit overflow at n=27, leaving row values that overflow.

`FUN_00498870(name)`: assigned size, -1 if absent or `DAT_006fb8d0 == 0`.

### 8. custom_texture_memory

`[GFX OPTIONS] custom_texture_memory` → `DAT_006fb978` (`FUN_00449b30`). `FUN_0044c200`: `if (0x73b4f9 < 0x6fb978) 0x6fb978 = 0x73b4f9`, with `0x73b4f9` the probe (`win32-surface.md`, patch part 4). Shipped 4,000,000; `menu.exe` writes 2, 8 or 16 MB (`M:0x4a7160`, `startup-flow.md`). `FUN_0044b180` writes `available_texture_memory`.

### 9. Cached pipelines: the only `Load` while driving

Object types (`[objecttypes]` in `etappeN.ini`, `FUN_00453400`): 11 "Cached 1", 14 "Cached 1 + collision", 16 "Cached 2", 17 "Cached 2 + collision".

`0x73b020`: 2 slots of 12 bytes: `+0` owner index, `+4` current index, `+8` filled.

| Phase | Code | Effect |
|---|---|---|
| Fill | `FUN_004536e0` (from `.omp` loader `FUN_004aead0`) first object of a pipeline: `FUN_004b2740(..., 1, size of CACHED_PIPELINE_n)`, `FUN_004b2db0` | normal texture with own video chain, `+0x2c = 4`, current = it |
| Add | later objects: `FUN_004b2740(..., 0, ...)` → `FUN_004b91c0`, `FUN_004b2e00` → `FUN_004b2cb0` | if W,H equal owner's: copy owner's `+0x08`, `+0x10` (AddRef both), `+0x00`. **All members share one video surface, one `IDirect3DTexture2`, one handle.** Sizes differ: logs and leaves it unshared |
| Use | `FUN_004a8cb0` → `FUN_004b2e40(0x73b020, tex)` per object, just before its draw. Object pass `FUN_004a99a0` → `FUN_004a9a20` (`0x7152ec` = 1 in 16-bit modes) | for each slot: same video surface as `tex`, `tex +0x2c == 4`, slot current ≠ tex: `FUN_004ba4c0(tex)` = `video.Load(system)`, current = tex |
| Reset | `FUN_00458020` pump after a wait: `FUN_004b2ea0` | both current = -1, so next use reloads |

The call sits only in the first branch of `FUN_004a8cb0`. Objects whose mesh has a `g_damages` entry (`0x719c28`; `+0xe8`, `+0xec` set at creation) take the other branch, with no `Load`.

Alpha objects (`+0xa5 != 0`) are queued by `FUN_004a74a0` and drawn after the pass by `FUN_004a74f0` → `FUN_004b5b10`, which does not call `FUN_004b2e40`. They see whatever a pipeline last loaded.

`FUN_004ba4c0` Load failure is fatal.

### 10. All other texture load and write sites

| Site | When | Effect |
|---|---|---|
| `FUN_004b9b40` | init (`FUN_0044c200`, anim config, `.omp` loader) | file to system surface, first `Load` |
| `FUN_004b8bc0` | message pump, after a wait: `IsLost` nonzero on `+0x08` | `Restore`, `Load` |
| `FUN_00442080` (`FUN_004422f0` from `0x44c6cd`) | init only, `radar != 0`; shipped `radar=0`; draw unreachable (`hud-overlay.md`) | key fill, dots, `Load` |
| `FUN_00458440` | `FUN_00427b90`, writes `PICTURE.PCX` from slot 0, reads only | none |

No unload: `FUN_004ba460` runs only through `T_ARRAY` delete in `FUN_004ba830`, reached from `FUN_004b8b80`, once. Other `FUN_004c48f0` lock sites are not textures (`0x740890`, primary, sprites). `texturecopy` (`0x6fb8c8`, shipped 0, "brake lights, sirenes, traffic signs, radar" in `game.ini`) has no effect on textures: read only in uncalled `FUN_00440df0`/`FUN_00440fb0` and in `FUN_0040d490` (→ `FUN_004239e0`, tick counts); its checker `FUN_0044bfc0` has no caller. `RESIZETEXTURE` → `0x73b208`, read only in `FUN_004b8910`, called only when `DAT_006fb8d0 == 0`.

### 11. Filtering

Device state, not texture state, set in `FUN_004bc200(on)`:

| `on` | Mip flag 1 | Mip flag 0 |
|---|---|---|
| 0 | MAG = MIN = 3 | 1 |
| 1 | 6, fallback 4 if 6 returns nonzero | 2 |

| Caller | Purpose |
|---|---|
| `FUN_0044bbf0` | init: `[OPTIONS] FILTER == 2` → on (returns earlier if 8-bit), else off. Shipped 2 |
| `FUN_00440160` (`0x440260`, `0x440337`) | flag draw: off during draw if `[OPTIONS] filter == 2` (`0x6fb900`), then back on |
| `FUN_00485ed0`, `FUN_00486040` | HUD pass: forced by element `+0x88`, restored after (`hud-overlay.md`) |
| `FUN_0043d3c0` | re-reads `FILTER` under `DAT_006fb8e0` |

So **one texture can be drawn nearest and bilinear in the same frame**.

### 12. Texture counts and sizes per race; Animsys

`rcs.img`: 173 TGA, 199 PCX. TGA: 126×256², 17×768×512 (multi-size), 12×64², 10×640×480 + `e06_w_hi` (wait screens), 5×128², plus `s_letter` 32×64 and `e03_pr` 265×256, which no shipped INI names. All type 2, uncompressed. Texture names from INI end in `.pcx` or a path; `FUN_00467960` reduces them to basename + `.TGA` in 16-bit modes.

Registered set per etappe, league 0, counted from shipped `etappeN.ini [objects]`, `eNN_anim.ini`, `L0_anim.ini`, `gen_anim.ini`, 4 track names. Instances from `etappeN.omp`. Etappes 0..8 only; etappe 9 comes with the track update and is not counted.

| Etappe | Registered | 256² | 128² | 64² | 512 multi | Single bytes incl. 2 pipelines | Used pipeline members 1/2 | Placed cached objects 1/2 |
|---|---|---|---|---|---|---|---|---|
| 0 | 18 | 8 | 2 | 3 | 5 | 1,400,832 | 4/2 | 13/3 |
| 1 | 19 | 9 | 3 | 3 | 4 | 1,564,672 | 5/2 | 16/18 |
| 2 | 17 | 8 | 2 | 3 | 4 | 1,400,832 | 2/2 | 140/110 |
| 3 | 18 | 8 | 2 | 3 | 5 | 1,400,832 | 5/2 | 162/6 |
| 4 | 20 | 8 | 4 | 3 | 5 | 1,466,368 | 5/5 | 16/18 |
| 5 | 20 | 10 | 2 | 3 | 5 | 1,662,976 | 0/0 | 0/0 |
| 6 | 19 | 9 | 2 | 3 | 5 | 1,531,904 | 3/3 | 26/32 |
| 7 | 19 | 9 | 2 | 3 | 5 | 1,531,904 | 3/0 | 4/0 |
| 8 | 18 | 10 | 2 | 3 | 3 | 1,662,976 | 3/1 | 202/3 |

All pipeline members are 256². Multi-size in every etappe: `l1racer1/2/3`. Track surfaces that are multi-size: `e02_gras`, `e04_weg`, `e05_gras`, `e06_weg`, `e07_gras`. Table use stays well below capacity 100.

Sizes at 16-bit: etappe 0 with 4,000,000: budget 2,599,168, gives 4 at 512 and 1 at 256. All 512 needs at most 1,662,976 + 2,621,440 = 4,284,416 bytes. With 8 MB and `dwMaxTextureWidth` ≥ 512 every multi-size file gets H = 512 (larger requests clamp to H). `dwMaxTextureWidth` = 256 caps them at 256.

**Animsys** (`Animsys.cpp`, `0x712130`). `FUN_00468990` reads `[CONFIG]` from each anim INI. Anim = frames; `FUN_004b6ff0` frame record in `0x73b120`, 16 bytes: `+0` mesh, `+4` texture index, `+8`, `+0xc` load-time ids. `FUN_004b7d30` dedupes by name. Texture is taken at draw (`FUN_004a8cb0`, `FUN_004b5b10`): object `+0x95` if ≠ -1 (written at creation only: `0x4b47cb`, `0x4b4a91`, `0x4b4e21`, `0x4b564b`), else current frame's.

Across all anim INI on disc 1.01: 464 anims, 234 with more than one frame, 396 with one texture. The 68 with several: vehicles, racers and trailers using frames as **parts** (body, wheels, lights on `s_sfx`), `radar_textures`, `TOURNAMENT_BONUS` (`DOWNLOADCAR` since the car update). Not recounted for that update, which also adds `PLAYER_7_PORTRAIT` and `TRU_A*_ANIM` to `gen_anim.ini`. `anmtypes.ini` has 14 timed groups with 17 names (`FrameN=frame,duration`). 6 names have anim sections, each with a single texture: `e08_was1_anim`, `A_ZEPP00/01/07_anim`, `A_ZAPP00_anim`, `A_RAMP00_anim`. The other 11 are in no anim INI. So timed anims swap meshes. The Animsys functions `0x4b6c00`-`0x4b82c0` call only list, name and mesh-load helpers and write no UVs. The sky dome (`FUN_0043d230`, `FUN_0043d4f0`) is an object with one mesh and one texture, moved to the camera; no UV change in those two functions.

`[textures]`, `[texture0]`... in `etappeN.ini`: `spel.dat` has no such strings. The track texture names come from `[MAPS]` in `raser.ini`.

### 13. RC.IMG "animations"

`rc.img` + `rc.ind`: `u16 count` (186), then per image `i16 w, h, x, y` and `w*h` bytes of palette index; my parser accounts for all 1,259,939 bytes. (x,y) ≈ (w/2, h/2).

- `FUN_00458650` (alloc type 4, raw memory): no caller. `FUN_00440950` → `FUN_00458730(2)`.
- `FUN_004cc580(name, 2)`: even parameter: reads count only, allocates the 0x20-byte table `0x740d44`: `+0` pixels, `+4` surface, `+8` w, `+0xc` h, `+0x10` x, `+0x14` y, `+0x18` alloc type = 2. No pixels. Odd values are never passed.
- 16-bit: `FUN_004588f0`: anims `0x5a47a0` = 0, 0x2c, 3, 4, 6, 9, 0xb, 0xc, 0xe, 0x11, 0x13, 0x17, 0x15, through records at `0x5a4830` (12 bytes: frames, ?, pointer to 8-byte `{2, image}` pairs) into list `0x741430`: 39 images: 1-33, 72-75, 77, 78, sizes 8×8 to 543×380. `FUN_004cc0b0` loads them through `rc.ind`.
- `FUN_004cbd20`: surface by `FUN_004c4a80`; `SetColorKey(8)` with `FUN_004c81b0(0x5b3940 = 0xFF, 8)`. Pixels: `FUN_004c81b0(i, 8)` with `0x7409cc = 1`, set by `FUN_004480f0`; `0x7409cc` is written only 0 or 1, so `case 4` (24 to 16) is never reached. **Sprites are transparent at index 0xFF**, (255,0,255) in all shipped palettes, packed `0xF81F`.
- Draw: `FUN_004c8f30` from `FUN_00440cb0` (old 2D HUD, dead per `hud-overlay.md`) and `FUN_004cec30` (mouse, `0x5b6b2c == 2`). `FUN_00441760` (progress bar) has no reference. `FUN_00440fa9` no caller.

## Inferred

### WebGL host rules for `IDirect3DTexture2::Load`

Derived from the Confirmed sections and DirectX 5 semantics. Only "must" rules restate what the game relies on.

**Must**

1. Return `DD_OK` (nonzero is fatal). Target view = source level pixels, for all chain levels. Sizes always match by construction. It is called mid-scene; content changes must apply to draws issued **after** the call and not to earlier ones (section 9). No batching across a `Load` without capturing which image each draw used.
2. Do not key at `Load` time only: the first `Load` precedes `SetColorKey` (section 6). Read the key from the video surface when uploading; if a key is set later, upload again. Read it, do not hard-code `0x0000`.
3. Convert each u16 `v` of the 565 system surface to RGBA8, honouring `lPitch`:
   `R = (r5<<3)|(r5>>2)`, `G = (g6<<2)|(g6>>4)`, `B = (b5<<3)|(b5>>2)`, `A = v == key ? 0 : 255`. Masks from the format the host reports. No colour-based test: (0,0,0) in RGBA is never the test, `0x0800` is real opaque near-black, and `0xF80F` is opaque magenta.
4. Row 0 of the surface first, `flipY = false`, UV as given: both APIs address the first uploaded row at v=0, and the loader has already flipped bottom-up TGAs.
5. Texture alpha is a key mask only. Discard when the sampled mask fails; output alpha = vertex alpha. Never multiply mask into blend alpha, and do not use Three.js `alphaTest` on the combined value: skidmarks use inverted `INVSRCALPHA/SRCALPHA` with alpha 0 on fresh marks (patch part 6, item 4; `FUN_00445180`), and would disappear. Key test applies to all textured draws, since state 41 stays 1.
6. Filter is draw state (section 11). Use WebGL2 sampler objects, or set `TEXTURE_MIN/MAG_FILTER` before each draw. Do not bake it into a Three.js texture that `needsUpdate` would re-upload.
7. With `mipmapping=1`, upload authored levels; never `generateMipmap`, because level pixels differ from a box filter. Chains stop at 64, so set `TEXTURE_MAX_LEVEL = levels-1`. Square textures have one level, while state may ask for 6/6: set `TEXTURE_MAX_LEVEL = 0` or use a non-mip min filter.
8. Report `dwMaxTextureWidth` as 32·2ⁿ, at least 256 (single-size and pipeline textures are up to 256). 512 or 1024 makes all stored levels reachable.
9. Serve every registered TGA, matching names case-insensitively. A missing file leads to a bad pointer, not an error message.

**Recommended**

10. One GL texture per **system** surface, uploaded once. `Load` then only points the video surface at it; re-upload only if `Lock` or `Blt` touched that system surface since. In a race none do, so per-frame `Load` costs nothing, and rule 1 holds automatically if draws bind at issue time. With 2-10 members and up to 250 placed objects, copying pixels per `Load` would be the wasteful option.
11. Key texels have RGB = 0, so bilinear RGBA8 acts as premultiplied at edges: `if (t.a < 0.5) discard; rgb = t.rgb / t.a;` gives no black fringe. This is an intentional adaptation; see Unknown.
12. `Repeat` wrap on both axes: no site sets address states in `win32-surface.md`, and the D3D default is wrap.
13. Return 0 from `IsLost`, so `FUN_004b8bc0` never triggers. Keep `custom_texture_memory` per INI; to avoid the 4,000,000 case that shrinks one texture, run with the menu's 8 MB value.
14. RC.IMG needs only working `CreateSurface`/`Lock`/`SetColorKey`; there is no race display from it to reproduce.

## Unknown

- Edge look of bilinear plus colour key on reference hardware. It is card-dependent: the owner's notes show black around objects on one GPU and not on another, and `FILTER=0` makes no difference there. No runtime evidence here. Rule 11 is a choice, not a reproduction.
- 5-to-8-bit expansion on reference cards; bit replication in rule 3 is an assumption.
- `Load` calls per frame: not measured. Upper bound is cached objects drawn in the visible chunk window.
- Exact texture that gets the smaller size in a mixed window: registration order was traced by function, but `FUN_00498340` list insertion order was not read.
- Whether `0x5b6b2c` is ever 2 during a race (mouse sprite). Out of scope here.
- Trigger of `FUN_00458440` (`PICTURE.PCX`) inside `FUN_00427b90`: not traced.
- Registered counts in section 12 are what the manager budgets. Actually loaded textures can be fewer, because object textures load only for objects placed in `.omp`; exact per-etappe list not produced.
- RESOLUTION 2, 5, 6-9 outcomes in section 1 are from code and palette bytes only, not observed.
- Whether any cached object's mesh has a `g_damages` entry (section 9). `damage.ini` sections name cars; the entry writer was not read.
- UV changes outside Animsys and the sky (for example skidmarks, clouds, flag vertex writers). Not surveyed here; see `render-frame.md`.
- The 16-bit list at `0x5a47a0` also has sibling lists after it, used by `FUN_004589d0` and `FUN_00458aa4`. Both have no direct call or pointer in a raw scan, so those lists look unused; indirect dispatch was not excluded.
