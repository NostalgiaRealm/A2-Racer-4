#!/usr/bin/env python3
"""Disassemble a compiled DaviScript object (.dso). Layout established from the loader in spel.dat.

Usage: dso_dump.py <file.dso> <output.dsasm> [<symbols.csv> [<pseudo.txt>]]
Readers: module FUN_004d8a80, lists FUN_004da320, base item FUN_004d3e90, function FUN_004dcf80, class FUN_004dc120,
code FUN_004ddb10, instructions FUN_004e39d0 (table 0x4e3c38), operands FUN_004e2d10 (table 0x4e2f74),
constants FUN_004e77f0 (table 0x4e78f4). Operator text comes from the runtime's own printers. Exits non-zero
unless every byte of the file is consumed.
"""
import csv, re, struct, sys

ITEM = {0x32: 'member', 0x35: 'arg_or_local', 0x37: 'var', 0x38: 'const_obj', 0x3b: 'func', 0x3c: 'method', 0x3d: 'func_with_list', 0x3e: 'func_external', 0x3f: 'decl_3f', 0x41: 'builtin_41', 0x42: 'class'}
LISTS = ['list_0x30', 'list_0x58', 'list_0x6c', 'list_0x80', 'list_0x44']


class R:
    def __init__(self, b):
        self.b, self.p = b, 0
    def u8(self):
        v = self.b[self.p]; self.p += 1; return v
    def peek(self):
        return self.b[self.p]
    def u16(self):
        v = struct.unpack_from('<H', self.b, self.p)[0]; self.p += 2; return v
    def i16(self):
        v = struct.unpack_from('<h', self.b, self.p)[0]; self.p += 2; return v
    def i32(self):
        v = struct.unpack_from('<i', self.b, self.p)[0]; self.p += 4; return v
    def f64(self):
        v = struct.unpack_from('<d', self.b, self.p)[0]; self.p += 8; return v
    def s(self):
        n = self.i16(); v = self.b[self.p:self.p + n].decode('cp1252'); self.p += n; return v


def path(r):
    n = r.u8()
    if n == 0xff:
        return []
    out = []
    for _ in range(n):
        t = r.u8(); out.append((t, r.u16()))
    return out


BINOPS = ['<No op>', '+', '*', '-', '/', '>=', '<=', '>', '<', '==', '<>', 'OR', 'AND']  # printer table 0x4e4ca8
UNOPS = ['NEG', 'NOT', 'CAST I->D', 'CAST I->S', 'CAST D->S', 'CAST D->I', 'CAST S->I', 'CAST S->D', 'ROUND', 'SIN', 'COS', 'TAN', 'SINH', 'TANH', 'COSH', 'ASIN', 'ACOS', 'ATAN', 'LOG10', 'EXP', 'LOG', 'STRLEN', 'STRLWR', 'STRUPR', 'ASCII', 'CHR']  # table 0x4e880c


def fmt_path(p):
    return '{' + ','.join('%x:%d' % (t, i) for t, i in p) + '}'


def typ(r):
    k = r.u8()
    return (k, path(r))


def fmt_type(t):
    names = {0: 'void', 1: 'double', 2: 'int', 3: 'string', 4: 'object'}
    return names.get(t[0], 'kind%d' % t[0]) + ('(%s)' % fmt_path(t[1]) if t[1] else '')


def const(r):
    k = r.u8()
    if k == 0:
        return 'void'
    if k == 1:
        return repr(r.f64())
    if k == 2:
        return str(r.i32())
    if k == 3:
        return repr(r.s())
    if k == 4:
        return 'obj:%d' % r.i32()
    raise ValueError('constant kind %d at 0x%x' % (k, r.p))


def operand(r):
    t = r.u8()
    if t == 0:
        return const(r)
    if t == 1:
        return 'R%d' % r.u8()
    if t == 2:
        return '[' + fmt_path(path(r)) + ']'
    if t == 3:
        return 'STACK'
    if t == 4:
        p = path(r); f = r.u8()
        return 'CALL(%s,flag=%d)' % (fmt_path(p), f)
    if t == 5:
        return 'arg16:%d' % r.u16()
    raise ValueError('operand tag %d at 0x%x' % (t, r.p - 1))


