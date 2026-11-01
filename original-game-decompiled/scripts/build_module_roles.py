#!/usr/bin/env python3
"""Write inventory/module_roles.csv: one row per non-Java code module, with no code analysis for inventory-only modules.

Usage: build_module_roles.py <output_root>
Roles of inventory-only modules come from version info and the package they ship in. The static-import column comes
from the import tables of the game modules. Dynamic use (COM, LoadLibrary) is not visible there: see docs/modules/.
"""
import csv, json, os, sys

ROOT = sys.argv[1]
PACKAGE = {
    'directx': 'DirectX redistributable on the disc (DXSetup folder and DirectX.cab)',
    'dxmedia': 'DirectX Media package on the disc (dxmedia/DXMEDIA.exe)',
    'msagent': 'Microsoft Agent package on the disc (MSagent/MSagent.exe)',
    'acrobat': 'Adobe Acrobat Reader installer on the disc (Adobe Acrobat/rp505nld.exe), there to read the PDF manual according to Handleiding.txt',
    'netmanage': 'NetManage control placed in the system folder by setup.EXE',
    'ms-redist': 'Microsoft redistributable carried inside a Wise installer payload',
    'installer': 'Installer stub, installer-internal file or uninstaller',
    'davilex': 'Davilex support program that is not needed to run the game',
    'game': 'Game module',
}
GAME = {
    'A2Racer4.exe': ('Launcher, also present byte-identical as A2Racer4.icd. Runs menu.exe and spel.dat in turn.', 'see docs/launch-sequence.md'),
    'spel.dat': ('The game itself: a PE executable with a .dat name.', 'see docs/subsystems/'),
    'menu.exe': ('Delphi front end: menus, player data, race setup.', 'see docs/modules/menu.exe.md'),
    'rsc.dll': ('Resource archive I/O used by menu.exe (xvga_* exports).', 'see docs/modules/rsc.dll.md'),
    'setdebug.exe': ('Small Delphi helper that toggles debug.ini.', 'see docs/modules/launcher-and-helpers.md'),
    'bonus.dso': ('Compiled DaviScript for race bonus objects, run by spel.dat.', 'see decompiled/game__bonus.dso/README.md'),
}


def main():
    mods = json.load(open(os.path.join(ROOT, 'inventory/modules.json')))
    imported = {}
    for m in mods:
        if m['group'] == 'game':
            for dll in (m.get('imports') or '').split(';'):
                if dll:
                    imported.setdefault(dll.lower(), []).append(m['name'])
    rows = []
    for m in mods:
        if m['format'] == 'JavaClass':
            continue
        v = m.get('version_info') or {}
        desc = v.get('FileDescription', '').strip()
        if m['group'] == 'game':
            key = next((k for k in GAME if k.lower() == m['name'].lower()), None)
            role, ev = GAME[key] if key else ('Game module', '')
            label = 'see cited document'
        elif desc:
            role, ev, label = desc + '. ' + PACKAGE[m['group']] + '.', 'version info', 'confirmed from version info'
        else:
            role, ev, label = PACKAGE[m['group']] + '. No description in the file.', 'package location only', 'inferred from package'
        rows.append(dict(id=m['id'], name=m['name'], group=m['group'], analysis_scope=m['analysis_scope'], format=m['format'], vendor=v.get('CompanyName', ''), product=v.get('ProductName', ''), version=v.get('FileVersion', ''),
                         role=role, provenance=m['primary_location'], evidence=ev, static_import_by_game_module=';'.join(sorted(set(imported.get(m['name'].lower(), [])))), label=label))
    with open(os.path.join(ROOT, 'inventory/module_roles.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    print('rows', len(rows), 'with static import by a game module:', [r['name'] for r in rows if r['static_import_by_game_module']])


if __name__ == '__main__':
    main()
