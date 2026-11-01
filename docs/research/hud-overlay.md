# HUD and overlays in `spel.dat`

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: sections 2, 4, 5, 6, 7, 9, 10, 11 and Unknown (key 5, rotation units 4096, console tweak gate). The rest of the note is as it was written.
>
> Davilex's two official updates were found in the installation after this note was written ([`../provenance.md`](../provenance.md), [`../../original-game-decompiled/original/updates/README.md`](../../original-game-decompiled/original/updates/README.md)). So what it said about `overlay7.ini` (exists nowhere, car 7 would throw) and `OVERLAYELEMENTS` (not in the shipped file) holds for disc 1.01 only. Fixed in place below: sections 2, 3 and D.
>
> The 8-bit path (`3D kaart` off, `RESOLUTION` 0 and 1) was run on an emulated Windows 98 machine and ported after this note was written, and its HUD compared: [`render-8bit.md`](render-8bit.md) holds where it differs, and section 11a (the wait picture) and the two lines that said nothing here had run, at the top and in Unknown, are fixed in place below.

Static analysis only: nothing here had been seen running when this was written. Addresses are `spel.dat` VAs. Names in `code` that are quoted from strings are real (`CHudElement`, `CHudComposite`, `CHudException`, `CRaceOverlay`, `m_Manager`, `m_Top`, `m_OrigPosTable`, `m_FinStrElement`, and the transform field names `Position`, `ScreenWidth`, `Width`, `Height`, `Rotation`, `Scale` from the dump at `0x0047b9c0`). Names marked `*` are mine.

Units used below:

- **canvas**: the 640x480 numbers in the INI files, y down.
- **local**: what is stored in a component after loading (`+0x04`), see section 5.
- **world**: what the draw path computes, x right, y up, z into the screen. View is identity, so this is also view space.

## Confirmed

### 1. What the HUD is

A retained scene graph of textured 3D meshes, drawn inside the race's own D3D scene with its own projection. There is no 2D blitting in the live HUD. Every speedometer part, sign, portrait and even every text glyph is one `SetTransform(WORLD)` plus one `DrawIndexedPrimitive`. The only 2D blit is the wait-screen background.

### 2. Lifecycle and call order

| Step | Code | Evidence |
|---|---|---|
| Global object `CRaceOverlay` at `0x007126e8`, first member `m_Manager` | ctor `0x00487ea0` / `0x00483ed0` (static init `0x00487e70`) | "Unknown error in m_Manager.Render", "CRaceOverlay::Init" |
| Load INI, build graph, state = 0 | `0x00487f20(&overlay, 0)` from `0x0044c200` | |
| Create wait screen element | `0x004885b0` right after | |
| Load progress: stretch-blit background, render overlay, flip | `0x004415e0`, 10 call sites: `0x0044c200` x4, `0x004580e0` x1, `0x004ae490` x3, `0x004ae570` x2 | |
| Create the other elements, in this order: Portraits, Statistics, Requestors, Communicator, Start | `0x00488380` at the end of `0x0044c200` | |
| State = 1 | `0x0044c7d7` | |
| Every frame: inside `BeginScene`, after road, objects and particles, before `gfx_skid` `0x00445180`, `gfx_wolk` `0x00446fe0`, `gfx_flag` `0x00440160`, `gfx_bwlk` `0x0043de00` | `0x0044da30`: `if (overlay_detail > 0 && 0x712784 != 2) 0x004882f0(&overlay)` | |
| `0x004882f0` = update all elements with the state, then draw | `0x00488ef0`, then `0x00484fc0` (`m_Manager.Render`) | |

Update order is the creation order: WaitScreen, Portraits, Statistics, Requestors, Communicator, Start. Update happens inside the render call, so **the HUD has no update outside rendering**. Each element object has vtable slots `+0x00` dtor, `+0x04` Init, `+0x08` Exit, `+0x0c` Update(state). Update vtables: Wait `0x577124`, Portraits `0x577048`, Statistics `0x57710c`, Requestors `0x5770a4`, Communicator `0x576f78`, Start `0x5770e0`.

`game.ini` keys read in `0x00449b30`: `overlay_detail` → `0x6fb924` (shipped 3; 0 hides everything, no `menu.exe` string names it), `disable_overlay` → `0x6fb920` (shipped 0; it only gates the empty `draw_2d_display`, not this HUD), `radar` → `0x6fb970`, `OVERLAYELEMENTS` → `0x5ab3c0` (not in the disc's file, so 0; `15` in the car update's `game.ini`). The bitmask is only honoured when `0x712784 == 1`, reached through `CM_KEYB_5` with no tweak gate (`0x0044d823` in `0x0044cf90`; value 2 needs `tweak_mode`): `0x100` communicator, `0x80` portraits, `0x40` speedometer, `0x20` lap, position, time, `0x10` countdown, `8` start digits, `4` signs, `2` requestor body and wrong-way, `1` requestor strings. With the update's 15 that debug view keeps elements 1, 2, 4, 8 instead of hiding everything as with 0. The vfs trims the key, so the port reads 15 like the original. Not exercised in any check.

### 3. Overlay file selection (`0x00487f20`)

`switch (0x6fba5c)`: 0..7 pick `overlay0.ini`..`overlay7.ini`, anything else `overlay5.ini` (string `0x5ab444`). `0x6fba5c` is `[PLAYER] car` from `game.ini`, read in `0x0044aa20`, fatal outside 0..10 (`"Invalid car %d"`). `init_player_car 0x0044e340` can overwrite it in copland mode, but that runs after the overlay is loaded. `overlay7.ini` is in neither the disc nor the snapshot `original/install`; the car update adds it as car 7's HUD file, so this function finds it. Called once per process, and `spel.dat` is started anew per race.

After parsing (whitespace ignored), the seven files on the disc differ only in three `Anim` keys, plus `PLAYER_6` in `overlay6`:

| File | `OVL_COMMUNICATOR_BODY` / `OVL_SPEEDOMETER_BODY` / `OVL_REQUESTOR_BODY` anim | Models (`gen_anim.ini`) |
|---|---|---|
| overlay0 | `OVL_COMM0_BODY_ANIM`, `OVL_SPEE0_BODY_ANIM`, `OVL_REQUESTOR0_ANIM` | `ovl0com1`, `ovl0spd1`, `ovl0reqb` |
| overlay1 | ...1... | `ovl1*` |
| overlay2 | ...2... | `ovl5*` (the `2` anims map to the `5` models) |
| overlay3, overlay4 | ...3..., ...4... | `ovl3*`, `ovl4*` |
| overlay5 | ...5... | `ovl5*` |
| overlay6 | ...5... plus element 51 `PLAYER_6` at `25,265,10` | `ovl5*`, `player_6` |

All positions, scales and strings are identical across the files. The car update's `overlay7.ini` was not compared here.

### 4. INI grammar

Read through `GetPrivateProfileIntA` (default 0) and `GetPrivateProfileStringA` (default `""`, buffer 127) on the file set by `0x004c3b60`, so sections and keys are case-insensitive and the host's implementation must follow Win32 rules. Lists split on `,` (`0x004c3d60`). Fill order `0x0047ed10`: composites, elements, fonts, strings. A load error throws `CHudException` ("HeadUp Display exception in: ..."), caught as fatal.

