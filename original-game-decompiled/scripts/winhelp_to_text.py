#!/usr/bin/env python3
"""Dump the topic text of a Windows 3.x/95 .HLP file. Formatting and pictures are not reproduced.

Usage: winhelp_to_text.py <file.hlp> <out.txt> [<bitmap_dir>]
Parses the help file system, |SYSTEM, |Phrases and |TOPIC (LZ77 blocks and phrase compression).
Internal |bm* pictures are saved unconverted when a bitmap directory is given.
"""
import os, struct, sys


class Hlp:
    def __init__(self, path):
        self.b = open(path, 'rb').read()
        magic, self.dirstart, _, self.size = struct.unpack_from('<IiiI', self.b, 0)
        if magic != 0x00035F3F:
            raise SystemExit('not a WinHelp file')
        self.files = self.read_dir()

    def read_dir(self):
        o = self.dirstart + 9
        b = self.b
        magic, flags, pagesize = struct.unpack_from('<HHH', b, o)
        if magic != 0x293B:
            raise SystemExit('bad B+ tree')
        must0, splits, root, neg1, total, nlevels, entries = struct.unpack_from('<HHHhHHI', b, o + 22)
        pages = o + 38
        files = {}
        # walk leaf pages only: NLevels-1 index levels above leaves
        page = root
        for _ in range(nlevels - 1):
            page = struct.unpack_from('<H', b, pages + page * pagesize + 4)[0]
        while page != 0xFFFF:
            p = pages + page * pagesize
            _, n, prev, nxt = struct.unpack_from('<HHHH', b, p)
            q = p + 8
            for _ in range(n):
                e = b.index(0, q)
                name = b[q:e].decode('latin1')
                off = struct.unpack_from('<I', b, e + 1)[0]
                files[name] = off
                q = e + 5
            page = nxt if nxt != 0xFFFF and nxt != page else 0xFFFF
        return files

    def data(self, name):
        off = self.files[name]
        res, used, _ = struct.unpack_from('<IIB', self.b, off)
        return self.b[off + 9:off + 9 + used]


def lz77(d, limit=None):
    out = bytearray()
    i = 0
    n = len(d)
    while i < n:
        flags = d[i]; i += 1
        for bit in range(8):
            if i >= n:
                break
            if flags & (1 << bit):
                if i + 1 >= n:
                    i = n
                    break
                v = d[i] | d[i + 1] << 8; i += 2
                ln = (v >> 12) + 3
                dist = (v & 0xFFF) + 1
                for _ in range(ln):
                    out.append(out[-dist] if dist <= len(out) else 0)
            else:
                out.append(d[i]); i += 1
    return bytes(out)


def main():
    src, dst = sys.argv[1], sys.argv[2]
    bmdir = sys.argv[3] if len(sys.argv) > 3 else None
    h = Hlp(src)
    s = h.data('|SYSTEM')
    magic, minor, major, gen, flags = struct.unpack_from('<HHHIH', s, 0)
    compressed = flags in (4, 8)
    blocksize = 2048 if flags == 8 else 4096 if flags == 4 else 4096
    if minor <= 16:
        blocksize = 2048
        compressed = False
    phrases = []
    if '|Phrases' in h.files:
        p = h.data('|Phrases')
        np_, _ = struct.unpack_from('<HH', p, 0)
        base = 4
        if minor > 16:
            dec = struct.unpack_from('<I', p, 4)[0]; base = 8
        offs = struct.unpack_from('<%dH' % (np_ + 1), p, base)
        text = p[base + (np_ + 1) * 2:]
        if minor > 16:
            text = lz77(text)
        start = offs[0]
        for i in range(np_):
            phrases.append(text[offs[i] - start:offs[i + 1] - start])
    elif '|PhrIndex' in h.files:
        phrases = None  # Hall compression is not implemented; topics print with codes elided
    t = h.data('|TOPIC')
    # rebuild the concatenated decompressed topic stream, keeping block boundaries for link addressing
    stream = bytearray()
    bs = blocksize
    dec_per_block = 16384 if compressed else bs - 12
    blocks = []
    for k in range(0, len(t), bs):
        block = t[k:k + bs]
        if len(block) < 12:
            break
        body = block[12:]
        body = lz77(body) if compressed else body
        blocks.append(body)
    stream = b''.join(blocks)
    # walk TOPICLINKs sequentially: each begins with BlockSize
    out = []
    pos = 0
    n = len(stream)
    topics = 0

    def expand(d):
        res = bytearray()
        i = 0
        while i < len(d):
            c = d[i]
            if 0 < c < 0x10 and phrases is not None and i + 1 < len(d):
                idx = 256 * (c - 1) + d[i + 1]
                i += 2
                ph = phrases[idx // 2] if idx // 2 < len(phrases) else b''
                res += ph
                if idx & 1:
                    res += b' '
            else:
                res.append(c); i += 1
        return bytes(res)

    def clean(d):
        return b'\n'.join(x for x in d.split(b'\0')).decode('cp1252', 'replace')

    while pos + 21 <= n:
        size, dl2, prev, nxt, dl1, typ = struct.unpack_from('<IIiiIB', stream, pos)
        if size < 21 or pos + size > n + 16 or dl1 < 21:
            # resync on block boundary
            blk = pos // (len(blocks[0]) if blocks else 1)
            pos = (blk + 1) * (len(blocks[0]) if blocks else 1)
            continue
        link2 = stream[pos + dl1:pos + size]
        if dl2 > len(link2) and phrases is not None:
            link2 = expand(link2)
        if typ == 2:
            topics += 1
            title = link2.split(b'\0')[0].decode('cp1252', 'replace') if link2 else ''
            out.append('\n\n===== TOPIC %d: %s =====\n' % (topics, title))
        elif typ in (0x20, 0x23, 1):
            txt = clean(link2)
            if txt.strip('\n '):
                out.append(txt)
        pos += size
    os.makedirs(os.path.dirname(dst), exist_ok=True)
    with open(dst, 'w', encoding='utf-8') as f:
        f.write('; Text extracted from %s by winhelp_to_text.py. Formatting, hotspots and pictures omitted.\n; WinHelp version %d.%d, flags %d, internal files: %s\n' % (os.path.basename(src), major, minor, flags, ', '.join(sorted(h.files))))
        f.write('\n'.join(out))
    if bmdir:
        os.makedirs(bmdir, exist_ok=True)
        for nm in h.files:
            if nm.lstrip('|').startswith('bm'):
                open(os.path.join(bmdir, nm.lstrip('|') + '.shg'), 'wb').write(h.data(nm))
    print(os.path.basename(src), 'version', major, minor, 'flags', flags, 'files', len(h.files), 'topics', topics, 'phrases', len(phrases) if phrases else phrases)


if __name__ == '__main__':
    main()
