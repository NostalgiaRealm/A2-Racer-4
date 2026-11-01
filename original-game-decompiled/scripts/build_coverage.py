#!/usr/bin/env python3
"""Reconcile collected files and decompiler output against the inventories, then write the coverage report.

Usage: build_coverage.py <output_root> [--inputs <wine_install_dir> <iso_path>]
Writes COVERAGE_REPORT.md, inventory/coverage.csv, inventory/coverage.json, inventory/failed_functions_all.csv,
inventory/ambiguous_regions_all.csv and inventory/file_reconciliation.json.
Exit status is 1 if a check fails. Static analysis results only: dynamic observations are reported from dynamic/.
"""
import csv, hashlib, json, os, re, struct, sys

csv.field_size_limit(1 << 28)
ROOT = sys.argv[1]
INV = os.path.join(ROOT, 'inventory')
INPUT_INSTALL, INPUT_ISO = None, None
if '--inputs' in sys.argv:
    i = sys.argv.index('--inputs')
    INPUT_INSTALL, INPUT_ISO = sys.argv[i + 1], sys.argv[i + 2]
problems = []


def sha(p):
    h = hashlib.sha256()
    with open(p, 'rb') as f:
        for c in iter(lambda: f.read(1 << 20), b''):
            h.update(c)
    return h.hexdigest()


def tree(top):
    out = {}
    for dp, _, fn in os.walk(top):
        for n in fn:
            p = os.path.join(dp, n)
            out[os.path.relpath(p, top)] = p
    return out


def reconcile_files():
    rep = {}
    # install copy against the fingerprint taken before any work started
    before = {}
    for line in open(os.path.join(INV, 'input_fingerprint_install_before.sha256')):
        h, p = line.rstrip('\n').split('  ', 1)
        before[os.path.normpath(p)] = h
    cp = tree(os.path.join(ROOT, 'original/install'))
    missing = [p for p in before if p not in cp]
    wrong = [p for p in before if p in cp and sha(cp[p]) != before[p]]
    extra = [p for p in cp if p not in before]
    rep['install'] = dict(fingerprint_files=len(before), copied_files=len(cp), missing=missing, hash_mismatch=wrong, extra=extra)
    if missing or wrong or extra:
        problems.append('install copy does not match the pre-run fingerprint')
    # live input check: inputs must still match the fingerprint taken before work started
    if INPUT_INSTALL:
        live = tree(INPUT_INSTALL)
        changed = [p for p in before if p not in live or sha(live[p]) != before[p]]
        added = [p for p in live if p not in before]
        statlines = {}
        for line in open(os.path.join(INV, 'input_fingerprint_install_before.stat.tsv')):
            a, s, m = line.rstrip('\n').split('\t')
            statlines[os.path.normpath(a)] = (int(s), float(m))
        mtime_changed = [p for p in before if p in live and abs(os.stat(live[p]).st_mtime - statlines[p][1]) > 1e-3]
        rep['input_install_now'] = dict(files=len(live), changed_content=changed, added=added, mtime_changed=mtime_changed)
        if changed or added or mtime_changed:
            problems.append('the original install folder changed during the run')
        lines = open(os.path.join(INV, 'input_fingerprint_iso_before.sha256')).read().splitlines()
        iso_hash = lines[0].split()[0]
        now = sha(INPUT_ISO)
        rep['input_iso_now'] = dict(sha256_before=iso_hash, sha256_now=now, unchanged=iso_hash == now)
        if iso_hash != now:
            problems.append('the original ISO changed during the run')
    # disc tree against the ISO directory records
    iso_rep = json.load(open(os.path.join(INV, 'iso/iso_structure_report.json')))
    disc = tree(os.path.join(ROOT, 'original/disc'))
    rows = list(csv.DictReader(open(os.path.join(INV, 'iso/iso_directory_map.csv'), newline='')))
    img = open(os.path.join(ROOT, 'original/disc-image', os.listdir(os.path.join(ROOT, 'original/disc-image'))[0]), 'rb')
    miss, bad = [], []
    for r in rows:
        p = r['joliet_path'] or r['primary_path']
        if p not in disc:
            miss.append(p)
            continue
        if os.path.getsize(disc[p]) != int(r['size']):
            bad.append(p)
            continue
        img.seek(int(r['lba']) * 2048)
        h = hashlib.sha256()
        left = int(r['size'])
        while left:
            c = img.read(min(1 << 20, left))
            h.update(c)
            left -= len(c)
        if h.hexdigest() != sha(disc[p]):
            bad.append(p)
    rep['disc'] = dict(iso_records=len(rows), extracted_files=len(disc), missing=miss, mismatched=bad, unreferenced_nonzero_bytes=iso_rep['unreferenced_nonzero_total'], bytes_past_volume=iso_rep['image_bytes_past_volume_space'])
    if miss or bad or len(disc) != len(rows):
        problems.append('disc extraction does not reconcile with ISO directory records')
    # installer log against collected files
    log = open(os.path.join(ROOT, 'original/install/INSTALL.LOG'), encoding='latin1').read().splitlines()
    logged = []
    for l in log:
        m = re.match(r'\s*File (Copy|Overwrite): (.+)$', l)
        if m:
            logged.append(m.group(2).strip())
    ext_top = os.path.join(ROOT, 'original/wine-prefix-external')
    res = []
    for w in logged:
        if w.lower().startswith('c:\\program files (x86)\\davilex\\a2 racer 4\\'):
            name = w.split('\\')[-1]
            found = [k for k in tree(os.path.join(ROOT, 'original/install')) if k.lower() == name.lower()]
            res.append(dict(logged=w, status='in original/install' if found else 'MISSING'))
        else:
            rel = w[3:].replace('\\', '/').replace('windows/system32', 'windows/syswow64')
            ok = os.path.exists(os.path.join(ext_top, rel)) or any(k.lower() == rel.lower() for k in tree(ext_top))
            res.append(dict(logged=w, status='in original/wine-prefix-external' if ok else 'not copied'))
    rep['install_log'] = dict(logged_file_operations=len(logged), not_collected=[r for r in res if r['status'] in ('MISSING', 'not copied')])
    json.dump(rep, open(os.path.join(INV, 'file_reconciliation.json'), 'w'), indent=1)
    return rep


