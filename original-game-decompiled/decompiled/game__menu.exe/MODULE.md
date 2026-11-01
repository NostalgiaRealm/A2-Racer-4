# menu.exe

Generated from `inventory/modules.json`.

- Module id: `game__menu.exe`
- Group: game
- Format: PE32 x86/EXE
- Size: 1158656 bytes
- SHA-256: `d56c94301a56dc6c20ac278e15abb2fdccc9a144b6e59986897c67740ba2b0f0`
- Original binary (read this, do not modify): `original/install/menu.exe`
- Identical copies:
  - `original/disc/Data/MenuData/Menu.exe`
- PE timestamp: 1992-06-19 22:22:17 UTC. Delphi linkers write a fixed 1992 value, so that one is not a build date.
- Toolchain signature (Detect It Easy): Linker: Turbo Linker(2.25); Compiler: Borland Delphi(5)[Professional]
- Version info: CompanyName=Davilex; FileDescription=Race Menu; FileVersion=1.0.0.59; ProductVersion=1.0.0.0
- Role (see cited document): Delphi front end: menus, player data, race setup.

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

The reusable Ghidra project is `analysis-projects/game__menu.exe/analysis.gpr`.
