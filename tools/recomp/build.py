#!/usr/bin/env python3
"""Builds public/game/spel.wasm and spel.meta.json from the original spel.dat.

Usage: tools/recomp/build.py [--out public/game] [--no-names]
Needs capstone (the reverse-engineering Python environment has it).
"""
import argparse
import csv
import json
import os
import struct
import sys
import time
from collections import Counter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import recompile as R  # noqa: E402
from recompile import (  # noqa: E402
    Image, Recompiler, Unsupported, FUNC_PARAMS, FUNC_RESULTS, LOCALS_DECL,
    G_EDX, G_ST0, G_ST1, G_CW, G_ESP, G_A, G_B, G_ZF,
    POP_TABLE, THUNK_BASE, N_THUNKS, CODE_MAP, MAP_LO, MEM_PAGES, TIB_BASE, STACK_LOW, STACK_TOP, HEAP_BASE,
)
from wasmgen import *  # noqa: E402,F403
import lift as L  # noqa: E402
import replacements as RP  # noqa: E402

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
DEC = os.path.join(ROOT, 'original-game-decompiled')

MATH_IMPORTS = [
    ('sin', [F64], [F64]), ('cos', [F64], [F64]), ('tan', [F64], [F64]), ('atan2', [F64, F64], [F64]),
    ('log2', [F64], [F64]), ('pow2m1', [F64], [F64]), ('pow2', [F64], [F64]),
    ('fmod', [F64, F64], [F64]), ('frem', [F64, F64], [F64]),
    ('acos', [F64], [F64]), ('asin', [F64], [F64]), ('pow', [F64, F64], [F64]),
    ('atan', [F64], [F64]), ('exp', [F64], [F64]), ('log', [F64], [F64]), ('log10', [F64], [F64]),
    ('sinh', [F64], [F64]), ('cosh', [F64], [F64]), ('tanh', [F64], [F64]),
]


class ModuleContext:
    def __init__(self, rec):
        self.rec = rec
        self.mod = Module()
        self.type0 = self.mod.add_type(FUNC_PARAMS, FUNC_RESULTS)
        self.rt = {}
        self.func_idx = {}
        self.imp_thunk = {}      # IAT address -> thunk id
        self.thunk_first = None
        self.body_idx = {}

    def func_index_of(self, addr):
        return self.func_idx.get(addr)

    def import_func_index(self, iat_addr):
        return self.thunk_first + self.imp_thunk[iat_addr]


