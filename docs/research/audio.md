# Audio in spel.dat and menu.exe

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: sections 10 and 16 (truncation in the volume laws, the `*ON` flags, `TfrmQualify`, `unlock`, unused files). The rest of the note is as it was written.

Addresses are image addresses in the Ghidra export (`decompiled/game__spel.dat`, `decompiled/game__menu.exe`). DirectSound volume and pan values are in its native 1/100 dB units. "Name mine" marks a name that is not in the binary. Class names `CSndEngine`, `CSndSource`, `CSndType` and all field captions come from the `Dump of object` strings (`0x0049e0c0`, `0x0049f2d0`, `0x0049f570`). `dynamic/RESULTS.md` has no spel.dat run, so everything about spel.dat below is static.

---

## Confirmed

### 1. Audio APIs each module imports

| Module | Imports | Evidence |
|---|---|---|
| spel.dat | `DSOUND`: `DirectSoundCreate`, `DirectSoundEnumerateA`. `WINMM`: `mixerGetNumDevs`, `mixerOpen`, `mixerGetLineInfoA`, `mixerGetLineControlsA`, `mixerGetControlDetailsA`, `mixerSetControlDetails`, `mixerClose`, plus `timeGetTime` | `imports.csv` |
| menu.exe | `DSOUND`: `DirectSoundCreate`. `WINMM`: `mciSendCommandA`, `mciGetErrorStringA` only (VCL `TMediaPlayer`) | `imports.csv` |

- spel.dat has no `mci*`, `waveOut*`, `PlaySound` or `CreateThread` import. Audio runs on the single game thread. There is **no CD audio** in spel.dat.
- menu.exe's two `TMediaPlayer` components (`MenuIntro` in `TFRMINTRO`, `medWinner` in `TFRMWINFINAL`) set no `DeviceType` in their DFMs. They only open `INTROAVI` (`DATA\INTRO1.MPG`) and `ch%02d.avi`. The string `CDAudio` at `0x004a290c` belongs to the VCL device-name table. No CD audio in the menu either.
- `intro1.mpg` contains MPEG audio packets (`00 00 01 C0`). `ch00.avi` and `ch04.avi` have a single `vids` stream, no audio (RIFF scan of the first 4 KB).

### 2. Buffer layer: `D:\Work\dxdraw\Sound.cpp` (spel.dat)

Globals: `0x740924` IDirectSound*, `0x74092c` primary buffer, `0x740928` slot count N, `0x740934` slot table, `0x740930` driver list, `0x740950` "ready" flag.

Slot record, 0x44 bytes, N = `[SOUND] BUFFERS` = **80**:

| Offset | Meaning (name mine) |
|---|---|
| +0x00 | `char name[0x28]`, the WAV file name, compared with `__strcmpi` |
| +0x28 | IDirectSoundBuffer* |
| +0x2c | IDirectSound3DBuffer* |
| +0x30 | used flag |
| +0x34 | type: 0 normal, 1 3D. Initialised to 0 in `0x004c71b0` and never written elsewhere |
| +0x38 | eviction priority |
| +0x3c | buffer bytes |
| +0x40 | owner id (source ID), -1 at init |

| Function | Behaviour (names mine) |
|---|---|
| `0x004c6860` / `0x004c6740` | `DirectSoundEnumerateA` with a callback storing up to 20 drivers (0xD8 bytes each). Driver name `SB16.VXD` sets `0x5b4c40`; any `.vxd` extension sets `0x5b4c44`. The callback tolerates a NULL GUID |
| `0x004c71b0` | Picks the driver: SB16, else secondary, else `DirectSoundCreate(NULL)`. Then `SetCooperativeLevel(hwnd, 3)` = DSSCL_EXCLUSIVE. Allocates slots. Failure returns 0x2AF9 (no sound) |
| `0x004c7150` | Calls it with mode 13, decrementing to 1 on failure code 0x2AFA |
| `0x004c6880` | Primary: `DSBUFFERDESC{0x14, flags=1}`, `SetFormat`, `Play(0,0,1)` (looping) |
| `0x004c69c0` | Secondary: `dwFlags = 0xE8` = CTRLVOLUME, CTRLPAN, CTRLFREQUENCY, LOCSOFTWARE. No STATIC, no GLOBALFOCUS, no STICKYFOCUS, no CTRLPOSITIONNOTIFY, no GETCURRENTPOSITION2 |
| `0x004c6a90` | 3D variant: `dwFlags = 0xB8` plus QueryInterface for `{279AFA86-4981-11CE-A521-0020AF0BE560}`. Reached only when slot type is 1, which is never set: **dead code** |
| `0x004c7880` | WAV load, see section 3 |
| `0x004c7750` | `Lock(0, size, &p1,&n1,&p2,&n2, flags=1)`, `fread` into both spans, `Unlock` |
| `0x004c6b90` | `DuplicateSoundBuffer` |
| `0x004c6bd0` | Is playing: `GetStatus & 1` |
| `0x004c6c70` | If playing: `Stop`, `SetCurrentPosition(0)` |
| `0x004c6e50` | Stop as above, `Release`, clear used and priority |
| `0x004c6dd0` / `0x004c70d0` | Stop and release all, release IDirectSound |
| `0x004c6ee0` | Find used slot by name from an index, optionally only a non-playing one |
| `0x004c6f50` | First slot with type 0 and used 0 |
| `0x004c6fb0` | Eviction, see below |
| `0x004c7a10` | Find or load, then set volume and `Play(0,0,flags)` if not playing |
| `0x004c7c50` | Same find-or-load, no play. Used for preloading |
| `0x004c7460` | `SetFrequency`. Fatal outside 100..100000 unless 0 |
| `0x004c7520` | `GetFrequency` |
| `0x004c75b0` | `SetVolume`. Fatal outside -10000..-100 |
| `0x004c7670` | `SetPan`. Fatal outside -10000..10000 |
| `0x004c7e20` / `0x004c7e70` | Set and get owner id |

Primary format table at `0x5b4b60` (freq, bits, stereo, align):

| Mode | Format | Mode | Format |
|---|---|---|---|
| 0 | 11025/8/mono | 7 | 44100/8/stereo |
| 1 | 11025/8/stereo | 8 | 16000/16/mono |
| 2 | 16000/8/mono | 9 | 16000/16/stereo |
| 3 | 16000/8/stereo | 10 | 22050/16/mono |
| 4 | 22050/8/mono | 11 | 22050/16/stereo |
| 5 | 22050/8/stereo | 12 | 44100/16/mono |
| 6 | 44100/8/mono | **13** | **44100/16/stereo, tried first** |

**Slot allocation (`0x004c7a10`, `0x004c7c50`):**

1. Slot with the same file name exists and is not playing: reuse it.
2. It is playing: look for a later non-playing slot with that name. If none, take a free slot, else evict, then `DuplicateSoundBuffer` from the first slot. Evicting that same first slot is fatal ("duplicate buffers").
3. No slot has that name: take a free slot, else evict, then load the WAV.
4. Set priority: N (80), or 1000000 when flag bit 4 is set. Callers only pass 0 or 1, so 1000000 never occurs.

**Eviction (`0x004c6fb0(except)`):** start candidate `except==0 ? 1 : 0`. For all i other than the candidate and `except`: pick i if not playing and priority lower. Then `Stop` and `Release` the candidate, whether or not it plays, since the start candidate is not tested. Clear it. Decrement every other slot's priority if it is above 1 and not 10000.

### 3. WAV loading (spel.dat)

- Open: `0x004c62c0`. Case-insensitive lookup in the `rcs.IMG` index (`[IMG] RCSFILE=rcs` in raser.ini, opened by `0x00447be0`). If the name is not in the index, plain `fopen` in the working directory. `0x740918` (loose first) has only READ references, so the archive always wins.
- `0x004c7880` reads a fixed 44-byte header with no RIFF parsing: channels at +22, rate at +24, block align at +32, bits at +34, data size at +40. Sample data starts at +44. `WAVEFORMATEX` is rebuilt with tag 1.
- All 495 archive WAVs plus `menumsc.wav` have `data` exactly at offset 36 (scan in section 15), so this header assumption holds for all of them.
- A missing file at type registration asserts (`0x0049f030`: "Can't find filename"). All 193 `sound.ini` files and all 151 `communi.ini` samples exist in `rcs.IMG`.

### 4. Sound library objects (`C:\work\sound_lib`, CSndEngine version string in `0x0049f880`, build date "Sep 1 1999")

**CSndEngine**, one global at `0x6fbb58` (`0x0049f6e0` allows one instance):

| Offset | Field |
|---|---|
| +0x04 | source list: ptr, +8 count, +0xc capacity **2000**, +0x10 engine |
| +0x14 | type list: ptr, +0x18 count, +0x1c capacity **450** |
| +0x20 | 32 group-name strings (16 bytes each) |
| +0x220 | group count |
| +0x224 | listener matrix, 16 dwords |
| +0x264 | listener velocity, 3 floats |
| +0x270 | master volume, 100, written only by the constructor `0x0049f6e0` |

**CSndType**, 0x38 bytes, list in `cstlist.cpp`:

| Offset | Dump caption | INI token |
|---|---|---|
| +0x04 | Preload | 2 |
| +0x08 | Group (bitmask) | 6 |
| +0x0c | Range | 4 |
| +0x10 | Local volume | 3 |
| +0x14 | Doppler amount | 5 |
| +0x18 | Filename (string, char* at +0x1c) | 1 |
| +0x28 | Name (string, char* at +0x2c) | 0 |