def verify_listing(mid, m):
    """Compare instruction bytes in disassembly.asm with the bytes of the input file (PE32 only)."""
    if m['format'] != 'PE32':
        return None
    p = os.path.join(ROOT, m['primary_location'])
    b = open(p, 'rb').read()
    e = struct.unpack_from('<I', b, 0x3c)[0]
    nsec = struct.unpack_from('<H', b, e + 6)[0]
    opt = struct.unpack_from('<H', b, e + 20)[0]
    base = struct.unpack_from('<I', b, e + 52)[0]
    secs = []
    for i in range(nsec):
        vs, va, rs, rp = struct.unpack_from('<IIII', b, e + 24 + opt + i * 40 + 8)
        secs.append((base + va, base + va + rs, rp))
    d = os.path.join(ROOT, 'decompiled', mid, 'disassembly.asm')
    if not os.path.exists(d):
        return None
    total = bad = 0
    # Instruction lines hold the bytes in a fixed 20-column field. Data lines such as "db 5h" have text there, so they fail this test.
    rx = re.compile(r'^([0-9a-f]{8})  (.{20}) \S')
    hexfield = re.compile(r'^(?:[0-9a-f]{2})+ *$')
    with open(d, errors='replace') as f:
        for line in f:
            mm = rx.match(line)
            if not mm or not hexfield.match(mm.group(2)):
                continue
            a = int(mm.group(1), 16)
            hexb = bytes.fromhex(mm.group(2).strip())
            for s, z, rp in secs:
                if s <= a < z:
                    if b[a - s + rp:a - s + rp + len(hexb)] != hexb:
                        bad += 1
                    total += 1
                    break
    return dict(instructions_checked=total, mismatches=bad)


