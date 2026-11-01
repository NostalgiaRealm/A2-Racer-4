#!/usr/bin/env python3
"""Boots the throwaway Windows 98 machine, which starts the game from its StartUp folder, and takes
screenshots of the guest's screen, with key presses by XTEST. Nothing here reads the guest's memory.
Runs inside the scope of run.sh, with its own Xvfb and the 86Box Flatpak."""
import argparse
import json
import os
import signal
import subprocess
import sys
import time

from Xlib import X, display
from Xlib.ext import xtest
from Xlib.XK import string_to_keysym

HERE = os.path.dirname(os.path.abspath(__file__))
PROJECT = os.path.dirname(os.path.dirname(HERE))
INSTALL = os.path.join(PROJECT, 'original-game-decompiled/original/install')
REFBOX = os.environ['REFBOX']
VM = os.path.join(REFBOX, 'vm')
DISK = os.path.join(VM, 'win98.img') + '@@32256'
ENV_M = dict(os.environ, MTOOLS_SKIP_CHECK='1')
APP = 'net._86box._86Box'

BAT = '\r\n'.join(['@echo off', 'cd \\A2R4', 'set NOCD=C', 'SPEL.EXE', 'cls', 'exit', ''])


def mcopy(data, target):
    path = os.path.join(REFBOX, 'tmp-upload')
    with open(path, 'wb') as f:
        f.write(data)
    subprocess.run(['mcopy', '-o', '-i', DISK, path, target], check=True, env=ENV_M)
    os.unlink(path)


def set_machine(entries):
    """Section.key=value in the copy's configuration, for this and later starts: a faster CPU, say."""
    path = os.path.join(VM, '86box.cfg')
    with open(path, encoding='utf-8') as f:
        lines = f.read().splitlines()
    for entry in entries:
        name, value = entry.split('=', 1)
        section, key = name.split('.', 1)
        at = lines.index(f'[{section}]')
        for k in range(at + 1, len(lines)):
            if lines[k].startswith('['):
                lines.insert(k, f'{key} = {value}')
                break
            if lines[k].split('=')[0].strip() == key:
                lines[k] = f'{key} = {value}'
                break
    with open(path, 'w', encoding='utf-8') as f:
        f.write('\n'.join(lines) + '\n')


def set_up_game(args):
    with open(os.path.join(INSTALL, 'raser.ini'), 'rb') as f:
        raser = f.read()
    import re
    raser, n = re.subn(rb'(?im)^(\s*RESOLUTION\s*=\s*)\S+', rb'\g<1>' + str(args.resolution).encode(), raser)
    assert n >= 1
    mcopy(raser, '::/A2R4/RASER.INI')
    with open(os.path.join(args.game_ini or os.path.join(INSTALL, 'game.ini')), 'rb') as f:
        mcopy(f.read(), '::/A2R4/GAME.INI')
    mcopy(BAT.encode() if args.autostart else b'', "::/WINDOWS/Start Menu/Programs/StartUp/A2R4.BAT")


class Screen:
    def __init__(self, name):
        self.d = display.Display(name)
        self.root = self.d.screen().root

    def windows(self):
        out = []
        for w in self.root.query_tree().children:
            try:
                g = w.get_geometry()
                a = w.get_attributes()
            except Exception:
                continue
            if a.map_state == X.IsViewable:
                out.append((g.width * g.height, g.width, g.height, w))
        return sorted(out, key=lambda x: -x[0])

    def focus(self):
        w = self.windows()
        if w:
            self.d.set_input_focus(w[0][3], X.RevertToParent, X.CurrentTime)
            self.d.sync()
        return (w[0][1], w[0][2]) if w else None

    def key(self, name, down):
        code = self.d.keysym_to_keycode(string_to_keysym(name))
        xtest.fake_input(self.d, X.KeyPress if down else X.KeyRelease, code)
        self.d.sync()

    def tap(self, name, seconds=0.12):
        self.key(name, True)
        time.sleep(seconds)
        self.key(name, False)


def own_instances():
    """86Box and its wrappers on this throwaway machine. Flatpak moves them out of the scope of run.sh,
    so stopping the scope does not reach them. The folder in the command line tells them from any other."""
    found = []
    for name in os.listdir('/proc'):
        if not name.isdigit():
            continue
        try:
            with open(f'/proc/{name}/cmdline', 'rb') as f:
                cmd = f.read()
        except OSError:
            continue
        if VM.encode() in cmd and int(name) != os.getpid():
            found.append(int(name))
    return found