**CSndSource**, 0x5c bytes, extends CSndType, list in `csslist.cpp`:

| Offset | Dump caption | Default |
|---|---|---|
| +0x38 | m_SndBuffer (slot index) | -1 |
| +0x3c | Original frequency | -1 |
| +0x40 | ID (index in the source list) | -1 |
| +0x44 | Created | 0 |
| +0x48 | Current volume | 100 |
| +0x4c | Current pitch (percent) | 0 |
| +0x50 | Current panning | 0 |
| +0x54 | PreMaster volume (group) | 100 |
| +0x58 | engine pointer | 0 |

| Function | Behaviour (names mine) |
|---|---|
| `0x0049f880` | `Init(2000, 450, BUFFERS, disabled)`, called from `0x004506e0`. If `[SOUND] ON` is 0 the DirectSound layer is skipped and every buffer call early-returns |
| `0x0049f9a0` | Parses `A|B` group strings to a mask |
| `0x0049f920` | Group name to `1<<index`, case-sensitive |
| `0x0049eba0` | New source for a type; fails over capacity |
| `0x0049ecb0` | New source by type name (case-insensitive, `0x0049ef80`). A missing name asserts |
| `0x0049ecf0` | New source by type index |
| `0x0049e260` | Source init. If Preload is set: `0x004c7c50` loads now |
| `0x0049e630` | Is playing: slot != -1 and slot owner == ID and `GetStatus & 1` |
| `0x0049e550` | Play if this source is not playing |
| `0x0049e4b0` | Play: see 5.1 |
| `0x0049e570` | Stop if playing, set slot to -1 |
| `0x0049e200` | Destructor: release the slot if playing |
| `0x0049e340` | Set source volume (asserts 0..100), push to buffer if playing |
| `0x0049e3f0` | Set pitch percent |
| `0x0049e460` | Set pan |
| `0x0049e890` | Positional update, see 5.3 |
| `0x0049ff90` | Set PreMaster volume on every existing source whose group matches the mask, push if playing |
| `0x004a01a0` (misc.cpp) | ClipValue |
| `0x004a00b0`, `0x004a0100` | Range and assert checks. Failure shows a MessageBox (`0x004a0140`) |

**Game wrapper `snd_main.cpp`:**

| Function | Behaviour (names mine) |
|---|---|
| `0x004506e0` | `InitSndFxEngine` (string in `0x0044c200`): init, register `SOUND.INI`, load groups and types, make one "static" source per type (index = type index, name table at `0x6fbdd4` with 0x44-byte records), start music |
| `0x00450900` | Static source index by exact, case-sensitive name |
| `0x00450950(name, loop)` | Play a static source, non-positional |
| `0x00450b00(obj, typeName)` | New source, stored in object+0x30 |
| `0x00450b30(obj, loop)` | Positional update using object+0x30 as source |
| `0x00450c90(obj, source, loop)` | Same with an explicit source |
| `0x004509b0` | Listener update |
| `0x00450870` | SFX group volume: mask `~(MUSIC|COPS)` = SFXVOLUME |
| `0x004508a0` | MUSIC group volume = MUSICVOLUME |
| `0x00450de0` / `0x00450e70` | Music start and stop |

Object array: `0x715e50`, stride 0xF0.

### 5. Volume, pitch, pan, doppler

Positional audio is entirely manual: the library computes volume, pan and frequency for ordinary secondary buffers. No DirectSound 3D object is used, and the script names `InitSound3D` and `PlaySound3D` only mean this manual path.

#### 5.1 Play sequence (`0x0049e4b0`), called in this order on one call stack

1. Effective volume to dB.
2. `0x004c7a10`: `SetVolume`, then `Play(0,0,loop?1:0)` if not playing.
3. Store owner.
4. `SetFrequency(0)`.
5. `GetFrequency`, stored as Original frequency.
6. `SetPan(current pan)`.
7. `SetFrequency(original + original*pitch/100)`.

#### 5.2 Formulas (integer arithmetic, C truncation)

| Quantity | Formula | Function |
|---|---|---|
| Effective volume | `((((vol*local)/100)*premaster)/100*master)/100`, asserted 0..100 | `0x0049e660` |
| dB | `((v-100)*3900)/100 - 100`, asserted -4000..-100 | `0x0049e370` |
| Frequency | `orig + (orig*pitch)/100`, clipped to 100..100000 | `0x0049e3f0` |

dB examples: v=100 gives -100, v=90 gives -490, v=75 gives -1075, v=50 gives -2050, v=25 gives -3025, v=0 gives **-4000**. Volume 0 is -40 dB, not silence. Nothing above -100 is ever set.

#### 5.3 Positional update (`0x0049e890(pos, sourceVel, loop)`)

Positions are world coordinates multiplied by 0.1 in both `0x00450b30`/`0x00450c90` and the listener.

```
d = pos - listenerPos ;  dist = |d|
if (float)range <= dist:  if playing: stop (0x0049e570);  return
dir = d/dist,  or (0,1,0) when dist == 0
if not playing: play(loop)
volume = clip(100 - ((int)dist * 100) / range, 0, 100)      ; 0x0049e7d0, linear rolloff
push volume
x   = dir.z*axis.x - axis.z*dir.x                            ; 0x0049e750
pan = sign(x) * 10^(2*|x| + 2), truncated, clip -10000..10000  ; x==0 counts as positive
pitch% = (int)( -(dot(sourceVel - listenerVel, dir)) / 340.0 * doppler )
         or 0 when doppler == 0                              ; 0x0049e6f0
```

- The pan constants are `10.0` at `0x5771a8` and `2.0` at `0x57635c`. Speed of sound `340.0` is at `0x5771a4`.
- Pan table: |x|=0 gives ±100, 0.25 gives ±316, 0.5 gives ±1000, 1 gives ±10000.
- Because a stopped non-looping source is restarted by this function, calling it every frame with `loop=0` retriggers the sound when it ends. `0_ORGL1` (barrel organ) relies on this.

**Listener (`0x004509b0`), once per frame from `0x0044cb80`, right after cameras:**

- Takes the matrix at `camera+0x14` (`0x719b50 + idx*0x178`, idx from `0x6c3518[0x6c3568]`).
- Negates elements [8..10]. These are the `axis` above.
- Multiplies elements [12..14] by 0.1 for position.
- Listener velocity is the **player car's** velocity (object+0xbc, +0xc4), y=0, rotated by the car's y angle through 1024-entry tables `0x73b578` and `0x73b530` (index mask `0x5b23bc` = 1023).

**Source velocity:** the same rotation of the source object's +0xbc and +0xc4, y=0.

**Update rate:** no timer or thread. All calls happen from object handlers, the AI and the listener call inside `handle_game` (`0x0044cb80`), once per main-loop iteration of `WinMain` (`0x00458270`). Radio FSM `0x0041c150` also runs once per iteration, after `handle_game`.

### 6. `sound.ini` grammar and contents

Read by `0x0049ff60`, `0x0049fac0`, `0x0049fc40`, through `GetPrivateProfile*` from the working directory. Token separators `, = :` (`0x5b36c0`).

```
[SndGroups]  COUNT=n (0..31)   <i>=NAME
[SndTypes]   COUNT=n           <i>=Name,file.wav,Preload,LocalVolume,Range,Doppler,GROUP[|GROUP]
```

Exactly 7 tokens or assert. LocalVolume 0..100, Range 0..4000, Doppler 0..100. Type names must be under 64 characters.

- **Groups:** ENVIRONMENT=1, MOTOR=2, GENERAL=4, COPS=8, MUSIC=0x10, BONUS=0x20. No type uses BONUS.
- **Installed file:** 193 types (GENERAL 96, ENVIRONMENT 43, MOTOR 29, MUSIC 13, COPS 12), 180 distinct WAVs.
- **Preload=1:** 70 types, 68 distinct WAVs, 3,279,983 bytes.
- `sound.ini`, `car_snd.ini`, `communi.ini` and `raser.ini` byte-compare equal between install and disc where compared (`cmp`).

Types added at runtime, on top of the 193:

| Source | Names | File | Copies parameters of |
|---|---|---|---|
| `0x0048ae80` | each `communi.ini [SAMPLES]` entry (151) | `<name>.wav` | `COMMUNICATOR_SOUND` (vol 100, range 50, doppler 50, COPS, preload 0) |
| `0x0041b690` | `CCO%02d_%02d` | `.WAV` | `RACER_COLLISION` |
| `0x0041b9d0` | `CPA%02d_%02d`, `CBP%02d_%02d` | `.WAV` | `POSITION_SWITCH` |

Those three are per-racer lists built by `0x0041bde0`. Each list stops at the first missing index, so gaps cut it short:

| Racer | CCO (of present) | CPA (of present) | CBP (of present) |
|---|---|---|---|
| 0 | 5 of 5 | 5 of 5 | 0 of 3 (no `_00`) |
| 1 | 7 of 7 | 2 of 4 | 5 of 5 |
| 2 | 0 of 5 | 1 of 4 | 0 of 3 |
| 3 | 7 of 7 | 6 of 6 | 1 of 4 |
| 4 | 2 of 4 | 0 of 3 | 0 of 4 |
| 5, 6 | 0 | 0 | 0 |

Maximum total types: 193+151+41 = 385, under the limit of 450.

