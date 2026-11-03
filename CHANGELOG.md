# Changelog

## 1.1.1 — 2026-11-03

The original game icon, from `A2Racer4.exe`, as the browser tab's icon. [Release notes](docs/releases/1.1.1.md).

### Added

- `favicon.ico`: the icon resource of `A2Racer4.exe` (32x32, 256 colours) put together as an icon file without conversion, by `tools/prepare-desktop-icons.mjs`. The web build and every desktop build carry it. The desktop packages already used the same icon for the app.

## 1.1.0 — 2026-11-03

The race now runs the owner's fixes from `A2-Racer-4-Fixes` 1.5.4 that matter at its 60 ticks per second: his own added code, lifted to WebAssembly with the rest of `spel.dat`. Details and checks: [release notes](docs/releases/1.1.0.md).

### Changed

- **Hung cars** (his part 11): a car that stands still for 3 s with an axle off the ground or tipped over goes back on the road.
- **Cars that lift up or float** (part 12): body contacts end when they leave their triangle, so a car no longer climbs an invisible plane nose first.
- **The reset** (part 12): no more `Illegal chunk` at the last section, no landing under the road on etappes 5 and 6 or on a tunnel on 7, lanes freed, and Enter waits only after Enter.
- **Frame rate** (part 13): police brake, Supercop, chase camera, car lighting, skid marks, smoke, mud and water, pickups, animated objects, debris, the speed camera flash and the turbo tank behave as at 25 FPS. The camera lags more and skid marks last longer than in 1.0.0.

### Recompiler

- `tools/recomp/owner-fixes/`: his source, bytes and hook table. `pushad`, `popad`, `pause`, x87 arguments for added functions, tail jumps into inlined helpers, spliced hooks.
- `tools/check-owner-fixes.mjs`: whole bot races on every etappe, reading the state his code keeps.

## 1.0.0 — 2026-11-01

First public release: the browser and desktop port, and the decompile of the original game. Details and what was and was not checked: [release notes](docs/releases/1.0.0.md).

### Port

- The race is the original `spel.dat` (version 1.01), recompiled from x86 to WebAssembly, on a JavaScript host for its Win32 and DirectX 5 calls. Three.js draws its captured Direct3D calls.
- The menu is `menu.exe` rewritten by hand from its forms and code. All artwork, music, speech and text are the originals, in Dutch.
- Davilex's two official updates are in: track 9, the Country etappe, and car 7, the truck De Schaduw.
- Both of the race's paths run: with a 3D card, and with `3D kaart` off the 8-bit software path at 640x480 and 320x200.
- Adaptations, all listed in [intentional differences](docs/intentional-differences.md): any screen shape, render scale, touch controls, gamepad, the traffic fix from `A2-Racer-4-Fixes`.

### Decompile

- `original-game-decompiled/`: all game modules in generated C and assembly (`spel.dat`, `menu.exe`, `setdebug.exe`, `rsc.dll`, `A2Racer4.exe`), `bonus.dso` decoded, unpacked game resources, Ghidra projects, format documents, the game's own files and the two updates. What is left out and why: [releasing](docs/releasing.md#what-is-published).

### Builds

- Desktop packages for Linux x64, Windows x64, macOS Intel and macOS Apple Silicon, in Electron. Static web build. Source archive, decompile archive with manifest, checksums.
