#!/usr/bin/env python3
"""Reads the raw samples of refwine.py and port-launch.mjs and prints the numbers for results.md.

  analyze.py launches evidence/reference-wine/raw/launch60-*.json
  analyze.py clock    evidence/reference-wine/raw/launch60-01.json
  analyze.py firstdt  evidence/reference-wine/raw/launch60-*.json
  analyze.py rate     evidence/reference-wine/raw/free-*.json
  analyze.py reverse  evidence/reference-wine/raw/reverse-*.json
  analyze.py brake    evidence/reference-wine/raw/brake-*.json
  analyze.py racers   evidence/reference-wine/raw/racers60-*.json
  analyze.py traffic  evidence/reference-wine/raw/racers60-*.json
  analyze.py details  evidence/reference-wine/raw/launch60-*.json
  analyze.py regimes  ORIGINAL_FILES... -- PORT_FILES...     side-by-side per movement state
  analyze.py csv      FILES...                               one line per launch, for the record
"""
import gzip
import json
import statistics as st
import sys


def load(path):
    opener = gzip.open if path.endswith('.gz') else open
    with opener(path, 'rt') as f:
        d = json.load(f)
    d['ix'] = {c: i for i, c in enumerate(d['columns'])}
    d['path'] = path
    return d


def col(d, name):
    i = d['ix'][name]
    return [r[i] for r in d['rows']]


def time_axis(d):
    """Seconds: wall clock of the sample for the original, tick count / rate for the port."""
    return col(d, 't')


def anchor(d, name):
    return (d.get('anchors') or {}).get(name)


def first_gas_row(d, pedal='gas'):
    gi = d['ix'][pedal]
    for k, r in enumerate(d['rows']):
        if r[gi] and r[gi] > 0:
            return k
    return None


def interp(ts, vs, t):
    if t < ts[0] or t > ts[-1]:
        return None
    lo, hi = 0, len(ts) - 1
    while hi - lo > 1:
        mid = (lo + hi) // 2
        if ts[mid] <= t:
            lo = mid
        else:
            hi = mid
    if ts[hi] == ts[lo]:
        return vs[lo]
    return vs[lo] + (vs[hi] - vs[lo]) * (t - ts[lo]) / (ts[hi] - ts[lo])


def launch_summary(d):
    rows = [r for r in d['rows'] if r[d['ix']['fwd']] is not None]
    ix = d['ix']
    ts = [r[ix['t']] for r in rows]
    fwd = [r[ix['fwd']] for r in rows]
    k = next((n for n, r in enumerate(rows) if r[ix['gas']] and r[ix['gas']] > 0), None)
    if k is None:
        return None
    t0 = ts[k]
    go = anchor(d, 'go')
    states = [r[ix['mstate']] for r in rows[k:]]
    gas_off = next((e[1] for e in d['events'] if e[0] == 'gas_off'), ts[-1])
    # first time the wheel torque gate is hit or a collision: the speed falls by more than 3 m/s under gas
    peak = 0.0
    hit = None
    for n in range(k, len(rows)):
        if ts[n] > gas_off:
            break
        peak = max(peak, fwd[n])
        if fwd[n] < peak - 3 or (rows[n][ix['y']] is not None and rows[n][ix['y']] > 4 and n > k):
            hit = ts[n] - t0
            break
    end = t0 + hit - 0.2 if hit else gas_off
    window = [fwd[n] for n in range(k, len(rows)) if end - 2 <= ts[n] <= end]
    gas_time = gas_off - t0
    lim = rows[k][ix['lim0']]
    reach = next((ts[n] - t0 for n in range(k, len(rows)) if ts[n] <= end and fwd[n] >= 0.98 * lim * 0.4), None)
    # Second alignment, on the speed itself: which row first shows the pedal differs by up to one tick.
    k1 = next((n for n in range(k, len(rows)) if fwd[n] >= 1.0), None)
    t1 = None
    if k1:
        t1 = ts[k1 - 1] + (1.0 - fwd[k1 - 1]) * (ts[k1] - ts[k1 - 1]) / (fwd[k1] - fwd[k1 - 1])
    changes = []
    prev = None
    for n in range(k, len(rows)):
        if ts[n] > end:
            break
        s = tuple(rows[n][ix[c]] for c in ('mstate', 'ms0', 'ms1', 'ms2', 'ms3'))
        if s != prev:
            changes.append((round(ts[n] - t0, 2), ''.join(str(x) for x in s)))
            prev = s
    return {
        'name': d['name'],
        'key_after_go': next((e[1] for e in d['events'] if e[0] == 'gas_on'), t0) - go if go is not None else None,
        'gas_after_go': t0 - go if go is not None else None,
        'state_before': ''.join(str(rows[k - 1][ix[c]]) for c in ('mstate', 'ms0', 'ms1', 'ms2', 'ms3')),
        'v1': interp(ts, fwd, t0 + 1), 'v4': interp(ts, fwd, t0 + 4), 'v7': interp(ts, fwd, t0 + 7),
        'v8': interp(ts, fwd, t0 + 8), 'v10': interp(ts, fwd, t0 + 10) if not hit or hit > 10 else None,
        's1': interp(ts, fwd, t1 + 1) if t1 else None, 's4': interp(ts, fwd, t1 + 4) if t1 else None,
        's8': interp(ts, fwd, t1 + 8) if t1 else None,
        # A key pressed before GO starts the 12 s of the script early, so the gas is held for less time.
        'peak': max(fwd[n] for n in range(k, len(rows)) if ts[n] <= end) if hit or gas_time > 11.5 else None,
        'hit': hit, 'reach98': reach, 'final2s': st.mean(window) if window and (hit or gas_time > 11.5) else None,
        'states': changes, 'share2': sum(1 for s in states if s == 2) / len(states) if states else 0,
    }