**Type names with no literal in spel.dat, `bonus.dso`, `raser.ini`, `car_cfg.ini` or the used part of `car_snd.ini`:** `GO` (`go.wav`, scan for `\0GO\0` in `.data` and `.rdata` finds nothing), `PAAL_HIT_GROUND`, `TICK`, the `M_FUNK*`, `M_R&B*`, `M_ROCK*`, `M_MAMBO` music entries, `HIGH*`, `HOOG5`, `MED1`, `LOW1`, `STEADY1`, `GCL8`, `START1..8`, `LOOP3`, `LOOP8H`, `LOOP8M`, `LOOP9M`, `LOOP11`, `LOOPMIX`, `VLIEGD`, `CAR_START` (named only in the unusable `[Car7]`..`[Car21]`, or nowhere), and all `jp*` types.

`ENVIRONMENT` types are reachable by type index from `.omp` (section 13.4) or by name in code (section 13.3). `hoog4`, `loop8`, `loop12` and `toeren1` come from `car_cfg.ini`.

### 7. `car_snd.ini` grammar and engine logic

Player only. Global CarSound at `0x6fb9c0` (ctor `0x0042e5b0`, dtor `0x0042e730`), loaded in `0x0042eea0` during `0x0044c200`. Section `[Car<CarType>]`, where CarType is `car_cfg.ini` field 5 of the player's vehicle (record +0x44, stack layout in `0x00423e40`). The ctor sets offsets +0x08, +0x0c, +0x10, +0x24, +0x30, +0x3c to -1.

**Keys read:**

| Key | Form |
|---|---|
| `NrGears` | 0..6 |
| `GearA`, `GearB`, `Stat` | type name; rows `GearA<g>`, `GearB<g>`, `Stat<g>` = `minPitch,maxPitch,minVol,maxVol` for g < NrGears |
| `Cylinders` | optional list of type names; rows `Cyl<g>` = `minMs,maxMs,minVol,maxVol` |
| `MaxSpeedGear<g>` | km/h; absent reads as 0 |
| `Start`, `SwitchGear` | type name |
| `MinRpm`, `MaxRpm`, `MinSpeed`, `MaxSpeed` | stored, not used by the update |

Volumes must be 0..100 or assert. Each row must have exactly 4 tokens.

The update function `0x0042f3e0(a1, a2, speed)` ignores a1 and a2. **Sound depends only on speed, not on RPM, gear or throttle.** The caller at `0x0044ecc5`, inside the player's object handler `0x0044ea60`, passes `speed = (int)(localVelocity.z * 3.6)` (constant `0x5763b0`), so it is negative in reverse, which clamps `f` to 0.

```
if not started: return                      ; +0x04, set by 0x0042f0a0
if start sound is playing: return           ; loops wait for Start to end
play GearA, GearB, Stat as loops if not playing   ; +0x10 stays -1, so every frame
g = first gear with speed <= MaxSpeedGear[g]; if none, NrGears-1
f = g==0 ? speed/MaxSpeedGear[0]
         : (speed-MaxSpeedGear[g-1])/(MaxSpeedGear[g]-MaxSpeedGear[g-1])
f clamped to 0..1
for GearA, GearB, Stat:                      ; 0x0042f120
    pitch  = minPitch + (int)((maxPitch-minPitch)*f)
    volume = minVol   + (int)((maxVol-minVol)*f)
cylinders (0x0042f220), when at least one is defined:
    rand()                                   ; one call, result unused
    interval = (minMs + (int)((maxMs-minMs)*f)) * 0.001 s
    if clock - last >= interval:
        vol = minVol + (int)((maxVol-minVol)*f)
        src = cylinders[rand() % count]
        play src one-shot if not playing; set vol; last = clock
```

Clock is the float at `0x7128b0+8` (seconds), advanced by `gt_update_timer` `0x004a6700`.

Rows for cars in use (`min pitch/max pitch/min vol/max vol`, gears 0..4). Car4 equals Car1 and Car5 equals Car3 byte for byte.

| Car | GearA | GearB | Stat |
|---|---|---|---|
| 0 | `cmrpm` 0/42/86/88, 2/44/88/90, 4/46/90/92, 6/48/92/94, 8/50/94/96 | `cmrpm` 54/62/76/80, 54/64/80/84, 54/66/84/88, 54/68/88/92, 54/70/92/96 | `cmstat` -10/-2/85/86, -13/-4/86/87, -14/-5/87/88, -15/-6/88/89, -17/-8/89/90 |
| 1, 4 | `cvrpm` 0/22/84/84, 2/22/84/84, 4/22/84/84, 6/22/84/84, 8/22/84/84 | `cvrpmhm` 20/56/84/90, 20/54/82/88, 20/52/80/88, 20/48/80/88, 20/48/80/88 | `cvstat` 0/2/80/83, 2/8/83/85, 4/14/85/86, 6/20/86/87, 8/26/87/88 |
| 2 | `usrpm` 0/72/86/88, 6/78/88/90, 12/84/90/92, 18/90/92/94, 24/96/94/96 | `usrpm` 100/112/65/70, 112/124/70/75, 124/136/75/80, 136/148/80/85, 148/160/85/90 | `usstat` 0/2/85/85, 6/8/85/85, 12/14/85/85, 18/20/85/85, 22/26/85/85 |
| 3, 5 | `vrpm` 0/130/80/95, 15/120/80/93, 25/115/80/92, 35/115/80/90, 45/115/80/88 | `vstat` 52/65/65/70, 54/67/70/75, 56/72/75/80, 58/82/80/85, 60/86/85/90 | `vrpm` 60/80/72/73, 62/80/73/74, 64/80/74/75, 66/80/75/76, 68/80/76/77 |
| 6 (NrGears=6) | `vrpm` 5/139/85/86, 15/150/86/87, 25/160/87/88, 35/165/88/89, 45/170/89/90, 55/175/90/91 | `vstat` 52/65/65/70, 54/67/70/75, 56/72/75/80, 58/82/80/85, 60/86/85/90, 62/90/90/95 | `vstat` 60/80/72/73, 62/80/73/74, 64/80/74/75, 66/80/75/76, 68/80/76/77, 70/80/77/78 |

- **All in-use cars:** `MaxSpeedGear0..4` = 25, 45, 75, 120, 200. Car6 has no `MaxSpeedGear5`, so it reads 0 and `f` clamps to 0 above 200 km/h.
- **Cylinders:** Cars 0,1,2,4 have `Cyl0..4` = 300/180/83/60, 250/150/78/60, 250/100/72/55, 200/50/70/50, 200/50/65/45. Sample lists `cmC1..8`, `cvC1..8`, `UsC1..8`. Cars 3,5,6 have `Cylinders` commented out.
- **Start types:** `cmstart`, `cvstart`, `usstart`, `vstart`. `SwitchGear` is `SWITCH_GEAR` in all.
- **`SWITCH_GEAR` is loaded and stopped but never played.** Offset +0x0c is only touched by `0x0042eea0` and `0x0042f0d0`.
- **`[Car7]` and up** use an older grammar (`Gear0=`, `Motor=`) without `GearA`. Selecting one asserts in `0x0042e9b0`.
- `car_cfg.ini` maps racers to CarType: league records `RACER_0`→0, `RACER_1`→1, `RACER_2`→5, `RACER_3`→3, `RACER_4`→4, `RACER_5`→2, `RACER_6`→6.

### 8. Skid and turbo

**Skid intensity** (`0x0044ed1e`..`0x0044ed4c`, stored by `0x00403050` at `0x6fbad0`, clamped 0..10):

```
phys = object+0x10
s = (localVel.x*0.5)^2 + (localVel.z + A(2)*B(2))^2     ; A = 0x004a2eb0, B = 0x004a2e70, on phys
value = (int)sqrt(s)  if s != 0 and (phys.+0x3c.byte+0x25 or phys.+0x40.byte+0x25) else 0
```

**`SLIP` (`0x0044e790`, each frame from `0x0044e830`):** only if SFXVOLUME != 0. If intensity < 1: stop. Else volume = min(intensity*5+60, 100), loop if not playing, pitch% = intensity*4 - 4. Player car only.

**`TURBO` (`0x0044e970`, input action `CarTurbo` via `0x0046f050`):** only when game state `0x6fb8a0` is 0. Throttled to one pass per 100 ms (`GetTickCount`). Needs turbo fuel `0x6fba74` > 0. Plays one-shot once per press (latch `0x6fba3c`). Release stops it and clears the latch, unless flag `0x6c2f28` is 1. That flag is set through script `FastForward` (`0x00474270` → `0x00451760` → `0x00429080`), and while it is set the sound runs without a key press and fuel does not drop. Otherwise fuel decreases by 1 per pass.

### 9. Music in a race

- **List:** raser.ini `[MUSIC]` (`0x0044ad40`, `load_music_info`). `COUNT` 1..30, entries `0..n-1` are static-source names, 13 characters kept. Installed: 0=`M_DISCO1`, 1=`M_MOBIE1`, 2=`M_EIGHTY1`, 3=`M_FUNKY1`, 4=`M_MOBIE2`, 5=`M_REVENGE1`, count=6, `LAST=2`.
- **Selection is round-robin across races.** `idx = LAST+1`; if `idx < 0` or `idx >= COUNT` then 0; written back immediately with `WritePrivateProfileString` to `[MUSIC] LAST`. The host's file system must persist this write.
- **`[MAPS]` argument 9** ("Zero-based index in music array", per the INI comment) is stored at `0x6fa610` (write at `0x0044a9c5`). No read of that address exists in `data_refs.csv`: **the per-track music index is unused.**
- **Start:** `0x00450de0`, end of `InitSndFxEngine`, so before cars and tracks load. If MUSICVOLUME > 0 and `GlobalMemoryStatus.dwTotalPhys` > 17,000,000: `0x00450950(name, loop=1)`, then the MUSIC group volume. If memory is lower, MUSICVOLUME is forced to 0. If MUSICVOLUME is 0, no music is loaded.
- **Whole file in one buffer, looped with `DSBPLAY_LOOPING`.** No streaming, no track change during a race. `MUSIC` types have Preload 0.
- **Stop:** `0x00450e70` at exit (`0x004490a0`).

