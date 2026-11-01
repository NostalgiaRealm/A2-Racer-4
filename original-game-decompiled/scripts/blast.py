#!/usr/bin/env python3
"""Decompress a Stirling/InstallShield .Z style file (PKWARE DCL implode). Python port of the zlib contrib/blast method.

Usage: blast.py <input> <output> [data_offset_hex]  |  blast.py <archive> <output_dir> --archive
The file begins with a header holding its data offset at byte 4 (little-endian dword); the stream follows.
"""
import os, struct, sys

LIT = [11, 124, 8, 7, 28, 7, 188, 13, 76, 4, 10, 8, 12, 10, 12, 10, 8, 23, 8, 9, 7, 6, 7, 8, 7, 6, 55, 8, 23, 24, 12, 11, 7, 9, 11, 12, 6, 7, 22, 5, 7, 24, 6, 11, 9, 6, 7, 22, 7, 11, 38, 7, 9, 8, 25, 11, 8, 11, 9, 12, 8, 12, 5, 38, 5, 38, 5, 11, 7, 5, 6, 21, 6, 10, 53, 8, 7, 24, 10, 27, 44, 253, 253, 253, 252, 252, 252, 13, 12, 45, 12, 45, 12, 61, 12, 45, 44, 173]
LEN = [2, 35, 36, 53, 38, 23]
DIST = [2, 20, 53, 230, 247, 151, 248]
BASE = [3, 2, 4, 5, 6, 7, 8, 9, 10, 12, 16, 24, 40, 72, 136, 264]
EXTRA = [0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8]


def build(rep):
    lengths = []
    for b in rep:
        lengths += [b & 15] * ((b >> 4) + 1)
    count = [0] * 14
    for l in lengths:
        count[l] += 1
    offs = [0] * 15
    for l in range(1, 14):
        offs[l + 1] = offs[l] + count[l]
    sym = [0] * len(lengths)
    for s, l in enumerate(lengths):
        if l:
            sym[offs[l]] = s
            offs[l] += 1
    return count, sym


def blast(b):
    lc, ld, dc = build(LIT), build(LEN), build(DIST)
    pos = 2
    coded, dict_bits = b[0], b[1]
    if coded > 1 or not 4 <= dict_bits <= 6:
        raise ValueError('bad DCL header %r' % b[:2])
    bitbuf, bitcnt = 0, 0
    out = bytearray()

    def bits(n):
        nonlocal bitbuf, bitcnt, pos
        while bitcnt < n:
            bitbuf |= b[pos] << bitcnt
            pos += 1
            bitcnt += 8
        v = bitbuf & ((1 << n) - 1)
        bitbuf >>= n
        bitcnt -= n
        return v

    def decode(h):
        count, sym = h
        code = first = index = 0
        for l in range(1, 14):
            code |= bits(1) ^ 1
            c = count[l]
            if code < first + c:
                return sym[index + (code - first)]
            index += c
            first += c
            first <<= 1
            code <<= 1
        raise ValueError('bad code')

    while True:
        if bits(1):
            s = decode(ld)
            ln = BASE[s] + bits(EXTRA[s])
            if ln == 519:
                break
            e = 2 if ln == 2 else dict_bits
            d = (decode(dc) << e) + bits(e) + 1
            if d > len(out):
                raise ValueError('distance too far at output %d' % len(out))
            for _ in range(ln):
                out.append(out[-d])
        else:
            out.append(decode(lc) if coded else bits(8))
    return bytes(out), pos


def stirling_archive(src, outdir):
    """Multi-file Stirling container. u16 count at 0x4E, records from 0x52:
    u32 stream offset, u32 compressed size, u32 output size, 8 zero bytes, u16 + stored name, u16 + temp name."""
    count = struct.unpack_from('<H', src, 0x4E)[0]
    p = 0x52
    os.makedirs(outdir, exist_ok=True)
    for _ in range(count):
        off, csize, usize = struct.unpack_from('<III', src, p)
        p += 20
        n = struct.unpack_from('<H', src, p)[0]
        name = src[p + 2:p + 2 + n].decode('latin1')
        p += 2 + n
        n2 = struct.unpack_from('<H', src, p)[0]
        temp = src[p + 2:p + 2 + n2].decode('latin1')
        p += 2 + n2
        d, used = blast(src[off:off + csize])
        ok = len(d) == usize
        open(os.path.join(outdir, name.replace('/', '_')), 'wb').write(d)
        print(name, '(temp name', temp + ')', 'offset', hex(off), 'compressed', csize, 'expected', usize, 'output', len(d), 'size-match', ok, d[:2])


def main():
    src = open(sys.argv[1], 'rb').read()
    if len(sys.argv) > 3 and sys.argv[3] == '--archive':
        stirling_archive(src, sys.argv[2])
        return
    off = int(sys.argv[3], 16) if len(sys.argv) > 3 else struct.unpack_from('<I', src, 4)[0]
    d, used = blast(src[off:])
    open(sys.argv[2], 'wb').write(d)
    print('input', len(src), 'data offset', hex(off), 'consumed', used, 'output', len(d), 'starts', d[:4], 'trailing', len(src) - off - used)


if __name__ == '__main__':
    main()
