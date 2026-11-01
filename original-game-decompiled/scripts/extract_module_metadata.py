#!/usr/bin/env python3
"""For every native module write resources and a raw string scan next to its decompiled output.

Usage (analysis venv python, needs pefile): extract_module_metadata.py <output_root>
Per module in decompiled/<id>/: strings_raw.csv (every ASCII and UTF-16LE run of 4+ chars, by file offset),
resources/ (raw payloads, version.txt, string_tables.txt, dialogs and menus as raw .bin), resources.csv.
NE modules use wrestool from icoutils when available. Target binaries are never executed.
"""
import csv, json, os, re, shutil, struct, subprocess, sys
import pefile

ROOT = sys.argv[1]
HOST = ['distrobox-host-exec'] if shutil.which('distrobox-host-exec') else []
RT = {1: 'CURSOR', 2: 'BITMAP', 3: 'ICON', 4: 'MENU', 5: 'DIALOG', 6: 'STRING', 7: 'FONTDIR', 8: 'FONT', 9: 'ACCELERATOR', 10: 'RCDATA', 11: 'MESSAGETABLE', 12: 'GROUP_CURSOR', 14: 'GROUP_ICON', 16: 'VERSION', 17: 'DLGINCLUDE', 19: 'PLUGPLAY', 20: 'VXD', 21: 'ANICURSOR', 22: 'ANIICON', 23: 'HTML', 24: 'MANIFEST'}
EXT = {'BITMAP': '.dib', 'ICON': '.ico.raw', 'CURSOR': '.cur.raw', 'HTML': '.html', 'MANIFEST': '.xml', 'VERSION': '.versioninfo'}
ASCII = re.compile(rb'[\x20-\x7e\xa0-\xff\t]{4,}')
UTF16 = re.compile(rb'(?:[\x20-\x7e\xa0-\xff\t]\x00){4,}')


def sanitize(s):
    return re.sub(r'[^A-Za-z0-9._-]+', '_', str(s))[:80]


def strings_raw(path, out):
    b = open(path, 'rb').read()
    rows = 0
    with open(out, 'w', newline='', encoding='utf-8', errors='replace') as f:
        w = csv.writer(f)
        w.writerow(['file_offset', 'encoding', 'value'])
        for m in ASCII.finditer(b):
            w.writerow(['0x%x' % m.start(), 'cp1252-or-ascii', m.group().decode('cp1252', 'replace')]); rows += 1
        for m in UTF16.finditer(b):
            w.writerow(['0x%x' % m.start(), 'utf-16le', m.group().decode('utf-16-le', 'replace')]); rows += 1
    return rows