def fmt(x, w=6, p=2):
    return ' ' * (w - 1) + '-' if x is None else f'{x:{w}.{p}f}'


def cmd_launches(paths):
    out = []
    for p in paths:
        s = launch_summary(load(p))
        if not s:
            print(p, 'no gas')
            continue
        out.append(s)
        print(f"{s['name']:<20} key {fmt(s['key_after_go'])} gas {fmt(s['gas_after_go'])} before {s['state_before']}"
              f" v1 {fmt(s['v1'])} v4 {fmt(s['v4'])} v7 {fmt(s['v7'])} v8 {fmt(s['v8'])} v10 {fmt(s['v10'])}"
              f" peak {fmt(s['peak'])} hit {fmt(s['hit'])} r98 {fmt(s['reach98'])} states {s['states'][:8]}")
    return out


def regime_of(d):
    """Movement state bytes of chassis and wheels 0-3 one second after the gas came on, when they have latched."""
    ix = d['ix']
    rows = [r for r in d['rows'] if r[ix['fwd']] is not None]
    k = next((n for n, r in enumerate(rows) if r[ix['gas']] and r[ix['gas']] > 0), None)
    if k is None:
        return None
    t1 = rows[k][ix['t']] + 1.0
    r = next((r for r in rows[k:] if r[ix['t']] >= t1), None)
    if r is None:
        return None
    return ''.join(str(r[ix[c]]) for c in ('mstate', 'ms0', 'ms1', 'ms2', 'ms3'))


def group(paths):
    out = {}
    for p in paths:
        d = load(p)
        key = regime_of(d)
        s = launch_summary(d)
        if key is None or s is None:
            continue
        # does the state tuple stay the same from 1 s on, up to the end of the clean part of the run?
        s['after1s'] = sorted({st_ for t, st_ in s['states'] if t > 1.0})
        out.setdefault(key, []).append(s)
    return out


def stats(items, field):
    vals = [i[field] for i in items if i[field] is not None]
    if not vals:
        return None
    return st.mean(vals), min(vals), max(vals)


