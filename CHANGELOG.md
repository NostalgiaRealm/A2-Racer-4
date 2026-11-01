# Changelog

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
