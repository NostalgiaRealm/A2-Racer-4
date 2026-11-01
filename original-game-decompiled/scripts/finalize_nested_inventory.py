#!/usr/bin/env python3
"""Add the containers opened outside extract_nested.py to inventory/nested_archives.csv, and list related files left out.

Usage: finalize_nested_inventory.py <output_root> [<wine_drive_c>]
"""
import csv, hashlib, os, sys

ROOT = sys.argv[1]
DRIVE_C = sys.argv[2] if len(sys.argv) > 2 else os.path.expanduser('~/.wine/drive_c')
P = os.path.join(ROOT, 'inventory/nested_archives.csv')
FIELDS = ['container', 'container_sha256', 'method', 'command', 'exit_code', 'members_extracted', 'output_dir', 'note', 'tool_output_tail']


def sha(p):
    h = hashlib.sha256()
    with open(p, 'rb') as f:
        for c in iter(lambda: f.read(1 << 20), b''):
            h.update(c)
    return h.hexdigest()


def count(d):
    return sum(len(fs) for _, _, fs in os.walk(d))


rows = [r for r in csv.DictReader(open(P, newline=''))]
rows = [r for r in rows if r['method'] not in ('wise_extract.py', 'blast.py', 'rc_extract.py')]
A = 'extracted/disc_Adobe_Acrobat_rp505nld.exe__embedded-cabs/cab_00_at_00020528.cab__cab'
extra = [
    ('original/disc/setup.EXE', 'wise_extract.py', 'walk raw deflate streams in the overlay, CRC-32 checked; names from WiseScript by CRC match', 'extracted/disc-setup.EXE__wise', 'Wise installer. Game data is not inside: the script copies it from the disc Data folder'),
    ('original/disc/service/Setup.exe', 'wise_extract.py', 'same method; NE stub', 'extracted/disc-service-Setup.exe__wise', 'Wise installer of Davilex Service'),
    (A + '/_INST32I.EX_', 'blast.py', 'Stirling archive table parsed by hand, each member PKWARE DCL decompressed; output sizes match the table', A + '/_INST32I.EX___blast', 'InstallShield engine files'),
    ('original/disc/Data/rcs.IMG', 'rc_extract.py', 'index from rcs.IND', 'extracted/game-archives/rcs', 'game resources'),
    ('original/disc/Data/MenuData/MenuRcs.IMG', 'rc_extract.py', 'index from MenuRcs.IND', 'extracted/game-archives/menurcs', 'menu resources'),
    ('original/disc/Data/RC.IMG', 'rc_extract.py', 'offsets from RC.IND, members have no names', 'extracted/game-archives/rc', 'unnamed resources'),
]
for c, m, cmd, out, note in extra:
    rows.append(dict(container=c, container_sha256=sha(os.path.join(ROOT, c)), method=m, command=cmd, exit_code=0, members_extracted=count(os.path.join(ROOT, out)), output_dir=out, note=note, tool_output_tail=''))
with open(P, 'w', newline='') as f:
    w = csv.DictWriter(f, FIELDS)
    w.writeheader()
    w.writerows(rows)
print('containers', len(rows))
win = os.path.join(DRIVE_C, 'windows')
with open(os.path.join(ROOT, 'inventory/related_files_not_collected.csv'), 'w', newline='') as f:
    w = csv.writer(f)
    w.writerow(['path', 'size', 'mtime', 'sha256', 'reason'])
    for n in sorted(os.listdir(win)):
        if n.lower().startswith('a2 racer screen saver'):
            p = os.path.join(win, n)
            st = os.stat(p)
            w.writerow(['C:\\windows\\' + n, st.st_size, int(st.st_mtime), sha(p), 'Name suggests another A2 Racer product. Not in the given inputs, not in INSTALL.LOG, not on this disc: left out. Listed for reference.'])
