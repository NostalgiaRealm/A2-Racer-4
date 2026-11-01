#!/usr/bin/env python3
"""Recover Delphi class metadata from a PE image by parsing it directly (no execution).

Usage: delphi_scan.py <pe_file> <output_dir>
Writes delphi_classes.json (classes, parents, units, published methods and fields, properties),
delphi_seeds.tsv (address, name, method) for Ghidra, and forms/*.dfm.txt decoded from TPF0 resources.
VMT field offsets are the Delphi 5 layout (vmtSelfPtr=-76 ... vmtDestroy=-4).
"""
import json, os, struct, sys
import pefile


class Img:
    def __init__(self, path):
        self.pe = pefile.PE(path, fast_load=False)
        self.base = self.pe.OPTIONAL_HEADER.ImageBase
        size = self.pe.OPTIONAL_HEADER.SizeOfImage
        self.m = bytearray(size + 0x1000)
        for s in self.pe.sections:
            d = s.get_data()
            self.m[s.VirtualAddress:s.VirtualAddress + len(d)] = d
        self.code = []
        for s in self.pe.sections:
            if s.Characteristics & 0x20000000:
                self.code.append((self.base + s.VirtualAddress, self.base + s.VirtualAddress + s.Misc_VirtualSize))
        self.size = size

    def ok(self, va):
        return self.base <= va < self.base + self.size - 4

    def d(self, va):
        return struct.unpack_from('<I', self.m, va - self.base)[0] if self.ok(va) else 0

    def w(self, va):
        return struct.unpack_from('<H', self.m, va - self.base)[0] if self.ok(va) else 0

    def b(self, va):
        return self.m[va - self.base] if self.ok(va) else 0

    def sstr(self, va):
        if not self.ok(va):
            return None
        n = self.b(va)
        raw = bytes(self.m[va - self.base + 1:va - self.base + 1 + n])
        try:
            return raw.decode('latin1')
        except Exception:
            return None

    def in_code(self, va):
        return any(a <= va < b for a, b in self.code)


def valid_ident(s):
    return bool(s) and all(c.isalnum() or c in '_.' for c in s)


def find_vmts(img):
    vmts = []
    for a, b in img.code:
        for va in range(a, b - 80, 4):
            if img.d(va) == va + 76:
                vmt = va + 76
                nm = img.sstr(img.d(vmt - 44))
                if valid_ident(nm):
                    vmts.append(vmt)
    return vmts


def method_table(img, vmt):
    p = img.d(vmt - 52)
    out = []
    if not img.ok(p) or p == 0:
        return out
    n = img.w(p)
    q = p + 2
    for _ in range(min(n, 2000)):
        sz = img.w(q)
        addr = img.d(q + 2)
        name = img.sstr(q + 6)
        if sz < 7 or not img.in_code(addr) or not name:
            break
        out.append({'address': addr, 'name': name})
        q += sz
    return out


def dynamic_table(img, vmt):
    p = img.d(vmt - 48)
    out = []
    if not img.ok(p) or p == 0:
        return out
    n = img.w(p)
    if n == 0 or n > 2000:
        return out
    for i in range(n):
        idx = img.w(p + 2 + i * 2)
        addr = img.d(p + 2 + n * 2 + i * 4)
        if img.in_code(addr):
            out.append({'address': addr, 'id': idx})
    return out


def field_table(img, vmt):
    p = img.d(vmt - 56)
    out = []
    if not img.ok(p) or p == 0:
        return out
    n = img.w(p)
    q = p + 6
    for _ in range(min(n, 2000)):
        off = img.d(q)
        idx = img.w(q + 4)
        name = img.sstr(q + 6)
        if not name:
            break
        out.append({'offset': off, 'class_index': idx, 'name': name})
        q += 6 + 1 + len(name)
    return out


def typeinfo(img, vmt):
    p = img.d(vmt - 60)
    if not img.ok(p) or p == 0 or img.b(p) != 7:  # tkClass
        return {}
    name = img.sstr(p + 1)
    if not name:
        return {}
    q = p + 2 + len(name)
    # TClassTypeData: ClassType, ParentInfo, PropCount(word), UnitName(shortstring), PropData
    prop_count = img.w(q + 8)
    unit = img.sstr(q + 10) or ''
    r = q + 11 + len(unit)
    n = img.w(r)
    r += 2
    props = []
    for _ in range(min(n, 2000)):
        get, set_ = img.d(r + 4), img.d(r + 8)
        pname = img.sstr(r + 26)
        if not pname:
            break
        props.append({'name': pname, 'get': get, 'set': set_})
        r += 27 + len(pname)
    return {'unit': unit, 'prop_count': prop_count, 'props': props}


def vmt_slots(img, vmt, all_vmts):
    """Positive VMT slots run until the next non-code dword or the header of the following class."""
    limit = min((v - 76 for v in all_vmts if v > vmt), default=vmt + 0x1000)
    out = []
    va = vmt
    while va < limit and va - vmt < 0x1000:
        x = img.d(va)
        if not img.in_code(x):
            break
        out.append(x)
        va += 4
    return out