| Section | Keys | Notes |
|---|---|---|
| `[COMPOSITES]`, `[ELEMENTS]`, `[STRINGS]`, `[FONTS]` | `Count`, `0..Count-1` = section name | Empty name throws "Overlay heading ... not found". Children draw in insertion order |
| `[<composite>]` | `Parent`, `Position`, `Alignment` = `H,V`, `Width`, `Height`, plus the common keys | `0x0047feb0` |
| `[<element>]` | `Parent`, `Anim`, `Position`, plus the common keys | `0x0047fc10`, `0x0047fd20`. `Alignment` is ignored here (`OVL_PROGRESS_BAR` has one with no effect). No `Anim`: object index -1, draws nothing |
| `[<string>]` | `Parent`, `Length`, `Type`, `Font`, `Position`, `Alignment`, `Text`, `MaxCharWidth`, `Width`, `Height`, plus the common keys | `0x00482390`, `0x00480500` |
| `[<font>]` | `DISTANCE`, and char keys `A`..`Z`, `0`..`9`, `SPACE`, `DOT`, `PLUS`, `MINUS`, `PRODUCT`, `DIV` (= `:`), `EQUALS`, `EXCLAMATION`, `QUESTION` (45 names, table `0x576c98`, count `0x5aa004`) | Value `tex,x,y,w,h`, at least 5 tokens. Other keys in the file (`SLASH`, `N_UMLAUT`, `PLAYER1`...) are never read |
| `[<font>_ASCII]` | decimal char codes `0`..`255` | Same value form |

Common keys, applied by `0x0047f880` in this order:

| Key | Default if absent | Effect |
|---|---|---|
| `Scale` x,y[,z] | 1,1,1 | vtable `+0x24`. 2 or 3 numbers, else throws |
| `Rotation` | 0 | Multiplied by `0x7126cc` = 11.3778 (`4096/360`), which fits the matrix code's 4096 units per turn at run time (section 5). No INI uses it |
| `Visible` | true | `true` or `false` (case-insensitive) or throws. Composites have none, so they start visible |
| `RGBA` r,g,b,a | none | Exactly 4 ints. Packed as a D3DCOLOR, `a*2^24 + r*2^16 + g*2^8 + b` (`0x00480c20`) |

`Alignment` for strings: `LEFT`, `CENTER`, `RIGHT`. Absent: Fixed = RIGHT, Proportional = LEFT (`0x00485660`). `Type`: `Fixed` or `Proportional` or throws. `Length` must be > 0 ("Empty string"). `Parent` is required and is `Screen` or a composite name (`Screen` is `m_Top`, created in `0x004840c0`). `Position` absent: no write at all, so the component stays at local 0,0,0, which is the world centre (`0x0047fd20`, `0x00480500`, `0x0047feb0` only write when the key is present). With 2 numbers, z stays 0.

Composite `Alignment` is read but no shipped file uses it (default left, top). Sections `[Overlay]` and `[Ornaments]` have no children in any file. `[Tuneups]` has only `OVL_PW_FASTFORWARD`, which no code references, so it stays hidden.

### 5. Transforms

Globals: `W = 0x5b3798`, `H = 0x5b379c` (ints; 640, 480 in the image). `tan(pi/4)` in the code is 1.

**Element local position** `0x0047fd20`, **string local position** `0x00480500` (same formula):

```
local.x = 0.99/320 * cx - 1
local.y = (1 - 0.99/240 * cy) * (4/3) / (W/H)
local.z = cz * 0.99/320
```

**Composite local position** `0x0047feb0` (canvas 640, 480 at `filler+0x18/+0x1c`, set in `0x0047ebb0`):

```
x = 2*cx/640 - 1;  left: x += width   center: x    right: x -= width
y = 1 - 2*cy/480;  top:  y -= height  center: y    bottom: y += height
z = cz/640
width = Width/640, height = Height/480   (composite +0x7c, +0x80, default 1)
```

**Element scale** `0x0047cd90` (vtable `+0x24`, recomputed on every call):

```
sx = 0.99/320 * Sx
sy = (H/W) * 0.99/240 * Sy
sz = 0.99/320 * Sz
```

String `SetScale` `0x00487320` stores the raw `Scale`, and also `+0x7c = Sx`. Composite `SetScale` stores raw.

**Root transform** at manager `+0x18` (`0x712700`), written only by `0x004840c0`, read every frame: `Position 0,0,0; ScreenWidth 1; Width 1; Height 0.75; Scale 1,1,1; Rotation 0,0,0`.

**World transform of a composite** `0x0047c2e0`, with `p` the parent's 12-float transform, stored at `+0x44`:

```
pos   = (local.x*p.Width + p.x, local.y*p.Height + p.y, local.z + p.z)
ScreenWidth = p.ScreenWidth
Width  = this.+0x7c * p.Width
Height = this.+0x80 * p.Height
Scale  = p.Scale * this.Scale
Rot    = p.Rot + this.Rot
```

Strings use `0x00487240`: the same, except `Width = this.+0x7c * p.ScreenWidth`. So a parent's `Width` does not scale glyph advance, only `ScreenWidth` and the string's own `+0x7c` do.

**Element draw** `0x0047cba0` writes to its object in the table at `0x73b0d0` (stride `0xa9`):

```
obj+0x50 = local.x*p.Width + p.x
obj+0x54 = local.y*p.Height + p.y
obj+0x58 = p.z + local.z + 1.0
obj+0x80.. = p.Scale * this.Scale
obj+0x74.. = p.Rot + this.Rot      (4096 units = 360 degrees at run time, mask 4095 at 0x5b23bc, 0x004b3f80; the image's 1024.0 and 1023 hold only until start-up)
```

**Projection** at manager `+0x48`: `0x004b39d0(near 0.99, far 10000, fov pi/2)`, so `m00=m11=m23=0.70711, m22=0.70718, m32=-0.70011`: `x_ndc = x/z`. The D3D viewport is one for the whole game (`0x004c0e10`): `dvClipX=-1, dvClipWidth=2, dvClipY=H/W, dvClipHeight=2*H/W`.

Resulting pixels at z = 1 (world z equals `1 + cz*0.99/320 + vertex z * sz`):

```
sx_px = 0.99/640 * cx * Wpx      sy_px = 0.99/480 * cy * Hpx
```

So the original always stretches the canvas to the mode, and the 640x480 canvas ends 1% short of the right and bottom edges: canvas 640,480 lands on pixel 633.6, 475.2. **z is real perspective.** Examples at 640x480:

| Canvas | z | World | Pixel |
|---|---|---|---|
| Portrait slot 25,25,10 | 1.0309 | -0.9227, 0.6727 | 33.6, 31.2 (9 px right, 6 px down of the naive value, and 3% smaller) |
| Start digit 320,200,8 | 1.0248 | -0.01, 0.1312 | 316.9, 199.0 |

The direction signs (`ovl_left`, `_righ`, `_fork`, `_bend`, `_wway`) have vertex z 12..204, so world z 1.04..1.63. They are 3D plates, foreshortened toward the world origin. The start digits have vertex z -5..20. A plain 2D sprite replacement would be wrong for these.

**Only three HUD functions read W and H:** `0x0047cd90`, `0x0047fd20`, `0x00480500`. Of these only `0x0047cd90` runs after load.

### 6. Classes and memory layout

`CHudComponent*` base (vtable `0x576a98`, ctor `0x0047ba80`):

| Offset | Field |
|---|---|
| `+0x00` | vtable |
| `+0x04` | `Position` local x,y,z (floats) |
| `+0x10` | `Scale` x,y,z |
| `+0x1c` | `Rotation` x,y,z |
| `+0x28` | colour ARGB |
| `+0x2c` | visible (byte) |
| `+0x30` | pre-draw callback, called in `0x0047bda0`. Setter `0x0047bcc0` has no reference anywhere, so always null |
| `+0x34` | name string: `+0x38` char*, `+0x3c` length, `+0x40` capacity |

Vtable slots: `+0x00` Draw(parent*), `+0x04` dtor, `+0x08` find (exact), `+0x0c` find (case-insensitive), `+0x10/+0x14` cast to element, `+0x18/+0x1c` cast to composite, `+0x20` SetVisible, `+0x24` SetScale, `+0x28` SetColor, `+0x2c` dump. Composites add `+0x30` compute transform, `+0x34` set width, `+0x38` set height. Strings add `+0x3c` layout, `+0x40` set alignment, `+0x44` create glyphs, `+0x48` set text, `+0x4c` relayout.