Music files, all 22050 Hz 8-bit mono:

| Type | File | Bytes | Seconds |
|---|---|---|---|
| M_MOBIE2 | mobie2.wav | 2,755,455 | 124.96 |
| M_MOBIE1 | mobie1.wav | 2,721,919 | 123.44 |
| M_REVENGE1 | revenge1.wav | 2,245,944 | 101.86 |
| M_FUNKY1 | funky1.wav | 2,095,095 | 95.02 |
| M_EIGHTY1 | eighty1.wav | 1,707,247 | 77.43 |
| M_DISCO1 | disco1.wav | 1,512,415 | 68.59 |

### 10. Volume settings

**In a race** (raser.ini `[SOUND]`, read by `0x00447db0`; installed values):

| Key | Installed | Effect |
|---|---|---|
| `ON` | 1 | 0 disables sound (`0x00447500`) |
| `BUFFERS` | 80 | slot count |
| `MUSICVOLUME` | 90 | MUSIC group |
| `SFXVOLUME` | 90 | all groups except MUSIC and COPS |
| `POLICEVOLUME` | 99 | COPS group, applied once in `0x0041b220` |

Group volumes reach only sources that exist at the call: `0x0049ff90` iterates the source list, and new sources start at PreMaster 100. `0x00450870` runs at the end of `0x0044c200`; `0x0041b220` runs last in `init_main`. Sources created later keep 100 until the next group call (end of any radio event).

game.ini `[OPTIONS] 3dsound=1` is stored at `0x6fb8b8` (`0x0044a4f0`). That address has only this WRITE in `data_refs.csv`: **the key has no effect.**

**Menu to race conversion** (`0x0048ba20`, called at `0x0048c553` inside `WriteToInis` `0x0048c3f0`, from `TData.DataDestroy` `0x0047f4ac` when its flags at +0xd8 and +0xa8 are set; the call lies in a code gap, found by byte scan):

```
raserVolume = on ? clamp(100 - Trunc(10^(2*(100-v)/100)), 1, 100) : 0     ; 0x00480f04
```

v=100 gives 99, v=90 gives 99, v=75 gives 97, v=50 gives 90, v=25 gives 69, v=10 gives 37, v=0 gives 1. `0x402ad4` loads control word 0x1F32 (rounding control 3) around its `fistp`, so this truncates. `FXVOLUME` writes `SFXVOLUME`. `VOICESVOLUME` writes `POLICEVOLUME`. The installed 90/90/99 equal static.ini's 50/50/100.

**Menu settings** (`TSettings`, instance +0x10 FX, +0x14 voices, +0x18 music, +0x1c FXON, +0x1d MUSICON, +0x1e VOICESON):

- Defaults from static.ini `[DEFAULTSETTINGS]` (`0x004a6de4`): `MUSICVOLUME=50`, `FXVOLUME=50`, `VOICESVOLUME=100`, `MUSICON=1`, `FXON=1`, `VOICESON=1`.
- Per player inside the save stream: `TSettings.vmt_014` `0x004a63f4` (load) and `vmt_010` `0x004a6574` (save). Order begins i32 difficulty, i32 resolution, i32 FX (+0x10), i32 music (+0x18), i32 voices (+0x14), bool FXON, bool MUSICON, bool VOICESON.
- With no current player, `0x00480428` and `0x004807a8` read the static defaults.
- Options sliders `sldrMusic`, `sldrSound`, `sldrVoice`: Min 0, Max 100 (DFM). Options OK (`0x004960fc`) sets `MUSICON` and `FXON` from slider position > 0; `VOICESON` has no control. `0x00495d6c` only shows slider 0 when a flag is off.

### 11. Cop radio (`ai_radio.cpp`), object at `0x5d3118`

Lists are `{capacity, count, index, array}` of 16 bytes (`0x0041c660` also calls `rand()` for the start index: one `rand()` per list).

| Offset | Size | Content | Built by | Shipped content |
|---|---|---|---|---|
| +0x00 | 8 | `R<cartype><i>` from type `RACER_<cartype>` | `0x0041aa80` | **empty**, no `RACER_n` type in sound.ini |
| +0x10 | 8 | `START_PURSUIT_%d` | `0x0041b220` | **empty** |
| +0x20 | 6 | `CSTAY_%d` | `0x0041b220` | **empty** |
| +0x30 | 50 | location `CE<track>L<loc>` | `0x0041af00` | **empty**, see below |
| +0x40 | 3 | `BLOCK_%d` | `0x0041b220` | **empty** |
| +0x50 | 6 | `CBLOK_%d` | `0x0041b220` | **empty** |
| +0x60 | 8 | `MEGA_%d` | `0x0041b220` | `MEGA_0..3` = `CMP05_00..03.wav` |
| +0x7c | 7 lists | `CCO` per racer | `0x0041b690` | section 6 |
| +0xec | 7 lists | `CPA` per racer | `0x0041b9d0` | section 6 |
| +0x15c | 7 lists | `CBP` per racer | `0x0041b9d0` | section 6 |

**Location list:** `0x0041af00` tests `0x0041c5f0`, which returns `entry == -1` (`SETZ` at `0x0041c5fb`). All entries start at -1, so it always takes the "location allready loaded" branch and never loads. No `CE*.wav` exists in `rcs.IMG`, and there is no `COPRADIO` type in sound.ini, which that branch would assert on.

**Event entry `0x0041be70(event, car, source)`:** the event latches only when idle. Then a switch on the latched event, not the argument. Events 1..5 and 9 start only if state is 0. Event 10 overrides state whenever the latched event is 10. An old speech sample is not stopped and overlaps.

| Event | Fired by (constant checked at the PUSH) | Start state | Result with shipped data |
|---|---|---|---|
| 1 | `0x0040d833` (cop assigned to the player). `0x0043a57e` in `0x0043a570` has no caller | 1 | all lists empty: reset at once, silent |
| 2 | `0x00408dfb`, and `0x0043a59e` in `0x0043a590` (called at `0x004049c2`, `0x00404a18`) | 8 | `0x0043a5b0` returns -1: reset, silent |
| 3 | `0x004091af`, `0x0043a5cb` (from `0x0043a910` caught sequence) | 9 | Arrest speech, ducked |
| 4 | `0x004088a7` in `0x00408520`, which has no static reference (byte scan for pointers and calls) | 0xb | lists empty: reset, silent |
| 5 | `0x004083c5`, `0x004209e2` (behind a `rand()%100` test) | 0xe | `MEGA` speech, ducked |
| 6, 7, 8 | no call site | 0xf, 0x11, 0x13 | dead |
| 9 | `0x0044f09f`: `Keyboard0` + `CM_KEYB_T` above threshold, while state flag `0x6fb8c0` | 0x15 | Next `CPA` of the player's racer (`0x6fba5c`), no duck |
| 10 | `0x00489813` (communicator) | 0x17 | given sample, no duck |

**Tick `0x0041c150`, once per main-loop iteration:**

| State | Action |
|---|---|
| 1/3/5/7/0xb/0xd | Play next from list; duck; next state. Empty list resets |
| 2/4/6/0xc | Wait while sample plays |
| 8 | Reset (silent) |
| 9 | Arrest sample, duck, state 10 |
| 0xe | If cop car for player (`0x004072b0`): next `MEGA`, duck, positional `0x00450c90(car, src, 0)`, state 10. Else non-positional, duck, state 10 |
| 10 | Wait while current source plays, then reset |
| 0x15 | Next from CPA list, state 0x16 |
| 0x16, 0x10, 0x12, 0x14, 0x18 | Wait, then state 10 |
| 0x17 | Play given source one-shot, state 0x18 |

Reset (`0x0041c0d0`) restores `0x00450870` and `0x004508a0`, clears state and event. It runs for silent events too.

**Duck (`0x0041c0f0`):** group `~(MUSIC|COPS)` = max(SFXVOLUME-30, 0), group `MUSIC` = max(MUSICVOLUME-30, 0).

**Arrest sample (`0x0043a5e0`, `ev_cops.cpp`), by `g_times_caught` `0x6c35c0` (incremented in `0x0043a910`):**

| Times caught | Sample |
|---|---|
| 1 | `ARREST_1A`/`1B` (arrest1a.wav, arrest1b.wav), `rand()&1` |
| 2 | `ARREST_2A` (arrest2a.wav), one `rand()` call discarded |
| 3 | `ARREST_3A`/`3B` (arrest3a.wav, arrest3b.wav), `rand()&1` |

Skipped when SFXVOLUME is 0 (`0x004475d0`). Above 2 catches the race ends in `0x0043a980`.

### 12. Speech through the communicator (`Ovl_Communicator.cpp`, `communi.ini`)

Grammar (parsed in `0x0048ae80`, `0x0048ebe0`):

```
[SAMPLES]    <i> = <wav name without extension>
[CATEGORIES] <i> = name
[SYSTEM]     <i> = id, samplenr, eventnr
[PLAYERS]    <i> = name, bool
[<PLAYER>]   <i> = id, [cat,...], priority, samplenr, eventnr, showtime(s), lifetime(s), text
```

