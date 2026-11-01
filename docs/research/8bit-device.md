> Static reading, written before the path was run. [render-8bit.md](render-8bit.md) has what a run on the real Ramp device settled, and where that differs from this note it holds.

# 8-bit path: start-up and device, RESOLUTION 0 and 1

Scope: `spel.dat` from `FUN_004580e0` up to the end of the device-related part of `FUN_0044c200`. Addresses are image addresses. Sky blit, PCX page layout, wait pictures, frame and HUD are other parts; they appear here only where a host call depends on them.

**Status key**

| Key | Meaning |
|---|---|
| C | Confirmed: read in `disassembly.asm`, or parsed from `spel.dat`, the INI files or the extracted archives |
| P | Also seen in a bounded headless probe, see section 13. Port code, not the original, no browser. It shows what the code asks for, not what DirectX 5 would answer |
| I | Inferred: DirectX 5 header semantics from memory, or derivation |
| U | Unresolved |

Vtable offsets and argument values are C. Method and flag names come from the DirectX 5 headers (I), as in `win32-surface.md` C3; many are also backed by the fatal strings quoted below.

## 1. Result in short

- C/P: `FUN_004c04b0` calls `SetEntries` at `0x4c0562` through `0x7409ec`. The host's `CreatePalette` stub never writes that pointer. That is the first failure of RESOLUTION 0 and 1 today, a trap, not a spin. Section 12.
- C/P: the game needs five things from the host and nothing Ramp-specific beyond them: a primary that reports `DDPF_PALETTEINDEXED8`, a real palette object, `HW.dwFlags == 0` in `GetCaps`, one 8-bit format in `EnumTextureFormats`, and byte-wide `Blt`. With these held in a scratchpad shim, all four configurations (RES 0, 1 x focus 1, 2) boot and run 120 ticks.
- C/P: RES 0 and RES 1 differ only in the mode row, the primary test lock, viewport size and wait picture. The COM call order is identical (`diff` of the probe logs, section 13).
- C/P: a Z buffer exists in the 8-bit path, 16-bit, always.
- C: `FUN_004cac30` is never reached in RES 0 and 1, so PCX files do not change the palette. Only `[PALET]`'s first argument does. This corrects `render-textures.md`, section 14.

## 2. Configuration, in call order (no COM)

`FUN_004580e0` order: `FUN_00475b50`, `FUN_00447db0`, `FUN_004c3f80`, `FUN_00458bc0`, `FUN_004491f0`, `FUN_00449b30`, `FUN_004480f0`, `FUN_00469fa0`, `FUN_0046ee80`, `FUN_00447820`, `FUN_004c04b0(focus, 10, 10, 0x1000)`, `FUN_004414e0`, `FUN_0044c200`, ... C.

| Function | RES 0, 1 effect | St |
|---|---|---|
| `FUN_00447db0` | `[PROGRAM] RESOLUTION` -> `0x59db38` (`FUN_00447330`). `NAME` -> window title. `FOCUS` -> `0x59dbb4` (`FUN_004477b0`: 0 -> 1, 1 -> 2, else fatal). `WINDOWED` -> `0x59dbc8`. `[PALET] ETAPPEn` must have 2 args, else fatal at `0x59ea20`; `FUN_00447600` keeps them at `0x59db8c` (8-bit) and `0x59db9c`. `[PALET] SHOW` -> `0x59dbac` | C |
| `FUN_004480f0` -> `FUN_00447870` | `FUN_004c4330(1, 0x40, 1)`: `0x5b37a4` = 0x11 or 0x40 = 0x51. `FUN_004c4330(2, 0, 0)`: selector `0x5b37ac` = 0. `FUN_004c4330(0, row, 0)`: row 0 or 3. Returns 0 at `0x4478c7`, `0x4478e5` | C |
| `0x44810a` | Returned 0, so `FUN_004c7ec0(1)` is **skipped**. `0x7409cc` stays 0 | C |
| Not reached | `FUN_00447830` (no `[DIRECTX] INDEX`), `DAT_0059dbb4 = 1` override, `FUN_004c0450`, `FUN_004bbf20`. `0x73b780` stays 0, so `FUN_004c04b0` takes `FUN_004bb560` -> `FUN_004bbd40` | C |
| `FUN_004c4330(0, i, 0)` | Copies row `0x5b37b0 + i*0x14`: W, H, bpp, flag to `0x5b3798`, `0x5b379c`, `0x5b37a0`, `0x7408e0` | C |
| `FUN_0044bd10` (from `FUN_0044c200`, through `FUN_00447370`) | `0x6fb8d0 = 0`, `0x6fb894 = 1`, `0x6fb890 = 0` (RES 0) or 1 (RES 1), `FUN_004a6b00(0)`: `0x7152ec = 0` | C, P |

Mode rows, parsed from `.data`: row 0 `320, 200, 8, flag 1`; row 3 `640, 480, 8, flag 0`.

Values after boot, read in the probe:

| Global | Meaning | RES 0 | RES 1 |
|---|---|---|---|
| `0x5b3798/9c/a0` | W, H, bpp | 320, 200, 8 | 640, 480, 8 |
| `0x5b37a4` | cooperative flags | 0x51 | 0x51 |
| `0x5b37a8` | back buffer count, .data 1, written only in `FUN_004c4fa0` | 1 | 1 |
| `0x5b37ac` | driver selector | 0 | 0 |
| `0x7408e0` | row flag ("modex") | 1 | 0 |
| `0x7408bc` / `0x74082c` | primary lockable / pitch | 0 / 0 | 1 / 640 |
| `0x7408c0` / `0x740898` | back lockable / pitch | 1 / 320 | 1 / 640 |
| `0x7408c4` / `0x7408a8` | buffer lockable / pitch | 1 / 320 | 1 / 640 |
| `0x7409cc` | pixel write mode, 0 raw index | 0 | 0 |
| `0x6fb8d0`, `0x6fb894`, `0x6fb890` | hardware, 8-bit, size class | 0, 1, 0 | 0, 1, 1 |
| `0x73b4d0`, `0x73b511` | device type, ramp mark. Write-only: no reader by absolute address or `[reg+0x278]`, `[reg+0x2b9]` on this object | 4, 1 | 4, 1 |
| `0x73b505` | `TEXTUREMAPBLEND` cache | 7 | 7 |
| `0x6fb940` | `alpha_blending`, cleared by `FUN_0044baa0` | 0 | 0 |

## 3. Focus, `0x59dbb4`

