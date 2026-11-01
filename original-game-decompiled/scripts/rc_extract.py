#!/usr/bin/env python3
"""Unpack the game's IMG/IND resource archives. Originals stay untouched.

Usage: rc_extract.py <Data_dir> <output_dir>
Named archives (rcs, MenuData/MenuRcs): IND = u16 count, then count * {char name[20]; u32 offset}.
Index-only archive (RC): IND = u16 count, then count * u32 offset; members have no names.
Member size is the distance to the next greater offset (or end of IMG). Layout confirmed by exact
file-size equations for all three IND files. Writes one folder per archive plus manifest.csv.
"""
import csv, hashlib, os, struct, sys, collections


def named(ind_path, img_path, out):
    ind = open(ind_path, 'rb').read()
    img = open(img_path, 'rb').read()
    n = struct.unpack_from('<H', ind, 0)[0]
    assert len(ind) == 2 + n * 24, 'unexpected IND size'
    ents = []
    for i in range(n):
        raw, off = struct.unpack_from('<20sI', ind, 2 + i * 24)
        name = raw.split(b'\0')[0].decode('latin1')
        trailing = raw[len(name) + 1:]
        ents.append((i, name, off, trailing.strip(b'\0').hex()))
    offs = sorted(set(e[2] for e in ents)) + [len(img)]
    nxt = {offs[k]: offs[k + 1] for k in range(len(offs) - 1)}
    os.makedirs(out, exist_ok=True)
    rows, seen = [], collections.Counter()
    covered = 0
    for i, name, off, tr in ents:
        data = img[off:nxt[off]]
        seen[name.lower()] += 1
        fn = name if seen[name.lower()] == 1 else '%s__dup%d%s' % (os.path.splitext(name)[0], seen[name.lower()], os.path.splitext(name)[1])
        fn = fn.replace('/', '_').replace('\\', '_').replace('*', '_').replace(' ', '_')
        with open(os.path.join(out, fn), 'wb') as f:
            f.write(data)
        covered += len(data)
        rows.append({'index': i, 'name': name, 'file': fn, 'offset': off, 'size': len(data), 'sha256': hashlib.sha256(data).hexdigest(), 'name_field_trailing_bytes': tr, 'magic': data[:8].hex()})
    with open(os.path.join(out, '_manifest.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    dup_off = len(ents) - (len(offs) - 1)
    print(os.path.basename(img_path), 'entries', n, 'unique offsets', len(offs) - 1, 'shared-offset entries', dup_off, 'first offset', min(e[2] for e in ents), 'img size', len(img), 'bytes covered', covered, 'max offset', max(e[2] for e in ents))
    print(' extensions', collections.Counter(os.path.splitext(e[1])[1].lower() for e in ents).most_common())


def indexed(ind_path, img_path, out):
    ind = open(ind_path, 'rb').read()
    img = open(img_path, 'rb').read()
    n = struct.unpack_from('<H', ind, 0)[0]
    assert len(ind) == 2 + n * 4, 'unexpected IND size'
    offs = list(struct.unpack_from('<%dI' % n, ind, 2))
    srt = sorted(set(offs)) + [len(img)]
    nxt = {srt[k]: srt[k + 1] for k in range(len(srt) - 1)}
    os.makedirs(out, exist_ok=True)
    rows = []
    for i, off in enumerate(offs):
        data = img[off:nxt[off]]
        fn = 'member_%04d.bin' % i
        open(os.path.join(out, fn), 'wb').write(data)
        rows.append({'index': i, 'file': fn, 'offset': off, 'size': len(data), 'sha256': hashlib.sha256(data).hexdigest(), 'magic': data[:8].hex()})
    with open(os.path.join(out, '_manifest.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    print(os.path.basename(img_path), 'entries', n, 'first offset', min(offs), 'img size', len(img))


def main():
    d, out = sys.argv[1], sys.argv[2]
    named(os.path.join(d, 'rcs.IND'), os.path.join(d, 'rcs.IMG'), os.path.join(out, 'rcs'))
    named(os.path.join(d, 'MenuData/MenuRcs.IND'), os.path.join(d, 'MenuData/MenuRcs.IMG'), os.path.join(out, 'menurcs'))
    indexed(os.path.join(d, 'RC.IND'), os.path.join(d, 'RC.IMG'), os.path.join(out, 'rc'))


if __name__ == '__main__':
    main()