def module_rows():
    mods = json.load(open(os.path.join(INV, 'modules.json')))
    rows, fails, gaps = [], [], []
    for m in mods:
        mid = m['id']
        d = os.path.join(ROOT, 'decompiled', mid)
        r = dict(id=mid, group=m['group'], name=m['name'], format=m['format'], arch=m.get('arch', ''), size=m['size'], sha256=m['sha256'], toolchain=m['toolchain'], locations=len(m['locations']), primary_location=m['primary_location'])
        s = os.path.join(d, 'summary.json')
        if m['analysis_scope'] != 'decompile':
            r.update(status='inventory_only', note='not needed to run the game: not decompiled, by owner decision')
            if os.path.isdir(d):
                problems.append('%s: inventory-only module has decompiled output' % mid)
        elif m['toolchain'] == 'ghidra':
            if os.path.exists(s):
                j = json.load(open(s))
                r.update(status='decompiled', functions=j['functions'], decompiled=j['decompiled'], assembly_only=j['assembly_only'], strings=j['strings'], instructions=j['instructions'], exec_bytes=j['executable_bytes'], gap_padding=j['gap_padding_bytes'], gap_data=j['gap_defined_data_bytes'], gap_ambiguous=j['gap_ambiguous_bytes'], outside_funcs=j['instruction_bytes_outside_functions'], error_bookmarks=j['error_bookmarks'], language=j['language'], compiler_spec=j['compiler_spec'])
                # cross-check the function index against the C file
                fp = os.path.join(d, 'functions.csv')
                rows_f = list(csv.DictReader(open(fp, newline='', errors='replace')))
                if len(rows_f) != j['functions']:
                    problems.append('%s: functions.csv has %d rows, summary says %d' % (mid, len(rows_f), j['functions']))
                c = open(os.path.join(d, 'decompiled.c'), errors='replace').read()
                headers = len(re.findall(r'^/\* ==== ', c, re.M))
                if headers != j['functions']:
                    problems.append('%s: decompiled.c has %d function headers, summary says %d' % (mid, headers, j['functions']))
                r['c_headers'] = headers
                st = {}
                for fr in rows_f:
                    st[fr['status']] = st.get(fr['status'], 0) + 1
                    if fr['status'] == 'assembly_only':
                        fails.append(dict(module=mid, address=fr['address'], name=fr['name'], body_bytes=fr['body_bytes'], error=fr['error'][:300]))
                r['status_counts'] = st
                rf = os.path.join(d, 'recovered_functions.tsv')
                if os.path.exists(rf):
                    cnt = {}
                    for line in open(rf).read().splitlines()[1:]:
                        k = line.split('\t')[1].split(':')[0]
                        cnt[k] = cnt.get(k, 0) + 1
                    r['recovered_by_method'] = cnt
                gp = os.path.join(d, 'code_gaps.csv')
                if os.path.exists(gp):
                    for g in csv.DictReader(open(gp, newline='')):
                        if g['classification'] in ('undefined_bytes_ambiguous', 'partly_defined_data'):
                            gaps.append(dict(module=mid, start=g['start'], end=g['end_inclusive'], length=g['length'], classification=g['classification'], first_bytes=g['first_bytes_hex']))
                v = verify_listing(mid, m)
                if v:
                    r.update(v)
                    if v['mismatches']:
                        problems.append('%s: %d listing instructions differ from input bytes' % (mid, v['mismatches']))
                if m.get('resource_only'):
                    r['note'] = 'no executable code expected: resource-only module'
            else:
                r.update(status='MISSING_OUTPUT')
                problems.append('%s: no Ghidra output' % mid)
        elif m['format'] == 'dso':
            dd = os.path.join(ROOT, 'decompiled', 'game__bonus.dso')
            r.update(status='custom_bytecode_analysis' if os.path.exists(os.path.join(dd, 'README.md')) else 'NOT_PROCESSED', note='DaviScript compiled script: see decompiled/game__bonus.dso')
            if r['status'] == 'NOT_PROCESSED':
                problems.append('%s: bytecode has not been processed' % mid)
        else:
            r.update(status='UNCLASSIFIED')
            problems.append('%s: unclassified module format %s' % (mid, m['format']))
        rows.append(r)
    return rows, fails, gaps


def fmt_table(rows, cols):
    out = ['| ' + ' | '.join(c[0] for c in cols) + ' |', '|' + '---|' * len(cols)]
    for r in rows:
        out.append('| ' + ' | '.join(str(r.get(c[1], '')).replace('|', '/') for c in cols) + ' |')
    return '\n'.join(out)


