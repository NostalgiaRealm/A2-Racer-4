# Audio parity

Every original sound group, trigger and sound file, whether the port has it, and what was checked. This is the audio part of [the feature parity document](../feature-parity.md). Behaviour, numbers and evidence are in [behavior/audio.md](../behavior/audio.md). `audio.md n` is section n of [research/audio.md](../research/audio.md). Long lists of files are one row with a count and a pattern.

**Implemented**: `yes (recompiled)`: original code or data in `public/game/spel.wasm`, sound out through `source/audio/game-audio.js`. `yes (host)`: written for the port outside `source/menu/`. `yes (menu port)`: hand-written in `source/menu/`. `partial`, `no`: the notes say why. `n/a`: not reachable in the original, or nothing for the port to do.

**Verified** names a check only where it really covers the row. Run on 2026-10-31 in headless Chromium 145 unless stated.

- `check-flow`: `tools/check-flow.mjs`. The real `GameAudio` to the end of a bot race at speed=8, no host fault, no console error. It asserts no sound.
- `check-race-ui`: a named check of `tools/check-race-ui.mjs`, in `evidence/race-ui/summary.json`. State only.
- `repeat-trace`: `tools/benchmark.mjs` with `tools/compare-traces.mjs`. Checksums over every object with a physics body, 485 on Amsterdam, at three rendering rates. The port against itself.
- `boot-all`: `tools/build-race-lists.mjs`, all 10 etappes with all 8 cars for 2 s in Node with `audio: null`. Parsed or registered, and read from the archive where it loads at start. Nothing played.
- `form check`: per-form browser checks, `evidence/forms/`. The form and its persistence, not a sound.
- `fix check`: a one-off script, not kept in `tools/`. It covers only what it names.

No row was judged by ear, and no row compares sound with the original: the reference runs of the original under Wine ran its sound code on a null device and measure no sound. `tools/check-driving.mjs`, `tools/check-traffic.mjs` and `tools/run-bot.mjs` run with `audio: null`: no sound path.

## Sound output (spel.dat on DirectSound)

Sections 2, 3, 15 and 17 of audio.md.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| DirectSound object, `DSSCL_EXCLUSIVE`; primary buffer, mode 13 first; secondary buffers, flags 0xE8 | `0x004c71b0`, `0x004c6860`, `0x004c6880`, `0x5b4b60`, `0x004c69c0` | yes (host) | checked on Amsterdam: check-flow | `installDirectX` in `source/host/directx.js`. No enumeration callback: default path. The browser picks the output format. |
| DirectSound 3D buffers | `0x004c6a90`, slot type never 1 | n/a | not verified | Dead code in the original. |
| 80 slots, `[SOUND] BUFFERS` | `raser.ini`, `0x004c71b0`; audio.md 2, 10 | yes (recompiled) | boot only: boot-all | |
| Slot reuse by file name; eviction of the lowest priority non-playing slot | `0x004c7a10`, `0x004c7c50`, `0x004c6fb0` | yes (recompiled) | not verified | Depends on host `GetStatus`. A release disconnects that voice only. |
| `DuplicateSoundBuffer`: own cursor, status, volume, pan, frequency, shared samples | `0x004c6b90`, `0x004c7a10`; audio.md 2, Inferred | yes (host) | fix check: Amsterdam, 12 voices, 3 duplicates, 12 distinct gain and merge nodes, different gains and rates on one file; Node stub, a release leaves the other voice | `GameAudio.duplicate`, `chain`. |
| WAV load: fixed 44 byte header, samples at +44, `rcs.IMG` first | `0x004c7880`, `0x004c62c0` | yes (recompiled) | boot only: boot-all | |
| Large member read from `rcs.IMG` in one call | `0x004c7750`, `fread`; audio.md 3, 9 | yes (host) | fix check: all six music tracks on etappe 0, 0 samples different | `SparseFile.read` fetches every unknown gap, so a read is complete. |
| One `Lock` per buffer, whole buffer, then `Unlock` | `0x004c7750` | yes (host) | checked on Amsterdam: check-flow | `GameAudio.bufferFilled` builds the `AudioBuffer` at `Unlock`. |
| 8-bit and 16-bit PCM, mono and stereo, 8000 to 44100 Hz | WAV scan | yes (host) | not verified | `decodePcm`: `(b-128)/128`, `s/32768`. |
| `GetStatus` bit 0 as the only feedback | `0x004c6bd0` | yes (host) | checked on Amsterdam: repeat-trace | `GameAudio.isPlaying` on the virtual clock, so game state does not change with the frame rate. Not compared with a real cursor. When ticks are dropped it lags the sound. |
| Non-looping buffer ends: status drops, next `Play` from 0. `Stop` keeps the position, game rewinds with `SetCurrentPosition(0)` | audio.md Inferred, `0x004c7a10`, `0x004c6c70` | yes (host) | not verified | `GameAudio.isPlaying`, `stopVoice`, `setPosition`. |
| Error model: failing calls are fatal, `DSERR_BUFFERLOST` not handled | `0x004c4150` | n/a | not verified | The host never fails a call. |
| Decode cache by file name | audio.md Inferred, a suggestion, not an original feature | no | not verified | Each reload decodes again. No player-visible effect established. |

## Volume, pan, frequency and 3D

