#!/usr/bin/env python3
"""Check every .d3d model against the layout read by FUN_004be590 in spel.dat.

Usage: d3d_check.py <rcs_folder> [<out.csv>]
Layout: i32 v; v<0: i32 vertices, i32 triangles, vertices*49 bytes; otherwise v is the vertex count: i32 triangles,
vertices*33 bytes. Then triangles*9 bytes. Prints how many files match their size exactly.
"""
import csv, os, struct, sys

d = sys.argv[1]
rows = []
for r in csv.DictReader(open(os.path.join(d, '_manifest.csv'))):
    if not r['name'].lower().endswith('.d3d'):
        continue
    b = open(os.path.join(d, r['file']), 'rb').read()
    v = struct.unpack_from('<i', b, 0)[0]
    if v < 0:
        n, t = struct.unpack_from('<ii', b, 4); want = 12 + 49 * n + 9 * t; fmt = 'version -1'
    else:
        n, t = v, struct.unpack_from('<i', b, 4)[0]; want = 8 + 33 * n + 9 * t; fmt = 'no version field'
    rows.append(dict(name=r['name'], format=fmt, vertices=n, triangles=t, size=len(b), expected=want, exact=want == len(b)))
print('files', len(rows), 'exact', sum(x['exact'] for x in rows), {f: sum(x['format'] == f for x in rows) for f in ('version -1', 'no version field')})
if len(sys.argv) > 2:
    with open(sys.argv[2], 'w', newline='') as f:
        w = csv.DictWriter(f, list(rows[0].keys())); w.writeheader(); w.writerows(rows)
