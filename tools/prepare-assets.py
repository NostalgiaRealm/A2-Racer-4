#!/usr/bin/env python3
"""Prepares public/assets from the original game files. Inputs stay read-only.

  python3 tools/prepare-assets.py [--skip-video] [--only help,loading-bar,touch,error-icon]

--only runs just the named steps and keeps the other entries of the asset map.
Sources: original-game-decompiled/original/install, original/updates/installed over it, and extracted/game-archives; source/assets/touch.
Output, with the mapping in public/assets/asset-map.json:
  public/assets/game/      loose race files, unchanged, read by the recompiled race
  public/assets/game/rcs.img, rcs.ind, rc.img, rc.ind: the race's resource archives, unchanged
  public/assets/menu/      MenuRcs members and what menu.exe's forms embed: TGA and BMP converted
                           to PNG, WAV unchanged; the Help character from Hunny.acs (disc) and the
                           Help text from menu.hlp
  public/assets/media/     intro video as H.264, menu music WAV, character AVIs as H.264
  public/assets/loading/   wait pictures and the frames of OVL_PROGRESS_BAR, as PNG
  public/assets/touch/     the on-screen controls' art from source/assets/touch, unchanged
"""
import argparse
import bisect
import csv
import hashlib
import json
import os
import re
import shutil
import struct
import subprocess
import sys
import filecmp
import zlib

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DEC = os.path.join(ROOT, 'original-game-decompiled')
INSTALL = os.path.join(DEC, 'original', 'install')
# What the owner's car and track updates added to or changed in the installation: original/updates/README.md.
UPDATES = os.path.join(DEC, 'original', 'updates', 'installed')
MENU_SRC = os.path.join(DEC, 'extracted', 'game-archives', 'menurcs')
OUT = os.path.join(ROOT, 'public', 'assets')
TOUCH_SRC = os.path.join(ROOT, 'source', 'assets', 'touch')
# Where source/assets/touch came from. Only recorded: the reference project is not read here.
TOUCH_REFERENCE = 'RedCat Superkarts/public/assets/touch/'
RACE_SKIP_EXT = {'.exe', '.dll', '.hlp', '.gid', '.log', '.icd', '.mpg', '.avi', '.cnt', '.wav'}
RACE_SKIP = {'spel.dat', 'menurcs.img', 'menurcs.ind', 'trkuinst.ini'}


def png_bytes(width, height, rows, alpha):
    """rows: bytes of RGB(A), top-down, tightly packed."""
    stride = width * (4 if alpha else 3)
    raw = bytearray()
    for y in range(height):
        raw.append(0)
        raw += rows[y * stride:(y + 1) * stride]

    def chunk(tag, data):
        return struct.pack('>I', len(data)) + tag + data + struct.pack('>I', zlib.crc32(tag + data))
    return b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', width, height, 8, 6 if alpha else 2, 0, 0, 0)) + \
        chunk(b'IDAT', zlib.compress(bytes(raw), 9)) + chunk(b'IEND', b'')