Section 5 of audio.md unless stated.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Effective volume `((((vol*local)/100)*premaster)/100*master)/100`; dB law `((v-100)*3900)/100 - 100`, v=0 is -40 dB | `0x0049e660`, `0x0049e370` | yes (recompiled) | not verified | |
| `SetVolume` as gain `10^(x/2000)`; `SetPan` attenuates the far channel only, not equal power; mono to both channels at equal level, stereo per channel | DirectSound documentation; audio.md Inferred | yes (host) | not verified | `GameAudio.applyGains`, `chain`, per voice, not `StereoPannerNode`. |
| Pan `sign(x)*10^(2abs(x)+2)`, clip +-10000 | `0x0049e750` | yes (recompiled) | not verified | |
| Frequency `orig + orig*pitch/100`, clip 100..100000 | `0x0049e3f0` | yes (recompiled) | not verified | Highest reachable +170%, `[Car6]` GearA gear 4, clips to a rate of about 2.27. |
| `SetFrequency(0)` restores the file rate, `GetFrequency`; frequency to resampler | `0x0049e4b0`; audio.md Inferred | yes (host) | not verified | `playbackRate`. Quality differs: recorded in [intentional-differences.md](../intentional-differences.md). |
| Play sequence: volume, `Play`, owner, `SetFrequency(0)`, `GetFrequency`, `SetPan`, `SetFrequency` | `0x0049e4b0` | yes (recompiled) | not verified | One call stack, so no first-buffer glitch. |
| Linear rolloff `100 - (int)dist*100/range`, stop outside range; doppler `-(dot(vs-vl, dir))/340*doppler` percent | `0x0049e890`, `0x0049e7d0`, `0x0049e6f0`, `0x5771a4` | yes (recompiled) | not verified | |
| Listener from the camera matrix, velocity from the player car, once per pass; coordinates times 0.1 | `0x004509b0` from `0x0044cb80`, `0x00450c90` | yes (recompiled) | not verified | 60 passes per second in the port. |
| Engine master volume 100 | `0x0049f6e0`, +0x270; audio.md 4 | yes (recompiled) | not verified | Constant. The port's **Volume** is a separate gain. |
| `game.ini [OPTIONS] 3dsound` | `0x0044a4f0`, write only; audio.md 10 | n/a | not verified | No effect in the original. |

## Sound groups

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `ENVIRONMENT` mask 1, 43 types; `MOTOR` mask 2, 29 types; `GENERAL` mask 4, 96 types | `sound.ini [SndGroups]`, `0x0049f920`; audio.md 6 | yes (recompiled) | boot only: boot-all | Follow `SFXVOLUME` through `0x00450870`. |
| `COPS` mask 8, 12 types plus 151 and 41 at run time | same, `0x0041b220`; audio.md 10 | yes (recompiled) | boot only: boot-all | Follows `POLICEVOLUME`, set once. Sources created later start at 100. |
| `MUSIC` mask 0x10, 13 types | same, `0x004508a0`; audio.md 10 | yes (recompiled) | boot only: boot-all | Follows `MUSICVOLUME`. |
| `BONUS` mask 0x20 | `sound.ini`; audio.md 6 | n/a | not verified | No type uses it. |
| Group volume reaches only sources that exist at the call | `0x0049ff90`; audio.md 10 | yes (recompiled) | not verified | |
| Ducking: all except MUSIC and COPS `SFXVOLUME-30`, MUSIC `MUSICVOLUME-30` | `0x0041c0f0`; audio.md 11 | yes (recompiled) | not verified | Restored by `0x0041c0d0`. |

## The 193 `sound.ini` types

