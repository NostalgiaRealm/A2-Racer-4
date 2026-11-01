# setdebug.exe

Generated from `inventory/modules.json`.

- Module id: `game__setdebug.exe`
- Group: game
- Format: PE32 x86/EXE
- Size: 326144 bytes
- SHA-256: `0e467b035138b3b741830fdbd93e92ba2dcc1b89157b572cd8d582739a877192`
- Original binary (read this, do not modify): `original/install/setdebug.exe`
- Identical copies:
  - `original/disc/Data/MenuData/SetDebug.exe`
- PE timestamp: 1992-06-19 22:22:17 UTC. Delphi linkers write a fixed 1992 value, so that one is not a build date.
- Toolchain signature (Detect It Easy): Linker: Turbo Linker(2.25); Compiler: Borland Delphi(5)[Professional]
- Role (see cited document): Small Delphi helper that toggles debug.ini.

## Files here

Everything below is tool output, not original source. `FUN_*`, `DAT_*` and `param_*` are generated names; types are inferred.

| File | Content |
|---|---|
| `decompiled.c` | every function as Ghidra pseudocode; not verified to compile |
| `functions.csv` | address, size, signature, callers, callees, status, line range in `decompiled.c` |
| `functions/` | one file per function |
| `disassembly.asm` | complete listing of code and defined data |
| `strings.csv`, `strings_raw.csv` | strings Ghidra defined, with referencing functions; raw scan by file offset |
| `symbols.csv`, `imports.csv`, `exports.csv`, `sections.csv` | symbol tables and memory map |
| `calls.csv`, `data_refs.csv` | call graph and data references |
| `recovered_functions.tsv` | functions added after auto-analysis, each with its method; the gap methods are heuristic |
| `unreachable_after_noreturn.csv`, `noreturn_functions.csv` | compiled code after calls that never return; no-return functions |
| `code_gaps.csv`, `instructions_outside_functions.csv` | executable bytes without instructions, by class; decoded code outside any function |
| `failed_functions.csv`, `analysis_errors.csv` | functions without C, with the error; Ghidra disassembly errors |
| `summary.json` | counts for this module |
| `resources/`, `resources.csv` | resources extracted from the binary, when present |
| `delphi/` | class metadata and decoded forms, Delphi modules only |
| `annotated/` | same export with analyst names and comments applied, when present. Analyst names are not original names |

The reusable Ghidra project is `analysis-projects/game__setdebug.exe/analysis.gpr`.