STD = {-32: 'SafeCallException', -28: 'AfterConstruction', -24: 'BeforeDestruction', -20: 'Dispatch', -16: 'DefaultHandler', -12: 'NewInstance', -8: 'FreeInstance', -4: 'Destroy'}


def unit_init_table(img):
    """Program entry usually starts with: push ebp; mov ebp,esp; add esp,-N; mov eax,<InitTable>; call StartExe."""
    ep = img.base + img.pe.OPTIONAL_HEADER.AddressOfEntryPoint
    code = bytes(img.m[ep - img.base:ep - img.base + 64])
    for i in range(len(code) - 5):
        if code[i] == 0xB8:
            t = struct.unpack_from('<I', code, i + 1)[0]
            n = img.d(t)
            if 0 < n < 2000 and img.ok(t) and (img.in_code(img.d(t + 8)) or img.d(t + 8) == 0):
                # PackageInfoTable: count, pointer to UnitInfo pairs, or inline pairs in older linkers
                tbl = img.d(t + 4)
                pairs = []
                if img.ok(tbl) and tbl != 0:
                    for k in range(n):
                        pairs.append((img.d(tbl + k * 8), img.d(tbl + k * 8 + 4)))
                else:
                    for k in range(n):
                        pairs.append((img.d(t + 4 + k * 8), img.d(t + 8 + k * 8)))
                if any(img.in_code(a) for a, _ in pairs):
                    return t, pairs
    return None, []


class DfmReader:
    def __init__(self, b):
        self.b, self.p = b, 0

    def u8(self):
        v = self.b[self.p]; self.p += 1; return v

    def i32(self):
        v = struct.unpack_from('<i', self.b, self.p)[0]; self.p += 4; return v

    def sstr(self):
        n = self.u8(); s = self.b[self.p:self.p + n].decode('latin1'); self.p += n; return s

    def value(self, ind):
        t = self.u8()
        if t == 0: return ''
        if t == 1:
            items = []
            while self.b[self.p] != 0: items.append(self.value(ind + 1))
            self.p += 1
            return '(' + ' '.join(items) + ')'
        if t == 2: v = struct.unpack_from('<b', self.b, self.p)[0]; self.p += 1; return str(v)
        if t == 3: v = struct.unpack_from('<h', self.b, self.p)[0]; self.p += 2; return str(v)
        if t == 4: return str(self.i32())
        if t == 5:
            raw = self.b[self.p:self.p + 10]; self.p += 10
            m = struct.unpack_from('<Q', raw)[0]; e = struct.unpack_from('<H', raw, 8)[0]
            sign = -1 if e & 0x8000 else 1; e &= 0x7fff
            return '%g' % (sign * m * 2.0 ** (e - 16383 - 63)) if m else '0'
        if t == 6: return repr(self.sstr())
        if t == 7: return self.sstr()
        if t == 8: return 'False'
        if t == 9: return 'True'
        if t == 10:
            n = self.i32(); v = self.b[self.p:self.p + n]; self.p += n
            return '{binary %d bytes %s}' % (n, v[:32].hex())
        if t == 11:
            items = []
            while True:
                s = self.sstr()
                if not s: break
                items.append(s)
            return '[' + ', '.join(items) + ']'
        if t == 12:
            n = self.i32(); s = self.b[self.p:self.p + n].decode('latin1'); self.p += n; return repr(s)
        if t == 13: return 'nil'
        if t == 14:
            lines = []
            while self.b[self.p] != 0:
                self.p += 1
                lines.append('item')
                while self.b[self.p] != 0:
                    nm = self.sstr()
                    lines.append('  ' + nm + ' = ' + self.value(ind + 1))
                self.p += 1
                lines.append('end')
            self.p += 1
            return '<\n' + '\n'.join('  ' * (ind + 1) + x for x in lines) + '\n' + '  ' * ind + '>'
        if t == 15: v = struct.unpack_from('<f', self.b, self.p)[0]; self.p += 4; return str(v)
        if t == 16: v = struct.unpack_from('<d', self.b, self.p)[0]; self.p += 8; return str(v)
        if t == 17: raw = self.b[self.p:self.p + 8]; self.p += 8; return 'date:' + raw.hex()
        if t == 18:
            n = self.i32(); s = self.b[self.p:self.p + n * 2].decode('utf-16-le', 'replace'); self.p += n * 2; return repr(s)
        if t == 19: v = struct.unpack_from('<q', self.b, self.p)[0]; self.p += 8; return str(v)
        raise ValueError('unknown DFM value type %d at %d' % (t, self.p))

    def component(self, ind, out, handlers):
        flags = 0
        if self.b[self.p] & 0xF0 == 0xF0:
            flags = self.u8()
            if flags & 2:
                self.value(ind)
        cls = self.sstr(); name = self.sstr()
        out.append('  ' * ind + 'object %s: %s' % (name, cls))
        while self.b[self.p] != 0:
            pn = self.sstr()
            v = self.value(ind + 1)
            out.append('  ' * (ind + 1) + pn + ' = ' + v)
            if pn.startswith('On') and not v.startswith("'") and v.isidentifier():
                handlers.append((name, pn, v))
        self.p += 1
        while self.b[self.p] != 0:
            self.component(ind + 1, out, handlers)
        self.p += 1
        out.append('  ' * ind + 'end')