Not forced in RES 0, 1. `.data` value 2. C. The port's menu writes `[program] focus = renderFocus`, default 0 (`source/menu/data.js:330`, `:1187`), so through the menu focus is 1. The `?race=1` route keeps shipped `FOCUS=1`, so focus is 2. **Both must work.**

| | Focus 1 (back) | Focus 2 (buffer) | St |
|---|---|---|---|
| Z caps, `FUN_004c0610` | `0x20000` | `0x20800` | C |
| Z attached to, `+0x0c` | back, `0x4c0717` | buffer, `0x4c06e9` | C, P |
| `CreateDevice` target, `FUN_004bbc50` | `0x7408b0`, `0x4bbd04` | `0x740890`, `0x4bbce0` | C, P |
| Present, `FUN_0044df10` | `FUN_004c41e0` | `FUN_004c8b90(2,1,0,0,W,H,0,0,W,H,0)`, then `FUN_004c41e0` | C, P: 288 against 158 `Blt` over 131 flips |

## 4. Calls in order

Same in RES 0 and RES 1 unless a row says so. "Fatal" = `FUN_004c4150`: log, `ShowWindow(hwnd, 6)`, pump, `MessageBoxExA`, `ExitProcess(1)`; error text from `FUN_004c4400` (DirectDraw) or `FUN_004bb290` (Direct3D). All rows C; the COM rows also P.

`DD` = `0x74088c` (IDirectDraw). `DD2` = `0x740894`. `D3D` = `0x73b778`. `Dev` = `0x73b4b4`. `Pri`, `Back`, `Buf`, `Z` = `0x7408ac`, `0x7408b0`, `0x740890`, `0x73b774`. `Pal` = `0x7409ec`.

### 4.1 Window and DirectDraw, `FUN_004c55c0`

| # | Site | Call | Arguments | Read back | On failure |
|---|---|---|---|---|---|
| 1 | `0x4c55cb`, `0x4c55d5` | CRT `time`, `srand` | | | |
| 2 | `0x4c5613` | `LoadIconA` | `(hinst, 0x7f00)` | into wc | ignored |
| 3 | `0x4c5623` | `LoadCursorA` | `(0, 0x7f00)` | into wc | ignored |
| 4 | `0x4c5642` | `RegisterClassA` | style 3, proc `FUN_004cd6b0`, class `Davilex Entertainment` | | ignored |
| 5 | `0x4c5684`, `0x4c568a` | `GetSystemMetrics(0)`, `(1)` | | window size only | |
| 6 | `0x4c56bd` | `CreateWindowExA` | `(0x40000, class, NAME, 0x80000000, 0, 0, cx, cy, 0, 0, hinst, 0)` | hwnd `0x7408a4` | returns 0, fatal in `FUN_00447a00` |
| 7 | `0x4c56e9`, `0x4c571f` | `GetClientRect`, `MoveWindow` | `(hwnd, l, t, 2cx-r+l, 2cy-b+t, 1)` | | ignored |
| 8 | `0x4c573e`, `0x4c574a` | `ShowWindow(hwnd, nCmdShow)`, `UpdateWindow` | host must send `WM_ACTIVATEAPP` here (`win32-surface.md` C2) | | |
| 9 | `FUN_004cd150` | `DirectDrawEnumerateA` | `(FUN_004ccf60, 0)` | zero callbacks fine | ignored |
| 10 | `0x4c57a4` | `DirectDrawCreate` | `(FUN_004cd170(0) = NULL, &0x74088c, NULL)` | `DD` | fatal `0x5b4630` |
| 11 | `0x4c57fc` | `DD+0x50 SetCooperativeLevel` | `(hwnd, 0x51)` | | fatal `0x5b45e8` |
| 12 | `0x4c5839` | `DD+0x00 QueryInterface` | `(IID_IDirectDraw2 @0x578d70, &0x740894)` | `DD2` | fatal `0x5b45b4` |
| 13 | `0x4cd2f0` | `DD+0x20 EnumDisplayModes` | `(0, NULL, NULL, FUN_004cd280)` | callback marks row `+0x10`; 0 only logs `0x5b459c` | fatal `0x5b64ec` |
| 14 | `0x4c58ca` | `DD2+0x54 SetDisplayMode` | RES 0 `(320, 200, 8, 0, 0)`, RES 1 `(640, 480, 8, 0, 0)` | | fatal `0x5b4554` |

Then `FUN_004c8800(0, 0, W, H)` sets the clip registers, no COM.

### 4.2 Surfaces, `FUN_004c4fa0`

`DDSURFACEDESC` is `0x6c` bytes, zeroed. Offsets: `+4` flags, `+8` H, `+0xc` W, `+0x14` back count, `+0x18` Z depth, `+0x48` pixel format, `+0x68` caps.

