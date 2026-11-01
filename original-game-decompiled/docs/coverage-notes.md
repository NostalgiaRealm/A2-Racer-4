## Scope

The owner decided on 2026-10-30 that only what runs the game is decompiled: `A2Racer4.exe` (identical to `A2Racer4.icd`), `menu.exe`, `spel.dat`, `rsc.dll`, `setdebug.exe` and `bonus.dso`. Everything else is collected, hashed and listed with a role, but its code was not analyzed: DirectX, DirectX Media, MS Agent, Acrobat Reader and its Java classes, NetManage controls, Microsoft redistributables, the Wise and InstallShield installers, uninstallers, `autorun.exe`, `SERVICE.EXE` and `SERVICE.CPL`.

Statically linked libraries inside `spel.dat`, such as Ipion physics and qhull, count as part of the game, so their functions are covered.

## Collection notes

- **Disc image limits.** The input is a plain 2048-byte-per-sector ISO 9660 image: one data track with a Primary and a Joliet tree, no El Torito, no UDF, no Rock Ridge. Nero wrote it on 2003-12-17. Such an image cannot hold audio tracks, further sessions, subchannel data or weak sectors, so if the physical disc had any of these, they are not here. Evidence inside the image: all 159 files appear in both trees, no sector outside the file and directory areas holds non-zero data, the 4096 bytes past the volume end are zero, and no second volume descriptor exists at any sector boundary. See `inventory/iso/iso_structure_report.json`.
- **Hidden flag.** `A2Racer4.GID` and `Data/MenuData/Menu.GID` carry the ISO hidden flag. They were extracted like every other file.
- **Wine paths.** `INSTALL.LOG` says `C:\windows\system32`, but a 32-bit installer under 64-bit Wine lands in `syswow64`. `original/wine-prefix-external/windows/syswow64/` holds those files.
- **`OLEPRO32.dll`.** The log records "Following file not copied" for it, so the prefix keeps Wine's own DLL. The installer's copy is `extracted/disc-setup.EXE__wise/SYS32/OLEPRO32.dll`.
- **`Davilex Online.url`.** `INSTALL.LOG` records an INI write to `Davilex\Davilex Online.url`, but no such file exists in the prefix, so it is not collected. The log itself holds the URL value.
- **DirectX.** `INSTALL.LOG` records `DirectX: Could not install, error -1.` The DirectX packages come from the disc copy, not from an installed state.
- **Related files left out.** `C:\windows\A2 Racer Screen saver.{dat,dll,exe,scr}` exist in the same Wine prefix. They are not in the given inputs, not in `INSTALL.LOG` and not on this disc, so they were not collected. Hashes: `inventory/related_files_not_collected.csv`.

## Function count notes

- Function counts are Ghidra's, plus logged second-pass recoveries. They are not the number of functions in the original source. C++ exception-unwind funclets count as functions (about 3,500 named `Unwind@` and `Catch@` in `spel.dat`, plus many unnamed ones of a few bytes near the end of `.text`).
- `clean-gap-fragment` entries in `recovered_functions.tsv` are heuristic: a run of undefined executable bytes that decodes cleanly from start to end. Most are real code reached only through exception tables, but one can be data that happens to decode.
- `spel.dat` lists 50 one-byte `__break` functions on `INT3` padding: signature-match noise, not code. They remain in its counts.
- Compiled code after a call that never returns is unreachable at runtime and is not part of any function's C. It stays in `disassembly.asm` and is listed in `unreachable_after_noreturn.csv` with its parent function. In `spel.dat` most of this follows `FUN_004c4150`, the fatal-error routine, which ends in `ExitProcess(1)`.

## Module-specific analysis decisions

- **`rsc.dll`.** Its `.text` holds real code only up to `0x1001569a`. The rest is `INT3` filler, CRT string data and CodeView records for Microsoft CRT objects, and it is marked non-executable before analysis (`inventory/module_overrides.json`). A first run without this produced 199 false functions, 72 of them failing to decompile. The CodeView records are kept in `decompiled/game__rsc.dll/codeview/` but not used for names: only 4 of 46 procedure records land on a function start in this image, and sizes differ.
- **Delphi modules.** Function names such as `TFrmMain.Button1Click` come from VMT, method table and RTTI scans of the binary (`delphi/delphi_seeds.tsv`), so they are real class and method names. Their `CODE` sections also hold metadata and constants, which is why their ambiguous share is high. `delphi/gap_classification.csv` explains it by pattern, and only its `unknown` class is an open question.
- **Analysis depth.** Every function of the decompiled modules has output, but most have generated names only. Analyst names exist for 76 functions in `spel.dat`, 13 in `rsc.dll` and 5 in `A2Racer4.exe`. Most of the 76 in `spel.dat` were taken mechanically from the function's own error string. `menu.exe` and `setdebug.exe` have real Delphi names for 3,958 and part of their functions, and no analyst names. AI, car physics, rendering, HUD and sound were mapped by source file but not analyzed function by function. No independent review of the documents took place.
- **Decompiler memory.** Jobs ran under a hard memory ceiling. A decompiler process killed at that ceiling shows up as `Decompiler process died` in `failed_functions.csv`, and that function has assembly only.
