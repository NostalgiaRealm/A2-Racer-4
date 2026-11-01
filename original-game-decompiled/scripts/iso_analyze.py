#!/usr/bin/env python3
"""ISO 9660 structural audit and extraction for the A2 Racer 4 disc image.

Usage: iso_analyze.py <image.iso> <out_inventory_dir> [--extract <disc_dir>] [--unreferenced <dir>]

Does not rely on an OS mount or 7-Zip: walks the Primary and Joliet trees itself, checks path
tables, builds a sector allocation map and reports anything an ordinary file extraction misses
(hidden flags, extra descriptors, unreferenced sectors, trailing data, embedded CD001 volumes).
"""
import csv, hashlib, json, os, struct, sys, datetime

SECTOR = 2048


def u32(b, o):
    return struct.unpack_from('<I', b, o)[0]


def u16(b, o):
    return struct.unpack_from('<H', b, o)[0]


def dec_ts(b):
    if len(b) < 7 or b[0] == 0:
        return None
    y, mo, d, h, mi, s, tz = b[0] + 1900, b[1], b[2], b[3], b[4], b[5], struct.unpack('b', b[6:7])[0]
    try:
        return datetime.datetime(y, mo, d, h, mi, s).isoformat() + ('%+03d:%02d' % (tz // 4, abs(tz) % 4 * 15))
    except ValueError:
        return None


class Iso:
    def __init__(self, path):
        self.f = open(path, 'rb')
        self.size = os.fstat(self.f.fileno()).st_size

    def read(self, lba, n=SECTOR):
        self.f.seek(lba * SECTOR)
        return self.f.read(n)

    def descriptors(self):
        out, lba = [], 16
        while True:
            s = self.read(lba)
            if len(s) < SECTOR or s[1:6] != b'CD001':
                out.append({'lba': lba, 'type': None, 'id': s[1:6].hex(), 'note': 'not a CD001 descriptor; stop'})
                break
            t = s[0]
            d = {'lba': lba, 'type': t, 'version': s[6]}
            if t in (1, 2):
                d.update({
                    'name': {1: 'Primary', 2: 'Supplementary'}[t],
                    'system_id': s[8:40].decode('latin1').strip(),
                    'volume_id': s[40:72].decode('latin1').strip() if t == 1 else s[40:72].decode('utf-16-be', 'replace').strip(),
                    'volume_flags': s[7],
                    'space_sectors': u32(s, 80),
                    'escape_sequences': s[88:120].rstrip(b'\0').hex(),
                    'set_size': u16(s, 120), 'seq': u16(s, 124), 'lb_size': u16(s, 128),
                    'path_table_size': u32(s, 132), 'path_table_l': u32(s, 140), 'path_table_l_opt': u32(s, 144),
                    'volume_set_id': s[190:318].decode('latin1').strip(),
                    'publisher_id': s[318:446].decode('latin1').strip(),
                    'preparer_id': s[446:574].decode('latin1').strip(),
                    'application_id': s[574:702].decode('latin1').strip(),
                    'copyright_file': s[702:739].decode('latin1').strip(),
                    'abstract_file': s[739:776].decode('latin1').strip(),
                    'biblio_file': s[776:813].decode('latin1').strip(),
                    'created': s[813:830].decode('latin1'), 'modified': s[830:847].decode('latin1'),
                    'expires': s[847:864].decode('latin1'), 'effective': s[864:881].decode('latin1'),
                    'file_structure_version': s[881],
                    'app_use_nonzero_bytes': sum(1 for x in s[883:1395] if x),
                    'root_record': s[156:190],
                })
            elif t == 0:
                d.update({'name': 'BootRecord', 'boot_system_id': s[7:39].decode('latin1').strip(), 'catalog_lba': u32(s, 71)})
            elif t == 255:
                d.update({'name': 'Terminator'})
            else:
                d.update({'name': 'Other'})
            out.append(d)
            lba += 1
            if t == 255:
                break
        return out

    def parse_dir(self, lba, size, joliet):
        off, records = 0, []
        data = self.read(lba, size)
        while off < len(data):
            ln = data[off]
            if ln == 0:
                off = ((off // SECTOR) + 1) * SECTOR
                continue
            r = data[off:off + ln]
            nl = r[32]
            raw = r[33:33 + nl]
            rec = {'extent': u32(r, 2), 'size': u32(r, 10), 'ts': dec_ts(r[18:25]), 'flags': r[25],
                   'interleave_unit': r[26], 'interleave_gap': r[27], 'volume_seq': u16(r, 28), 'raw_name': raw, 'ext_attr_len': r[1]}
            pad = 33 + nl + (0 if nl % 2 else 1)
            su = r[pad:]
            rec['system_use'] = su
            if raw not in (b'\0', b'\1'):
                nm = raw.decode('utf-16-be', 'replace') if joliet else raw.decode('latin1')
                rec['name'] = nm
                records.append(rec)
            off += ln
        return records

    def walk(self, root_rec, joliet):
        ents, dirs = [], []
        ext, sz = u32(root_rec, 2), u32(root_rec, 10)

        def rec(lba, size, prefix):
            dirs.append({'path': prefix or '/', 'lba': lba, 'size': size})
            for r in self.parse_dir(lba, size, joliet):
                nm = r['name']
                clean = nm.split(';')[0].rstrip('.') if (r['flags'] & 2) == 0 else nm
                p = (prefix + '/' + clean) if prefix else clean
                r['path'] = p
                r['version'] = nm.split(';')[1] if ';' in nm else ''
                if r['flags'] & 2:
                    rec(r['extent'], r['size'], p)
                else:
                    ents.append(r)
        rec(ext, sz, '')
        return ents, dirs

    def path_table(self, lba, size, joliet):
        b = self.read(lba, size)
        off, out = 0, []
        while off < len(b):
            nl = b[off]
            if nl == 0:
                break
            ext = u32(b, off + 2)
            parent = u16(b, off + 6)
            name = b[off + 8:off + 8 + nl]
            out.append({'extent': ext, 'parent': parent, 'name': name.decode('utf-16-be', 'replace') if joliet else name.decode('latin1')})
            off += 8 + nl + (nl & 1)
        return out


def sha256_of(b):
    return hashlib.sha256(b).hexdigest()


def main():
    img = sys.argv[1]
    outdir = sys.argv[2]
    extract = sys.argv[sys.argv.index('--extract') + 1] if '--extract' in sys.argv else None
    unref = sys.argv[sys.argv.index('--unreferenced') + 1] if '--unreferenced' in sys.argv else None
    os.makedirs(outdir, exist_ok=True)
    iso = Iso(img)
    rep = {'image': os.path.basename(img), 'image_size': iso.size, 'sectors_at_2048': iso.size / SECTOR,
           'sha256': hashlib.sha256(open(img, 'rb').read()).hexdigest()}
    desc = iso.descriptors()
    pvd = next(d for d in desc if d.get('type') == 1)
    joliet = next((d for d in desc if d.get('type') == 2 and d['escape_sequences'] in ('252f40', '252f43', '252f45')), None)
    rep['descriptors'] = [{k: v for k, v in d.items() if k != 'root_record'} for d in desc]
    rep['system_area_nonzero_bytes'] = sum(1 for x in iso.read(0, 16 * SECTOR) if x)

    # physical format probes
    with open(img, 'rb') as f:
        head = f.read(16)
    rep['raw_sector_sync_at_start'] = head[:12] == b'\x00' + b'\xff' * 10 + b'\x00'

    rep['udf_vrs'] = [lba for lba in range(16, 64) if iso.read(lba)[1:6] in (b'BEA01', b'NSR02', b'NSR03', b'TEA01')]

    p_ents, p_dirs = iso.walk(pvd['root_record'], False)
    j_ents, j_dirs = (iso.walk(joliet['root_record'], True) if joliet else ([], []))
    rep['primary_files'] = len(p_ents)
    rep['primary_dirs'] = len(p_dirs)
    rep['joliet_files'] = len(j_ents)
    rep['joliet_dirs'] = len(j_dirs)

    # flags and system use
    rep['primary_hidden_or_special'] = [{'path': e['path'], 'flags': e['flags']} for e in p_ents if e['flags'] & ~0]
    rep['joliet_hidden_or_special'] = [{'path': e['path'], 'flags': e['flags']} for e in j_ents if e['flags'] & ~0]
    rep['rock_ridge_or_susp_records'] = sum(1 for e in p_ents if e['system_use'][:2] in (b'SP', b'RR', b'NM', b'PX', b'CE'))
    rep['xa_records'] = sum(1 for e in p_ents if b'XA' in e['system_use'][:16])
    rep['ext_attr_records'] = sum(1 for e in p_ents + j_ents if e['ext_attr_len'])
    rep['interleaved_records'] = sum(1 for e in p_ents + j_ents if e['interleave_unit'] or e['interleave_gap'])

    # compare the two trees
    by_ext = {}
    for e in p_ents:
        by_ext.setdefault((e['extent'], e['size']), []).append(e['path'])
    only_j = [e['path'] for e in j_ents if (e['extent'], e['size']) not in by_ext]
    jset = {(e['extent'], e['size']) for e in j_ents}
    only_p = [e['path'] for e in p_ents if (e['extent'], e['size']) not in jset]
    rep['files_only_in_joliet'] = only_j
    rep['files_only_in_primary'] = only_p

    # path tables
    rep['pvd_path_table_entries'] = len(iso.path_table(pvd['path_table_l'], pvd['path_table_size'], False))
    if joliet:
        rep['joliet_path_table_entries'] = len(iso.path_table(joliet['path_table_l'], joliet['path_table_size'], True))
    pt_ext = {x['extent'] for x in iso.path_table(pvd['path_table_l'], pvd['path_table_size'], False)}
    tree_ext = {d['lba'] for d in p_dirs}
    rep['path_table_dirs_not_in_tree'] = sorted(pt_ext - tree_ext)
    rep['tree_dirs_not_in_path_table'] = sorted(tree_ext - pt_ext)

    # sector allocation map
    total = iso.size // SECTOR
    owner = {}
    allocs = []

    def claim(start, nbytes, what):
        n = (nbytes + SECTOR - 1) // SECTOR
        allocs.append((start, n, what))

    for i in range(0, 16):
        claim(i, SECTOR, 'system-area')
    for d in desc:
        claim(d['lba'], SECTOR, 'volume-descriptor')
    claim(pvd['path_table_l'], pvd['path_table_size'], 'path-table-L(primary)')
    # type-M tables live in the descriptor big-endian fields
    pvd_raw = iso.read(pvd['lba'])
    claim(struct.unpack_from('>I', pvd_raw, 148)[0], pvd['path_table_size'], 'path-table-M(primary)')
    if pvd['path_table_l_opt']:
        claim(pvd['path_table_l_opt'], pvd['path_table_size'], 'path-table-Lopt(primary)')
    if joliet:
        j_raw = iso.read(joliet['lba'])
        claim(joliet['path_table_l'], joliet['path_table_size'], 'path-table-L(joliet)')
        claim(struct.unpack_from('>I', j_raw, 148)[0], joliet['path_table_size'], 'path-table-M(joliet)')
        if joliet['path_table_l_opt']:
            claim(joliet['path_table_l_opt'], joliet['path_table_size'], 'path-table-Lopt(joliet)')
    for d in p_dirs:
        claim(d['lba'], d['size'], 'dir:' + d['path'])
    for d in j_dirs:
        claim(d['lba'], d['size'], 'jdir:' + d['path'])
    seen = set()
    for e in p_ents + j_ents:
        k = (e['extent'], e['size'])
        if k in seen:
            continue
        seen.add(k)
        claim(e['extent'], e['size'], 'file:' + e['path'])
    bitmap = bytearray(total)
    overlaps = []
    alloc_sorted = sorted(allocs)
    prev_end, prev_what = 0, ''
    for start, n, what in alloc_sorted:
        if start < prev_end and n > 0:
            overlaps.append({'a': prev_what, 'b': what, 'lba': start})
        for s in range(start, min(start + n, total)):
            bitmap[s] = 1
        if start + n > prev_end:
            prev_end, prev_what = start + n, what
    rep['allocation_overlaps'] = overlaps
    rep['files_beyond_image_end'] = [e['path'] for e in p_ents + j_ents if e['extent'] * SECTOR + e['size'] > iso.size]
    gaps = []
    s = 0
    while s < total:
        if not bitmap[s]:
            e = s
            while e < total and not bitmap[e]:
                e += 1
            buf = iso.read(s, (e - s) * SECTOR)
            nz = len(buf) - buf.count(0)
            g = {'lba_start': s, 'sectors': e - s, 'byte_offset': s * SECTOR, 'bytes': (e - s) * SECTOR,
                 'nonzero_bytes': nz, 'sha256': sha256_of(buf)}
            if nz:
                g['first_bytes_hex'] = buf[:64].hex()
                g['ascii_preview'] = ''.join(chr(c) if 32 <= c < 127 else '.' for c in buf[:128])
                if unref:
                    os.makedirs(unref, exist_ok=True)
                    open(os.path.join(unref, 'lba_%08d_%d_sectors.bin' % (s, e - s)), 'wb').write(buf)
            gaps.append(g)
            s = e
        else:
            s += 1
    rep['unreferenced_gaps'] = gaps
    rep['unreferenced_nonzero_total'] = sum(g['nonzero_bytes'] for g in gaps)
    rep['volume_space_bytes'] = pvd['space_sectors'] * SECTOR
    tail = iso.size - pvd['space_sectors'] * SECTOR
    rep['image_bytes_past_volume_space'] = tail
    if tail > 0:
        t = iso.read(pvd['space_sectors'], tail)
        rep['tail_nonzero_bytes'] = len(t) - t.count(0)
    # slack data at file ends: bytes after EOF inside the last sector
    slack_nz = []
    for e in p_ents:
        rem = e['size'] % SECTOR
        if rem:
            b = iso.read(e['extent'] + e['size'] // SECTOR)
            sl = b[rem:]
            nz = len(sl) - sl.count(0)
            if nz:
                slack_nz.append({'path': e['path'], 'nonzero_slack_bytes': nz})
    rep['file_slack_nonzero'] = slack_nz

    # sector-aligned search for embedded volume descriptors outside the main VDS (multi-session remnants)
    embedded = []
    with open(img, 'rb') as f:
        lba = 0
        while True:
            b = f.read(SECTOR)
            if len(b) < SECTOR:
                break
            if b[1:6] == b'CD001' and not (16 <= lba < 16 + len(desc)):
                embedded.append({'lba': lba, 'type': b[0]})
            lba += 1
    rep['cd001_outside_main_vds'] = embedded

    # file listing
    rows = []
    jmap = {(e['extent'], e['size']): e for e in j_ents}
    for e in p_ents:
        j = jmap.get((e['extent'], e['size']))
        rows.append({'primary_path': e['path'], 'iso_version': e['version'], 'joliet_path': j['path'] if j else '',
                     'lba': e['extent'], 'size': e['size'], 'flags': e['flags'], 'ts_primary': e['ts'] or ''})
    if joliet:
        for e in j_ents:
            if (e['extent'], e['size']) not in by_ext:
                rows.append({'primary_path': '', 'iso_version': '', 'joliet_path': e['path'], 'lba': e['extent'], 'size': e['size'], 'flags': e['flags'], 'ts_primary': e['ts'] or ''})
    rows.sort(key=lambda r: r['lba'])
    with open(os.path.join(outdir, 'iso_directory_map.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)

    if extract:
        names = j_ents if joliet else p_ents
        for e in names:
            dst = os.path.join(extract, e['path'])
            os.makedirs(os.path.dirname(dst), exist_ok=True)
            with open(dst, 'wb') as o:
                iso.f.seek(e['extent'] * SECTOR)
                remaining = e['size']
                while remaining:
                    chunk = iso.f.read(min(1 << 20, remaining))
                    if not chunk:
                        break
                    o.write(chunk)
                    remaining -= len(chunk)
            if e['ts']:
                try:
                    dt = datetime.datetime.fromisoformat(e['ts'])
                    os.utime(dst, (dt.timestamp(), dt.timestamp()))
                except Exception:
                    pass
        rep['extracted_tree'] = 'joliet' if joliet else 'primary'
        rep['extracted_files'] = len(names)

    json.dump(rep, open(os.path.join(outdir, 'iso_structure_report.json'), 'w'), indent=1, default=str)
    for k in ('image_size', 'sectors_at_2048', 'sha256', 'system_area_nonzero_bytes', 'raw_sector_sync_at_start', 'udf_vrs', 'primary_files', 'primary_dirs', 'joliet_files', 'joliet_dirs', 'rock_ridge_or_susp_records', 'xa_records', 'ext_attr_records', 'interleaved_records', 'files_only_in_joliet', 'files_only_in_primary', 'pvd_path_table_entries', 'joliet_path_table_entries', 'path_table_dirs_not_in_tree', 'tree_dirs_not_in_path_table', 'allocation_overlaps', 'files_beyond_image_end', 'unreferenced_nonzero_total', 'volume_space_bytes', 'image_bytes_past_volume_space', 'tail_nonzero_bytes', 'file_slack_nonzero', 'cd001_outside_main_vds', 'extracted_files', 'extracted_tree'):
        print(k, '=', rep.get(k))
    print('descriptors:')
    for d in rep['descriptors']:
        print(' ', {k: v for k, v in d.items() if v not in ('', 0, None)})
    print('flagged primary:', [x for x in rep['primary_hidden_or_special'] if x['flags']][:20])
    print('flagged joliet:', [x for x in rep['joliet_hidden_or_special'] if x['flags']][:20])
    print('gaps:', [{k: v for k, v in g.items() if k != 'sha256'} for g in gaps][:30])


if __name__ == '__main__':
    main()