| # | Site | Call | Arguments | Read back | On failure |
|---|---|---|---|---|---|
| 15 | `0x4c504d` | `DD+0x18 CreateSurface` | `flags 0x21`, `back count 1`, `caps 0x2218`, no W, H, no format. Out `0x7408ac` | | fatal `0x5b44f8` |
| 16 | `0x4c5084` | `Pri+0x00 QueryInterface` | `(IID_IDirectDrawSurface2 @0x578d60, &0x740840)` | never used except Release | fatal `0x5b44c4` |
| 17 | `FUN_004c4ce0(0)` | RES 1: `Pri+0x60 IsLost`, `+0x6c Restore` if nonzero, `+0x64 Lock(NULL, &desc, 1, NULL)`, `+0x80 Unlock(NULL)`. **RES 0: skipped**, returns false at `0x4c4cf5` | | RES 1 false: 18 |
| 18 | `0x4c50c0`-`0x4c50f0` | Only RES 1 on lock failure: `Pri+0x08`, `0x740840+0x08` Release, `0x5b37a8 = 0`, back to 15 with `flags 1`, `caps 0x2200`. RES 0 never retries: `0x4c50ce` | | |
| 19 | `0x4c5107`, `0x4c511f` | RES 1: `0x7408bc = 1`; `FUN_004c48f0(Pri, &0x74082c)`: `IsLost`, `Lock`; `FUN_004c4a20`: `IsLost`, `Unlock(ptr)` | `lPitch +0x10`, `lpSurface +0x24` | fatal `0x5b41ec`, `0x5b425c` |
| 20 | `FUN_004c8540` | `Pri+0x60 IsLost`; `Pri+0x54 GetPixelFormat(&0x740968)`, `dwSize 0x20` | section 5 | fatal `0x5b56bc` |
| 21 | `0x4c5194` | `Pri+0x74 SetColorKey` | `(8, {0xFF, 0xFF})`, value `0x5b3940` | | fatal `0x5b4458` |
| 22 | `0x4c5208` | `Pri+0x30 GetAttachedSurface` | `({caps 4}, &0x7408b0)` | `Back` | fatal `0x5b4414` |
| 23 | `0x4c523f` | `Back+0x00 QueryInterface` | `(IID_Surface2, &0x7408b8)` | | fatal `0x5b4414` |
| 24 | `FUN_004c4ce0(1)` | Both RES: `IsLost`, `Lock`, `Unlock` | | false: `0x7408c0` stays 0, no fatal |
| 25 | `0x4c5290`, `0x4c529c` | `FUN_004c48f0(Back, &0x740898)`, `FUN_004c4a20` | pitch, pointer | fatal |
| 26 | `0x4c53a5` | `Back+0x74 SetColorKey` | `(8, {0xFF, 0xFF})` | | fatal |
| 27 | `0x4c4b53` | `DD+0x18 CreateSurface` | `flags 7`, W, H, `caps 0x2800`, no format. `FUN_004c4b00` returns the out value in `Buf` | | fatal `0x5b4288` |
| 28 | `0x4c5409` | `Buf+0x00 QueryInterface` | `(IID_Surface2, &0x74089c)` | | fatal `0x5b4380` |
| 29 | `FUN_004c4ce0(2)`, `0x4c544c`, `0x4c5459` | `IsLost`, `Lock`, `Unlock`; `FUN_004c48f0(Buf, &0x7408a8)`, `FUN_004c4a20` | pitch, pointer | false: `0x7408c4` stays 0 |
| 30 | `0x4c54b0` | `Buf+0x74 SetColorKey` | `(8, {0xFF, 0xFF})` | | fatal |
| 31 | `0x4c54e2` | Windowed block skipped, `0x7408e4 = 0` (shipped `WINDOWED=0`). `0x5b37a8` would become 0 and `0x5b37a4` 8 | | |
| 32 | `0x4c9ca4` | `LocalAlloc(0x40, 0x400)` -> `0x7409f0` | zeroed table | fatal `0x5b5ad4` |
| 33 | `0x4c9d09` | `DD+0x14 CreatePalette` | `(0x44, 0x7409f0, &0x7409ec, NULL)` | `Pal` | fatal `0x5b5a78` |
| 34 | `FUN_004c9d50(0, 1, 2)` | `IsLost`, `+0x7c SetPalette(Pal)` on `Pri`, `Back`, `Buf` | | fatal `0x5b5b28` |
| 35 | `FUN_004c4f70(2, 0)`, `(1, 0)` | `IsLost`, `+0x14 Blt(&{0,0,W,H}, NULL, NULL, 0x1000400, &fx)` on `Buf`, `Back`. `fx` size 100, `dwFillColor` `+0x50` = 0 | | fatal `0x5b39c8` |
| 36 | `FUN_004c41e0` | `IsLost` on `Pri`, `Back`; `Pri+0x2c Flip(NULL, 1)` | | fatal `0x5b39e8` |

The caps never contain `DDSCAPS_MODEX` (`0x200000`). The row flag has two readers only, `0x4c4ce0` and `0x4c50c9` (`data_refs.csv`). `DDSCL_ALLOWMODEX` (0x40) is set for every RESOLUTION. So for the host "modex" means nothing: no call changes except that the primary is not locked in RES 0.

No lock-flag user fails in RES 0: `FUN_004c4810(0)` returns 0 at `0x7408bc == 0`; `FUN_004c4980(0, ..)` does nothing. Ghidra's C for `FUN_004c48f0` and `FUN_004c4810` shows a return of `+0x10`; the asm returns `+0x24`, `lpSurface` (`0x4c4969`, `0x4c48dc`).

### 4.3 Between surfaces and Direct3D

`FUN_004ccc10`: `GetComputerNameA`, `GetUserNameA`, `FUN_004cca80(0x1b)`, `GlobalMemoryStatus`, `GetSystemInfo`, `GetSystemMetrics(0x43, 0x13, 0x3f, 0x49)`. `FUN_00447be0`: file list, `FUN_004c5e90` opens the `rcs` archive. `FUN_004cd560`: `PeekMessageA` pump. `FUN_00469fa0`, `FUN_0046ee80`: DirectInput. Unchanged from RES 3 (`win32-surface.md` C1, C3). C/P.

### 4.4 Direct3D, `FUN_004c04b0(focus, 10, 10, 0x1000)`