def stop_instances():
    for sig in (signal.SIGTERM, signal.SIGKILL):
        pids = own_instances()
        if not pids:
            return
        for pid in pids:
            try:
                os.kill(pid, sig)
            except OSError:
                pass
        time.sleep(1)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--name', required=True)
    ap.add_argument('--out', default=os.path.join(PROJECT, 'evidence/reference-86box/raw'))
    ap.add_argument('--resolution', type=int, default=1)
    ap.add_argument('--game-ini', default=None, help='game.ini for this start, default the shipped one')
    ap.add_argument('--seconds', type=float, default=240, help='length of the whole run')
    ap.add_argument('--every', type=float, default=5, help='seconds between screenshots')
    ap.add_argument('--game-at', type=float, default=60, help='seconds after boot that --keys count from')
    ap.add_argument('--keys', action='append', default=[],
                    help='seconds after --game-at,key,hold seconds, e.g. 20,Up,8')
    ap.add_argument('--burst', type=float, nargs=2, default=None, help='screenshots as fast as they come between these seconds since boot')
    ap.add_argument('--display', default=os.environ.get('REFBOX_DISPLAY', ':174'))
    ap.add_argument('--no-autostart', dest='autostart', action='store_false')
    ap.add_argument('--machine', action='append', default=[], help='Section.key=value in 86box.cfg, e.g. Machine.cpu_family=k6_2')
    args = ap.parse_args()

    out = os.path.join(args.out, args.name)
    os.makedirs(out, exist_ok=True)
    if own_instances():
        sys.exit('this machine is already running')
    set_machine(args.machine)
    set_up_game(args)
    dpy = args.display
    if os.path.exists(f'/tmp/.X11-unix/X{dpy[1:]}') or os.path.exists(f'/tmp/.X{dpy[1:]}-lock'):
        sys.exit(f'display {dpy} is in use')
    log = open(os.path.join(REFBOX, 'logs', f'{args.name}.log'), 'wb')
    xv = subprocess.Popen(['Xvfb', dpy, '-screen', '0', '1280x1024x24', '-nolisten', 'tcp'], stdout=log, stderr=log)
    for _ in range(100):
        if os.path.exists(f'/tmp/.X11-unix/X{dpy[1:]}'):
            break
        time.sleep(0.05)
    env = {k: v for k, v in os.environ.items() if k not in ('WAYLAND_DISPLAY', 'WAYLAND_SOCKET', 'XAUTHORITY', 'DBUS_SESSION_BUS_ADDRESS')}
    env['DISPLAY'] = dpy
    xdg = os.path.join(REFBOX, 'xdg')
    cmd = ['flatpak', 'run', '--unshare=network', '--nosocket=pulseaudio', '--nosocket=wayland',
           f'--filesystem={REFBOX}', '--nofilesystem=/mnt/4TB_NVME',
           f'--env=XDG_CONFIG_HOME={xdg}/config', f'--env=XDG_DATA_HOME={xdg}/data', f'--env=XDG_CACHE_HOME={xdg}/cache',
           '--env=QT_QPA_PLATFORM=xcb', '--env=ALSOFT_DRIVERS=null', '--env=SDL_AUDIODRIVER=dummy',
           APP, '-P', VM + '/', '-O', os.path.join(REFBOX, 'global.cfg'), '-N']
    box = subprocess.Popen(cmd, env=env, stdout=log, stderr=log)
    screen = None
    meta = {'name': args.name, 'args': vars(args), 'events': [], 'modes': []}
    t0 = time.monotonic()
    try:
        for _ in range(200):
            try:
                screen = Screen(dpy)
                break
            except Exception:
                time.sleep(0.1)
        keys = []
        for spec in args.keys:
            a, name, hold = spec.split(',')
            keys.append({'at': float(a), 'name': name, 'hold': float(hold), 'state': 0})
        mode = None
        mode_at = None
        desktop_seen = False
        next_shot = 0.0
        shot = 0
        while time.monotonic() - t0 < args.seconds:
            now = time.monotonic() - t0
            if box.poll() is not None:
                meta['events'].append(['86Box ended', now, box.returncode])
                break
            size = screen.focus()
            if size != mode:
                mode = size
                meta['modes'].append([round(now, 1), size])
            # The desktop is 640x480 too, so the game's start shows no mode change: --game-at is a time since boot.
            if mode_at is None and now > args.game_at:
                mode_at = now
                meta['events'].append(['keys start', now, size])
            if mode_at is not None:
                for k in keys:
                    if k['state'] == 0 and now - mode_at >= k['at']:
                        screen.key(k['name'], True)
                        k['state'] = 1
                        meta['events'].append(['down', now, k['name']])
                    elif k['state'] == 1 and now - mode_at >= k['at'] + k['hold']:
                        screen.key(k['name'], False)
                        k['state'] = 2
                        meta['events'].append(['up', now, k['name']])
            if now >= next_shot:
                burst = args.burst and args.burst[0] <= now < args.burst[1]
                next_shot = now + (0 if burst else args.every)
                path = os.path.join(out, f'{shot:03d}-{int(now):04d}s.png')
                subprocess.run(['import', '-display', dpy, '-window', 'root', path], stderr=subprocess.DEVNULL, env=env, check=False)
                shot += 1
            if not (args.burst and args.burst[0] <= now < args.burst[1]):
                time.sleep(0.05)
    finally:
        with open(os.path.join(out, 'meta.json'), 'w') as f:
            json.dump(meta, f, indent=1)
        stop_instances()
        xv.terminate()


main()
