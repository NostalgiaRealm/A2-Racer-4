#!/usr/bin/env python3
"""Find a function, address, string, asset, module or original file in this package. Standard library only.

  python3 scripts/lookup.py module  <name-substring>
  python3 scripts/lookup.py func    <module> <address-or-name-substring> [--code] [--annotated]
  python3 scripts/lookup.py addr    <module> <hex-address> [--code] [--annotated]
  python3 scripts/lookup.py string  <text> [--module <id-substring>] [--raw]
  python3 scripts/lookup.py asset   <name-substring>
  python3 scripts/lookup.py file    <name-substring-or-sha256>
  python3 scripts/lookup.py callers <module> <hex-address>
  python3 scripts/lookup.py callees <module> <hex-address>

<module> is an id from inventory/modules.csv or any unique substring of one, such as spel.dat or menu.exe.
"""
import csv, glob, json, os, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
csv.field_size_limit(1 << 28)


def modules():
    return json.load(open(os.path.join(ROOT, 'inventory', 'modules.json')))


def resolve(q):
    ms = [m for m in modules() if q.lower() in m['id'].lower() or q.lower() == m['name'].lower()]
    exact = [m for m in ms if m['id'].lower() == q.lower() or m['name'].lower() == q.lower()]
    if len(exact) == 1:
        return exact[0]
    if len(ms) == 1:
        return ms[0]
    if not ms:
        sys.exit('no module matches %r' % q)
    sys.exit('ambiguous module %r: %s' % (q, ', '.join(m['id'] for m in ms)))


def moddir(m, annotated=False):
    d = os.path.join(ROOT, 'decompiled', m['id'])
    return os.path.join(d, 'annotated') if annotated and os.path.isdir(os.path.join(d, 'annotated')) else d


def funcs(d):
    with open(os.path.join(d, 'functions.csv'), newline='', errors='replace') as f:
        return list(csv.DictReader(f))


def show(d, r, code):
    print('%s  %s  size=%s  status=%s  %s' % (r['address'], r['name'], r['body_bytes'], r['status'], r['signature']))
    print('  callers=%s callees=%s  %s:%s-%s %s' % (r['caller_count'], r['callee_count'], os.path.relpath(os.path.join(d, r['c_file']), ROOT), r['c_line_start'], r['c_line_end'], r['per_function_file']))
    if code:
        with open(os.path.join(d, r['c_file']), errors='replace') as f:
            for i, line in enumerate(f, 1):
                if i >= int(r['c_line_start']):
                    sys.stdout.write(line)
                if i > int(r['c_line_end']):
                    break


def main():
    a = sys.argv[1:]
    if len(a) < 2:
        sys.exit(__doc__)
    code = '--code' in a
    ann = '--annotated' in a
    raw = '--raw' in a
    mf = None
    if '--module' in a:
        i = a.index('--module'); mf = a[i + 1]; del a[i:i + 2]
    a = [x for x in a if x not in ('--code', '--annotated', '--raw')]
    cmd = a[0]
    if cmd == 'module':
        for m in modules():
            if a[1].lower() in m['id'].lower() or a[1].lower() in m['name'].lower():
                v = m.get('version_info') or {}
                print('%-60s %s %s size=%s %s | %s | %s' % (m['id'], m['format'], m.get('arch', ''), m['size'], m['sha256'][:12], v.get('FileDescription', ''), m['primary_location']))
    elif cmd == 'func':
        m = resolve(a[1]); d = moddir(m, ann); q = a[2].lower().replace('0x', '')
        for r in funcs(d):
            if r['address'].lower() == q.zfill(len(r['address'])) or q in r['name'].lower():
                show(d, r, code)
    elif cmd == 'addr':
        m = resolve(a[1]); d = moddir(m, ann); t = int(a[2], 16)
        hit = False
        for r in funcs(d):
            for rng in r['body_ranges'].split(';'):
                if '-' in rng:
                    s, e = rng.split('-')
                    try:
                        if int(s.split(':')[-1], 16) <= t <= int(e.split(':')[-1], 16):
                            show(d, r, code); hit = True
                    except ValueError:
                        pass
        if not hit:
            print('address is not inside a function. Check sections.csv, code_gaps.csv and symbols.csv in', os.path.relpath(d, ROOT))
    elif cmd in ('callers', 'callees'):
        m = resolve(a[1]); d = moddir(m); t = a[2].lower().replace('0x', '')
        with open(os.path.join(d, 'calls.csv'), newline='', errors='replace') as f:
            for r in csv.DictReader(f):
                k = r['target'] if cmd == 'callers' else r['caller']
                if k.lower().endswith(t):
                    print(r['caller'], r['call_site'], '->', r['target'], r['target_name'])
    elif cmd == 'string':
        q = a[1].lower()
        name = 'strings_raw.csv' if raw else 'strings.csv'
        for m in modules():
            if mf and mf.lower() not in m['id'].lower():
                continue
            p = os.path.join(ROOT, 'decompiled', m['id'], name)
            if not os.path.exists(p):
                continue
            with open(p, newline='', errors='replace') as f:
                for r in csv.DictReader(f):
                    if q in r['value'].lower():
                        print(m['id'], r.get('address', r.get('file_offset')), repr(r['value'])[:200], r.get('referenced_from_functions', ''))
    elif cmd == 'asset':
        for mf_ in glob.glob(os.path.join(ROOT, 'extracted', 'game-archives', '*', '_manifest.csv')):
            with open(mf_, newline='') as f:
                for r in csv.DictReader(f):
                    if a[1].lower() in r.get('name', r['file']).lower():
                        print(os.path.relpath(os.path.join(os.path.dirname(mf_), r['file']), ROOT), 'offset', r['offset'], 'size', r['size'], r['sha256'][:12])
    elif cmd == 'file':
        for r in json.load(open(os.path.join(ROOT, 'inventory', 'all_files.json'))):
            if a[1].lower() in r['path_in_output'].lower() or a[1].lower() == r['sha256']:
                print(r['path_in_output'], r['size'], r['sha256'][:12], '|', r['magic'][:70], '| from', r['original_path'])
    else:
        sys.exit(__doc__)


if __name__ == '__main__':
    main()