| # | Site | Call | Arguments | Read back | On failure |
|---|---|---|---|---|---|
| 37 | `0x4c0472` | `DD2+0x00 QueryInterface` | `(IID_IDirect3D2 @0x578d50, &0x73b778)` | `D3D` | fatal `0x5b2868` |
| 38 | `0x4c067d` | `DD+0x18 CreateSurface` | `flags 0x47`, W, H, `+0x18 = 16`, caps section 3. Out `0x73b774` | `Z` | fatal `0x5b2ab0` |
| 39 | `0x4c06e9`, `0x4c0717` | `+0x0c AddAttachedSurface(Z)` on `Buf` or `Back` | | `0x73b77c = 1` | fatal `0x5b2a4c`, `0x5b2a10` |
| 40 | `0x4c33a8` | `D3D+0x0c EnumDevices` | `(FUN_004c2e40, list)` | list unused for selection, destroyed by `FUN_004c33f0` | fatal `0x5b3068` |
| 41 | `0x4bbce0`, `0x4bbd04` | `D3D+0x20 CreateDevice` | `(&{F2086B20-259F-11CF-A31A-00AA00B93356}, target, &0x73b4b4)`. GUID copied from `0x578d20` to the stack (`0x4bbe81`) | `Dev` | nonzero: `FUN_004bbd40` returns 0 at `0x4bbead`, **no RGB fallback**. Callers ignore it, so a NULL device is dereferenced later |
| 42 | `0x4bc1af` | `Dev+0x0c GetCaps` | `(hw, hel)`, both `dwSize 0xcc` | copied to device `+0`, `+0xcc` (`FUN_004c0ff0`, `0x4bc1df`) | fatal `0x5b2290` |
| 43 | `0x4bb7f6`, `0x4bb865`, `0x4bb8d4` | `Dev+0x68 SetTransform` | `(3, &0x73b3f4)`, `(2, &0x73b434)`, `(1, &0x73b474)` | | fatal `0x5912e0` |
| 44 | `0x4bb908`-`0x4bba32` | `Dev+0x5c SetRenderState` | `(4, 1)`, `(0x29, 1)`, `(7, 1)`, `(0x15, 1)`, `(0x1c, 0)`, `(0x22, 0xFFFFFF)` | | fatal |
| 45 | `0x4bba69`-`0x4bbb0e` | `Dev+0x64 SetLightState` | `(7, 0x3f4ccccd)`, `(5, 0x40500000)`, `(6, 0x42480000)`, `(4, 3)` | | fatal `0x59a15c` |
| 46 | `0x4bbbe2` | `SetBackground` skipped, `0x5b2b64 = -1` | | | |
| 47 | `0x4bc0ce` | `DD+0x18 CreateSurface`, loop | section 8 | | failure ends the loop |
| 48 | `0x4bc146` | `+0x08 Release` of each probe surface | | | |
| 49 | `0x4c0562` | `Pal+0x18 SetEntries` | `(0, 0, 0x100, 0x7409f0)`, table still all zero | | fatal `0x5b5ba0` |
| 50 | `0x4c1e2e` | `Dev+0x24 EnumTextureFormats` | `(FUN_004c1e60, 0x73b7d8)` | section 7 | fatal `0x5b3068` |
| 51 | `0x4c058a` | `FUN_004c2b90(2)`: `0x73b82e = 0x73b822` | no COM | | |
| 52 | `0x4bb1f4` | `D3D+0x14 CreateMaterial` | `(&mat, NULL)`, twice, from `FUN_004bab70` -> `FUN_004baf10` -> `FUN_004bb190` | | fatal `0x5b1c74` |
| 53 | `0x4bb21f`, `0x4bb286` | `Mat+0x0c SetMaterial` | `dwSize 0x50`, diffuse `+4` (1,1,1,0), ambient `+0x14` (1,1,1,0), `dwRampSize +0x4c = 0x10` | | fatal `0x5b1c4c` first |
| 54 | `0x4bb254` | `Mat+0x14 GetHandle` | `(Dev, obj+0x50)` | handle | fatal `0x5b1c20` |
| 55 | `0x4bb097`, `0x4bb14b`, `0x4bb171` | `Mat+0x0c SetMaterial` | colours from `0x73b688` | | ignored |
| 56 | `0x4badda` | `Dev+0x64 SetLightState` | `(1, handle of 0x5b1ba8)` | | fatal `0x5b1bcc` |
| 57 | `0x4c0e22` | `D3D+0x18 CreateViewport` | `(&vp, NULL)` | | fatal `0x5b2c50` |
| 58 | `0x4c0eb4` | `Dev+0x18 AddViewport(vp)` | | | fatal `0x5b2bfc` |
| 59 | `0x4c0ee0` | `vp+0x44 SetViewport2` | section 9 | | fatal `0x5b2c28` |
| 60 | `0x4c0f10`, `0x4c0ddf` | `Dev+0x34 SetCurrentViewport(vp)`, twice | | | fatal `0x5b2bd0` |
| 61 | `0x4c0f86` | `vp+0x30 Clear` | `(1, &{0,0,W,H}, 3)` | | fatal `0x5b2c7c` |

### 4.5 `FUN_0044c200`, device part

| # | Site | Call | Arguments | On failure |
|---|---|---|---|---|
| 62 | `0x44bb03`-`0x44bb1e` | No COM: `FUN_004b88a0(6.0)` page grid (`.data` 16.0), `FUN_004b82e0(0x712130, 1)`, `FUN_004b8b80(100)`. `FUN_004b8840(1)` and `FUN_004c4030(0x7f00ff)` are skipped, so `.pcx` loads and `0x7408f0` stays 0 | | |
| 63 | `FUN_004b8910("init.pcx")` -> `FUN_004b9b40` -> `FUN_004cb630` | `FUN_004c4b90`: `DD+0x18 CreateSurface` `flags 0x1007`, 2048x2048 (parse of `init.pcx`), `caps 0x1800`, format = selected. `IsLost`, `Lock`, raw decode, `IsLost`, `Unlock(ptr)`. Then `FUN_004c8540` again at `0x4cba30`: `IsLost`, `Pri GetPixelFormat` | fatal |
| 64 | `FUN_004b9890` | Non-mip branch: `FUN_004c4b90` twice, same desc (`0x4b9a04`, `0x4b9a18`). `0x4b9a46` `Blt(temp, NULL, src, &rect, 0x1000000, NULL)`, `0x4b9a82` `Blt(final, NULL, temp, NULL, 0x1000000, NULL)`, both fatal. `0x4b9aa3` `Release(temp)` | |
| 65 | `0x4b9c9b`, `0x4b9cac` | `Release(src)`. `final+0x00 QueryInterface(IID_IDirect3DTexture2 @0x578d10, this+0xc)` | fatal `0x5b18f0` |
| 66 | `0x4b9d1f`-`0x4b9e3a` | `HW.dwFlags == 0`: `this+8 = final`, `0x4b9dae` `+0x04 AddRef`. `FUN_004c2af0() == 2`: `0x4b9dd4`, `0x4b9e06` `SetPalette(Pal)`, twice on the same surface. `0x4b9e3a` `QueryInterface(IID_Texture2, this+0x10)` | fatal `0x5b17f8`, `0x5b17c4` |
| 67 | `0x4b9e77`, `0x4b9eb2` | `SetColorKey(8, {0xFE, 0xFE})`, from `FUN_004ba810`, `0x5b149c = 0xFE` | fatal `0x5b1794`, `0x5b176c` |
| 68 | `0x4b9f56` | `Tex(this+0xc)+0x0c GetHandle(Dev, this)` | fatal `0x5b1718` |
| 69 | `0x4b8a80`, `0x4b8b4e` | `Mat SetMaterial` with `hTexture +0x48 = handle`. `Dev SetRenderState(1, handle)` | fatal `0x59be94` for the state |
| 70 | `FUN_00447d10` | `FUN_004cab50(0x59db8c, 1)`: `SetEntries(0,0,0x100,t)`. `0x447d6e` `SetEntries(0,0,0xff,t)`. `FUN_004c9ff0(t,0,0xff,0x40,1)`: `SetEntries(0,0,0xff,t)` | fatal `0x5b5ba0` |
| 71 | `0x44bc4d` (`FUN_0044bbf0`) | `SetRenderState(0x15, 7)` | fatal `0x59bd78` |
| 72 | `FUN_0044bbf0` | `[OPTIONS] FILTER == 2`: returns (`0x44bcb0`), nothing sent. Else `FUN_004bc200(dev, 0)`: `(0x11, 1)`, `(0x12, 1)` with mip flag 0, `(3, 3)` with mip flag 1. No `SHADEMODE` | fatal |
| 73 | `0x44c339` | `SetTransform(3, &0x73b3f4)` | fatal |
| 74 | `0x44c052` (`FUN_0044c030`) | `Buf+0x74 SetColorKey(8, {0, 0})` | fatal `0x5a1328` |