| Class | Size | Vtable | Extra fields |
|---|---|---|---|
| `CHudElement` | `0x50` | `0x576b1c` | `+0x44` object index (-1 none), `+0x48` custom DESTBLEND flag, `+0x4c` DESTBLEND value (`0x0047cd70`, used with 4 on the three `*_GLOW` elements) |
| `CHudComposite` | `0x84` | `0x576ac8` | `+0x44..+0x73` world transform (Position, ScreenWidth, Width, Height, Scale, Rotation), `+0x74` vector vtable, `+0x78` → `{+4 begin, +8 end, +0xc cap}` of children, `+0x7c` width, `+0x80` height |
| Fixed string* | `0xac` | `0x576b68` | as string below |
| Proportional string* | `0xac` | `0x576e38` | as string below |
| string base* | | `0x576bc8` | `+0x84/+0x88` glyph list (same children as `+0x78`), `+0x8c` font*, `+0x90` alignment 0/1/2, `+0x94` cell width, `+0x98` `Length`, `+0x9c` text (`+0xa0` char*, `+0xa4` length) |
| font* | `0x818` | | `{int object; float width}[256]` at `+0`, `+0x800` `DISTANCE`, `+0x804` widest glyph, `+0x808` name |

SetVisible on a composite recurses into all children (`0x0047c560`). SetColor recurses too, and is gated by `0x7126a6` (= 3D mode).

`m_Manager` at `0x007126e8`, `CRaceOverlay` continues it:

| Offset | Address | Field |
|---|---|---|
| `+0x04` | `0x7126ec` | `m_Top` (composite "Screen") |
| `+0x08/+0x0c` | | fonts vector |
| `+0x10/+0x14` | | strings vector (`+0x14` → `{+4 begin, +8 end}`), every string by name via `0x00485d50` |
| `+0x18` | `0x712700` | root transform, 12 floats |
| `+0x48` | `0x712730` | projection |
| `+0x88` | `0x712770` | force texture filter on (=1) |
| `+0x8a`, `+0x8b` | | 3D mode, alpha blending |
| `+0x8c/+0x90` | `0x712778` | overlay element vector |
| `+0x94` | `0x71277c` | **overlay state** |
| | `0x712784` | HUD mode: key 5 steps 0, 1, 0; 2 only in `tweak_mode` |
| | `0x71278c` | Communicator singleton |

Overlay element base* (`0x004924a0`): `+0x04` manager, `+0x08` name string.

Communicator* (`0x3d0` bytes, ctor `0x004895e0`, init `0x0048ae80`, update `0x0048abe0`):

| Offset | Field |
|---|---|
| `+0x18`, `+0x19`, `+0x1a` | `testmode`, `testmessages`, `moveaway` (`communi.ini`, shipped false, false, true) |
| `+0x1c`, `+0x24` | `moveawaytime`, `initwaittime` in ms (shipped 0, 5000; the INI comment calls `initwaittime` unused) |
| `+0x28`, `+0x2c` | Speedometer composite, Communicator composite |
| `+0x30`, `+0x34` | slide state of each: 2 on, 3 off, `0x1000001`/`0x1000003` moving in, `0x1000002` moving out (`0x00489e80`) |
| `+0x38`, `+0xb0` | Communicator and Speedometer slide interpolators (`0x78` bytes each) |
| `+0x128`, `+0x1a0` | speed and turbo needle interpolators |
| `+0x220..+0x22c` | `STRING_0..3_COMMUNICATOR` |
| `+0x230`, `+0x234` | `STRING_EURO_MONEY`, `STRING_DAMAGE_TXT` |
| `+0x238` | communicator health bar shown |
| `+0x23c`, `+0x240`, `+0x244` | `OVL_COMMUNICATOR_HLTH`, `_HLTH_BK`, `OVL_SPEEDOMETER_HLTH` |
| `+0x248`, `+0x24c` | damage ratio, turbo ratio |
| `+0x250` | current photo element |
| `+0x254`, `+0x258` | `OVL_SPEEDOMETER_DIAL`, `_TURBODIAL` |
| `+0x260` | `GetTickCount` this frame |
| `+0x264..+0x270` | `OVL_DIRECTION_GOLEFT`, `GORIGHT`, `GOBOTH`, `GOZIGZAG` |
| `+0x274`, `+0x278` | active sign, its expiry |
| `+0x2c4`, `+0x2c8` | current message, its expiry |
| `+0x2d0..`, `+0x360` | message queue (10 entries of 12 bytes), count |
| `+0x364`, `+0x380`, `+0x39c` | LED structs `{glow, led, lud, on, counter, timer, sample}`: communicator red, speedometer red, speedometer green |

Interpolator* (`0x0049c910`): `+0x04` mode (1 lerp, 2 speed needle, 3 turbo needle), `+0x08` done, `+0x0c` current position, `+0x18` current rotation, `+0x38` needle max, `+0x3c` turbo max, `+0x40` end, `+0x58` start, `+0x64` t, `+0x68` delta, `+0x74` duration. Lerp `0x0049cc40`: `start + delta*sin(pi/2 * t/T)`, table of 1024 at `0x73b530`.

Portrait manager* (`OVL_PORTRAIT_MGR`, ctor `0x00493130`): `+0x18` player portrait, `+0x1c/+0x20` racer portraits, `+0x24/+0x28` finish strings indexed by rank, `+0x2c` `OVL_PLAYER_OUTLINE`, `+0x38` blink flag, `+0x3c` blink timer, `+0x40` last state, `+0x44` `m_OrigPosTable` (`N+1` entries of 3 floats), `+0x48` its size.

Portrait* (`0x6c` bytes, `0x004926e0`): `+0x00` manager, `+0x04` element, `+0x08` `m_FinStrElement`, `+0x0c` INI position, `+0x18` current position, `+0x24` animation start, `+0x30` animation target, `+0x3c` string start, `+0x48` string target, `+0x54` state (0 idle, 1 swap, 2 finish), `+0x58` current rank, `+0x5c` target rank, `+0x60` timer, `+0x64`, `+0x68` animation angles.

Statistics* (`0x004968a0`): `+0x18` `STRING_CUR_LAP`, `+0x1c` `STRING_COUNTDOWN_TIMER`, `+0x20` `STRING_RACE_TIME_VALUE`, `+0x24` `STRING_CUR_POS`.

Requestors* (`0x00494960`): `+0x18` body, `+0x20` turnaround, `+0x24`, `+0x28` pause header, text, `+0x2c`, `+0x30` quit header, text, `+0x34` game text, `+0x38` `RACE_OVER`, `+0x3c` `TOTAL_LOSS`, `+0x40` `ARRESTED`, `+0x44` `TIME_UP`, `+0x48` `FINISH_TEXT`, `+0x58` text start time, `+0x5c` text index.

Start* (`0x00495d40`): `+0x18`, `+0x1c`, `+0x20` digits 1, 2, 3, `+0x24` GO, `+0x28..+0x57` saved INI positions (only the dead `0x00496010` reads them), `+0x58` timer, `+0x5c` last state.

WaitScreen* (`0x00497560`): `+0x18` `OVL_PROGRESS_BAR`.

### 7. How everything is drawn

`0x00484fc0` (`m_Manager.Render`):

1. `0x00485ed0`: filter forced on (`0x004bc200` with `+0x88`=1). If 3D and alpha: `ALPHABLENDENABLE=1, SRCBLEND=5 (SRCALPHA), DESTBLEND=6 (INVSRCALPHA)`. `SetTransform(VIEW)` = identity `0x73b538`, `SetTransform(PROJECTION)` = manager `+0x48`, the old ones saved.
2. `0x0047bda0(m_Top, root)` walks the tree. Composite draw `0x0047c030` skips invisible subtrees, computes its transform, draws children in insertion order. String draw `0x00487150` first sets every glyph's mesh colour, then the same.
3. `0x00486040`: restore VIEW and PROJECTION, `ZENABLE=1`, `ALPHABLENDENABLE=0`, filter restored.

