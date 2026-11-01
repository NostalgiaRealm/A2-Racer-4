#!/usr/bin/env python3
"""Second export of a module with analyst names and comments applied. Raw exports stay untouched.

Usage: apply_annotations.py <output_root> <module_id> [<module_id> ...]
Reads annotations/<name>/*.csv or annotations/<name>.csv for the module, plus shared files whose rows start
their comment with [module_id]. Works on a copy of the Ghidra project (analysis-projects/<id>__annotated) and
writes decompiled/<id>/annotated/. Machine code is unchanged; only names and comments differ.
Rejected or unmatched rows are logged to logs/annotations/<id>.log.
"""
import csv, glob, os, re, shutil, subprocess, sys

ROOT = sys.argv[1]
HOST = ['distrobox-host-exec'] if shutil.which('distrobox-host-exec') else []
csv.field_size_limit(1 << 24)
SHARED = ['launcher-and-helpers.csv', 'installers.csv', 'davilex-service.csv']
FIELDS = ['address', 'kind', 'name', 'comment', 'confidence', 'evidence']


def rows_for(mid, name):
    files = glob.glob(os.path.join(ROOT, 'annotations', name, '*.csv')) + glob.glob(os.path.join(ROOT, 'annotations', name + '.csv'))
    out, bad = [], 0
    for fn in sorted(files):
        with open(fn, newline='', errors='replace') as f:
            for r in csv.DictReader(f):
                out.append(r)
    for sh in SHARED:
        p = os.path.join(ROOT, 'annotations', sh)
        if os.path.exists(p):
            with open(p, newline='', errors='replace') as f:
                for r in csv.DictReader(f):
                    m = re.match(r'\s*\[([^\]]+)\]\s*(.*)', r.get('comment') or '')
                    if m and m.group(1) == mid:
                        r['comment'] = m.group(2)
                        out.append(r)
    # one row per (address, kind): the first file in sorted order wins, duplicates are logged
    seen, uniq, dups = set(), [], []
    for r in out:
        a = (r.get('address') or '').strip().lower().replace('0x', '')
        if not re.fullmatch(r'[0-9a-f]{1,8}', a):
            bad += 1
            continue
        k = (a, r.get('kind'))
        if k in seen:
            dups.append(r)
            continue
        seen.add(k)
        r['address'] = a.zfill(8)
        uniq.append(r)
    return uniq, dups, bad


def main():
    for mid in sys.argv[2:]:
        name = mid.split('__', 1)[1]
        rows, dups, bad = rows_for(mid, name)
        if not rows:
            print(mid, 'no annotations')
            continue
        src = os.path.join(ROOT, 'analysis-projects', mid)
        proj = os.path.join(ROOT, 'analysis-projects', mid + '__annotated')
        if os.path.isdir(proj):
            shutil.rmtree(proj)
        shutil.copytree(src, proj)
        for lock in glob.glob(os.path.join(proj, '*.lock*')):
            os.remove(lock)
        d = os.path.join(ROOT, 'decompiled', mid)
        dst = os.path.join(d, 'annotated')
        if os.path.isdir(dst):
            shutil.rmtree(dst)
        os.makedirs(dst)
        if os.path.exists(os.path.join(d, 'unreachable_after_noreturn.csv')):
            shutil.copy(os.path.join(d, 'unreachable_after_noreturn.csv'), dst)
        merged = os.path.join(dst, 'annotations_applied.csv')
        with open(merged, 'w', newline='') as f:
            w = csv.DictWriter(f, FIELDS, extrasaction='ignore')
            w.writeheader()
            w.writerows(rows)
        program = os.path.basename(next(m for m in __import__('json').load(open(os.path.join(ROOT, 'inventory/modules.json'))) if m['id'] == mid)['primary_location'])
        logd = os.path.join(ROOT, 'logs/annotations')
        os.makedirs(logd, exist_ok=True)
        # same memory ceiling as run_ghidra_batch.py: the native decompiler can grow far beyond the Java heap
        cmd = HOST + ['systemd-run', '--user', '--scope', '-q', '--slice=a2r4ghidra.slice', '-p', 'OOMPolicy=continue', '-p', 'MemorySwapMax=0',
                      'env', 'GHIDRA_HEADLESS_MAXMEM=3500M', os.path.expanduser('~/.local/bin/ghidra-headless'), proj, 'analysis', '-process', program, '-noanalysis',
                      '-scriptPath', os.path.join(ROOT, 'scripts/ghidra'), '-postScript', 'ApplyAnnotations.java', merged,
                      '-postScript', 'ExportModule.java', dst, '1', '3']
        with open(os.path.join(logd, mid + '.log'), 'w') as lf:
            lf.write('rows %d duplicates %d malformed %d\n' % (len(rows), len(dups), bad))
            for r in dups:
                lf.write('DUPLICATE %s\n' % r)
            lf.flush()
            rc = subprocess.run(cmd, stdout=lf, stderr=subprocess.STDOUT).returncode
        print(mid, 'rows', len(rows), 'duplicates', len(dups), 'malformed', bad, 'rc', rc, 'summary', os.path.exists(os.path.join(dst, 'summary.json')))


if __name__ == '__main__':
    main()
