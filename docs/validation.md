# Validation

What was tested, how, against what, and with what result. State of 2026-11-01, on the final build, with the game's two installed updates and the 8-bit path in it. Every result below except the original's half of the reference runs was measured again after those came in; which runs are from which date is in `evidence/`.

Scope comes from the brief: verification stays on one level, **etappe 0, Amsterdam**, with no full campaign, no browser or device matrix and no final review. Implemented and verified are kept apart: what exists is in [feature-parity.md](feature-parity.md), and this file says what was checked. A check covers only what it says here. Everything else, including every other level beyond a boot, is listed under [Not verified](#not-verified).

## Environments

| Item | Value |
|---|---|
| Host | Fedora 44, Linux 7.2.13, AMD Ryzen 9 5950X (32 threads), 32 GB, AMD Radeon RX 6700 XT. Tools run in a Debian distrobox |
| Browser | Headless Chromium 145.0.7632.6 through Playwright 1.58.2, on the real GPU: `--use-angle=vulkan --enable-features=Vulkan,DefaultANGLEVulkan,VulkanFromANGLE`. `ANGLE (AMD, Vulkan 1.3.230 (AMD Radeon RX 6700 XT (RADV NAVI22)), radv)` |
| Node | 24.13.1, for the headless checks: same source files and wasm, no renderer |
| Original, reference runs | `spel.dat` (SHA-256 `ccd1b034...`, same bytes as the install and the disc) under Wine 11.20 Staging, Xvfb, llvmpipe, throwaway prefix, with the data of disc 1.01. The updates do not change that data for etappe 0, car 0: [provenance.md](provenance.md#installed-updates). Details in [`evidence/reference-wine/results.md`](../evidence/reference-wine/results.md) |
| Original, 8-bit path | `spel.dat`, the same bytes, on a throwaway copy of the owner's 86Box machine: Windows 98 SE, DirectX 9 with its Ramp rasteriser, an emulated Voodoo3 3000, Pentium MMX 266 or K6-2 550, disc 1.01's data. Wine cannot run this path. Details in [provenance.md](provenance.md#reference-runs-of-the-8-bit-path), [`evidence/reference-86box/results.md`](../evidence/reference-86box/results.md) |
| Desktop package, launch check | Electron 44.9.2 (Chromium 152), Linux package, private Xvfb, SwiftShader. No GPU figures come from this |
| Not used | A real phone or tablet, a real gamepad, joystick or wheel, Firefox, Safari, real Windows, macOS, period hardware. Touch is CDP or Playwright emulation, the pad a stand-in for `navigator.getGamepads`, sound checked by state and never by ear |

## Criteria

Set before looking at the results of each comparison. They were not loosened afterwards.

| System | Criterion | Why this tolerance |
|---|---|---|
| Mobile performance | At least 30 FPS at 800x360 CSS, DPR 2, 8x CPU throttle, Auto, 100%, drawing buffer 1600x720, in every whole second of the window, and frame times recorded | The brief's goal. Worst second, because a mean can hide a slow stretch |
| Frame-rate independence | The state of every physics object identical at the same tick between rendering profiles | The tick is fixed and the game code does not see the frame rate, so any difference would be a bug |
| Player car against the original, same movement state | Plateau within 3%. Speed at 1, 4 and 8 s within 5%. Reverse limit within 3% | Same machine code, so the shape must match. The rest allows for clock noise and x87 precision, which the port does not have |
| Traffic against the owner's table | Highest nose rise within 0.05 of his value | His table has 3 to 7 starts per rate, and traffic differs from start to start |
| Controls, flow, settings | Named behaviour observed in the running page, no console error | Pass or fail |
| Picture | No anomaly seen in the screenshots of the checks; at 4:3 the same framing, HUD and colours as the original's screenshots at the same moment | By eye, one level, plus mean colour within 5 levels per channel. Not a pixel comparison: motion and a software rasteriser under Wine make per-pixel differences large |
| Picture, 8-bit path | With the camera at rest: at least 85% of the whole picture and 90% of the world identical to the original's, in RGB | Set after the first comparison, unlike the others, at 57.5%, when the two sampling rules were still unknown. Pixel-exact is possible here, since both sides copy palette indices and neither filters. Not 100%: two rasterisers differ on polygon edges |

## Results

### Mobile performance (brief, section 9)

`tools/benchmark.mjs`. Level etappe 0, Amsterdam, with opponents and traffic. Route: the bot drives the AI's waypoint links from the start grid with the keyboard device, chunks 114 to 194, fixed seeds through `?bench=1`. Measured for 60 s after 12 s of warm-up, so the countdown and shader warm-up are behind it.

| | Before: dynamic track vertices (`?nostatic=1`) | After: final build |
|---|---:|---:|
| Viewport, DPR | 800x360, 2 | 800x360, 2 |
| Drawing buffer, read from the context | 1600x720 | 1600x720 |
| Resolution, render scale | Auto, 100% | Auto, 100% |
| CPU throttle | 8x | 8x |
| FPS, mean | 60 | 60 |
| FPS, worst whole second | 60 | 60 |
| Frame time p50, p95, p99, max, ms | 16.7, 16.7, 16.8, 16.8 | 16.7, 16.7, 16.8, 16.8 |
| Simulation per tick, mean, p99, max, ms | 7.88, 12.2, 16.0 | 7.41, 11.7, 15.1 |
| Present per frame, mean, max, ms | 0.88, 6.6 | 0.66, 2.9 |
| Vertices uploaded per frame | 31770 | 4070 |

Goal met, and it was met before any optimisation. The only optimisation is the static track vertices. Frame rate is capped by the display's 60 Hz: tick plus present takes about 8 ms of the 16.7 ms frame at 8x throttle. Without throttle at 1280x720: tick mean 1.20 ms, present 0.08 ms.

This is an emulated profile. CPU throttling does not slow the GPU, and this is a desktop GPU, so the result says nothing about a phone's GPU. It also depends on the host being free: with another job on the machine, Wine physics tests of the owner's patch project at load average 17, the same run gave a mean of 35.3 FPS and a worst second of 10.5, and tick means doubled in every profile, the unthrottled one too. The numbers above are from a quiet machine, load average about 4. Files: `evidence/performance/final-8x.json`, `final-before-static-8x.json`, with a screenshot each, and `under-load-*.json`.

The 8-bit path on the same route and profile, not part of the brief's goal, with the drawing buffer at 1600x720 and the world on the mode's grid:

| | `RESOLUTION` 1, world 1067x480 | `RESOLUTION` 0, world 533x200 |
|---|---:|---:|
| FPS, mean, worst whole second | 60, 58.1 | 60, 60 |
| Frame time p50, p95, p99, max, ms | 16.7, 16.7, 16.8, 33.4 | 16.7, 16.8, 16.8, 16.8 |
| Simulation per tick, mean, p99, max, ms | 7.61, 12.8, 18.3 | 8.89, 12.9, 17.1 |
| Present per frame, mean, max, ms | 0.77, 3.7 | 0.96, 3.2 |

Files: `final-8bit-8x.json`, `final-8bit-low-8x.json`.

### Frame-rate independence (brief, section 6)

`tools/benchmark.mjs` with `tools/compare-traces.mjs`. One repeatable sequence: same seeds, same bot. Once per game second `RaceRunner.traceTick` takes a checksum over every object with a physics body (485 on Amsterdam: the player, racers, traffic, police, scenery bodies): object record and 3D object with its world matrix.

| Run | Viewport, DPR | Buffer | Throttle | FPS | Result against the normal run |
|---|---|---|---|---:|---|
| Normal | 1280x720, 1 | 1280x720 | none | 60 | |
| Mobile profile | 800x360, 2 | 1600x720 | 8x | 60 | Checksums equal at all 71 samples; position and speed difference 0 |
| Half rate | 1280x720, 1 | 1280x720 | none | 30, every second display frame | Checksums equal at all 71 samples; position and speed difference 0 |

Interpolation is rendering only. Display rates above 60 Hz were tried through a timer standing in for `requestAnimationFrame`, one-off when the camera blend was fixed: 144 Hz stand-in over 28 s of driving, 4031 presents, none with the view unblended.

Original rendering behaviour, measured separately: nothing in the program limits the rate except `Flip`. Under Xvfb with llvmpipe, where `Flip` does not wait, it runs at 317 to 393 ticks per second, and at that rate the gas pedal hardly rises on a clean clock (highest speed 1.25 to 12.7 m/s in 12 s). That is game code, and it is why the port does not run the game code at the display rate. The reasoning for 60 ticks: [original-behavior.md](original-behavior.md).

### The original against the port

`tools/reference-wine/`, full report and raw samples in [`evidence/reference-wine/`](../evidence/reference-wine/results.md). The original under Wine, held to 60 ticks per second from outside the process with `SIGSTOP` and `SIGCONT`, game bytes unchanged, on a clean clock; 22 launches. Memory read at each tick. The port: same key scripts, headless, its half run again on the final build. Car 0, the INI files of disc 1.01 on the original's side; the port's are the installation's, with the race keys pinned to the same values (`source/host/race-setup.js`).

| Movement state at 1 s (chassis, wheels 0 to 3) | Launches, original / port | +1 s, m/s | +4 s, m/s | +8 s, m/s | Last 2 s, m/s |
|---|---|---:|---:|---:|---:|
| 11111 | 7 / 7 | 6.65 / 6.67 | 20.67 / 20.69 | 27.73 / 27.72 | 27.73 / 27.72 |
| 22222 | 9 / 3 | 6.35 / 6.37 | 17.33 / 17.34 | 23.71 / 23.72 | 25.71 / 25.70 |
| 21111 | 5 / 3 | 6.46 / 6.59 | 19.13 / 19.22 | 27.73 / 27.68 | 27.70 / 27.71 |
| 12222 | 1 / 3 | 6.45 / 6.53 | 18.61 / 18.65 | 26.72 / 26.77 | 27.69 / 27.68 |

| Quantity | Original | Port | Verdict |
|---|---|---|---|
| Plateau, 11111 | 27.73 m/s | 27.72 m/s | Pass, 3% |
| Speed at 1, 4, 8 s by state, means | | At most +2.05%, +0.44%, 0.18% | Pass, 5% |
| The same, any one launch against any other, 1 s | | Two pairs were 5.1% and 5.3% before the gas ramp fix, not recomputed per pair since | Reported, see Known discrepancies |
| Reverse limit | -27.79 (22222), -27.91 (11111) | -27.79, -27.90 | Pass, 3% |
| Brake from 24.1 m/s, zero at | 1.73 s | 1.73 s; 10.42 against 10.24 m/s at 1 s | Same shape |
| `dt` ticks 1 to 6 | 0.1, 0.1, 0.1, 0.0158, 0.0185, 0.0166 | 0.1, 0.1, 0.1, 0.0156, 0.0167, 0.0167 | Same |
| Gas 0 to 100 | 0.35 to 0.38 s | 0.367 s | Same |
| Countdown states 8, 9, 10, 11 | 0.92, 0.90, 0.92, 1.02 s | 0.92, 0.92, 0.92, 1.02 s | Same |
| GO at pass | 280 to 282 | 283 | Within 3 ticks, since the original's `dt` has noise |
| Racers' path over 30 s after GO | 6811 to 6907, 7797 to 7845, 6673 to 6765, 6771 to 6781 | 6904, 7842, 6766, 6750 | Within 1.8%, one original outlier left out |
| Car height | 1.26 to 1.37 | Same range | Same |

**Launch regimes.** The car's acceleration depends on Ipion's movement state of each core, latched in the first 0.2 s of a launch (`FUN_00500820`, `FUN_004f4f30`, `FUN_004f3d20`). These exist in the original: 119 launches, no change after 1 s in any of them. The same key script six times on the original gave 22222, 11111, 22222, 11111, 21111, 11111. So 17.3 against 20.7 m/s at 4 s is the game's own spread and not a port effect, and any comparison of two runs must first compare the state.

**What this does not cover.** Windows, period hardware, real vsync. Steering, turbo, damage, collisions and race end were not measured on the original.

### The 8-bit path against the original

`tools/reference-86box/`, full report in [`evidence/reference-86box/results.md`](../evidence/reference-86box/results.md). Etappe 0, car 0, the car waiting on its grid with no keys, port at the view distance the slow machine had fallen to (`?chunks=15`). Pixel by pixel in RGB. Rank portraits differ by the opponents' order.

| | Whole picture identical | World identical | HUD text identical | Verdict |
|---|---:|---:|---:|---|
| `RESOLUTION` 1, 640x480 | 88.1% | 92.2% | 81.7% | Pass |
| `RESOLUTION` 0, 320x200 | 85.5% | 93.3% | 63.6% | Pass |

What remains: single-pixel lines on polygon edges, single texels on far surfaces, rows of HUD glyphs. Smoke and skid marks were compared by eye and by reading palette indices, in frames at 320x200 on the K6-2 550: `evidence/reference-86box/side-320-smoke.png`. These settled rules the code cannot show: [research/render-8bit.md](research/render-8bit.md).

The race is not affected by the path. On fixed seeds a whole race by the bot gives `TRACKTIME` 603433, laps 307617, 295816 at `RESOLUTION` 1 and with the 3D card. Against a normal run at 3, by `compare-traces`, the player's position and speed differ by 0 at all 71 samples at `RESOLUTION` 1, while the checksums differ from the first sample. A side-by-side run in Node at tick 600 shows why: over 485 bodies every world matrix and every speed is equal, and what differs is heap pointers and object indices (`+4`, `+0x10`, `+0x24`, `+0x7c` to `+0x9c`), one lower from the sky mesh this path does not create.

**What this does not cover.** A real machine. The flash and the pause dialog against the guest. `gfx_bwlk`. Other levels. Wider and taller views, which the original does not have.

### Traffic against the owner's measurements

`tools/check-traffic.mjs`, `evidence/traffic/nose-rise.jsonl`, against `A2-Racer-4-Fixes/README_technical_spel.dat.md` part 9, under Wine. Peak y of a traffic vehicle's forward vector in the 3 s after a start, 110 s of the bot driving.

| | Port: mean, highest | Owner: mean, highest |
|---|---:|---:|
| 60 ticks, whole pushes (as unpatched) | 0.295, 0.742 | 0.51, 0.74 |
| 30 ticks, whole pushes (as unpatched) | 0.102, 0.327 | 0.19, 0.30 |
| 60 ticks, with the traffic share (the port, 1.0.0) | 0.087, 0.208 | 0.08, 0.18 |
| 30 ticks, with the traffic share (1.0.0) | 0.064, 0.193 | 0.11, 0.19 |
| 60 ticks, with the traffic share and the owner's parts 11 to 13 (1.1.0) | 0.125, 0.615 | 0.08, 0.18 |
| 30 ticks, the same | 0.055, 0.185 | 0.11, 0.19 |

Highest values passed, within 0.03, up to 1.0.0. With the owner's parts 11 to 13 the bot's race takes another course after its first hit, so other traffic starts: one of 12 at 60 ticks peaked at 0.615. Over 600 s of the same check, highest values above 0.5 come with and without those parts, often for two vehicles in the same tick, which points to collisions: mean 0.165 and highest 0.662 over 71 starts with them, mean 0.179 and highest 0.988 over 56 without (`evidence/owner-fixes/traffic-600s-*.log`). Means are over more starts of more kinds than his, so they are not comparable. This table is why the port scales traffic pushes: unscaled at 60 ticks, traffic lifts its nose by about 48 degrees, as the owner found and fixed. It is an intentional difference from unpatched behaviour at that rate: [intentional-differences.md](intentional-differences.md).

### Driving, the brief's list (section 6)

`tools/check-driving.mjs`, `evidence/driving/amsterdam-no-opponents.json`. Headless, fixed seeds, keyboard device, car 0, no opponents, regime 22222 in this run. Touch and pad reach the same controls: see the next section.

| Item | Result |
|---|---|
| Acceleration | 6.26, 10.85, 14.44, 17.29, 19.51, 21.22, 22.62, 23.70 m/s at 1 to 8 s |
| Representative collision, ramp | Straight on at 25.2 m/s into an object at about (-14946, 6362), inferred to be the truck ramp: 15.5 m/s, thrown to height 50, damage 28 |
| Representative collision, wall | Turn into the buildings at 19.5 m/s: 9.4 m/s in one step, then stopped and bouncing back, damage 28 |
| Reset | Enter puts the car back on the road, about 7 m/s after 1 s of gas |
| Cornering | Full left at 17.4 m/s: 23.8 degrees per second, 14.2 m/s out, side speed 1.05 m/s. Steering reads -100 |
| Braking | From 16.9 m/s to zero in 1.3 s |
| Reversing from a standstill | Holding brake past zero drives it backward: -12.45 m/s at 1 s, -21.7 at 2 s |
| Sustained reverse | -27.89 m/s at 3 s. The limit is the same wheel limit, 69.44 rad/s. There is no reverse gear in the game |
| Steering while reversing | At -27 m/s with full left the car spins: yaw 1.73 rad in 1 s |
| Forward again | Gas after reversing drives it forward, from -3.5 to 2.65 m/s in 3 s out of the spin |

### Flow, input, focus, settings

| Check | What it does | Result |
|---|---|---|
| `tools/check-flow.mjs` | Real clicks: intro, new player, main screen, Quick Race, Amsterdam, start info, a race by the bot at speed 8 to the end, `TfrmResults`, back to `TfrmQuickRace`, save file | Pass, 0 console errors or warnings. The game wrote `FINISHED=1`, `TRACKTIME=603433`, `LAP_1_TIME=307617`, `LAP_2_TIME=295816`. `evidence/flow/` |
| `tools/check-phone-flow.mjs` | Taps on an 844x390 touch profile, then 390x844: same menus, a race on the wheel, Stop and Ja, back to the menu, Tour screens to the Garage without a race | 7 of 7, 0 console errors. `evidence/flow-phone/` |
| `tools/check-race-ui.mjs` | 76 named checks: touch wheel, simultaneous inputs, cancel, reset, look back, camera; focus loss and hidden tab; settings during a race and after a restart, GPU limit; orientation; layout at 8 sizes; keyboard, pointer, pause, quit, browser chords; gamepad stand-in with deadzone, connect and disconnect; full screen; finish and game-over screens; menu input after a race; load failure; intro in a hidden tab | 76 of 76. `evidence/race-ui/summary.json` |
| `tools/build.mjs`, launch | `npm run build`, then `dist/` served on its own port and `?race=1&bench=1` opened, at `RESOLUTION` 3, 1 and 0 | Built, 199 MB; a race running at each, 0 console errors; screenshots `evidence/smoke/dist-race.png`, `dist-race-640.png`, `dist-race-320.png` |
| `tools/check-software.mjs` | The 8-bit path by real clicks at 1280x720: Opties with and without `3D kaart`, `Weergave` greyed, a whole race by the bot at `RESOLUTION` 1 to its results, render scale halves the world and leaves the HUD, the flitser's palette in the port, a save at 1 shown again, a race at 0 ended by Esc and J, back to `RESOLUTION` 3 in the same page | 17 of 17, 0 console errors. It reads state, not pictures. `evidence/software/flow/` |
| `tools/build-race-lists.mjs` | All 10 etappes with all 8 cars, 2 s each, then all 10 at `RESOLUTION` 0 and 1, Node, no renderer, to record which files a race reads | No fault. A boot check only: it ends inside the countdown |
| Launch of the Country etappe, one-off | Headless Chromium, real clicks: Quick Race, position 9, character position 7, a race on the keyboard, 6 s of gas | `game.ini` had etappe 9, british 1, car 7. 31.24 m/s after 6 s, 0 console errors. By eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left. `evidence/smoke/download-*.png`. A launch only: no lap, no end of a race, no sound, no comparison with the original |

Focus and suspension, from `check-race-ui`: on blur or a hidden tab the virtual clock stands still (difference 0 over 2 s), the audio context is suspended and the input is cleared; after a return 1 s of waiting advances the clock by 0.98 s, so there is no jump.

Settings, from `check-race-ui`: Auto at 100% gives 1600x720 at 800x360 DPR 2; 480p at 50% gives 533x240 at once, with the drawing buffer staying native for the HUD; it survives a reload; Auto at 200% gives 3200x1440; a GPU limit of 2048 gives 2048x922 with a note.

### Sound

By state only. Nobody has listened to the port. From one-off scripts when the fixes were made, on Amsterdam: 12 voices playing with their own gain chains, 3 of them duplicates; volume and pan per voice; the race's music decoded equal to the archive member, no zero fill, for the tracks tried; an analyser on the master output above 0 in play and 0 during a pause; menu music, voices and effects reaching the master output; the intro pausing in a hidden tab.

### Picture

**Against the original.** The port at 640x480 against the unpatched game's screenshots from the reference run, same key script, frozen at the same moments: `evidence/reference-wine/side-ov8.png`, `side-go4.png`, `side-go8.png`. At GO+8.5 s the car stands within 0.4 m of the original's place at the same speed. By eye the framing, camera, textures, vertex colours, lamps, countdown digit, HUD positions and sizes are the same. Mean colour of the whole picture differs by at most 3 levels per channel. That is a mean and not a pixel comparison: motion and llvmpipe's filtering make per-pixel differences large. On Amsterdam only, at 4:3.

**Other shapes.** By eye, on the checks' screenshots on Amsterdam: `evidence/flow/`, `evidence/flow-phone/`, `evidence/race-ui/`, `evidence/performance/`: 16:9 at 1280x720, 800x360, 844x390, portrait at 360x800 and 390x844. No anomaly is known on these. No reference exists for them: the original has only 4:3.

### The player's shadow

`tools/check-shadow.mjs`, `evidence/shadow/`. The bot drives Amsterdam in a browser, and per presented frame the centre of the player's shadow is put in the car's frame as drawn. In 1.1.1 the shadow showed the latest tick while its car was blended between two ticks. Checked on 2026-11-03, 20 s at a 144 Hz stand-in for `requestAnimationFrame` and 15 s at the headless display's own rate.

| | Within one tick, mean and highest | All frames, mean and 95th percentile |
|---|---:|---:|
| 1.1.1, 144 Hz | 2.87, 3.67 units | 0.97, 3.32 |
| 1.1.2, 144 Hz | 0, 0 | 0.045, 0.34 |
| 1.1.1, headless display | no two frames in one tick | 0.023, 0.039 |
| 1.1.2, headless display | the same | 0.016, 0.030 |

What is left from frame to frame is the game rebuilding the shadow on the next tick, as the original does. Headless Chromium presents nearly in step with the 60 Hz tick, at alpha 0.94 to 0.98, which hid the slide. A real display at 60 Hz drifts against the tick, and one above 60 Hz always shows it. No real display was used. The original was not compared: it draws car and shadow from the same tick, which this now does too. check-flow and check-race-ui pass on the change.

### The tail lights

Reported on 2026-11-06: the player's tail lights flicker while driving. The game's state for them does not change: size, colour and texture were the same in all 600 ticks of 10 s on Amsterdam. All car lights are one 6-vertex mesh (about 22 draws per tick), and car models share meshes too. The renderer paired each draw with the tick before by mesh and draw order, and that order shifts when a car or a light enters or leaves the view, or when the alpha queue sorts differently. Then a tail light was paired with a light far away, taken for a teleport and drawn at the latest tick while its car was drawn between ticks: it jumped up to a tick of motion, about 3 units, against the car.

| Check | 1.1.5 | 1.1.6 |
|---|---:|---:|
| `tools/check-lights.mjs`, 8 s: lights paired with another light, etappe 0 / 7 | 17 / 278 | 0 / 0 |
| `tools/check-tail-glow.mjs`, 20 s at a 165 Hz stand-in: glow samples more than 0.1 units off where its own two ticks put it, etappe 0 / 7 | 28 / 72 of 3,308 / 4,142 | 2 / 8 of 3,310 / 4,141 |

The few left were not traced. check-wheels, check-shadow, check-hud-spray, check-flow, check-race-ui and check-software pass on the change. Tick time at 1280x720 on this machine: 1.27 ms against 1.22. No real display above 60 Hz was used. `evidence/lights/`.

### The HUD under spray

Reported on 2026-11-04: in a river on etappe 7, in a dense water spray, the HUD vanished for a moment. Each spray particle is drawn with its own world matrix, and the renderer had 1,024 rows for them per tick. The HUD's 87 draws come after the last particle in every tick with particles (472 of 472 measured on etappe 7), so from about 940 rows on they all shared row 1023, held the last particle's matrix and landed off screen. The game makes up to 100 spray systems of 9 or 29 particles each at 60 ticks, so a dense spray goes well past 1,000. The bot on its route peaked at 689 rows and never showed it.

`tools/check-hud-spray.mjs` takes rows at the start of each tick as a spray would and samples the HUD's SCHADE box in every frame, `evidence/hud/`:

| Extra rows | 1.1.4 | 1.1.5, 4,096 rows |
|---:|---:|---:|
| 0 | 240 of 240 frames | 240 of 240 |
| 900 | 0 of 240 | 240 of 240 |
| 3,000 | not run | 240 of 240 |

A real spray as dense as the owner's was not driven in a check: the bot reached the river on etappe 7 with up to 80 particle draws. check-flow, check-race-ui and check-software pass on the change.

### Chromium on native Wayland

Reported on 2026-11-04: black textures in Fedora's Chromium 156 on KDE Plasma (Wayland). Reproduced with that binary, a throwaway profile and the RX 6700 XT: in a window on native Wayland the road, the ground and the sky were black and the colours shifted, with default flags and with ANGLE on Vulkan alike. Headless, and in a window through XWayland, the same binary drew correctly. `evidence/wayland/`.

Cause: three.js r186 creates its WebGL context with an alpha channel whatever it is asked, and the game's draws leave alpha below 1, the road at 0. Read back from the drawing buffer the pixels were the same on both paths; the compositor of a native Wayland window blends the canvas by that alpha, XWayland does not. Since 1.1.4 `D3DRenderer` creates the context itself with `alpha: false` and hands it to three.js. After the change: no black on native Wayland, and check-flow, check-race-ui and check-software pass.

Left: a warm shift of saturated colours in Chromium's own screenshots on native Wayland. It is KDE's night light, not the game. Measured on 2026-11-04 at 00:35, night light running at 2500 K (`org.kde.KWin.NightLight`, `currentTemperature` 2500), with HDR, wide colour gamut and an ICC profile off and the output's colour source sRGB (`kscreen-doctor -o`):

| Colour | Plain HTML on native Wayland | WebGL on native Wayland | XWayland | Computed: sRGB to sRGB primaries with a 2500 K white, Bradford adaptation |
|---|---|---|---|---|
| Red 255,0,0 | 212,0,0 | 212,0,0 | 255,0,0 | 213,0,0 |
| Green 0,255,0 | 148,255,0 | 149,255,0 | 0,255,0 | 151,255,0 |
| Blue 0,0,255 | 51,37,255 | 51,37,255 | 0,0,255 | 47,32,255 |
| Grey 128 | 127 | 127 | 128 | 128 |

KWin implements night light as a change of the output's white point and tells colour-managed Wayland clients about it. Chromium on native Wayland then converts every page, plain HTML as well as WebGL, into that space, adapting white to white, so greys stay grey and saturated colours move. KWin applies the warming to the whole screen afterwards. XWayland windows are not colour-managed by the client, so their pixels stay sRGB and KWin applies the same warming at the end: on screen both look the same, warm. Only screenshots differ, because Chromium captures its pixels before KWin. Without adaptation the computation gives grey as 91,144,255, which was not seen. With night light off the conversion should not happen; that was not tried, since it is the owner's setting. The game needs nothing for it.

### The wheels

`tools/check-wheels.mjs`, `evidence/wheels/`. Each car's four wheels have their own world matrix, which turns 63 degrees per tick on average with the bot on Amsterdam. Per presented frame, at a 144 Hz stand-in for 15 s, the check reads the matrices drawn for every pair turning more than 20 degrees in a tick and measures their rows against the latest tick's: 1 is the wheel at its size and shape.

| | Matrices | Shortest row, lowest | Shortest row, mean |
|---|---:|---:|---:|
| 1.1.2, element by element | 26,320 | 0.658 | 0.924 |
| 1.1.3, rotation of the latest tick | 26,338 | 1.000 | 1.000 |

So in 1.1.2 a wheel shrank and skewed between ticks and pulsed with the display. check-flow, check-race-ui and check-shadow pass on the change. No real display above 60 Hz was used.

### The owner's fixes

`A2-Racer-4-Fixes` 1.5.4 parts 11, 12 and 13 in `spel.wasm` since 1.1.0: `tools/recomp/owner-fixes/README.md`. Checked on 2026-11-03.

| Check | Covers | Result |
|---|---|---|
| Build | His added code assembled from `spel_patch.asm` with nasm against the bytes in his patcher | Identical, 2764 bytes. Every hook site checked against the original bytes before it is written |
| Lift | The same 10 functions fail to lift as before, all outside the race's paths. 26 more functions lifted: his and the ones they call through a register | `out/report.json` |
| `tools/check-owner-fixes.mjs`, whole races by the bot on all 10 etappes, 800 s at most, against a build without the fixes | The state his code keeps: the 25 Hz tick, the camera factors, the colour sequence, the flash timer, `hung_check` | Every race to its end or the time limit, no error, no message box. The tick falls in 25 of 60 ticks, 0.4167, on every etappe. `hung_check` put back 6 cars: five racers on etappes 0, 1 and 8, the player once on 0. Without the fixes: none. `evidence/owner-fixes/races-*.json` |
| check-driving against its record | Launch, brake, reverse, corner, wall, reset | Speeds at 1, 4 and 8 s, the basis of the comparison with the original under Wine, unchanged. After the first hit the runs part, as contacts now end |
| check-flow, check-race-ui, check-software, check-phone-flow | As above | Pass: whole race to the results, 76 of 76, 17 of 17, 7 of 7, no console errors. `TRACKTIME` 603433 on both paths |
| repeat-trace | 8x throttle twice, normal once | Checksums over all 485 physics bodies equal for 71 s |
| Benchmark, alternating with and without, same machine, same hour | 8x CPU throttle profile | Mean tick about 0.8 ms more: 9.64 and 11.67 against 8.71 and 10.93 ms. The machine was busier than on 2026-11-01: even without the fixes the worst second was 45 to 59 FPS. Normal profile 1.29 ms, 60 FPS |
| Not checked | | The reset fixes one by one (last section, etappes 5, 6, 7, Enter after a racer's reset), the police and the Supercop, contacts past their triangle counted as his notes count them. His notes measure these on his game under Wine; the port runs the same code |

### Packages

Package content and launch are separate checks, and neither is gameplay testing: the flow checks above ran in a browser and not on a package.

| Check | Covers | Result |
|---|---|---|
| Package content, `tools/verify-desktop-package.mjs` | Linux and Windows x64 here, macOS on GitHub Actions: every game file equals `dist/` byte for byte, `app.asar` holds the wrapper only | 774 game files, 5 wrapper files, same tree hash on Linux and Windows. Written to `integrity-*.json` in the release |
| Launch, `tools/check-desktop.mjs` | Linux package: the first screen of the menu, then a race on etappe 0 by the bot for 30 s, read through the app's own protocol with byte ranges. Also the app extracted from the AppImage, 20 s | Pass, no console errors or failed requests, on 1.0.0 and again on 1.1.0: bot at chunk 151, 16.2 m/s. `evidence/desktop/linux/` |
| Launch under Wine, by hand through the remote debugging port | 1.0.0's Windows package, `win-unpacked/a2racer4.exe`, Wine on Linux with a throwaway prefix. Not Windows. Menu, then a race on etappe 0 by the bot for 20 s | Pass, no console errors. `evidence/desktop/wine/` |
| Source, from a fresh clone of the tag | `npm ci` restores `rcs.img`, `npm run recompile`, `npm run build` | `spel.wasm` and every file of `dist/` byte-identical to the working copy's |
| Not run | Windows package on Windows, macOS packages. `npm run prepare:assets` from a fresh clone | Not started |

### Live site

Run on 2026-11-01 from this machine against <https://games.nostalgiarealm.com/a2racer4/>, on the build of tag `v1.0.0`. The server's files have the same tree hash as `dist/`. This covers the server and the build, from a desktop browser on the server's own network. It does not say how fast the game loads for a player elsewhere.

| Check | Result |
|---|---|
| `tools/check-flow.mjs --url`, real clicks: intro, new player, Quick Race on Amsterdam, a whole race by the bot, results, back to the menu | Pass, 0 console errors or warnings. `TRACKTIME` 593233, laps 289450 and 303783, the same as locally. `evidence/live-flow/` |
| A race opened directly, watched for 20 s | 317 responses, 142 by byte range, none outside the folder, no errors |
| By `curl` | `/a2racer4` 301 to `/a2racer4/`. `rcs.img` answers ranges with 206. `spel.wasm` has `application/wasm`, gzip. A dotfile path gives 404 |
| `tools/check-flow.mjs --url` again on 2026-11-03, on 1.1.0, after `tools/deploy-website.sh` | Pass, 0 console errors or warnings. `TRACKTIME` 603433, laps 307617 and 295816, the same as locally. 1.1.1 only adds `favicon.ico` and its link, and was deployed without a check, at the owner's request: the deploy script compared the live `index.html`, `src/main.js` and `spel.wasm` with the build |
| Other games on the host after the change | `redcatsuperkarts`, `kao`, `bookwormdutch`, `redcatspookkasteel` answer 200. Not played |

## Known discrepancies

| Item | Against | Size | Status |
|---|---|---|---|
| Speed at 1 s, by state | Original under Wine | Up to +2.05% in mean; the two states with one or few launches are the largest. Under 0.5% at 4 s and after | Within the criterion. Causes not separated: when in the first 0.17 s the states flip, a tick of uncertainty in time 0 |
| Share of each launch regime | Original under Wine | The samples are too small to say | Not established |
| GO one to three ticks later | Original | 283 against 280 to 282 | Follows from `dt` without noise |
| Traffic nose rise at 60 ticks | Unpatched original at 60 FPS | 0.208 against 0.74, on purpose | Follows the owner's patched behaviour: [intentional-differences.md](intentional-differences.md) |
| Rate-dependent cosmetics | A period machine at 25 to 30 FPS | Chase camera, skid marks, smoke, flash and the rest of the owner's part 13 run as at 25 FPS. Copalert decay is still half | On purpose: [intentional-differences.md](intentional-differences.md) |
| Numerics | A native run | f64 instead of the x87 stack, last bits only; not bit-equal | [recompiler.md](recompiler.md) |
| 8-bit path, polygon edges, far texels, HUD glyph rows | Original on an emulated machine | 7 to 8% of world pixels, 18 to 36% of HUD text pixels, at rest | Two rasterisers. No rule found that closes it |
| 8-bit path, view distance and smoke | The same machine, at the rates it reached | Port: 25 chunks and smoke, since its tick is 60 per second. Guest: fell to 15 chunks and had no smoke at 640x480 | The game's own gates, on a slow machine: [intentional-differences.md](intentional-differences.md) |

Every other partial or missing row is in [feature-parity.md](feature-parity.md), under Known incomplete.

## Not verified

- Every level except Amsterdam beyond the boot check. That includes chase and highway modes, Supercop, checkpoints, path objects, and the Tour played through. The Tour's result screens were only reached with a faked `game.ini`. The Country etappe and the truck have the boot check and one launch.
- The original with the updates. Its reference runs used disc 1.01's data, so track 9 and car 7 have nothing to be set against.
- Sound by ear, on any device.
- Any real phone, tablet, gamepad, joystick or wheel, safe-area inset, or browser engine other than Chromium. Firefox, Safari, iOS and Android are implementation targets, not checked.
- Performance on a real mobile GPU.
- Steering, turbo, damage, collisions and the end of a race against the original itself: those ran on the port only.
- Period hardware: the only runs of the original are under Wine with software rendering, and on an emulated Windows 98 machine for the 8-bit path.
- The 8-bit path beyond its frames at rest and one race: other levels boot only, the flash and pause dialog were not compared with the guest, and its sound was not checked apart.

## How to repeat

The dev server must run: `npm start`. All from the project root.

```bash
node tools/check-flow.mjs
```

```bash
node tools/check-phone-flow.mjs
```

```bash
node tools/check-race-ui.mjs
```

```bash
node tools/check-software.mjs
```

```bash
node tools/check-driving.mjs --json evidence/driving/amsterdam-no-opponents.json
```

```bash
node tools/check-traffic.mjs --hz 60
```

```bash
node tools/benchmark.mjs --gpu --throttle 8 --seconds 60 --warm 12 --out evidence/performance/final-8x.json
```

```bash
node tools/benchmark.mjs --gpu --throttle 1 --size 1280x720 --dpr 1 --seconds 60 --warm 12 --out evidence/performance/final-normal.json
```

```bash
node tools/compare-traces.mjs evidence/performance/final-normal.json evidence/performance/final-8x.json
```

The reference runs of the original: [`tools/reference-wine/README.md`](../tools/reference-wine/README.md), and for the 8-bit path [`tools/reference-86box/README.md`](../tools/reference-86box/README.md). They use a private Xvfb and a throwaway copy, and never touch `~/.wine`, the owner's 86Box machine or the original files.