`public/assets/game/sound.ini` and `rcs.img` are unchanged copies. P is preload. Sections 6, 8, 11 and 13 of audio.md. The 56 engine types are under [Engine sound sets](#engine-sound-sets-car_sndini), the 6 race music types under [Music in a race](#music-in-a-race).

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `POLITIE_SIRENE` psirene1.wav, P1 | `0x00423a50`, `0x0041e450`, `0x004636c0`, update `0x0040d490` | yes (recompiled) | boot only: boot-all | Road cops, Supercop, path cop. Positional loop, stops on FSM state 9 or 0x19. |
| `HELI` heli.wav, `TRAIN` trein.wav, `PLANE` vliegt.wav, P1 | path types 5, 4, 7: `0x00463a60`, `0x00466290`, `0x004654b0`; `HELI` also `.omp` type 1 | yes (recompiled) | boot only: boot-all | Positional loops. `HELI` paths on etappe 4 x2, 7 x1, 9 x1, static on 8 x11. `TRAIN` 4 x2, 6 x1, 8 x2, 9 x2. `PLANE` 3 x1, 4 x2, 6 x1. |
| 6 static objects on Amsterdam, P1: `BAR`, `BIRD`, `DEPARTURE`, `PIGEON`, `STPAUL`, `ROADWORKS2` | `.omp` type 1, field +0x40, `0x00454170`, `0x004535d0` | yes (recompiled) | boot only: boot-all | One each on etappe 0. `BIRD` also on 8 x6, `STPAUL` x1. On 9: `BIRD` x5, `ROADWORKS2` x1. Positional loop. |
| 7 static objects elsewhere, P1: `WATER`, `ALARM`, `BIGBEN`, `COW`, `CRIK`, `DUCK`, `TRUCK` | same | yes (recompiled) | boot only: boot-all | `WATER` etappe 4 x16, 8 x2, 9 x1. On 8: `ALARM`, `BIGBEN` x1, `COW`, `CRIK` x3, `DUCK`, `TRUCK` x2. On 9: `CRIK` x8. |
| 4 static objects on etappe 9 only, P1: `OWL`, `DOG`, `CLOCK`, `HORSE` | `.omp` type 1, field +0x40, `etappe9.omp` since the track update | yes (recompiled) | boot only: boot-all | `OWL` x6, `DOG` x3, `CLOCK`, `HORSE` x1. Positional loop. No object named them on disc 1.01. No sound was checked. |
| 22 `ENVIRONMENT` types no object names, P1: `TICK`, `BOOR`, `BOAT`, `BUSBELL`, `CAFE`, `DINGDONG`, `DRIL`, `PHOTO`, `GOOSE`, `GULL`, `HAMMER`, `MALL`, `BOATHORN`, `PIG`, `SHEEP`, `TRACTOR`, `BOATBELL`, `SAW`, `PLAYGROUND`, `GUARDS`, `ROADWORKS1`, `WEIH` | no `.omp` row on any etappe, no literal in spel.dat | n/a | not verified | Loaded at race start in both, never played. |
| `PION_HIT_CAR` pionb1.wav, P1 | `Tob_piln` type 2, `Tob_pap` type 22, `0x004544c0` | yes (recompiled) | boot only: boot-all | Positional one-shot on first hit. Type 2 on all ten etappes, Amsterdam x105. Type 22 only on etappe 9, x5, since the track update. |
| `PAAL_HIT_CAR` paal.wav, P1 | `Tob_wrkb` type 3, `Tob_flts` type 7, `Tob_wlmp` type 6, `tob_wplb` type 8 | yes (recompiled) | boot only: boot-all | Same mode. Type 3 on etappe 2, 3, 4, 6, 9. Type 7 on 0, 1, 2, 3, 4, 7, 8, 9. Types 6, 8 not placed. |
| `SOFT_CAR_HIT1/2`, `MID_CAR_HIT1/2`, `HARD_CAR_HIT1/2`, P1 | `0x00427400`, `0x004273d0` | yes (recompiled) | boot only: boot-all | Soft: impulse < min. Mid: < min+(min+max)/2. Hard: above. `rand()&1`. Positional one-shot at the car, skipped if playing. |
| `SCHUUR` schuur2.wav, P1 | `0x00427400` | yes (recompiled) | boot only: boot-all | Player only, within 300 ms of the last hit, impulse < min/3, other object `chunk*`. |
| `DAMAGE_GLASS`, `DAMAGE_DOP`, `DAMAGE_GLASS2`, `DAMAGE_METALBAR`, P1 | `0x00425850`, `0x00425800`, `0x00595cdc` | yes (recompiled) | boot only: boot-all | Part detaches, `rand()&3`. Positional at the car, skipped if playing. |
| `SLIP` slipl1.wav, P1 | `0x0044e790` | yes (recompiled) | boot only: boot-all | Player only. Loop, volume `min(i*5+60,100)`, pitch `i*4-4`. Needs `SFXVOLUME != 0`. |
| `TOETER` horn003.wav, P1 | `0x00413f00`, `0x00414950` | yes (recompiled) | boot only: boot-all | One global source, swapped onto one traffic car at a time. Positional loop. |
| `TURBO` turbo04a.wav, P1 | `0x0044e970` | yes (recompiled) | boot only: boot-all | One-shot once per press, stopped on release, 100 ms throttle. Keyboard, on-screen Turbo, pad X. |
| `HORN2` Horn002.wav, P0, group `MOTOR` | `0x0046f050`, `CarHorn` | yes (recompiled) | boot only: boot-all | Claxon. Non-positional, retriggered while held. Keyboard, on-screen Claxon, pad Y. |
| Non-positional one-shots: `START_ENGINES` P0, race start action; `FINISH_JUICHEN` P1, finish; `REPAIR` P1, repair trigger; `FLITS` P1, speed trap at speed > 50, 70, 100; `CHECKPOINT` P1 and `TIME_TICK` P1, chase timer under 6 s once per second, track mode 1 only; `SUNNIES` P0, score digit step | `0x0043c380`, `0x0043ab70`, `0x00457c00`, `0x00457880`, `0x00457da0`, `0x0044c8c0`, `0x004917b0` | yes (recompiled) | boot only: boot-all | |
| `GO` go.wav, `PAAL_HIT_GROUND` paal.wav | no literal in spel.dat | n/a | not verified | Never played. |
| 10 pickups, P0: `PW_10PTS`, `PW_5PTS`, `PW_1PT`, `PW_FAST`, `PW_FREEZ`, `PW_INV`, `PW_REPB`, `PW_REPS`, `PW_TURBB`, `PW_TURBS` (`wakkah1..6`, `wauwkuh1..3`, `Fastfor`) | `bonus.dso` `OnPickup_pw_*_ANIM`, `PlaySample` `0x00474500` | yes (recompiled) | boot only: boot-all | Script runs as shipped. Non-positional one-shots. |
| `BUSHALTE`, `TELEFOON`, `KRATTEN`, `OLIEVATEN`, P1 | `bonus.dso`, `InitSound3D` `0x00475690`, `PlaySound3D` `0x00475750` | yes (recompiled) | boot only: boot-all | `B_HALT1`, `B_phon`, `B_crat1`, `B_OIL1`, once on revive. |
| `DRAAIORGEL` drorgel.wav, P1 | same | yes (recompiled) | boot only: boot-all | `0_ORGL1`, etappe 0 x1. `PlaySound3D(0)` every pass retriggers it when it ends, until revived. |
| `HOOG4` hoog4.wav, P0 | racers `0x0042a3d0`, traffic `0x004658e0`, path traffic `0x004666c0`, `0x00466db0`, `car_cfg.ini` | yes (recompiled) | boot only: boot-all | Positional loop for every AI car with this type, on duplicates of one buffer. |
| `LOOP8`, `LOOP12`, `TOEREN1`, P0 | `car_cfg.ini [traffic]`, `0x0042a3d0`, `0x004161d0` | yes (recompiled) | boot only: boot-all | Traffic. Positional loop. |
| `SWITCH_GEAR` swgear.wav, P0 | `car_snd.ini`, `0x0042eea0`, `0x0042f0d0` | n/a | boot only: boot-all | Loaded and stopped, never played. |
| 23 `MOTOR` types, P0: `HIGH1`, `HIGH2`, `GCL8`, `HOOG5`, `LOOP3`, `LOOP8H`, `LOOP8M`, `LOOP9M`, `LOOP11`, `LOOPMIX`, `LOW1`, `MED1`, `STEADY1`, `CAR_START`, `VLIEGD`, `START1..8` | no literal in spel.dat, `bonus.dso`, `raser.ini`, `car_cfg.ini`, `[Car0]`..`[Car6]`, `[Car42]` | n/a | not verified | Never loaded. |
| 7 music aliases: `M_FUNK2`, `M_FUNK3`, `M_R&B1`, `M_R&B2`, `M_ROCK1`, `M_ROCK2`, `M_MAMBO` | not in `raser.ini [MUSIC]` | n/a | not verified | All point at `Disco1.wav`. |
| `ARREST_1A/1B`, `ARREST_2A`, `ARREST_3A/3B`, P0 | `0x0043a5e0`, event 3, `0x0041c150` state 9 | yes (recompiled) | boot only: boot-all | By times caught 1, 2, 3. Skipped when `SFXVOLUME` is 0. Ducks. |
| `MEGA_0..3` CMP05_00..03.wav, P0 | `0x0041b220`, event 5, `0x0041c150` state 0xe | yes (recompiled) | boot only: boot-all | Megaphone, positional at the cop if one is on the player. Ducks. |
| `RACER_COLLISION`, `POSITION_SWITCH`, `COMMUNICATOR_SOUND` tick.wav, P0 | `0x0041b690`, `0x0041b9d0`, `0x0048ae80` | yes (recompiled) | boot only: boot-all | Parameter templates for run-time types. Never played under these names. |

## Engine sound sets: `car_snd.ini`

The 56 engine types, group `GENERAL`, P0. Update `0x0042f3e0`, `0x0042f120`, `0x0042f220`, load `0x0042eea0`; audio.md 7. AI cars have one positional loop instead.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `[Car0]` Edgar de Flits, `CAR`=0: `cmrpm` x2, `cmstat`, `cmc1..8`, `cmstart`, 11 types | `car_snd.ini` | yes (recompiled) | boot only: boot-all | GearA and GearB on one file: two voices with their own gains. |
| `[Car1]` Tommie, `CAR`=1: `cvrpm`, `cvrpmhm`, `cvstat`, `cvc1..8`, `cvstart`, 12 types. `[Car4]` Barbarally, `CAR`=4, the same | `car_snd.ini` | yes (recompiled) | boot only: boot-all | |
| `[Car2]` D.T. Harry, `CAR`=5: `usrpm` x2, `usstat`, `usc1..8` (hdgear1..8m), `usstart`, 11 types | `car_snd.ini` | yes (recompiled) | boot only: boot-all | Two voices on one file. |
| `[Car3]` Katharina, `CAR`=3: `vrpm` x2, `vstat`, no cylinders, `vstart`, 3 types. `[Car5]` James Brons, `CAR`=2, the same | `car_snd.ini` | yes (recompiled) | boot only: boot-all | GearA and Stat on one file. |
| `[Car6]` politie-auto, `CAR`=6: `vrpm`, `vstat` x2, NrGears 6, no cylinders, `vstart` | `car_snd.ini` | yes (recompiled) | boot only: boot-all | GearB and Stat on one file. No `MaxSpeedGear5`, so `f` clamps to 0 above 200 km/h. |
| `[Car42]` De Schaduw, `CAR`=7, since the car update: same keys and values as `[Car1]`, so `cvrpm`, `cvrpmhm`, `cvstat`, `cvc1..8`, `cvstart`, 12 types | `car_snd.ini`, `car_cfg.ini` row 7, CarType 42 | yes (recompiled) | boot only: boot-all | No sound was checked. |
| `vc1..8`, 8 types, `Cylinders` commented out for cars 3, 5, 6. `jprpm`, `jpstart`, `jpstat`, `jpc1..8`, 11 types, named by no section in use | `car_snd.ini` | n/a | not verified | Never loaded. |
| `[Car7]`..`[Car21]`, older grammar without `GearA` | `0x0042e9b0` | n/a | not verified | Selecting one would assert. `CAR`=7 takes `[Car42]` since the car update. |
| Sound depends on speed only, not RPM, gear or throttle. `speed = (int)(localVel.z*3.6)`, negative in reverse clamps to 0 | `0x0042f3e0`, caller `0x0044ecc5` | yes (recompiled) | not verified | |
| Loops wait for the Start one-shot to report stopped | `0x0042f3e0`; audio.md 17 | yes (recompiled) | not verified | Status on the virtual clock, so a suspended context cannot stall it. |
| Cylinder pops: interval from `Cyl<g>`, one or two `rand()` per pass | `0x0042f220` | yes (recompiled) | not verified | 60 passes per second in the port. |
| `MinRpm`, `MaxRpm`, `MinSpeed`, `MaxSpeed` | `car_snd.ini` | n/a | not verified | Stored, not used by the update. |

## Communicator samples: `communi.ini [SAMPLES]`, 151 run-time types

Registered by `0x0048ae80` with the parameters of `COMMUNICATOR_SOUND`, preload 0. Played through radio event 10 `0x00489800`, dropped while another radio event runs. Which track fires which sender is unknown. `boot only` means registered, not loaded. Audio.md 12.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `mesin` | `[SYSTEM] newmessage`, `0x0048a230`, `0x004899a0` case 6 | yes (recompiled) | boot only: boot-all | New message jingle, when the panel has slid in and the message has eventnr 0. |
| `copalert` | `[SYSTEM] copalert`, `0x0041eeb0`, `0x00489d30` | yes (recompiled) | boot only: boot-all | Loop while the level is above 0. +10 per send, cap 100, -7 per pass: 0.25 s to stop at 60 passes. |
| 16 for `~warning_from_harry`: harry `cwa05_00..08`, `cwa05_11`, `_12`, `cpg05_00`, `_01`, `_05`; shadow `crw08_01`, `_02` | `0x0041f350` | yes (recompiled) | boot only: boot-all | |
| 6 for `~attack`: harry `cwa05_09`, `_10`, `_13`, `cat05_00`; shadow `cwa08_02`, `_03` | `0x004200e0`, `0x00420740`, `0x00420ca0` | yes (recompiled) | boot only: boot-all | |
| 4 for `~knock_out`: `cko05_00`, `_02`, `_04`, `cko02_00`. 5 for `~call_for_backup`: `ccb05_00..04`. 2 for `~police_outsmarted`: `cwa07_02`, `_05` | `0x0041f9f0`, `0x00455e90`, `0x0041f070` | yes (recompiled) | boot only: boot-all | |
| 10 for `~game_position_01`: `cgp07_10`, `cgp00_13`, `cgp02_01`, `_02`, `cgp04_00`, `cgp01_00..02`, `cgp03_00`, `_01` | `0x00456050` | yes (recompiled) | boot only: boot-all | |
| 7 for `~challenge_at_finish`: `cgi07_02`, `_04`, `_05`, `ccf02_02`, `ccf04_01`, `ccf01_00`, `ccf03_00`. 7 for `~challenge_at_start`: `ccg00_00`, `_02`, `ccg02_00`, `_01`, `ccg03_00..02` | `0x00455da0`, `0x00455cc0` | yes (recompiled) | boot only: boot-all | |
| 25 for `~racer%dcollision`, racers 0 to 4: `CCO00_00..04`, `CCO01_00..06`, `CCO02_02..05`, `CCO03_00`, `_02`, `_04..06`, `CCO04_00`, `_01`, `_03`, `_04` | `0x0041a5b0` | yes (recompiled) | boot only: boot-all | |
| 22 for `~racer%dpassing`: `CPA00_00..04`, `CPA01_00`, `_01`, `_04`, `_05`, `CPA02_00`, `_03`, `_04`, `_07`, `CPA03_00..05`, `CPA04_03..05`. 19 for `~racer%dpassed`: `CBP00_01..03`, `CBP01_00..04`, `CBP02_01..03`, `CBP03_00`, `_02..04`, `CBP04_01..04` | `0x004128a0` | yes (recompiled) | boot only: boot-all | |
| 26 with no sender. `warning_about_harry` 15: `cwa07_00`, `_03`, `_04`, `cpo07_04`, `_05`, `cwa02_02`, `_03`, `cwa04_03`, `cwa01_00..03`, `cwa03_00..02`. `a_lotta_damage` 3: `cko07_00`, `_01`, `_03`. `reactions_on_warnings` 6: `crw00_00..02`, `crw02_00`, `_01`, `ccf01_03`. `reactions_on_challenge` 2: `crc03_00`, `_01` | no sender literal for these categories | n/a | not verified | WAV shipped, message cannot be sent. Inferred. |

## Per-racer radio lists: `CCO`, `CPA`, `CBP`, 41 run-time types

Built by `0x0041bde0`. Each list stops at the first missing index. Radio events 6, 7 and 8, which would read them, have no call site. The only live use is event 9, key T, on the `CPA` list of the player's racer. Audio.md 6, 11, 15.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `CPA`, list +0xec, 14 types: `CPA00_00..04`, `CPA01_00`, `_01`, `CPA02_00`, `CPA03_00..05` | `0x0041b9d0`, `0x0044f09f`, `0x0041c150` states 0x15, 0x16 | yes (recompiled) | checked on Amsterdam: check-race-ui | See event 9. |
| `CCO`, list +0x7c, 21 types: `CCO00_00..04`, `CCO01_00..06`, `CCO03_00..06`, `CCO04_00`, `_01` | `0x0041b690`, no radio caller | n/a | boot only: boot-all | Registered only. The files also play through the communicator. |
| `CBP`, list +0x15c, 6 types: `CBP01_00..04`, `CBP03_00` | `0x0041b9d0`, no radio caller | n/a | boot only: boot-all | Same. |
| Files no list reaches: racer 0 `CBP`, racer 1 `CPA` from `_04`, racer 2 `CCO`, `CBP` and `CPA` from `_03`, racer 3 `CBP` from `_02`, racer 4 `CCO` from `_03`, `CPA`, `CBP`. `opgev*`, `achter*`, `aan*` | `0x0041bde0` | n/a | not verified | An earlier index is missing, or nothing names them. |

## Music in a race

Section 9 of audio.md.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Six tracks in `[MUSIC]`: 0 `M_DISCO1`, 1 `M_MOBIE1`, 2 `M_EIGHTY1`, 3 `M_FUNKY1`, 4 `M_MOBIE2`, 5 `M_REVENGE1`; 68.59 to 124.96 s, 22050/8/mono | `raser.ini`, `0x0044ad40` | yes (recompiled) | fix check: real `spel.wasm` on etappe 0, the predicted track loaded with 0 samples different from the member | boot-all starts from `LAST=2`, so it only loads `M_FUNKY1`. |
| Round robin: `LAST+1`, 0 if below 0 or at or above `COUNT`, written back at once | `0x0044ad40`. Corrects "mod COUNT" in startup-flow.md 4 | yes (recompiled) | fix check: `LAST` = -5, 0, 1, 2, 3, 4, 5, 99 on etappe 0; three races in a row give `M_FUNKY1`, `M_MOBIE2`, `M_REVENGE1` | |
| `[MUSIC] LAST` survives a restart | `0x0044ad40` | yes (host) | not verified | `vfs.iniSet`, `onWrite`, `Persist.save` to IndexedDB, by reading the code. |
| Per-track music index in `[MAPS]` argument 9 | `0x0044a9c5`, no read of `0x6fa610` | n/a | not verified | Unused in the original. |
| Start at the end of `InitSndFxEngine`, before cars and tracks load | `0x004506e0`, `0x00450de0` | yes (recompiled) | not verified | |
| Needs `MUSICVOLUME > 0` and more than 17,000,000 bytes of RAM | `0x00450de0` | yes (host) | not verified | `GlobalMemoryStatus` in `source/host/win32.js` reports 256 MB. |
| Whole file in one buffer, `DSBPLAY_LOOPING`, no track change in a race | `0x00450950` | yes (recompiled) | fix check: whole member in memory on `LAST` = 0, 3, 5 on Amsterdam, same FNV hash; the loop is not asserted | `GameAudio.play`. |
| Music file in the pre-race download | port requirement | yes (host) | fix check: Amsterdam with a throttled track, the race waits for it, 0 misses | `GameFiles.raceMusic`, `prepareRace`, map `music` in `race-files.json`. 1.5 to 2.76 MB per race. |
| Seamless loop of the music files | audio.md Unknown | yes (host) | not verified | `AudioBufferSourceNode.loop`. Seam not inspected in the original or the port. |
| Stop at exit | `0x00450e70`, `0x004490a0` | yes (recompiled) | not verified | `RaceRunner.cleanup` also calls `audio.stopAll()`. |

## Cop radio events

Section 11 of audio.md.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Event 1, cop assigned to the player. Event 2, cop gives up | `0x0040d833`. `0x00408dfb`, `0x0043a59e` | yes (recompiled) | not verified | Event 1: lists empty in shipped data. Event 2: `0x0043a5b0` returns -1. Both silent. |
| Event 3, arrest | `0x004091af`, `0x0043a5cb` | yes (recompiled) | not verified | Arrest speech, ducked. |
| Event 4, roadblock. Events 6, 7, 8 | `0x004088a7` in `0x00408520`, no static reference. No call site | n/a | not verified | Lists empty as well. Dead. |
| Event 5, megaphone | `0x004083c5`, `0x004209e2` | yes (recompiled) | not verified | `MEGA_0..3`, ducked. |
| Event 9, key T | `0x0044f09f`, while `0x6fb8c0` is set | yes (recompiled) | checked on Amsterdam: check-race-ui | Next `CPA` of the player's racer: racer 0 has 5, 1 has 2, 2 has 1, 3 has 6, others none. Keyboard, **Roepen** (behind **Meer** in landscape), pad D-pad up. "touch: Meer shows Roepen...", "gamepad: D-pad up calls...": the key only, not the speech. |
| Event 10, communicator speech | `0x00489813` | yes (recompiled) | not verified | No duck. Starts only when idle or already on event 10. |
| Radio tick once per main-loop pass | `0x0041c150`, from `Race.tick` | yes (recompiled) | not verified | 60 per second in the port. |
| Empty lists `RACER_n`, `START_PURSUIT_%d`, `CSTAY_%d`, `BLOCK_%d`, `CBLOK_%d`; location list `CE<track>L<loc>` | no such types in `sound.ini`; `0x0041af00`, `0x0041c5f0` | n/a | not verified | Always the "already loaded" branch. No `CE*.wav`, no `COPRADIO` type. |

## Communicator categories

Section 12 of audio.md. Categories with both a sender and messages are the sample rows above, one message per sample: 0, 5, 6, 7, 9, 10, 11, 12 and 19..33. So are `system_copalert` (`copalert`, lamp and loop, `0x004899a0` case 1) and `system_newmessage` (`mesin`).

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Sender but no message: 1..4 `game_position_02..05`, 8 `go_for_it`, 15 `junction_ahead_left`, 16 `junction_ahead_right` | `0x00456050`, `0x00455f70`, `0x00456390`, `0x00456470` | n/a | not verified | |
| Messages but no sender: 13 `warning_about_harry` 15, 14 `a_lotta_damage` 3, 17 `reactions_on_warnings` 6, 18 `reactions_on_challenge` 2 | no literal in spel.dat | n/a | not verified | Inferred: cannot be sent. |
| `system_goleft`, `goright`, `gofork`, `gozigzag` | `0x00456600`, `0x004566e0`, `0x004567c0`, `0x004568a0` | yes (recompiled) | not verified | Sample -1: lamps only. |
| `[POLICE]` messages | `communi.ini`, one line, commented out | n/a | not verified | |

## Pause, focus and mixer

Section 14 of audio.md unless stated.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Pause and quit dialog mute through the Windows mixer, line 4 | `0x0044ca80`, `0x004ce0d0`, `0x004ce030` | yes (host) | fix check: Amsterdam, `GameAudio.master` 0 and analyser RMS 0 during a P pause, above 0 after | `Race.installPause`, `host.onPauseChange`, `GameAudio.pauseAll`, `resumeAll`. Recorded in [intentional-differences.md](../intentional-differences.md). |
| **Volume** moved during a dialog does not lift the mute | `0x0044ca80` keeps the line at 0 throughout | yes (host) | fix check: Volume 40 during a P pause keeps `GameAudio.master` at 0 and RMS 0 | Volume is `App.masterGain`, behind the mute. Heard when the dialog ends. |
| No DirectSound call at pause: buffers keep running, muted. One-shots end and status drops (Inferred) | `0x0044ca80` | yes (host) | not verified | Context stays running, music advances. `Race.tick` advances the virtual clock in a dialog. check-race-ui asserts that clock, not a buffer's status. |
| Mixer API with no device: no mute, no failure | `0x004cdd80` | yes (host) | checked on Amsterdam: check-race-ui | `mixerGetNumDevs` = 0 in `source/host/win32.js`. The dialog ran without fault. |
| Window loses focus or tab hidden: main loop blocks in `WaitMessage`, no sound call, silent without GLOBALFOCUS | `0x00458020`, `0x004cd6b0` | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.setFocus`, `visibility`. Checks `focus:` assert the clock and the context state, `hidden tab:` the clock only. Positions stand still where the original's advance (Inferred). |
| Sound stays off while the settings panel holds the race | port feature | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.holdsSound`, read by `unlock`, `setFocus` and the panel's close. Checks `settings: touching the panel...`, `closing the panel...`. |
| Rate-dependent audio logic: copalert -7 per pass, `rand()` per pass, radio steps per pass | audio.md, Inferred | yes (recompiled) | not verified | Fixed 60 passes per second. The original's rate on period hardware is not known. |

## Volume settings: menu to race

Addresses in `menu.exe`. Section 10 of audio.md.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Options sliders `sldrMusic`, `sldrSound`, `sldrVoice`, 0..100 | DFM, `0x00495c68`, `0x00495cc8`, `0x00495d1c` | yes (menu port) | form check | `source/menu/forms/group-options.js`. Not the sound level. |
| Defaults `MUSICVOLUME=50`, `FXVOLUME=50`, `VOICESVOLUME=100`, `MUSICON=1`, `FXON=1`, `VOICESON=1` | `static.ini [DEFAULTSETTINGS]`, `0x004a6de4` | yes (menu port) | not verified | `Settings.fromIni` in `source/menu/data.js`. |
| Per-player volumes and ON flags in the save | `0x004a63f4`, `0x004a6574` | yes (menu port) | form check | `SETTINGS_INTS`, `SETTINGS_BOOLS` in `data.js`. |
| Options OK sets `MusicOn` and `FxOn` from slider > 0; `VoicesOn` is not touched | `0x004960fc`. Corrects audio.md 10 | yes (menu port) | not verified | `copyControlsToSettings`. |
| Conversion `on ? clamp(100 - Trunc(10^(2*(100-v)/100)), 1, 100) : 0` | `0x00480f04`, `0x402ad4` is Trunc. Corrects "Round" in audio.md 10 | yes (menu port) | not verified | `raserVolume`. v=100 99, 90 99, 75 97, 50 90, 25 69, 10 37, 0 1. |
| `FXVOLUME` to `SFXVOLUME`, `VOICESVOLUME` to `POLICEVOLUME`, `MUSICVOLUME` to `MUSICVOLUME` | `0x0048ba20` | yes (menu port) | not verified | `writeRaserStuff`, from `dataDestroy` when a race starts. |
| Race reads `[SOUND]`, with `ON` | `spel.dat` `0x00447db0`, `0x00447500` | yes (recompiled) | boot only: boot-all | With the installed values, not ones written by the menu. The menu never writes `ON`. |

## Menu music and sound manager

Addresses in `menu.exe`. Section 16 of audio.md.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `menumsc.wav`, 44100/16/stereo, 32.03 s, loose file, looping | `0x004825f8`, `0x004820d0` | yes (menu port) | fix check: file held back, start then stop gives 0 looping starts; start, stop, start gives 1 copy | `MenuSound.startMusic` with a token. Byte-identical in `public/assets/media/`. |
| Starts after the intro; at once after a race, from the start of the file. First volume static default, then the player's on load | `0x004a5d70`, `0x0048af60` | yes (menu port) | not verified | `startUp` in `source/menu/flow.js`, `applySoundSettings`. |
| Keeps looping under all screens, stops when the process ends | `0x004825e4`, `0x00481e54` | yes (menu port) | not verified | `leaveMenu` calls `sound.stopAll`: music and the current voice, not a running FX. |
| Volume law `clamp(-Trunc(10^(2+(100-v)/100*log10(40))),-4000,-100)` | `0x00480fcc`. Corrects -145 and -1591 in audio.md 16 | yes (menu port) | not verified | `directSoundVolume`, `gainFor`. v=100 -100, 90 -144, 75 -251, 50 -632, 25 -1590, 10 -2766, 0 -4000. |
| Live music volume from `sldrMusic`; Annuleren restores, x keeps | `0x00495c68`, `0x004956b4` | yes (menu port) | not verified | `previewMusicVolume`, `btnCancelClick`. |
| Voice: stops the current voice, one at a time. Every game screen's FormShow stops it | `0x00480448`, `0x00482950`, `0x0049e660` | yes (menu port) | not verified | `MenuSound.playVoice`, `GameMenuScreen.onShow`. |
| FX overlap, new buffer per play, no test of the ON flags | `0x004821f0`, `0x00480780`, `0x004807cc` | yes (menu port) | not verified | `MenuSound.playFx`. FX at slider 0 plays at -40 dB in both. |
| Missing member: log only, silent | `0x004823ac` | yes (menu port) | not verified | `playVoice` helper in `group-race.js`. |
| Menu sound keeps playing without focus: `DSBCAPS_GLOBALFOCUS` 0x80E0 | `0x0046bd3c`; Inferred | partial | not verified | Blur keeps playing. A hidden tab suspends the context on purpose, in `source/app.js`. |
| Random voice variants, seeded from the time | `0x00402c50`, `0x00402a48` from `0x0047f055` | yes (menu port) | not verified | `Math.random`. |
| Microsoft Agent Hunny has no sound | `hunny.acs` audio table count 0 | n/a | not verified | The only help sound is `cmh07_00`. |
| Master **Volume** in a race (port) | brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | `App.getMasterOutput`, panel `#set-volume`. 50 gives 0.5, `GameAudio.master` stays 1. |
| Master **Volume** in the menu (port) | brief section 8 | yes (host) | fix check: fx, voice and music reach the master output; Browser tab: Annuleren and the x restore, OK keeps | `MenuSound.output()`, row Volume on the Browser tab of **Geavanceerd**. |
| Master **Volume** on the movies (port) | brief section 8 | partial | fix check: `video.volume` follows the setting at 25% | `playVideo`, when a movie starts. iOS ignores `video.volume`, so there the device volume applies: not tested. |

## Menu sound triggers

Addresses in `menu.exe`. Section 16 of audio.md unless stated. Handlers in `source/menu/forms/`: `group-main.js` for the main and track screens, `group-race.js` for Garage and results. form-check shows the forms and asserts no sound.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Button press: `wavBtnDown` (`start.wav`) on state 1 for 22 button definitions (`gdfBtn*`, `defEmpty`), listed in audio.md 16 | `0x0047f804`, `0x0047f7ec`, DFM | yes (menu port) | not verified | `combinedState` in `source/menu/base-forms.js`. |
| Radio and check: `wavRadioBtn` (same bytes) on state 1 for `gdfRadioBtn`, `gdfCheckBox`, Easy, Medium, Hard, Tour, QR, `gdfBigRadioBtnMain`, `gdfRadioBtnExit` | `0x0047f7d4`, DFM | yes (menu port) | not verified | `radioState`, `combinedState`. |
| No press sound: `gdfBtnKey`, `gdfBtnDefault`, `gdfBtnAdvVideo`, `gdfBtnCtrlSettings` | DFMs have no `OnButtonStateChange` | yes (menu port) | not verified | `def.onState = null` in `group-options.js`. |
| `trin` on `sldrSound` and `sldrVoice` change, at the FX volume before the new value is stored. Also when Options opens: `set_Position` fires OnChange | `0x00495cc8`, `0x00495d1c`, `0x0046af6c`, `0x0046acfc`, `0x00495d6c` | yes (menu port) | not verified | `sldrSoundChange`, `sldrVoiceChange`, `copySettingsToControls`, `Slider.setPosition`. |
| Help: `cmh07_00`, `Random(1)` | `0x004891e0`, `0x0049e678` | yes (menu port) | not verified | `TBalloonForm.showFor` in `group-dialogs.js`. |
| TfrmHighScoreDlg, TfrmResults: `aud2`. TfrmCurrentChar: `aud3`. TfrmTrackIntro: `NextTr`, `timClose` 3500 ms | `0x00494f50`, `0x004a0624`, `0x0049b4fc`, `0x0049fa34` | yes (menu port) | not verified | |
| TfrmGarage after a Tour race: `CGR07_<Random 3>` or `CBR07_<Random 6>`. Garage buy: FX `PEEP` | `0x00499538`, `0x004991f4` | yes (menu port) | not verified | |
| TfrmCharacter Verder: `CCS<char>_<Random 2>`, `timSelection` 2000 ms | `0x0049aac4` | yes (menu port) | not verified | |
| TfrmTrack: `tmrSound` 1500 ms, `CTI08_<track>` when track +0x5c > 0, else `CTI07_<track>` | `0x0049a5c0`, `0x00499d68` | yes (menu port) | not verified | |
| TfrmLoseNormal: `CDL<char>_<Random 2>`, 4500 ms, `CDL07_<n>` | `0x0049f50c`, `0x0049f6f8` | yes (menu port) | not verified | |
| TfrmQualify: `CDW<winner>_<Random 2>`, 4500 ms, `CDQ07_<n>` | `0x0049fe68`, `0x0049ff8c`. Corrects `<char>` in audio.md 16 | yes (menu port) | not verified | `rankList[0]`, `FUN_00480390(0)`. |
| TfrmWinNormal: `CDW<char>_<Random 2>`, 4500 ms, `CDW07_<n>` | `0x004a0218`, `0x004a03b0` | yes (menu port) | not verified | |
| TfrmWinChase: `CDW05_<n>`. TfrmLoseChase: `CDL05_<n>` | `0x004a0dc8`, `0x004a10a8` | yes (menu port) | not verified | |
| TfrmWinFinal: `CDW07_04`, then `CCW08_<char>`, then `CCW08_05`, each timer `Trunc(bytes*25/1000000)*1000+1500` ms | `0x004a45b4`, `0x004a4444`, `0x004a455c`, `0x00482a0c` | yes (menu port) | not verified | `durationSeconds`. `WavTimeFactor` 25 is the shipped `menu.ini` value. |
| Unlock: voice `unlock`, then TfrmUnlock | `0x0049c705`, in a code gap; menu-forms.md 5. Not in the audio.md table | yes (menu port) | not verified | |
| Key settings: `MessageBeep(0)` on a key outside the list | `0x00491e64`, `0x0040be6c`; menu-forms.md 39 | partial | fix check: the beep goes through `rt.sound.output()` | `messageBeep` in `group-options.js`: a stand-in, 880 Hz for 0.12 s at FX gain, for the Windows default sound. |

## Menu sound files

The 89 MenuRcs members in `public/assets/menu/` are byte-identical to `original-game-decompiled/extracted/game-archives/menurcs`. All 1/22050/16 unless stated.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `aud2`, `aud3`, `nexttr` (2/22050/16), `cmh07_00`, `unlock`, `peep` (1/22050/8), 6 files | see triggers | yes (menu port) | not verified | One trigger each, `aud2` two. |
| `cbr07_00..05`, `cgr07_00..02`, 9 files; `ccs00..04_00..01`, 10 files | see triggers | yes (menu port) | not verified | TfrmGarage; TfrmCharacter. |
| `ccw08_00..05`, `cdw07_04`, 7 files | see triggers | yes (menu port) | not verified | TfrmWinFinal. |
| `cdl00..04_00..01`, `cdl07_00`, `_02`, `_05..08`, 16 files | see triggers | yes (menu port) | not verified | TfrmLoseNormal. |
| `cdw00..04_00..01`, `cdw07_00`, `_02`, `_05..08`, `cdq07_00`, `_02`, `_05`, `_07`, `_08`, 21 files | see triggers | yes (menu port) | not verified | TfrmWinNormal, TfrmQualify. |
| `cdl05_01`, `_03`, `_04`, `cdw05_01`, `_03`, 5 files | see triggers | yes (menu port) | not verified | TfrmLoseChase, TfrmWinChase. |
| `cti07_00`, `_02`, `_05..08`, `cti08_01`, `_03`, `_04`, 9 files | see triggers | yes (menu port) | not verified | TfrmTrack. |
| `cfr07_00`, `css07_00..04`, 6 files | no name in `menu.exe`, byte scan | n/a | not verified | Shipped in MenuRcs, played by nothing. |
| `start` (2/22050/16), `trin` | TDATA streams `wavBtnDown`, `wavRadioBtn`; TFRMOPTIONS `wavIrritatingAsHell` | yes (menu port) | not verified | Extracted from the form resources by `tools/prepare-assets.py`. |
| `CDQ07_06`, `CDW05_04` and other absent names | not in MenuRcs | n/a | not verified | The original logs "Unable to load:" and stays silent; the port tests `rt.assets.has` and stays silent. |

## Movie sound

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `intro1.mpg` with MPEG audio, through MCI | `menu.exe` TfrmIntro; audio.md 1, 16 | yes (menu port) | not verified | `intro1.mp4`, AAC 160 kbit/s, `tools/prepare-assets.py`, `playVideo`. check-flow passes the intro and asserts no sound. |
| Intro in a hidden tab: pauses, continues when shown | port requirement, brief section 6. MCI without focus not established | yes (host) | checked on Amsterdam: check-race-ui | `source/app.js`. "intro: pauses in a hidden tab, goes on when shown", `document.hidden` stubbed. |
| Autoplay refused: intro plays muted, first key or click turns sound on | platform adaptation, brief section 2 | yes (menu port) | not verified | `TfrmIntro`, `playVideo`. Only `NotAllowedError` mutes it. Recorded in [intentional-differences.md](../intentional-differences.md). |
| `ch00.avi`..`ch04.avi` loop on TfrmWinFinal, no audio stream | `menu.exe` `0x004a3f44`, RIFF scan; audio.md 1 | yes (menu port) | form check | `ch*.mp4` have no audio track, by a byte scan for `mp4a`. Menu music and voices run on. |
| No CD audio in menu or race | imports, DFM; audio.md 1 | n/a | not verified | `CDAudio` is only the VCL device-name table. |

## Browser adaptations of sound

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Web Audio context unlocked by the first gesture | brief section 2 | yes (host) | not verified | `unlock` in `source/app.js`. No check uses a browser that refuses sound. |
| Port **Volume** persists | brief section 8 | yes (host) | not verified | `localStorage`, `source/settings.js`. check-race-ui restarts for resolution and scale, not for this value. |
| Samples first played during a race | read from disk in the original | yes (host) | not verified | `common` and `car` sets before the race. All other WAVs, `PW_*`, speech and `HORN2` among them: the `late` set of 27,464,773 bytes, in pieces of 1 MB, `GameFiles.fetchLate`. A first play takes a synchronous request only if its piece has not arrived. Not tried on a real slow network. |
| Fallback for a member not yet downloaded | port requirement | yes (host) | fix check: `LAST=3` with the music list stripped gives 1 synchronous request of 2,755,556 bytes, same FNV hash | `SparseFile.read`, `syncRange`: holds the page for the request. |
| Bytes past an archive member read as zero | the C runtime's buffer picks up the next member's bytes; a seek drops them, `0x0055a06b` | yes (host) | fix check: etappe 0, car 0, 300 ticks, wasm memory equals a full-archive run except 834 bytes inside the read buffer | `SparseFile.read`. |
