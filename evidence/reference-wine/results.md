# The original race program under Wine against the port

Measured on 2026-10-31, on etappe 0 (Amsterdam), car 0, with `game.ini` and `raser.ini` of disc 1.01, no updates (`docs/provenance.md`, Installed updates: for this level and car the updates change nothing). Scripts and exact commands: `tools/reference-wine/README.md`. Raw samples: `raw/`, one gzipped JSON per start. One line per launch: `launches.csv`, `port-sweep.csv`. All analysis output: `analysis-output.txt`.

## Result

- The original ran on the first start, a minute after the prefix was created. The sampler and XTEST keys worked on the next try. Nothing blocked it.
- Left alone it runs at about 360 ticks per second under Xvfb, where the gas pedal hardly rises on a clean clock. For the comparison it was held to 60 ticks per second from outside the process.
- The original shows the same regimes as the port, and more than two. The movement state bytes of the chassis and of each of the four wheels latch separately in the first 0.2 s of a launch. Four combinations were seen in the original, the same four in the port, with speeds that agree within 3% at 1 s and within 0.5% at 4 s and 8 s.
- Which regime a launch gets is not fixed by the moment of the gas. The same key script six times gave three different regimes in the original.
- First time steps: 0.1, 0.1, 0.1, 0.0158 at 60 ticks per second. Tick 4 is not capped. The port has four capped ticks.

## Environment

| Item | Value |
|---|---|
| Host | Fedora 44, Linux 7.2.13, AMD Ryzen 9 5950X, 32 threads. Other work ran on the machine during the runs |
| Wine | wine-11.20 (Staging), Fedora package `wine-core-11.20-1.fc44`, WoW64 build: 32-bit PE on 64-bit Unix libraries |
| GL as Wine reports it | `GL_RENDERER: llvmpipe (LLVM 22.1.8, 256 bits)`, `GL_VENDOR: Mesa`, `GL_VERSION: 4.6 (Core Profile) Mesa 26.2.5` (`+d3d` trace of one start). wined3d: "No card selector available", "Overriding amount of video memory with 0x2000000 bytes" |
| Display | Xvfb 21.1.25 on a private display, 1024x768x24, no window manager. `wine explorer /desktop=a2,1024x768 spel.exe` |
| Mode the game ended up in | 640x480x16, read from `0x5b3798`. Hardware 3D flag `0x6fb8d0` = 1. Visible chunks 25 |
| Program | `spel.exe`, a byte-identical copy of `spel.dat` (sha256 `ccd1b034...`), mapped at `0x400000` (`/proc/<pid>/maps`, stored in each raw file) |
| Sampler | Python on the host, `/proc/<pid>/mem`, one sample per tick, wall clock from `CLOCK_MONOTONIC`. At 60 ticks per second no tick was missed |
| Port | `public/game/spel.wasm` sha256 `c7249252...`, `source/host/race.js` sha256 `9688024c...`. Headless, `tools/reference-wine/port-launch.mjs`, the installation's ini files with the race keys pinned to the same values, opponents on, fixed tick 1/60 s |

Disabled or overridden:

| What | Why |
|---|---|
| `NOCD=C` | `FUN_004cd3b0` reads this with `getenv` and returns before the CD search. Verified in the decompile (`0x5b66c0` holds `NOCD`) and by the run |
| `HKCU\Software\Wine\Direct3D\VideoMemorySize` = 32 | The texture probe overflows above about 128 MB. The expected `err:d3d:resource_init Out of adapter memory` ends the probe |
| `Drivers\Audio` = `alsa`, `ALSA_CONFIG_PATH` to a file with only a null device, `PULSE_SERVER`, `PIPEWIRE_REMOTE`, `XDG_RUNTIME_DIR` pointing nowhere | No sound on the host. The game's DirectSound object at `0x740924` is non-null, so its sound code ran. A live check of the running game found no `/dev/snd` or `/dev/dri` handle and no PipeWire client |
| `WINEDLLOVERRIDES=mscoree,mshtml=;winemenubuilder.exe=d`, `HOME` and XDG folders moved into the throwaway folder | Nothing goes to the real home |
| `LIBGL_ALWAYS_SOFTWARE=1`, `GALLIUM_DRIVER=llvmpipe` | Software OpenGL through Xvfb's GLX |
| X focus set with `XSetInputFocus`, keys sent with XTEST | No window manager. The game's active flag `0x740dfc` stayed 1 |
| Time namespace (`unshare --time`), clocks start near 10 s | See "The clock" below. Not used in `host60-*` and `free-host-*` |
| `SIGSTOP`/`SIGCONT` tick limit | See "Rate" below. Not used in `free-*` |

