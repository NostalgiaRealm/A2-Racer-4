# Guide for LLMs and other readers

No prior context is needed. Paths are relative to this file. Read `README.md` first if you need the overview.

## Rules for reading

- Decompiled C is Ghidra pseudocode. `FUN_*`, `DAT_*`, `param_*` and `local_*` are generated, and types are inferred.
- Delphi names such as `TfrmGarage.FormCreate` in `menu.exe` come from metadata in the binary, so they are real. `vmt_0xx` names are slot numbers, not original names.
- Names in `annotated/` are analyst names unless their evidence quotes a string from the binary. Check `annotations_applied.csv`.
- Documents separate **Confirmed**, **Inferred** and **Unknown**. Keep that separation when you quote them.
- Do not call a code path dead or missing without checking `unreachable_after_noreturn.csv` and `code_gaps.csv`.
- `dynamic/RESULTS.md` is the only runtime evidence. Everything else is static.

## Find things

```bash
python3 scripts/lookup.py module spel
python3 scripts/lookup.py func spel.dat 004580e0 --code
python3 scripts/lookup.py func spel.dat init_main --annotated --code
python3 scripts/lookup.py addr spel.dat 004580f0
python3 scripts/lookup.py callers spel.dat 004c4150
python3 scripts/lookup.py callees spel.dat 004580e0
python3 scripts/lookup.py string "Scriptfile not found"
python3 scripts/lookup.py string "overlay" --module spel.dat --raw
python3 scripts/lookup.py asset e00_w_hi
python3 scripts/lookup.py file intro1.mpg
python3 scripts/digest.py spel.dat 0x458000 0x458800 --min-bytes 17
```

`digest.py` is the fastest way to survey a range: it prints size, callers, callees and strings per function.

## Per-module files

See `decompiled/<module_id>/MODULE.md`. Key files are `functions.csv` (with line ranges into `decompiled.c`), `functions/<address>_<name>.c`, `disassembly.asm`, `strings.csv`, `calls.csv` and `data_refs.csv`. For `spel.dat`, `tu_map.csv` assigns functions to original source files. For Delphi modules, `delphi/forms/` has decoded forms and `delphi/delphi_classes.json` has classes.

Module ids: `game__spel.dat`, `game__menu.exe`, `game__rsc.dll`, `game__A2Racer4.exe`, `game__setdebug.exe`, `game__bonus.dso`. Other modules have no `decompiled/` folder by the owner's decision. Their identity and role are in `inventory/modules.csv` and `inventory/module_roles.csv`.

## Orientation

- **Start-up:** `docs/launch-sequence.md`. `spel.dat` entry is `WinMain` at `0x00458270`, and `init_main` at `0x004580e0` lists the subsystems in order.
- **Fatal errors:** `spel.dat` `0x004c4150` never returns. Its 1,600+ call sites pass format strings that say what the caller does, and most of them cite an original source file. This is the best naming evidence in the binary.
- **`spel.dat` layout:** `docs/subsystems/spel-map.md`. Compiled source files are mostly contiguous, so a known function suggests the file of its neighbors.
- **Data to code:** `docs/formats/game-data.md` lists the loader address for each file type and the code that references each INI file.
- **Script to code:** `decompiled/game__bonus.dso/bonus.pseudo.txt` shows bonus logic. Bonus handlers are called by name through `0x00477b90`-`0x00478ac0`, with names like `OnPickup_pw_fastf_ANIM`.
- **DirectX calls** show as vtable offsets such as `(**(code **)(*piVar1 + 0x50))`. They were not resolved to method names.

## Know which file is which

| Kind | Where | Trust |
|---|---|---|
| Original bytes | `original/` | Exact, hashes in `inventory/` |
| Extracted | `extracted/`, `original/disc/` | Exact content; methods in `inventory/nested_archives.csv` |
| Generated | `decompiled/`, `inventory/` | Tool output |
| Analyst | `docs/`, `annotations/` | Check the cited evidence |
| Observed | `dynamic/` | One Wine setup |
| Actual source | none found | `aform.js` in the Acrobat package is Adobe's own script, not game code |

## Reproduce

`scripts/reproduce_all.sh` runs extraction, inventory, decompilation and checks in order. Paths can be set with `INSTALL`, `ISO`, `PREFIX_C`, `OUT`, `PEPY`. Ghidra jobs run under a hard memory limit through a systemd user slice, because the native decompiler once grew to 13.3 GB. The documents are hand-written and not regenerated.

## Open questions

- What `spel.dat` reports back to `menu.exe` after a race.
- Function-level behavior of AI, cars, rendering, HUD and sound.
- Vertex field meanings in `.d3d`, the `.fnt` format, `VDYNS.DAT` fields, and key-level INI use.
- Whether `spel.dat` needs the disc to run, and whether the disc ever had copy protection.
- Exact DaviScript interpreter semantics for conditional jumps and `UPDATE`.
