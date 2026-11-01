#!/usr/bin/env python3
"""Runs the original spel.dat under Wine in a throwaway prefix and samples its memory.

Runs on the host (not inside the distrobox), started by run.sh, which sets the isolated
environment from env.sh and the memory limit. One invocation is one start of the game: it starts
its own Xvfb and wineserver, plays one scripted scenario with XTEST key events and removes
everything it started before it exits. Addresses: docs/research/sim-vehicle.md C11, sim-timing.md C1.

  refwine.py --name launch-go --gas-at go+0.0 --seconds 12
  refwine.py --name reverse --down-at go+2 --seconds 6
"""
import argparse
import json
import os
import re
import shutil
import signal
import struct
import subprocess
import sys
import time

U32 = struct.Struct('<I')
I32 = struct.Struct('<i')
F32 = struct.Struct('<f')
F64 = struct.Struct('<d')

ADDR = {
    'state': 0x6fb8a0,        # game state, FUN_0044cda0
    'tick': 0x6fb8dc,         # frame counter, end of handle_game
    'player': 0x6fba58,       # player object index
    'hud': 0x6fba64,          # HUD speed, km/h
    'started': 0x6fba9c,      # 1 after GO, FUN_0044cda0(0)
    'ctrl': 0x6fbabc,         # steer, brake, gas (f32)
    'cars': 0x715e50,
    'objs': 0x73b0d0,
    'overlay': 0x71277c,
    'count_t': 0x6c3b98,      # countdown accumulator f32, phase i32
    'clock': 0x7128b0,        # +0 ok, +4 freq, +8 time, +0xC dt
    'ring': 0x712868,         # pointer to the 4 raw steps (operator new, FUN_004a65e0)
    'ring_i': 0x7128c0,
    'ema': 0x715b20,          # physics delta
    'ema_n': 0x715eac,
    'focus': 0x740dfc,        # WM_ACTIVATEAPP state
}

COLUMNS = [
    't', 'tick', 'gtime', 'dt', 'raw', 'ema', 'overlay', 'phase', 'started', 'state',
    'steer', 'brake', 'gas', 'hud', 'fwd', 'side', 'vert', 'gear', 'rpm',
    'om0', 'om1', 'om2', 'om3', 'lim0', 'lim2', 'tq0', 'tq2',
    'x', 'y', 'z', 'fwd_y', 'mstate', 'core_y', 'core_speed', 'core_rot', 'air', 'contact',
    'ms0', 'ms1', 'ms2', 'ms3',
]


class Mem:
    def __init__(self, pid):
        self.fd = os.open(f'/proc/{pid}/mem', os.O_RDONLY)

    def read(self, addr, n):
        return os.pread(self.fd, n, addr)

    def u32(self, addr):
        return U32.unpack(os.pread(self.fd, 4, addr))[0]

    def i32(self, addr):
        return I32.unpack(os.pread(self.fd, 4, addr))[0]

    def f32(self, addr):
        return F32.unpack(os.pread(self.fd, 4, addr))[0]

    def close(self):
        os.close(self.fd)


