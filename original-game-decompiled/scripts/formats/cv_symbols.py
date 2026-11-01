#!/usr/bin/env python3
"""Parse CodeView symbol records stored inside a PE section (rsc.dll keeps them at the end of .text).

Usage: cv_symbols.py <pe_file> <section_rva_hex> <section_end_rva_hex> <output_dir>
Scans for chains of records {u16 length; u16 type; body} and writes symbols.csv, summary.txt.
Record types follow the public CodeView CV4/CV5 layout. A record is accepted only inside a chain of at
least 4 consecutive valid records, so stray bytes are not reported as symbols.
"""
import collections, csv, os, struct, sys

TYPES = {0x0001: 'S_COMPILE', 0x0006: 'S_END', 0x0009: 'S_OBJNAME', 0x1001: 'S_REGISTER', 0x1002: 'S_CONSTANT', 0x1003: 'S_UDT', 0x1006: 'S_BPREL32', 0x1007: 'S_LDATA32', 0x1008: 'S_GDATA32', 0x1009: 'S_PUB32', 0x100a: 'S_LPROC32', 0x100b: 'S_GPROC32', 0x0206: 'S_THUNK32', 0x0207: 'S_BLOCK32', 0x0209: 'S_LABEL32', 0x100c: 'S_REGREL32', 0x0400: 'S_PROCREF', 0x000a: 'S_ENDARG', 0x0005: 'S_SSEARCH', 0x0007: 'S_SKIP', 0x0008: 'S_CVRESERVE', 0x0200: 'S_BPREL16', 0x0201: 'S_LDATA32_OLD', 0x0202: 'S_GDATA32_OLD', 0x0203: 'S_PUB32_OLD', 0x0204: 'S_LPROC32_OLD', 0x0205: 'S_GPROC32_OLD'}


def pascal(b, o):
    if o >= len(b):
        return ''
    n = b[o]
    return b[o + 1:o + 1 + n].decode('latin1', 'replace')


def main():
    pe_path, lo, hi, outd = sys.argv[1], int(sys.argv[2], 16), int(sys.argv[3], 16), sys.argv[4]
    os.makedirs(outd, exist_ok=True)
    b = open(pe_path, 'rb').read()
    e = struct.unpack_from('<I', b, 0x3c)[0]
    nsec = struct.unpack_from('<H', b, e + 6)[0]
    opt = struct.unpack_from('<H', b, e + 20)[0]
    base = struct.unpack_from('<I', b, e + 52)[0]
    secs = []
    for i in range(nsec):
        vs, va, rs, rp = struct.unpack_from('<IIII', b, e + 24 + opt + i * 40 + 8)
        secs.append((va, rs, rp))
    def rva2off(r):
        for va, rs, rp in secs:
            if va <= r < va + rs:
                return r - va + rp
        return None
    start, end = rva2off(lo), rva2off(hi - 1) + 1
    rows, chains = [], []
    pos = start
    while pos < end - 4:
        # try a chain here
        p, chain = pos, []
        while p + 4 <= end:
            ln, ty = struct.unpack_from('<HH', b, p)
            if ln < 2 or ln > 2048 or ty not in TYPES:
                break
            chain.append((p, ln, ty))
            p += 2 + ln
        if len(chain) >= 4:
            chains.append((pos, p, len(chain)))
            for off, ln, ty in chain:
                body = b[off + 4:off + 2 + ln]
                name, addr, size, extra = '', '', '', ''
                t = TYPES[ty]
                if t in ('S_GPROC32', 'S_LPROC32'):
                    parent, pend, pnext, plen, ds, de, typ, ofs, seg, fl = struct.unpack_from('<IIIIIIIIHB', body, 0)
                    name = pascal(body, 35); addr, size = ofs, plen; extra = 'seg=%d type=0x%x dbg=%d..%d' % (seg, typ, ds, de)
                elif t in ('S_GDATA32', 'S_LDATA32', 'S_PUB32'):
                    typ, ofs, seg = struct.unpack_from('<IIH', body, 0)
                    name = pascal(body, 10); addr = ofs; extra = 'seg=%d type=0x%x' % (seg, typ)
                elif t == 'S_UDT':
                    typ = struct.unpack_from('<I', body, 0)[0]; name = pascal(body, 4); extra = 'type=0x%x' % typ
                elif t == 'S_BPREL32':
                    ofs, typ = struct.unpack_from('<iI', body, 0); name = pascal(body, 8); extra = 'ebp%+d type=0x%x' % (ofs, typ)
                elif t == 'S_REGISTER':
                    typ, reg = struct.unpack_from('<IH', body, 0); name = pascal(body, 6); extra = 'reg=%d type=0x%x' % (reg, typ)
                elif t == 'S_CONSTANT':
                    extra = body[:8].hex()
                elif t == 'S_OBJNAME':
                    sig = struct.unpack_from('<I', body, 0)[0]; name = pascal(body, 4); extra = 'signature=0x%x' % sig
                elif t == 'S_COMPILE':
                    name = pascal(body, 4); extra = 'machine=%d flags=%s' % (body[0], body[1:4].hex())
                elif t == 'S_THUNK32':
                    name = pascal(body, 21)
                elif t == 'S_LABEL32':
                    ofs, seg, fl = struct.unpack_from('<IHB', body, 0); name = pascal(body, 7); addr = ofs; extra = 'seg=%d' % seg
                rows.append(dict(file_offset=hex(off), rva=hex(off - rp_of(off, secs)), record=t, name=name, value=addr if addr == '' else hex(addr), size=size if size == '' else hex(size), extra=extra))
            pos = p
        else:
            pos += 1
    with open(os.path.join(outd, 'symbols.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, ['file_offset', 'rva', 'record', 'name', 'value', 'size', 'extra'])
        w.writeheader()
        w.writerows(rows)
    c = collections.Counter(r['record'] for r in rows)
    with open(os.path.join(outd, 'summary.txt'), 'w') as f:
        f.write('chains: %d, records: %d\n' % (len(chains), len(rows)))
        f.write('record types: %s\n' % c.most_common())
        for a, z, n in chains:
            f.write('chain file 0x%x-0x%x records=%d\n' % (a, z, n))
    print('chains', len(chains), 'records', len(rows), c.most_common())
    print('first chain', hex(chains[0][0]) if chains else None, 'last end', hex(chains[-1][1]) if chains else None, 'image base', hex(base))


def rp_of(off, secs):
    for va, rs, rp in secs:
        if rp <= off < rp + rs:
            return rp - va
    return 0


if __name__ == '__main__':
    main()