def cmd_regimes(argv):
    cut = argv.index('--')
    orig = group(argv[:cut])
    port = group(argv[cut + 1:])
    keys = sorted(set(orig) | set(port), key=lambda k: -(len(orig.get(k, [])) + len(port.get(k, []))))
    n_o = sum(len(v) for v in orig.values())
    n_p = sum(len(v) for v in port.values())
    print(f'original {n_o} launches, port {n_p} launches')
    print('state  | n orig | n port | field | original mean (min..max) | port mean (min..max) | port vs original')
    for key in keys:
        a = orig.get(key, [])
        b = port.get(key, [])
        print(f'{key} {len(a)} {len(b)}')
        for f in ('v1', 'v4', 'v7', 'v8', 'v10', 'peak', 'final2s', 'reach98', 'hit', 's1', 's4', 's8'):
            sa = stats(a, f)
            sb = stats(b, f)
            line = f'    {f:8}'
            line += f' {sa[0]:7.2f} ({sa[1]:.2f}..{sa[2]:.2f})' if sa else ' ' * 8 + '-' + ' ' * 14
            line += f'   {sb[0]:7.2f} ({sb[1]:.2f}..{sb[2]:.2f})' if sb else ' ' * 11 + '-' + ' ' * 14
            if sa and sb and sa[0]:
                line += f'   {100 * (sb[0] - sa[0]) / sa[0]:+.2f} %'
            print(line)
        later = sorted({x for i in a for x in i['after1s']})
        later_p = sorted({x for i in b for x in i['after1s']})
        if later or later_p:
            print('    changes after 1 s: original', later, 'port', later_p)


def cmd_csv(paths):
    print('name,key_after_go,gas_after_go,state_before_gas,regime,v1,v4,v7,v8,v10,peak,reach98,hit')
    for p in paths:
        d = load(p)
        s = launch_summary(d)
        if not s:
            continue
        f = lambda x: '' if x is None else f'{x:.3f}'
        print(','.join([s['name'], f(s['key_after_go']), f(s['gas_after_go']), s['state_before'], regime_of(d) or '',
                        f(s['v1']), f(s['v4']), f(s['v7']), f(s['v8']), f(s['v10']), f(s['peak']), f(s['reach98']), f(s['hit'])]))


def cmd_traffic(paths):
    """Owner's measure: y of the forward vector in the first 3 s after a start from standstill."""
    for p in paths:
        d = load(p)
        rec = d.get('traffic') or []
        tracks = {}
        peaks = []
        high = 0.0
        for frame in rec:
            t = frame[0]
            for item in frame[1:]:
                slot, vz, fy = item[0], item[1], abs(item[5])
                if fy != fy:
                    continue
                tr = tracks.setdefault(slot, {'last': vz, 'until': None, 'peak': 0.0})
                if tr['until'] is None and tr['last'] < 0.5 <= vz:
                    tr['until'] = t + 3
                    tr['peak'] = 0.0
                if tr['until'] is not None:
                    tr['peak'] = max(tr['peak'], fy)
                    if t >= tr['until']:
                        peaks.append(tr['peak'])
                        tr['until'] = None
                high = max(high, fy)
                tr['last'] = vz
        mean = st.mean(peaks) if peaks else None
        print(f"{d['name']}: slots seen {len(tracks)}, starts {len(peaks)}, nose mean {fmt(mean, 5, 3)} highest {fmt(max(peaks) if peaks else None, 5, 3)}, highest any time {high:.3f}")


def cmd_details(paths):
    """Gear, wheel speed, limit, car height and distance for each launch."""
    print('name regime gear4_after limit omega_end height_mean height_min height_max dist4 dist8 lateral_end')
    for p in paths:
        d = load(p)
        ix = d['ix']
        rows = [r for r in d['rows'] if r[ix['fwd']] is not None]
        k = next((n for n, r in enumerate(rows) if r[ix['gas']] and r[ix['gas']] > 0), None)
        if k is None:
            continue
        ts = [r[ix['t']] for r in rows]
        t0 = ts[k]
        s = launch_summary(d)
        end = t0 + s['hit'] - 0.2 if s['hit'] else next((e[1] for e in d['events'] if e[0] == 'gas_off'), ts[-1])
        g4 = next((ts[n] - t0 for n in range(k, len(rows)) if rows[n][ix['gear']] == 4), None)
        ys = [rows[n][ix['y']] for n in range(k, len(rows)) if t0 + 2 <= ts[n] <= min(t0 + 8, end)]
        om = [rows[n][ix['om0']] for n in range(k, len(rows)) if end - 1 <= ts[n] <= end]
        def dist(sec):
            r = next((r for r in rows[k:] if r[ix['t']] >= t0 + sec), None)
            return ((r[ix['x']] - rows[k][ix['x']]) ** 2 + (r[ix['z']] - rows[k][ix['z']]) ** 2) ** 0.5 if r else None
        side = [abs(rows[n][ix['side']]) for n in range(k, len(rows)) if t0 + 2 <= ts[n] <= end]
        print(f"{d['name']:<18} {regime_of(d)} {fmt(g4)} {rows[k][ix['lim0']]:7.3f} {st.mean(om):7.2f} {st.mean(ys):6.3f} {min(ys):6.3f} {max(ys):6.3f} {fmt(dist(4), 7, 1)} {fmt(dist(8), 7, 1)} {max(side):5.2f}")