`samplenr` indexes `[SAMPLES]`; -1 means none. An out-of-range sample is fatal. Text uses `@` for `,` and `#` for newline.

**Sending:** `0x0048a910(name, car)`. `~category` picks a queued message from that category. `system_*` runs immediately.

**Playing a message (`0x0048a230`, per frame):** when the panel has slid in (+0x34 == 2):
1. If the message's eventnr is 0: send `system_newmessage`, playing sample 0 `mesin.wav`, via `0x004899a0` case 6, one-shot.
2. `0x00489800(sample)`, that is radio event 10. Only starts when radio is idle or already on event 10.

**`System_CopAlert` (`0x0041eeb0`, sent while `abs(field 0x5cec0c) < 7` for that supercop):** sample 1 `copalert.wav`. `0x004899a0` case 1: level +10, cap 100. `0x00489d30` per frame: while level > 0 loop `copalert.wav`, toggle lamp every 500 ms, **level -= 7 per frame**; at level < 1 stop. This decay is per frame, not per time.

Message senders found (`strings.csv` literal plus function):

| Category | Function |
|---|---|
| `~racer%dcollision` | `0x0041a5b0` |
| `~racer%dpassing`, `~racer%dpassed` | `0x004128a0` |
| `~police_outsmarted` | `0x0041f070` |
| `~warning_from_harry` | `0x0041f350` |
| `~knock_out` | `0x0041f9f0` |
| `~attack` | `0x004200e0`, `0x00420740`, `0x00420ca0` |
| `~challenge_at_start`, `~challenge_at_finish`, `~call_for_backup`, `~go_for_it` | `0x00455cc0`, `0x00455da0`, `0x00455e90`, `0x00455f70` |
| `~game_position_01..05` | `0x00456050` |
| `~junction_ahead_left`, `~junction_ahead_right` | `0x00456390`, `0x00456470` |
| `system_goleft/right/fork/zigzag` | `0x00456600`, `0x004566e0`, `0x004567c0`, `0x004568a0` |

No literal exists for categories `warning_about_harry` (13), `a_lotta_damage` (14), `reactions_on_warnings` (17), `reactions_on_challenge` (18). `[POLICE]` has no active message.

### 13. spel.dat sound triggers

Format column: channels/rate/bits, seconds. Vol/Range/Doppler from sound.ini. "NP" is non-positional, "P" positional.

#### 13.1 Player car and race events

| Trigger | Type | WAV (format) | V/R/D | Mode | Function |
|---|---|---|---|---|---|
| Race start action | START_ENGINES | vstart2.wav (1/22050/8, 5.19) | 95/500/40 | NP one-shot | `0x0043c380` |
| Same action | `[CarN] Start` | cmstartm, cvstartm, usstartm (1/44100/16, 1.87, 0.76, 1.70), startm (0.76) | 100/500/40 | NP one-shot, sets started | `0x0042f0a0` |
| After start ends | GearA, GearB, Stat | `cmrpmm`, `cmstatm`, etc. | see 7 | NP loop, per-frame pitch/vol | `0x0042f3b0`, `0x0042f120` |
| Cylinder pops | `cmC1..8` etc. | `cmgear1..8m` (0.45), `cvgear1..8m` (0.34), `hdgear1..8m` (0.14-0.17) | 95/500/40 | NP one-shot | `0x0042f220` |
| Skid | SLIP | slipl1.wav (2/22050/16, 1.54) | 100/500/0 | NP loop | `0x0044e790` |
| `CarTurbo` | TURBO | turbo04a.wav (1/22050/8, 5.56) | 100/50/40 | NP one-shot | `0x0044e970` |
| `CarHorn` held | HORN2 | Horn002.wav (1/22050/8, 1.35) | 100/50/50 | NP one-shot, retriggered while held | `0x0046f050` |
| Finish | FINISH_JUICHEN | juich.wav (2/22050/8, 3.32) | 80/500/0 | NP one-shot | `0x0043ab70` |
| Chase timer < 6 s, once per second | TIME_TICK | tick.wav (1/22050/8, 0.25) | 90/500/20 | NP one-shot | `0x0044c8c0` (track mode 1 only) |
| Checkpoint, track mode 1 (chase) only; in normal mode `0x00457d20` runs instead, silent | CHECKPOINT | checkp.wav (1/22050/16, 1.34) | 80/50/40 | NP one-shot | `0x00457da0`, from trigger `0x00457e40` (pointer at `0x5a3b6c`) |
| Speed trap, speed > 50/70/100 per trigger type (`0x004578f0`, `0x00457900`, `0x00457910`) | FLITS | flits.wav (1/22050/16, 0.79) | 90/500/20 | NP one-shot | `0x00457880` |
| Repair trigger | REPAIR | repair.wav (2/22050/16, 1.93) | 80/500/0 | NP one-shot | `0x00457c00` |
| Score counter digit step | SUNNIES | sunnies.wav (1/44100/16, 0.14) | 70/500/0 | NP one-shot | `0x004917b0` |

`CarHandbrake` makes no sound. `0x0046f050` only sets a flag via `0x00403040`.

#### 13.2 Collisions and damage

`0x00426fe0` (type 1 from player `0x0044fe70`, type 3 from AI `0x0041a5b0`) calls `0x00427400(car, impulse, chunkFlag)`.

Thresholds are the car's `min`, `max` impulse. `damage.ini [Damage Models]` fields 1,2; fields 3,4 for the player (`0x00426bb0`). Racers 70000/90000, as player 50000/90000; supercop 260000/270000.

| Condition | Type | WAV | V/R/D | Mode |
|---|---|---|---|---|
| Within 300 ms of last hit, `impulse < min*0.33333334`, other object named `chunk*` (player only; AI passes flag 0) | SCHUUR | schuur2.wav (1/44100/16, 0.49) | 60/500/40 | NP, in addition to the row below |
| `impulse < min` | SOFT_CAR_HIT1/2, `rand()&1` | soft01, soft02 | 100/500/0 | P one-shot at car, if not playing |
| `impulse < min + (min+max)*0.5` | MID_CAR_HIT1/2 | med01, med02 | 95/500/0 | same |
| else | HARD_CAR_HIT1/2 | hard01, hard02 | 95/500/0 | same |
| Part detaches (`0x00425850` → `0x00425800`), `rand()&3` | DAMAGE_GLASS, DOP, GLASS2, METALBAR | glass, dop, glass2, metalbar | 100/80/50 | P one-shot at car, if not playing |

`0x0044fca3`/`0x0044fd22` (older collision code, thresholds 18000 and 25000, 300 ms) have no caller and no reference to their real entry points `0x44fcb0`/`0x44fd30`: dead.

#### 13.3 Moving world sounds (positional loop, updated per frame by the object's handler)

| Object | Source created in | Type (WAV, V/R/D) | Update and stop |
|---|---|---|---|
| Road cops | `0x00423a50` | POLITIE_SIRENE (psirene1.wav 1/11025/8, 1.16 s, 90/200/40) | `0x0040d490` every FSM update; stop when FSM state is 9 or 0x19; `0x00413520` stops on path end |
| Supercop | `0x0041e450` | POLITIE_SIRENE | `0x0040d490` |
| Path cop | `0x004636c0` | POLITIE_SIRENE | `0x00463d70`/`0x00463d20` |
| Racers (AI) | `0x0042a3d0` | car_cfg SoundType `hoog4` → HOOG4 (hoog4.wav 2/22050/16, 0.54 s, 80/50/50) | `0x0040d490` |
| Traffic cars (AI) | `0x0042a3d0`, `0x004658e0` | car_cfg `[traffic]` SoundType: `hoog4`, `loop8`, `loop12`, `toeren1` | `0x004161d0` |
| Path traffic | `0x004666c0`, `0x00466db0` (pointers in the path-type table at `0x5a65xx`) | HOOG4 | `0x004669a0`/`0x00466950`, `0x00421f50` |
| Helicopter | `0x00463a60` | HELI (heli.wav, 80/750/50) | `0x00463d70`/`0x00463d20` |
| Plane | `0x004654b0` | PLANE (vliegt.wav, 80/1000/25) | `0x00465670`/`0x00465620` |
| Train | `0x00466290` | TRAIN (trein.wav, 80/500/20) | `0x00466450`/`0x00466400` |

`0x00465010` (`pth_pcop.cpp`) also creates a car with a car_cfg sound source, but a byte scan finds no pointer or call to it.

**Traffic horn (`0x00414950`, per traffic AI update):** one global `TOETER` source (horn003.wav 1/22050/8, 0.27 s, 100/80/20), created in `0x00413f00`. When the player approaches with opposing heading (`0x004230d0`: within 3 waypoints, heading difference 0x700..0x900 of 0x1000) or is ahead on the same waypoint (`0x00423210`), and no other car holds it (`0x592938 == -1`), that car's object+0x30 is swapped to TOETER and `0x004161d0` loops it positionally. When the condition ends it stops and the original source returns.

#### 13.4 Static track objects

`.omp` record field at +0x40 (`0x004aead0`). Type 1 objects (`0x00454170`, handler `0x004535d0`) create a source from that **type index** and loop positionally:

| Track | Type-1 objects |
|---|---|
| etappe0 | BAR, BIRD, DEPARTURE, PIGEON, STPAUL, ROADWORKS2 (one each) |
| etappe4 | WATER ×16 |
| etappe8 | HELI ×11, ALARM, BIGBEN, BIRD ×6, COW ×3, CRIK ×3, DUCK ×2, STPAUL, WATER ×2, TRUCK ×2 |
| others | none |

Hit-once objects (collision callback `0x004544c0` sets state 1, handler calls `0x00450b30(obj, 0)` once):

| `.omp` type / file | Created in | Type | Handler |
|---|---|---|---|
| 2 `Tob_piln` | `0x004548d0` | PION_HIT_CAR (pionb1.wav, 80/500/20) | `0x00454990` |
| 22 `Tob_pap` | `0x004546b0` | PION_HIT_CAR | `0x00454770` |
| 3 `Tob_wrkb` | `0x00455aa0` | PAAL_HIT_CAR (paal.wav, 80/500/20) | `0x00455b60` |
| 6 `Tob_wlmp` | `0x004554b0` | PAAL_HIT_CAR | `0x00455570` |
| 7 `Tob_flts` | `0x00451ed0` | PAAL_HIT_CAR | `0x00451f90` |
| 8 `tob_wplb` | `0x00455800` | PAAL_HIT_CAR | `0x004558c0` |

#### 13.5 DaviScript (`bonus.dso`, `bonus.pseudo.txt`)

Bindings: `PlaySample(name)` = `0x00474500` → `0x00450950(name, 0)`. `InitSound3D(name)` = `0x00475690`. `PlaySound3D(loop)` = `0x00475750` (only if object+0x30 > 0). `DeleteSound3D()` = `0x004757c0` (sets object+0x30 to -1, does not stop).

| Handler | Call | Type → WAV |
|---|---|---|
| `OnPickup_pw_fastf_ANIM` | PlaySample | PW_FAST → Fastfor.wav |
| `OnPickup_pw_stop_ANIM` | PlaySample | PW_FREEZ → wakkah6.wav |
| `OnPickup_pw_godm_ANIM` | PlaySample | PW_INV → wauwkuh1.wav |
| `OnPickup_pw_1pts_ANIM` | PlaySample | PW_1PT → wakkah4.wav |
| `OnPickup_pw_5pts_ANIM` | PlaySample | PW_5PTS → wakkah1.wav |
| `OnPickup_pw_10pts_ANIM` | PlaySample | PW_10PTS → wakkah5.wav |
| `OnPickup_pw_turbs_ANIM` | PlaySample | PW_TURBS → wakkah2.wav |
| `OnPickup_pw_turbb_ANIM` | PlaySample | PW_TURBB → wakkah3.wav |
| `OnPickup_pw_reps_ANIM` | PlaySample | PW_REPS → wauwkuh3.wav |
| `OnPickup_pw_repb_ANIM` | PlaySample | PW_REPB → wauwkuh2.wav |
| `B_phon` OnInit, OnRevive | InitSound3D, PlaySound3D(0) | TELEFOON → telefoon.wav |
| `B_crat1` OnInit, OnRevive | same | KRATTEN → kratten.wav |
| `B_OIL1` OnInit, OnRevive | same | OLIEVATEN → vaten.wav |
| `B_HALT1` OnInit, OnRevive | same | BUSHALTE → bushalte.wav |
| `0_ORGL1` OnInit, OnFramecall, OnRevive | InitSound3D, PlaySound3D(0) each frame, DeleteSound3D | DRAAIORGEL → drorgel.wav |

### 14. Pause, focus and the mixer in spel.dat

**Pause and quit dialog.** Keys in `0x0044cf90`: `P` sets `0x6fb8d8=1`, `Esc` sets 2 (not in game states 3 or 6). At the end of `handle_game`, `0x0044ca80`:

1. Read master volume: `0x004ce0d0(4)`.
2. Set it to 0: `0x004ce030(4, 0)`.
3. Pause game timers 0, 3, 11 and six AI timers.
4. Spin in `0x0044c990` (`P`: wait for P release, any key press and release) or `0x0044c9f0` (`Esc`: `J`/`Y` quits, `Esc`/`N` continues). Both loop on `GetAsyncKeyState` through `0x004c5e40` with no message pump.
5. Restart timers, restore volume with `0x004ce030(4, saved)`, reset frame timer `0x004a6840`.

**No DirectSound call is made.** All buffers keep playing and looping, muted through the system mixer, and music position advances during pause.

**Mixer (`Mixer.cpp`):** `0x004cdd80(device 4, kind 0)`. For each device:

| Call | Parameters |
|---|---|
| `mixerOpen(&h, i, 0,0,0)` | |
| `mixerGetLineInfoA(h, &line, 3)` | `cbStruct=0xA8`, `dwComponentType=4` |
| `mixerGetLineControlsA(h, &lc, 2)` | `cbStruct=0x18`, `dwControlType=0x50030001`, `cControls=1`, `cbmxctrl=0x94` |
| `mixerGetControlDetailsA(h, &d, 0)` | `cbStruct=0x18`, `cChannels=1`, `cbDetails=4` |
| `mixerSetControlDetails(h, &d, 0)` | single DWORD value |

- Bounds are read from `MIXERCONTROL` +0x64 and +0x68; setting outside them is fatal.
- Other `kind` values 0x50030003 and 0x50030002 exist in the table `0x5b6770` but only `kind` 0 is called.
- Device values accepted: 4, 7, 8, 0x1002..0x1005, 0x1008. Only 4 is used. The sole caller is `0x0044ca80`.
- With no device or no line, get returns -1 and set returns 10000: **no mute**, no failure.

**Focus.** `WM_ACTIVATEAPP` (`0x1c`, `0x004cd6b0`) stores the state in `0x740dfc`. `0x00458020` then blocks in `WaitMessage` until reactivated; on return it restores surfaces only. No sound call on focus loss or return. The frame clock `dt` is clamped to 0.1 s in `0x004a6800`.

**`Stopping all sounds`** (`0x00448160`) is only a log string. Stopping is in `0x004490a0`.

### 15. WAV inventory (header scan of every file in `extracted/game-archives` plus `menumsc.wav`)

All are PCM tag 1, with `data` at offset 36 and samples at offset 44.

| Archive | Channels/rate/bits | Files |
|---|---|---|
| rcs | 1/22050/8 | 229 |
| rcs | 1/44100/16 | 58 |
| rcs | 2/22050/16 | 35 |
| rcs | 1/22050/16 | 27 |
| rcs | 1/11025/8 | 22 |
| rcs | 1/8000/16 | 12 |
| rcs | 1/11025/16 | 10 |
| rcs | 1/8000/8 | 7 |
| rcs | 2/11025/8 | 3 |
| rcs | 2/22050/8 | 2 |
| rcs | 2/44100/16 | 1 |
| menurcs | 1/22050/16 | 85 |
| menurcs | 2/22050/16 | 3 |
| menurcs | 1/22050/8 | 1 |
| loose | 2/44100/16 (`menumsc.wav`) | 1 |

**Longest buffers:**

| Context | File | Seconds | Bytes |
|---|---|---|---|
| Race, longest | mobie2.wav | **124.96** | **2,755,455** |
| Race, longest non-music | dep.wav (`DEPARTURE`) | 8.32 | 91,696 |
| Race, largest non-music | usstatm, cmstatm, jpstatm (1/44100/16) | 5.47 | 482,772 |
| Race, speech | copalert.wav | 5.77 | 127,216 |
| Menu, music | menumsc.wav | **32.03** | **5,650,336** |
| Menu, voice longest | cti07_00.wav | 20.08 | 885,500 |

`opgev*`, `achter*`, `aan*` in `rcs` (up to 10.37 s) are not referenced by sound.ini or communi.ini.

### 16. menu.exe audio

**Classes:** `TSoundManager` (36 bytes, `D:\aCop\source\DirectSound.pas` for the raw calls), `TDaviSoundBuffer` (12 bytes), `TDaviWave` (60 bytes, `d:\entertainmentlib\DaviWave.pas`), created in `TData.DataCreate` `0x0047efb8` at +0xb0.

**DirectSound setup `0x0046bbec`:**

- `DirectSoundCreate(NULL)`.
- `CreateSoundBuffer` for a primary (`flags=1`) goes through `0x0046bb44`, which is skipped because flag `0x4ab06c` is still 0. **No primary buffer is created, no SetFormat.**
- `SetCooperativeLevel(hwnd, 1)` = DSSCL_NORMAL.
- Flag `0x4ab06c` = 1. If creation raised, the flag stays 0 and all play calls are no-ops.

**Secondary `0x0046bd3c`:** `dwFlags=0x80E0` = GLOBALFOCUS, CTRLVOLUME, CTRLPAN, CTRLFREQUENCY. Format pointer is the WAV's +0x14.

**Fill `0x0046bdc4`:** `Lock(0, size, ..., 0)`, copy both spans, `Unlock`.

**WAV parse `0x00454194`:** reads 0x2C bytes, checks `RIFF`, else "Geen geldig wave bestand.". Data size at +0x28, samples at +0x2C. Same fixed header as spel.dat.

**TSoundManager fields:** +0x04 current voice, +0x0c base dir, +0x10 music wave, +0x14 `MenuRcs` archive, +0x18 music buffer, +0x1c active list, +0x20 music loaded flag.