Element draw `0x0047cba0`: skip if invisible or object -1; write position, scale, rotation; optional `DESTBLEND`; `0x004b5b10` builds the matrix if `obj+0xa1==1` (`0x004b5770`: rotations in the order selected by `0x5b0e9c`, set to 0 by `0x0044bad0`, which is Z, X, Y, and the HUD only uses Z, in the 4096 units per turn of section 5; then scale; then `obj+0x50` as translation), `SetTransform(WORLD)`, `0x004bd070` → `0x004be340`: `IDirect3DDevice2::DrawIndexedPrimitive(TRIANGLELIST, D3DVT_LVERTEX, ...)` (vtable `+0x78`). Objects have `+0xa5=1` when `alpha_blending` is on (`0x0047ce40`, `0x00482960`), so blending is on per draw.

- **Depth:** Z test and Z write are on (`0x4a74f0` ends with `ZWRITEENABLE=1`, nothing in the HUD path changes `ZENABLE`). HUD parts depend on it: body mesh z 1, stripes 2, glass 3, needles 1, knobs 0.5, health bar 0, backing 0.3. HUD depth `(z-0.99)/z*1.0001` is about 0.01 at z=1, so it wins against the scene.
- **Texture:** `overlay.tga` (256x256, 24-bit; `0x004b8840(1)` in `0x0044bad0` selects TGA as source in 3D modes) except the three glows (`s_sfx`). Key colour value `0x7f00ff` (`0x004c4030`).
- **Colour:** `0x0047d1f0` writes `RGBA` straight into the mesh's vertex colours (vertex `+0x10`, stride 32) when the mesh is type 2. Glyph meshes are shared by every string that uses that character, so colour is re-written per string per frame. **Glyph objects are shared too:** position and scale are written into the same object before each draw.

### 8. Overlay states (`0x71277c`)

| State | Set at | Meaning |
|---|---|---|
| 0 | `0x00487f20` | loading |
| 1 | `0x0044c7d7`, `0x0043c380`, `0x0043c510`, `0x0044ca80` | normal |
| 2 | `0x0044cf90`, key P | pause |
| 3 | `0x0044cf90`, key ESC | quit question |
| 5 | `0x0043ac80`, 1500 ms after finish | finish table |
| 6 | `0x0043bc20`, mode 0 | game over: total loss. Mode set in `0x0044c950`: damage > 1098 (`0x44a`) |
| 12 | `0x0043bc20`, mode 1 | game over: time up. `0x0044c8c0`: clock 11 expired on a chase track |
| 7 | `0x0043bc20`, mode 2 | game over: arrested. `0x0043a980`: more than 2 cop stops |
| 8, 9, 10, 11 | `0x0043c3d0` | countdown 3, 2, 1, GO |

4 has no writer.

| Element \ state | 0 | 1 | 2 | 3 | 5 | 6, 7, 12 | 8-11 |
|---|---|---|---|---|---|---|---|
| Wait bar `0x004976d0` | shown | - | - | - | - | - | - |
| Speedometer, Communicator `0x0048abe0` | not created | yes | yes | yes | **hidden** | yes | yes |
| Lap, position, time, countdown `0x00496e20` | not created | yes | yes | yes | **hidden** | yes | yes |
| Portraits, outline `0x00494560` | not created | yes | yes | yes | portraits yes, outline no | yes | yes |
| Requestor strings `0x004950c0` (jump table `0x495250`) | - | - | body, pause header, text | body, quit header, text | `FINISH_TEXT` | `RACE_OVER` + `TOTAL_LOSS` / `ARRESTED` / `TIME_UP` | - |
| Start digit `0x00496320` | - | - | - | - | - | - | one of them |
| Game text, wrong-way `0x00494f10`, `0x004950c0` | n/a | whenever triggered, in every state | | | | | |

### 9. Every element and its data source

Canvas rectangles are position plus mesh bounds from the `.d3d` files, with mesh y up and no perspective correction.

**Speedometer composite** (`[ELEMENTS]` order). Rest at world x 0, see section 10.

| Element | Canvas pos | Model | Canvas rect (x, y) | Data |
|---|---|---|---|---|
| `OVL_SPEEDOMETER_BODY` | 640,480 | `ovl*spd1` | 441.1-638.5, 307.7-480.2 | art |
| `..._STRIPES` | 640,480 | `ovl_spd3` | 454.6-616.3, 357-467 | art |
| `..._GLAS` | 640,480 | `ovl_spd2` | 443.6-636.6, 309.8-474.4 | art |
| `..._HLTH` | 629.5,338 | `ovl_shlt` | 563.6-629.5, 331.8-341.9 | scale x = damage/1100 per frame (`0x0048a230`). Damage = `0x00426f60(&0x5d3460, 0x6fba58)`+`0xc` |
| `..._HLTH_BK` | 629.5,338 | `ovl_shlb` | same | art |
| `..._DIAL` | 568.5,411 | `ovl_wijz` | 525-568.5, 406.7-415.3 | rotation z = `min(speed/200, 1) * 1820.44` (= 0..160 degrees). Speed `0x6fba64` = `ftol(car+0xc4 * 3.6)` (`0x0044eba2` in `0x0044ea60`, installed as a callback by `0x0044e340`) |
| `..._DOP` | 568.5,411 | `ovl_knop` | 558.5-578.5, 401-421 | art |
| `..._TURBODIAL` | 478,442 | `ovl_wij2` | 455.8-478, 439.3-444.7 | rotation z = `turbo/100 * 2048` (0..180 degrees). Turbo `0x6fba74`, 0..100, drains 1 per 100 ms (`0x0044e970`) |
| `..._TURBODOP` | 478,442 | `ovl_knp2` | 472.8-483.2, 436.8-447.2 | art |
| `..._RED_LED/LUD/GLOW` | 625,357 | `ovl_rled`, `_rlud`, `_rlit` | 603.9-646.1, 335.9-378.1 (glow) | on when damage ratio >= 0.8 (`0x00489c10`) |
| `..._GRN_LED/LUD/GLOW` | 510,465 | the same red anims | 488.9-531.1, 443.9-486.1 (glow) | on when turbo ratio <= 0.2 |
| `STRING_DAMAGE_TXT` | 594,322 center, 0.7 | font | | text 55 `SCHADE`, set once |
| `STRING_EURO_SIGN` | 520,436 left, 0.9 | font | | `Text=@` (INI), euro glyph |
| `STRING_EURO_MONEY` | 538,436 left, 0.6 | font | | `%06d` of money `0x6fba68`, clamped 0..999999, per frame |

**Communicator composite.**

| Element | Canvas pos | Model | Canvas rect | Data |
|---|---|---|---|---|
| `OVL_COMMUNICATOR_BODY` | 0,480 | `ovl*com1` | 0.1-207.2, 307.7-480 | art |
| `..._GLAS1` | 0,480 | `ovl_com2` | 3.6-86.2, 311.6-390.5 | photo window |
| `..._GLAS2` | 0,480 | `ovl_com3` | 34.1-204.4, 390.7-475.3 | text window |
| `..._HLTH`, `_HLTH_BK` | 76.4,378 | `ovl_chlt`, `_chlb` | 13.4-76.4, 373.4-383.5 | damage/1100 of the message's car, only when composite is on-screen and owner is not `HONNEY` or `SHADOW` |
| `..._RED_LED/LUD/GLOW` | 23,448 | as above | 1.9-44.1, 426.9-469.1 (glow) | `copalert` event: counter +10, cap 100, -7 per frame, blink 500 ms (`0x00489d30`) |
| `STRING_0..3_COMMUNICATOR` | 40,406 / 424 / 442 / 460, left, 0.7 | font | | message lines. `chars_per_line`=20 |