def cmd_firstdt(paths):
    """Clock init to first tick, and the first step values, over many starts. Limited runs catch every update."""
    ls = []
    for p in paths:
        d = load(p)
        ix = d['ix']
        ups = []
        for r in d['rows']:
            g = r[ix['gtime']]
            if g and (not ups or ups[-1][0] != g):
                ups.append((g, r[ix['dt']], r[ix['raw']]))
        if len(ups) < 7:
            continue
        L = ups[1][0] - ups[0][0]
        if ups[1][1] < 0.2 * ups[0][0]:      # the first update went by between two samples: L is not known here
            print(f"{d['name']:<18} first update not sampled")
            continue
        ls.append(L)
        getter = [0.1 if (u[1] > 0.1 or u[1] == 0) else u[1] for u in ups[1:7]]
        print(f"{d['name']:<18} r0 {ups[0][0]:9.3f}  L {L * 1000:6.2f} ms  field pass 1-6: " + ' '.join(f'{u[1]:.5f}' for u in ups[1:7]) +
              '  getter: ' + ' '.join(f'{g:.4f}' for g in getter))
    if ls:
        print(f'L over {len(ls)} starts: mean {st.mean(ls) * 1000:.2f} ms, min {min(ls) * 1000:.2f}, max {max(ls) * 1000:.2f}')


def cmd_clock(paths):
    for p in paths:
        d = load(p)
        ix = d['ix']
        print(p)
        seen = []
        for r in d['rows']:
            key = (r[ix['gtime']], r[ix['dt']])
            if r[ix['gtime']] and (not seen or seen[-1] != key):
                seen.append(key)
                if len(seen) <= 10:
                    capped = 0.1 if (r[ix['dt']] > 0.1 or r[ix['dt']] == 0) else r[ix['dt']]
                    print(f"  update {len(seen) - 1}: t {r[ix['t']]:.5f} tick {r[ix['tick']]} time {r[ix['gtime']]:.6f} raw {r[ix['raw']]:.6f}"
                          f" field {r[ix['dt']]:.6f} getter {capped:.6f} physics ema {r[ix['ema']]:.6f}")
        print('  overlay', [(round(a, 3), b, c) for a, b, c in d['overlay']])
        ov = d['overlay']
        for a, b in zip(ov, ov[1:]):
            print(f"    state {a[2]:>2}: {b[0] - a[0]:.3f} s, {b[1] - a[1]} ticks")


def cmd_rate(paths):
    for p in paths:
        d = load(p)
        ix = d['ix']
        rows = [r for r in d['rows'] if r[ix['tick']] >= 1]
        go = anchor(d, 'go')
        tick1 = rows[0][ix['t']]
        count = [r for r in rows if r[ix['t']] < go]
        race = [r for r in rows if r[ix['t']] >= go]
        rate = lambda rs: (rs[-1][ix['tick']] - rs[0][ix['tick']]) / (rs[-1][ix['t']] - rs[0][ix['t']]) if len(rs) > 1 else None
        dts = [r[ix['dt']] for r in race]
        print(f"{d['name']}: countdown {fmt(rate(count), 7, 1)} ticks/s, driving {fmt(rate(race), 7, 1)} ticks/s, tick1 at {tick1:.3f},"
              f" dt mean {st.mean(dts):.5f} min {min(dts):.5f} max {max(dts):.5f}, final fwd {rows[-1][ix['fwd']]:.2f} gas {rows[-1][ix['gas']]}")
        s = launch_summary(d)
        if s:
            print(f"   v1 {fmt(s['v1'])} v4 {fmt(s['v4'])} v8 {fmt(s['v8'])} peak {fmt(s['peak'])} states {s['states'][:6]}")