Working copy: no changes. `game.ini` and `raser.ini` were restored from the install copy before every start, volumes untouched. The game itself rewrites `raser.ini` at start (music index `LAST`, and it drops blank lines). `game.ini` stayed as shipped, since every run ended with `wineserver -k` and not with a normal exit.

## Rate

**Nothing in the program limits the rate here.** No limit: 317 to 340 ticks per second in the countdown, 358 to 369 while driving (`free-*`, an earlier test with an older sampler saw 372 to 393). It is limited by the CPU only: `WAITVBL=0`, and `Flip` does not wait under Xvfb and llvmpipe.

At that rate the pedal is the problem. With a clean clock `dt` is about 0.0028, `dt*300` is below 1, and `(int)(gas + dt*300)` in `FUN_0046f2a0` only moves on a tick slower than 1/300 s. Gas held for 12 s:

| Run | Clock | Ticks/s driving | Highest gas | Highest speed, m/s |
|---|---|---|---|---|
| `free-clean-3` | clean | 365 | 1 | 1.25 |
| `free-clean-4` | clean | 361 | 6 | 3.89 |
| `free-clean-1` | clean | 359 | 9 | 4.05 |
| `free-clean-2` | clean | 358 | 38 | 12.66 |
| `free-host-1` | host | 369 | 100 after 0.79 s | 26.13 |
| `free-host-2` | host | 369 | 100 after 0.87 s | 27.77 |

The owner's notes describe the same pedal above 300 FPS: "At about 410 FPS the bot's car stopped dead" (part 9, The pedals). With the host's clock the rounding noise of the float clock lifts the pedal by accident.

**So the comparison ran at 60 ticks per second**, set from outside: the sampler sees the clock field `0x7128b8` change at the start of a pass, stops the process, reads the sample, and continues it at the next multiple of 1/60 s. The game's bytes are the same. Over 22 starts: 60.00 ticks per second, `dt` 0.01667, lowest 0.01596, highest 0.01734, no late release. The other rates: 30, 120 and 240 ticks per second with the same method. The port runs at exactly 60. The original's numbers below are at 60 except where a rate is named, and the rates are not mixed.

## The clock

Wine's `QueryPerformanceCounter` counts from the host's boot: the game's `time` read 110864 s at 31 h uptime in the first start. A float at that size has steps of 7.8 ms. To measure a clean clock, the runs other than `host60-*` and `free-host-*` were in a time namespace where the clocks start near 10 s, so `time` reads about 11.5 s at the first tick and its float steps are 1 to 2 µs. Frequency read as 10000000 in every run.

Effect of the host's clock at 60 ticks per second: `dt` from 0.0141 to 0.0201, against 0.0160 to 0.0173 clean. At 360 ticks per second: raw steps from -0.0016 to +0.0083, so negative steps occur.

### First time steps, tick 4

`FUN_004580e0` loads the level (`FUN_0044c200`) first and only then calls the clock init (`FUN_004a65e0`), so the loading time does not enter the ring. What enters is `r0`, the clock's whole value at init, and `L`, the time from init to the first tick, measured at 8.42 ms (7.86 to 8.94, 15 starts). Then `dt(4) = 0.875 r + 0.125 L`, which would reach the cap only above about L = 0.68 s at 60 ticks per second.

| Pass | Original: field | Original: `dt` as read | Original: physics delta | Port: field | Port: `dt` as read | Port: physics delta |
|---|---|---|---|---|---|---|
| 1 | 2.9237 | 0.1 | 0.1 | 2.2750 | 0.1 | 0.1 |
| 2 | 1.4709 | 0.1 | 0.1 | 1.1458 | 0.1 | 0.1 |
| 3 | 1.4612 | 0.1 | 0.1 | 0.7625 | 0.1 | 0.1 |
| 4 | 0.0158 | 0.0158 | 0.0790 | 0.3896 | 0.1 | 0.1 |
| 5 | 0.0185 | 0.0185 | 0.0669 | 0.01667 | 0.01667 | 0.0833 |
| 6 | 0.0166 | 0.0166 | 0.0585 | 0.01667 | 0.01667 | 0.0722 |

