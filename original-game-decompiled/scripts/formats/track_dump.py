#!/usr/bin/env python3
"""Parse and validate the track files of A2 Racer 4. Layouts come from the loaders in spel.dat.

Usage: track_dump.py <install_or_data_dir> [<out.csv>]
cmp FUN_004b35f0, dmp FUN_004aa9d0, omp FUN_004aead0, pmp FUN_004ab6d0, rmp FUN_004aba30 (order set by FUN_004ae570,
which also requires equal chunk counts in pmp and rmp), pth FUN_004641d0.
Reports, per file, whether the parse consumed every byte. Field meanings are documented in docs/formats/track-files.md.
"""
import csv, os, struct, sys

R = lambda b, o: struct.unpack_from('<i', b, o)[0]


def cmp_(b):
    n = R(b, 0); return dict(records=n), 4 + n * 24


def dmp(b):
    n = R(b, 0); return dict(records=n), 4 + n * 36


def omp(b):
    n = R(b, 0); return dict(records=n), 4 + n * 68


def pth(b):
    if R(b, 0) != -1:
        raise ValueError('version')
    n = R(b, 4); p = 8; pts = 0
    for _ in range(n):
        c = R(b, p + 20); pts += c; p += 24 + c * 16
    return dict(paths=n, points=pts), p


def pmp(b):
    n = R(b, 0); p = 4
    for _ in range(n):
        p += 12 + 8
        for _ in range(3):
            c = R(b, p); p += 4 + c * 4
    return dict(chunks=n), p


def rmp(b):
    p = 0; ver = R(b, p); p += 4; total = None
    if ver < 0:
        total = R(b, p); p += 4
    n = R(b, p); p += 4; verts = 0
    for _ in range(n):
        for _ in range(4):
            c = R(b, p); p += 4 + c * (PLANE_V1 if ver < 0 else PLANE_V0); verts += c
    return dict(version=ver, header_value=total, chunks=n, list_entries=verts), p


# FUN_004b31a0: 4 vertices (x, y, z, u, v, plus a colour dword when the file version is -1), then 6 int indices
PLANE_V1 = 4 * 24 + 24
PLANE_V0 = 4 * 20 + 24
READERS = dict(cmp=cmp_, dmp=dmp, omp=omp, pmp=pmp, rmp=rmp, pth=pth)


def main():
    d = sys.argv[1]
    rows = []
    for t in range(9):
        for ext, fn in READERS.items():
            name = next((x for x in os.listdir(d) if x.lower() == 'etappe%d.%s' % (t, ext)), None)
            if not name:
                rows.append(dict(file='etappe%d.%s' % (t, ext), status='missing'))
                continue
            b = open(os.path.join(d, name), 'rb').read()
            try:
                info, used = fn(b)
                st = 'exact' if used == len(b) else 'size mismatch'
            except Exception as e:
                info, used, st = {}, 0, 'error %r' % (e,)
            rows.append(dict(file=name, size=len(b), consumed=used, status=st, info=info))
    ok = sum(r['status'] == 'exact' for r in rows)
    for r in rows:
        if r['status'] != 'exact':
            print(r)
    print('files', len(rows), 'exact', ok)
    if len(sys.argv) > 2:
        with open(sys.argv[2], 'w', newline='') as f:
            w = csv.DictWriter(f, ['file', 'size', 'consumed', 'status', 'info'])
            w.writeheader(); w.writerows(rows)


if __name__ == '__main__':
    main()