def read_row(m, t):
    """One sample. Returns a list in the order of COLUMNS. Pointer chains may be unset during loading."""
    a = ADDR
    g = m.read(a['state'], 0x250)            # 0x6fb8a0..0x6fbaf0
    base = a['state']
    tick = U32.unpack_from(g, a['tick'] - base)[0]
    state = I32.unpack_from(g, 0)[0]
    started = I32.unpack_from(g, a['started'] - base)[0]
    hud = I32.unpack_from(g, a['hud'] - base)[0]
    steer, brake, gas = struct.unpack_from('<fff', g, a['ctrl'] - base)
    air = F32.unpack_from(g, 0x6fbaec - base)[0]
    clock = m.read(a['clock'], 0x14)
    gtime, dt = struct.unpack_from('<ff', clock, 8)
    ring_i = I32.unpack_from(clock, 0x10)[0]
    ring = m.u32(a['ring'])
    raw = F32.unpack(m.read(ring + 4 * ((ring_i - 1) & 3), 4))[0] if ring else None
    ema = m.f32(a['ema'])
    overlay = m.i32(a['overlay'])
    _, phase = struct.unpack('<fi', m.read(a['count_t'], 8))
    row = [round(t, 5), tick, gtime, dt, raw, ema, overlay, phase, started, state,
           steer, brake, gas, hud] + [None] * (len(COLUMNS) - 14)
    row[COLUMNS.index('air')] = air
    try:
        player = I32.unpack_from(g, a['player'] - base)[0]
        cars = m.u32(a['cars'])
        if not cars:
            return row
        car_b = m.read(cars + player * 0xF0, 0xF0)
        fwd = F32.unpack_from(car_b, 0xC4)[0]
        side = F32.unpack_from(car_b, 0xBC)[0]
        vert = F32.unpack_from(car_b, 0xC0)[0]
        row[COLUMNS.index('fwd')] = fwd
        row[COLUMNS.index('side')] = side
        row[COLUMNS.index('vert')] = vert
        objs = m.u32(a['objs'])
        obj_i = I32.unpack_from(car_b, 0x24)[0]
        ob = m.read(objs + obj_i * 0xA9 + 0x30, 0x1C)     # forward row, then position row
        row[COLUMNS.index('fwd_y')] = F32.unpack_from(ob, 4)[0]
        row[COLUMNS.index('x')], row[COLUMNS.index('y')], row[COLUMNS.index('z')] = struct.unpack_from('<fff', ob, 0x10)
        phys = U32.unpack_from(car_b, 0x10)[0]
        if not phys:
            return row
        pb = m.read(phys, 0xF0)
        row[COLUMNS.index('gear')] = I32.unpack_from(pb, 0xE4)[0]
        row[COLUMNS.index('rpm')] = F32.unpack_from(pb, 0xBC)[0]
        ivp = U32.unpack_from(pb, 0x30)[0]
        wrap = U32.unpack_from(pb, 8)[0]
        core = m.u32(wrap + 0xA4)
        cb = m.read(core + 0x5C, 0x60)
        row[COLUMNS.index('mstate')] = cb[0]
        sx, sy, sz = struct.unpack_from('<fff', cb, 0xA4 - 0x5C)
        rx, ry, rz = struct.unpack_from('<fff', cb, 0x94 - 0x5C)
        row[COLUMNS.index('core_speed')] = (sx * sx + sy * sy + sz * sz) ** 0.5
        row[COLUMNS.index('core_rot')] = (rx * rx + ry * ry + rz * rz) ** 0.5
        row[COLUMNS.index('core_y')] = F64.unpack(m.read(core + 0x190, 8))[0]
        acts = struct.unpack('<IIII', m.read(ivp + 0x44, 16))
        for i in range(4):
            ab = m.read(acts[i] + 0x70, 0x28)
            row[COLUMNS.index(f'om{i}')] = F32.unpack_from(ab, 0x24)[0]
            if i == 0 or i == 2:
                row[COLUMNS.index(f'lim{i}')] = F32.unpack_from(ab, 0)[0]
                row[COLUMNS.index(f'tq{i}')] = F32.unpack_from(ab, 4)[0]
        contact = 0
        wheels = struct.unpack_from('<IIII', pb, 0x34)
        for i in range(4):
            contact |= (m.read(wheels[i] + 0x25, 1)[0] & 1) << i
            # Movement state of the wheel's own core: same chain as the chassis, phys+8 -> +0xA4.
            row[COLUMNS.index(f'ms{i}')] = m.read(m.u32(m.u32(wheels[i] + 8) + 0xA4) + 0x5C, 1)[0]
        row[COLUMNS.index('contact')] = contact
    except (OSError, struct.error):
        pass
    return row


def compact(row):
    """Floats were f32 in the game, so 8 significant digits lose nothing that matters; gtime keeps 10."""
    return [float(f'{x:.8g}') if isinstance(x, float) else x for x in row]