def instr(r):
    t = r.u8()
    if t == 0:
        return 'JP %d' % r.i32()
    if t == 1:
        tgt = r.i32(); c = r.u8(); return 'JCOND1 cond=%d %s -> %d' % (c, operand(r), tgt)
    if t == 2:
        tgt = r.i32(); c = r.u8(); a = operand(r); b = operand(r); k = r.u8(); return 'JCMP cond=%d %s, %s kind=%d -> %d' % (c, a, b, k, tgt)
    if t == 3:
        a = operand(r); return 'MOV %s <- %s' % (a, operand(r))
    if t == 4:
        a = operand(r); b = operand(r); o = r.u8(); return 'BINOP %s %s <- %s, %s' % (BINOPS[o], a, b, operand(r))
    if t == 5:
        a = operand(r); b = operand(r); return 'UNOP %s %s <- %s' % (UNOPS[r.u8()], a, b)
    if t == 6:
        a = operand(r); b = operand(r); return 'OP6 sub=%d %s, %s' % (r.u8(), a, b)
    raise ValueError('instruction tag %d at 0x%x' % (t, r.p - 1))


TOP = []


def item_list(r, out, ind, syms, parent, holder=None):
    n = r.i32()
    if n < 0 or n > 100000:
        raise ValueError('bad list count %d at 0x%x' % (n, r.p - 4))
    kids = []
    for i in range(n):
        kids.append(item(r, out, ind, syms, parent, i))
    if holder is not None:
        holder.append(kids)


def item(r, out, ind, syms, parent, idx):
    at = r.p
    t = r.u8(); name = r.s(); ty = typ(r)
    pad = '  ' * ind
    node = dict(tag=t, name=name, type=ty, lists=[], idx=idx, code=[], offset=None)
    out.append('%s; file 0x%05x #%d %s %s : %s' % (pad, at, idx, ITEM.get(t, hex(t)), name, fmt_type(ty)))
    syms.append(dict(offset=hex(at), index=idx, kind=ITEM.get(t, hex(t)), name=name, type=fmt_type(ty), parent=parent))
    full = (parent + '.' if parent else '') + name
    if t == 0x32:
        pass
    elif t == 0x35:
        node['offset'] = r.i32()
        out.append('%s  stack offset %d' % (pad, node['offset']))
    elif t == 0x37:
        out.append('%s  value %d' % (pad, r.i32()))
    elif t == 0x38:
        out.append('%s  value %d' % (pad, r.i32()))
        n = r.i32()
        for _ in range(n):
            f = r.u8()
            if f == 0:
                out.append('%s  entry %d %d' % (pad, r.i32(), r.i32()))
            else:
                out.append('%s  entry flag=%d' % (pad, f))
    elif t == 0x42:
        item_list(r, out, ind + 1, syms, full, node['lists'])
        item_list(r, out, ind + 1, syms, full, node['lists'])
    elif t in (0x3c, 0x3f, 0x41):
        item_list(r, out, ind + 1, syms, full, node['lists'])
    elif t in (0x3b, 0x3d, 0x3e):
        item_list(r, out, ind + 1, syms, full, node['lists'])
        item_list(r, out, ind + 1, syms, full, node['lists'])
        n = r.u16()
        out.append('%s  code: %d instructions' % (pad, n))
        for k in range(n):
            pc = r.p
            ins = instr(r)
            node['code'].append(ins)
            out.append('%s  %4d  [0x%05x] %s' % (pad, k, pc, ins))
        if t in (0x3d, 0x3e):
            item_list(r, out, ind + 1, syms, full, node['lists'])
        if t == 0x3e:
            out.append('%s  external ref %s' % (pad, fmt_path(path(r))))
    else:
        raise ValueError('unhandled item tag 0x%x (%s) at 0x%x' % (t, name, at))
    return node


def find(lists, t, i):
    hits = [k for l in lists for k in l if k['tag'] == t and k['idx'] == i]
    return hits[0] if hits else None


def resolve(spec):
    """Paths run innermost first. The last element is looked up at module level."""
    if not spec:
        return '-'
    parts = [tuple(int(x, 16) if n == 0 else int(x) for n, x in enumerate(e.split(':'))) for e in spec.split(',')]
    names, scope = [], TOP
    for t, i in reversed(parts):
        n = find(scope, t, i)
        if n is None:
            names.append('?%x#%d' % (t, i)); scope = []
        else:
            names.append(n['name']); scope = n['lists']
    return '.'.join(names)


CALL_RE = re.compile(r'^CALL\((.*),flag=(\d)\)$')


def nargs(spec_name):
    parts = spec_name.split('.')
    scope, node = TOP, None
    for nm in parts:
        node = next((k for l in scope for k in l if k['name'] == nm), None)
        if node is None:
            return None, None
        scope = node['lists']
    return node, [a for a in (node['lists'][0] if node['lists'] else []) if a['name'] != '@self']


