"""Functions the recompiler does not lift from x86.

Each entry maps an original address to one of:
- 'inline': emits wasm at each call site (compiler helpers with odd conventions)
- 'hook':   calls a JavaScript implementation through a host thunk; 'pop' is the
            number of argument bytes the callee removes (stdcall/thiscall)
- 'body':   a hand-written wasm function with the standard signature

Every entry needs a reason. Addresses come from the Ghidra export and were
checked against disassembly.asm.
"""
from recompile import L_ESP, L_EAX, L_ECX, L_EDX, L_EBP, L_T2, G_EDX, G_ST0, G_ST1, TIB_BASE
from wasmgen import *  # noqa: F403


def _chkstk_inline(lift, i, block, index):
    # _chkstk (0x00559400) only probes stack pages and moves esp down by eax.
    # The call's return-address push and pop cancel out.
    c = lift.c
    c.get(L_ESP)
    c.get(L_EAX)
    c.op(I32_SUB)
    c.set(L_ESP)


def _eh_prolog_inline(lift, i, block, index):
    # __EH_prolog (0x0055B39C): builds the caller's frame and C++ exception record.
    # It moves ebp for its caller, which the callee-saved model cannot express:
    #   [esp-4] = ebp, [esp-8] = -1, [esp-12] = eax (handler), [esp-16] = fs:[0]
    #   fs:[0] = esp-16, ebp = esp-4, esp = esp-16
    c = lift.c
    c.get(L_ESP)
    c.i32(4)
    c.op(I32_SUB)
    c.set(L_T2)
    c.get(L_T2)
    c.get(L_EBP)
    c.mem(I32_STORE)
    c.get(L_T2)
    c.set(L_EBP)
    c.get(L_T2)
    c.i32(4)
    c.op(I32_SUB)
    c.i32(-1)
    c.mem(I32_STORE)
    c.get(L_T2)
    c.i32(8)
    c.op(I32_SUB)
    c.get(L_EAX)
    c.mem(I32_STORE)
    c.get(L_T2)
    c.i32(12)
    c.op(I32_SUB)
    c.set(L_ESP)
    c.get(L_ESP)
    c.i32(TIB_BASE)
    c.mem(I32_LOAD)
    c.mem(I32_STORE)
    c.i32(TIB_BASE)
    c.get(L_ESP)
    c.mem(I32_STORE)


def _ftol_inline(lift, i, block, index):
    # __ftol (0x00558524): truncates ST(0) to edx:eax, pops it, restores the control word.
    # The argument was moved to G_ST0 by the x87 call convention.
    c = lift.c
    rt = lift.ctx.rt
    c.gget(G_ST0)
    c.call(rt['ftol'])
    c.set(lift_il(lift))
    c.get(lift_il(lift))
    c.op(I32_WRAP_I64)
    c.set(L_EAX)
    if lift.edx_live(block, index + 1):
        c.get(lift_il(lift))
        c.i64(32)
        c.op(I64_SHR_U, I32_WRAP_I64)
        c.set(L_EDX)


def _unary_math(name):
    """_CI* helpers: argument and result in ST(0), which the call convention passes in G_ST0."""
    def emit(lift, i, block, index):
        c = lift.c
        c.gget(G_ST0)
        c.call(lift.ctx.rt[name])
        c.gset(G_ST0)
    return emit


def _binary_math(name):
    """_CIpow style: x in ST(1), y in ST(0). G_ST0 holds ST(0), G_ST1 holds ST(1)."""
    def emit(lift, i, block, index):
        c = lift.c
        c.gget(G_ST1)
        c.gget(G_ST0)
        c.call(lift.ctx.rt[name])
        c.gset(G_ST0)
    return emit


def lift_il(lift):
    from recompile import L_IA
    return L_IA


