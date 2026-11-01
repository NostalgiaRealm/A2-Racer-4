#!/usr/bin/env python3
"""Explain ambiguous CODE-section regions of Delphi modules, which keep metadata and constants among the functions.

Usage (analysis venv python, needs pefile): classify_delphi_gaps.py <output_root>
For each Delphi module, reads code_gaps.csv and delphi_classes.json and writes delphi/gap_classification.csv
plus delphi/gap_summary.json. Classes: delphi-class-metadata (inside a parsed VMT, method, field or type table),
delphi-long-string-constant (FF FF FF FF refcount then a matching length), delphi-rtti-like (type-info kind byte then
a short name), pointer-table (mostly aligned dwords that point into the image), text-like, unknown.
Only "unknown" is left as a real open question; other labels are pattern matches, not proofs.
"""
import csv, json, os, re, struct, sys
import pefile

ROOT = sys.argv[1]


def main():
    mods = json.load(open(os.path.join(ROOT, 'inventory/modules.json')))
    for m in mods:
        if not m.get('is_delphi'):
            continue
        d = os.path.join(ROOT, 'decompiled', m['id'])
        gaps = os.path.join(d, 'code_gaps.csv')
        meta = os.path.join(d, 'delphi', 'delphi_classes.json')
        if not (os.path.exists(gaps) and os.path.exists(meta)):
            continue
        pe = pefile.PE(os.path.join(ROOT, m['primary_location']), fast_load=True)
        base = pe.OPTIONAL_HEADER.ImageBase
        img = bytearray(pe.OPTIONAL_HEADER.SizeOfImage + 16)
        for s in pe.sections:
            data = s.get_data()
            img[s.VirtualAddress:s.VirtualAddress + len(data)] = data
        lo, hi = base, base + len(img)
        J = json.load(open(meta))
        ranges = []
        for c in J['classes']:
            v = c['vmt']
            ranges.append((v - 76, v + 4 * max(1, len(c['slots']))))
            # the tables pointed to from the header sit near the VMT: treat name, method and field tables as metadata
            for off in (-60, -56, -52, -48, -44):
                p = struct.unpack_from('<I', img, v - base + off)[0]
                if lo <= p < hi:
                    ranges.append((p, p + 8))
        ranges.sort()

        def in_meta(a, z):
            for s, e in ranges:
                if s > z:
                    return False
                if e > a:
                    return True
            return False

        rows, totals = [], {}
        for g in csv.DictReader(open(gaps, newline='')):
            if g['classification'] not in ('undefined_bytes_ambiguous', 'partly_defined_data'):
                continue
            a = int(g['start'], 16)
            ln = int(g['length'])
            b = bytes(img[a - base:a - base + min(ln, 1 << 16)])
            cls = 'unknown'
            if in_meta(a, a + ln):
                cls = 'delphi-class-metadata'
            elif b[:4] == b'\xff\xff\xff\xff' and len(b) >= 8 and struct.unpack_from('<I', b, 4)[0] < ln + 64:
                cls = 'delphi-long-string-constant'
            elif len(b) >= 3 and b[0] < 20 and 0 < b[1] < 64 and all(32 <= x < 127 for x in b[2:2 + b[1]]):
                cls = 'delphi-rtti-like'
            elif len(b) >= 8:
                n = len(b) // 4
                inside = sum(1 for i in range(n) if lo <= struct.unpack_from('<I', b, i * 4)[0] < hi)
                if inside * 2 >= n:
                    cls = 'pointer-table'
                elif sum(1 for x in b if 32 <= x < 127 or x in (0, 9, 10, 13)) * 10 >= len(b) * 8:
                    cls = 'text-like'
            rows.append(dict(start=g['start'], end=g['end_inclusive'], length=ln, ghidra_class=g['classification'], classification=cls, first_bytes=g['first_bytes_hex']))
            totals[cls] = totals.get(cls, 0) + ln
        with open(os.path.join(d, 'delphi', 'gap_classification.csv'), 'w', newline='') as f:
            w = csv.DictWriter(f, ['start', 'end', 'length', 'ghidra_class', 'classification', 'first_bytes'])
            w.writeheader()
            w.writerows(rows)
        json.dump(dict(regions=len(rows), bytes_by_class=totals), open(os.path.join(d, 'delphi', 'gap_summary.json'), 'w'), indent=1)
        print(m['id'], len(rows), totals)


if __name__ == '__main__':
    main()