def pseudo(path_out):
    """Readable form under a stack model that is inferred: R1-R4 push typed values, with R4 also the object slot."""
    L = ['// Generated reconstruction of bonus.dso, not original source. Built only from bonus.dsasm.',
         '// Model (inferred, checked by "stack left" below): MOV Rn pushes a value; a call consumes its args and @self.', '']
    ok = bad = 0

    def fix(x):
        return re.sub(r'\{([0-9a-f:,]*)\}', lambda m: resolve(m.group(1)), x)

    def walk(node, cls):
        nonlocal ok, bad
        if node['tag'] == 0x42:
            L.append('class %s {' % node['name'])
            for a in node['lists'][0]:
                L.append('  %s %s;' % (fmt_type(a['type']).split('(')[0], a['name']))
            for m in node['lists'][1]:
                walk(m, node['name'])
            L.append('}')
            return
        if not node['code']:
            if node['lists']:
                L.append('  extern %s(%s);  // bound to game code' % (node['name'], ', '.join(a['name'] for a in node['lists'][0] if a['name'] != '@self')))
            return
        L.append('  %s() {' % node['name'])
        st = []

        def val(x):
            """Render one operand, consuming stack values for calls and object-relative members."""
            cm = CALL_RE.match(x)
            if cm:
                n, args = nargs(cm.group(1))
                is_method = '.' in cm.group(1)
                k = (len(args) if args is not None else 0) + (1 if is_method else 0)
                take = st[len(st) - k:] if k else []
                if k:
                    del st[len(st) - len(take):]
                obj = take[-1] + '.' if is_method and take else ''
                al = take[:-1] if is_method else take
                return '%s%s(%s)' % (obj, cm.group(1).split('.')[-1], ', '.join(al))
            if x.startswith('['):
                t = x.strip('[]')
                last = t.split('.')[-1]
                if t.count('.') == 1 and st and t.split('.')[0] != 'g_Player':
                    return st.pop() + '.' + last
                return last
            return x

        for c in node['code']:
            c = fix(c)
            m = re.match(r'MOV (.+?) <- (.+)$', c)
            b = re.match(r'BINOP (\S+) (.+?) <- (.+), (.+)$', c)
            u = re.match(r'OP6 sub=(\d+) (.+), (.+)$', c)
            if m:
                d, src = m.group(1), val(m.group(2))
                if d == 'STACK':
                    L.append('    ' + src + ';')
                elif d.startswith('R'):
                    st.append(src)
                else:
                    L.append('    %s = %s;' % (val(d), src))
            elif b:
                rhs2 = val(b.group(4)); rhs1 = val(b.group(3))
                expr = '(%s %s %s)' % (rhs1, b.group(1), rhs2)
                d = b.group(2)
                if d.startswith('R'):
                    st.append(expr)
                else:
                    L.append('    %s = %s;' % (val(d), expr))
            elif u:
                v = val(u.group(3)); L.append('    UPDATE<sub %s>(%s, %s);' % (u.group(1), val(u.group(2)), v))
            elif c.startswith('JP '):
                L.append('    return;' if c == 'JP -2' else '    // ' + c)
            else:
                L.append('    // ' + c)
        L.append('  }%s' % ('' if not st else '  // stack left: %r' % st))
        if st:
            bad += 1
        else:
            ok += 1

    for lst in TOP:
        for n in lst:
            walk(n, '')
    L.insert(2, '// Functions with an empty stack at the end: %d. With values left: %d.' % (ok, bad))
    open(path_out, 'w').write('\n'.join(L) + '\n')
    print('pseudo: empty stack', ok, 'values left', bad)


def main():
    b = open(sys.argv[1], 'rb').read()
    r = R(b)
    ver = r.i32(); ts = r.i32()
    out = ['; Disassembly of %s by scripts/formats/dso_dump.py. Generated, not original source.' % sys.argv[1].split('/')[-1], '; object version %d, compile time %d (Unix seconds)' % (ver, ts)]
    syms = []
    try:
        for name in LISTS:
            out.append('\n; ===== %s =====' % name)
            item_list(r, out, 0, syms, '', TOP)
    except Exception as e:
        print('STOPPED at 0x%x of 0x%x: %s' % (r.p, len(b), e))
        open(sys.argv[2], 'w').write('\n'.join(out) + '\n')
        print('\n'.join(out[-14:]))
        sys.exit(1)
    text = re.sub(r'\{([0-9a-f:,]*)\}', lambda m: resolve(m.group(1)), '\n'.join(out))
    open(sys.argv[2], 'w').write(text + '\n')
    if len(sys.argv) > 4:
        pseudo(sys.argv[4])
    if len(sys.argv) > 3:
        with open(sys.argv[3], 'w', newline='') as f:
            w = csv.DictWriter(f, ['offset', 'index', 'kind', 'name', 'type', 'parent'])
            w.writeheader(); w.writerows(syms)
    print('consumed', r.p, 'of', len(b), 'items', len(syms), 'instructions', sum(1 for l in out if '[0x' in l))
    sys.exit(0 if r.p == len(b) else 1)


if __name__ == '__main__':
    main()