def decode_forms(img, outdir):
    forms = []
    pe = img.pe
    if not hasattr(pe, 'DIRECTORY_ENTRY_RESOURCE'):
        return forms
    for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
        if t.id != 10:  # RT_RCDATA
            continue
        for e in t.directory.entries:
            nm = str(e.name) if e.name else str(e.id)
            for l in e.directory.entries:
                dat = pe.get_data(l.data.struct.OffsetToData, l.data.struct.Size)
                if dat[:4] != b'TPF0':
                    continue
                r = DfmReader(dat)
                r.p = 4
                lines, handlers = [], []
                rec = {'resource': nm, 'size': len(dat)}
                try:
                    r.component(0, lines, handlers)
                except Exception as ex:
                    lines.append('; decode stopped: %r at offset %d' % (ex, r.p))
                    rec['decode_error'] = repr(ex)
                os.makedirs(os.path.join(outdir, 'forms'), exist_ok=True)
                open(os.path.join(outdir, 'forms', nm + '.dfm.txt'), 'w').write('\n'.join(lines) + '\n')
                rec['handlers'] = [{'component': a, 'event': b, 'method': c} for a, b, c in handlers]
                forms.append(rec)
    return forms


def main():
    path, outdir = sys.argv[1], sys.argv[2]
    os.makedirs(outdir, exist_ok=True)
    img = Img(path)
    vmts = sorted(set(find_vmts(img)))
    classes, seeds = {}, {}

    def seed(addr, name, method):
        if img.in_code(addr) and addr not in seeds:
            seeds[addr] = (name, method)

    for vmt in vmts:
        nm = img.sstr(img.d(vmt - 44))
        p = img.d(vmt - 36)
        parent = None
        if img.ok(p) and p:
            q = img.d(p)
            parent = q if q in vmts else (p if p in vmts else None)
        classes[vmt] = {'vmt': vmt, 'name': nm, 'instance_size': img.d(vmt - 40), 'parent_vmt': parent,
                        'methods': method_table(img, vmt), 'dynamic': dynamic_table(img, vmt), 'fields': field_table(img, vmt), 'rtti': typeinfo(img, vmt), 'slots': vmt_slots(img, vmt, vmts)}
    for vmt, c in classes.items():
        nm = c['name']
        par = classes.get(c['parent_vmt'])
        for m in c['methods']:
            seed(m['address'], '%s.%s' % (nm, m['name']), 'Delphi published method table')
        for d in c['dynamic']:
            seed(d['address'], '%s.dyn_%04x' % (nm, d['id']), 'Delphi dynamic method table')
        for off, label in STD.items():
            a = img.d(vmt + off)
            if img.in_code(a) and (not par or img.d(par['vmt'] + off) != a):
                seed(a, '%s.%s' % (nm, label), 'Delphi VMT standard slot')
        pslots = par['slots'] if par else []
        for i, a in enumerate(c['slots']):
            if i >= len(pslots) or pslots[i] != a:
                seed(a, '%s.vmt_%03x' % (nm, i * 4), 'Delphi VMT slot')
        for pr in c['rtti'].get('props', []):
            for k in ('get', 'set'):
                a = pr[k]
                if img.in_code(a):
                    seed(a, '%s.%s_%s' % (nm, k, pr['name']), 'Delphi RTTI property accessor')
    table, pairs = unit_init_table(img)
    for i, (a, b) in enumerate(pairs):
        seed(a, 'unit_%03d_initialization' % i, 'Delphi unit init table')
        seed(b, 'unit_%03d_finalization' % i, 'Delphi unit init table')
    forms = decode_forms(img, outdir)
    with open(os.path.join(outdir, 'delphi_seeds.tsv'), 'w') as f:
        f.write('address\tname\tmethod\n')
        for a in sorted(seeds):
            f.write('%08x\t%s\t%s\n' % (a, seeds[a][0], seeds[a][1]))
    res = {'file': os.path.basename(path), 'vmt_layout': 'Delphi 5 (vmtSelfPtr=-76)', 'init_table': table, 'unit_count': len(pairs), 'class_count': len(classes), 'seed_count': len(seeds), 'forms': forms, 'classes': list(classes.values())}
    json.dump(res, open(os.path.join(outdir, 'delphi_classes.json'), 'w'), indent=1)
    print(os.path.basename(path), 'classes', len(classes), 'seeds', len(seeds), 'units', len(pairs), 'forms', len(forms))


if __name__ == '__main__':
    main()
