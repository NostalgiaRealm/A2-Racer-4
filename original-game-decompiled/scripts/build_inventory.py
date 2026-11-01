#!/usr/bin/env python3
"""Inventory every collected file and every code-bearing module.

Usage: build_inventory.py <output_root>
Writes inventory/{install,disc,wine_prefix_external,extracted}_inventory.csv, all_files.json,
install_vs_disc.csv and modules.csv/modules.json (unique code modules by SHA-256 with all locations).
"""
import csv, hashlib, json, os, re, shutil, struct, subprocess, sys, datetime

ROOT = sys.argv[1]
INV = os.path.join(ROOT, 'inventory')
AREAS = {
    'install': ('original/install', 'C:\\Program Files (x86)\\Davilex\\A2 Racer 4\\'),
    'disc': ('original/disc', 'ISO:/'),
    'wine_prefix_external': ('original/wine-prefix-external', 'C:\\'),
    'extracted': ('extracted', 'extracted/'),
}
CODE_EXT = {'.ocx', '.dll', '.exe', '.sys', '.vxd', '.drv', '.cpl', '.ax', '.acm', '.scr', '.386', '.api', '.tsp', '.ime', '.mod', '.dso', '.ins', '.class', '.js', '.vbs', '.bat', '.cmd', '.com', '.ex_', '.dl_', '.x86', '.nec', '.n98', '.w95', '.nld', '.ppi', '.flt', '.fon'}


def sha(p):
    h = hashlib.sha256()
    with open(p, 'rb') as f:
        for c in iter(lambda: f.read(1 << 20), b''):
            h.update(c)
    return h.hexdigest()


def fmt(p):
    """Return (format, machine/arch) by reading headers, independent of extension."""
    with open(p, 'rb') as f:
        b = f.read(0x1000)
        if b[:4] == b'\xca\xfe\xba\xbe':
            return ('JavaClass', 'jvm')
        if b[:2] not in (b'MZ', b'ZM'):
            return ('', '')
        if len(b) < 0x40:
            return ('MZ', 'x86-16')
        e = struct.unpack_from('<I', b, 0x3c)[0]
        # the relocation offset rule distinguishes new-style headers from raw DOS stubs
        f.seek(e)
        s = f.read(0x60)
    sig = s[:2]
    if s[:4] == b'PE\0\0':
        m = struct.unpack_from('<H', s, 4)[0]
        magic = struct.unpack_from('<H', s, 24)[0]
        chars = struct.unpack_from('<H', s, 22)[0]
        kind = 'DLL' if chars & 0x2000 else 'EXE'
        return ('PE32+' if magic == 0x20b else 'PE32', {0x14c: 'x86', 0x8664: 'x86-64', 0x184: 'alpha', 0x162: 'mips', 0x1f0: 'ppc'}.get(m, hex(m)) + '/' + kind)
    if sig == b'NE':
        tflags = s[0x36] if len(s) > 0x36 else 0
        return ('NE', 'x86-16/os%d' % tflags)
    if sig in (b'LE', b'LX'):
        return (sig.decode(), 'x86-32/x86-16-mixed')
    if sig == b'W3' or sig == b'W4':
        return (sig.decode(), 'x86 VxD container')
    return ('MZ', 'x86-16')


def walk(area, rel_root):
    top = os.path.join(ROOT, rel_root)
    out = []
    for dp, dn, fn in os.walk(top):
        dn.sort()
        for n in sorted(fn):
            p = os.path.join(dp, n)
            r = os.path.relpath(p, top)
            st = os.lstat(p)
            ftype, arch = fmt(p)
            out.append({'area': area, 'path_in_output': os.path.relpath(p, ROOT), 'original_path': AREAS[area][1] + r.replace('/', '\\' if area in ('install', 'wine_prefix_external') else '/'),
                        'size': st.st_size, 'mtime_utc': datetime.datetime.utcfromtimestamp(st.st_mtime).strftime('%Y-%m-%d %H:%M:%S'),
                        'sha256': sha(p), 'module_format': ftype, 'module_arch': arch, 'magic': ''})
    return out


