# A2Racer4.exe

Generated from `inventory/modules.json`.

- Module id: `game__A2Racer4.exe`
- Group: game
- Format: PE32 x86/EXE
- Size: 36864 bytes
- SHA-256: `8b5acf2e534c4111e7eeebfe9961e95378678ee1ff557b26369b27c7b5bb0f09`
- Original binary (read this, do not modify): `original/install/A2Racer4.exe`
- Identical copies:
  - `original/install/A2Racer4.icd`
  - `original/disc/Data/A2Racer4.exe`
  - `original/disc/Data/A2Racer4.icd`
- PE timestamp: 2000-10-20 06:58:20 UTC. Delphi linkers write a fixed 1992 value, so that one is not a build date.
- Toolchain signature (Detect It Easy): Linker: Microsoft Linker(5.12.8034); Compiler: Microsoft Visual C/C++(12.00.8447)[C++]
- Role (see cited document): Launcher, also present byte-identical as A2Racer4.icd. Runs menu.exe and spel.dat in turn.

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

The reusable Ghidra project is `analysis-projects/game__A2Racer4.exe/analysis.gpr`.
