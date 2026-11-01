#!/usr/bin/env python3
"""Write decompiled/<id>/MODULE.md for every code module: identity, provenance and what each file here is.

Usage: write_module_records.py <output_root>
Roles come from inventory/module_roles.csv when that file exists.
"""
import csv, json, os, sys

ROOT = sys.argv[1]
roles = {}
p = os.path.join(ROOT, 'inventory/module_roles.csv')
if os.path.exists(p):
    for r in csv.DictReader(open(p, newline='', errors='replace')):
        roles[r.get('id', '')] = r
overrides = {}
p = os.path.join(ROOT, 'inventory/module_overrides.json')
if os.path.exists(p):
    overrides = json.load(open(p))
n = 0
for m in json.load(open(os.path.join(ROOT, 'inventory/modules.json'))):
    if m['analysis_scope'] != 'decompile':
        continue
    d = os.path.join(ROOT, 'decompiled', m['id'])
    os.makedirs(d, exist_ok=True)
    v = m.get('version_info') or {}
    r = roles.get(m['id'], {})
    L = ['# %s' % m['name'], '', 'Generated from `inventory/modules.json`.', '',
         '- Module id: `%s`' % m['id'], '- Group: %s' % m['group'], '- Format: %s %s' % (m['format'], m.get('arch', '')),
         '- Size: %d bytes' % m['size'], '- SHA-256: `%s`' % m['sha256'], '- Original binary (read this, do not modify): `%s`' % m['primary_location']]
    if len(m['locations']) > 1:
        L.append('- Identical copies:')
        L += ['  - `%s`' % x for x in m['locations'] if x != m['primary_location']]
    if m.get('timestamp_utc'):
        L.append('- PE timestamp: %s UTC. Delphi linkers write a fixed 1992 value, so that one is not a build date.' % m['timestamp_utc'])
    if m.get('compiler'):
        L.append('- Toolchain signature (Detect It Easy): %s' % m['compiler'])
    if m.get('packer'):
        L.append('- Installer or packer signature: %s' % m['packer'])
    if v:
        L.append('- Version info: ' + '; '.join('%s=%s' % kv for kv in v.items() if kv[1]))
    if r.get('role'):
        L.append('- Role (%s): %s' % (r.get('label', 'unlabeled'), r['role']))
    if m['id'] in overrides:
        L.append('- Analysis override: %s' % overrides[m['id']].get('reason', ''))
    if m['format'] == 'dso':
        L += ['', 'This is compiled DaviScript bytecode, not a native module: Ghidra does not apply. See `README.md` in this folder.', '']
        open(os.path.join(d, 'MODULE.md'), 'w').write('\n'.join(L))
        n += 1
        continue
    L += ['', '## Files here', '',
          'Everything below is tool output, not original source. `FUN_*`, `DAT_*` and `param_*` are generated names; types are inferred.', '',
          '| File | Content |', '|---|---|',
          '| `decompiled.c` | every function as Ghidra pseudocode; not verified to compile |',
          '| `functions.csv` | address, size, signature, callers, callees, status, line range in `decompiled.c` |',
          '| `functions/` | one file per function |',
          '| `disassembly.asm` | complete listing of code and defined data |',
          '| `strings.csv`, `strings_raw.csv` | strings Ghidra defined, with referencing functions; raw scan by file offset |',
          '| `symbols.csv`, `imports.csv`, `exports.csv`, `sections.csv` | symbol tables and memory map |',
          '| `calls.csv`, `data_refs.csv` | call graph and data references |',
          '| `recovered_functions.tsv` | functions added after auto-analysis, each with its method; the gap methods are heuristic |',
          '| `unreachable_after_noreturn.csv`, `noreturn_functions.csv` | compiled code after calls that never return; no-return functions |',
          '| `code_gaps.csv`, `instructions_outside_functions.csv` | executable bytes without instructions, by class; decoded code outside any function |',
          '| `failed_functions.csv`, `analysis_errors.csv` | functions without C, with the error; Ghidra disassembly errors |',
          '| `summary.json` | counts for this module |',
          '| `resources/`, `resources.csv` | resources extracted from the binary, when present |',
          '| `delphi/` | class metadata and decoded forms, Delphi modules only |',
          '| `annotated/` | same export with analyst names and comments applied, when present. Analyst names are not original names |',
          '', 'The reusable Ghidra project is `analysis-projects/%s/analysis.gpr`.' % m['id'], '']
    open(os.path.join(d, 'MODULE.md'), 'w').write('\n'.join(L))
    n += 1
print('module records', n)
