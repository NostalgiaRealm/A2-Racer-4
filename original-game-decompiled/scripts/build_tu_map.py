#!/usr/bin/env python3
"""Map functions to original translation units using __FILE__ strings left in the binary.

Usage: build_tu_map.py <decompiled_module_dir>
Writes tu_map.csv (one row per function) and tu_summary.csv.
Evidence levels: direct = the function references the source-path string; between = it sits between two
direct functions of the same file in address order; unassigned otherwise. The MSVC linker keeps one object's
code contiguous in general, but inline and COMDAT functions break this, so "between" remains an inference.
"""
import csv, os, re, sys, collections

csv.field_size_limit(1 << 28)
d = sys.argv[1]
fs = list(csv.DictReader(open(os.path.join(d, 'functions.csv'), newline='', errors='replace')))
strs = list(csv.DictReader(open(os.path.join(d, 'strings.csv'), newline='', errors='replace')))
direct = collections.defaultdict(set)
PAT = re.compile(r'[A-Za-z]:\\[^"\n\r]*?\.(?:cpp|c|h|hpp|asm)\b', re.I)
for s in strs:
    m = PAT.search(s['value'])
    if not m:
        continue
    tu = m.group(0)
    for fa in s['referenced_from_functions'].split(';'):
        if fa:
            direct[fa].add(tu)
idx = {f['address']: i for i, f in enumerate(fs)}
assign = [None] * len(fs)
for a, tus in direct.items():
    if a in idx:
        assign[idx[a]] = ('|'.join(sorted(tus)), 'direct')
# fill between neighbours that agree
last, lasti = None, None
for i, x in enumerate(assign):
    if x and x[1] == 'direct':
        if last == x[0] and lasti is not None:
            for j in range(lasti + 1, i):
                if assign[j] is None:
                    assign[j] = (x[0], 'between')
        last, lasti = x[0], i
with open(os.path.join(d, 'tu_map.csv'), 'w', newline='') as f:
    w = csv.writer(f)
    w.writerow(['address', 'name', 'body_bytes', 'translation_unit', 'evidence'])
    for fu, x in zip(fs, assign):
        w.writerow([fu['address'], fu['name'], fu['body_bytes'], x[0] if x else '', x[1] if x else 'unassigned'])
sm = collections.OrderedDict()
for fu, x in zip(fs, assign):
    if not x:
        continue
    r = sm.setdefault(x[0], dict(tu=x[0], first=fu['address'], last=fu['address'], direct=0, between=0, bytes=0))
    r['last'] = fu['address']
    r[x[1]] += 1
    r['bytes'] += int(fu['body_bytes'])
with open(os.path.join(d, 'tu_summary.csv'), 'w', newline='') as f:
    w = csv.DictWriter(f, ['tu', 'first', 'last', 'direct', 'between', 'bytes'])
    w.writeheader()
    w.writerows(sm.values())
print('functions', len(fs), 'direct', sum(1 for x in assign if x and x[1] == 'direct'), 'between', sum(1 for x in assign if x and x[1] == 'between'), 'unassigned', sum(1 for x in assign if not x), 'TUs', len(sm))
