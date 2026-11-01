# Runtime observation

Two short runs on 2026-10-30 with `dynamic/run_observation.sh`, under Wine 11.20 (Staging), with no real display. Everything here is one test setup under Wine, not behavior on Windows from the period. The rest of this package is static analysis.

## Observed

Run 1, no CD drive (`dynamic/logs/nocd/`, `screenshots/nocd_*`):
- `A2Racer4.exe` started `menu.exe /FirstTime` (`process_creation.txt`).
- `menu.exe` loaded `RSC.DLL`, `DDraw.dll`, `DSound.dll` and `avifil32.dll`, and opened `menu.ini`, `MenuCaps.ini`, `debug.ini`, `game.ini`, `raser.ini`, `MenuRcs.IND`, `MenuRcs.IMG`, `menumsc.wav`, `static.ini`, `L0_ANIM.INI` (`game_dir_files_touched.txt`).
- It wrote `menu.log` and `MenuTrac.log`, even though `debug.ini` has `debug=0`.
- It stopped at its own dialog "CD niet gevonden".

Run 2, a copy of `intro1.mpg` as `DATA\INTRO1.MPG` on mapped drive `D:` (`dynamic/logs/withcd/`, `screenshots/withcd_*`):
- No CD dialog this time. `quartz.dll` and `mciqtz32.dll` loaded, and the intro video was playing at 60 seconds.
- `menu.ini`, `game.ini` and `raser.ini` were unchanged when the run ended.

## Not observed

- `spel.dat` never ran: both runs ended on their 75-second timeout inside the menu, and no input tool was available to click through it. So no race, no Direct3D rendering, no `bonus.dso` loading and no exit-code handoff were seen.
- `/Default`, `setdebug.exe` and `rsc.dll` function-level behavior.
- Behavior with a real disc or on Windows.

## Commands

```bash
distrobox-host-exec systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0 dynamic/run_observation.sh "$PWD"
distrobox-host-exec systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0 dynamic/run_observation.sh "$PWD" withcd
```

The script uses a throwaway Wine prefix under `dynamic/.work`, a copy of `original/install`, and Xvfb display `:97`. The prefix was deleted after each run; `~/.wine` was not used.