def main():
    frep = reconcile_files()
    rows, fails, gaps = module_rows()
    with open(os.path.join(INV, 'failed_functions_all.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, ['module', 'address', 'name', 'body_bytes', 'error'])
        w.writeheader(); w.writerows(fails)
    with open(os.path.join(INV, 'ambiguous_regions_all.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, ['module', 'start', 'end', 'length', 'classification', 'first_bytes'])
        w.writeheader(); w.writerows(gaps)
    fields = ['id', 'group', 'name', 'format', 'arch', 'size', 'sha256', 'toolchain', 'status', 'functions', 'decompiled', 'assembly_only', 'strings', 'instructions', 'exec_bytes', 'gap_padding', 'gap_data', 'gap_ambiguous', 'outside_funcs', 'error_bookmarks', 'instructions_checked', 'mismatches', 'recovered_by_method', 'language', 'compiler_spec', 'locations', 'primary_location', 'note']
    with open(os.path.join(INV, 'coverage.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, fields, extrasaction='ignore')
        w.writeheader(); w.writerows(rows)
    json.dump(dict(modules=rows, problems=problems, files=frep), open(os.path.join(INV, 'coverage.json'), 'w'), indent=1)

    nat = [r for r in rows if r['status'] != 'inventory_only' and r['toolchain'] == 'ghidra']
    inv_only = [r for r in rows if r['status'] == 'inventory_only']
    tot_f = sum(r.get('functions', 0) for r in nat)
    tot_ok = sum(r.get('decompiled', 0) for r in nat)
    tot_fail = sum(r.get('assembly_only', 0) for r in nat)
    groups = {}
    for r in rows:
        g = groups.setdefault(r['group'], dict(group=r['group'], modules=0, functions=0, decompiled=0, assembly_only=0))
        g['modules'] += 1
        for k in ('functions', 'decompiled', 'assembly_only'):
            g[k] += r.get(k, 0) or 0
    L = []
    L.append('# Coverage report\n')
    L.append('Generated by `scripts/build_coverage.py`. Everything here is **static analysis** unless the dynamic section says otherwise. A decompiled function is Ghidra pseudocode, not recovered source.\n')
    L.append('## Totals\n')
    L.append('- Unique code-bearing items found: %d. Decompiled because they run the game: %d (native %d, DaviScript bytecode 1). Inventory only, by owner decision: %d.' % (len(rows), len(rows) - len(inv_only), len(nat), len(inv_only)))
    L.append('- Native functions exported: %d. Decompiled to C: %d. Assembly only: %d.' % (tot_f, tot_ok, tot_fail))
    L.append('- Check failures in this run: %d.\n' % len(problems))
    if problems:
        L.append('## Check failures\n')
        for p in problems:
            L.append('- ' + p)
        L.append('')
    L.append('## By group\n')
    L.append(fmt_table(sorted(groups.values(), key=lambda g: g['group']), [('Group', 'group'), ('Modules', 'modules'), ('Functions', 'functions'), ('Decompiled', 'decompiled'), ('Assembly only', 'assembly_only')]))
    L.append('\n## File reconciliation\n')
    L.append('- Install copy: %(fingerprint_files)d files fingerprinted, %(copied_files)d copied, %(m)d missing, %(w)d hash mismatches.' % dict(frep['install'], m=len(frep['install']['missing']), w=len(frep['install']['hash_mismatch'])))
    L.append('- Disc: %(iso_records)d ISO directory records, %(extracted_files)d files extracted, %(m)d missing, %(b)d mismatched. Unreferenced non-zero sectors: %(unreferenced_nonzero_bytes)d bytes. Bytes past the volume: %(bytes_past_volume)d (all zero).' % dict(frep['disc'], m=len(frep['disc']['missing']), b=len(frep['disc']['mismatched'])))
    L.append('- `INSTALL.LOG`: %d file operations. Not collected: %d.' % (frep['install_log']['logged_file_operations'], len(frep['install_log']['not_collected'])))
    for r in frep['install_log']['not_collected']:
        L.append('  - `%s`: %s' % (r['logged'], r['status']))
    if 'input_install_now' in frep:
        L.append('- Original install folder after the run: %d changed, %d added, %d with changed mtime.' % (len(frep['input_install_now']['changed_content']), len(frep['input_install_now']['added']), len(frep['input_install_now']['mtime_changed'])))
        L.append('- Original ISO after the run: %s.' % ('unchanged (SHA-256 matches)' if frep['input_iso_now']['unchanged'] else 'CHANGED'))
    L.append('\n## Native modules\n')
    L.append('`Gaps` are bytes in executable sections with no instruction: padding / defined data / ambiguous. `Checked` is how many listing instructions were compared byte for byte with the input file.\n')
    tbl = []
    for r in sorted(nat, key=lambda x: (x['group'], x['id'])):
        tbl.append(dict(r, gaps='%s / %s / %s' % (r.get('gap_padding', '-'), r.get('gap_data', '-'), r.get('gap_ambiguous', '-')), rec=' '.join('%s=%s' % kv for kv in (r.get('recovered_by_method') or {}).items())))
    L.append(fmt_table(tbl, [('Module', 'id'), ('Format', 'format'), ('Status', 'status'), ('Functions', 'functions'), ('Decompiled', 'decompiled'), ('Asm only', 'assembly_only'), ('Gaps', 'gaps'), ('Outside funcs', 'outside_funcs'), ('Checked', 'instructions_checked'), ('Mismatch', 'mismatches'), ('Second-pass recoveries', 'rec'), ('Note', 'note')]))
    L.append('\n## DaviScript bytecode\n')
    L.append(fmt_table([r for r in rows if r['format'] == 'dso'], [('Module', 'id'), ('Status', 'status'), ('Note', 'note')]))
    L.append('\n## Inventory-only modules (not decompiled)\n')
    L.append('The owner decided that only what runs the game is decompiled. These modules are collected and hashed and have a role entry in `inventory/module_roles.csv`, but no code analysis. Their roles come from version info, names and packaging.\n')
    java = [r for r in inv_only if r['format'] == 'JavaClass']
    L.append(fmt_table(sorted([r for r in inv_only if r['format'] != 'JavaClass'], key=lambda x: (x['group'], x['id'])), [('Module', 'id'), ('Group', 'group'), ('Format', 'format'), ('Size', 'size'), ('Copies', 'locations')]))
    L.append('\nAlso inventory only: %d Java classes of the Adobe SVG Viewer, listed in `inventory/modules.csv`.' % len(java))
    L.append('\n## Functions that did not decompile\n')
    L.append('%d functions (full list with errors: `inventory/failed_functions_all.csv`).\n' % len(fails))
    if fails:
        L.append(fmt_table(fails, [('Module', 'module'), ('Address', 'address'), ('Name', 'name'), ('Bytes', 'body_bytes'), ('Error', 'error')]))
    L.append('\n## Ambiguous code or data regions\n')
    L.append('%d regions, %d bytes (all listed individually in `inventory/ambiguous_regions_all.csv`). They stay undecided: not claimed as code and not claimed as data.\n' % (len(gaps), sum(int(g['length']) for g in gaps)))
    dyn = os.path.join(ROOT, 'dynamic', 'RESULTS.md')
    L.append('\n## Static analysis versus observed behavior\n')
    if os.path.exists(dyn):
        L.append('Runtime observations are limited to what `dynamic/RESULTS.md` records. All function, format and subsystem coverage above is static.')
    else:
        L.append('No runtime observation was recorded. All coverage above is static.')
    extra = os.path.join(ROOT, 'docs', 'coverage-notes.md')
    if os.path.exists(extra):
        L.append('\n' + open(extra).read())
    open(os.path.join(ROOT, 'COVERAGE_REPORT.md'), 'w').write('\n'.join(L) + '\n')
    print('modules', len(rows), 'native', len(nat), 'functions', tot_f, 'decompiled', tot_ok, 'assembly_only', tot_fail, 'ambiguous regions', len(gaps), 'problems', len(problems))
    for p in problems[:40]:
        print(' PROBLEM', p)
    sys.exit(1 if problems else 0)


if __name__ == '__main__':
    main()