def build_runtime_helpers(ctx, first_index):
    """Hand-assembled helpers. Returns list of (name, type, locals, code)."""
    m = ctx.mod
    helpers = []

    def add(name, params, results, locals_decl, code):
        ctx.rt[name] = first_index + len(helpers)
        helpers.append((name, m.add_type(params, results), locals_decl, code))

    # movs(dst, src, n): rep movs semantics, forward byte order when overlapping.
    c = Code()
    c.get(0); c.get(1); c.op(I32_SUB); c.get(2); c.op(I32_GE_U)
    c.if_(); c.get(0); c.get(1); c.get(2); c.memory_copy(); c.op(RETURN); c.end()
    c.block(); c.loop()
    c.get(2); c.op(I32_EQZ); c.br_if(1)
    c.get(0); c.get(1); c.mem(I32_LOAD8_U); c.mem(I32_STORE8)
    c.get(0); c.i32(1); c.op(I32_ADD); c.set(0)
    c.get(1); c.i32(1); c.op(I32_ADD); c.set(1)
    c.get(2); c.i32(1); c.op(I32_SUB); c.set(2)
    c.br(0); c.end(); c.end()
    add('movs', [I32, I32, I32], [], [], c)

    # stos1(dst, val, count)
    c = Code()
    c.get(0); c.get(1); c.get(2); c.memory_fill()
    add('stos1', [I32, I32, I32], [], [], c)

    # stos2(dst, val, count)
    c = Code()
    c.block(); c.loop()
    c.get(2); c.op(I32_EQZ); c.br_if(1)
    c.get(0); c.get(1); c.mem(I32_STORE16)
    c.get(0); c.i32(2); c.op(I32_ADD); c.set(0)
    c.get(2); c.i32(1); c.op(I32_SUB); c.set(2)
    c.br(0); c.end(); c.end()
    add('stos2', [I32, I32, I32], [], [], c)

    # stos4(dst, val, count)
    c = Code()
    c.get(1); c.get(1); c.i32(0xFF); c.op(I32_AND); c.i32(0x01010101); c.op(I32_MUL); c.op(I32_EQ)
    c.if_(); c.get(0); c.get(1); c.get(2); c.i32(2); c.op(I32_SHL); c.memory_fill(); c.op(RETURN); c.end()
    c.block(); c.loop()
    c.get(2); c.op(I32_EQZ); c.br_if(1)
    c.get(0); c.get(1); c.mem(I32_STORE)
    c.get(0); c.i32(4); c.op(I32_ADD); c.set(0)
    c.get(2); c.i32(1); c.op(I32_SUB); c.set(2)
    c.br(0); c.end(); c.end()
    add('stos4', [I32, I32, I32], [], [], c)

    # repne_scasb(edi, al, ecx) -> ecx; G_A, G_B hold the last compared pair
    c = Code()
    c.block(); c.loop()
    c.get(2); c.op(I32_EQZ); c.br_if(1)
    c.get(2); c.i32(1); c.op(I32_SUB); c.set(2)
    c.get(0); c.mem(I32_LOAD8_U); c.set(3)
    c.get(0); c.i32(1); c.op(I32_ADD); c.set(0)
    c.get(3); c.get(1); c.op(I32_NE); c.br_if(0)
    c.get(1); c.i32(24); c.op(I32_SHL); c.gset(G_A)
    c.get(3); c.i32(24); c.op(I32_SHL); c.gset(G_B)
    c.get(2); c.op(RETURN)
    c.end(); c.end()
    c.get(1); c.i32(24); c.op(I32_SHL); c.gset(G_A)
    c.get(3); c.i32(24); c.op(I32_SHL); c.gset(G_B)
    c.get(2)
    add('repne_scasb', [I32, I32, I32], [I32], [(1, I32)], c)

    # repe_cmpsb(esi, edi, ecx) -> ecx
    c = Code()
    c.block(); c.loop()
    c.get(2); c.op(I32_EQZ); c.br_if(1)
    c.get(2); c.i32(1); c.op(I32_SUB); c.set(2)
    c.get(0); c.mem(I32_LOAD8_U); c.i32(24); c.op(I32_SHL); c.set(3)
    c.get(1); c.mem(I32_LOAD8_U); c.i32(24); c.op(I32_SHL); c.set(4)
    c.get(0); c.i32(1); c.op(I32_ADD); c.set(0)
    c.get(1); c.i32(1); c.op(I32_ADD); c.set(1)
    c.get(3); c.gset(G_A)
    c.get(4); c.gset(G_B)
    c.get(3); c.get(4); c.op(I32_EQ); c.br_if(0)
    c.end(); c.end()
    c.get(2)
    add('repe_cmpsb', [I32, I32, I32], [I32], [(2, I32)], c)

    # repe_cmpsd(esi, edi, ecx) -> ecx
    c = Code()
    c.block(); c.loop()
    c.get(2); c.op(I32_EQZ); c.br_if(1)
    c.get(2); c.i32(1); c.op(I32_SUB); c.set(2)
    c.get(0); c.mem(I32_LOAD); c.set(3)
    c.get(1); c.mem(I32_LOAD); c.set(4)
    c.get(0); c.i32(4); c.op(I32_ADD); c.set(0)
    c.get(1); c.i32(4); c.op(I32_ADD); c.set(1)
    c.get(3); c.gset(G_A)
    c.get(4); c.gset(G_B)
    c.get(3); c.get(4); c.op(I32_EQ); c.br_if(0)
    c.end(); c.end()
    c.get(2)
    add('repe_cmpsd', [I32, I32, I32], [I32], [(2, I32)], c)

    # fcom(a, b) -> FPU status bits C0/C2/C3
    c = Code()
    c.get(0); c.get(1); c.op(F64_LT); c.if_(); c.i32(0x100); c.op(RETURN); c.end()
    c.get(0); c.get(1); c.op(F64_GT); c.if_(); c.i32(0); c.op(RETURN); c.end()
    c.get(0); c.get(1); c.op(F64_EQ); c.if_(); c.i32(0x4000); c.op(RETURN); c.end()
    c.i32(0x4500)
    add('fcom', [F64, F64], [I32], [], c)

    # fxam(x) -> class bits
    c = Code()
    c.get(0); c.op(I64_REINTERPRET_F64); c.set(1)
    c.get(1); c.i64(63); c.op(I64_SHR_U, I32_WRAP_I64); c.i32(9); c.op(I32_SHL); c.set(2)   # C1 = sign
    c.get(0); c.get(0); c.op(F64_NE); c.if_(); c.get(2); c.i32(0x100); c.op(I32_OR); c.op(RETURN); c.end()
    c.get(0); c.op(F64_ABS); c.f64(float('inf')); c.op(F64_EQ); c.if_(); c.get(2); c.i32(0x500); c.op(I32_OR); c.op(RETURN); c.end()
    c.get(0); c.f64(0.0); c.op(F64_EQ); c.if_(); c.get(2); c.i32(0x4000); c.op(I32_OR); c.op(RETURN); c.end()
    c.get(2); c.i32(0x400); c.op(I32_OR)
    add('fxam', [F64], [I32], [(1, I64), (1, I32)], c)

    # frndint(x) honouring the rounding-control field of the control word
    c = Code()
    c.gget(G_CW); c.i32(10); c.op(I32_SHR_U); c.i32(3); c.op(I32_AND); c.set(1)
    c.get(1); c.op(I32_EQZ); c.if_(); c.get(0); c.op(F64_NEAREST); c.op(RETURN); c.end()
    c.get(1); c.i32(1); c.op(I32_EQ); c.if_(); c.get(0); c.op(F64_FLOOR); c.op(RETURN); c.end()
    c.get(1); c.i32(2); c.op(I32_EQ); c.if_(); c.get(0); c.op(F64_CEIL); c.op(RETURN); c.end()
    c.get(0); c.op(F64_TRUNC)
    add('frndint', [F64], [F64], [(1, I32)], c)

    # fist32(x): rounds per control word, out of range or NaN gives the integer indefinite
    c = Code()
    c.get(0); c.call(ctx.rt['frndint']); c.set(0)
    c.get(0); c.f64(-2147483648.0); c.op(F64_GE); c.get(0); c.f64(2147483647.0); c.op(F64_LE); c.op(I32_AND)
    c.if_(); c.get(0); c.op(I32_TRUNC_F64_S); c.op(RETURN); c.end()
    c.i32(0x80000000)
    add('fist32', [F64], [I32], [], c)

    # fist64(x)
    c = Code()
    c.get(0); c.call(ctx.rt['frndint']); c.set(0)
    c.get(0); c.f64(-9223372036854775808.0); c.op(F64_GE); c.get(0); c.f64(9223372036854774784.0); c.op(F64_LE); c.op(I32_AND)
    c.if_(); c.get(0); c.op(I64_TRUNC_F64_S); c.op(RETURN); c.end()
    c.i64(0x8000000000000000)
    add('fist64', [F64], [I64], [], c)

    # ftol(x) -> i64: truncation, what __ftol computes through fistp with RC=3
    c = Code()
    c.get(0); c.op(F64_TRUNC); c.set(0)
    c.get(0); c.f64(-9223372036854775808.0); c.op(F64_GE); c.get(0); c.f64(9223372036854774784.0); c.op(F64_LE); c.op(I32_AND)
    c.if_(); c.get(0); c.op(I64_TRUNC_F64_S); c.op(RETURN); c.end()
    c.i64(0x8000000000000000)
    add('ftol', [F64], [I64], [], c)

    # fld80(addr) -> f64, rounding the 64-bit mantissa to 53 bits
    c = Code()
    c.get(0); c.mem(I64_LOAD); c.set(1)
    c.get(0); c.mem(I32_LOAD16_U, 8); c.set(2)
    c.get(2); c.i32(0x7FFF); c.op(I32_AND); c.set(3)
    c.get(1); c.op(I64_EQZ)
    c.if_()
    c.get(2); c.i32(15); c.op(I32_SHR_U); c.op(I64_EXTEND_I32_U); c.i64(63); c.op(I64_SHL); c.op(F64_REINTERPRET_I64); c.op(RETURN)
    c.end()
    c.get(3); c.i32(0x7FFF); c.op(I32_EQ)
    c.if_()
    c.get(2); c.i32(15); c.op(I32_SHR_U); c.op(I64_EXTEND_I32_U); c.i64(63); c.op(I64_SHL)
    c.i64(0x7FF0000000000000); c.op(I64_OR)
    c.get(1); c.i64(1); c.op(I64_SHL); c.i64(12); c.op(I64_SHR_U); c.op(I64_OR)
    c.op(F64_REINTERPRET_I64); c.op(RETURN)
    c.end()
    # value = mantissa * 2^(exp - 16383 - 63), computed in two exact steps
    c.get(1); c.op(F64_CONVERT_I64_U)
    c.get(3); c.i32(16383 + 63); c.op(I32_SUB); c.op(F64_CONVERT_I32_S); c.call(ctx_math_pow2(ctx))
    c.op(F64_MUL)
    c.set(4)
    c.get(2); c.i32(0x8000); c.op(I32_AND)
    c.if_(); c.get(4); c.op(F64_NEG); c.op(RETURN); c.end()
    c.get(4)
    add('fld80', [I32], [F64], [(1, I64), (2, I32), (1, F64)], c)

    # fst80(addr, v)
    c = Code()
    c.get(1); c.op(I64_REINTERPRET_F64); c.set(2)
    c.get(2); c.i64(52); c.op(I64_SHR_U, I32_WRAP_I64); c.i32(0x7FF); c.op(I32_AND); c.set(3)
    c.get(2); c.i64(63); c.op(I64_SHR_U, I32_WRAP_I64); c.i32(15); c.op(I32_SHL); c.set(4)
    c.get(3); c.op(I32_EQZ)
    c.if_()
    c.get(0); c.i64(0); c.mem(I64_STORE)
    c.get(0); c.get(4); c.mem(I32_STORE16, 8)
    c.op(RETURN)
    c.end()
    c.get(0)
    c.get(2); c.i64(11); c.op(I64_SHL); c.i64(0x8000000000000000); c.op(I64_OR)
    c.mem(I64_STORE)
    c.get(0)
    c.get(3); c.i32(0x7FF); c.op(I32_EQ)
    c.if_()
    c.get(4); c.i32(0x7FFF); c.op(I32_OR); c.set(3)
    c.else_()
    c.get(4); c.get(3); c.i32(16383 - 1023); c.op(I32_ADD); c.op(I32_OR); c.set(3)
    c.end()
    c.get(3)
    c.mem(I32_STORE16, 8)
    add('fst80', [I32, F64], [], [(1, I64), (2, I32)], c)
    return helpers