| Function | Behaviour |
|---|---|
| `0x004825f8` LoadMusic | `<dir>menumsc.wav` as a loose file, not from the archive. Missing logs "unable to load music" and leaves the flag 0 |
| `0x004820d0` StartMusic(vol) | new buffer, SetVolume, fill, **`Play(0,0,1)` looping** |
| `0x00482830` SetMusicVolume(vol) | SetVolume on the music buffer |
| `0x004823ac` PlayWaveFromFile(name, vol, setCurrent) | file `<dir><name>.WAV` if it exists, else `<name>.WAV` from `MenuRcs`. Missing logs "Unable to load:", no error |
| `0x004821f0` PlayWave(wave, vol, setCurrent) | purge finished, new buffer per play, fill, SetVolume, append to list, `Play(0,0,0)`; if setCurrent, stores as current |
| `0x00482770` purge | `GetStatus` on all active; not playing means remove and free |
| `0x00481f5c` / `0x00482950` StopCurrentSound | `Stop` and free the current voice |
| `0x00481e54` Destroy | `Stop` music, `Stop` and free all |
| `0x00480fcc` vol to dB | `clamp(-Trunc(10^(2 + (100-v)/100 * log10(40))), -4000, -100)`: v=100 -100, 90 -144, 75 -251, 50 -632, 25 -1590, 10 -2766, 0 -4000 |
| `0x00482a0c` wav length | `Trunc(fileLength(name.WAV) * WavTimeFactor / 1000000)`, `menu.ini [PARAMETERS] WavTimeFactor=25` (`0x00480b78`) |

IDirectSoundBuffer calls in menu.exe: `Lock`, `Unlock`, `Play`, `SetVolume`, `Stop`, `GetStatus`, `Release`. IDirectSound: `CreateSoundBuffer`, `SetCooperativeLevel`, `Release`. **No** `DuplicateSoundBuffer`, `SetFrequency`, `SetPan`, `GetCurrentPosition`.

**Music in the menu:** `0x004a5d70` StartUp, switch on byte `TMenuIni`+9. Value 0: intro movie (`0x004a50d0`, modal) then StartMusic. Value 1 or 2: StartMusic, then `0x0047f840` loads the player. When `0x004a5d4c` returns 2, no music and the exit path `0x0047ff64` runs instead. Volume is static `[DEFAULTSETTINGS] MUSICVOLUME`, then `0x0048af60` applies the player's music volume after loading their save. `menumsc.wav` is the only menu music. The only `Stop` on the music buffer is in Destroy (`0x004825e4`), so it keeps looping under all screens, including the final-win movie.

**PlayVoice `0x00480448`:** always StopCurrentSound, then PlayWaveFromFile with voices volume and setCurrent=1. A new voice cuts the previous one. `TGameMenuScreen.FormShow` (`0x0049e660`) also stops the current voice on every such screen.

**Name builders:** `0x00480584(p, n)` = `p_NN`, NN = Random(n). `0x0048063c(p, a)` = `pNN`, NN = a. `0x004806b0(p, a, n)` = `pAA_NN`, NN = Random(n). `0x00480b08` pads to 2 digits.

**Button sounds** (`TData`, embedded `TDaviWave`s, at FX volume, setCurrent=0):

| Handler (state) | Wave | Used by |
|---|---|---|
| `TData.BtnStateChange` `0x0047f7ec` (state 1) | `wavBtnDown` +0x54 | gdfBtnOkSingleDlg, gdfBtnNextSingle, TfrmPlayer gdfBtnDeletePlayer/defEmpty, TfrmCurrentChar gdfBtnChoose |
| `TData.CombinedBtnStateChange` `0x0047f804` (state 1; state 2 only repaints) | `wavBtnDown` | gdfBtnHelp, Close, Next, Previous, OkDlg, CancelDlg, NextItem, PreviousItem, CloseDlg, NoDlg, YesDlg; TfrmGarage gdfBtnBuyTU, Previous3, Next3; TfrmMainScreen gdfBtnInternet, Player, Options |
| `TData.gdfRadioBtnButtonStateChange` `0x0047f7d4` (state 1) | `wavRadioBtn` +0x90 | gdfRadioBtn, gdfCheckBox; TfrmDifficulty Easy/Medium/Hard; TfrmMainScreen Tour, QR; TfrmCloseDlg gdfBigRadioBtnMain, gdfRadioBtnExit |

| Embedded wave | DFM offset in resource | Format | Data bytes | Seconds |
|---|---|---|---|---|
| `wavBtnDown` (`start.wav`) | TDATA stream 39127 | 2/22050/16 | 4048 | 0.046 |
| `wavRadioBtn` (`start.wav`, identical bytes) | TDATA stream 70618 | 2/22050/16 | 4048 | 0.046 |
| `wavIrritatingAsHell` (`trin.wav`), TfrmOptions +0x2fc | TFRMOPTIONS stream 20431 | 1/22050/16 | 2590 | 0.059 |

**Other menu triggers:**

| Trigger | Sample | Volume | Function |
|---|---|---|---|
| sldrSound or sldrVoice OnChange | `wavIrritatingAsHell`, played before storing the new value | FX | `0x00495cc8`, `0x00495d1c` |
| sldrMusic OnChange | no sample, live SetMusicVolume | music | `0x00495c68` |
| btnCancel in Options | restores music, FX, voices | | `0x004956b4` |
| Help button | `cmh07_00` (Random(1)) | voice | `0x004891e0`, `0x0049e678` |
| High score dialog | `aud2` | voice | `0x00494f50` |
| Results screen | `aud2` | voice | `0x004a0624` |
| Current character | `aud3` | voice | `0x0049b4fc` |
| Track intro (`timClose` 3500 ms) | `NextTr` | voice | `0x0049fa34` |
| Garage, previous state 2 | `CGR07_0..2` or `CBR07_0..5` by flag | voice | `0x00499538` |
| Garage buy tune-up | `PEEP` | FX | `0x004991f4` |
| Character confirm (`timSelection` 2000 ms) | `CCS<char>_0/1` | voice | `0x0049aac4` |
| Track page (`tmrSound` 1500 ms, enabled in `0x00499d68`) | `CTI08_<track>` when track+0x5c > 0, else `CTI07_<track>` | voice | `0x0049a5c0` |
| Win normal | `CDW<char>_0/1`, then after 4500 ms `CDW07_<n>` | voice | `0x004a0218`, `0x004a03b0` |
| Lose normal | `CDL<char>_0/1`, then after 4500 ms `CDL07_<n>` | voice | `0x0049f50c`, `0x0049f6f8` |
| Qualify | `CDW<winner>_0/1`, the race winner's (`0x00480390(0)`), then after 4500 ms `CDQ07_<n>` | voice | `0x0049fe68`, `0x0049ff8c` |
| Win chase | `CDW05_<n>` | voice | `0x004a0dc8` |
| Lose chase | `CDL05_<n>` | voice | `0x004a10a8` |
| Final win | `CDW07_04`, then `CCW08_<char>`, then `CCW08_05`. Timer interval each = wav length ×1000 + 1500 ms | voice | `0x004a45b4`, `0x004a4444`, `0x004a455c` |
| Unlock | `unlock`, then `TfrmUnlock` | voice | `0x0049c705`, in a code gap |

`<n>` is player +0x14. Files present: `cdw07_00,02,04..08`, `cdl07_00,02,05..08`, `cdq07_00,02,05,07,08`, `cti07_00,02,05..08`, `cti08_01,03,04`, `cdw05_01,03`, `cdl05_01,03,04`. Other values log "Unable to load:" and stay silent, for example `CDW05_04`, `CDQ07_06`. `CFR07_00` and `CSS07_00..04` are in MenuRcs and named by nothing in `menu.exe` (byte scan).

**Video:** `TfrmIntro` plays `intro1.mpg` through MCI; a key other than 0x20 or a mouse press ends it (`0x004a4a78`, `0x004a4ad8`). `TfrmWinFinal` loops `ch<char>.avi`, silent, on `medWinnerNotify`.

**Microsoft Agent "Hunny":**

- Real, but **silent**. `TDaviAgent` is created in `TData.DataCreate` with name `hunny`, file `hunny.acs`, inside a try block ("Failed to create MS-Agent.").
- COM calls in the whole unit (all 11 call sites of `0x00472904`): vtable offsets +0x1c, +0x2c (load), +0x30, +0x34, +0x38, +0x3c, +0x84, +0x88. No other offset is called.
- The text goes to `TBalloonForm`, a Delphi form, not to Agent's balloon.
- `Hunny.acs` audio table at locator 4 (offset 177951) has **count 0**, and the file contains no `RIFF`.
- The only sound at help time is `cmh07_00.wav` through DirectSound, played by `btnHelpClick` before the agent shows. If the agent failed to create, `btnHelpClick` opens WinHelp instead.

### 17. Exact DirectSound and mixer surface called

| Interface | Offset | Method | spel.dat | menu.exe |
|---|---|---|---|---|
| module | | `DirectSoundCreate(NULL or GUID, &ds, NULL)` | yes | yes (NULL) |
| module | | `DirectSoundEnumerateA(cb, 0)` | yes | |
| IDirectSound | 0x08 | Release | yes | yes |
| | 0x0C | CreateSoundBuffer | yes | yes |
| | 0x14 | DuplicateSoundBuffer | yes | |
| | 0x18 | SetCooperativeLevel | 3 (EXCLUSIVE) | 1 (NORMAL) |
| IDirectSoundBuffer | 0x00 | QueryInterface | dead path only | |
| | 0x08 | Release | yes | yes |
| | 0x20 | GetFrequency | after SetFrequency(0) | |
| | 0x24 | GetStatus | bit 0, many times per frame | at each PlayWave |
| | 0x2C | Lock | flags 1, offset 0, whole buffer, once | flags 0, once |
| | 0x30 | Play | (0,0,0 or 1) | (0,0,0 or 1) |
| | 0x34 | SetCurrentPosition | (0) only, after Stop | |
| | 0x38 | SetFormat | primary only | |
| | 0x3C | SetVolume | -4000..-100 | -4000..-100 |
| | 0x40 | SetPan | -10000..10000 | |
| | 0x44 | SetFrequency | 0, 100..100000 | |
| | 0x48 | Stop | yes | yes |
| | 0x4C | Unlock | yes | yes |