What follows in `FUN_0044c200` (fonts, sprites from `rc.img`, sky, wait picture, textures on the page, `BeginScene`/`DIP`/`EndScene`/`Flip` for each progress step) belongs to the other parts. Counts for a boot plus 120 ticks, RES 1, focus 2, P: 960 `CreateSurface`, 26 `GetPixelFormat`, 5 `SetPalette`, 4 `SetEntries`, 1 texture `GetHandle`, 288 `Blt`, 131 `Flip`, no `ALPHABLENDENABLE`, no `Load`.

`FUN_00485ed0` and `FUN_00486040` still call `FUN_004bc200`, so `(0x11, 2)`, `(0x12, 2)` then `(0x11, 1)`, `(0x12, 1)` run around each HUD pass in 8-bit too. P: 130 each. C.

## 5. Pixel format and registers

| Function | Behaviour in RES 0, 1 | St |
|---|---|---|
| `FUN_004c8540` | Zeroes `0x740968`, `dwSize 0x20`, `GetPixelFormat`. `TEST [0x74096c], 0x20` at `0x4c859a`: set: `0x740988 = 1`, `0x7409cc = 0`, return, masks unread. Clear: walks the R, G, B masks with `SAR` loops; **a zero mask spins forever** (`0x4c85c6`, section 12). Other callers: `0x4c0424`, `0x4cba30`, `0x4ce21c` | C, P |
| Reused fields of `0x740968` | The 32 bytes go into `FUN_004bc070` as the probe's format (`0x4bc0bd`) and into `FUN_004c8690` at the end of `FUN_004b9b40`, `FUN_004b9fa0`. `+0xc` bit count: `FUN_004bc0f0` (`0x4bc120`); `FUN_00497cb0`, `FUN_00498030` are 16-bit only | C |
| `FUN_004c8690(ddpf by value)` | `flags & 0x20`: no-op. So with an 8-bit format the shift registers `0x7409ac`.. never change. Same zero-mask spin if the bit is clear | C |
| `FUN_004c7ec0` | One call in the whole file, `0x448111`, skipped here. `0x7409cc` can only be 0 or 1, so every `== 4` branch and its `FUN_004c81b0(x, 0x18)` (`0x4c516e`, `0x4c537f`, `0x4c548a`, `0x4ca695`, `0x4cbeba`) is dead | C |
| `FUN_004c81b0(x, 8)` | bpp 8: returns x (`0x4c81d0` area). No gamma: `FUN_004c7ed0(1)` runs but `0x7409d0` is read only in the 16-bit branch, so **Helderheid does nothing in RES 0, 1** | C |
| `FUN_004c81b0(x, 0x10)` | bpp 8: fatal "not yet supported". No call site pushes 0x10 | C |
| `FUN_004c81b0(x, 0x18)`, `FUN_004c7ee0` | bpp 8: fatal `0x5b55ec`. Remaining sites: `0x4c03c0` (TGA, not used here), `0x4c4e63` (bpp 16, 24 only) | C |
| `FUN_004c8380(x, 8, p)` | bpp 8: writes one byte. Sites `0x4ca8a3`, `0x4cc42b`, `0x4cc8a8` all push 8 | C |
| `FUN_004c4e00` | bpp 8: `dwFillColor` is the raw index | C |
| Colour keys | `Pri`, `Back`, `Buf` get `{0xFF, 0xFF}`, then `Buf` `{0, 0}` (`FUN_0044c030`). Textures `{0xFE, 0xFE}`. Other `FUN_004c81b0(x, 8)` sites, such as `0x441d12`, `0x440ecd`, get their index back unchanged | C |

## 6. Palette

| Fact | Evidence | St |
|---|---|---|
| Table `0x7409f0`: 256 `{R, G, B, peFlags}`, `LocalAlloc(0x40, 0x400)` | `0x4c9ca4` | C |
| Object `0x7409ec`, created through `DD`, flags 0x44 = `DDPCAPS_8BIT \| DDPCAPS_ALLOW256` | `0x4c9d09` | C, names I |
| Only `+0x18 SetEntries` (`0x4c9efa`) and `+0x10 GetEntries` (`0x4c9fba`) are called. No `Release`: all 8 references to `0x7409ec` are reads or the `CreatePalette` out | `data_refs.csv` | C |
| Both: `(this, 0, base, count, entries)`. Every site passes base 0. Guards: `0x7409f8 != 0` returns (set for bpp above 8), `0x7409f4 == 0` fatal `0x5b5b78`, `base + count` outside `0..0x100` fatal | `FUN_004c9e70`, `FUN_004c9f30` | C |
| `FUN_004cab50(name, 1)`: opens by `FUN_004c62c0`, seeks -0x300 from the end, copies R, G, B, leaves `peFlags`, `SetEntries(0,0,0x100)`. **Missing file: returns 1000, nobody checks, palette stays black** | `0x4cab6a`, `0x447d28` | C |
| `FUN_004c9ff0(t, 0, 0xff, 0x40, 1)`: `peFlags = 0x40` on 0..254, then `SetEntries`. Only 0, 0x40, 0x80 allowed, else fatal. 0x40 = `D3DPAL_READONLY`. Entry 255 keeps 0 | `0x4ca06c`, `0x4ca0a7` | C, name I |
| Which file: `[PALET] ETAPPEn` first arg, chosen when RES is 0, 1, 2, 5 (`FUN_00447d10`, jump table `0x447d90`). `e00_pal.pcx` for 0, 9, `e02_pal.pcx` for 1 to 8 | `raser.ini` | C |
| The two files hold the same 768 bytes: 0 `(0,0,0)`, 1 `(23,19,19)`, 254 `(255,0,127)`, 255 `(255,0,255)`. 254's colour occurs only at 254. Both 16x16, 929 bytes | parse | C |
| Sequence in a boot: zeros at `0x4c0562`, then file 0x100, then file 0xff, then file 0xff with flags. Sums 0, 89197, 89197, 105517 | P, section 13 | C, P |
| **`FUN_004cac30` is not reached.** `FUN_004cb630` and `FUN_004cb230` call it only when `0x7409cc != 0` (`0x4cb679`, `0x4cb259`). `FUN_004cae20` needs flag bit 2 (`0x4cae57`), and its only caller `FUN_004409d0` passes 0x19 (`0x440a39`). So no PCX palette, no key forcing, no "bump", and `SetEntries` at `0x4cb209` (needs bits 6) never runs. Palette 254 stays `(255,0,127)` | asm, `calls.csv` | C |
| Flash, `FUN_00457880` -> `FUN_0043c120(0, FUN_0043b0b0, FUN_0043b130, FUN_0043b0f0)`. `FUN_0043b0b0`: `GetEntries(0,0,0xff,0x6c35d4)`, flags 0x40, `SetEntries`. `FUN_0043b130`: `SetEntries(0,0,0xff,stack)` with `0x00EBEBEB` per entry, twice. `FUN_0043b0f0`: restore, `SetEntries` twice. Entry 255 is not touched | asm | C |

