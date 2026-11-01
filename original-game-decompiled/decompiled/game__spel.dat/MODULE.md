# spel.dat

Generated from `inventory/modules.json`.

- Module id: `game__spel.dat`
- Group: game
- Format: PE32 x86/EXE
- Size: 1875968 bytes
- SHA-256: `ccd1b03472b25c8b7acacf4ba7e6abf60f657dfff2efd90f29e740b03f62286b`
- Original binary (read this, do not modify): `original/install/spel.dat`
- Identical copies:
  - `original/disc/Data/spel.dat`
- PE timestamp: 2000-10-20 07:14:11 UTC. Delphi linkers write a fixed 1992 value, so that one is not a build date.
- Toolchain signature (Detect It Easy): Linker: Microsoft Linker(5.12.8034); Compiler: Microsoft Visual C/C++(12.00.8447)[C++]
- Role (see cited document): The game itself: a PE executable with a .dat name.

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

The reusable Ghidra project is `analysis-projects/game__spel.dat/analysis.gpr`.