(`launch60-01`; the 16 starts at 60 differ in the fourth digit.) Tick 4 is not capped in the original at any rate tried: 0.0303 at 30, 0.0084 at 120, 0.0049 at 240, 0.0030 with no limit. Ticks 1 to 3 are capped by `r0`, with the clean clock as with the host's. The port feeds 3 s into the ring twice (`LOADING_SECONDS`), which caps a fourth tick. That is a port difference. Measured consequences: GO comes at pass 278 against 280 or 281, the physics has run 6.095 s at GO against 5.83 to 5.85 s, and the first countdown state is 0.09 s shorter.

`docs/research/sim-timing.md` C1 says the first tick stores the whole loading time. On these runs it stores 8.4 ms, because of the call order above.

With the same three time steps the first ticks agree closely. Tick 1: height 23.692654 in both, core speed 2.2741035 in both. Tick 3: height 16.358294 against 16.358295, core speed 5.0507746 against 5.0507737. They part at tick 4, where the time steps do.

### Countdown

Wall clock per overlay state at `0x71277c`, seconds and ticks. The code asks for a sum of `dt` of 2.2, 0.9, 0.9, 0.9, then 1.0.

| State | Original, 60 | Original, no limit | Original, 30 | Original, 240 | Port |
|---|---|---|---|---|---|
| 1 until 8 | 1.957, 117 | 1.912, 641 | 2.041, 61 | 1.917, 459 | 1.867, 112 |
| 8 | 0.916, 55 | 0.902, 309 | 0.933, 28 | 0.900, 216 | 0.917, 55 |
| 9 | 0.900, 54 | 0.902, 309 | 0.900, 27 | 0.900, 216 | 0.917, 55 |
| 10 | 0.917, 55 | 0.901, 310 | 0.900, 27 | 0.904, 217 | 0.917, 55 |
| 11 (GO) | 1.017, 61 | 1.002, 338 | 1.033, 31 | 1.004, 241 | 1.017, 61 |

## Acceleration

22 launches of the original at 60 ticks per second: gas at 16 moments from before GO to GO+3.75 s, and one script six times. The port: the same 16 moments, and 81 moments from GO to GO+4 s in steps of 3 ticks (`port-sweep.csv`). The state string is the byte `core+0x5C` of the chassis, then of wheels 0, 1, 2, 3, one second after the gas came on. Time 0 is the first tick with gas above 0. "Obstacle" is the first object on the straight, at about (-14972, 6112) in both. The wheel limit `act_i+0x70` is 69.444 rad/s in both, which is 27.78 m/s.

| State | Launches, original / port | | +1 s | +4 s | +7 s | +8 s | +10 s | Last 2 s before the obstacle or gas end | 98% of limit at | Obstacle at |
|---|---|---|---:|---:|---:|---:|---:|---:|---:|---:|
| 11111 | 7 / 42 | original | 6.65 | 20.67 | 27.72 | 27.73 | 27.72 | 27.73 | 6.10 s | 11.14 s |
| | | port | 6.73 | 20.73 | 27.72 | 27.73 | 27.72 | 27.72 | 6.01 s | 11.13 s |
| | | difference | +1.18% | +0.26% | -0.01% | -0.01% | 0.00% | -0.01% | | |
| 22222 | 9 / 28 | original | 6.35 | 17.33 | 22.64 | 23.71 | 25.22 | 25.71 | not reached | not reached |
| | | port | 6.42 | 17.36 | 22.66 | 23.73 | 25.23 | 25.72 | not reached | not reached |
| | | difference | +1.15% | +0.20% | +0.09% | +0.06% | +0.03% | +0.03% | | |
| 21111 | 5 / 18 | original | 6.46 | 19.13 | 26.45 | 27.73 | 27.66 | 27.70 | 7.45 s | 11.49 s |
| | | port | 6.63 | 19.23 | 26.51 | 27.68 | 27.69 | 27.70 | 7.42 s | 11.46 s |
| | | difference | +2.64% | +0.49% | +0.23% | -0.18% | +0.12% | +0.01% | | |
| 12222 | 1 / 8 | original | 6.45 | 18.61 | 25.28 | 26.72 | 27.69 | 27.69 | 8.40 s | 11.65 s |
| | | port | 6.54 | 18.65 | 25.30 | 26.76 | 27.69 | 27.68 | 8.38 s | 11.64 s |
| | | difference | +1.28% | +0.23% | +0.10% | +0.14% | -0.01% | -0.03% | | |
| 11122 | 0 / 1 | port | 6.66 | 19.59 | 27.46 | 27.69 | 27.66 | 27.69 | 6.90 s | 11.35 s |