The object must keep **its own copy**: the flash passes a stack buffer, and `FUN_004c9ff0` changes `t` between calls. C. `GetEntries` must return what was set. C.

`SetEntries` affects the whole visible screen at once on a real palette (I). The port draws in RGBA, so the flash needs its own treatment in the frame part. `FUN_0043b130`'s 16-bit branch (colour fill) is not taken here, so `fillScreen` will not show it. C.

## 7. Texture formats

| Item | Behaviour | St |
|---|---|---|
| List `0x73b7d8`, ctor `FUN_004c1cb0` | 100 elements of `0xb0`. Slots `+0x46` (`0x73b81e`) 4-bit, `+0x4a` (`0x73b822`) 8-bit, `+0x4e` alpha, `+0x52` 16-bit RGB: all -1 at start. `+0x56` (`0x73b82e`) selected | C |
| `FUN_004c1e60(desc, list)` | Copies 0x1b dwords. `desc+0x4c & 0x20` (`0x4c20c6`): element `+0x6c = 2`, `+0x70 = 8`, 8-bit slot = this index, last one wins. Else `& 8` (`0x4c21ec`): 4-bit. Else mask walks with `SHR`, zero mask spins. Returns 1 | C |
| `FUN_004c2b90(2)` | Selected = 8-bit slot. RES 0, 1 only ever pass 2 (`0x4c057f`) | C |
| `FUN_004c2a50` | Returns element `+0x48`, the format, used as the format of every texture surface. Selected -1: fatal `out of boundaries m_txf_drv_info[-1]` | C, P |
| `FUN_004c2af0` | Returns `+0x6c`. 2 means `SetPalette` on the texture in the no-HAL path (`0x4b9db6`) | C |

Host requirement: enumerate one format: `dwSize 0x6c`, `dwFlags 0x1000`, `caps 0x1000`, `+0x48`: `dwSize 0x20`, `dwFlags 0x60`, `bits +0x54 = 8`, masks 0. Only bit 0x20 is tested. C. Real Ramp device also listed a 4-bit format and whether a real driver sets `DDPF_RGB` with it: I, not needed. RGB565 and ARGB4444 are harmless if also listed (slots unused) but a Ramp device would not offer them (I).

**HAL or no-HAL.** `FUN_004c1030(0x73b258)` = `HW.dwFlags != 0` (device `+4`, `0x4c1030`). Readers: `FUN_004b9b40`, `FUN_004b9fa0`, `FUN_004ba4c0`, and log getters. C.

| | `HW.dwFlags == 0` (what RES 0, 1 must get) | `!= 0` (the host today) |
|---|---|---|
| Surfaces per texture | one, `0x1800`, video pointer = memory pointer with `AddRef` | system plus `0x4005000` video (`FUN_004b9ab0`) |
| Palette on the texture | `SetPalette` twice | none |
| Upload | no `Load` at all, `GetHandle` on the memory `Texture2` | `Load` |
| After each sub-texture | nothing | `FUN_004ba4c0(0)` reloads the page (`0x4ba441`) |

`FUN_004b9b40`'s test `[ESP+0x28] == 4` (`iStack_8`, `unaff_EBX` in Ghidra's C) is its own second argument, not the device type. `FUN_004b8e00` passes 0, `FUN_004b91c0` passes 4 (`0x4b9262`). With `HW.dwFlags == 0` a 4 only skips the second `SetColorKey`. C.

The other caps only reach log lines in this path: `FUN_00498760` and `FUN_00498870` return at once when `0x6fb8d0 == 0`, so `dwMaxTextureWidth` is not checked; `FUN_0044b9d0` returns 0 before its `GetCaps`. C/P: one `GetCaps` in the whole run. A real software Ramp device has an empty HW description and a filled HEL one, colour model `D3DCOLOR_MONO`. I. Nothing depends on the HEL values here.

## 8. Memory probe, `FUN_004bc0f0`

`FUN_004bc070(256, 256)`: `flags 0x1007`, `caps 0x10005000`, format = the 32 bytes at `0x740968`, out on the stack. Loop until `CreateSurface` returns nonzero, into a 0x1000-byte stack array (1024 pointers), no bound check. Adds `([0x740974] >> 3) << 16` each. Stores at device `+0x2a1` (`0x73b4f9`), then `Release` each. C.

`0x73b4f9` then caps `0x6fb978` (`0x44c26b`) and goes to `[GFX OPTIONS] available_texture_memory` at exit (`FUN_0044b180`). `0x6fb978` has no other reader than `FUN_00498760`, which returns early here. So in RES 0, 1 the probe affects **only the menu**: below 16 MiB `M:0x488bd8` disables Maximaal (`docs/behavior/render.md` section 1). C.

The host stops after 128 surfaces. At 8 bits that gives `0x800000`, P, so a race in RES 0 or 1 would grey Maximaal. For the same 16 MiB the limit must be `0x1000000 / (65536 * bytes per pixel)`: 256 at 8 bits. What a card of 2000 returned for 8-bit `LOCALVIDMEM` textures: U.

## 9. Viewport, `FUN_004c0e10`

`D3DVIEWPORT2`, `dwSize 0x2c`: X 0, Y 0, W, H, `dvClipX -1.0`, `dvClipY H/W`, `dvClipWidth 2.0`, `dvClipHeight 2H/W`, `dvMinZ 0`, `dvMaxZ 1`. C.

| | W, H | `dvClipY` | `dvClipHeight` | St |
|---|---|---|---|---|
| RES 0 | 320, 200 | 0.625 | 1.25 | C, P |
| RES 1 | 640, 480 | 0.75 | 1.5 | C, P |

Same as RES 3 for RES 1. `FUN_004c0d30` only reselects. `FUN_004c0780` clears with flags 3 once; the frame's `FUN_004c0840(0)` flags 2, P (`Clear(.., 2)`).

## 10. What each method must do, against `source/host/directx.js`