**Never called in either module** (checked by listing all `CALL [reg+off]` in `0x004c6560..0x004c7ee0`, `0x0049e000..0x004a0300`, `0x0046ba00..0x0046bf00`, `0x00481c00..0x00482ac0`, and all references to the interface globals): GetCaps, **GetCurrentPosition**, GetFormat, GetVolume, GetPan, Initialize, Restore, position notifications, IDirectSound3DListener, IDirectSound3DBuffer methods, GetCaps on IDirectSound, SetSpeakerConfig.

**There is no play-position polling and no streaming.** Only `GetStatus` is polled, and only bit 0 is used.

Error behaviour: any failing call in spel.dat's buffer layer is fatal (`0x004c4150`) except `DirectSoundCreate` and `SetCooperativeLevel` (sound off) and primary create or `SetFormat` (next mode). `DSERR_BUFFERLOST` is not handled, since `Restore` is absent.

Sync dependencies on status:

| Code | Depends on |
|---|---|
| `0x0042f3e0` | Engine loops wait for the Start one-shot to report stopped |
| `0x0041c150` states 2,4,6,0xc,10,0x10,0x12,0x14,0x16,0x18 | Radio FSM waits for one-shots; communicator speech cannot start while a non-10 event is latched |
| `0x00427400`, `0x00425800` | Collision and damage samples skip when already playing |
| `0x00489d30` | Copalert loop restart |

`rand()` (`0x00558625`) is consumed inside audio paths: `0x0042f220` (1 or 2 per frame), `0x00427400`, `0x00425800`, `0x0043a5e0`, `0x0041c660`. Whether those paths run depends on status, so playback state feeds the game's RNG sequence.

---

## Inferred

**Sequence and data:**

- At race start, slots fill up: 68 preloaded files + 1 music + about 11 car samples (`rpm`, `stat`, 8 cylinders, `swgear`) = about 80 of 80. Every later new sample evicts. The port should expect regular evict-and-reload during a race, and a decode cache keyed by file name is worthwhile.
- Messages in the four categories without a sender literal (section 12) can never appear.
- `GO`/`go.wav` and the other unreferenced type names are unused data.
- `0x00408520` (event 4, roadblocks by its object setup) and `0x00465010` are unreachable, based on the byte scans only. A call through a computed address is not excluded.
- `CTI08_` is for chase tracks: `cti08` files exist only for tracks 1, 3, 4, the tracks with mode 1 in `[MAPS]`.
- `0x6c2f28` means fast-forward is active, from the script binding name.
- `0x0040d490` state numbers 9 and 0x19: the table in `0x0040c1f0` would make 9 `STATE_KILL_COP` if entries are in enum order, but that order was not verified. The port does not need it since the FSM is recompiled.
- `0x004230d0` and `0x00423210` mean "oncoming within 3 waypoints" and "player in front". The angle unit (0x1000 per turn) is read from the mask usage there. Note the rotation used for sound velocities has a separate 1024-unit table.
- `CM_KEYB_T` is the `T` key. The action name is all the evidence.
- Button `state` 1 means pressed. Name `wavBtnDown` is the evidence.
- Sign of pan: with `[8..10]` being the camera's forward axis, `x = f.z*d.x - f.x*d.z`, so a source to the right gives positive pan (right), as DirectSound defines it.
- Positions scaled by 0.1 are metres and object velocities (+0xbc, +0xc4) are m/s, because 340 is the speed of sound and player speed is `v*3.6` km/h.

**DirectSound behaviour the code assumes** (from DirectSound's documented behaviour, not visible in the binaries):

- `SetVolume(x)` is linear gain `10^(x/2000)`. -4000 is gain 0.01.
- `SetPan(p)`: p > 0 attenuates left by p/100 dB, p < 0 attenuates right, the other channel stays at 0 dB. Not an equal-power pan.
- `SetFrequency(0)` restores the file rate. `GetFrequency` then returns it.
- A non-looping buffer that ends: `GetStatus` drops bit 0 and the next `Play` starts at 0. spel.dat relies on this, since `0x004c7a10` never rewinds before `Play`.
- `Stop` keeps the position, hence the explicit `SetCurrentPosition(0)`.
- `DuplicateSoundBuffer` shares samples. The duplicate has its own cursor, status, volume, pan and frequency. Sample data must outlive `Release` of the original, because eviction can release the original while a duplicate plays.
- Duplicating a playing buffer gives a stopped duplicate at position 0.
- Without GLOBALFOCUS or STICKYFOCUS, spel.dat's buffers are silent while its window lacks focus, and their positions keep advancing. menu.exe's buffers have GLOBALFOCUS, so they keep sounding in the background.
- Mono to the stereo mix goes at equal level to both channels.

**Web Audio host design:**

- **Graph per playing buffer:** `AudioBufferSourceNode` → gain (volume) → split → L and R gains (pan) → merge → master → destination. `StereoPannerNode` has a different law. Set the entry gain to 2 channels, `explicit`, so mono upmixes equally.
- **`AudioBuffer`** at the file's rate: 8000, 11025, 22050, 44100 are all in the required range. Convert 8-bit unsigned with `(b-128)/128`, 16-bit with `s/32768`.
- **`Play`** creates a new source node. `SetFrequency` maps to `playbackRate = freq/fileRate`. Max in use: Car2 GearB +172% of 44100 clips to 100000, a rate of about 2.27.
- **`Lock` must hand back a pointer into wasm linear memory** for spel.dat, since `fread` writes through it. The sample buffer can be built at `Unlock`. Largest single Lock: 2,755,455 bytes in a race, 5,650,336 bytes in the menu.
- **`GetStatus` must be synchronous and cheap.** Track each voice with host-side position: integrate `elapsed * rate` at each `SetFrequency`. Do not rely on `onended` alone, since it arrives late.
- **Suspended `AudioContext`:** `currentTime` stops, so any time-based end check on it would leave one-shots "playing" forever. That would stall engine start (`0x0042f3e0`) and the radio FSM. Either resume before the first race call, or base status on wall-clock while suspended.
- **`SetVolume`, `SetPan`, `SetFrequency`** arrive at frame rate and right after `Play` in the same call. Apply immediately to avoid a first-buffer glitch. A short ramp is optional but alters nothing in the logic.
- **`DirectSoundEnumerateA`** may simply not invoke the callback, which selects the default path.
- **`GlobalMemoryStatus.dwTotalPhys`** must report over 17,000,000, or music is disabled.
- **Mixer:** implement one device whose speakers line has one volume control, bounds 0..65535. Map the value to a master gain. Without it the pause does not mute.
- **The pause spin loops** (`0x0044c990`, `0x0044c9f0`) never yield. Web Audio keeps running on its own thread regardless, so the muted buffers advance as in the original. How the host breaks these loops is a host-control question outside audio, but `GetAsyncKeyState` must change state during them.
- **Tab hidden or blur:** to mirror the original race behaviour, mute master (or suspend with host-side position kept). The game loop stops at `WaitMessage` in the original, so the JS host should stop calling frames too.
- **Menu in JS:** no IDirectSound layer needed. A small TSoundManager with the tables above is enough. No primary, one new voice per play.
- **Frame-rate dependence to keep in mind:** copalert level -7 per frame (`0x00489d30`), one `rand()` per frame in `0x0042f220`, and radio FSM steps per main-loop iteration. These change with render rate if the recompiled loop runs at display rate. Audio otherwise uses seconds or `GetTickCount`.

---

## Unknown

- Anything observed at runtime for spel.dat: real levels, how music and speech actually balance, whether any path stalls. spel.dat has never been seen running.
- Whether the looping of music files and engine samples is seamless: no audition done, sample data not inspected.
- Exact units and meaning of wheel values `0x004a2eb0` and `0x004a2e70` in the skid formula, and of the part flag at +0x25.
- Which of the tables `0x73b578` and `0x73b530` is sine or cosine.
- Which trigger types call `0x004578f0`, `0x00457900`, `0x00457910` (speed limits 50, 70, 100), and which track triggers call `0x00455cc0`..`0x00456470` per track. See the trigger research.
- What `0x5cec0c` measures in the copalert condition.
- Full semantics of communicator queue priorities and lifetimes. That logic is recompiled, so the host does not depend on it.
- `IAgentCtlCharacters`/`IAgentCtlCharacter` method names for the vtable offsets used in `TDaviAgent`. The port needs only the show, hide and position behaviour; the offsets are recorded in section 16. Reading them as Item, Load, put/get Left, put/get Top, Hide, Show matches the type library order from memory and was not checked against `AgtCtl15.tlb`.
- Agent idle animations in `hunny.acs` beyond Show and Hide: not analysed here. No audio either way.
- Audio content of `intro1.mpg` (MPEG layer, rate): only its presence was checked.
- Audible balance between `menumsc.wav` and voices or movies in the menu: the menu was only seen as far as the intro in `dynamic/RESULTS.md`.