Speeds in m/s, `car+0xC4`, means. Ranges per launch are in `analysis-output.txt`.

Same launches, other quantities: gear index reaches 4 after 0.27 to 0.33 s (original), 0.23 to 0.28 s (port). Wheel speed in the last second before the obstacle: 69.35 rad/s in both for 11111. Car height `obj+0x44`: mean 1.315 to 1.330 in both, range 1.26 to 1.37. Distance covered after 8 s: 1249 to 1255 units (original) and 1252 (port) in 22222, 1492 to 1505 and 1494 to 1501 in 11111. One launch, `launch60-01`, brushed something at 5.2 s: height 1.05 to 1.59, a speed dip of 0.2 m/s, limit reached at 6.58 s instead of 6.0, distance 1480. It is left out of the height and distance ranges here and included in the table above. The other six in 11111 reached the limit at 6.00 to 6.05 s.

**The gas ramp is a port difference.** Gas 0 to 100 takes 21 to 23 ticks in the original at 60 (5, 9, 13, 18, 22, 27...) and 19 ticks in the port (5, 10, 15...), since the port's `dt` is exact. Time 0 is also uncertain by up to a tick in the original, because the stop can land before or after the pass reads the pedal. Together these are start alignment. Aligned instead on the moment each run passes 1 m/s, the +1 to +3% at 1 s shrinks to under 1%: the differences at 1, 4 and 8 s later are +0.59, +0.22, -0.01% (11111), +0.26, +0.08, +0.02% (22222), +0.98, +0.25, +0.05% (21111), +0.63, +0.12, +0.04% (12222).

### The regimes

- **The two regimes the port found are there:** 22222 reaches about 17.3 m/s at 4 s and does not reach the limit in 12 s. 11111 reaches about 20.7 m/s at 4 s and the limit near 27.7 m/s after 6 s.
- **There are also mixed ones,** because each core latches on its own: 21111 and 12222 in both, 11122 in one port launch. "Launches at the limit" and "launches below it" is too coarse a split.
- **They latch.** The states change in the first 0.2 s after the gas (0.17 s at the latest in these runs), and in none of the 119 launches do they change from 1 s after the gas until the obstacle or the end of the gas.
- **The state before the gas does not decide it.** Over the 119 launches, 22222 before the gas turned into 11111 (29), 21111 (8), 11122 (1) or stayed 22222 (29). 11111 before the gas ended in 11111, 21111 or 22222. The car also goes to sleep during the countdown in some starts (88888).
- **The moment does not decide it in the original.** `repeat60-1` to `-6`, same script, key 0.50 to 0.52 s after GO: 22222, 11111, 22222, 11111, 21111, 11111. The port is exactly repeatable and gives 11111 for that moment, and it changes regime when the moment moves by a few ticks: windows of 11111 come back every 12 to 24 ticks (`port-sweep.csv`).
- **Shares.** Original, 22 launches: 22222 9, 11111 7, 21111 5, 12222 1. Port, 81-moment sweep: 11111 31, 22222 26, 21111 16, 12222 7, 11122 1. Port at the 16 moments of the original: 11111 11, 22222 2, 21111 2, 12222 1. These sample sizes cannot show a difference in shares.

### Other rates and the host's clock

Same state, same curve:

| Rate | Launches | States | 22222 at +4, +8 s | 11111 at +4, +8 s | 21111 at +4, +8 s |
|---|---|---|---|---|---|
| 30, clean | 4 | 22222 ×2, 11111, 21111 | 17.56, 23.81 | 21.06, 27.72 | 19.29, 27.66 |
| 60, clean | 22 | see above | 17.33, 23.71 | 20.67, 27.73 | 19.13, 27.73 |
| 120, clean | 4 | 22222 ×3, 12222 | 17.33, 23.72 | | |
| 240, clean | 4 | 11111 ×2, 21111, 22222 | 17.34, 23.72 | 20.61, 27.74 | 19.27, 27.69 |
| 60, host clock | 2 | 21111 ×2 | | | 19.16, 27.71 |
| 369, host clock | 2 | 22222, 21111 | 17.09, 23.69 | | 19.03, 27.68 |

The owner's patched column is close to flat from 30 to 240 FPS (distance 25152 to 26256 units in 110 s), and his unpatched one falls above 60, in runs with turbo bursts (part 9, Measurements). Measured here, without turbo: within one state the curve is the same at these rates, within 1.3% at 4 s (2.2% in 11111 at 30, one launch) and 0.4% at 8 s. Between launches at one rate it is not: 17.3 against 20.7 m/s at 4 s, 23.7 against 27.7 at 8 s. So neither the limiter nor the time namespace creates the regimes: `free-host-*` has neither, and shows them.

## Reverse and brake

Down held from standstill, 8 s (`reverse60-*`). `-` values are backward. Mean per state; the state string is at 1 s.

| State | Starts, original / port | | 0.5 s | 1 s | 2 s | 3 s | Steady speed | 98% of limit at |
|---|---|---|---:|---:|---:|---:|---:|---:|
| 22222 | 3 / 3 | original | -4.00 | -8.50 | -16.55 | -23.74 | -27.79 | 3.60 s |
| | | port | -3.92 | -8.43 | -16.48 | -23.56 | -27.79 | 3.61 s |
| 11111 | 3 / 1 | original | -4.04 | -8.84 | -18.14 | -27.03 | -27.91 | 3.04 s |
| | | port | -4.00 | -8.80 | -18.10 | -27.25 | -27.90 | 3.00 s |

Two more port starts ended in 22211 and 12222, steady -27.81 and -27.82. Reverse is limited by the same 69.444 rad/s. The car meets something behind it after about 7.1 to 7.4 s in both.

Brake from speed, Down right after 5 s of gas (`brake60-*`). The first two pairs are in the same state and start from about the same speed:

| Run | State | Start, m/s | 0.5 s | 1 s | Zero at |
|---|---|---|---:|---:|---:|
| original 1 | 11111 | 24.10 | 17.36 | 10.24 | 1.73 s |
| port 1 | 11111 | 24.10 | 17.41 | 10.35 | 1.73 s |
| original 2 | 11111 | 24.07 | 17.14 | 9.95 | 1.72 s |
| port 2 | 11111 | 24.13 | 17.34 | 10.22 | 1.72 s |
| original 3 | 21111 | 22.03 | 15.13 | 7.70 | 1.53 s |
| port 3 | 22222 | 19.45 | 11.81 | 4.51 | 1.33 s |

The third pair is in different states and is not a comparison.

## Opponents

No input, 31 s from GO, shipped opponents (`racers60-*`). Seven wheeled cars exist, with the same object indices in both. 246, 808 and 1169 stand still in these runs, and the racers are 1196, 1209, 1217, 1230. Path length in world units over 30 s after GO, sampled at 10 Hz:

| Run | 1196 | 1209 | 1217 | 1230 |
|---|---:|---:|---:|---:|
| Original 1 | 6884 | 7845 | 6742 | 6374 |
| Original 2 | 6907 | 7826 | 6765 | 6781 |
| Original 3 | 6811 | 7797 | 6673 | 6771 |
| Port | 6929 | 7888 | 6763 | 6779 |
| Port, `--whole-push` (traffic pushes as in the unpatched game) | 6903 | 7813 | 6762 | 6780 |

The original differs from run to run. Racer 1230 at 6374 had already lost about 240 units 10 s after GO, for a reason this does not show. Without that one value, the port is within 1.8% of each original value. Speeds after 20 s are near 25 m/s in both.

The owner's traffic measure could not be made this way. It needs a car driving through the level: a car waiting at the start sees 0 or 1 traffic starts in 31 s (`analysis-output.txt`, "traffic").