def pe_resources(path, od):
    pe = pefile.PE(path)
    rows = []
    if not hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
        pe.close()
        return rows
    os.makedirs(od, exist_ok=True)
    strings = []
    version_lines = []
    for fi in getattr(pe, 'FileInfo', []) or []:
        for e in fi:
            if getattr(e, 'Key', b'') == b'StringFileInfo':
                for st in e.StringTable:
                    for k, v in st.entries.items():
                        version_lines.append('%s: %s' % (k.decode('latin1'), v.decode('latin1', 'replace')))
    if version_lines:
        open(os.path.join(od, 'version.txt'), 'w').write('\n'.join(version_lines) + '\n')
    for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
        tname = str(t.name) if t.name else RT.get(t.id, 'TYPE_%s' % t.id)
        if not hasattr(t, 'directory'):
            continue
        for e in t.directory.entries:
            ename = str(e.name) if e.name else str(e.id)
            if not hasattr(e, 'directory'):
                continue
            for l in e.directory.entries:
                try:
                    data = pe.get_data(l.data.struct.OffsetToData, l.data.struct.Size)
                except Exception as ex:
                    rows.append(dict(type=tname, name=ename, lang=l.id, size=l.data.struct.Size, file='', note='unreadable: %r' % (ex,)))
                    continue
                note = ''
                if tname == 'STRING' and e.id is not None:
                    off = 0
                    for i in range(16):
                        if off + 2 > len(data):
                            break
                        n = struct.unpack_from('<H', data, off)[0]; off += 2
                        s = data[off:off + n * 2].decode('utf-16-le', 'replace'); off += n * 2
                        if s:
                            strings.append('%d\t%s\t%s' % ((e.id - 1) * 16 + i, l.id, s.replace('\r', '\\r').replace('\n', '\\n')))
                ext = EXT.get(tname, '.bin')
                if data[:4] == b'TPF0':
                    ext = '.dfm.bin'; note = 'Delphi form stream'
                elif data[:2] == b'BM':
                    ext = '.bmp'
                elif data[:4] == b'RIFF':
                    ext = '.wav' if data[8:12] == b'WAVE' else '.avi' if data[8:12] == b'AVI ' else '.riff'
                fn = '%s_%s_%s%s' % (tname, sanitize(ename), l.id, ext)
                sub = os.path.join(od, tname)
                os.makedirs(sub, exist_ok=True)
                open(os.path.join(sub, fn), 'wb').write(data)
                if tname == 'BITMAP':
                    # add the BITMAPFILEHEADER the resource section leaves out
                    if len(data) >= 40:
                        hs, _, _, _, bc, _, _, _, _, used, _ = struct.unpack_from('<IiiHHIIiiII', data, 0)
                        pal = (used or (1 << bc if bc <= 8 else 0)) * 4
                        hdr = b'BM' + struct.pack('<IHHI', 14 + len(data), 0, 0, 14 + hs + pal)
                        open(os.path.join(sub, fn.replace('.dib', '.bmp')), 'wb').write(hdr + data)
                rows.append(dict(type=tname, name=ename, lang=l.id, size=len(data), file='resources/%s/%s' % (tname, fn), note=note))
    if strings:
        open(os.path.join(od, 'string_tables.txt'), 'w', encoding='utf-8').write('id\tlang\ttext\n' + '\n'.join(strings) + '\n')
    pe.close()
    return rows


def ne_resources(path, od):
    os.makedirs(od, exist_ok=True)
    cp = subprocess.run(HOST + ['wrestool', '-l', path], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, errors='replace')
    open(os.path.join(od, 'wrestool_list.txt'), 'w').write(cp.stdout)
    subprocess.run(HOST + ['wrestool', '-x', '--raw', '-o', od, path], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    rows = []
    for fn in sorted(os.listdir(od)):
        if fn != 'wrestool_list.txt':
            rows.append(dict(type='NE', name=fn, lang='', size=os.path.getsize(os.path.join(od, fn)), file='resources/' + fn, note='wrestool --raw'))
    return rows


def main():
    mods = json.load(open(os.path.join(ROOT, 'inventory/modules.json')))
    tot = 0
    for m in mods:
        if m['analysis_scope'] != 'decompile' or m['format'] not in ('PE32', 'NE', 'MZ'):
            continue
        d = os.path.join(ROOT, 'decompiled', m['id'])
        os.makedirs(d, exist_ok=True)
        p = os.path.join(ROOT, m['primary_location'])
        n = strings_raw(p, os.path.join(d, 'strings_raw.csv'))
        rows = []
        od = os.path.join(d, 'resources')
        try:
            if m['format'] == 'PE32':
                rows = pe_resources(p, od)
            elif m['format'] == 'NE':
                rows = ne_resources(p, od)
        except Exception as ex:
            rows = [dict(type='', name='', lang='', size=0, file='', note='resource parse failed: %r' % (ex,))]
        if rows:
            with open(os.path.join(d, 'resources.csv'), 'w', newline='') as f:
                w = csv.DictWriter(f, ['type', 'name', 'lang', 'size', 'file', 'note'])
                w.writeheader()
                w.writerows(rows)
        tot += 1
    print('modules processed', tot)


if __name__ == '__main__':
    main()
