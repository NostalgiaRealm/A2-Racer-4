#!/usr/bin/env python3
"""Sets a port frame against a guest frame, pixel by pixel, and writes both next to a difference picture.
  compare.py port.png guest.png --crop 640x480+0+30 --world 70,440,120,470 --out side.png
The crop takes the guest's screen out of the 86Box window, under its menu bar. Needs ImageMagick's magick.
"""
import argparse
import shutil
import subprocess


def tool():
    return ['magick'] if shutil.which('magick') else ['distrobox-host-exec', 'magick']


def rgb(path, crop=None):
    cmd = tool() + [path]
    if crop:
        cmd += ['-crop', crop, '+repage']
    return subprocess.run(cmd + ['-depth', '8', 'rgb:-'], capture_output=True, check=True).stdout


def size(path):
    out = subprocess.run(tool() + ['identify', '-format', '%w %h', path], capture_output=True, check=True, text=True).stdout
    return tuple(map(int, out.split()))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('port')
    ap.add_argument('guest')
    ap.add_argument('--crop', default=None)
    ap.add_argument('--region', action='append', default=[], help='name=x0,x1,y0,y1')
    ap.add_argument('--out', default=None, help='port, guest and difference side by side')
    args = ap.parse_args()
    w, h = size(args.port)
    a = rgb(args.port)
    b = rgb(args.guest, args.crop)
    assert len(a) == len(b), (len(a), len(b))

    def score(x0, x1, y0, y1):
        same = close = total = n = 0
        for y in range(y0, y1):
            for x in range(x0, x1):
                i = (y * w + x) * 3
                d = max(abs(a[i] - b[i]), abs(a[i + 1] - b[i + 1]), abs(a[i + 2] - b[i + 2]))
                same += d == 0
                close += d <= 8
                total += d
                n += 1
        return 100 * same / n, 100 * close / n, total / n

    print('%-10s identical %5.1f%%, within 8 levels %5.1f%%, mean largest channel difference %5.1f' % ('whole', *score(0, w, 0, h)))
    for r in args.region:
        name, box = r.split('=')
        print('%-10s identical %5.1f%%, within 8 levels %5.1f%%, mean largest channel difference %5.1f' % (name, *score(*map(int, box.split(',')))))
    if args.out:
        diff = bytearray(len(a))
        for i in range(0, len(a), 3):
            v = min(255, max(abs(a[i] - b[i]), abs(a[i + 1] - b[i + 1]), abs(a[i + 2] - b[i + 2])) * 3)
            diff[i] = diff[i + 1] = diff[i + 2] = v
        subprocess.run(tool() + ['-size', f'{w}x{h}', '-depth', '8', 'rgb:-', args.out + '.diff.png'], input=bytes(diff), check=True)
        subprocess.run(tool() + ['-size', f'{w}x{h}', '-depth', '8', 'rgb:-', args.out + '.guest.png'], input=bytes(b), check=True)
        subprocess.run(tool() + [args.port, args.out + '.guest.png', args.out + '.diff.png', '+append', args.out], check=True)
        subprocess.run(['rm', '-f', args.out + '.diff.png', args.out + '.guest.png'], check=True)


main()
