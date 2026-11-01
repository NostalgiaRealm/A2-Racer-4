#!/usr/bin/env python3
"""Compact per-function digest for fast triage of a decompiled module.

Usage: python3 scripts/digest.py <module_id_or_name> <start_hex> <end_hex> [--min-bytes N] [--all]
One block per function: address, size, name, signature, translation unit, callers, callees, strings.
Compiler funclets (Unwind@, Catch@) are hidden unless --all is given. Reads only the CSV exports.
"""
import csv, collections, json, os, re, sys

csv.field_size_limit(1 << 28)
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def main():
    args = [a for a in sys.argv[1:]]
    show_all = '--all' in args
    if show_all:
        args.remove('--all')
    minb = 0
    if '--min-bytes' in args:
        i = args.index('--min-bytes'); minb = int(args[i + 1]); del args[i:i + 2]
    q, lo, hi = args[0], int(args[1], 16), int(args[2], 16)
    mods = json.load(open(os.path.join(ROOT, 'inventory/modules.json')))
    ms = [m for m in mods if q.lower() == m['id'].lower() or q.lower() == m['name'].lower()] or [m for m in mods if q.lower() in m['id'].lower()]
    if len(ms) != 1:
        sys.exit('module match: %s' % [m['id'] for m in ms])
    d = os.path.join(ROOT, 'decompiled', ms[0]['id'])
    names = {}
    fs = list(csv.DictReader(open(os.path.join(d, 'functions.csv'), newline='', errors='replace')))
    for f in fs:
        names[f['address']] = f['name']
    tu = {}
    p = os.path.join(d, 'tu_map.csv')
    if os.path.exists(p):
        for r in csv.DictReader(open(p, newline='', errors='replace')):
            if r['translation_unit']:
                tu[r['address']] = (re.split(r'[\\/]', r['translation_unit'])[-1], r['evidence'])
    strs = collections.defaultdict(list)
    for s in csv.DictReader(open(os.path.join(d, 'strings.csv'), newline='', errors='replace')):
        for a in s['referenced_from_functions'].split(';'):
            if a:
                strs[a].append(s['value'])
    callees, callers = collections.defaultdict(collections.Counter), collections.defaultdict(set)
    for c in csv.DictReader(open(os.path.join(d, 'calls.csv'), newline='', errors='replace')):
        if c['caller']:
            t = c['target_name'] or c['target']
            callees[c['caller']][t] += 1
            if c['target']:
                callers[c['target']].add(c['caller'])
    for f in fs:
        a = f['address']
        try:
            v = int(a, 16)
        except ValueError:
            continue
        if not lo <= v <= hi or int(f['body_bytes']) < minb:
            continue
        if not show_all and f['name'].startswith(('Unwind@', 'Catch@')):
            continue
        t = tu.get(a)
        print('%s %5sb %s%s' % (a, f['body_bytes'], f['name'], '  [%s:%s]' % t if t else ''))
        print('   sig: %s' % f['signature'][:140])
        cs = sorted(callers.get(a, []))
        if cs:
            print('   callers(%d): %s' % (len(cs), ' '.join(names.get(x, x) for x in cs[:8])))
        ce = callees.get(a)
        if ce:
            print('   calls: %s' % ' '.join('%s' % k for k, _ in ce.most_common(14)))
        if strs.get(a):
            print('   strings: %s' % ' | '.join(repr(x)[:80] for x in strs[a][:8]))


if __name__ == '__main__':
    main()