def ctx_math_pow2(ctx):
    return ctx.rt['pow2']


def build(args):
    t0 = time.time()
    img_path = os.path.join(DEC, 'original/install/spel.dat')
    img = Image(img_path)
    print('spel.dat sha256', img.sha256)
    RP.apply_patches(img)
    noreturn = set()
    with open(os.path.join(DEC, 'decompiled/game__spel.dat/noreturn_functions.csv')) as f:
        for row in csv.DictReader(f):
            if row['external'] == 'false':
                noreturn.add(int(row['address'], 16))
    noreturn |= RP.EXTRA_NORETURN
    rec = Recompiler(img, os.path.join(DEC, 'decompiled/game__spel.dat/functions.csv'), noreturn,
                     ('Unwind@', 'Catch@', '__break'), RP.REPLACEMENTS, debug_ret=not args.no_ret_store,
                     fpu_pc=args.fpu_pc)
    rec.extra_roots = RP.EXTRA_ROOTS
    rec.force_uses = RP.RESUME_ENTRIES
    rec.scan_entries()
    print('entries', len(rec.real_entries), 'address-taken', len(rec.address_taken), '%.1fs' % (time.time() - t0))
    rec.discover()
    print('functions', len(rec.funcs), 'instructions', sum(f.insn_count for f in rec.funcs.values()), '%.1fs' % (time.time() - t0))
    rec.analyse_fpu()
    rec.analyse_inputs()
    uses = sorted('%08x %s %s' % (a, f.name, sorted(f.uses)) for a, f in rec.funcs.items() if f.uses)
    print('functions with register inputs:', len(uses))
    for u in uses:
        print('  ', u)
    for fn in rec.funcs.values():
        rec.analyse_flags(fn)
    print('analysis done %.1fs' % (time.time() - t0))

    ctx = ModuleContext(rec)
    mod = ctx.mod
    host_imp = mod.add_import('env', 'host', [I32, I32, I32, I32, I32], [I32])
    ctx.trace_imp = mod.add_import('env', 'trace', [I32, I32, I32, I32, I32], [])
    rec.trace_set = set(int(x, 16) for x in args.trace.split(',')) if args.trace else set()
    for name, p, r in MATH_IMPORTS:
        ctx.rt[name] = mod.add_import('env', name, p, r)
    n_imports = len(mod.imports)

    # Globals in the order of the G_* constants.
    mod.add_global(I32, 0)    # G_EDX
    mod.add_global(F64, 0.0)  # G_ST0
    mod.add_global(F64, 0.0)  # G_ST1
    mod.add_global(I32, 0x27F)  # G_CW
    mod.add_global(I32, 0)    # G_ESP
    mod.add_global(I32, 0)    # G_A
    mod.add_global(I32, 0)    # G_B
    mod.add_global(I32, 0)    # G_ZF
    for _ in range(4):
        mod.add_global(I32, 0)  # G_EBX, G_EBP, G_ESI, G_EDI: inputs of frame-sharing functions

    helpers = build_runtime_helpers(ctx, n_imports)
    next_idx = n_imports + len(helpers)
    badcall_idx = next_idx
    next_idx += 1
    ctx.thunk_first = next_idx
    next_idx += N_THUNKS
    call_idx = next_idx
    next_idx += 1

    # Thunk ids: imports first, then hooks.
    names = {}
    thunk_id = 0
    for iat_addr, name in sorted(img.iat.items()):
        ctx.imp_thunk[iat_addr] = thunk_id
        names[thunk_id] = name
        # The IAT holds the thunk's fake code address, for code that loads it into a register.
        struct.pack_into('<I', img.mem, iat_addr - img.base, THUNK_BASE + thunk_id)
        thunk_id += 1
    hooks = {}
    for addr, r in sorted(rec.replacements.items()):
        if r.get('hook'):
            pop = r.get('pop', 0)
            if pop is None:
                # A guarded function pops what it popped: read it from its own ret.
                fn = rec.funcs[addr]
                rets = [b.tail_insn for b in fn.blocks.values() if b.kind == 'ret']
                pop = (rets[0].ops[0].imm & 0xFFFF) if rets and rets[0].ops else 0
            hooks[r['hook']] = {'id': thunk_id, 'addr': addr, 'pop': pop}
            ctx.func_idx[addr] = ctx.thunk_first + thunk_id
            names[thunk_id] = 'hook!' + r['hook']
            thunk_id += 1
    first_free_thunk = thunk_id

    # Replacement bodies.
    body_list = []
    for addr, r in sorted(rec.replacements.items()):
        if r.get('body'):
            ctx.func_idx[addr] = next_idx
            next_idx += 1
            body_list.append((addr, r))
    # Lifted functions.
    order = sorted(rec.funcs)
    kept_bodies = {}
    for a in order:
        if a in rec.replacements:
            kept_bodies[a] = next_idx   # direct calls go to the hook, the code map to the body
        else:
            ctx.func_idx[a] = next_idx
        next_idx += 1

    # Emit in index order.
    for name, tidx, loc, code in helpers:
        mod.add_func(tidx, loc, code.b, 'rt_' + name)
    c = Code()
    c.op(UNREACHABLE)
    mod.add_func(ctx.type0, [], c.b, 'BAD_INDIRECT_CALL')
    for tid in range(N_THUNKS):
        c = Code()
        c.i32(tid)
        c.get(0)
        c.get(1)
        c.get(2)
        c.get(3)
        c.call(host_imp)
        c.set(1)
        c.get(0)
        c.i32(POP_TABLE + tid * 4)
        c.mem(I32_LOAD)
        c.op(I32_ADD)
        c.i32(4)
        c.op(I32_ADD)
        c.get(1)
        mod.add_func(ctx.type0, [], c.b, names.get(tid, 'thunk_%d' % tid).replace('!', '_'))
    # __call(addr, esp, eax, ecx, edx) -> eax, with the new esp in G_ESP
    t = mod.add_type([I32, I32, I32, I32, I32], [I32])
    c = Code()
    c.get(1); c.get(2); c.get(3); c.get(4)
    c.get(0); c.i32(MAP_LO); c.op(I32_SUB); c.i32(1); c.op(I32_SHL); c.i32(CODE_MAP); c.op(I32_ADD); c.mem(I32_LOAD16_U)
    c.call_indirect(ctx.type0)
    c.set(2)
    c.gset(G_ESP)
    c.get(2)
    mod.add_func(t, [], c.b, '__call')
    for addr, r in body_list:
        c = Code()
        r['body'](ctx, c)
        mod.add_func(ctx.type0, r.get('locals', []), c.b, r['name'])

    stats = Counter()
    failed = []
    lifted = 0
    for a in order:
        fn = rec.funcs[a]
        try:
            if not fn.fpu_ok:
                raise Unsupported('x87 analysis: ' + '; '.join(fn.notes))
            body = L.FnLifter(ctx, fn).run()
        except (Unsupported, IndexError, KeyError, TypeError, ValueError, AttributeError) as e:
            e = '%s: %s (fpu in=%d out=%d)' % (type(e).__name__, e, fn.fpu_in, fn.fpu_out)
            failed.append((fn.name, str(e)))
            c = Code()
            c.op(UNREACHABLE)
            body = bytes(c.b)
            rec.problems['unsupported'].append(fn.name + ': ' + str(e))
        else:
            lifted += 1
        if fn.mode_b:
            stats['mode_b'] += 1
        mod.add_func(ctx.type0, LOCALS_DECL, body, '%s_%08x' % (fn.name.replace('@', '_').replace('~', '_').replace('<', '').replace('>', ''), a) if not fn.name.startswith('FUN_') else fn.name)
    print('lifted', lifted, 'failed', len(failed), '%.1fs' % (time.time() - t0))
    for name, why in failed[:60]:
        print('  FAIL', name, why)

    # Table: 0 = bad call, then thunks, replacement bodies and lifted functions.
    table = [badcall_idx] + [ctx.thunk_first + k for k in range(N_THUNKS)]
    code_map = [[THUNK_BASE + k, 1 + k] for k in range(N_THUNKS)]
    for addr, idx in sorted(ctx.func_idx.items()):
        if addr in kept_bodies:
            continue
        if idx < ctx.thunk_first + N_THUNKS:
            code_map.append([addr, 1 + idx - ctx.thunk_first])
            continue
        code_map.append([addr, len(table)])
        table.append(idx)
    for addr, idx in sorted(kept_bodies.items()):
        code_map.append([addr, len(table)])
        table.append(idx)
    mod.table_size = len(table)
    if len(table) > 65535:
        raise SystemExit('table too large for 16-bit code map')
    mod.elems.append((0, table))
    mod.mem_pages = MEM_PAGES

    # Data: every non-code section as non-zero runs.
    for name, va, vsize, rawptr, rawsize in img.sections:
        if name == '.text':
            continue
        data = bytes(img.mem[va - img.base:va - img.base + min(max(vsize, rawsize), len(img.mem) - (va - img.base))])
        i = 0
        n = len(data)
        while i < n:
            while i < n and data[i] == 0:
                i += 1
            if i >= n:
                break
            j = i
            zeros = 0
            k = i
            while k < n:
                if data[k] == 0:
                    zeros += 1
                    if zeros >= 64:
                        break
                else:
                    zeros = 0
                    j = k + 1
                k += 1
            mod.data.append((va + i, data[i:j]))
            i = k
    # Absolute references into .text that read data there.
    text_refs = set()
    for fn in rec.funcs.values():
        for b in fn.blocks.values():
            for i in b.insns:
                if i.mn in ('jmp', 'call'):
                    continue
                for o in i.ops:
                    if o.type == R.X86_OP_MEM and (o.disp & 0xFFFFFFFF) and img.text_lo <= (o.disp & 0xFFFFFFFF) < img.text_hi:
                        text_refs.add((i.addr, o.disp & 0xFFFFFFFF))
    if text_refs:
        # Index tables of sparse switches sit in .text after the function: copy them to the same address.
        ranges = []
        for ia, ta in sorted(text_refs, key=lambda x: x[1]):
            lo, hi = ta, min(ta + 2048, img.text_hi)
            if ranges and lo <= ranges[-1][1]:
                ranges[-1][1] = max(ranges[-1][1], hi)
            else:
                ranges.append([lo, hi])
        for lo, hi in ranges:
            mod.data.append((lo, bytes(img.mem[lo - img.base:hi - img.base])))
        print('copied', len(ranges), 'data tables from .text,', sum(h - l for l, h in ranges), 'bytes')
    # Expose globals and memory.
    mod.exports.append(('memory', 2, 0))
    mod.exports.append(('table', 1, 0))
    for nm, g in (('g_edx', G_EDX), ('g_st0', G_ST0), ('g_st1', G_ST1), ('g_cw', G_CW), ('g_esp', G_ESP), ('g_a', G_A),
                  ('g_ebx', R.G_EBX), ('g_ebp', R.G_EBP), ('g_esi', R.G_ESI), ('g_edi', R.G_EDI)):
        mod.exports.append((nm, 3, g))
    mod.exports.append(('__call', 0, call_idx))
    wasm = mod.encode(with_names=not args.no_names)
    os.makedirs(args.out, exist_ok=True)
    with open(os.path.join(args.out, 'spel.wasm'), 'wb') as f:
        f.write(wasm)

    meta = {
        'source': 'spel.dat',
        'sha256': img.sha256,
        'entry': img.entry,
        'imageBase': img.base,
        'layout': {
            'POP_TABLE': POP_TABLE, 'STACK_LOW': STACK_LOW, 'STACK_TOP': STACK_TOP, 'TIB_BASE': TIB_BASE,
            'THUNK_BASE': THUNK_BASE, 'N_THUNKS': N_THUNKS, 'CODE_MAP': CODE_MAP, 'MAP_LO': MAP_LO,
            'HEAP_BASE': HEAP_BASE, 'MEM_PAGES': MEM_PAGES, 'IMAGE_END': img.base + len(img.mem),
        },
        'thunks': {str(k): v for k, v in names.items()},
        'hooks': hooks,
        'firstFreeThunk': first_free_thunk,
        'codeMap': code_map,
        'fpuPrecisionBits': args.fpu_pc,
    }
    with open(os.path.join(args.out, 'spel.meta.json'), 'w') as f:
        json.dump(meta, f)

    # Compile report for debugging. Not used at run time.
    report = {
        'functions': len(rec.funcs),
        'instructions': sum(f.insn_count for f in rec.funcs.values()),
        'mode_b': stats['mode_b'],
        'wasm_bytes': len(wasm),
        'problems': {k: v for k, v in rec.problems.items()},
        'fpu_input_functions': sorted('%08x %s in=%d out=%d' % (a, f.name, f.fpu_in, f.fpu_out) for a, f in rec.funcs.items() if f.fpu_in),
        'fpu_return_functions': sum(1 for f in rec.funcs.values() if f.fpu_out),
        'fpu_notes': sorted('%08x %s: %s' % (a, f.name, n) for a, f in rec.funcs.items() for n in f.notes),
        'indirect_float_calls': sum(len(f.icall_ret) for f in rec.funcs.values()),
    }
    rep_dir = os.path.join(ROOT, 'tools', 'recomp', 'out')
    os.makedirs(rep_dir, exist_ok=True)
    with open(os.path.join(rep_dir, 'report.json'), 'w') as f:
        json.dump(report, f, indent=1)
    print('wasm %.1f MB, %.1fs' % (len(wasm) / 1e6, time.time() - t0))
    for k, v in rec.problems.items():
        print('problem', k, len(v), v[:12])
    print('fpu return functions', report['fpu_return_functions'], 'indirect float calls', report['indirect_float_calls'])
    # Callers of functions that failed analysis, so hand-written helpers can be found.
    callers = Counter()
    for fn in rec.funcs.values():
        for b in fn.blocks.values():
            for i in b.insns:
                if i.mn == 'call' and i.ops[0].type == R.X86_OP_IMM:
                    callers[i.ops[0].imm & 0xFFFFFFFF] += 1
    bad = sorted((a for a, f in rec.funcs.items() if not f.fpu_ok), key=lambda a: -callers[a])
    print('x87-bad functions:', len(bad))
    for a in bad[:80]:
        print('  %08x callers=%d %s %s' % (a, callers[a], rec.funcs[a].name, '; '.join(rec.funcs[a].notes)))


if __name__ == '__main__':
    ap = argparse.ArgumentParser()
    ap.add_argument('--out', default=os.path.join(ROOT, 'public', 'game'))
    ap.add_argument('--no-names', action='store_true')
    ap.add_argument('--no-ret-store', action='store_true')
    ap.add_argument('--fpu-pc', type=int, default=53, choices=(24, 53))
    ap.add_argument('--trace', default='', help='comma-separated function addresses that call env.trace on entry')
    build(ap.parse_args())