def memcpy_body(ctx, c):
    """memmove semantics for memcpy(dst, src, n) and memmove: cdecl, returns dst."""
    # Stack on entry: [esp] return, [esp+4] dst, [esp+8] src, [esp+12] n
    c.get(0)
    c.mem(I32_LOAD, 4)
    c.get(0)
    c.mem(I32_LOAD, 8)
    c.get(0)
    c.mem(I32_LOAD, 12)
    c.memory_copy()
    c.get(0)
    c.i32(4)
    c.op(I32_ADD)
    c.get(0)
    c.mem(I32_LOAD, 4)


def memset_body(ctx, c):
    c.get(0)
    c.mem(I32_LOAD, 4)
    c.get(0)
    c.mem(I32_LOAD8_U, 8)
    c.get(0)
    c.mem(I32_LOAD, 12)
    c.memory_fill()
    c.get(0)
    c.i32(4)
    c.op(I32_ADD)
    c.get(0)
    c.mem(I32_LOAD, 4)


def strrchr_body(ctx, c):
    """strrchr(s, ch): the original scans backwards with the direction flag set."""
    # locals: 4 = cursor, 5 = result, 6 = current byte
    c.get(0)
    c.mem(I32_LOAD, 4)
    c.set(4)
    c.i32(0)
    c.set(5)
    c.loop()
    c.get(4)
    c.mem(I32_LOAD8_U)
    c.set(6)
    c.get(6)
    c.get(0)
    c.mem(I32_LOAD8_U, 8)
    c.op(I32_EQ)
    c.if_()
    c.get(4)
    c.set(5)
    c.end()
    c.get(4)
    c.i32(1)
    c.op(I32_ADD)
    c.set(4)
    c.get(6)
    c.br_if(0)
    c.end()
    c.get(0)
    c.i32(4)
    c.op(I32_ADD)
    c.get(5)


# Particle functions catch their own exceptions, log and carry on (win32-surface.md C5).
# Everything else that throws ends in a fatal message. These run under a JavaScript
# try/catch that returns from the function when something inside it throws.
GUARDED = [0x00459280, 0x0045A500, 0x0045ADA0, 0x0045C4A0, 0x0045CD70, 0x0045D170, 0x0045DC00, 0x0045DCE0,
           0x0045DE10, 0x0045E780, 0x0045F2F0, 0x0045FD50, 0x00460070, 0x00460F90, 0x004618A0, 0x00462180]

REPLACEMENTS = {
    **{a: {'hook': 'guard_%08x' % a, 'pop': None, 'keep_body': True, 'guarded': True} for a in GUARDED},
    0x00559400: {'inline': _chkstk_inline, 'name': '_chkstk'},
    0x0055B39C: {'inline': _eh_prolog_inline, 'name': '__EH_prolog'},
    0x00558524: {'inline': _ftol_inline, 'name': '__ftol', 'fpu': (1, 0)},
    0x005593C0: {'hook': 'CxxThrowException', 'pop': 0},
    0x0055B100: {'hook': 'longjmp', 'pop': 0},
    # The frame clock. Fixed tick: the ring of FUN_004a6700 fed with exactly T per sample, in
    # source/host/race.js, without the rounding noise of the original's float counter.
    0x004A6700: {'hook': 'updateClock', 'pop': 0},
    # Pause and quit dialogs spin on the keyboard inside one call, which would freeze a
    # browser tab. Race.tick runs the same steps across ticks: see source/host/race.js.
    0x0044CA80: {'hook': 'pauseBegin', 'pop': 0},
    # The HUD's draw call: the host marks the pass and moves groups to the screen edges.
    0x00484FC0: {'hook': 'hudDraw', 'pop': 0, 'keep_body': True},
    0x0051E7A0: {'hook': 'setjmpGuardA', 'pop': 0, 'keep_body': True},
    0x005251C0: {'hook': 'setjmpGuardB', 'pop': 0, 'keep_body': True},
    # WinMain: its loop must not block the browser. race.js runs the same steps per tick.
    0x00458270: {'hook': 'WinMain', 'pop': 16},
    # x87 calling convention helpers from the C runtime. Their bodies jump between
    # labels with flags and x87 values live across calls, so they map to Math instead.
    0x00558550: {'inline': _unary_math('acos'), 'name': '_CIacos', 'fpu': (1, 1)},
    0x00559E50: {'inline': _unary_math('asin'), 'name': '_CIasin', 'fpu': (1, 1)},
    0x00559960: {'inline': _binary_math('pow'), 'name': '_CIpow', 'fpu': (2, 1)},
    0x0055B700: {'body': memset_body, 'name': '_memset'},
    # memcpy and memmove: optimised asm with computed jumps and the direction flag.
    0x005580E0: {'body': memcpy_body, 'name': '_memcpy'},
    0x0055B3C0: {'body': memcpy_body, 'name': '_memmove'},
    0x00559650: {'body': strrchr_body, 'name': '_strrchr', 'locals': [(3, I32)]},
    # sinh, cosh, tanh entry points of the C runtime: hand-written x87 dispatch.
    0x0055AAF8: {'inline': _unary_math('sinh'), 'name': '_CIsinh', 'fpu': (1, 1)},
    0x0055AB02: {'inline': _unary_math('cosh'), 'name': '_CIcosh', 'fpu': (1, 1)},
    0x0055AB09: {'inline': _unary_math('tanh'), 'name': '_CItanh', 'fpu': (1, 1)},
}

