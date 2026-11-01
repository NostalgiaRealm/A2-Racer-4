#!/usr/bin/env python3
"""Extract a Wise Installation System self-extractor without executing it.

Usage: wise_extract.py <setup.exe> <output_dir>

Method: walk raw-deflate streams in the overlay, each followed by a CRC-32 of its inflated bytes.
Every stream that passes its CRC is written out. Install paths come from the embedded WiseScript
(the first non-empty stream): an install-file record stores the same CRC, followed by the
destination string. The script itself is saved as WiseScript.bin, and streams with no matching
record keep a synthetic name. A manifest.csv records offsets, sizes, CRCs and how each name was found.
"""
import csv, os, re, struct, sys, zlib


def overlay_scan_start(b):
    e = struct.unpack_from('<I', b, 0x3c)[0]
    if b[e:e + 2] == b'PE':
        nsec = struct.unpack_from('<H', b, e + 6)[0]
        opt = struct.unpack_from('<H', b, e + 20)[0]
        end = 0
        for i in range(nsec):
            rs, rp = struct.unpack_from('<II', b, e + 24 + opt + i * 40 + 16)
            end = max(end, rp + rs)
        return end
    return e  # NE: scan from the header; CRC validation rejects false positives


def streams(b, start):
    off, out = start, []
    while off < len(b) - 8:
        d = zlib.decompressobj(-15)
        try:
            data = d.decompress(b[off:])
        except zlib.error:
            off += 1
            continue
        if d.eof:
            used = len(b) - off - len(d.unused_data)
            if off + used + 4 <= len(b):
                crc = struct.unpack_from('<I', b, off + used)[0]
                if zlib.crc32(data) == crc and (data or out == []):
                    out.append((off, used, data, crc))
                    off += used + 4
                    continue
        off += 1
    return off, out


def script_names(script, crcs):
    """Map CRC-32 -> destination strings: an install-file record stores the CRC right before the path."""
    names = {}
    for crc in crcs:
        needle = struct.pack('<I', crc)
        p = script.find(needle)
        while p != -1:
            q = script.find(b'\x00', p + 4)
            s = script[p + 4:q].decode('latin1')
            if s and ('\\' in s or '%' in s):
                names.setdefault(crc, []).append((p, s))
            p = script.find(needle, p + 1)
    return names


def main():
    src, outdir = sys.argv[1], sys.argv[2]
    b = open(src, 'rb').read()
    start = overlay_scan_start(b)
    end, st = streams(b, start)
    st = [s for s in st if s[2]]
    os.makedirs(outdir, exist_ok=True)
    script = max(st[:2], key=lambda s: (b'%MAINDIR%' in s[2], len(s[2])))[2] if st else b''
    open(os.path.join(outdir, 'WiseScript.bin'), 'wb').write(script)
    names = script_names(script, [x[3] for x in st])
    rows, used = [], {}
    for i, (off, comp, data, crc) in enumerate(st):
        is_script = data == script
        cands = names.get(crc, [])
        if is_script:
            rel, how = 'WiseScript.bin', 'installer script (largest early stream containing %MAINDIR%)'
        elif cands:
            n = used.get(crc, 0)
            rel = cands[min(n, len(cands) - 1)][1]
            used[crc] = n + 1
            how = 'WiseScript record matched by CRC-32'
        else:
            kind = 'exe' if data[:2] == b'MZ' else 'bin'
            rel, how = '_unnamed/stream_%03d_%08x.%s' % (i, off, kind), 'no script record: installer-internal stream'
        safe = re.sub(r'[<>:"|?*]', '_', rel.replace('\\', '/')).replace('%', '')
        safe = '/'.join(x for x in safe.split('/') if x not in ('', '.', '..'))
        dst = os.path.join(outdir, safe)
        if os.path.exists(dst) and open(dst, 'rb').read() != data:
            root, ext = os.path.splitext(dst)
            dst = '%s__variant_%03d%s' % (root, i, ext)
        os.makedirs(os.path.dirname(dst), exist_ok=True)
        open(dst, 'wb').write(data)
        rows.append({'index': i, 'overlay_offset': hex(off), 'compressed': comp, 'size': len(data), 'crc32': '%08x' % crc,
                     'script_destination': cands[0][1] if cands else '', 'all_script_destinations': ' | '.join(c[1] for c in cands),
                     'written_to': os.path.relpath(dst, outdir), 'name_source': how})
    with open(os.path.join(outdir, 'manifest.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    print(src, 'streams', len(st), 'consumed-to', hex(end), 'file-size', hex(len(b)), 'trailing', len(b) - end)
    for r in rows:
        print(r['overlay_offset'], r['size'], r['written_to'])


if __name__ == '__main__':
    main()