| Method | Must do | Now | Gap |
|---|---|---|---|
| `SetDisplayMode` (DD2 `+0x54`) | Store W, H and **bpp**. Return `S_OK` | Lines 311-315 store W, H | **G1**: bpp dropped |
| `CreateSurface`, primary | `flags 0x21`, `caps 0x2218`: size from mode, format = display, one back buffer with the same format | Line 96 `format = RGB565`, always | **G2** |
| `CreateSurface`, flags 7 (`Buf`, `FUN_004c4a80` images) | No format given: same as primary (I for DirectDraw, C that the game gives none). Pitch from bits | Same line. `memory()` computes the pitch correctly once the format is right | **G2** |
| `CreateSurface`, flags 0x1007 | Format from `+0x48`. 8-bit stays 8-bit | Lines 97 OK | none |
| `CreateSurface`, Z `0x47` | Any lockless object. 16-bit. Never locked (`0x73b774` readers: `0x4c06df`-`0x4c073b`, `0x4c0909`, `0x4c0929`) | Line 111 | none |
| Probe | Fail after 16 MiB by bytes | Lines 100-109, 128 surfaces | **G3**: gives 8 MiB, section 8 |
| `GetPixelFormat` | Write 32 bytes with `dwFlags & 0x20`, bits 8, masks 0. Use 0x60 (I) | Lines 238-241 write `self.format` | Follows G2. A format without 0x20 **hangs**, section 12 |
| `Lock`, `Unlock`, `IsLost`, `Restore`, `QueryInterface`, `GetAttachedSurface`, `AddAttachedSurface`, `Flip` | As now | OK, `Lock` uses `format.bits` | none |
| `SetColorKey` | Store low value. Index compare in `softBlit` | Line 270 stores the dword | Follows G5 |
| `CreatePalette` (DD `+0x14`) | Real object. Copy the 256 entries from arg 2. Write out to arg 3 | Line 296 `() => S_OK`, out not written | **G4**: the trap of section 12 |
| `IDirectDrawPalette` | Vtable of 7: `+0x10 GetEntries(flags, base, n, p)`, `+0x18 SetEntries(flags, base, n, p)`, 4 bytes per entry, copying. Others unused | Does not exist | **G4** |
| `SetPalette` (surface `+0x7c`) | Remember it on the surface | Line 273 `noop` | **G6**: needed by upload and present, return value is fine |
| `Blt`, colour fill | Byte fill at 8 bits, index `& 0xFF` | `softFill` lines 156-163 writes `u16`: at 8 bits **2W bytes per row, overruns the heap block** | **G5** |
| `Blt`, copy and key | Byte copy, stretch as now, key `& 0xFF`, flag 0x8000 | `softBlit` lines 164-193 is `u16` | **G5** |
| `Blt` to `Pri`, `Back` | Lines 140-151 route to the renderer: `fillScreen` expects 565 (harmless here, all fills are 0, C), `blitToScreen` is empty (`d3d-renderer.js:714`) | | **G7**: frame part: blit sky, wait picture, buffer to back (`host.bufferScreen` is never set) |
| `CreateDevice` | Accept the Ramp GUID, remember Ramp (first dword `0xF2086B20`), keep target, `S_OK`. A failure has no fallback | Lines 485-490 ignore the GUID | **G8** |
| `GetCaps` | Ramp: `HW`: zero from `+4`. `HEL`: free | Lines 408-419 write `0x7FFFFFFF` to both | **G9**: selects the wrong texture path |
| `EnumTextureFormats` | Ramp: section 7 | Lines 421-432 offer 565, 4444 only | **G10**: fatal `m_txf_drv_info[-1]` |
| `EnumDevices`, `EnumDisplayModes`, `DirectDrawEnumerateA` | Zero callbacks are fine | `noop` | none |
| `CreateMaterial`, `SetMaterial`, `GetHandle` | As RES 3. `dwRampSize` (`+0x4c`) and `hTexture` (`+0x48`) are written by the game; with blend 7 no effect expected (I) | Lines 365-380, 473-478 | none |
| `CreateViewport`, `AddViewport`, `SetViewport2`, `SetCurrentViewport`, `Clear` | Section 9 | Lines 387-403, 479-484 OK | none in the host. **G11** below |
| `SetLightState` | `S_OK`. Fog stays off (`0x1c` = 0, `FUN_0043d3c0` needs `0x6fb8d0`, C) | Lines 450-453 | none |
| `SetRenderState` | `S_OK`. States at start-up: section 4. Value 7 of state 0x15 is the frame part | Lines 442-449 | none in the host |
| Texture `GetHandle` (`+0x0c`) | Works without `Load`, handle for the same surface | Lines 342-350 | **G12**: nothing tells the renderer. `Load` (line 351) is the only way into `render().loadTexture` |

Renderer and file gaps that these calls expose:

| Gap | Fact | St |
|---|---|---|
| **G11** | `updateClipMap` (`d3d-renderer.js:804`) hard-codes y +-0.75, and `screenMap` 640x480 pixels. RES 0 has y +-0.625 and TLVERTEX in 320x200 pixels | C |
| **G12** | `uploadPixels` (`:395`) reads `u16` only. 8-bit needs palette lookup, key index 0xFE, re-upload on `generation`. `arrayFor` (`:342`) would allocate 8 layers of 2048x2048 RGBA = 128 MiB for the page | C, arithmetic |
| **G13** | `race-files.json` was built on RES 3. For etappe 0, car 0 an 8-bit boot reads 38 `rcs.img` members (39 at RES 0) and 38 `rc.img` members outside the lists, 4.4 MB. One of them, `funky1.wav`, is the music choice, not 8-bit. Each miss is one synchronous XHR (`game-files.js:99`): slow boot, no failure. `tools/build-race-lists.mjs` needs RES 0, 1 runs | P |
| **G14** | The menu keeps `3D kaart` off and `Laag` greyed (`group-options.js`) | C |

Sketch of the core change, for orientation:

```js
const PAL8 = { flags: 0x60, bits: 8, r: 0, g: 0, b: 0, a: 0 };
// SetDisplayMode(w, h, bpp): host.screen.bits = bpp
// createSurface: let format = host.screen.bits === 8 ? PAL8 : RGB565;
// CreatePalette(flags, table, pOut): p = { ptr: heap.alloc(1024) }; copy table; m.newObject('IDirectDrawPalette', p); u32[pOut >> 2] = p.addr
// CreateDevice: device.ramp = u32[guid >> 2] === 0xF2086B20
// GetCaps: if (device.ramp) u8.fill(0, hw + 4, hw + size)
// EnumTextureFormats: device.ramp ? [PAL8] : [RGB565, ARGB4444]
// limit of the probe: 0x1000000 / 65536 / (format.bits >> 3)
```

## 11. Functions with no effect in this path

