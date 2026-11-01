#!/usr/bin/env python3
"""Confirm that extracted archive members cover each IMG exactly. Usage: check_archives.py <Data_dir> <game-archives_dir>"""
import csv, hashlib, os, sys

d, x = sys.argv[1], sys.argv[2]
for img, sub in (('rcs.IMG', 'rcs'), ('MenuData/MenuRcs.IMG', 'menurcs'), ('RC.IMG', 'rc')):
    b = open(os.path.join(d, img), 'rb').read()
    rows = sorted(csv.DictReader(open(os.path.join(x, sub, '_manifest.csv'))), key=lambda r: int(r['offset']))
    pos = int(rows[0]['offset']); bad = 0
    for r in rows:
        o, n = int(r['offset']), int(r['size'])
        if o != pos or hashlib.sha256(b[o:o + n]).hexdigest() != r['sha256']:
            bad += 1
        pos = o + n
    print(img, 'members', len(rows), 'start', rows[0]['offset'], 'end', pos, 'size', len(b), 'bad', bad, 'OK' if pos == len(b) and not bad else 'FAIL')