EXTRA_NORETURN = {0x005593C0, 0x0055B100}

# setjmp/longjmp in qhull: Ipion builds convex hulls with it, and flat input ends in
# longjmp as a normal path. Wasm cannot jump back into a frame, so the two functions
# that call setjmp run under a JavaScript try/catch (the hook). A longjmp throws, and
# the hook then enters a second copy of the function from the setjmp return address.
RESUME_ENTRIES = {0x0051E837, 0x005251DD}


# Called from the host in place of WinMain, see source/host/race.js.
EXTRA_ROOTS = GUARDED + [0x00448CD0, 0x004580E0, 0x0044CF60, 0x0044CB80, 0x004517F0, 0x0044E180, 0x00458020,
               0x004C5E40, 0x00458400, 0x0041C150, 0x00458210, 0x0051E837, 0x005251DD, 0x0051E7A0, 0x005251C0, 0x00484FC0,
               0x004CE0D0, 0x004CE030, 0x00448330, 0x0042E440, 0x004483A0, 0x0042E4A0, 0x004A6840, 0x0044CDA0]


# Owner's no-CD patch from A2-Racer-4-Fixes part 7: the disc search stops with an
# error when it finds no CD-ROM drive; this makes that path return. The browser has no disc.
#
# Owner's traffic_mass from the same patch, part 9: the two functions that push traffic and path
# vehicles once per tick, without a time step, take their mass from 1/x. They now read the
# numerator from a cell the host fills with min(1, tick seconds * 25), so traffic gets one whole
# push per 1/25 s at any tick rate. Without it the nose of traffic lifts at 60 ticks per second:
# docs/original-behavior.md, traffic pushes.
TRAFFIC_SHARE = 0x003F1000
PATCHES = [
    (0x004CD478, bytes.fromhex('6870'), bytes.fromhex('EBB6')),
    (0x00416004, bytes.fromhex('18635700'), TRAFFIC_SHARE.to_bytes(4, 'little')),
    (0x00428991, bytes.fromhex('18635700'), TRAFFIC_SHARE.to_bytes(4, 'little')),
]


def apply_patches(img):
    """Byte patches applied to the image before lifting."""
    for va, old, new in PATCHES:
        off = va - img.base
        if bytes(img.mem[off:off + len(old)]) != old:
            raise SystemExit('patch mismatch at %08x' % va)
        img.mem[off:off + len(new)] = new