def decode_tga(d):
    idlen, cmtype, imgtype = d[0], d[1], d[2]
    width, height, bpp, desc = struct.unpack_from('<HHBB', d, 12)
    p = 18 + idlen
    if cmtype:
        cmlen = struct.unpack_from('<H', d, 5)[0]
        cmbits = d[7]
        p += cmlen * ((cmbits + 7) // 8)
    bytes_per = bpp // 8
    n = width * height
    out = bytearray(n * bytes_per)
    if imgtype in (2, 3):
        out[:] = d[p:p + n * bytes_per]
    elif imgtype in (10, 11):
        o = 0
        total = n * bytes_per
        while o < total:
            h = d[p]
            p += 1
            cnt = (h & 0x7F) + 1
            if h & 0x80:
                px = d[p:p + bytes_per]
                p += bytes_per
                out[o:o + cnt * bytes_per] = px * cnt
            else:
                out[o:o + cnt * bytes_per] = d[p:p + cnt * bytes_per]
                p += cnt * bytes_per
            o += cnt * bytes_per
    else:
        raise ValueError('TGA type %d' % imgtype)
    has_alpha = bytes_per == 4
    stride = width * bytes_per
    rows = bytearray(width * height * (4 if has_alpha else 3))
    top_down = (desc & 0x20) != 0
    q = 0
    for y in range(height):
        sy = y if top_down else height - 1 - y
        row = out[sy * stride:(sy + 1) * stride]
        if bytes_per == 4:
            rows[q:q + stride] = row
            # BGRA to RGBA
            rows[q + 0:q + stride:4], rows[q + 2:q + stride:4] = row[2::4], row[0::4]
            q += stride
        elif bytes_per == 3:
            rows[q + 0:q + stride:3] = row[2::3]
            rows[q + 1:q + stride:3] = row[1::3]
            rows[q + 2:q + stride:3] = row[0::3]
            q += stride
        else:
            raise ValueError('TGA depth %d' % bpp)
    return width, height, bytes(rows), has_alpha


def decode_bmp(d):
    off = struct.unpack_from('<I', d, 10)[0]
    width, height, planes, bpp, comp = struct.unpack_from('<iiHHI', d, 18)
    top_down = height < 0
    h = abs(height)
    pal = None
    if bpp <= 8:
        used = struct.unpack_from('<I', d, 46)[0] or (1 << bpp)
        hsize = struct.unpack_from('<I', d, 14)[0]
        pal = d[14 + hsize:14 + hsize + used * 4]
    stride = ((width * bpp + 31) // 32) * 4
    rows = bytearray(width * h * 3)
    q = 0
    if comp != 0:
        raise ValueError('BMP compression %d' % comp)
    for y in range(h):
        sy = y if top_down else h - 1 - y
        row = d[off + sy * stride:off + (sy + 1) * stride]
        if bpp == 24:
            rows[q + 0:q + width * 3:3] = row[2:width * 3:3]
            rows[q + 1:q + width * 3:3] = row[1:width * 3:3]
            rows[q + 2:q + width * 3:3] = row[0:width * 3:3]
            q += width * 3
        elif bpp == 8:
            for x in range(width):
                i = row[x] * 4
                rows[q] = pal[i + 2]
                rows[q + 1] = pal[i + 1]
                rows[q + 2] = pal[i]
                q += 3
        else:
            raise ValueError('BMP depth %d' % bpp)
    return width, h, bytes(rows), False


def ffmpeg(*args):
    cmd = ['ffmpeg', '-hide_banner', '-loglevel', 'error', '-y', *args]
    if shutil.which('ffmpeg') is None:
        cmd = ['distrobox-host-exec'] + cmd
    subprocess.check_call(cmd)


def prepare_race(asset_map):
    out = os.path.join(OUT, 'game')
    os.makedirs(out, exist_ok=True)
    # The updates win over the base install; some keep a name that differs only in case.
    sources = {}
    for folder, label in ((INSTALL, 'original/install/'), (UPDATES, 'original/updates/installed/')):
        for name in sorted(os.listdir(folder)):
            src = os.path.join(folder, name)
            ext = os.path.splitext(name)[1].lower()
            if os.path.isfile(src) and ext not in RACE_SKIP_EXT and name.lower() not in RACE_SKIP:
                sources[name.lower()] = (name, src, label + name)
    keep = {'files.json', 'race-files.json'}
    names = []
    for name, src, label in sorted(sources.values()):
        dst = os.path.join(out, name)
        if not os.path.exists(dst) or not filecmp.cmp(src, dst, shallow=False):
            shutil.copyfile(src, dst)
        names.append({'name': name, 'size': os.path.getsize(src)})
        keep.add(name)
        asset_map[f'game/{name}'] = label
    for name in os.listdir(out):
        if name not in keep:
            os.remove(os.path.join(out, name))
            asset_map.pop(f'game/{name}', None)
    with open(os.path.join(out, 'files.json'), 'w') as f:
        json.dump(names, f)
    print('race files:', len(names))


def dfm_binary(data, owner, prop):
    """The bytes of a binary property in a DFM resource: its name, type byte 0x0A, 32-bit length."""
    key = bytes([len(prop)]) + prop.encode() + b'\x0a'
    k = data.index(key, data.index(owner.encode())) + len(key)
    n = struct.unpack_from('<I', data, k)[0]
    return data[k + 4:k + 4 + n]


def prepare_menu_embedded(out, index, asset_map):
    """What menu.exe keeps in its form resources, not in MenuRcs: the button and slider sounds, and
    the picture of gdfBtnMS that only the TfrmCharacter easter egg shows."""
    res = os.path.join(DEC, 'decompiled', 'game__menu.exe', 'resources', 'RCDATA')
    for resource, owner, prop, name in (('TDATA', 'wavBtnDown', 'WavFileData', 'start.wav'),
                                        ('TFRMOPTIONS', 'wavIrritatingAsHell', 'WavFileData', 'trin.wav'),
                                        ('TDATA', 'gdfBtnMS', 'DisabledLink.TDIB', 'm018.bmp')):
        d = dfm_binary(open(os.path.join(res, f'RCDATA_{resource}_0.dfm.bin'), 'rb').read(), owner, prop)
        base, ext = os.path.splitext(name)
        dst_name = base + '_b.png' if ext == '.bmp' else name
        with open(os.path.join(out, dst_name), 'wb') as f:
            if ext == '.bmp':
                w, h, rgb, alpha = decode_bmp(d)
                f.write(png_bytes(w, h, rgb, alpha))
            else:
                f.write(d)
        index[name] = dst_name
        asset_map['menu/' + dst_name] = f'menu.exe form {resource}, {owner}.{prop}'


def prepare_menu(asset_map):
    out = os.path.join(OUT, 'menu')
    os.makedirs(out, exist_ok=True)
    manifest = os.path.join(MENU_SRC, '_manifest.csv')
    rows = list(csv.DictReader(open(manifest)))
    index = {}
    converted = 0
    for row in rows:
        name = row.get('name') or row.get('member')
        file_ = row.get('output_file') or row.get('file') or row.get('extracted') or name
        src = os.path.join(MENU_SRC, os.path.basename(file_))
        if not os.path.exists(src):
            src = os.path.join(MENU_SRC, name)
        if not os.path.exists(src) or not name or name.startswith('*'):
            continue
        base, ext = os.path.splitext(name.lower())
        ext = ext.lower()
        d = open(src, 'rb').read()
        if ext in ('.tga', '.bmp'):
            dst_name = base + ('.png' if ext == '.tga' else '_b.png')
            dst = os.path.join(out, dst_name)
            if not os.path.exists(dst):
                try:
                    w, h, rgb, alpha = decode_tga(d) if ext == '.tga' else decode_bmp(d)
                except Exception as e:
                    print('  skip', name, e)
                    continue
                with open(dst, 'wb') as f:
                    f.write(png_bytes(w, h, rgb, alpha))
                converted += 1
            index[base + ext] = dst_name
        else:
            dst_name = base + ext
            dst = os.path.join(out, dst_name)
            if not os.path.exists(dst):
                shutil.copyfile(src, dst)
            index[base + ext] = dst_name
        asset_map['menu/' + dst_name] = f'MenuRcs member {name}'
    prepare_menu_embedded(out, index, asset_map)
    with open(os.path.join(out, 'index.json'), 'w') as f:
        json.dump(index, f)
    print('menu assets:', len(index), 'converted now:', converted)


def prepare_error_icon(asset_map):
    """imgError on TfrmException2: a TBitmap stream, its class name and size before the BMP. Transparent = True
    with the VCL's automatic colour: the bottom left pixel."""
    res = os.path.join(DEC, 'decompiled', 'game__menu.exe', 'resources', 'RCDATA', 'RCDATA_TFRMEXCEPTION2_0.dfm.bin')
    picture = dfm_binary(open(res, 'rb').read(), 'imgError', 'Picture.Data')
    w, h, rgb, _ = decode_bmp(picture[12:])
    key = rgb[(h - 1) * w * 3:(h - 1) * w * 3 + 3]
    rgba = bytearray()
    for k in range(w * h):
        pixel = rgb[k * 3:k * 3 + 3]
        rgba += pixel + (b'\x00' if pixel == key else b'\xff')
    with open(os.path.join(OUT, 'menu', 'error_icon.png'), 'wb') as f:
        f.write(png_bytes(w, h, bytes(rgba), True))
    asset_map['menu/error_icon.png'] = 'menu.exe form TFRMEXCEPTION2, imgError.Picture.Data'


def agent_decode(src, size):
    """The LZ77 of Microsoft Agent character files. Bits run from the lowest bit of each byte."""
    if len(src) < 8 or src[0] != 0:
        raise ValueError('not a compressed Agent image')
    out = bytearray()
    bit = 8
    total = (len(src) - 4) * 8

    def read(n):
        nonlocal bit
        v = 0
        for k in range(n):
            v |= ((src[bit >> 3] >> (bit & 7)) & 1) << k
            bit += 1
        return v

    while bit < total and len(out) < size:
        if not read(1):
            out.append(read(8))
            continue
        extra = 1
        if not read(1):
            dist = read(6) + 1
        elif not read(1):
            dist = read(9) + 65
        elif not read(1):
            dist = read(12) + 577
        else:
            dist = read(20)
            if dist == 0xFFFFF:
                break
            dist += 4673
            extra = 2
        ones = 0
        while ones < 12 and read(1):
            ones += 1
        length = extra + (1 << ones) + read(ones)
        for _ in range(length):
            out.append(out[-dist])
    return bytes(out)


def prepare_agent(asset_map):
    """Hunny.acs, the Help character: its frames in one image, rows of 19. Timing is in forms/group-dialogs.js."""
    d = open(os.path.join(DEC, 'original', 'disc', 'Data', 'MenuData', 'Hunny.acs'), 'rb').read()
    u16 = lambda o: struct.unpack_from('<H', d, o)[0]
    u32 = lambda o: struct.unpack_from('<I', d, o)[0]
    (char_at, _), (_, _), (images_at, _) = (struct.unpack_from('<II', d, 4 + 8 * k) for k in range(3))
    width, height = u16(char_at + 28), u16(char_at + 30)
    transparent = d[char_at + 32]
    flags = u32(char_at + 33)
    o = char_at + 41
    assert not flags & 0x20, 'voice info not expected in Hunny.acs'
    if flags & 0x200:
        # Balloon info: lines, chars, 3 colours, font name, height, weight, 2 style words.
        o += 14
        o += 4 + u32(o) * 2 + 2
        o += 10
    palette_size = u32(o)
    palette = d[o + 4:o + 4 + palette_size * 4]
    count = u32(images_at)
    per_row = 19
    rows = (count + per_row - 1) // per_row
    sheet = bytearray(per_row * width * rows * height * 4)
    for n in range(count):
        at = u32(images_at + 4 + n * 12)
        w, h = u16(at + 1), u16(at + 3)
        compressed = d[at + 5]
        data = d[at + 10:at + 10 + u32(at + 6)]
        stride = (w + 3) & ~3
        pixels = agent_decode(data, stride * h) if compressed else data
        ox, oy = (n % per_row) * width, (n // per_row) * height
        for y in range(h):
            row = pixels[(h - 1 - y) * stride:(h - y) * stride]
            for x in range(w):
                p = row[x]
                if p != transparent:
                    q = (oy + y) * per_row * width * 4 + (ox + x) * 4
                    sheet[q:q + 4] = bytes((palette[p * 4 + 2], palette[p * 4 + 1], palette[p * 4], 255))
    out = os.path.join(OUT, 'menu')
    with open(os.path.join(out, 'hunny_agent.png'), 'wb') as f:
        f.write(png_bytes(per_row * width, rows * height, bytes(sheet), True))
    index_path = os.path.join(out, 'index.json')
    index = json.load(open(index_path))
    index['hunny_agent.png'] = 'hunny_agent.png'
    with open(index_path, 'w') as f:
        json.dump(index, f)
    asset_map['menu/hunny_agent.png'] = 'original/disc/Data/MenuData/Hunny.acs, all frames'


def hlp_btree(hlp, name, read):
    """The leaf records of a WinHelp B+ tree, walked as Hlp.read_dir walks the file system's own."""
    d = hlp.data(name)
    page_size = struct.unpack_from('<H', d, 4)[0]
    page = struct.unpack_from('<H', d, 26)[0]
    for _ in range(struct.unpack_from('<H', d, 32)[0] - 1):
        page = struct.unpack_from('<H', d, 38 + page * page_size + 4)[0]
    records = []
    while page != 0xFFFF:
        at = 38 + page * page_size
        count, _, following = struct.unpack_from('<HHH', d, at + 2)
        at += 8
        for _ in range(count):
            record, at = read(d, at)
            records.append(record)
        page = following
    return records


def hlp_cstring(d, at):
    end = d.index(0, at)
    return d[at:end].decode('cp1252'), end + 1


def hlp_long(d, at):
    """An unsigned compressed long: the low bit says 4 bytes rather than 2."""
    if d[at] & 1:
        return struct.unpack_from('<I', d, at)[0] >> 1, at + 4
    return struct.unpack_from('<H', d, at)[0] >> 1, at + 2


def hlp_short(d, at):
    """An unsigned compressed short: the low bit says 2 bytes rather than 1."""
    if d[at] & 1:
        return struct.unpack_from('<H', d, at)[0] >> 1, at + 2
    return d[at] >> 1, at + 1


def hlp_paragraph_header(d, at):
    """Two unknown bytes, an id and a bit field that says which layout values follow. Layout is not kept."""
    bits = struct.unpack_from('<H', d, at + 4)[0]
    at += 6
    if bits & 1:
        at = hlp_long(d, at)[1]
    for bit in (2, 4, 8, 16, 32, 64):
        if bits & bit:
            at = hlp_short(d, at)[1]
    if bits & 0x100:
        at += 3
    if bits & 0x200:
        count, at = hlp_short(d, at)
        for _ in range(count - 0x40 if count >= 0x40 else count):
            stop, at = hlp_short(d, at)
            if stop & 0x4000:
                at = hlp_short(d, at)[1]
    return at


def hlp_commands(d, at, strings, next_string, out):
    """The format commands of LinkData1. A string of LinkData2 comes before each, the end mark too."""
    while True:
        if next_string < len(strings):
            if strings[next_string]:
                out.append(('text', strings[next_string]))
            next_string += 1
        command = d[at]
        at += 1
        if command == 0xFF:
            return at, next_string
        if command == 0x80:
            out.append(('font', struct.unpack_from('<H', d, at)[0]))
            at += 2
        elif command == 0x81:
            out.append(('text', '\n'))
        elif command == 0x82:
            out.append(('paragraph',))
        elif command == 0x83:
            out.append(('text', '\t'))
        elif command in (0x86, 0x87, 0x88):
            kind = d[at]
            size, at = hlp_long(d, at + 1)
            size = size - 0x4000 if size >= 0x4000 else size
            if kind == 0x22:
                at = hlp_short(d, at)[1]
            at += size
        elif command == 0x89:
            out.append(('end',))
        elif command == 0x8B:
            out.append(('text', ' '))
        elif command == 0x8C:
            out.append(('text', '-'))
        elif command in (0xC8, 0xCC, 0xEA, 0xEB, 0xEE, 0xEF):
            at += 2 + struct.unpack_from('<H', d, at)[0]
            out.append(('other',))
        elif command in (0xE0, 0xE1):
            at += 4
            out.append(('other',))
        elif command in (0xE2, 0xE3, 0xE6, 0xE7):
            out.append(('jump', struct.unpack_from('<i', d, at)[0]))
            at += 4
        elif command == 0x20:
            at += 4
        elif command == 0x21:
            at += 2
        else:
            raise ValueError('help command %#x' % command)


def hlp_topics(hlp):
    """|TOPIC as (title, commands) per topic. Blocks hold 4084 bytes after a 12-byte header, and a
    record may run on into the next block. The rest of a block can be padding, which ends in a 0 size."""
    t = hlp.data('|TOPIC')
    body = 4096 - 12
    stream = b''.join(t[k + 12:k + 4096] for k in range(0, len(t), 4096))
    topics = []
    at = 0
    while at + 21 <= len(stream):
        size, _, _, _, data_len, kind = struct.unpack_from('<IIiiIB', stream, at)
        if size < 21 or data_len < 21:
            at = (at // body + 1) * body
            continue
        d = stream[at + 21:at + data_len]
        text = stream[at + data_len:at + size]
        at += size
        if kind == 2:
            topics.append((text.split(b'\0')[0].decode('cp1252'), []))
            continue
        if kind not in (0x20, 0x23):
            continue
        strings = [piece.decode('cp1252') for piece in text.split(b'\0')]
        commands = topics[-1][1]
        p = hlp_short(d, hlp_long(d, 0)[1])[1]
        if kind == 0x20:
            hlp_commands(d, hlp_paragraph_header(d, p), strings, 0, commands)
            continue
        # A table: columns and type, then cells until column -1. Each cell is a paragraph of its own.
        columns, table_type = d[p], d[p + 1]
        p += 2 + (2 if table_type in (0, 2) else 0) + 4 * columns
        next_string = 0
        while struct.unpack_from('<h', d, p)[0] != -1:
            commands.append(('paragraph',))
            p, next_string = hlp_commands(d, hlp_paragraph_header(d, p + 5), strings, next_string, commands)
    return topics


def hlp_paragraphs(commands, bold_fonts, target_of):
    """Paragraphs from format commands. A plain one is a string, else a list of runs { t, b, to }."""
    paragraphs = []
    runs = []
    bold = False
    link = None

    def close():
        nonlocal runs
        # Spaces at the edge of a format change count once, as they do in running text.
        joined = []
        for run in runs:
            text = re.sub(r'[ \xa0]+', ' ', run['t'])
            if joined and joined[-1]['t'].endswith((' ', '\n')):
                text = text.lstrip(' ')
            if text:
                joined.append({**run, 't': text})
        while joined and not joined[-1]['t'].strip():
            joined.pop()
        if joined:
            # A tab at the start stood beside a picture, one after a bullet or number hung the indent.
            joined[0]['t'] = re.sub(r'^(·|-|\d+\.)\t', r'\1 ', joined[0]['t'].lstrip(' \t'))
            joined[-1]['t'] = joined[-1]['t'].rstrip(' ')
        if any(run['t'].strip() for run in joined):
            plain = all(set(run) == {'t'} for run in joined)
            paragraphs.append(''.join(run['t'] for run in joined) if plain else joined)
        runs = []

    for command in commands:
        kind = command[0]
        if kind == 'text':
            run = {'t': command[1]}
            if bold and link is None and command[1].strip():
                run['b'] = 1
            if link is not None:
                run['to'] = link
            if runs and {k: v for k, v in runs[-1].items() if k != 't'} == {k: v for k, v in run.items() if k != 't'}:
                runs[-1]['t'] += command[1]
            else:
                runs.append(run)
        elif kind == 'font':
            bold = command[1] in bold_fonts
        elif kind == 'jump':
            link = target_of(command[1])
        elif kind == 'end':
            link = None
        elif kind == 'paragraph':
            close()
    close()
    # A bullet in a cell of its own belongs to the text in the next one.
    for k in range(len(paragraphs) - 2, -1, -1):
        if paragraphs[k] in ('·', '-') and isinstance(paragraphs[k + 1], str):
            paragraphs[k:k + 2] = [paragraphs[k] + ' ' + paragraphs[k + 1]]
    return paragraphs


def prepare_help(asset_map):
    """Menu.hlp as text, links and index: |TOPIC, |TTLBTREE for topic numbers, |CTXOMAP for WinHelp's
    context numbers, |CONTEXT for what a hotspot's hash points at, |KWBTREE with |KWDATA for the Index."""
    # The analysis package stays untouched: no __pycache__ in it.
    sys.dont_write_bytecode = True
    sys.path.insert(0, os.path.join(DEC, 'scripts'))
    from winhelp_to_text import Hlp
    hlp = Hlp(os.path.join(INSTALL, 'menu.hlp'))

    def title_record(d, at):
        title, end = hlp_cstring(d, at + 4)
        return struct.unpack_from('<i', d, at)[0], end

    def keyword_record(d, at):
        keyword, end = hlp_cstring(d, at)
        count, offset = struct.unpack_from('<HI', d, end)
        return (keyword, count, offset), end + 6

    def hash_record(d, at):
        return struct.unpack_from('<ii', d, at), at + 8

    # Offsets grow with the file. A keyword may point past the start of its topic, so the topic is the last one at or before.
    starts = hlp_btree(hlp, '|TTLBTREE', title_record)
    topic_at = lambda offset: bisect.bisect_right(starts, offset) - 1
    table = hlp.data('|CTXOMAP')
    contexts = {}
    for k in range(struct.unpack_from('<H', table, 0)[0]):
        context, offset = struct.unpack_from('<Ii', table, 2 + 8 * k)
        contexts[str(context)] = topic_at(offset)
    hashes = dict(hlp_btree(hlp, '|CONTEXT', hash_record))
    # |FONT: bit 0 of a descriptor's first byte is bold.
    fonts = hlp.data('|FONT')
    descriptors, descriptors_at = struct.unpack_from('<H', fonts, 2)[0], struct.unpack_from('<H', fonts, 6)[0]
    bold_fonts = {k for k in range(descriptors) if fonts[descriptors_at + 11 * k] & 1}
    topics = []
    for title, commands in hlp_topics(hlp):
        paragraphs = hlp_paragraphs(commands, bold_fonts, lambda h: topic_at(hashes[h]))
        # The title is drawn again as the topic's first line.
        first = paragraphs[0] if paragraphs else None
        if first and ' '.join((first if isinstance(first, str) else ''.join(run['t'] for run in first)).split()) == title.strip():
            paragraphs.pop(0)
        topics.append({'title': title.strip(), 'paragraphs': paragraphs})
    keyword_data = hlp.data('|KWDATA')
    keywords = []
    for keyword, count, offset in hlp_btree(hlp, '|KWBTREE', keyword_record):
        keywords.append([keyword, [topic_at(struct.unpack_from('<i', keyword_data, offset + 4 * k)[0]) for k in range(count)]])
    with open(os.path.join(OUT, 'menu', 'menu-help.json'), 'w', encoding='utf-8') as f:
        json.dump({'contexts': contexts, 'topics': topics, 'keywords': keywords}, f, ensure_ascii=False)
    asset_map['menu/menu-help.json'] = 'original/install/menu.hlp: text, hotspots and keywords, pictures omitted'


def decode_pcx(data):
    """An 8-bit PCX as FUN_004cb630 reads it: width, height, one index per pixel, and the 768 palette bytes at the end."""
    assert data[0] == 0x0A and data[1] == 5
    xmin, ymin, xmax, ymax = struct.unpack_from('<4H', data, 4)
    w, h = xmax - xmin + 1, ymax - ymin + 1
    line = struct.unpack_from('<H', data, 66)[0]
    pixels = bytearray(w * h)
    p = 128
    for y in range(h):
        x = 0
        while x < line:
            b = data[p]
            p += 1
            run = 1
            if b & 0xC0 == 0xC0:
                run = b & 0x3F
                b = data[p]
                p += 1
            for _ in range(run):
                if x < w:
                    pixels[y * w + x] = b
                x += 1
    return w, h, bytes(pixels), data[-768:]


def indexed_rgb(pixels, palette):
    out = bytearray(len(pixels) * 3)
    for k, i in enumerate(pixels):
        out[k * 3:k * 3 + 3] = palette[i * 3:i * 3 + 3]
    return bytes(out)


def prepare_loading(asset_map):
    """The race's splash screens as PNG, for the loading page: raser.ini [wait_hi] from TGA with a 3D card, and for the
    8-bit path the PCX of [wait_hi] and [wait_lo], through the game's palette: `FUN_004cae20` reads no palette of their own."""
    src_dir = os.path.join(DEC, 'extracted', 'game-archives', 'rcs')
    out = os.path.join(OUT, 'loading')
    os.makedirs(out, exist_ok=True)
    palette = decode_pcx(open(os.path.join(src_dir, 'e00_pal.pcx'), 'rb').read())[3]
    for k in range(10):
        for suffix, name in (('-8', 'e%02d_w_hi.pcx' % k), ('-lo', 'e%02d_w_lo.pcx' % k)):
            w, h, pixels, _ = decode_pcx(open(os.path.join(src_dir, name), 'rb').read())
            dst = os.path.join(out, 'e%02d%s.png' % (k, suffix))
            with open(dst, 'wb') as f:
                f.write(png_bytes(w, h, indexed_rgb(pixels, palette), False))
            asset_map['loading/e%02d%s.png' % (k, suffix)] = 'rcs members %s and e00_pal.pcx' % name
        name = 'e%02d_w_hi.tga' % k
        src = os.path.join(src_dir, name)
        dst = os.path.join(out, 'e%02d.png' % k)
        if os.path.exists(src) and not os.path.exists(dst):
            w, h, rgb, alpha = decode_tga(open(src, 'rb').read())
            with open(dst, 'wb') as f:
                f.write(png_bytes(w, h, rgb, alpha))
        asset_map['loading/e%02d.png' % k] = 'rcs member ' + name


def read_d3d(path):
    """A model as mesh_load 0x004be590 reads it: positions and UVs of its 49-byte vertices, triangles of 9 bytes."""
    d = open(path, 'rb').read()
    version, count, triangles = struct.unpack_from('<iii', d, 0)
    assert version == -1, path
    vertices = [struct.unpack_from('<3f3f2f', d, 12 + 49 * k) for k in range(count)]
    return [[vertices[i] for i in struct.unpack_from('<3H', d, 12 + 49 * count + 9 * k)] for k in range(triangles)]


def overlay_texels(rgb):
    """overlay.tga as RESOLUTION 3 sees it: render-textures.md section 1, with the renderer's expansion to 8 bits.
    (255,0,127) is the key: black with alpha 0. Other colours truncate to 565; one that would equal the key gets red 1."""
    out = []
    for k in range(0, len(rgb), 3):
        r, g, b = rgb[k], rgb[k + 1], rgb[k + 2]
        if (r, g, b) == (255, 0, 127):
            out.append((0, 0, 0, 0))
            continue
        r5, g6, b5 = r >> 3, g >> 2, b >> 3
        if r5 == 0 and g6 == 0 and b5 == 0:
            r5 = 1
        out.append(((r5 * 527 + 23) >> 6, (g6 * 259 + 33) >> 6, (b5 * 527 + 23) >> 6, 255))
    return out


def sample_bilinear(texels, width, height, u, v):
    """The overlay draws with its filter on, 0x00485ed0. Clamped, which these UVs never reach."""
    x = u * width - 0.5
    y = v * height - 0.5
    x0, y0 = int(x // 1), int(y // 1)
    fx, fy = x - x0, y - y0
    out = [0.0, 0.0, 0.0, 0.0]
    for dx, dy, weight in ((0, 0, (1 - fx) * (1 - fy)), (1, 0, fx * (1 - fy)), (0, 1, (1 - fx) * fy), (1, 1, fx * fy)):
        texel = texels[min(height - 1, max(0, y0 + dy)) * width + min(width - 1, max(0, x0 + dx))]
        for c in range(4):
            out[c] += texel[c] * weight
    return out


def prepare_loading_bar_8(asset_map, src_dir, out, section):
    """The same frames for the 8-bit path: overlay.pcx through the game's palette, one texel per pixel, index 0xFE keyed."""
    palette = decode_pcx(open(os.path.join(src_dir, 'e00_pal.pcx'), 'rb').read())[3]
    width, height, texels, _ = decode_pcx(open(os.path.join(src_dir, 'overlay.pcx'), 'rb').read())
    w, h = 288, 24
    for frame, mesh in re.findall(r'^(\d+)=(ovl_p\d+\.d3d),overlay\.pcx', section, flags=re.M):
        pixels = bytearray(w * h * 4)
        for triangle in read_d3d(os.path.join(src_dir, mesh)):
            (ax, ay), (bx, by), (cx, cy) = ((p[0] + 295 - 308.5, 450 - p[1] - 438) for p in triangle)
            area = (bx - ax) * (cy - ay) - (cx - ax) * (by - ay)
            if abs(area) < 1e-6:
                continue
            for py in range(max(0, int(min(ay, by, cy))), min(h, int(max(ay, by, cy)) + 2)):
                for px in range(max(0, int(min(ax, bx, cx))), min(w, int(max(ax, bx, cx)) + 2)):
                    x, y = px + 0.5, py + 0.5
                    wb = ((x - ax) * (cy - ay) - (cx - ax) * (y - ay)) / area
                    wc = ((bx - ax) * (y - ay) - (x - ax) * (by - ay)) / area
                    wa = 1 - wb - wc
                    if min(wa, wb, wc) < -1e-3:
                        continue
                    u = wa * triangle[0][6] + wb * triangle[1][6] + wc * triangle[2][6]
                    v = wa * triangle[0][7] + wb * triangle[1][7] + wc * triangle[2][7]
                    i = texels[int(min(height - 1, max(0, v * height))) * width + int(min(width - 1, max(0, u * width)))]
                    if i != 0xFE:
                        pixels[(py * w + px) * 4:(py * w + px) * 4 + 4] = palette[i * 3:i * 3 + 3] + b'\xff'
        name = 'bar8-%02d.png' % int(frame)
        with open(os.path.join(out, name), 'wb') as f:
            f.write(png_bytes(w, h, bytes(pixels), True))
        asset_map['loading/' + name] = 'rcs members %s and overlay.pcx, OVL_PROGRESS_BAR frame %s in gen_anim.ini' % (mesh, frame)


def prepare_loading_bar(asset_map):
    """OVL_PROGRESS_BAR: gen_anim.ini's 11 frames with the texture of each. overlay0.ini places it at 295,450, mesh y
    up (hud-overlay.md section 9), so the frames fill the canvas rectangle 308.5-596.5, 438-462. Rendered at twice
    that size. Edges as the race shows them: a filtered alpha below one half is not drawn, the colour is divided by it."""
    src_dir = os.path.join(DEC, 'extracted', 'game-archives', 'rcs')
    out = os.path.join(OUT, 'loading')
    os.makedirs(out, exist_ok=True)
    width, height, rgb, _ = decode_tga(open(os.path.join(src_dir, 'overlay.tga'), 'rb').read())
    texels = overlay_texels(rgb)
    ini = open(os.path.join(INSTALL, 'gen_anim.ini'), encoding='latin1').read()
    section = re.search(r'^\[OVL_PROGRESS_BAR\]\s*$(.*?)^\[', ini, flags=re.M | re.S).group(1)
    scale = 2
    w, h = 288 * scale, 24 * scale
    for frame, mesh in re.findall(r'^(\d+)=(ovl_p\d+\.d3d),overlay\.pcx', section, flags=re.M):
        pixels = bytearray(w * h * 4)
        for triangle in read_d3d(os.path.join(src_dir, mesh)):
            (ax, ay), (bx, by), (cx, cy) = ((p[0] + 295 - 308.5, 450 - p[1] - 438) for p in triangle)
            area = (bx - ax) * (cy - ay) - (cx - ax) * (by - ay)
            if abs(area) < 1e-6:
                continue
            for py in range(max(0, int(min(ay, by, cy) * scale)), min(h, int(max(ay, by, cy) * scale) + 2)):
                for px in range(max(0, int(min(ax, bx, cx) * scale)), min(w, int(max(ax, bx, cx) * scale) + 2)):
                    x, y = (px + 0.5) / scale, (py + 0.5) / scale
                    wb = ((x - ax) * (cy - ay) - (cx - ax) * (y - ay)) / area
                    wc = ((bx - ax) * (y - ay) - (x - ax) * (by - ay)) / area
                    wa = 1 - wb - wc
                    # A hair over, so that no seam stays open between the bar's quads.
                    if min(wa, wb, wc) < -1e-3:
                        continue
                    u = wa * triangle[0][6] + wb * triangle[1][6] + wc * triangle[2][6]
                    v = wa * triangle[0][7] + wb * triangle[1][7] + wc * triangle[2][7]
                    r, g, b, a = sample_bilinear(texels, width, height, u, v)
                    if a < 127.5:
                        continue
                    k = (a / 255) or 1
                    pixels[(py * w + px) * 4:(py * w + px) * 4 + 4] = bytes((round(r / k), round(g / k), round(b / k), 255))
        name = 'bar-%02d.png' % int(frame)
        with open(os.path.join(out, name), 'wb') as f:
            f.write(png_bytes(w, h, bytes(pixels), True))
        asset_map['loading/' + name] = 'rcs members %s and overlay.tga, OVL_PROGRESS_BAR frame %s in gen_anim.ini' % (mesh, frame)
    prepare_loading_bar_8(asset_map, src_dir, out, section)
    print('progress bar frames written')


def prepare_touch(asset_map):
    """The on-screen controls' art: maintained in source/assets/touch, with its notice and license, copied as is."""
    out = os.path.join(OUT, 'touch')
    os.makedirs(out, exist_ok=True)
    for name in sorted(os.listdir(TOUCH_SRC)):
        src = os.path.join(TOUCH_SRC, name)
        shutil.copyfile(src, os.path.join(out, name))
        digest = hashlib.sha256(open(src, 'rb').read()).hexdigest()
        if name.endswith('.svg'):
            asset_map['touch/' + name] = 'source/assets/touch/%s, from %s%s, SHA-256 %s; looneybits, Car Controls, CC0 1.0' % (name, TOUCH_REFERENCE, name, digest)
        else:
            asset_map['touch/' + name] = 'source/assets/touch/%s, SHA-256 %s' % (name, digest)


def prepare_media(asset_map, skip_video):
    out = os.path.join(OUT, 'media')
    os.makedirs(out, exist_ok=True)
    music = os.path.join(INSTALL, 'menumsc.wav')
    shutil.copyfile(music, os.path.join(out, 'menumsc.wav'))
    asset_map['media/menumsc.wav'] = 'original/install/menumsc.wav'
    if skip_video:
        return
    videos = [('intro1.mpg', 'intro1.mp4')] + [(f'ch0{k}.avi', f'ch0{k}.mp4') for k in range(5)]
    for src_name, dst_name in videos:
        src = os.path.join(INSTALL, src_name)
        dst = os.path.join(out, dst_name)
        if not os.path.exists(src):
            continue
        asset_map['media/' + dst_name] = 'original/install/' + src_name
        if os.path.exists(dst):
            continue
        ffmpeg('-i', src, '-c:v', 'libx264', '-preset', 'slow', '-crf', '18', '-pix_fmt', 'yuv420p',
               '-c:a', 'aac', '-b:a', '160k', '-movflags', '+faststart', dst)
        print('converted', src_name)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--skip-video', action='store_true')
    ap.add_argument('--only', help='comma-separated steps; the other entries of the asset map stay')
    args = ap.parse_args()
    steps = {
        'race': prepare_race,
        'menu': prepare_menu,
        'error-icon': prepare_error_icon,
        'agent': prepare_agent,
        'help': prepare_help,
        'loading': prepare_loading,
        'loading-bar': prepare_loading_bar,
        'touch': prepare_touch,
        'media': lambda asset_map: prepare_media(asset_map, args.skip_video),
    }
    map_path = os.path.join(OUT, 'asset-map.json')
    asset_map = {}
    if args.only:
        asset_map = json.load(open(map_path))
        names = args.only.split(',')
    else:
        names = list(steps)
    for name in names:
        steps[name](asset_map)
    with open(map_path, 'w') as f:
        json.dump(asset_map, f, indent=0, sort_keys=True)
    print('asset map entries:', len(asset_map))


if __name__ == '__main__':
    sys.exit(main())