Messages: `SendMessage` `0x0048a910` from AI and triggers (21 callers, `0x004128a0` .. `0x004568a0`), ids and text from `communi.ini`. Queue of 10, priority insert `0x00489ec0`. Events: 1 copalert, 2-5 signs, 6 new-message sample.

**Under `Screen`.**

| Element | Canvas pos | Model / font | Data |
|---|---|---|---|
| `OVL_PORTRAITS_*` (9: `SHADOW, HONNEY, HARRY, POLICE, EDGAR, JAMES, BARBARALLY, TOMMY, KAT`) | 0,480 | `ovl_fac0..8`, rect 3.6-86.2, 311.6-390.5, z 3 | Communicator photo, from `ovl_photo` in `communi.ini`. Shown only when composite slide state is 2. **Not children of the composite** |
| `OVL_DIRECTION_GOLEFT/GORIGHT/GOBOTH/GOZIGZAG` | 320,50 | `ovl_left`, `_righ`, `_fork`, `_bend` | message events 2-5, shown 6000 ms (`0x00489b70`), hidden while driving the wrong way |
| `OVL_TURNAROUND_FRAME` | 320,50 | `ovl_wway` | `0x00429360(player)==0` (heading against waypoints): shown while fractional game time > 0.4 |
| `STRING_RACE_TIME_VALUE` | 515,25 Fixed left 0.8 | font | clock 0, `%02d:%02d:%d` (m:s:tenths), `0x00497230` |
| `STRING_CUR_LAP` | 515,55 left 0.8 | font | text 39 `RONDE` + ` %d/%d` of `0x6fb8f8+1`, `0x6fb8fc` (`NRLAPS`, 1 on highway tracks) |
| `STRING_CUR_POS` | 515,85 left 0.8 | font | text 38 `POSITIE` + ` %d/%d` of `0x6fbaa4+1`, `0x5d2ab0+1` (`intel.ini NrOpponents`=4) |
| `STRING_COUNTDOWN_TIMER` | 335,32 Fixed center 1.5, RGBA 255,0,0,220 | font | clock 11, only when `[MAPS]` arg 14 = 1 (chase) |
| `STRING_GAME_TEXT` | 330,135 center | font | `language.ini` index in `0x59becc`, set by triggers and the bonus script. Alpha `255 - 255*t/2.75`, hidden at 2.75 s (`0x00494f10`). Set by: 44 extra time, 45 last lap, 46 invincible, 47 cop mode, 48 quick service, 49/50 warnings, 51 flash bonus, 66/68 reset hints (68 after `RESETWAITTIME`=10 s), 67 flash fine |
| `OVL_REQUESTOR_BODY` | 320,240 | `ovl*reqb`, rect 196.8-443.1, 159.3-320.7 | states 2, 3 |
| `STRING_PAUZE_*`, `STRING_QUIT_*` | 320,220 / 250 center | font | INI `Text` |
| `STRING_RACE_OVER` | 320,260 center 1.5 | font | INI `Text` |
| `STRING_TOTAL_LOSS`, `_ARRESTED`, `_TIME_UP` | 320,220 center 1.25 | font | INI `Text` |
| `STRING_FINISH_TEXT` | 320,460 center | font | INI `Text`, state 5 |
| `STRING_FINISH_POS_1..5` | INI 0,0 is overwritten | font, left | finish table, indexed by rank |
| `OVL_START_DIGIT_1/2/3`, `OVL_START_GO` | 320,200,8, RGBA 0,250,0,255 | `ovl_dig1..3`, `ovl_strt` | scale `(1+8t, 1+8t, 1)`, alpha `255-255t`, `t=T/0.9` (GO `T/1.0`) (`0x00496110`) |
| `OVL_PROGRESS_BAR` | 295,450 | anim of 11 frames `ovl_p00..p10`, rect 308.5-596.5, 438-462 | frame = `ftol(11 * pct * 0.01)`, written directly to `obj+8` (`0x004976d0`). `pct` from `raser.ini [progress] percent0..` = 10,20,30,40,50,60,60,70,80,90,100 |

**Portraits composite.**

| Element | Canvas pos | Model | Data |
|---|---|---|---|
| `PLAYER_0..5` (`PLAYER_6` in overlay6) | 25, 25+60i, 10 (`PLAYER_5` and `_6` = same as `_4`) | `player_k`, 54x54 | Rank order. Name per car from `game.ini [Portraits]`. Alpha: player 255, racers `0xb4` (`0x00493640`), INI's 200 is replaced |
| `OVL_PLAYER_OUTLINE` | INI 619,451,8 overwritten | `sp_outln`, scale 0.95 | Follows the player's portrait, colour blink 0.6 s |

Racer table: `0x5973c0`, stride `0x58`: `+0x00` car index, `+0x04` time ms, `+0x08` rank, `+0x0c` (compared to an index in `0x0042e340`), `+0x10` finished flag. Player: rank `0x6fbaa4`, time `0x6fbaa0`.

