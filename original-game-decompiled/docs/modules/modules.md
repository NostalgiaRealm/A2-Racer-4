# What each program does

Every code module is in `inventory/module_roles.csv`, with vendor, version, role and whether a game module imports it statically. This page covers the programs that matter and the other packages as groups.

## Confirmed

### Modules that run the game (decompiled)

| Module | Toolchain | What it does | Evidence |
|---|---|---|---|
| `A2Racer4.exe` | MSVC, source path `C:\Work\Motor\main.cpp` | Launcher: alternates `menu.exe` and `spel.dat` | `docs/launch-sequence.md` |
| `A2Racer4.icd` | same file | Byte-identical copy of `A2Racer4.exe`. No game module contains the name `.icd` | SHA-256, raw string scan |
| `menu.exe` | Delphi 5, source paths `D:\aCop\source\*.pas` | Front end: 45 forms for players, garage, tracks, options, results. Plays `menumsc.wav`, shows the intro, writes the INI files | forms in `decompiled/game__menu.exe/delphi/forms/` |
| `spel.dat` | MSVC 6, source paths `C:\Work\A2IV\...` | The game: PE executable, 13,762 functions | `docs/subsystems/spel-map.md` |
| `rsc.dll` | MSVC 6 debug build, `D:\seestuff\Rsc\Debug\Rsc.pdb` | Archive I/O for `menu.exe` (`xvga_*` exports). `menu.exe` imports it; `spel.dat` does not | import tables, `docs/formats/resource-archives.md` |
| `setdebug.exe` | Delphi 5, `D:\Tools\SetDebug\source\SetDebug.dpr` | Toggles `[general] debug` in `debug.ini` and shows its on or off message | strings at `0x00445ab4`, `debug.ini` |
| `bonus.dso` | DaviScript compiler, object version 27 | Compiled script for bonus objects: 190 script functions with code, run by `spel.dat` | `decompiled/game__bonus.dso/README.md` |

Imports of the native game modules:

- `spel.dat`: `USER32`, `DDRAW`, `DINPUT`, `DSOUND`, `KERNEL32`, `ADVAPI32`, `GDI32`, `WINMM`.
- `menu.exe`: Windows base DLLs, `oleaut32`, `ole32`, `comctl32`, `shell32`, `winmm`, `avifil32`, `DSound`, `DDraw`, `RSC`.
- `A2Racer4.exe`: `KERNEL32`, `USER32`, `GDI32`.
- `rsc.dll`: `KERNEL32`, `USER32`.

### Other packages (inventory only, code not analyzed)

The owner decided these are not decompiled. Roles below come from version info, names and packaging.

| Group | Modules | What it is |
|---|---|---|
| `directx` | 61 | DirectX redistributable: `DXSetup/` and `DirectX.cab` |
| `dxmedia` | 57 | DirectX Media package: `dxmedia/DXMEDIA.exe` |
| `msagent` | 13 | Microsoft Agent package: `MSagent/MSagent.exe` |
| `acrobat` | 322 | Acrobat Reader installer, including 245 Java classes. `Handleiding.txt` says it is there to read the PDF manual |
| `netmanage` | 4 | NetManage controls that `setup.EXE` installs: `httpct.ocx`, `NMOCOD.DLL`, `NMSCKN.DLL`, `NMORENU.DLL` |
| `ms-redist` | 9 | Microsoft files in Wise payloads, such as `RICHED20.DLL` and `OLEPRO32.dll` |
| `installer` | 12 | Wise `setup.EXE`, `service/Setup.exe`, uninstallers (`UnInst32.exe`, `UnWise.exe`, `UNINST32.EXE`) and Wise-internal files |
| `davilex` | 3 | `autorun.exe` (version info: CD-ROM AutoRun program), `SERVICE.EXE` and `SERVICE.CPL` (Davilex Service) |

## Inferred

- `SERVICE.EXE` is started from the menu. `menu.exe` holds that name at `0x004a7ba8`, referenced by `0x004a7a48`, but no run reached this.
- `rsc.dll` is used only by `menu.exe`, because `spel.dat` has its own archive code from `D:\Work\dxdraw\Fileio.cpp`.
- The menu uses Microsoft Agent for the "Hunny" character: it holds the names `hunny.acs` and `agent.ini` and has `TAgent*` classes. The Agent DLLs are not static imports, so this use would go through COM.
- `spel.dat` has no static link to `quartz`. The Wine run loaded `quartz.dll` for the menu's intro video.

## Unknown

- The exact job of each Wise-internal stream under `extracted/*__wise/_unnamed/`. They were not analyzed.
- Whether the game needs the DirectX Media or Microsoft Agent packages to run, or only uses them when present.