def cmd_pedal(paths, pedal):
    for p in paths:
        d = load(p)
        ix = d['ix']
        rows = [r for r in d['rows'] if r[ix['fwd']] is not None]
        ts = [r[ix['t']] for r in rows]
        fwd = [r[ix['fwd']] for r in rows]
        k = next((n for n, r in enumerate(rows) if r[ix['brake']] and r[ix['brake']] > 0), None)
        if k is None:
            print(p, 'no brake')
            continue
        t0 = ts[k]
        state_at = lambda sec: ''.join(str(next(r for r in rows[k:] if r[ix['t']] >= t0 + sec)[ix[c]]) for c in ('mstate', 'ms0', 'ms1', 'ms2', 'ms3'))
        line = [f"{d['name']:<18} start {fwd[k]:6.2f} state {state_at(0)} then {state_at(1)}"]
        for s in (0.5, 1, 2, 3, 4, 5, 6):
            v = interp(ts, fwd, t0 + s)
            if v is not None:
                line.append(f"{s}s {v:6.2f}")
        stop = next((ts[n] - t0 for n in range(k, len(rows)) if fwd[n] <= 0), None)
        # steady part: wheels at the limit, before the car meets anything behind it (speed within 5 % of the extreme)
        low = min(fwd[k:])
        near = [fwd[n] for n in range(k, len(rows)) if fwd[n] <= 0.98 * low]
        first = next((ts[n] - t0 for n in range(k, len(rows)) if fwd[n] <= 0.98 * 27.78 * -1), None)
        last_near = next((ts[n] - t0 for n in range(len(rows) - 1, k, -1) if fwd[n] <= 0.98 * low), None)
        line.append(f"min {low:6.2f} steady mean {st.mean(near):6.2f} reach98 {fmt(first)} until {fmt(last_near)} zero {fmt(stop)} om0lim {rows[k][ix['lim0']]:.2f}")
        print(' '.join(line))


def cmd_racers(paths):
    for p in paths:
        d = load(p)
        rec = d.get('racers') or []
        if not rec:
            print(p, 'no racers')
            continue
        go = anchor(d, 'go')
        idx = d['racerIndices']
        print(d['name'], 'indices', idx, 'go', round(go, 2))
        first = next(r for r in rec if r[0] >= go)
        for t_after in (10, 20, 30):
            at = next((r for r in rec if r[0] >= go + t_after), None)
            if not at:
                continue
            dist = []
            for i in range(len(idx)):
                a, b = first[i + 1], at[i + 1]
                dist.append(round(((a[1] - b[1]) ** 2 + (a[3] - b[3]) ** 2) ** 0.5))
            print(f'   after {t_after}s straight distance from their GO spot:', dist, 'speeds', [c[0] for c in at[1:]])
        # path length over the whole run after GO
        path = [0.0] * len(idx)
        prev = first
        for r in rec:
            if r[0] <= go or r[0] > go + 30:
                continue
            for i in range(len(idx)):
                path[i] += ((r[i + 1][1] - prev[i + 1][1]) ** 2 + (r[i + 1][3] - prev[i + 1][3]) ** 2) ** 0.5
            prev = r
        print('   path length 30 s:', [round(x) for x in path])


def main():
    cmd = sys.argv[1]
    paths = sys.argv[2:]
    if cmd == 'launches':
        cmd_launches(paths)
    elif cmd == 'clock':
        cmd_clock(paths)
    elif cmd == 'rate':
        cmd_rate(paths)
    elif cmd in ('reverse', 'brake'):
        cmd_pedal(paths, 'brake')
    elif cmd == 'racers':
        cmd_racers(paths)
    elif cmd == 'details':
        cmd_details(paths)
    elif cmd == 'firstdt':
        cmd_firstdt(paths)
    elif cmd == 'traffic':
        cmd_traffic(paths)
    elif cmd == 'regimes':
        cmd_regimes(paths)
    elif cmd == 'csv':
        cmd_csv(paths)
    else:
        sys.exit(__doc__)


if __name__ == '__main__':
    main()