Portrait logic `0x00493090` each frame with target from `m_OrigPosTable[rank]`: if idle and rank changed, swap over 0.6 s with `sin`, `z += +-0.03*sin(2x)`. `m_OrigPosTable` index is treated as rank, filled from car index at init (`0x00493640`; player's slot is `min(car, N)`).

**Not on the HUD at all:**

| Requested | Result | Evidence |
|---|---|---|
| Rev counter | none | No element or string. `Gear` and `Rpm` strings are car sound (`0x0042e9b0`, `0x0042eea0`) and the tweak menu (`0x00432020`) |
| Gear indicator | none | same |
| Radar | **not drawn** | `0x00441fa0`.. build a texture only when `radar != 0` (`0x0044c6a4`, shipped 0, no `menu.exe` string). The draw at `0x004426a0` has no call, jump or pointer anywhere in the binary (raw scan) |
| Dashboard `Ovl_Dashboard.cpp` `0x00491510-0x004922b0` | dead | Created only by `0x00488a70`, which has no reference (raw scan). Would throw: it wants `OVL_SPEED_*`, `OVL_SUNNY_ICON`, which no INI defines |
| Old 2D HUD `0x0043e130`, `0x0043e4c0`, `0x0043e720`, `0x0043e780`, `0x0043ea80`, `0x0043f0e0`, `0x0043f330`, `0x0043f440`, `0x0043f590`, `0x0043f690`, `0x0043b7f0` | dead | No reference from live code: the group's entry points have no call, jump or pointer (raw scan), and `recovered_functions.tsv` marks several as orphans |
| `draw_dashboard` `0x0043f8a0` | live but empty | Thunk `0x004409c0` from `0x0044cb80`. Calls empty `0x0043e120`; in `tweak_mode` with key C prints a number with font 11 |
| Communicator end-of-race photos `0x0048fc90` | dead | Needs `+0x3c0`, set only by `0x0048fc70`, which has no reference |
| Start "shake" `0x00496010` | dead | No reference |
| `OVL_PW_FASTFORWARD` | hidden forever | No string in the binary |

### 10. Who writes position at run time

Every `0x0047bc50` caller is listed here. Components not listed keep their load-time `+0x04`, which `0x0047cba0` / `0x0047c2e0` re-read every frame. **INI files are read once per process.**

| Target | Writer | When | Values |
|---|---|---|---|
| Speedometer composite `+0x04` | `0x0048ee50` init, `0x0048ef20` | While slide state has `0x1000000` | Starts at 1,0,0, slides to 0,0,0 in 1.2 s. Happens once at race start. `[Speedometer] Position` is overwritten |
| Communicator composite `+0x04` | same | Same, on every message when `moveaway` is on | Off at -1,0,0. In: to 0.011,0,0 in 1.2 s (`0x0048a010`). Out: to -1 in 3.0 s. `[Communicator] Position=-20,0,0` is overwritten and has no effect |
| Each `PLAYER_*` element | `0x004928e0` init, `0x00492ac0` swap, `0x00492c70` finish | On rank change, in state 5 | From `m_OrigPosTable`, finish constants below |
| `OVL_PLAYER_OUTLINE` | `0x00493d60` | **Every frame** | Player portrait `+0x18` |
| `STRING_FINISH_POS_n` | `0x00492980`, tail of `0x00492c70` | State 5 | Below |
| Glyph children | `0x0047dde0`, `0x004869e0`, `0x00486ad0`, `0x00486c20` | Fixed: at load. Proportional: when text changes | String-local, not affected by moving the string |

**Finish table** `0x00492980`, one call per racer on the first frame of state 5, with `N=0x5d2ab0`:

```
rows       y0 = 0.5 - 1.5/(N+1) * rank      (local; world y = y0*0.75)
portrait   start = current, target = (-0.4, y0, 0)
string     start = ( 1.0, y0, 0), target = (0.1, y0, 0)
timer      rank 0: 0; others: -(1.2 + 0.2*rank)
duration   rank 0: 1.2 s; others 0.6 s
each frame s = sin(pi/2 * t/d) over 1024 table units
           position = start + (target-start)*s, z += 0.4*sin(2x)
           rank 0 also: rotation z += 8192 (2 turns), scale 1+0.3*s
at end     portrait snaps to target, rotation 0. The string keeps its last lerp value
```

With `N=4`, at 640x480: rows at y 120, 192, 264, 336, 408; portraits at x 192; strings from x 640 to 352. Text `0x004940e0` per frame: best time `%02d:%02d:%d`, others `+` and the difference, unfinished `--:--:-`. The player's row blinks: visible while `ms % 600 < 300`.

Other run-time writes: rotation `0x0047bc90` at `0x0048a230` (needles, per frame), `0x00492c70`, `0x00492d32` (rank-0 portrait). Scale through vtable `+0x24`: `0x0048a2ac`, `0x0048a8d7` (health bars, per frame), `0x00492ebc` (rank-0 portrait), `0x00496180` (digits). These go through `0x0047cd90` and so read W and H.

Text layout, from `0x0047dde0` and `0x004869e0`, `0x00486ad0`, `0x00486c20`:

```
cell  = 2 * (Length * MaxCharWidth / 640) / Length = MaxCharWidth/320      (+0x94)
f     = cell / font.widest                         = 1/320 world per texel when MaxCharWidth is default
Fixed: spacing = f * DISTANCE
       left   child.x = (i + 0.5)      * (spacing + cell)
       center child.x = ((1-Length)/2 + i) * (spacing + cell)
       right  child.x = (i - Length + 0.5) * (spacing + cell)
Proportional, left: x starts at 0, child.x = x + w*f/2, x += w*f + DISTANCE*f
       center: starts at -total/2, total = Sum(w)*f + (Length-1)*DISTANCE*f
       right: from the last character backward
World x of a glyph = child.x * string(+0x54) + string world x
```

Text beyond `Length` is cut. Fixed pads with `' '` glyphs (center pad `(Length-n)/2`), and draws them. Proportional hides unused children.

### 11. Fonts

**The HUD font is not a `.fnt` file.** It is `[FONT1]` and `[FONT1_ASCII]` in the overlay INI: rectangles in `overlay.tga`, built into a font object in `0x00481800`, `0x00481b90`, `0x00482960`:

- Glyph = quad `+-w/2, +-h/2`, `z=0`, UV `x/texW`, `y/texH` to `(x+w)/texW`, `(y+h)/texH`, indices 0,1,2,0,2,3. Mesh `0x004bcca0`, object `0x004b48e0`, alpha flag set.
- Sizes: letters 11x17 (`A` 12, `I` 7, `J`, `L` 9, `M`, `W` 17, `Z` 13), digits 20x25, `MINUS` 9, `DIV` 6, `SPACE` 7. ASCII: `/` 11, `?` 11, `!` 6, `)` `(` 7, `_` 11, `;` 6, `#` `$` `&` 17 (smileys), `%` 17x19, `.` 6, `+` 12, `@` 17 (euro), `,` 6. Widest is 20. `DISTANCE=0`.
- `0x0047ea10` aliases `a`..`z` to `A`..`Z`. A character with no glyph (for example `'`) has object -1 and width 0, so `DRUK 'SPATIE' OM...` shows no apostrophes.

The addresses in the assignment are not `.fnt` loaders:

| Address | What it really is |
|---|---|
| `0x0047e4e0` | Glyph lookup in the INI font: `font[ch].object` |
| `0x004b8840..` (`text.cpp`) | Texture loader. Source 0 = PCX, 1 = TGA |
| `0x004c5930` (`Font.cpp`) | GDI debug printf through a surface DC (`TextOutA`, `ExtTextOutA`) |

**`.fnt` loader:** `0x004ca420` ("Load_new_ascii_set"), called 17 times from `0x0043ce10` ("init ascii fonts"). Layout, checked against all 31 `.fnt` files in `extracted/game-archives/rcs/`: every byte accounted for.

```
0x0000  256 entries: i16 w, i16 h, i32 fileOffset   (absent: -1, -1, -1)
0x0800  4 x i16                                     (stored at set +0x70..+0x7c; values such as 252,255,253,254 or 0,0,0,0)
0x0808  glyph pixels at their offsets: w*h bytes, 8-bit palette, rows top-down
```

(The 48 bytes of `0xFF` noted in `game-data.md` are the empty entries for characters 0..5.) `slider13` and `slider15` have unused gaps of 91, 78 and 128 bytes between glyphs. Each glyph becomes a DirectDraw off-screen surface `0x004c4a80` with a colour key. Conversion by pixel mode `0x7409cc`: 0 direct, 1 to 16-bit, 2 to 24-bit, 4 reads 3 bytes per pixel, which no file could satisfy.

Names `0x59a8c0 + (set*17 + index)*0x94`, set = 1 in 16-bit modes: `olfnt03, himid, higeel, hi_geld, hi_vlag, hi_bts, olfnt07, marc10, slider13, slider15, olfnt01, olfnt02, olfnt04, olfnt06, olfnt08, olfnt09, lo_fnt1`. Draw `0x004ca3d0` → `0x004ca2e0` → `0x004c9560`. **Only live use:** `0x0043fc90` (font 11 `olfnt02`, `tweak_mode` with key C).

GDI text `0x004c5930` on the live paths checked: `0x0044da30` needs `tweak_mode`, `0x0040b380` needs `0x6fb97c`, `0x004351f0` needs `tweak_mode` and a key combination, `0x0048f380`, `0x0048f720` need communicator `testmode`, `0x00471c90` is the race console: bound to `CM_KEYB_TILDE` in `0x004706d0` and shown when `+0x28` is set (`0x00471bd0`); `0x00470fe0` tests `tweak_mode` at `0x0047108d`, so with shipped `TWEAK_MODE=0` it is inert. It prints `COM:>%s` lines at x 10 to focus 1.

### 11a. Wait screen

`0x004416f0` per progress call: `raser.ini [wait_hi] N=e0N_w_hi.pcx` (`0x00449cb0`; `wait_lo` only in low-resolution 8-bit modes), loaded as `.tga` (640x480, `0x004409d0`) to surface 2 in 16-bit modes, in 8-bit modes as the PCX itself in raw indices, 1:1 to the mode ([`8bit-drawing.md`](8bit-drawing.md) section 9), size taken from the PCX header (`0x004cada0`), stretched to the full mode with `0x004c8b90(2,1,0,0,w,h,0,0,W,H,0)`. Then `BeginScene`, overlay render, `EndScene`, flip.

### 12. Pre-race and post-race: what is drawn

**Loading (state 0):** background, plus `OVL_PROGRESS_BAR`. The last progress call (`0x004581d0`) runs with state already 1, so that one frame draws the normal HUD on the background.

**Pre-race (game state 1 from `0x0044cf60`), overlay state 1:**

- Camera path sequence (`0x0043c5d0`), then action 1: `0x0043c380` ("START_ENGINES"), `0x0043c3d0`.
- Visible throughout: Speedometer group sliding in over 1.2 s, then at rest (needles, health, money, LEDs); lap, position, race time, countdown on chase tracks; `PLAYER_*` portraits with outline. Communicator stays off-screen until a message arrives; direction signs and game text if triggered.
- 2.2 s after the action starts: state 8 digit 3 (0.9 s), state 9 digit 2 (0.9 s), state 10 digit 1 (0.9 s), state 11 GO (1.0 s). Race starts (`0x0044cda0(0)`) on the frame after state 11 is set. `COP MODE` text in copland mode. Then state 1.

**Post-race, finish (game state 3, `0x0043ab70`, `0x0043ac80`):**

- First 1500 ms: state 1, normal HUD, finish camera.
- State 5: Speedometer and Communicator groups, current photo and signs hidden (`0x0048ef80`, `0x0048f040`), statistics hidden, outline hidden. Shown: `PLAYER_*` animating to the table, `STRING_FINISH_POS_n` sliding in and filled, `STRING_FINISH_TEXT`. Game text fade and wrong-way logic keep running. Finish flag on: `0x0043fdd0(1)`, drawn in `0x00440160` if `finish_flag` (shipped 1).
- Finish flag: not a HUD element. 10 strips of 34 vertices, x -5..5, y -3.75..3.75, z 5, `S_SFX`, with a copy of the camera matrix as world, blended, after the HUD pass.
- ESC, Enter or Space ends it (`0x0043ac80`), `0x0043ad40` → game state 4.

**Post-race, game over (game state 6, `0x0043bc20`):** orbit camera; state 6, 7 or 12 adds `STRING_RACE_OVER` plus one of `TOTAL_LOSS`, `ARRESTED`, `TIME_UP`. Everything else stays visible (state is not 0 or 5). After 1000 ms, ESC, Enter or Space ends it.

**Pause and quit** (`0x0044ca80`): the HUD draws one frame with the requestor, `0x0044cb80` flips twice more, then the thread spins on `GetAsyncKeyState` (`0x0044c990`, `0x0044c9f0`) with clocks stopped. No HUD update during the wait.

### 13. The owner's patch, checked against the code

Parts 2, 3, 5 and "Overlay files" of `README_technical_spel.dat.md`:

| Claim | Check |
|---|---|
| Three HUD functions read the real shape | Correct: `0x0047cdd1`, `0x0047fe55`, `0x00480534` are the only ones. Formulas match section 5 |
| Viewport clip `-1, 2` and `H/W` in `0x004c0e10` | Correct |
| Edge shift `(0.75*W/H - 1)*320/0.99`, add for Speedometer parents plus `STRING_RACE_TIME_VALUE`, `CUR_LAP`, `CUR_POS`, subtract for Communicator parents, `OVL_PORTRAITS_*`, `PLAYER_*` | Consistent with the section 5 numbers, and it works because it changes child `x`, not the composites that code overwrites |
| "Finish strings' position assigned by code" | Correct, `0x00492980` |
| `0x005973D0` is "an unused data location" | **Wrong.** It is the finished flag of racer slot 0: written by `0x004122be`, `0x00412326`, `0x0042e377`, read by `0x0042e150` and `0x004940e0`. Do not reuse it |

What the patch does not touch, all from sections 5 and 10:

- It works at load time only, through the three `Position` reads (`0x0047fdcf`, `0x0047ff43`, `0x00480610`), so it cannot follow a shape change during a race.
- It only shifts x. There is no vertical anchoring, and its clip `+-0.75*W/H` crops the canvas on anything narrower than 4:3, so it has no answer for tall or portrait screens.
- Code constants stay as they are: the finish table (`-0.4`, `1.0`, `0.1`, rows from `y0`), the slide start and end values in `0x0048f0d0` and `0x0048f140`, and the Communicator's rest offset 0.011.
- Elements it leaves in place by design: signs, requestor, digits, countdown, game text, finish text, progress bar.
- `STRING_FINISH_POS_n`, `OVL_PLAYER_OUTLINE` and the two composites ignore their INI `Position`, so section-name shifts cannot reach them. The outline follows anyway, because it copies the portrait.
- The finish flag's grid (`0x0043fff0`) and the wait-screen stretch (`0x004416f0`) are unchanged.

## Inferred

### A. Effect of the patch's use of `0x005973D0`

Not reproduced, follows from the code. In the patched `spel.dat` racer 0 counts as finished from the start, so `0x0042e150` does not extrapolate its time and `0x004940e0` can take 0 as the best time. When racer 0 finishes, the flag write replaces the reference width with 1, and `0x0047cd90` then computes `sy` too large by a factor equal to that width (1920 at 1440p) for any element scaled at run time, starting with the two health bars. This is a defect for the patch's own users, separate from the port.

### B. What a browser port should do

Nothing in the HUD logic needs the real resolution. Recommended: **leave W, H at 640, 480 for the game** (`RESOLUTION=3`) and do all shape handling in the host. Then `0x0047cd90`, `0x0047fd20`, `0x00480500` produce constants, `sx=sy=0.00309375`, and no part 2, 3 or 5 patch is needed. Do not change W or H during a race: only elements scaled at run time would follow, the rest would stay as loaded.

Three levers exist, from least to most invasive, none touching game logic:

1. **HUD viewport.** Between `0x00485ed0` and `0x00486040` the host applies its own clip instead of the game's `-1, 2, 0.75, 1.5`. Detect the pass with a hook on `0x00484fc0`, or by the `SetTransform(PROJECTION)` with `m00=0.7071`. With `A = canvas width/height`:

   ```
   wide  (A >= 4/3): xr = 0.75*A, yr = 0.75
   tall  (A <  4/3): xr = 1,      yr = 1/A
   x_ndc = (x/z)/xr,  y_ndc = (y/z)/yr
   pixels per canvas unit at z=1: 0.99 * min(Wpx/640, Hpx/480)
   ```

   This keeps the HUD undistorted and centred at any shape, without any memory write. Everything still sits in the central 4:3 box.

2. **Draw-time pokes.** Wrap `0x00484fc0`: on entry save and adjust fields, call the original, on exit restore. Update has already run by then (`0x00488ef0` comes first), and all readers of these fields during draw are in the HUD draw path, so game code never sees the changed values. This also survives every code-written position in section 10. Adding to a composite's `+0x04` or a `Screen` child's `+0x04` moves it. Local y is multiplied by `Height` 0.75, so `delta_local_y = delta_world_y / 0.75`.

3. **Per-group scale.** At the same point: composite `+0x7c`, `+0x80`, `+0x10..+0x18` times k, and every child string's `+0x7c` times k (needed because string advance follows `ScreenWidth`, not the composite's `Width`, section 5). Keep the anchor with `delta = anchor*(1-k)`. Whole-HUD scale: multiply root `ScreenWidth`, `Width`, `Height`, `Scale.x`, `Scale.y` by k, and leave `Scale.z` and z alone, which gives an exact 2D similarity about world 0,0 with no change in perspective.

