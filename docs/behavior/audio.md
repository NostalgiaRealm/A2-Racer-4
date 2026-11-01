# Audio

What the original game does with sound in the race (`spel.dat`) and in the menu (`menu.exe`), with the evidence, and how the port reproduces it. This is the audio part of [the original behaviour document](../original-behavior.md). Feature rows and their status are in [parity/audio.md](../parity/audio.md).

Addresses are image addresses in `spel.dat` unless `menu.exe` is named. A section sign refers to [research/audio.md](../research/audio.md), which has the detail; its names for fields and functions are its own. [Corrections to the research notes](#audio-corrections-to-the-research-notes) are at the end.

`original-game-decompiled/dynamic/RESULTS.md` has no `spel.dat` run. The reference runs under Wine have one, on a null ALSA device: the game's DirectSound object is there and its sound code ran, but nothing was audible and no sound was measured (`evidence/reference-wine/results.md`). So **Confirmed** below means read from the code or the shipped data. It never means heard or seen at run time.

"Same machine code" means the section's logic is recompiled from the original x86 into `public/game/spel.wasm`. That is a real argument for the logic. It does not cover three things: x87 maths runs on f64, not 80 bits; `GetTickCount`, `timeGetTime` and the frame clock are virtual; and the sound output itself is reimplemented on Web Audio.

## Audio: the checks named here

All ran on the final build on 2026-10-31, on etappe 0 (Amsterdam) in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan unless stated. Sound was checked by state only: node graphs, gains, decoded samples, analyser level. Nothing was judged by ear. No real phone or tablet, no real gamepad, no other browser engine, no slow real network. Other etappes have boot-all at most. No sound of the port was compared with sound of the original.

| Name | Tool | What it says about sound |
|---|---|---|
| check-flow | `tools/check-flow.mjs` | The real `GameAudio` in a browser, real clicks from the intro through a bot race at speed=8 to the results: no host fault, zero console errors or warnings. It asserts no sound. At speed=8 the virtual clock runs 8 times faster than the sound |
| check-race-ui | `tools/check-race-ui.mjs`, `evidence/race-ui/summary.json` | 76 of 76 pass. For sound: the context state on blur and focus, and with the settings panel open and closed; the master gain value; the virtual clock in a dialog; the keys Roepen and the pad's D-pad up send; the intro's pause in a hidden tab. It does not read an audio signal |
| repeat-trace | `tools/benchmark.mjs`, `tools/compare-traces.mjs`, `evidence/performance/final-*.json` | Checksums over every object with a physics body, 485 on Amsterdam, identical at all 71 samples at normal rendering, the mobile profile and 30 FPS. It compares the port with itself |
| boot-all | `tools/build-race-lists.mjs` | All 10 etappes with all 8 cars for 2 s in Node, with `audio: null`. Types register and files are read. Nothing plays |
| check-driving, check-traffic, run-bot | `tools/check-driving.mjs`, `tools/check-traffic.mjs`, `tools/run-bot.mjs` | `audio: null`: `GetStatus` always answers "not playing", so they exercise no sound path |
| form-check | per-form browser checks, `evidence/forms/` | Forms, navigation through the result branches, options persistence. It asserts no sound |
| fix checks | one-off scripts, not kept in `tools/` | Node stubs with the real COM layer, headless runs of the real `spel.wasm` on etappe 0, browser runs on Amsterdam. Cited below only for what they reported |
| launch check | One-off script, `fix check: launch through the menu, 6 s of gas, 0 console errors` | Track 9 with car 7 through the real menu in headless Chromium, 0 console errors. It checks no sound. The original has not been run with the updates |

## Audio: buffers and the DirectSound surface

**Original behaviour**

All race sound runs on one thread through ordinary secondary DirectSound buffers. There is no streaming, no play-position polling, no DirectSound 3D object and no CD audio.

| Item | Value |
|---|---|
| Cooperative level | `DSSCL_EXCLUSIVE` (3) |
| Primary format | mode 13, 44100 Hz 16-bit stereo, then lower modes on failure code 0x2AFA |
| Secondary flags | 0xE8: CTRLVOLUME, CTRLPAN, CTRLFREQUENCY, LOCSOFTWARE. No GLOBALFOCUS or STICKYFOCUS |
| Slots | `raser.ini [SOUND] BUFFERS` = 80, record 0x44 bytes |
| WAV load | fixed 44-byte header, samples from +44, from `rcs.IMG` first, then loose file |
| Lock | once per buffer, the whole buffer |
| Feedback | `GetStatus & 1` only |

Slot choice in `0x004c7a10`: a slot with that file name and not playing is reused. If it plays, a later non-playing slot with that name, else a free slot, else evict, then `DuplicateSoundBuffer` from the first slot. Unknown name: free slot, else evict, then load. Eviction `0x004c6fb0` takes the lowest priority among non-playing slots, calls `Stop` and `Release`, and lowers all other priorities by 1.

So several sources on one file run as one buffer plus duplicates, each with its own cursor, volume, pan and frequency. That covers AI engines on `hoog4.wav`, sirens on `psirene1.wav`, static objects such as `WATER` ×16 and `HELI` ×11, and the player's engine on CarType 0, 2, 3, 5 and 6, whose two layers name the same file (`0x0042e9b0` and `0x0042ea90` each create a new source).

**Evidence**

- `spel.dat` `0x004c71b0`, `0x004c6880`, `0x004c69c0`, `0x004c7880`, `0x004c7750`, `0x004c7a10`, `0x004c7c50`, `0x004c6fb0`, `0x004c6b90`, `0x004c6bd0`, `0x004c6c70`. `D:\Work\dxdraw\Sound.cpp` in the strings.
- Primary table `0x5b4b60`. Header scan of all 495 archive WAVs plus `menumsc.wav`: `data` at offset 36 in every file.
- [audio.md §2, §3, §15, §17](../research/audio.md).

**Status**

- Confirmed: all of the above, by reading code and data. Slot type +0x34 is never set to 1, so `0x004c6a90` (3D) is dead.
- Inferred: DirectSound's own behaviour, which the binary assumes: a duplicate shares samples but has its own state; the samples outlive `Release` of the original; a stopped buffer keeps its position; a finished one-shot drops bit 0. At race start the slots fill to about 80 of 80, so later samples evict.
- Unresolved: how often eviction happens in a real race. Nothing observed at run time.

**Where the port implements it**

- Slot table, allocation and eviction run as shipped in the recompiled code.
- The host supplies `installDirectX` in `source/host/directx.js` (IDirectSound and IDirectSoundBuffer, the exact methods of §17) and `GameAudio` in `source/audio/game-audio.js`. `Lock` hands out a pointer into wasm memory. `Unlock` calls `GameAudio.bufferFilled`, which builds an `AudioBuffer` at the file's rate through `decodePcm`. `Play` creates a new `AudioBufferSourceNode` in `GameAudio.play`.
- `DuplicateSoundBuffer` calls `GameAudio.duplicate`, which shares the `AudioBuffer` and clears the node fields the copied object brought along. `GameAudio.chain` then builds a private splitter, left gain, right gain and merger on first play. `GameAudio.releaseBuffer` disconnects that voice's merger only.
- `GetStatus` is `GameAudio.isPlaying`. It compares elapsed virtual time, scaled by the playback rate, with the buffer length. The virtual clock is `race.clock`, so what the game learns about its sounds depends on ticks alone. This is a port choice: see [port choices](#audio-port-choices).
- Archive bytes come from `SparseFile.read` in `source/host/game-files.js`. It returns complete data: see the music section.

**How it was compared with the original**

- check-flow runs this surface to the end of a race on Amsterdam with no host fault. That shows no missing method. It says nothing about the sound.
- repeat-trace gives identical checksums over all 485 objects with a physics body at all three rendering rates. Since `rand()` use in audio paths depends on status (§17), that supports the status design. It compares the port with itself.
- Fix checks, one-off scripts. Node stub with the real COM layer: separate nodes, per-voice volume, pan and rate, and releasing a duplicate or the first slot leaves the other voice reaching the output. Browser on Amsterdam: 12 voices playing, 3 of them duplicates, 12 distinct gain and merge nodes, different gains and rates on voices of one file.
- No comparison with real DirectSound was run.

## Audio: sound types, sources and groups

**Original behaviour**

`sound.ini` lists groups and types. The library makes one static source per type at init, and objects make further sources.

| Group | Mask | Types | Volume key |
|---|---|---|---|
| `ENVIRONMENT` | 1 | 43 | `SFXVOLUME` |
| `MOTOR` | 2 | 29 | `SFXVOLUME` |
| `GENERAL` | 4 | 96 | `SFXVOLUME` |
| `COPS` | 8 | 12 | `POLICEVOLUME` |
| `MUSIC` | 0x10 | 13 | `MUSICVOLUME` |
| `BONUS` | 0x20 | 0 | none, no type uses it |

- 193 types, 180 distinct WAVs. 70 types have `Preload=1` (68 distinct WAVs). Limits: 2000 sources, 450 types.
- Type line: `Name,file.wav,Preload,LocalVolume,Range,Doppler,GROUP`. Local volume 0..100, range 0..4000, doppler 0..100. A missing file asserts.
- Added at run time: 151 `communi.ini [SAMPLES]` with the parameters of `COMMUNICATOR_SOUND`, and 41 per-racer `CCO`, `CPA`, `CBP` files with those of `RACER_COLLISION` and `POSITION_SWITCH`. Total 385 of 450.
- A group volume reaches only sources that exist at the call (`0x0049ff90`). New sources start at premaster 100 until the next group call.
- Unused by any code or placed object: `GO`, `PAAL_HIT_GROUND`, `TICK`, 7 `M_*` entries, the `HIGH*`, `HOOG5`, `MED1`, `LOW1`, `STEADY1`, `GCL8`, `START1..8`, `LOOP3`, `LOOP8H`, `LOOP8M`, `LOOP9M`, `LOOP11`, `LOOPMIX`, `VLIEGD`, `CAR_START` entries, `vc1..8` and all `jp*`. `SWITCH_GEAR` is loaded and stopped but never played. 22 `ENVIRONMENT` types load at race start but no `.omp` row names them, `TICK` among them. On disc 1.01 that was 26: since the track update `etappe9.omp` names `OWL`, `DOG`, `CLOCK` and `HORSE`.

**Evidence**

- `sound.ini`, byte-identical in `public/assets/game/`. `spel.dat` `0x004506e0`, `0x0049f880`, `0x0049ff60`, `0x0049fac0`, `0x0049fc40`, `0x0049eba0`, `0x0049ff90`, `0x0048ae80`, `0x0041bde0`.
- Scan of `spel.dat`, `bonus.dso`, `raser.ini`, `car_cfg.ini`, the `[Car0]`..`[Car6]` and `[Car42]` sections and all ten `.omp` files.
- [audio.md §4, §6](../research/audio.md).

**Status**

- Confirmed: the table, the counts, the capacity limits, the group behaviour.
- Inferred: unreferenced type names are unused data. A call through a computed address is not excluded by a literal scan.
- Unresolved: nothing else here.

**Where the port implements it**

Runs as shipped in the recompiled code. The host supplies `GetPrivateProfile*` in `source/host/win32.js` on the INI files of `source/host/vfs.js`, and the archive read.

**How it was compared with the original**

boot-all booted all 10 etappes with all 8 cars for 2 s with no audio backend, which runs the type registration and reads every preload from the archive. Same machine code, same data. Nothing played, so no comparison of sound was run.

## Audio: volume and pan laws

**Original behaviour**

Integer arithmetic with C truncation:

| Quantity | Formula | Function |
|---|---|---|
| Effective volume | `((((vol*local)/100)*premaster)/100*master)/100`, master is always 100 | `0x0049e660` |
| dB | `((v-100)*3900)/100 - 100` | `0x0049e370` |
| Pan | `sign(x)*10^(2*abs(x)+2)`, truncated, clip ±10000 | `0x0049e750` |

| v | dB value | | abs(x) | Pan |
|---|---|---|---|---|
| 100 | -100 | | 0 | ±100 |
| 90 | -490 | | 0.25 | ±316 |
| 75 | -1075 | | 0.5 | ±1000 |
| 50 | -2050 | | 1 | ±10000 |
| 25 | -3025 | | | |
| 0 | -4000 | | | |

Volume 0 is -40 dB, not silence. Nothing above -100 is ever set, so full volume is -1 dB. Out-of-range values assert.

DirectSound then turns these into gains: `SetVolume(x)` is `10^(x/2000)`. `SetPan(p)` lowers one channel by `|p|/100` dB and leaves the other at 0 dB. It is not an equal-power pan. Mono goes to both channels at equal level.

**Evidence**

- `spel.dat` `0x0049e660`, `0x0049e370`, `0x0049e750`; pan constants `0x5771a8` and `0x57635c`; `0x004a01a0`.
- [audio.md §5.2, §5.3, Inferred](../research/audio.md).

**Status**

- Confirmed: the formulas and constants.
- Inferred: the DirectSound gain and pan laws. They come from DirectSound's documentation and are not visible in the binary.
- Unresolved: real levels, and the balance between music and speech. Never observed.

**Where the port implements it**

The formulas run as shipped in the recompiled code. The host side is `GameAudio.applyGains` in `source/audio/game-audio.js`: one left gain and one right gain per buffer, after a splitter for stereo files. The left gain is `10^(volume/2000)`, times `10^(-pan/2000)` for a positive pan; the right gain mirrors it. `StereoPannerNode` is not used because its law differs.

**How it was compared with the original**

Same machine code for the formulas. The gain mapping was read against the documented law. No level was measured against the original. The fix check on voices (see the buffers section) shows separate gain values per voice, not that the values are right. Recorded as "same volume and pan laws" in [intentional-differences.md](../intentional-differences.md), which is a claim about the formula, not a measurement.

## Audio: 3D listener and attenuation

**Original behaviour**

Positional sound is manual. The library computes volume, pan and frequency for ordinary buffers. The script names `InitSound3D` and `PlaySound3D` mean only this path.

```
d = pos - listenerPos ;  dist = |d|           ; world coordinates times 0.1
if range <= dist: if playing, stop; return
if not playing: play(loop)
volume = clip(100 - ((int)dist * 100) / range, 0, 100)
x = dir.z*axis.x - axis.z*dir.x
pan = sign(x) * 10^(2*|x| + 2), clip ±10000
pitch% = (int)(-(dot(sourceVel - listenerVel, dir)) / 340.0 * doppler)
```

- Listener, `0x004509b0`, once per main-loop pass from `0x0044cb80`, right after cameras: the matrix at `camera+0x14`, elements [8..10] negated are the axis, [12..14] times 0.1 the position. Velocity is the **player car's** velocity, not the camera's, y = 0.
- A stopped one-shot is restarted by the same call, so calling it each pass with `loop=0` retriggers a sound when it ends. `0_ORGL1`, the barrel organ, relies on this.
- No timer or thread: all updates come from object handlers, the AI and the listener call, once per pass.

**Evidence**

- `spel.dat` `0x0049e890`, `0x0049e7d0`, `0x0049e750`, `0x0049e6f0`, `0x004509b0`, `0x00450b30`, `0x00450c90`.
- [audio.md §5.3](../research/audio.md).

**Status**

- Confirmed: the code above.
- Inferred: positions times 0.1 are metres and velocities are m/s, because 340 is the speed of sound. A source to the right gives positive pan.
- Unresolved: which of the tables `0x73b578`, `0x73b530` is sine or cosine.

**Where the port implements it**

Runs as shipped in the recompiled code. The host supplies `SetVolume`, `SetPan`, `SetFrequency` and `GetStatus` in `source/host/directx.js`. Each source of a file has its own gains and rate, so two sources of one file in range keep their own volume and pan. Listener and sources update 60 times a second under the fixed tick (`TICK_SECONDS` in `source/race-runner.js`).

**How it was compared with the original**

Same machine code for the formulas. x87 on f64 can change `pow` and `sqrt` in the last bits, before truncation to an integer. No comparison with the original was run, and no check asserts a positional volume against an expected value.

## Audio: frequency changes and doppler

**Original behaviour**

- Play sequence `0x0049e4b0`, on one call stack: volume, `Play`, owner, `SetFrequency(0)`, `GetFrequency` as the original frequency, `SetPan`, `SetFrequency(original + original*pitch/100)`.
- Pitch percent from three places: engine rows (per car and gear, section below), skid (`i*4-4`), doppler (`340.0` at `0x5771a4`, doppler amount from `sound.ini`).
- Clip 100..100000 (`0x004a01a0`). `0x004c7460` is fatal outside that range unless the value is 0.
- Highest reachable: `[Car6]` GearA gear 4, +170% of 44100 Hz, which clips to 100000, a rate of about 2.27. `[Car2]` GearB gear 4 (+160%) and `[Car3]`, `[Car5]` GearA gear 0 (+130%) clip as well.

**Evidence**

- `spel.dat` `0x0049e4b0`, `0x0049e3f0`, `0x0049e6f0`, `0x004c7460`, `0x004c7520`. `car_snd.ini`, rows read only for g < NrGears by `0x0042e9b0`.
- [audio.md §5.1, §5.2, §5.3](../research/audio.md).

**Status**

- Confirmed: the sequence, the formulas and the pitch rows.
- Inferred: `SetFrequency(0)` restores the file rate, and `GetFrequency` then returns it. From DirectSound's documentation.
- Unresolved: nothing else here.

**Where the port implements it**

Formulas run as shipped in the recompiled code. Host: `SetFrequency` and `GetFrequency` in `source/host/directx.js`, `GameAudio.setFrequency` in `source/audio/game-audio.js`, which sets `playbackRate = freq / fileRate` and integrates the virtual position at each change. Resampling quality differs from DirectSound's software mixer: recorded in [intentional-differences.md](../intentional-differences.md).

**How it was compared with the original**

Same machine code for the numbers. The fix check on voices reports different rates on voices of one file. Pitch was not heard or measured against the original. No comparison was run.

## Audio: music selection and looping in a race

**Original behaviour**

- List: `raser.ini [MUSIC]`, 0 `M_DISCO1`, 1 `M_MOBIE1`, 2 `M_EIGHTY1`, 3 `M_FUNKY1`, 4 `M_MOBIE2`, 5 `M_REVENGE1`, `COUNT=6`, installed `LAST=2`.
- Selection is round robin across races: `idx = LAST+1`, replaced by 0 when below 0 or at or above `COUNT`, written back at once. `LAST=-5` and `LAST=99` both give `M_DISCO1`. The first race after installing plays `M_FUNKY1`.
- The per-track index in `[MAPS]` argument 9 is stored at `0x6fa610` and never read.
- Start at the end of `InitSndFxEngine`, before cars and tracks load, if `MUSICVOLUME > 0` and total RAM is over 17,000,000 bytes. Below that memory, `MUSICVOLUME` is forced to 0. At volume 0 the file is not loaded.
- The whole file sits in one buffer, looped with `DSBPLAY_LOOPING`. No streaming, no track change during a race. Stop at exit, `0x00450e70`.
- The C runtime reads a music file as a 512-byte fill for the header, a seek, one direct read of N × 512 bytes, then a 512-byte fill for the tail. For `mobie2.wav`: `[74978278,512]`, `[74978322,2755072]`, `[77733394,512]`.

| Type | File | Bytes | Seconds |
|---|---|---|---|
| `M_MOBIE2` | mobie2.wav | 2,755,455 | 124.96 |
| `M_MOBIE1` | mobie1.wav | 2,721,919 | 123.44 |
| `M_REVENGE1` | revenge1.wav | 2,245,944 | 101.86 |
| `M_FUNKY1` | funky1.wav | 2,095,095 | 95.02 |
| `M_EIGHTY1` | eighty1.wav | 1,707,247 | 77.43 |
| `M_DISCO1` | disco1.wav | 1,512,415 | 68.59 |

All 22050 Hz 8-bit mono.

**Evidence**

- `spel.dat` `0x0044ad40` (strings at `0x5a0960`, `0x5a09c8`, `0x5a0a38`; called once per boot from `0x004492c0`, from `0x0044c200`), `0x00450de0`, `0x00450950`, `0x00450e70`, `0x0044a9c5`. `raser.ini`.
- Read pattern: `0x0055a06b` (fseek) sets the stream's buffer to 512 bytes and `0x0055fb61` restores 4096 after its fill; the offsets above were logged from a headless run.
- [audio.md §9](../research/audio.md). [startup-flow.md, consequences for the port](../research/startup-flow.md).

**Status**

- Confirmed: all of the above, except the seam.
- Inferred: nothing else.
- Unresolved: whether the loop is seamless. The sample data was not inspected and nothing was auditioned.

**Where the port implements it**

- Selection and start run as shipped in the recompiled code. The host supplies `GlobalMemoryStatus` (`dwTotalPhys` 256 MB, `source/host/win32.js`), `WritePrivateProfileStringA` (`source/host/win32.js` on `source/host/vfs.js`), and persistence in IndexedDB (`source/host/persist.js`), so `LAST` survives a restart.
- Download: `GameFiles.raceMusic` in `source/host/game-files.js` works out the track this boot will choose, as `0x0044ad40` does, and `GameFiles.prepareRace` waits for it through the `music` map of `public/assets/game/race-files.json`. That adds 1.5 to 2.76 MB per race, and the other five tracks are not downloaded for that race. `tools/build-race-lists.mjs` keeps the six tracks out of `common` and `late`.
- Read: `SparseFile.read` fetches every unknown gap synchronously, so a read comes back complete. A read above 4096 bytes counts as wanted in full. A read of 4096 or less counts only up to the end of the member it starts in; only the part past that end can stay zero, and the game never looks at it, because each member is opened with a seek that drops the buffer. A miss takes the rest of the member in one request. `syncRange` throws on an HTTP error and takes the right slice from a server that ignores Range; one-off stub checks cover both.
- Looping: `AudioBufferSourceNode.loop` over the whole buffer in `GameAudio.play`.

**How it was compared with the original**

- Same machine code for selection. boot-all always starts from the installed `LAST=2`, so it only ever loads `M_FUNKY1`.
- Fix checks, one-off scripts. Headless real `spel.wasm` on etappe 0 with `LAST` = -5, 0, 1, 2, 3, 4, 5, 99: the predicted track is the one loaded, with 0 samples different from the archive member. Three races in a row, headless: `M_FUNKY1`, `M_MOBIE2`, `M_REVENGE1`, each fetching only its own track. Browser on Amsterdam with the late download held back: `LAST=3` with the music list stripped gives 1 synchronous request of 2,755,556 bytes; with the lists and a throttled track the race waits for it, 0 misses; `LAST=0` and `LAST=5` give `M_MOBIE1` and `M_DISCO1`, 0 misses. Each browser run had the same FNV hash as the member.
- The sample comparison is the test that counts. With the earlier read code put back, 2,492,517 of 2,755,455 samples differed, the first at sample 262,100 (11.89 s), while the trailing run of zero bytes was 0. A test for a zero tail alone would not see that fault.
- No kept check asserts which track plays, that `LAST` survives a browser restart, or the loop. No comparison with the original was run.

## Audio: engine sounds

**Original behaviour**

The player only. AI cars have one positional loop (see sirens and moving world sounds). One `[Car<CarType>]` section of `car_snd.ini` per race. CarType is `car_cfg.ini` field 5 of the player's vehicle.

| `CAR` | Character | Section | GearA | GearB | Stat | Cylinders | Start |
|---|---|---|---|---|---|---|---|
| 0 | Edgar de Flits | Car0 | `cmrpm` | `cmrpm` | `cmstat` | `cmC1..8` | `cmstart` |
| 1 | Tommie 'El Niño' | Car1 | `cvrpm` | `cvrpmhm` | `cvstat` | `cvC1..8` | `cvstart` |
| 2 | James Brons | Car5 | `vrpm` | `vstat` | `vrpm` | none | `vstart` |
| 3 | Katharina 'Kat' | Car3 | `vrpm` | `vstat` | `vrpm` | none | `vstart` |
| 4 | Barbarally | Car4 | `cvrpm` | `cvrpmhm` | `cvstat` | `cvC1..8` | `cvstart` |
| 5 | D.T. Harry | Car2 | `usrpm` | `usrpm` | `usstat` | `UsC1..8` | `usstart` |
| 6 | politie-auto | Car6 | `vrpm` | `vstat` | `vstat` | none | `vstart` |
| 7 | De Schaduw | Car42 | `cvrpm` | `cvrpmhm` | `cvstat` | `cvC1..8` | `cvstart` |

- `MaxSpeedGear0..4` = 25, 45, 75, 120, 200 km/h in all. Car6 has NrGears 6 and no `MaxSpeedGear5`, so `f` clamps to 0 above 200. Rows numbered at or above NrGears, such as `GearB5` in `[Car2]`, are never read.
- Update `0x0042f3e0`: **sound depends only on speed**, not RPM, gear or throttle. Speed is `(int)(localVel.z*3.6)`, so reverse clamps `f` to 0. Loops wait until the Start one-shot reports stopped. Each layer takes `pitch = minPitch + (int)((maxPitch-minPitch)*f)` and `volume = minVol + (int)((maxVol-minVol)*f)` from its row.
- Cylinder pops: interval `(minMs + (int)((maxMs-minMs)*f))` ms on the frame clock, random sample of 8, one or two `rand()` per pass. Rows `Cyl0..4` = 300/180/83/60, 250/150/78/60, 250/100/72/55, 200/50/70/50, 200/50/65/45.
- `SWITCH_GEAR` is loaded and stopped, never played. `[Car7]`..`[Car21]` use an older grammar and would assert. `[Car42]`, with CarType 42 in `car_cfg.ini` row 7, comes with the car update and has the same keys and values as `[Car1]`.

**Evidence**

- `spel.dat` `0x0042eea0`, `0x0042e9b0`, `0x0042ea90`, `0x0042f3e0`, `0x0042f120`, `0x0042f220`, `0x0042f3b0`, `0x0042f370`, `0x0042f0a0`, caller `0x0044ecc5`. `car_snd.ini`, `car_cfg.ini`. Character mapping: `static.ini`.
- [audio.md §7, §13.1](../research/audio.md). Full rows of pitch and volume there.

**Status**

- Confirmed: the data, the update and the fact that a1 and a2 are ignored. The Start wait depends on status.
- Inferred: nothing else.
- Unresolved: how it sounds, including the loop seams.

**Where the port implements it**

Runs as shipped in the recompiled code. The host supplies status (virtual clock, so a suspended context cannot stall the wait for Start) and the three loops. `GameFiles.prepareRace` loads the car's samples through the `car` sets of `race-files.json`. On CarType 0, 2, 3, 5 and 6 the two layers on one file have separate gains and rates, as duplicates have.

**How it was compared with the original**

Same machine code for the update. check-driving, which measures speed, has no audio backend. boot-all runs each car's section through the loader, `[Car42]` included. The launch check ran car 7 and checked no sound. The fix check on voices covers separate gains in general, not a named car. The engine sound was not heard or compared with the original.

## Audio: skids, turbo and horns

**Original behaviour**

| Sound | Type, file | Rule | Function |
|---|---|---|---|
| Skid | `SLIP`, slipl1.wav | Player only, each pass. Needs `SFXVOLUME != 0`. Intensity `i` 0..10 from local velocity and wheel contact. `i < 1`: stop. Else loop, volume `min(i*5+60,100)`, pitch `i*4-4` | `0x0044e790`, `0x0044ed1e` |
| Turbo | `TURBO`, turbo04a.wav | Input `CarTurbo`, game state 0. One pass per 100 ms on `GetTickCount`. Needs fuel `0x6fba74 > 0`. One-shot once per press. Release stops it. With script `FastForward` the flag `0x6c2f28` runs it with no key and no fuel use | `0x0044e970` |
| Claxon | `HORN2`, Horn002.wav | Input `CarHorn` held: non-positional one-shot, retriggered | `0x0046f050` |
| Traffic horn | `TOETER`, horn003.wav | One global source. A traffic car takes it when the player approaches head-on within 3 waypoints or is just ahead, and no other car holds it. Positional loop on that car, then its own engine returns | `0x00414950`, `0x004230d0`, `0x00423210`, `0x00413f00` |

`CarHandbrake` makes no sound: it sets a flag.

**Evidence**

- `spel.dat` as in the table. `sound.ini`.
- [audio.md §8, §13.1, §13.3](../research/audio.md).

**Status**

- Confirmed: the rules above.
- Inferred: `0x6c2f28` means fast-forward is active, from the script binding name. `0x004230d0` and `0x00423210` mean oncoming and player in front.
- Unresolved: units of the wheel values `0x004a2eb0`, `0x004a2e70` in the skid formula.

**Where the port implements it**

Runs as shipped in the recompiled code. Input comes from `source/input/keyboard.js`, `source/input/touch.js` (Claxon, Turbo) and `source/input/gamepad.js` (Y, X). The host supplies `GetTickCount` on the virtual clock and the buffers.

**How it was compared with the original**

Same machine code. check-race-ui presses turbo while steering on the touch wheel and asserts the car's state, not the sound. No comparison of sound was run.

## Audio: collisions and damage

**Original behaviour**

`0x00426fe0` (from the player `0x0044fe70`, from AI `0x0041a5b0`) calls `0x00427400(car, impulse, chunkFlag)`. `min` and `max` are the car's impulse thresholds from `damage.ini`: racers 70000/90000, as player 50000/90000, Supercop 260000/270000.

| Condition | Type | Mode |
|---|---|---|
| Within 300 ms of the last hit, `impulse < min/3`, other object `chunk*`, player only | `SCHUUR` | non-positional, in addition to the row below |
| `impulse < min` | `SOFT_CAR_HIT1/2`, `rand()&1` | positional one-shot at the car, skipped if playing |
| `impulse < min + (min+max)*0.5` | `MID_CAR_HIT1/2` | same |
| else | `HARD_CAR_HIT1/2` | same |
| Part detaches | `DAMAGE_GLASS`, `DOP`, `GLASS2`, `METALBAR`, `rand()&3` | positional at the car, skipped if playing |

`0x0044fca3` and `0x0044fd22`, older collision code with thresholds 18000 and 25000, have no caller.

**Evidence**

- `spel.dat` `0x00427400`, `0x004273d0`, `0x00426fe0`, `0x00425850`, `0x00425800`, `0x00426bb0`. `damage.ini [Damage Models]`.
- [audio.md §13.2](../research/audio.md).

**Status**

- Confirmed: the table.
- Inferred: nothing else.
- Unresolved: nothing else.

**Where the port implements it**

Runs as shipped in the recompiled code, including `rand()`. Collision impulses come from the recompiled Ipion physics. `GetTickCount` is virtual. The host supplies status and buffers.

**How it was compared with the original**

Same machine code. Impulses can differ in the last bits (f64), so a hit very close to a threshold might pick another row. check-flow's bot race on Amsterdam ran with no host fault; nothing asserts which sample played. check-driving's wall hit has no audio backend. No comparison with the original was run.

## Audio: sirens and moving world sounds

**Original behaviour**

All positional loops, updated each pass by the object's handler.

| Object | Created in | Type | Range | Where |
|---|---|---|---|---|
| Road cops | `0x00423a50` | `POLITIE_SIRENE`, psirene1.wav, 1.16 s, volume 90 | 200 | `0x0040d490` every FSM update; stops on FSM state 9 or 0x19; `0x00413520` on path end |
| Supercop | `0x0041e450` | `POLITIE_SIRENE` | 200 | Etappe 1, 3, 4 |
| Path cop | `0x004636c0` | `POLITIE_SIRENE` | 200 | path types 2, 8: none shipped |
| Racers (AI) | `0x0042a3d0` | `HOOG4` from `car_cfg.ini`, volume 80 | 50 | every race with opponents |
| Traffic | `0x0042a3d0`, `0x004658e0` | `HOOG4`, `LOOP8`, `LOOP12`, `TOEREN1` per `[traffic]` row | 50 | `0x004161d0` |
| Path traffic | `0x004666c0`, `0x00466db0` | `HOOG4` | 50 | path type 6: etappe 1, 8 |
| Helicopter | `0x00463a60` | `HELI` | 750 | etappe 4 ×2, 7 ×1, 9 ×1 |
| Plane | `0x004654b0` | `PLANE` | 1000 | etappe 3 ×1, 4 ×2, 6 ×1 |
| Train | `0x00466290` | `TRAIN` | 500 | etappe 4 ×2, 6 ×1, 8 ×2, 9 ×2 |

`0x00465010` (`pth_pcop.cpp`) also creates a car with a sound source, but no pointer or call reaches it.

**Evidence**

- `spel.dat` as in the table. `car_cfg.ini`, `sound.ini`. Path counts: [game-content.md §2.5](../research/game-content.md), [gameplay-systems.md §15](../research/gameplay-systems.md); etappe 9 from a parse of `etappe9.pth`, since the track update.
- [audio.md §13.3](../research/audio.md).

**Status**

- Confirmed: the table.
- Inferred: `0x0040d490` state numbers 9 and 0x19 as kill and similar states. `0x00465010` unreachable, from byte scans only.
- Unresolved: nothing else.

**Where the port implements it**

Runs as shipped in the recompiled code. This is where per-voice chains matter most: several cops or AI cars in range run on one file, each with its own volume and pan, and releasing one, for example by eviction, leaves the others playing. `HOOG4` and `POLITIE_SIRENE` load before the race (`common` in `race-files.json`). `LOOP8`, `LOOP12` and `TOEREN1` load on first play from the `late` set.

**How it was compared with the original**

Same machine code for triggers and positions. run-bot has no audio backend. The fix check on voices reports 3 duplicates among 12 voices on Amsterdam without naming them. No check asserts a siren. Not compared with the original.

## Audio: ambient sounds and scripted objects

**Original behaviour**

Static objects, `.omp` type 1 (`0x00454170`, handler `0x004535d0`): the field at record +0x40 is a `sound.ini` **type index**, looped positionally.

| Etappe | Name | Type-1 objects |
|---|---|---|
| 0 | Amsterdam | `BAR`, `BIRD`, `DEPARTURE`, `PIGEON`, `STPAUL`, `ROADWORKS2`, one each |
| 4 | Berlijn | `WATER` ×16 |
| 8 | Munchen - Wenen | `HELI` ×11, `ALARM`, `BIGBEN`, `BIRD` ×6, `COW` ×3, `CRIK` ×3, `DUCK` ×2, `STPAUL`, `WATER` ×2, `TRUCK` ×2 |
| 9 | Country etappe | `CRIK` ×8, `OWL` ×6, `BIRD` ×5, `DOG` ×3, `CLOCK`, `HORSE`, `ROADWORKS2`, `WATER` |
| others | | none |

Hit-once objects (callback `0x004544c0` sets state 1, handler plays once): `PION_HIT_CAR` from `Tob_piln` (`.omp` type 2, on all ten etappes) and `Tob_pap` (type 22, only on etappe 9 ×5, since the track update). `PAAL_HIT_CAR` from `Tob_wrkb` (type 3, etappe 2, 3, 4, 6, 9), `Tob_flts` (type 7, etappe 0, 1, 2, 3, 4, 7, 8, 9), `Tob_wlmp` (type 6) and `tob_wplb` (type 8), both not placed.

Script objects in `bonus.dso`:

| Object | Sound | Rule | Placed on etappe |
|---|---|---|---|
| `B_phon` | `TELEFOON` | once on revive | 0 ×2, 1 ×1, 2 ×3, 7 ×3 |
| `B_crat1` | `KRATTEN` | once on revive | 0 ×3, 1 ×2, 2 ×7, 3 ×7, 4 ×4, 5 ×12, 7 ×9 |
| `B_OIL1` | `OLIEVATEN` | once on revive | 0 ×3, 1 ×6, 2 ×3, 4 ×2, 5 ×8, 6 ×2, 7 ×2 |
| `B_HALT1` | `BUSHALTE` | once on revive | 0 ×6, 1 ×8, 2 ×2, 4 ×4, 7 ×1 |
| `0_ORGL1` | `DRAAIORGEL` | `PlaySound3D(0)` every pass, stops being fed on revive (`DeleteSound3D`) | 0 ×1 |

**Evidence**

- `.omp` parse of all ten files (record 68 bytes, `0x004aead0`): on the first nine it reproduces the table of §13.4. `etappe9.omp` since the track update.
- `spel.dat` `0x00454170`, `0x004535d0`, `0x004544c0`, `0x00475690`, `0x00475750`, `0x004757c0`. `bonus.pseudo.txt`.
- [audio.md §13.4, §13.5](../research/audio.md).

**Status**

- Confirmed: placement, indices, script handlers.
- Inferred: nothing else.
- Unresolved: when "revive" fires for a scripted object. See [gameplay-systems.md](../research/gameplay-systems.md).

**Where the port implements it**

Runs as shipped in the recompiled code and the script interpreter inside it. `bonus.dso` is unchanged. The host supplies status: the organ's retrigger follows the virtual clock. All these types load before the race (`common` in `race-files.json`).

**How it was compared with the original**

Same machine code and data. Amsterdam was driven by the bot in check-flow. Nothing asserts that these objects sounded. Other etappes have boot-all at most. Not compared with the original.

## Audio: pickups and race event sounds

**Original behaviour**

All non-positional one-shots.

| Trigger | Type, file | Function |
|---|---|---|
| Race start action | `START_ENGINES`, vstart2.wav, 5.19 s | `0x0043c380` |
| Same action | `[CarN] Start` | `0x0042f0a0` |
| Finish | `FINISH_JUICHEN`, juich.wav | `0x0043ab70` |
| Chase timer under 6 s, once per second, track mode 1 | `TIME_TICK`, tick.wav | `0x0044c8c0` |
| Checkpoint, track mode 1 only; in normal mode `0x00457d20` is silent | `CHECKPOINT`, checkp.wav | `0x00457da0` |
| Speed trap above 50, 70 or 100 | `FLITS`, flits.wav | `0x00457880` |
| Repair trigger | `REPAIR`, repair.wav | `0x00457c00` |
| Score digit step | `SUNNIES`, sunnies.wav | `0x004917b0` |

| Pickup script | Type | File |
|---|---|---|
| `pw_fastf` | `PW_FAST` | Fastfor.wav |
| `pw_stop` | `PW_FREEZ` | wakkah6.wav |
| `pw_godm` | `PW_INV` | wauwkuh1.wav |
| `pw_1pts` | `PW_1PT` | wakkah4.wav |
| `pw_5pts` | `PW_5PTS` | wakkah1.wav |
| `pw_10pts` | `PW_10PTS` | wakkah5.wav |
| `pw_turbs` | `PW_TURBS` | wakkah2.wav |
| `pw_turbb` | `PW_TURBB` | wakkah3.wav |
| `pw_reps` | `PW_REPS` | wauwkuh3.wav |
| `pw_repb` | `PW_REPB` | wauwkuh2.wav |

**Evidence**

- `spel.dat` as in the table. `bonus.pseudo.txt` lines with `PlaySample`, binding `0x00474500` to `0x00450950`.
- [audio.md §13.1, §13.5](../research/audio.md).

**Status**

- Confirmed: the tables.
- Inferred: nothing else.
- Unresolved: which trigger types call `0x004578f0`, `0x00457900`, `0x00457910`. See the trigger research.

**Where the port implements it**

Runs as shipped in the recompiled code and script. The `PW_*` and `SUNNIES` files are only in the `late` set of `race-files.json`, as are `HORN2` and all speech. `GameFiles.fetchLate` fetches that set in the background, in pieces of 1 MB; a first play takes one synchronous request inside the tick only if its piece has not arrived. The other event files are in `common`.

**How it was compared with the original**

Same machine code and script. check-flow reaches the finish on Amsterdam, but no check asserts these sounds. Not compared with the original.

## Audio: cop radio and ducking

**Original behaviour**

Radio object at `0x5d3118`, tick `0x0041c150` once per main-loop pass, after `handle_game`. An event latches only when idle. An old speech sample is not stopped and overlaps.

| Event | Fired by | Result with shipped data |
|---|---|---|
| 1 | cop assigned to the player `0x0040d833` | lists empty: silent reset |
| 2 | `0x00408dfb`, `0x0043a59e` | `0x0043a5b0` returns -1: silent |
| 3 | `0x004091af`, `0x0043a5cb` | arrest sample, ducked |
| 4 | `0x004088a7` in `0x00408520`, no static reference | lists empty |
| 5 | `0x004083c5`, `0x004209e2` | `MEGA_0..3`, ducked, positional at the cop if one is on the player |
| 6, 7, 8 | no call site | dead |
| 9 | key T, `0x0044f09f`, after the race has started (`0x6fb8c0`) | next `CPA` of the player's racer, no duck |
| 10 | communicator `0x00489813` | given sample, no duck |

Arrest sample `0x0043a5e0` by times caught: 1 `ARREST_1A/1B`, 2 `ARREST_2A`, 3 `ARREST_3A/3B`. Skipped when `SFXVOLUME` is 0.

Duck `0x0041c0f0`: all groups except MUSIC and COPS go to `max(SFXVOLUME-30, 0)`, MUSIC to `max(MUSICVOLUME-30, 0)`. Reset `0x0041c0d0` restores them, also after silent events.

The lists `RACER_n`, `START_PURSUIT_%d`, `CSTAY_%d`, `BLOCK_%d`, `CBLOK_%d` and the location list `CE<track>L<loc>` are empty in the shipped data. `0x0041c5f0` always takes the "already loaded" branch, and no `CE*.wav` or `COPRADIO` type exists.

`CPA` sizes by racer: 0 has 5, 1 has 2, 2 has 1, 3 has 6, others none. Each list stops at the first missing index.

**Evidence**

- `spel.dat` `0x0041be70`, `0x0041c150`, `0x0041bde0`, `0x0041b220`, `0x0041af00`, `0x0041c0f0`, `0x0041c0d0`, `0x0043a5e0`. Case 9 of `0x0041be70` selects list +0xec, which is `CPA`.
- [audio.md §11](../research/audio.md). `rcs` listing for the racer files.

**Status**

- Confirmed: the table, the sizes and the duck.
- Inferred: `0x00408520` is unreachable, from byte scans. `CM_KEYB_T` is the T key, from its name.
- Unresolved: nothing else.

**Where the port implements it**

- Runs as shipped in the recompiled code. `COP_RADIO` is called from `Race.tick` in `source/host/race.js`, in the original order after `handle_game`.
- The key reaches the game through `source/input/keyboard.js` (DIK 0x14). On touch the button **Roepen** sends VK 0x54 and DIK 0x14 (`#touch-taunt` in `source/index.html`): behind **Meer** in landscape, always shown in portrait. On a pad, D-pad up pulses VK 0x54 in `GamepadInput.pollRace`.

**How it was compared with the original**

Same machine code. The wait states depend on status from the virtual clock, so they advance with game time. check-race-ui asserts that DIK 0x14 is down while Roepen is held ("touch: Meer shows Roepen, Dashboard and Detail, which work") and that D-pad up pulses VK 0x54 through a stand-in pad ("gamepad: D-pad up calls, D-pad down and stick down brake"). No check asserts speech or ducking. Not compared with the original.

## Audio: speech and the communicator

**Original behaviour**

`Ovl_Communicator.cpp` and `communi.ini`. [SAMPLES] holds 151 names. Sample 0 `mesin` is the new-message jingle, 1 `copalert` the alarm. Messages belong to players (`HARRY`, `SHADOW`, `HONNEY`, `EDGAR`, `JAMES`, `BARBARALLY`, `TOMMY`, `KAT`; `POLICE` has none active) and to categories.

| Step | Rule | Function |
|---|---|---|
| Send | `~category` picks a queued message from it. `system_*` runs at once | `0x0048a910` |
| Show | When the panel has slid in, send `system_newmessage` if the message's eventnr is 0, then radio event 10 with its sample | `0x0048a230`, `0x00489800` |
| Radio | Event 10 starts only when idle or already on event 10. Otherwise the sample is dropped | `0x0041be70` |
| Copalert | Each send adds 10, cap 100. Each pass: loop `copalert.wav`, toggle the lamp every 500 ms, level -7. Below 1: stop | `0x0041eeb0`, `0x004899a0`, `0x00489d30` |

Senders with a literal: `~racer%dcollision`, `~racer%dpassing`, `~racer%dpassed`, `~police_outsmarted`, `~warning_from_harry`, `~knock_out`, `~attack`, `~challenge_at_start`, `~challenge_at_finish`, `~call_for_backup`, `~go_for_it`, `~game_position_01..05`, `~junction_ahead_left`, `~junction_ahead_right`, `system_goleft/right/fork/zigzag`. Categories 15 and 16 have no message in `communi.ini`. Categories 13, 14, 17, 18 have messages but no sender.

**Evidence**

- `spel.dat` `0x0048ae80`, `0x0048ebe0`, `0x0048a910`, `0x0048a230`, `0x00489800`, `0x00489d30`, `0x0041eeb0`, sender functions in §12. `communi.ini`.
- [audio.md §12](../research/audio.md), [hud-overlay.md](../research/hud-overlay.md) for the panel.

**Status**

- Confirmed: grammar, sender list, the copalert per-pass decay.
- Inferred: messages in the four categories without a sender can never appear.
- Unresolved: which track triggers call the senders at `0x00455cc0`..`0x00456470`. Queue priorities and lifetimes in detail, which are recompiled anyway. What `0x5cec0c` measures in the copalert condition.

**Where the port implements it**

Runs as shipped in the recompiled code. The communicator updates inside the render path, which the port runs every tick (`source/race-runner.js`). Samples are in the `late` set of `race-files.json`, fetched in pieces of 1 MB: read from there once their piece has arrived, else one synchronous request through `SparseFile.read`. At a fixed 60 passes per second the copalert level goes from 100 to below 1 in 15 passes, 0.25 s. At 30 passes it would take 0.5 s.

**How it was compared with the original**

Same machine code. HUD text was not compared in this area, and no check asserts speech. Not compared with the original.

## Audio: pause, focus and the mixer

**Original behaviour**

- Pause and quit dialog, `0x0044ca80`: read mixer volume line 4 (`0x004ce0d0`), set it to 0 (`0x004ce030`), stop game timers 0, 3, 0xb and six AI timers, spin on the keyboard in `0x0044c990` or `0x0044c9f0`, restart timers, restore the volume, reset the frame timer.
- **No DirectSound call is made.** All buffers keep playing and looping, muted by the system mixer. Music position advances during the pause, and one-shots end.
- Mixer: `mixerOpen`, line type 4, control type 0x50030001. With no device, get returns -1 and set returns 10000: no mute, no failure.
- Focus: `WM_ACTIVATEAPP` stores the state, `0x00458020` blocks in `WaitMessage` until reactivated. No sound call on loss or return.

**Evidence**

- `spel.dat` `0x0044ca80`, `0x0044cf90`, `0x004cdd80`, `0x004ce0d0`, `0x004ce030`, `0x004cd6b0`, `0x00458020`, `0x004a6800`.
- [audio.md §14](../research/audio.md), [win32-surface.md, WINMM mixer](../research/win32-surface.md).

**Status**

- Confirmed: the sequence and the absence of DirectSound calls in it.
- Inferred: without GLOBALFOCUS or STICKYFOCUS the buffers are silent while the window lacks focus and their positions keep advancing. From DirectSound's documentation. One-shots that end under the mute drop their status for the same reason.
- Unresolved: how real drivers behaved with this mixer path. Never observed.

**Where the port implements it**

- Dialogs: `Race.installPause`, `pollPause` and `endPause` in `source/host/race.js` run the same steps across ticks. `mixerGetNumDevs` returns 0 (`source/host/win32.js`), so the game's own mute does nothing. `host.onPauseChange`, set in `RaceRunner.load` in `source/race-runner.js`, calls `GameAudio.pauseAll` and `resumeAll`. These set a `muted` flag, and `GameAudio.applyMaster` then writes 0 to `GameAudio.master`. The context keeps running, so music advances. The mixer row is in [intentional-differences.md](../intentional-differences.md).
- Status in a dialog: `Race.tick` advances the virtual clock in its pause branch, and only the race clocks stop. So a one-shot that ended under the mute reports stopped after the dialog.
- Volume in a dialog: the port's **Volume** is a separate gain, `App.masterGain` in `source/app.js`, behind `GameAudio.master`. Changing it in the panel during a dialog does not lift the mute. The new value is heard when the dialog ends.
- Focus: `RaceRunner.setFocus` and `visibility`: ticks and the virtual clock stop, the `AudioContext` suspends, keys release; positions do not advance. Recorded as equivalent in [intentional-differences.md](../intentional-differences.md), row Focus loss.
- Settings panel: `onOpenChange` in `RaceRunner.bind` suspends the context and ticks stop. `RaceRunner.holdsSound()` is true while the panel is open or focus is lost. `unlock` in `source/app.js`, `setFocus` and the panel's close all test it before they resume, so a touch on the panel does not start the sound.
- End of a race: `RaceRunner.cleanup` resumes the context if the race ended while holding it and the tab is visible, because the menu shares that context.

**How it was compared with the original**

- check-race-ui on Amsterdam asserts: on blur the clock stops and the context state is `suspended`; after focus it is `running`, with no clock jump. For a hidden tab it asserts the clock and the runner's `suspended` flag, not the context. A touch on the panel leaves the context `suspended`; closing the panel makes it `running`. For P and Esc it asserts the dialog and that the race clock stops while `race.clock` runs on (434 ms stays 434 ms while the clock moves 1 s). It does not assert the mute.
- Fix check, one-off script, browser on Amsterdam: Volume 40 during a P pause keeps `GameAudio.master` at 0 and an analyser on the master output at RMS 0; after the pause RMS is above 0.
- No check reads the status of a one-shot across a dialog. Not compared with the original.

## Audio: volume settings from the menu to the race

**Original behaviour**

| Options slider | Save field | `raser.ini [SOUND]` | Race group |
|---|---|---|---|
| `sldrMusic` | +0x18, `MUSICON` +0x1d | `MUSICVOLUME` | `MUSIC` |
| `sldrSound` | +0x10, `FXON` +0x1c | `SFXVOLUME` | all except `MUSIC`, `COPS` |
| `sldrVoice` | +0x14, `VOICESON` +0x1e | `POLICEVOLUME` | `COPS` |

Conversion `0x00480f04`, written at `0x0048c553` in `WriteToInis` when a race starts:

`raserVolume = on ? clamp(100 - Trunc(10^(2*(100-v)/100)), 1, 100) : 0`

| v | 100 | 90 | 75 | 50 | 25 | 10 | 0 |
|---|---|---|---|---|---|---|---|
| raser | 99 | 99 | 97 | 90 | 69 | 37 | 1 |

- Defaults from `static.ini`: music 50, FX 50, voices 100, all ON. They equal the installed 90/90/99.
- Options OK sets `MusicOn` and `FxOn` from slider position > 0 (`0x004960fc`). `VoicesOn` is never changed by a control. So music at 0 means `MUSICVOLUME=0`, and the race does not load music. FX at 0 means `SFXVOLUME=0`. Voices at 0 still writes 1.
- `game.ini [OPTIONS] 3dsound` is stored at `0x6fb8b8` and never read.

**Evidence**

- `menu.exe` `0x00480f04`, `0x0048ba20`, `0x0048c3f0`, `0x0047f4ac`, `0x004960fc`, `0x004a63f4`, `0x004a6574`, `0x004a6de4`. `0x00402ad4` is Trunc: it loads control word 0x1F32 from `0x4aa030`. `spel.dat` `0x00447db0`, `0x00450870`, `0x004508a0`, `0x0041b220`.
- [audio.md §10](../research/audio.md), with the two corrections listed at the end of this file.

**Status**

- Confirmed: the table, the conversion and the flag rule.
- Inferred: nothing else.
- Unresolved: nothing else.

**Where the port implements it**

`raserVolume`, `writeRaserStuff`, `writeToInis`, `dataDestroy` in `source/menu/data.js`. `copyControlsToSettings` in `source/menu/forms/group-options.js`. The race reads the file through recompiled code from the same VFS.

The port's own **Volume** setting has no counterpart in the original. `App.getMasterOutput` in `source/app.js` makes one `GainNode` from it, and `GameAudio` and `MenuSound` both connect to that node. `playVideo` in `source/menu/framework.js` copies it to `video.volume`, because the movies do not pass Web Audio. It is set in the race's panel (`source/ui/settings-panel.js`) and on the Browser tab of **Geavanceerd** (`TfrmDisplaySettings` in `source/menu/forms/group-options.js`), where Annuleren and the x put it back. It is stored in `localStorage` by `source/settings.js`. `GameAudio.setMasterGain` has no caller any more.

**How it was compared with the original**

The code was read against the disassembly. form-check covers Options persistence. check-race-ui asserts that Volume 50 sets `App.masterGain` to 0.5 and that `GameAudio.master` stays 1, so Volume applies once. Fix checks, one-off scripts: fx, voice and music reach the master output in a node stub and a browser; `video.volume` follows the setting at 25%; on the Browser tab Annuleren and the x restore the port's settings and OK keeps them. No check starts a race with changed volumes and reads the result, and nothing was compared with the original.

## Audio: menu music

**Original behaviour**

- `menumsc.wav`, 44100 Hz 16-bit stereo, 32.03 s, loose file next to the exe. It is the only menu music.
- `StartUp` `0x004a5d70`: previous state 0 plays the intro, then starts music. States 1 and 2 start music at once and load the player. Each race end is a new `menu.exe`, so music restarts from the beginning.
- First volume is `[DEFAULTSETTINGS] MUSICVOLUME` = 50, then `0x0048af60` applies the player's value on load.
- `Play(0,0,1)`, looping. The only `Stop` is in Destroy, so it runs under all screens, including the final-win movie.
- Volume law `0x00480fcc`: `clamp(-Trunc(10^(2 + (100-v)/100 * log10(40))), -4000, -100)`.

| v | 100 | 90 | 75 | 50 | 25 | 10 | 0 |
|---|---|---|---|---|---|---|---|
| value | -100 | -144 | -251 | -632 | -1590 | -2766 | -4000 |

- Buffers carry `DSBCAPS_GLOBALFOCUS` (`0x80E0`), so they keep sounding without focus.

**Evidence**

- `menu.exe` `0x004825f8`, `0x004820d0`, `0x00482830`, `0x004a5d70`, `0x0048af60`, `0x004825e4`, `0x00481e54`, `0x0046bd3c`, `0x00480fcc`. `static.ini`.
- [audio.md §16](../research/audio.md), [startup-flow.md, Music](../research/startup-flow.md).

**Status**

- Confirmed: the sequence, the file, the law.
- Inferred: GLOBALFOCUS keeps the buffers audible in the background.
- Unresolved: audible balance between music, voices and movies.

**Where the port implements it**

`MenuSound.startMusic`, `stopMusic`, `setVolumes`, `gainFor` in `source/menu/sound.js`. `startMusic` and `startUp` in `source/menu/flow.js`, `applySoundSettings`, `directSoundVolume`, `previewMusicVolume`, `leaveMenu` in `source/menu/data.js`. Same file, byte-identical, in `public/assets/media/`.

- The original's StartMusic is synchronous. Here a stop can overtake the file's load, so `startMusic` holds a token and passes a `wanted` test to `MenuSound.start`: a start overtaken by a stop never calls `source.start`, and a second start while one runs or loads does nothing.
- `document.hidden` suspends the context in `source/app.js`. Blur keeps playing. This is a port choice: see [port choices](#audio-port-choices).

**How it was compared with the original**

The code was read against the decompile. check-flow passes this path with no console error. Fix check, one-off script, browser with `menumsc.wav` held back by a route: start then stop gives 0 looping starts; start, stop, start gives exactly 1 copy, which stops when told. No check asserts volume or looping, and nothing was compared with the original.

## Audio: menu voices and effects

**Original behaviour**

- Voice `0x00480448`: stops the current voice, plays `<name>.WAV` at voice volume, marks it current. FX `0x004807cc`, `0x00480780`: FX volume, no stop, overlap. Each play is a new buffer. A missing member logs "Unable to load:" and stays silent. `TGameMenuScreen.FormShow` stops the current voice on every such screen.
- `Random` is seeded from the time in `TData.DataCreate` (`0x00402a48`, called at `0x0047f055`).

| Where | Sound | Timing | Function |
|---|---|---|---|
| Most buttons | `start.wav`, `wavBtnDown`, on state 1 | | `0x0047f804`, `0x0047f7ec` |
| Radios, check boxes, Easy/Medium/Hard, Tour/QR | `start.wav`, `wavRadioBtn`, identical bytes | | `0x0047f7d4` |
| `sldrSound`, `sldrVoice` change | `trin.wav`, FX volume, before the new value is stored. Also on opening Options, since `set_Position` fires OnChange | | `0x00495cc8`, `0x00495d1c`, `0x0046af6c` |
| Help | `cmh07_00` | | `0x004891e0`, `0x0049e678` |
| TfrmHighScoreDlg, TfrmResults | `aud2` | | `0x00494f50`, `0x004a0624` |
| TfrmCurrentChar | `aud3` | | `0x0049b4fc` |
| TfrmTrackIntro | `NextTr` | closes after 3500 ms | `0x0049fa34` |
| TfrmGarage after a Tour race | `CGR07_<0..2>` if qualified, else `CBR07_<0..5>` | | `0x00499538` |
| Garage buy | FX `PEEP` | | `0x004991f4` |
| TfrmCharacter Verder | `CCS<char>_<0..1>` | next screen after 2000 ms | `0x0049aac4` |
| TfrmTrack | `CTI08_<track>` on chase tracks, else `CTI07_<track>` | 1500 ms after a change | `0x0049a5c0` |
| TfrmLoseNormal | `CDL<char>_<0..1>`, then `CDL07_<n>` | 4500 ms | `0x0049f50c`, `0x0049f6f8` |
| TfrmQualify | `CDW<winner>_<0..1>`, then `CDQ07_<n>` | 4500 ms | `0x0049fe68`, `0x0049ff8c` |
| TfrmWinNormal | `CDW<char>_<0..1>`, then `CDW07_<n>` | 4500 ms | `0x004a0218`, `0x004a03b0` |
| TfrmWinChase, TfrmLoseChase | `CDW05_<n>`, `CDL05_<n>` | | `0x004a0dc8`, `0x004a10a8` |
| TfrmWinFinal | `CDW07_04`, `CCW08_<char>`, `CCW08_05` | each `Trunc(bytes*25/1000000)*1000+1500` ms | `0x004a45b4`, `0x004a4444`, `0x004a455c`, `0x00482a0c` |
| Harry unlocked | `unlock`, then TfrmUnlock | | `0x0049c705` |
| Key settings, key outside the list | `MessageBeep(0)` | | `0x00491e64`, `0x0040be6c` |

`<n>` is the player's track to drive, +0x14. Not in MenuRcs, so silent: `CDQ07_06`, `CDW05_04` and others. In MenuRcs but named by nothing in `menu.exe`: `CFR07_00`, `CSS07_00..04`. Hunny is silent: `Hunny.acs` has audio count 0.

**Evidence**

- `menu.exe` as in the table: all 32 call sites of the voice and wave functions were listed from the disassembly. `unlock` sits in a code gap, read from the bytes at `0x49c6a0`. DFM button definitions in `forms.json`.
- All 89 MenuRcs WAVs byte-compared with `public/assets/menu/`: 89 identical.
- [audio.md §16](../research/audio.md), [menu-forms.md §10](../research/menu-forms.md).

**Status**

- Confirmed: the table, the names, the absences. FX go through `0x00480780` and `0x004807cc` with no test of the ON flags, so FX at slider 0 still plays, at -40 dB.
- Inferred: button state 1 means pressed, from the name `wavBtnDown`.
- Unresolved: balance and timing as heard.

**Where the port implements it**

`MenuSound` in `source/menu/sound.js`, the `playVoice` and `playVariant` helpers and the handlers in `source/menu/forms/group-race.js`, `group-main.js`, `group-dialogs.js`, `group-options.js`, button states in `source/menu/base-forms.js`. Every menu sound connects to `MenuSound.output()`, which is the port's master gain. Files load on first use, so a first play on a slow connection starts late; a voice cancelled during its load is stopped as soon as the load ends. `MenuSound.stopAll` stops music and the current voice, not an FX already running, the longest of which is `PEEP` at 0.67 s. `messageBeep` in `group-options.js` plays an 880 Hz tone for 0.12 s at FX gain through the same output, where Windows played its default sound. That tone is a stand-in.

**How it was compared with the original**

The handlers were read against the decompile. form-check shows each form and result branch, and does not assert sound. Fix checks, one-off scripts: fx and voice reach the master output; the beep goes through `rt.sound.output()`. Not compared with the original.

## Audio: movie sound

**Original behaviour**

- `TfrmIntro` plays `intro1.mpg`, with MPEG audio packets, through `TMediaPlayer` and MCI. A key other than space, or a mouse press, ends it.
- `TfrmWinFinal` loops `ch<char>.avi`: one `vids` stream, no audio. Menu music and voices run on.
- No CD audio in the menu or the race. The string `CDAudio` belongs to the VCL device table, and neither `TMediaPlayer` sets `DeviceType`.

**Evidence**

- `menu.exe` `0x004a4a78`, `0x004a4ad8`, `0x004a3f44`. DFMs `TFRMINTRO`, `TFRMWINFINAL`. RIFF scan of `ch00.avi`, `ch04.avi`. Packet scan of `intro1.mpg`.
- [audio.md §1, §16](../research/audio.md).

**Status**

- Confirmed: as listed.
- Inferred: nothing else.
- Unresolved: MPEG audio layer and rate of `intro1.mpg`. How MCI behaved without focus.

**Where the port implements it**

`playVideo` in `source/menu/framework.js`, `TfrmIntro` in `source/menu/forms/group-main.js`. `intro1.mp4` has AAC at 160 kbit/s, re-encoded by `tools/prepare-assets.py`, recorded in [intentional-differences.md](../intentional-differences.md). A byte scan finds `mp4a` in `intro1.mp4` and none in `ch00.mp4` to `ch04.mp4`.

- If the browser refuses sound (`NotAllowedError`), the movie plays muted and the first key or click turns sound on, with the note "Klik of druk op een toets voor geluid". Any other rejection of `play()`, such as a pause before it started, does not mute it.
- `video.volume` follows the port's **Volume** when the movie starts, since a `<video>` does not pass the Web Audio master gain. iOS ignores `video.volume`, so there the device volume applies. That is from platform documentation, not tested.
- A hidden tab pauses a playing movie, and showing the tab again continues it, in the `visibilitychange` listener in `App.start` in `source/app.js`.

**How it was compared with the original**

check-flow passes the intro and does not assert sound. check-race-ui asserts that the movie is paused in a hidden tab and plays again when shown, with `document.hidden` stubbed ("intro: pauses in a hidden tab, goes on when shown"). Fix check: `video.volume` at 25%. Not compared with the original.

## Audio: port choices

Differences that follow from the sections above. [intentional-differences.md](../intentional-differences.md) has the general rows for output, mixer, focus and video.

| Choice | Original | Port | Effect |
|---|---|---|---|
| Sound status | `GetStatus` follows the real play cursor | `GameAudio.isPlaying` reads the virtual clock | Frame-rate independent logic. When ticks are dropped, status lags the sound for that time |
| Rate-dependent audio logic | Per main-loop pass, at the machine's rate | 60 passes per second | Copalert level falls in 0.25 s, against 0.5 s at 30 passes. Cylinder pops use one or two `rand()` per pass, and radio states step once per pass |
| Focus and panel | Buffers advance silently while the window lacks focus (Inferred) | Context suspended, clock stopped | Positions stand still and carry on where they were |
| Menu in a hidden tab | GLOBALFOCUS keeps sound on in the background (Inferred) | Context suspended and intro paused on `document.hidden`. Blur keeps playing | Silence while the tab is hidden |
| `MessageBeep(0)` | Windows default sound | 880 Hz, 0.12 s | A stand-in |
| Music download | Read from disk at race start | Fetched before the race starts, one track per race | 1.5 to 2.76 MB on the loading screen |
| Other samples | Read from disk when first played | `common` and per-car sets before the race; the rest, the `late` set of 27,464,773 bytes, fetched in the background in pieces of 1 MB by `GameFiles.fetchLate` | A first play takes one synchronous request only if its piece has not arrived, which holds the page for its duration. Not tried on a real slow network |
| Bytes past an archive member | The C runtime's read buffer picks up the next member's bytes | Zero if not downloaded | The game never looks at them. On etappe 0, car 0, after boot and 300 ticks, a one-off comparison of 268 MB of wasm memory with a full-archive run differs only in 834 bytes inside that read buffer |
| Port **Volume** | None | `App.masterGain`, and `video.volume` for the movies | Applies to menu, race and movies. iOS ignores `video.volume` |

## Audio: corrections to the research notes

Corrected here from the code. The notes themselves are unchanged.

| Note | It says | The code shows | Evidence |
|---|---|---|---|
| audio.md §10 | `0x00480f04` rounds: v=90 gives 98, v=25 gives 68 | It truncates: 99 and 69 | `menu.exe` `0x00480f04`, `0x402ad4` loads control word 0x1F32 |
| audio.md §10 | No UI control changes the `*ON` flags | Options OK sets `MusicOn` and `FxOn` from slider position > 0. `VoicesOn` stays | `menu.exe` `0x004960fc` |
| audio.md §16 | `0x00480fcc` rounds: v=90 gives -145, v=25 gives -1591 | It truncates: -144 and -1590 | `menu.exe` `0x00480fcc`, `0x402ad4` |
| audio.md §16 | `0x00482a0c` uses Round | It calls the same Trunc | `menu.exe` `0x00482a0c`, `0x402ad4` |
| audio.md §16 | TfrmQualify plays `CDW<char>_0/1` | The race winner's: `FUN_00480390(0)`. The port uses `rankList[0]` | `menu.exe` `0x0049fe68` |
| audio.md §16 | The trigger table has no `unlock` | Voice `unlock`, then TfrmUnlock, in a code gap | `menu.exe` `0x0049c705`, bytes at `0x49c6a0` |
| audio.md §16 | Lists the files present, without saying which are unused | `CFR07_00` and `CSS07_00..04` are in MenuRcs and named by nothing | Byte scan of `menu.exe` |
| audio.md, Inferred | Max in use: Car2 GearB +172% of 44100 | `GearB5` is never read, because `[Car2]` has NrGears 5. Highest reachable is `[Car6]` GearA gear 4, +170%. Row 5 of `[Car6]` is read but stays at f = 0. The clip to 100000 and the rate of about 2.27 stand | `0x0042e9b0`, `0x0042f3e0`, `car_snd.ini` |
| audio.md §3, §9 | `fread` loads the file (no detail) | A 512-byte fill, a seek, one direct read of N × 512 bytes, a 512-byte fill. `0x0055a06b` sets the buffer to 512, `0x0055fb61` restores 4096 | `spel.dat` as named, logged reads on `mobie2.wav` |
| gameplay-systems.md §19 | Event 9 uses CCO | `CPA`: case 9 selects list +0xec | `0x0041be70` |
| startup-flow.md §4 | `LAST = (LAST+1) mod COUNT` (invalid goes to 0) | No modulo: `LAST+1` becomes 0 when below 0 or at or above `COUNT`. `LAST=-5` and `LAST=99` both give `M_DISCO1` | `0x0044ad40` |

Related port facts found with these:

- `rc.img` bytes 0 and 1 hold its image count, which `0x004cc580` reads at position 0 with a 4096-byte fill. The list in `race-files.json` starts at 0 for that reason. `0x00440950` always calls `0x00458730(2)`, so `rc.img` otherwise takes the per-image seek path of `0x004cc0b0`, not the sequential one in `0x004cc580`.
- `0x0055a5de` resets the stream buffer on every fseek, which is why bytes a fill reads past a member never reach the game.
