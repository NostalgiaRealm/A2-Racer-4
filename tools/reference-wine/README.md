# Reference runs of the original race program under Wine

Runs the original `spel.dat` in a throwaway Wine prefix on etappe 0, reads its memory while it runs, and runs the same scripted scenarios on the port for a side-by-side table. Results: `evidence/reference-wine/results.md`.

## What the scripts keep to

- `~/.wine`, the original installation, the ISO and `original-game-decompiled/` are only read. The game runs from a copy in `$REFWINE/prefix/drive_c/A2R4`, with `spel.dat` copied byte for byte to `spel.exe`.
- That copy is `original-game-decompiled/original/install`: disc 1.01, without the two updates. For etappe 0, car 0 the data is the same (`docs/provenance.md`, Installed updates). The port's half reads `public/assets/game`, which has the updates, and pins the race with `pinRace`. To run the original on etappe 9 or car 7, lay `original/updates/installed/` over the copy first; that has not been done.
- `REFWINE` is the working folder, default `~/.cache/a2r4-refwine`. The measurement used a folder on tmpfs. It must not be `$HOME` or `~/.wine`, and it has to be the same path on the host. Delete it when done.
- Display: a private Xvfb on `:173` (`REFWINE_DISPLAY`), with `WAYLAND_DISPLAY` unset. `refwine.py` refuses to start if that display is in use.
- Sound: `ALSA_CONFIG_PATH` points at a file with only a null device, Wine's audio driver is set to `alsa`, and `PULSE_SERVER`, `PIPEWIRE_REMOTE` and `XDG_RUNTIME_DIR` point nowhere real. `HOME` and the XDG folders point into `$REFWINE`, so nothing is written to the real home.
- Every start runs in its own systemd scope with `MemoryMax=4G`, under `timeout`. At the end of a start `refwine.py` runs `wineserver -k` with `WINEPREFIX` set to the throwaway prefix and stops its own Xvfb. It never looks up a process by name alone: the game's process is the one with our `spel.exe` mapped at `0x400000`.

## Commands

From a distrobox, prefix with `distrobox-host-exec`. On the host, run them directly.

```bash
# Once: creates the prefix (about 15 s), sets VideoMemorySize=32 and the audio driver, copies the game.
systemd-run --user --scope -q -p MemoryMax=4G -p MemorySwapMax=0 tools/reference-wine/prepare.sh

# One start of the game with one key script. Raw samples go to evidence/reference-wine/raw.
tools/reference-wine/run.sh --name launch-a --pace 60 --gas-at go+0.5 --gas-for 12 --after 0.5
tools/reference-wine/run.sh --name reverse-a --pace 60 --down-at go+1 --down-for 8 --after 0.5
tools/reference-wine/run.sh --name brake-a --pace 60 --gas-at go+1 --gas-for 5 --down-after-gas 0 --down-for 6
tools/reference-wine/run.sh --name racers-a --pace 60 --racers --traffic --seconds 31 --max-seconds 60
tools/reference-wine/run.sh --name free-a --gas-at go+1 --gas-for 12 --shot go+6          # no tick limit
env REFWINE_CLOCK_START=host tools/reference-wine/run.sh --name host-a --gas-at go+1      # host's clock

# The same on the port, no Wine, no display. Inside or outside the distrobox.
node tools/reference-wine/port-launch.mjs --name port-launch-a --gas-at go+0.5 --gas-for 12 --after 0.5
node tools/reference-wine/port-launch.mjs --name port-reverse-a --down-at go+1 --down-for 8 --after 0.5

# Everything that results.md is based on, in order, about 20 minutes:
tools/reference-wine/campaign.sh

# RESOLUTION for one start. At 0 and 1 Wine refuses the 8-bit target in CreateDevice, so that path has its own tool: tools/reference-86box/.
tools/reference-wine/run.sh --name r1 --resolution 1 --wine-debug err+all,warn+ddraw --load-timeout 40 --max-seconds 70

# Tables:
python3 tools/reference-wine/analyze.py regimes evidence/reference-wine/raw/launch60-*.json.gz -- evidence/reference-wine/raw/port-launch60-*.json.gz
python3 tools/reference-wine/analyze.py details evidence/reference-wine/raw/launch60-*.json.gz
python3 tools/reference-wine/analyze.py clock evidence/reference-wine/raw/launch60-01.json.gz
python3 tools/reference-wine/analyze.py firstdt evidence/reference-wine/raw/launch60-*.json.gz
python3 tools/reference-wine/analyze.py rate evidence/reference-wine/raw/free-*.json.gz
python3 tools/reference-wine/analyze.py reverse evidence/reference-wine/raw/reverse60-*.json.gz
python3 tools/reference-wine/analyze.py brake evidence/reference-wine/raw/brake60-*.json.gz
python3 tools/reference-wine/analyze.py racers evidence/reference-wine/raw/racers60-*.json.gz
python3 tools/reference-wine/analyze.py traffic evidence/reference-wine/raw/racers60-*.json.gz

# The GL renderer as Wine reports it: one short start with the d3d trace, about 750 MB of log in 5 s.
tools/reference-wine/run.sh --name gl-info --max-seconds 5 --wine-debug=-all,+d3d
grep -a -m3 -E 'GL_RENDERER|GL_VERSION|Overriding amount' "$REFWINE/logs/gl-info.wine.log"; rm "$REFWINE/logs/gl-info.wine.log"

# When done: nothing else keeps these.
rm -rf "$REFWINE"
```

Anchors for `--gas-at`, `--down-at` and `--shot`: `go+X` counts from the first sample with overlay state 11 (GO), `ov8+X` from overlay state 8, `start+X` from the start flag `0x6fba9c`.

## The files

| File | Purpose |
|---|---|
| `env.sh` | The isolated environment. Sourced inside the scope, since `systemd-run` needs the real `XDG_RUNTIME_DIR` |
| `prepare.sh` | Creates the prefix and the working copy |
| `run.sh`, `inner.sh` | One start: scope and timeout, then the environment and the time namespace |
| `refwine.py` | Starts Xvfb and the game, samples `/proc/<pid>/mem`, sends XTEST keys, limits the tick rate, cleans up |
| `port-launch.mjs` | The same key script on the port's real source files, fixed tick |
| `analyze.py` | Tables from the raw samples |
| `campaign.sh` | All runs |

## Two things the harness adds

**Clean clock.** Wine's `QueryPerformanceCounter` counts from the host's boot, and the game keeps its clock in a 32-bit float, so at a day of uptime every time step is rounded to 7.8 ms (owner's README, part 9). `inner.sh` runs everything in a Linux time namespace (`unshare --user --map-current-user --time --monotonic=... --boottime=...`) that starts the clocks near 10 s. The game's bytes and Wine are unchanged. `REFWINE_CLOCK_START=host` leaves the host's clock in place.

**Tick limit.** Under Xvfb with llvmpipe nothing limits the rate and the game runs at about 360 ticks per second, where the gas pedal hardly rises on a clean clock. `--pace N` limits it to N ticks per second from outside: the sampler sees the game's clock field change at the start of a pass, sends `SIGSTOP`, reads the sample while the process stands still, and sends `SIGCONT` at the next multiple of 1/N s. So the wait falls where a vsync wait would fall, one clock read after the flip. The game's bytes are unchanged. It adds a time step jitter of about 0.2 ms from the difference in work between two passes. One sampled row labelled tick n holds the physics state after pass n and the clock of pass n+1.