INI rewriting through the virtual file system (the owner's approach) is possible but only applies per race, so it cannot follow a rotation mid-race. Levers 1-3 can. Find components by walking from `m_Top` (`*0x7126ec`): children run from `*(*(c+0x78)+4)` to `*(*(c+0x78)+8)`, name at `*(c+0x38)`, kind by vtable. Strings are also listed from `*(*0x7126fc+4)` (manager `+0x14`). Overlay element objects run from `*(*0x712778+4)`, in order WaitScreen, Portraits, Statistics, Requestors, Communicator, Start, and the Communicator is also at `*0x71278c`. All of these exist from the end of `0x0044c200`.

Numbers:

| Shape | xr | yr | Edge shift x, world (= `+0x04` delta) | Edge shift y, world | y, `+0x08` delta | Canvas units |
|---|---|---|---|---|---|---|
| 4:3 | 1 | 0.75 | 0 | 0 | 0 | 0 |
| 16:10 | 1.2 | 0.75 | 0.2 | 0 | 0 | x 64.6 |
| 16:9 | 1.3333 | 0.75 | 0.3333 | 0 | 0 | x 107.7 |
| 800x360 | 1.6667 | 0.75 | 0.6667 | 0 | 0 | x 215.5 |
| 21:9 | 1.75 | 0.75 | 0.75 | 0 | 0 | x 242.4 |
| 5:4 | 1 | 0.8 | 0 | 0.05 | 0.0667 | y 16.2 |
| 1:1 | 1 | 1 | 0 | 0.25 | 0.3333 | y 80.8 |
| 3:4 | 1 | 1.3333 | 0 | 0.5833 | 0.7778 | y 188.6 |
| 9:16 | 1 | 1.7778 | 0 | 1.0278 | 1.3704 | y 332.2 |
| 360x800 | 1 | 2.2222 | 0 | 1.4722 | 1.9630 | y 475.9 |

The canvas column for wide shapes is the patch's "HUD shift" formula: its +65 (1680x1050), +108 (16:9) and +256 (3440x1440) come out of the same calculation.

### C. Per-element recipe

All "delta" values are applied at draw time through lever 2, so nothing below needs INI changes or logic changes. "Right" means `+dx`, "left" `-dx`, "bottom" `-dy`, "top" `+dy`, from the table above.

| Group | Members | Wide | Tall, portrait | Position owner, re-written? |
|---|---|---|---|---|
| Speedometer | composite; children follow, including its 3 strings | Right | Bottom. Side by side with the Communicator needs `(198.9+207.2)*k <= 640`, so k <= 1.57 at full canvas width | Code, during the 1.2 s slide only. Draw-time delta is unaffected |
| Communicator | composite; 8 elements, 4 strings | Left | Bottom | Code, on every slide. Same |
| Photos | 9 `OVL_PORTRAITS_*` individually | Same delta as Communicator | Same | INI, static, re-read per frame. Must move with the Communicator by hand since they are `Screen` children |
| Rank portraits | `Portraits` composite `+0x04` (no writer; covers `PLAYER_*` and the outline automatically) | Left | Top | Children by code, the composite is free. **Set delta 0 in state 5**, because the finish table is laid out around world 0 and its strings are not under this composite |
| Stats | `STRING_RACE_TIME_VALUE`, `CUR_LAP`, `CUR_POS` | Right | Top | INI, static |
| Top centre | `STRING_COUNTDOWN_TIMER`, 4 signs, `OVL_TURNAROUND_FRAME`, `STRING_GAME_TEXT` | None | Top, or stay relative to the 3D view | INI, static |
| Middle centre | Requestor body and strings, digits, GO, game-over strings | None | None | INI, static. The digits' per-frame `Scale` is on the element itself, so a parent or root scale still multiplies it |
| Bottom centre | `STRING_FINISH_TEXT`, `OVL_PROGRESS_BAR` | None | Bottom | INI, static. Bar's `obj+8` frame is written by code, position is not |
| Finish table | `PLAYER_*`, `STRING_FINISH_POS_n` in state 5 | None; centred already | None | Code constants. Delta through a `PLAYER_*`/string level poke if another layout is wanted |

Notes:

- Finish strings slide from world x = 1.0. On wide screens that is inside the view, so they appear rather than slide in. To keep the look, after `0x00492980` set portrait `+0x3c` to `xr` (host hook on that function, or write it in the frame state turns 5). They stop at 0.1 either way.
- Elements with z well above 1 (`PLAYER_*`, signs, digits) move slightly less than the delta: `delta/z`. For portraits at z=1.03 that is 3%, about 3 px at 640 wide on 16:9. Multiply by `1+local.z` if it matters. Moving a sign vertically changes its foreshortening, because the vanishing point is world 0,0. If its exact look matters, apply a post-projection offset per element instead (hook `0x0047cba0`, `ndc += offset`), or leave the signs where they are.
- Small-screen reading: at 800x360, one canvas unit is 0.7425 CSS px, so 17-unit glyphs at scale 0.8 are 10 px tall. At 360x800 it is 0.557, or 7.6 px, unless k is raised.
- Safe areas: add insets to the same deltas.
- The wait-screen background belongs at world x -1..1, y -0.75..0.75 for the bar to line up. Letterboxing the blit in the central 4:3 box gives this with lever 1.

### D. Other consequences

- **Cost:** about 25 elements plus about 70 glyphs per frame in a normal race, each a `SetTransform` plus a draw, with vertex colours rewritten by the game per frame. A host that keeps these as separate GPU draws will spend real time here; batching is safe if depth is kept, since almost everything shares `overlay.tga` and one state. Do not cache HUD vertex colours.
- **Depth:** keep a depth buffer for the HUD pass, the speedometer's look depends on it. Moving the HUD to a pass drawn after everything is equivalent except where the effects drawn after it in the original (`gfx_skid`, `gfx_wolk`, `gfx_flag`, `gfx_bwlk`) would show through semi-transparent glass; in the original they fail the Z test there.
- **`.fnt`:** `0x0043ce10` can be skipped in the port when `tweak_mode` is off (saves about 670 DirectDraw surfaces, the glyph count of the 17 fonts). Only `0x0043fc90` uses the sets. The race console uses GDI text, not these fonts.
- **Radar, dashboard, old 2D HUD:** nothing to implement.
- **Car 7:** since the car update `overlay7.ini` is its HUD file, with `game.ini [Portraits] 7=PLAYER_7` and `gen_anim.ini` `PLAYER_7_PORTRAIT` (`player_8.d3d,overlay.pcx`), so `0x00487f20` finds its file and the HUD comes up (seen once, the port's launch check, by eye). On disc 1.01 without updates the file is missing, so the graph would be empty and the first lookup of a required element would throw. `garage.ini` prices `car1..car7`, which fits indices 0..6 and the seven files on the disc.
- **Units:** the factor 3.6 and the needle's 200 limit suggest `car+0xc4` is m/s-like and the display km/h. The car's real units were not checked here.
- **Finish flag coverage:** with the scene's 67.5 degree projection (`0x0044c200`) its grid reaches clip x +-1.4966, y +-1.1224, so it stops covering beyond about A = 2.0 (wider) and below about A = 0.89 (taller). It draws after the HUD but behind it in depth.
- **Rest position of slides:** the state flips before the last value is applied, so a composite rests at `sin(pi/2*t_last/T)`, about 0.00025 world short of the target at 60 FPS. Invisible, and frame-rate dependent only in that size.

## Unknown

- Nothing here had been observed running when this was written. Visual order and the look of LEDs (`LED` and `LUD` are both visible while on, because the composite's per-frame SetVisible(1) re-enables them, `0x0048abe0`) are read from code only.
- Whether a mesh in `gen_anim.ini` is always type 2 (LVERTEX) in the shipped configuration. `0x0047d1f0` silently skips other types, which would make `RGBA` on it ineffective. `0x004be590` shows both forms.
- Meaning of the four `i16` after the `.fnt` table; no reader was found in `ascii.cpp`.
- What `0x5973cc` (`racer+0x0c`) holds exactly.
- Settled: `CM_KEYB_TILDE` does nothing with shipped `TWEAK_MODE=0`, because of the check at `0x0047108d` (section 11).
- The remaining GDI callers in `car_twk.cpp` were not each checked for gating, only the entry `0x004351f0`.
- Any effect of the texture detail manager (`CTextureDetailManager`, `0x00498870`) on `overlay` was not traced.
- The 4:3 assumptions in the Inferred recipes (deltas, k, batching) have not been tried.