## Criteria, stated before the results

| Criterion | Result | Verdict |
|---|---|---|
| Plateau within 3% | 27.73 against 27.72 (11111), 27.70 against 27.70 (21111), 27.69 against 27.68 (12222). 22222 reaches no plateau in 12 s; its speed over the last 2 s is 25.71 against 25.72 | Pass |
| Same movement state, speed at 1, 4 and 8 s within 5%, on means per state | At 1 s at most +2.64%, at 4 s at most +0.49%, at 8 s at most 0.18% | Pass |
| The same, for any one launch against any other in the state | At 4 s at most 1.1%, at 8 s at most 0.5%. At 1 s two states fall just outside: 6.38 against 6.72 (5.3%, 21111) and 6.52 against 6.85 (5.1%, 11111) | Outside at 1 s, by 0.3%. The port alone spreads 3.9% at 1 s within a state. Possible causes, not separated: when in the first 0.17 s the states flip, the shorter gas ramp of the port, and a tick of uncertainty in time 0 |
| Reverse limit within 3% | -27.79 against -27.79, -27.91 against -27.90 | Pass |

## Not established

- Windows, a period PC, a real graphics card, real vsync. All of this is one setup under Wine, as the owner's own notes say of his measurements.
- `L` on a slow machine. Tick 4 would be capped above about 0.68 s at 60 ticks per second. What runs between clock init and the first tick here takes 8.4 ms.
- Why a core latches in state 1 or 2, and what decides it. This measures the bytes, not the cause.
- 22222's plateau: the obstacle comes first. Speed at the end of 12 s is 26.13 in the original, 26.14 in the port, and still rising.
- x87 precision under Wine. The control word was not read. The first three ticks agree with the port's 53-bit model to about 7 digits, and that is all this shows.
- Traffic, as said above. Steering, turbo, damage, collisions and the end of a race were not measured.
- Whether the regime shares of the original and the port are the same.

## Effects of this environment, not of the game

| Effect | Cause |
|---|---|
| 360 ticks per second | Xvfb and llvmpipe do not wait on `Flip`. The pedal rounding that this exposes is game code; the rate is not |
| A pedal rescued by clock noise, negative raw steps | Wine's counter starts at the host's boot, and this host had 31 h of uptime. Windows has the same property, as the owner's part 9 describes. The game keeps the time in a float |
| Clean clock at about 1 µs steps | The time namespace, added by the harness |
| 60, 30, 120, 240 ticks per second | The harness: `dt` jitter of about 0.2 ms from the difference in work between two passes, one sample per tick |
| Size of `L` (8.4 ms) | This machine. Files on tmpfs and a fast CPU; another machine will differ |
| Silent sound | The null ALSA device. The sound code ran. Whether a real device changes any timing was not tested |
| 32 MB of texture memory | The registry override. The game's texture cache is `custom_texture_memory`, 4 MB, far below it |
| Which files the game wrote | Runs end with `wineserver -k`, so the end-of-race writes to `game.ini` did not happen |

## Files

- `raw/launch60-*`, `repeat60-*`: launches at 60 ticks per second. `launch30-*`, `launch120-*`, `launch240-*`: other rates. `free-clean-*`, `free-host-*`, `host60-*`: no limit, host's clock. `reverse60-*`, `brake60-*`, `racers60-*`, `shot60`: the rest. `port-*`: the port; `port-check-driving` is the output of `tools/check-driving.mjs`, opponents off, regime 22222: 6.35, 17.33, 23.72 m/s at 1, 4 and 8 s after 6 s of countdown.
- `shot60-ov8+0.3.png`: countdown. `shot60-go+4.5.png`, `shot60-go+8.5.png`: driving. The game draws in the top left 640x480 of the 1024x768 Xvfb screen.

## After the two port changes

This comparison found two differences, both fixed in `hook!updateClock` in `source/host/race.js`, and the port's half of `campaign.sh` was run again. The original's samples were not repeated, since nothing in it changed.

