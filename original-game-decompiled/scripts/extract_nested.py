#!/usr/bin/env python3
"""Recursively open installers and archives found on the disc copy. Originals are never modified.

Usage: extract_nested.py <output_root> <unshield_binary_dir>
Writes extracted/<container-slug>__<method>/ trees and inventory/nested_archives.csv.
Runs host tools through distrobox-host-exec when present (cabextract, 7z, unshield).
"""
import csv, hashlib, os, re, shutil, struct, subprocess, sys

ROOT = sys.argv[1]
UNSHIELD = sys.argv[2]
EXTRACTED = os.path.join(ROOT, 'extracted')
HOST = ['distrobox-host-exec'] if shutil.which('distrobox-host-exec') else []
rows, seen_hash = [], {}


def rel(p):
    return os.path.relpath(p, ROOT)


def run(cmd, cwd=None):
    r = subprocess.run(HOST + cmd, cwd=cwd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, errors='replace')
    return r.returncode, r.stdout


def sha(p):
    h = hashlib.sha256()
    with open(p, 'rb') as f:
        for c in iter(lambda: f.read(1 << 20), b''):
            h.update(c)
    return h.hexdigest()


def count_files(d):
    return sum(len(fs) for _, _, fs in os.walk(d))


def record(container, method, cmd, code, out, dst, note=''):
    rows.append({'container': rel(container), 'container_sha256': sha(container), 'method': method, 'command': cmd,
                 'exit_code': code, 'members_extracted': count_files(dst) if os.path.isdir(dst) else 0,
                 'output_dir': rel(dst), 'note': note, 'tool_output_tail': out[-300:].replace('\n', ' | ')})
    print('[%s] %s -> %s (%s files) rc=%s %s' % (method, rel(container), rel(dst), rows[-1]['members_extracted'], code, note))


def is_pe(b):
    if b[:2] != b'MZ' or len(b) < 0x40:
        return False
    e = struct.unpack_from('<I', b, 0x3c)[0]
    return b[e:e + 4] == b'PE\0\0'


def carve_cabs(path, b):
    """Return valid (offset, size) MSCF cabinets embedded at any offset."""
    out = []
    pos = 0
    while True:
        i = b.find(b'MSCF\0\0\0\0', pos)
        if i < 0:
            break
        if i + 36 <= len(b):
            size = struct.unpack_from('<I', b, i + 8)[0]
            ver = b[i + 24:i + 26]
            if ver == bytes([3, 1]) and 0 < size <= len(b) - i:
                out.append((i, size))
                pos = i + size
                continue
        pos = i + 8
    return out


def dst_for(path, method):
    base = os.path.basename(path) + '__' + method
    if os.path.commonpath([os.path.abspath(path), EXTRACTED]) == EXTRACTED:
        return os.path.join(os.path.dirname(path), base)
    sl = re.sub(r'[^A-Za-z0-9._-]+', '_', rel(path).replace('original/disc/', 'disc/').replace('original/', ''))
    return os.path.join(EXTRACTED, sl + '__' + method)


def handle(path):
    with open(path, 'rb') as f:
        b = f.read()
    if len(b) < 32:
        return []
    h = hashlib.sha256(b).hexdigest()
    new = []
    if b[:8] == b'MSCF\0\0\0\0':
        if h in seen_hash:
            return []
        seen_hash[h] = path
        dst = dst_for(path, 'cab')
        os.makedirs(dst, exist_ok=True)
        code, out = run(['cabextract', '-q', '-d', dst, path])
        record(path, 'cabextract', 'cabextract -d <dst> <cab>', code, out, dst)
        new.append(dst)
    elif b[:4] == b'SZDD' or b[:4] == b'KWAJ':
        if h in seen_hash:
            return []
        seen_hash[h] = path
        dst = dst_for(path, 'szdd')
        os.makedirs(dst, exist_ok=True)
        code, out = run(['7z', 'x', '-y', '-o' + dst, path])
        record(path, '7z-compress', '7z x (MS-Compress SZDD/KWAJ)', code, out, dst)
        new.append(dst)
    elif b[:4] == b'ISc(' and path.lower().endswith('.cab') and os.path.exists(os.path.splitext(path)[0] + '.hdr'):
        if h in seen_hash:
            return []
        seen_hash[h] = path
        dst = dst_for(path, 'installshield')
        os.makedirs(dst, exist_ok=True)
        code, out = run(['env', 'LD_LIBRARY_PATH=' + os.path.join(UNSHIELD, 'usr/lib64'), os.path.join(UNSHIELD, 'usr/bin/unshield'), '-d', dst, 'x', path])
        record(path, 'unshield', 'unshield -d <dst> x <name>.cab (reads <name>.hdr)', code, out, dst)
        new.append(dst)
    elif b[:4] == b'PK\x03\x04':
        if h in seen_hash:
            return []
        seen_hash[h] = path
        dst = dst_for(path, 'zip')
        os.makedirs(dst, exist_ok=True)
        code, out = run(['7z', 'x', '-y', '-o' + dst, path])
        record(path, '7z-zip', '7z x', code, out, dst)
        new.append(dst)
    elif is_pe(b) or b[:2] == b'MZ':
        cabs = carve_cabs(path, b)
        if cabs:
            if h in seen_hash:
                return []
            seen_hash[h] = path
            dst = dst_for(path, 'embedded-cabs')
            os.makedirs(dst, exist_ok=True)
            for n, (o, sz) in enumerate(cabs):
                cp = os.path.join(dst, 'cab_%02d_at_%08x.cab' % (n, o))
                open(cp, 'wb').write(b[o:o + sz])
            record(path, 'carve-MSCF', 'scan for MSCF headers, cut by cbCabinet', 0, '', dst, '%d cabinet(s)' % len(cabs))
            new.append(dst)
    return new


def walk(top):
    todo = [top]
    while todo:
        d = todo.pop()
        for dp, dn, fn in os.walk(d):
            for n in sorted(fn):
                if n in ('manifest.csv', 'WiseScript.bin'):
                    continue
                p = os.path.join(dp, n)
                todo.extend(handle(p))


def main():
    os.makedirs(EXTRACTED, exist_ok=True)
    # Wise payloads were opened by wise_extract.py; scan those trees too.
    walk(os.path.join(ROOT, 'original', 'disc'))
    walk(EXTRACTED)
    # second sweep picks up members written by the first
    walk(EXTRACTED)
    uniq = {}
    for r in rows:
        uniq[(r['container'], r['method'])] = r
    with open(os.path.join(ROOT, 'inventory', 'nested_archives.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, ['container', 'container_sha256', 'method', 'command', 'exit_code', 'members_extracted', 'output_dir', 'note', 'tool_output_tail'])
        w.writeheader()
        w.writerows(uniq.values())
    print('containers opened:', len(uniq))


if __name__ == '__main__':
    main()