| Function | Why | St |
|---|---|---|
| `FUN_0044b9d0` | Returns 0 at once for `0x6fb8d0 == 0`, no `GetCaps` | C |
| `FUN_0044baa0` | Writes `0x6fb940 = 0`, never calls `FUN_0044b570` | C, P |
| `FUN_0044bfc0` | **Dead.** No `E8`/`E9` target and no pointer anywhere in the file (raw scan). `recovered_functions.tsv`: gap fragment. `LORADAR.PCX`, `HIRADAR.PCX` are read elsewhere | C |
| `FUN_004bbf20` | Only from `FUN_004bb570`, only when `0x73b780 != 0`, type 3, RES 5 | C |
| `FUN_00498760`, `FUN_00498490` | First line tests `0x6fb8d0` | C |
| `SHADEMODE`, `0x44bce4` | `0x6fb8d0 == 0` returns first. Also in RES 3 it is never sent: ctor sets `+0x2c9 = 2` (`0x4bb6ff`), the cache compare then matches | C |

## 12. What hung the page at RESOLUTION=1

**Reading gives a trap, not a spin, and the probe agrees.**

C, P. Path in today's tree: `CreatePalette` returns `S_OK` without writing `0x7409ec`. `FUN_004c9c90` sets `0x7409f4 = 1`. `FUN_004c9d50` passes `SetPalette(0)` to a no-op. The device is created. `0x4c0562` -> `FUN_004c9e70`: `MOV EAX,[0x7409ec]` = 0, `MOV ECX,[EAX]` = 0, `CALL [ECX+0x18]` = mem[0x18] = 0. The lifted call loads `CODE_MAP + ((0 - MAP_LO) << 1)` = `0xFFF70000` (`lift.py icall_target`), so wasm throws:

```
RuntimeError: memory access out of bounds, last indirect target 0
at FUN_004c9e70, FUN_004c04b0, FUN_004580e0, Machine.call, Race.boot
```

That happens before any file of the 8-bit path is read, in well under a second. Today `RaceRunner.run` catches it, shows `De race kon niet starten: ...` and returns to the menu.

**Inferred:** the catch is newer than the note. `group-options.js`, which holds the "hung the page" comment, was last written at 17:16; `race-runner.js` at 18:57, and that handling has its own later fix check (`docs/behavior/startup-menu.md:89`, `check-race-ui` "load failure"). Without the catch an exception from `race.boot()` is an unhandled rejection, `#loading` stays up and no frame ever runs, which looks exactly like a hang. Also today, on `?race=1` a failed boot ends on an empty menu page, because `route()` returns without `startUp`.

**Unresolved:** the older code is gone (no repository), so this cannot be proven, and an attempt with an older `directx.js` could have failed elsewhere.

**Real spins that do exist**, all waiting for an extended host:

| Site | Condition | St |
|---|---|---|
| `FUN_004c8540`, `0x4c85c6`, `0x4c8606`, `0x4c8646` | `GetPixelFormat` without 0x20 and a zero mask. **Probe: format flags 0x40, bits 8: last host call `GetPixelFormat`, no return, killed by `timeout`** | C, P |
| `FUN_004c8690` | Same test, format passed by value | C |
| `FUN_004c1e60`, `SHR` loops from `0x4c2335` | Enumerated format without 0x20, 8 and with a zero mask; flag 1 with a zero alpha mask | C |
| `FUN_004bc0f0` | `CreateSurface` never fails: overruns the 1024-entry array | C |

Failure ladder while extending the host, P:

| Host | Result |
|---|---|
| As now | `RuntimeError` at `FUN_004c9e70` |
| G4 only | `MessageBox: Fout \| .\array.hpp(437) : out of boundaries m_txf_drv_info[-1] while definition is [0..100]`, `GameExit 1`, from `FUN_004c2a50` at the first texture |
| G1, G2, G4, G5, G9, G10 | Boots, 120 ticks, no message, no out-of-range `Blt` |

## 13. The probe

`a session scratch folder` runs the current host with `RESOLUTION` set in memory. `a session scratch folder` adds, in the script only, the 8-bit shim: PAL8 on surfaces without a format, palette object, one 8-bit format, zero HW caps, byte `Blt`, a null renderer. One `node` process under `timeout`, no browser, no file written in the project. Logs beside them: `boot1.log`, `probe_r0_f-.log`, `probe_r0_f0.log`, `probe_r1_f-.log`, `probe_r1_f0.log`, `probe_files_r0.log`, `probe_files_r1.log`, `ladder_palonly.log`, `ladder_noflag.log`.

| Config | Result | Difference to RES 1, focus 2 in the COM log |
|---|---|---|
| RES 1, `FOCUS=1` (focus 2) | Boot, 120 ticks, 131 flips | |
| RES 1, `FOCUS=0` (focus 1) | Boot, 120 ticks | `AddAttachedSurface`, `CreateDevice` on `Back` |
| RES 0, `FOCUS=1` (focus 2) | Boot, 120 ticks | `SetDisplayMode`, Z size, viewport; primary test lock absent |
| RES 0, `FOCUS=0` (focus 1) | Boot, 120 ticks | Both of the above |

This says nothing about the picture, the Ramp rasterizer, or original behaviour. The shim's byte `Blt` and PAL8 choices are the probe's own.

## 14. Corrections to earlier notes

| Note | Says | What holds | St |
|---|---|---|---|
| `render-textures.md` section 2 | `FUN_004cac30` runs in 8-bit modes and forces palette[0xFE] | Not reached in RES 0, 1: section 6. It runs when `0x7409cc == 1`, that is RES 2 and up, for PCX loads only | C |
| `render-device.md` 2, 13; `win32-surface.md` | `FUN_0044bbf0` sets `SHADEMODE 2` | Never sent, section 11 | C |
| `win32-surface.md` C3, paths in `FUN_004b9b40` | "HAL and device type != 4" | The 4 is compared with the function's second argument `[ESP+0x28]`, stored at texture `+0x2c`, not the device type. `this+0x278` is write-only. For the path only `HW.dwFlags` counts here | C |
| `feature-parity.md`, `render.md` 26 | `RESOLUTION=1` hung the page | Today a caught trap: section 12 | C, P |

## 15. Unresolved

- What a real Ramp device returned from `GetCaps` and `EnumTextureFormats`. Nothing here depends on more than section 7. It cannot run under Wine.
- What the 8-bit probe returned on real cards, so what the menu showed after such a race.
- Whether `Lock` on the back buffer of 320x200x8 succeeded on real hardware: the code tolerates failure (`0x7408c0` stays 0, `FUN_004c4810` returns 0).
- What exactly hung the page when the note was written, section 12.
