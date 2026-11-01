# Installed updates

The owner installed Davilex's two official updates into the Wine installation on 2026-10-30 at 23:05, after this package's snapshot in `../install` was taken. `../install` and `../disc` are version 1.01 without them. The installation is the authority for the port (`docs/provenance.md`), so its state is recorded here.

| Item | What it is |
|---|---|
| `a2racer4_update_car.exe` | Car update: copied from `/home/rick`, file date 2009-11-18. Readme `carupd.txt`, "Houten, november 2000" |
| `a2racer4_update_track.exe` | Track update: copied from `/home/rick`, same date. Readme `trackupd.txt` |
| `installed/` | Every file of the installation that is new or differs from `../install`, copied unchanged from `~/.wine/drive_c/Program Files (x86)/Davilex/A2 Racer 4/` |
| `delta.csv` | The same list with size, SHA-256 and whether new or changed |

`tools/prepare-assets.py` lays `installed/` over `../install`. `spel.dat`, `menu.exe`, `static.ini`, `menu.ini`, `rcs.img`, `rc.img` and `menurcs.img` are not touched by the updates.

The car update overwrites `game.ini` with a copy from the developers' machine: etappe 8, car 7, tune-ups on. The menu writes those keys before every race, so a player does not see that. Checks without the menu pin them: `source/host/race-setup.js`.