| Difference | Before | Now | Original |
|---|---|---|---|
| First ring samples | 3 s twice, so 4 capped ticks | The clock's value at init, then 8.4 ms as measured here | `r0`, then 8.42 ms |
| `dt` as read, ticks 1 to 6 | 0.1, 0.1, 0.1, 0.1, 0.0167, 0.0167 | 0.1, 0.1, 0.1, 0.0156, 0.0167, 0.0167 | 0.1, 0.1, 0.1, 0.0158, 0.0185, 0.0166 |
| Physics delta, ticks 4, 5, 6 | 0.1, 0.0833, 0.0722 | 0.0789, 0.0665, 0.0582 | 0.0790, 0.0669, 0.0585 |
| Gas 0 to 100 | 19 ticks: 5, 10, 15 | 23 ticks: 4, 9, 13, 18, 22, 27 | 21 to 23 ticks: 5, 9, 13, 18, 22, 27 |
| GO at pass | 278 | 283 | 280 or 281 |

The gas ramp comes from alternating the last bit of `dt`: `dt*300` is then just under or just over 5, as clock noise makes it in the original, and the truncating `FUN_0046f2a0` steps +4 and +5.

Speeds in m/s, means per state, same 22 launches of the original, the port's 16 moments:

| State | Launches, original / port | | +1 s | +4 s | +8 s | Last 2 s |
|---|---|---|---:|---:|---:|---:|
| 11111 | 7 / 7 | original | 6.65 | 20.67 | 27.73 | 27.73 |
| | | port | 6.67 | 20.69 | 27.72 | 27.72 |
| | | difference | +0.35% | +0.10% | -0.03% | -0.01% |
| 22222 | 9 / 3 | original | 6.35 | 17.33 | 23.71 | 25.71 |
| | | port | 6.37 | 17.34 | 23.72 | 25.70 |
| | | difference | +0.30% | +0.06% | +0.01% | -0.03% |
| 21111 | 5 / 3 | original | 6.46 | 19.13 | 27.73 | 27.70 |
| | | port | 6.59 | 19.22 | 27.68 | 27.71 |
| | | difference | +2.05% | +0.44% | -0.18% | +0.05% |
| 12222 | 1 / 3 | original | 6.45 | 18.61 | 26.72 | 27.69 |
| | | port | 6.53 | 18.65 | 26.77 | 27.68 |
| | | difference | +1.19% | +0.21% | +0.18% | -0.04% |

Port's 81-moment sweep now: 11111 38, 22222 21, 21111 14, 12222 5, 21122 3. Reverse: -27.8 m/s steady in state 22222, as before. Opponents' path length over 30 s after GO: 6904, 7842, 6766, 6750, against the original's three runs above, within 1.8% with the same one value left out. `analysis-output.txt` holds the earlier output; run `analyze.py` for the current one.

## The picture, side by side

The game at its own shape: the port at 640x480 in a browser, against the original's screenshots of a run with the same key script (gas at GO+0.5 s). The port stops its ticks at exactly the same moment so the picture holds, and the original's state at those moments comes from the samples. At GO+8.5 s the player's car is at (-15053.8, 1.3, 5235.0), 27.74 m/s in the original, and at (-15052.8, 1.35, 5238.6), 27.75 m/s in the port, both in state 11111.

| Moment | File | Mean colour R, G, B of the whole picture, original | Port | Mean absolute difference per channel |
|---|---|---|---|---:|
| State 8 + 0.3 s, countdown digit | `side-ov8.png` | 102, 120, 75 | 102, 120, 76 | 10.9 |
| GO + 4.5 s | `side-go4.png` | 111, 124, 72 | 112, 125, 73 | 17.0 |
| GO + 8.5 s | `side-go8.png` | 128, 139, 66 | 127, 138, 69 | 25.6 |

By eye: the same framing, the same camera height and distance, the same textures, vertex colours and lamps, the same countdown digit, the same HUD positions and sizes, the same speech panel. The pixel difference comes from motion: a small offset of a textured road at speed adds up to a large per-pixel difference, and the original is drawn by llvmpipe with its own filtering. This is not a pixel comparison and should not be read as one.

Differences seen: the speech line picked at random. Racers around the player at GO+8.5 s: in this run of the original the player had passed two of them (POSITIE 3/5), in the port not yet (5/5), with the player in the same place. The racers' launches vary from run to run in the original as well.

`port-640-*.png` are the port's frames, `shot60-*.png` the original's.