def libmagic(rows):
    lst = os.path.join(INV, '.filelist.tmp')
    with open(lst, 'w') as f:
        for r in rows:
            f.write(os.path.join(ROOT, r['path_in_output']) + '\n')
    cmd = (['distrobox-host-exec'] if shutil.which('distrobox-host-exec') else []) + ['file', '--separator', '<<<>>>', '-f', lst]
    out = subprocess.run(cmd, stdout=subprocess.PIPE, text=True, errors='replace').stdout
    m = {}
    for line in out.splitlines():
        if '<<<>>>' in line:
            a, b = line.split('<<<>>>', 1)
            m[a] = b.strip()
    for r in rows:
        r['magic'] = m.get(os.path.join(ROOT, r['path_in_output']), '').replace('\n', ' ')
    os.remove(lst)


def write_csv(name, rows, fields):
    with open(os.path.join(INV, name), 'w', newline='') as f:
        w = csv.DictWriter(f, fields, extrasaction='ignore')
        w.writeheader()
        w.writerows(rows)


def compare(install, disc):
    d_by_name = {}
    for r in disc:
        d_by_name.setdefault(os.path.basename(r['path_in_output']).lower(), []).append(r)
    h_disc = {r['sha256']: r for r in disc}
    rows, seen = [], set()
    for r in install:
        n = os.path.basename(r['path_in_output']).lower()
        c = d_by_name.get(n, [])
        exact = [x for x in c if x['sha256'] == r['sha256']]
        st = 'identical' if exact else ('different-content' if c else ('content-on-disc-under-other-name' if r['sha256'] in h_disc else 'install-only'))
        for x in (exact or c):
            seen.add(x['path_in_output'])
        rows.append({'name': n, 'status': st, 'install_path': r['path_in_output'], 'install_size': r['size'], 'install_sha256': r['sha256'],
                     'disc_path': ';'.join(x['path_in_output'] for x in (exact or c)), 'disc_size': ';'.join(str(x['size']) for x in (exact or c)), 'disc_sha256': ';'.join(x['sha256'] for x in (exact or c))})
    for r in disc:
        if r['path_in_output'] not in seen:
            rows.append({'name': os.path.basename(r['path_in_output']).lower(), 'status': 'disc-only', 'install_path': '', 'install_size': '', 'install_sha256': '', 'disc_path': r['path_in_output'], 'disc_size': r['size'], 'disc_sha256': r['sha256']})
    return rows


def main():
    allrows = []
    per = {}
    for area, (rel_root, _) in AREAS.items():
        per[area] = walk(area, rel_root)
        allrows += per[area]
    libmagic(allrows)
    fields = ['area', 'path_in_output', 'original_path', 'size', 'mtime_utc', 'sha256', 'module_format', 'module_arch', 'magic']
    for area in AREAS:
        write_csv(area + '_inventory.csv', per[area], fields)
    json.dump(allrows, open(os.path.join(INV, 'all_files.json'), 'w'), indent=0)
    cmp_rows = compare(per['install'], per['disc'])
    write_csv('install_vs_disc.csv', cmp_rows, ['name', 'status', 'install_path', 'install_size', 'install_sha256', 'disc_path', 'disc_size', 'disc_sha256'])
    summary = {}
    for r in cmp_rows:
        summary[r['status']] = summary.get(r['status'], 0) + 1
    print('install vs disc:', summary)
    # unique modules
    mods = {}
    for r in allrows:
        ext = os.path.splitext(r['path_in_output'])[1].lower()
        if r['module_format'] or ext in ('.dso', '.ins', '.js', '.vbs', '.bat', '.cmd', '.tlb'):
            m = mods.setdefault(r['sha256'], {'sha256': r['sha256'], 'size': r['size'], 'format': r['module_format'] or ext.lstrip('.'), 'arch': r['module_arch'], 'magic': r['magic'], 'locations': []})
            m['locations'].append(r['path_in_output'])
    print('unique code-bearing candidates:', len(mods), 'locations:', sum(len(m['locations']) for m in mods.values()))
    fc = {}
    for m in mods.values():
        fc[m['format'] + ' ' + m['arch']] = fc.get(m['format'] + ' ' + m['arch'], 0) + 1
    print(fc)
    json.dump(list(mods.values()), open(os.path.join(INV, 'modules_raw.json'), 'w'), indent=0)


if __name__ == '__main__':
    main()