def find_wheeled_cars(m):
    """Indices of the object table with a wheeled car wrapper: vtable 0x578568 (sim-vehicle.md C1)."""
    cars = m.u32(ADDR['cars'])
    data = m.read(cars, 1500 * 0xF0)
    out = []
    for i in range(len(data) // 0xF0):
        off = i * 0xF0
        phys = U32.unpack_from(data, off + 0x10)[0]
        if not phys or I32.unpack_from(data, off + 0x18)[0] != 1:
            continue
        try:
            ivp = m.u32(phys + 0x30)
            if ivp and m.u32(ivp) == 0x578568:
                out.append(i)
        except (OSError, struct.error):
            pass
    return out


def car_snapshot(m, i):
    cars = m.u32(ADDR['cars'])
    objs = m.u32(ADDR['objs'])
    b = m.read(cars + i * 0xF0, 0xF0)
    p = m.read(objs + I32.unpack_from(b, 0x24)[0] * 0xA9 + 0x34, 0x18)
    return [round(F32.unpack_from(b, 0xC4)[0], 3)] + [round(x, 2) for x in struct.unpack_from('<fff', p, 0xC)] + \
           [round(F32.unpack_from(p, 0)[0], 3)]


def sample_racers(m, racers, t, meta):
    try:
        meta.setdefault('racers', []).append([round(t, 3)] + [car_snapshot(m, i) for i in racers])
    except (OSError, struct.error):
        pass


TRAFFIC_SLOTS = 0x5d1ba8   # 50 slots of 0x38 bytes, object index first (tools/check-traffic.mjs)


def sample_traffic(m, t, meta):
    try:
        slots = m.read(TRAFFIC_SLOTS, 50 * 0x38)
        out = [round(t, 3)]
        for s in range(50):
            i = I32.unpack_from(slots, s * 0x38)[0]
            if i > 0:
                out.append([s] + car_snapshot(m, i))
        meta.setdefault('traffic', []).append(out)
    except (OSError, struct.error):
        pass


def spawn_env():
    env = dict(os.environ)
    env['NOCD'] = 'C'                       # FUN_004cd3b0: skips the CD search, first letter is the drive
    return env


def find_game_pid(prefix):
    """The process that has our spel.exe mapped at its preferred base, in our prefix."""
    want = os.path.join(prefix, 'drive_c/A2R4/spel.exe')
    for name in os.listdir('/proc'):
        if not name.isdigit():
            continue
        try:
            with open(f'/proc/{name}/maps') as f:
                first = f.read(8192)
        except OSError:
            continue
        for line in first.splitlines():
            if line.startswith('00400000-') and line.endswith(want):
                return int(name)
    return None


class Keys:
    """XTEST key events to our Xvfb. python-xlib, host side."""

    def __init__(self, dpy):
        from Xlib import XK, X, display
        from Xlib.ext import xtest
        self.X, self.XK, self.xtest = X, XK, xtest
        self.d = display.Display(dpy)
        self.root = self.d.screen().root
        self.down = set()

    def focus(self):
        """Gives the Wine desktop window the X input focus and puts the pointer inside it."""
        best = None
        for w in self.root.query_tree().children:
            g = w.get_geometry()
            attrs = w.get_attributes()
            if attrs.map_state == self.X.IsViewable and g.width >= 640:
                best = w
        if best is not None:
            self.d.set_input_focus(best, self.X.RevertToParent, self.X.CurrentTime)
            self.xtest.fake_input(self.d, self.X.MotionNotify, x=700, y=600)
            self.d.sync()
        return best is not None

    def code(self, name):
        return self.d.keysym_to_keycode(self.XK.string_to_keysym(name))

    def press(self, name):
        self.xtest.fake_input(self.d, self.X.KeyPress, self.code(name))
        self.d.sync()
        self.down.add(name)

    def release(self, name):
        self.xtest.fake_input(self.d, self.X.KeyRelease, self.code(name))
        self.d.sync()
        self.down.discard(name)

    def release_all(self):
        for n in list(self.down):
            self.release(n)


def parse_at(spec):
    """'go+0.5', 'go-1.0', 'ov8', 'ov8+0.2', 'start+1', 'none'. Returns (anchor, offset)."""
    if spec in (None, 'none'):
        return None
    for sep in ('+', '-'):
        if sep in spec:
            a, b = spec.split(sep, 1)
            return a, float(sep + b)
    return spec, 0.0


def restore_inis(game_dir, install):
    for name in ('game.ini', 'raser.ini'):
        shutil.copy2(os.path.join(install, name), os.path.join(game_dir, name))


def set_resolution(game_dir, value):
    """[PROGRAM] RESOLUTION in the working copy: 0 and 1 are the 8-bit path, 3 is the shipped one."""
    path = os.path.join(game_dir, 'raser.ini')
    with open(path, 'rb') as f:
        text = f.read()
    text, n = re.subn(rb'(?im)^(\s*RESOLUTION\s*=\s*)\S+', rb'\g<1>' + str(value).encode(), text)
    if n < 1:
        sys.exit('no RESOLUTION key in raser.ini')
    with open(path, 'wb') as f:
        f.write(text)


def wait_gone(pids, seconds):
    end = time.monotonic() + seconds
    while time.monotonic() < end:
        alive = [p for p in pids if os.path.exists(f'/proc/{p}') and not is_zombie(p)]
        if not alive:
            return []
        time.sleep(0.05)
    return alive


def is_zombie(pid):
    try:
        with open(f'/proc/{pid}/stat') as f:
            return f.read().rsplit(')', 1)[1].split()[0] == 'Z'
    except OSError:
        return True


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--name', required=True)
    ap.add_argument('--out', required=True, help='evidence folder for raw samples')
    ap.add_argument('--install', required=True, help='shipped game folder, read-only, for the two ini files')
    ap.add_argument('--gas-at', default='none', help='go+X, go-X, ov8, ov9, ov10, start+X')
    ap.add_argument('--gas-for', type=float, default=12.0, help='seconds to hold the gas')
    ap.add_argument('--down-at', default='none', help='same anchors, hold the Down arrow')
    ap.add_argument('--down-for', type=float, default=6.0)
    ap.add_argument('--down-after-gas', type=float, default=None, help='press Down this long after the gas release')
    ap.add_argument('--after', type=float, default=1.0, help='seconds to sample after the last key event')
    ap.add_argument('--seconds', type=float, default=0.0, help='end this long after GO when no key script ends it')
    ap.add_argument('--racers', action='store_true', help='log all wheeled cars at 10 Hz')
    ap.add_argument('--traffic', action='store_true', help='with --racers, log the traffic slots too')
    ap.add_argument('--pace', type=float, default=0.0, help='limit to this many ticks per second with SIGSTOP/SIGCONT, 0 = none')
    ap.add_argument('--shot', action='append', default=[], help='anchor for a screenshot, e.g. go+2')
    ap.add_argument('--load-timeout', type=float, default=90.0)
    ap.add_argument('--max-seconds', type=float, default=120.0)
    ap.add_argument('--wine-debug', default='-all')
    ap.add_argument('--resolution', type=int, default=None, help='[PROGRAM] RESOLUTION for this start')
    args = ap.parse_args()
    # A timeout from run.sh ends the run through the finally block below, so the cleanup still happens.
    signal.signal(signal.SIGTERM, lambda *_: sys.exit(143))

    prefix = os.environ['WINEPREFIX']
    refwine = os.environ['REFWINE']
    dpy = os.environ['DISPLAY']
    game_dir = os.path.join(prefix, 'drive_c/A2R4')
    os.makedirs(args.out, exist_ok=True)
    restore_inis(game_dir, args.install)
    if args.resolution is not None:
        set_resolution(game_dir, args.resolution)
    env = spawn_env()
    env['WINEDEBUG'] = args.wine_debug

    log = open(os.path.join(refwine, 'logs', f'{args.name}.wine.log'), 'wb')
    if os.path.exists(f'/tmp/.X11-unix/X{dpy[1:]}') or os.path.exists(f'/tmp/.X{dpy[1:]}-lock'):
        sys.exit(f'display {dpy} is in use')
    xv = subprocess.Popen(['Xvfb', dpy, '-screen', '0', '1024x768x24', '-nolisten', 'tcp'],
                          stdout=log, stderr=log)
    game = None
    pid = None
    keys = None
    rows = []
    meta = {
        'name': args.name, 'args': vars(args), 'wallStart': time.time(), 'columns': COLUMNS,
        'clockStart': os.environ.get('REFWINE_CLOCK_START'),
        'events': [], 'overlay': [],
    }
    stopped = False
    try:
        for _ in range(100):
            if os.path.exists(f'/tmp/.X11-unix/X{dpy[1:]}'):
                break
            time.sleep(0.05)
        t0 = time.monotonic()
        meta['events'].append(['launch', 0.0])
        game = subprocess.Popen(['wine', 'explorer', '/desktop=a2,1024x768', 'spel.exe'],
                                cwd=game_dir, env=env, stdout=log, stderr=log)
        deadline = t0 + args.load_timeout
        while pid is None and time.monotonic() < deadline:
            pid = find_game_pid(prefix)
            if pid is None:
                time.sleep(0.05)
        if pid is None:
            meta['error'] = 'spel.exe process not found'
            return
        meta['pid'] = pid
        meta['events'].append(['process', time.monotonic() - t0])
        with open(f'/proc/{pid}/maps') as f:
            meta['maps_head'] = [ln for ln in f.read(8192).splitlines() if 'spel.exe' in ln]
        m = Mem(pid)
        keys = Keys(dpy)

        # Everything below is one polling loop. Unlimited: one sample per tick (the counter is raised at
        # the very end of handle_game, after the physics step) and at least every 10 ms. Limited: the
        # trigger is the game's clock field, written at the very start of the next pass, so the stop
        # always lands behind the clock read and before that pass reaches its physics step. A stop
        # that landed in front of the clock read would split one time step in two.
        gas_at = parse_at(args.gas_at)
        down_at = parse_at(args.down_at)
        shots = [parse_at(s) for s in args.shot]
        anchors = {}
        gas_on = gas_off = down_on = down_off = None
        last_tick = None
        last_gt = None
        clock_inits = 0
        last_sample = 0.0
        last_overlay = None
        focus_left = 2
        focus_next = 0.0
        pace_period = 1.0 / args.pace if args.pace else 0.0
        pace_next = None
        hard_end = t0 + args.max_seconds
        end_at = None
        tick_addr = ADDR['tick']
        gt_addr = ADDR['clock'] + 8
        screenshotters = []
        racers = None
        last_racers = 0.0
        while True:
            now = time.monotonic()
            if now > hard_end:
                meta['error'] = 'max-seconds reached'
                break
            if end_at is not None and now >= end_at:
                break
            try:
                tick = m.u32(tick_addr)
                gt = m.read(gt_addr, 4)
            except OSError:
                meta['error'] = 'process gone'
                break
            new_tick = tick != last_tick
            if gt != last_gt:
                if last_gt is not None:
                    clock_inits += 1       # 1 = FUN_004a65e0 ran, 2 = first pass, and so on
                last_gt = gt
                new_clock = clock_inits >= 2
            else:
                new_clock = False
            trigger = new_clock if pace_period else new_tick
            if trigger and pace_period:
                os.kill(pid, signal.SIGSTOP)
                stopped = True
            if trigger or now - last_sample >= 0.01 and not (pace_period and clock_inits >= 2):
                t = now - t0
                try:
                    row = read_row(m, t)
                except OSError:
                    meta['error'] = 'process gone'
                    break
                rows.append(row)
                last_sample = now
                last_tick = tick
                ov = row[COLUMNS.index('overlay')]
                if ov != last_overlay:
                    meta['overlay'].append([t, tick, ov])
                    last_overlay = ov
                    anchors.setdefault(f'ov{ov}', now)
                    if ov == 11:
                        anchors.setdefault('go', now)
                if row[COLUMNS.index('started')] == 1:
                    anchors.setdefault('start', now)
                if tick >= 1:
                    anchors.setdefault('tick1', now)

                # Work below touches the X server or the disk. Limited, it runs while the game is stopped.
                if 'tick1' in anchors and focus_left and now >= focus_next:
                    # The desktop window has to hold the X focus for DirectInput to see the keys.
                    keys.focus()
                    focus_left -= 1
                    focus_next = now + 0.5

                def due(spec):
                    return spec is not None and spec[0] in anchors and now >= anchors[spec[0]] + spec[1]

                if gas_at and gas_on is None and due(gas_at):
                    keys.press('Up')
                    gas_on = now
                    gas_off = now + args.gas_for
                    meta['events'].append(['gas_on', now - t0, tick])
                if gas_off is not None and now >= gas_off and 'Up' in keys.down:
                    keys.release('Up')
                    meta['events'].append(['gas_off', now - t0, tick])
                    if args.down_after_gas is not None:
                        down_at = ('abs', 0.0)
                        anchors['abs'] = now + args.down_after_gas
                if down_at and down_on is None and due(down_at):
                    keys.press('Down')
                    down_on = now
                    down_off = now + args.down_for
                    meta['events'].append(['down_on', now - t0, tick])
                if down_off is not None and now >= down_off and 'Down' in keys.down:
                    keys.release('Down')
                    meta['events'].append(['down_off', now - t0, tick])
                for i, sh in enumerate(shots):
                    if sh and due(sh):
                        shots[i] = None
                        png = os.path.join(args.out, f'{args.name}-{sh[0]}{sh[1]:+.1f}.png')
                        screenshotters.append(subprocess.Popen(['import', '-display', dpy, '-window', 'root', png]))
                        meta['events'].append(['shot', now - t0, tick, os.path.basename(png)])
                last_key_done = (not gas_at or gas_off is not None and 'Up' not in keys.down) and \
                                (not down_at or down_off is not None and 'Down' not in keys.down)
                if end_at is None and last_key_done and (gas_at or down_at):
                    end_at = now + args.after
                if end_at is None and args.seconds and 'go' in anchors and now >= anchors['go'] + args.seconds:
                    end_at = now
                if args.racers and tick > 5 and now - last_racers >= 0.1:
                    last_racers = now
                    if racers is None:
                        racers = find_wheeled_cars(m)
                        meta['racerIndices'] = racers
                    sample_racers(m, racers, t, meta)
                    if args.traffic:
                        sample_traffic(m, t, meta)

            if stopped:
                if pace_next is None:
                    pace_next = now + pace_period
                while time.monotonic() < pace_next:
                    pass
                os.kill(pid, signal.SIGCONT)
                stopped = False
                pace_next += pace_period
                if time.monotonic() > pace_next:       # never bank time: a slow frame is simply slow
                    meta['events'].append(['pace_late', time.monotonic() - t0, tick])
                    pace_next = time.monotonic() + pace_period
            else:
                time.sleep(0.0001)
        for sh in screenshotters:
            sh.wait(timeout=10)
        meta['anchors'] = {k: v - t0 for k, v in anchors.items()}
        meta['clock'] = {'ok': m.u32(ADDR['clock']), 'freq': m.f32(ADDR['clock'] + 4)}
        # What the game ended up with: sound object, display mode, 3D flag, view distance.
        meta['final'] = {
            'directsound': m.u32(0x740924), 'mode': [m.i32(0x5b3798), m.i32(0x5b379c), m.i32(0x5b37a0)],
            'hardware3d': m.i32(0x6fb8d0), 'visibleChunks': m.i32(0x6fb8b0), 'active': m.i32(ADDR['focus']),
        }
    finally:
        if stopped and pid:
            try:
                os.kill(pid, signal.SIGCONT)
            except OSError:
                pass
        if keys is not None:
            try:
                keys.release_all()
                keys.d.close()
            except Exception:
                pass
        meta['wallEnd'] = time.time()
        with open(os.path.join(args.out, f'{args.name}.json'), 'w') as f:
            json.dump({**meta, 'rows': [compact(r) for r in rows]}, f, separators=(',', ':'))
        # Our wineserver only: WINEPREFIX points at the throwaway prefix.
        subprocess.run(['wineserver', '-k'], env=env, timeout=20, check=False)
        subprocess.run(['wineserver', '-w'], env=env, timeout=20, check=False)
        if game is not None:
            try:
                game.wait(timeout=5)
            except subprocess.TimeoutExpired:
                game.kill()
        xv.terminate()
        try:
            xv.wait(timeout=5)
        except subprocess.TimeoutExpired:
            xv.kill()
        log.close()


if __name__ == '__main__':
    main()
