# rsc.dll

Generated from `inventory/modules.json`.

- Module id: `game__rsc.dll`
- Group: game
- Format: PE32 x86/DLL
- Size: 217134 bytes
- SHA-256: `9dd77374ae5b636734260e993830f9d4ea10f21728a5d1debe0c10de87f3cda4`
- Original binary (read this, do not modify): `original/install/rsc.dll`
- Identical copies:
  - `original/disc/Data/MenuData/Rsc.dll`
- PE timestamp: 2000-05-30 14:59:13 UTC. Delphi linkers write a fixed 1992 value, so that one is not a build date.
- Toolchain signature (Detect It Easy): Linker: Microsoft Linker(6.00.8447); Compiler: Microsoft Visual C/C++(12.00.8447)[C++]
- Role (see cited document): Resource archive I/O used by menu.exe (xvga_* exports).
- Analysis override: From 0x1001569b to the end of .text: INT3 filler, CRT string data and CodeView debug records (see decompiled/game__rsc.dll/codeview/). No call or data reference from real code enters it, and every decompiler failure of the first run was inside it. The CodeView records are NOT used for naming: only 4 of 46 procedure records land on a function start in this image and sizes differ, so their offsets belong to Microsoft's CRT build, not to this DLL.

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

The reusable Ghidra project is `analysis-projects/game__rsc.dll/analysis.gpr`.
