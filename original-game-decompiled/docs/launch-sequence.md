# Launch sequence

How the game starts, from the installed launcher to the race. Addresses are image addresses in each module's Ghidra export.

## Confirmed

Static evidence from the code:

1. `A2Racer4.exe` `WinMain` (`0x00401250`) registers window class `MOTOR` and creates a full-screen window sized from `GetSystemMetrics`.
2. It then loops. It runs `menu.exe` with the argument `/FirstTime`, and with `/Default` on later rounds, through a synchronous spawn (`0x00401130`).
3. After `menu.exe` ends, `0x004010c0` reads `[General] ExitCode` from `Menu.ini` in the current directory.
4. Exit code `0x28` makes the launcher run `spel.dat`, wait for it, and return to step 2 with `/Default`. Any other value makes it close its window and end.
5. `menu.exe` writes that value: `TMenuIni.vmt_01c` (`0x0048f168`) saves `EXITCODE` as `0x28` or `0xFF`, depending on a flag in its data object.
6. `menu.exe` looks for `/FIRSTTIME` in `TMenuIni.vmt_018` (`0x0048edec`) and `0x004a9170`.
7. `menu.exe` searches drives `C:` to `Z:` for the `INTROAVI` path from `menu.ini` (`DATA\INTRO1.MPG`) in `0x004a5c24`. With no match it logs `search on cd: intro not found`.
8. `spel.dat` runs `init_main` (`0x004580e0`) in this order: script engine and `bonus.dso`, settings, language, 2D, input, 3D, game, timers, cop radio. Then comes `start_game` and the main loop, which calls `handle_game` and the message pump until a flag clears. `exit_main` (`0x00458210`) closes it down. The log strings in `WinMain` (`0x00458270`) name these steps.

Runtime evidence (see `dynamic/RESULTS.md`, Wine only):

- The launcher started `menu.exe /FirstTime` from the game folder.
- With no drive holding the intro, the menu showed its "CD niet gevonden" dialog.
- With the intro on a mapped drive, the menu continued and played `intro1.mpg`.

## Inferred

- The launcher passes `spel.dat` an empty argument string. The buffer it passes (`0x00407f40`) has only read references, so it stays zero. No run reached this step.
- Running a `.dat` file works because the spawn call starts it as an executable image, and `spel.dat` is a normal PE. This follows from the code path; it was not observed.
- Race setup passes through INI files: `menu.exe` writes `game.ini` and `raser.ini`, and `spel.dat` reads them (`[ETAPPE]` and others). Both modules reference these names, but not every key was traced.

## Unknown

- What `spel.dat` reports back to the menu after a race, beyond the files both modules touch. `TRaceState` and `TRace` in `menu.exe` are the place to start.
- `spel.dat` imports `GetDriveTypeA` and has `D:\Work\dxdraw\cdrom.cpp` code (`0x004ced80`, a device-change handler). Whether `spel.dat` itself needs the disc was not established.
- Whether the disc was ever protected. `Data/default.txt` holds CD and debugger messages, but no game module contains that file name.

## Before the launcher

Only data files were read for this part, since `autorun.exe` and the installers are out of scope. `autorun.inf` opens `autorun.exe` and lists `setup.exe` under `Execute`. `INSTALL.LOG` shows the install result, and `system.reg.excerpt.txt` holds the `Software\Davilex\A2 Racer 4` keys.
