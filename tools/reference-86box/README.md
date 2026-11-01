# Reference runs of the 8-bit path under 86Box

Wine cannot run `RESOLUTION` 0 and 1: its Direct3D refuses an 8-bit target. Windows 98 with its own DirectX can. These scripts run the original `spel.dat` on a throwaway copy of the owner's 86Box machine and take screenshots of the guest. Findings: `docs/research/render-8bit.md`. Results: `evidence/reference-86box/results.md`.

## What the scripts keep to

- The owner's disk image and machine folder are only read. `prepare.sh` copies them to `REFBOX`, which must be outside the project. Delete it when done.
- The game on the copy is `original-game-decompiled/original/install`, disc 1.01, without the updates, with `spel.dat` as `SPEL.EXE`. A batch file in the StartUp folder starts it with `NOCD` set.
- Display: a private Xvfb on `:174`. No sound device, no network, Flatpak's sockets for Wayland and PulseAudio closed. 86Box's global configuration goes to `REFBOX` with `-O`.
- Flatpak moves 86Box out of the systemd scope of `run.sh`, so `drive.py` stops its own instances by the machine's folder in their command line, and refuses to start while one runs. A second writer would damage the copy.
- Nothing reads the guest's memory: the only output is the screen.

## Commands

From a distrobox, prefix with `distrobox-host-exec`.

```bash
env REFBOX=/tmp/a2r4-refbox tools/reference-86box/prepare.sh
```

```bash
env REFBOX=/tmp/a2r4-refbox tools/reference-86box/run.sh --name rest640 --resolution 1 --seconds 210 --every 10
```

```bash
env REFBOX=/tmp/a2r4-refbox tools/reference-86box/run.sh --name smoke --resolution 0 --seconds 100 --every 0.7 --game-at 60 --keys 6,Up,9 --keys 15,Down,7 --keys 15,Left,3 --machine Machine.cpu_family=k6_2 --machine Machine.cpu_speed=550000000 --machine Machine.cpu_multi=5.5
```

Options: `--keys seconds,key,hold` counts from `--game-at`, seconds after boot. The desktop is 640x480 too, so nothing marks the game's start: look at the screenshots first. `--machine Section.key=value` changes the copy's configuration and stays for later starts. `--burst from to` takes screenshots as fast as they come.

The window has a menu bar of 30 pixels. A guest frame at 640x480 is `-crop 640x480+0+30`; at 320x200 the emulated card doubles it, `-crop 640x400+0+30 -filter point -resize 320x200!`.

## Setting the port against a frame

The dev server must run. The port's frame at rest needs the view distance the slow machine fell to:

```bash
node tools/reference-86box/port-rest.mjs --resolution 1 --size 640x480 --chunks 15 --out port-640.png
```

```bash
python3 tools/reference-86box/compare.py port-640.png evidence/reference-86box/guest-640-rest.png --region world=70,440,120,470 --region hudtext=500,630,10,110 --out side.png
```

At `RESOLUTION` 0 take the port at 640x480 and reduce it with `-filter point -resize 320x200!` first.
