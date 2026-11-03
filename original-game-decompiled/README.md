# A2 Racer 4 - De politie slaat terug! (decompiled)

Decompilation and documentation of the Dutch racing game by Davilex (version 1.01, 22-12-2000), made from one Wine installation and one disc image for preservation and study. It is published with the browser port in the parent folder. All code here is **generated pseudocode**, not the original source, and it has not been verified to compile. No original source files were found.

## Start here

| Read | For |
|---|---|
| `LLM_GUIDE.md` | Finding a function, address, string, asset or file |
| `COVERAGE_REPORT.md` | Every module, function counts, failures, gaps |
| `docs/launch-sequence.md` | How the game starts |
| `docs/modules/modules.md` | What each program and DLL does |
| `docs/subsystems/spel-map.md` | Map of `spel.dat` by original source file |
| `docs/formats/` | Archives, models, tracks, INI files |
| `decompiled/game__bonus.dso/README.md` | DaviScript bytecode and the bonus script |
| `dynamic/RESULTS.md` | What was actually seen running |

## What is published

This folder as published is not all of the working copy. Left out: the ISO (`original/disc-image/`), the third-party installers on the disc and their extractions (`extracted/disc*/`), `original/wine-prefix-external/`, and installer logs. Their hashes stay in `inventory/`. The list and the reasons: [`../docs/releasing.md`](../docs/releasing.md#what-is-published). Rows below that name those folders describe the working copy.

`rcs.img` is whole in the release archive. In git it is in pieces in `../large-files/`; `npm ci` in the parent folder restores it to `original/install/` and `original/disc/Data/`. The download also has a manifest with every file's size and SHA-256.

`original/install/` is disc 1.01. Davilex's two official updates are in `original/updates/`.

## Folders

| Folder | Kind | Content |
|---|---|---|
| `original/install/` | original | Byte-exact copy of the Wine install folder |
| `original/disc/` | extracted | ISO contents in disc layout |
| `original/disc-image/` | original | Byte-exact ISO |
| `original/wine-prefix-external/` | original | Files the installer placed outside the game folder, shortcuts, registry excerpts |
| `extracted/` | extracted | Installer and cabinet contents; `game-archives/` has 3,550 unpacked game resources |
| `decompiled/` | generated | One folder per module, see its `MODULE.md` |
| `decompiled/*/annotated/` | generated + analyst names | Same export with analyst names and comments |
| `analysis-projects/` | generated | Reusable Ghidra 12.1.4 projects |
| `annotations/` | analyst | Names and comments with evidence |
| `docs/` | analyst | Documents. `docs/original-documentation/` holds text extracted from the manual and help files |
| `inventory/` | generated | Hashes, module table, roles, coverage, validation results |
| `dynamic/` | observed | Runtime test logs and screenshots |
| `scripts/` | tooling | Everything used to build this package; `reproduce_all.sh` runs the steps in order |

## Scope

Only what runs the game is decompiled: `A2Racer4.exe` (same bytes as `A2Racer4.icd`), `menu.exe`, `spel.dat`, `rsc.dll`, `setdebug.exe` and `bonus.dso`. This was the owner's decision. DirectX, DirectX Media, MS Agent, Acrobat Reader, NetManage controls, installers, uninstallers, `autorun.exe` and `SERVICE.EXE` are collected, hashed and listed in `inventory/module_roles.csv`, but their code was not analyzed.

## Results

| Module | Functions | Decompiled to C | Assembly only |
|---|---|---|---|
| `spel.dat` | 13,762 | 13,760 | 2 |
| `menu.exe` | 7,250 | 7,249 | 1 |
| `setdebug.exe` | 3,532 | 3,532 | 0 |
| `rsc.dll` | 480 | 480 | 0 |
| `A2Racer4.exe` | 149 | 149 | 0 |

`bonus.dso` decodes completely: 668 items, 724 instructions.

## Limits

- Most `spel.dat` functions have generated names only. AI, car physics, rendering, HUD and sound are mapped by source file but not analyzed function by function. This is the largest gap.
- When this package was made `spel.dat` had not been observed running: the test run here reached the menu's intro video. Later reference runs of the original, under Wine and on emulated Windows 98, are in the port: `../tools/reference-wine/`, `../tools/reference-86box/`, `../evidence/`.
- Field meanings in models and track files are only partly known; their layouts are checked against every file.
- Claims in the documents were checked by the same analyst who wrote them, with no independent review.
- The image is a single-track 2048-byte ISO written by Nero in 2003. It cannot show audio tracks, further sessions or weak sectors the physical disc may have had.

## Rights

The game, its code, media and fonts retain their owners' rights. Extraction does not imply ownership or a redistribution licence. This project is not affiliated with Davilex.
