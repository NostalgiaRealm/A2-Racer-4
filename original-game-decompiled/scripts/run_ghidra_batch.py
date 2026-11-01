#!/usr/bin/env python3
"""Run Ghidra headless over the native game modules under a hard memory ceiling. Target binaries are never executed.

Usage: run_ghidra_batch.py <output_root> [--groups a,b] [--only substr] [--ceiling-gb N] [--max-jobs N] [--force]
Output per module: decompiled/<id>/ and analysis-projects/<id>/. A module with summary.json is skipped, so the
batch can be resumed. Progress goes to logs/ghidra/batch.log.

Memory: the native decompiler is a separate process outside the Java heap, and one function can make it grow by
many GB (13.3 GB was seen on 2026-10-30, which triggered the system OOM killer). So every job runs in a systemd
scope inside one slice whose MemoryMax is the ceiling, with swap disabled. A runaway is then killed inside the
slice only: the desktop is safe, Ghidra starts a new decompiler and the function is reported as failed.
"""
import argparse, json, os, shutil, subprocess, sys, threading, time

ap = argparse.ArgumentParser()
ap.add_argument('root')
ap.add_argument('--groups', default='')
ap.add_argument('--only', default='')
ap.add_argument('--ceiling-gb', type=float, default=9)
ap.add_argument('--max-jobs', type=int, default=3)
ap.add_argument('--min-available-gb', type=float, default=5, help='do not start a job below this much free memory')
ap.add_argument('--force', action='store_true')
a = ap.parse_args()
ROOT = a.root
LOGD = os.path.join(ROOT, 'logs/ghidra')
os.makedirs(LOGD, exist_ok=True)
HOST = ['distrobox-host-exec'] if shutil.which('distrobox-host-exec') else []
SLICE = 'a2r4ghidra.slice'
GHIDRA = os.path.expanduser('~/.local/bin/ghidra-headless')
PRIORITY = {'game': 0, 'davilex': 1, 'installer': 2, 'netmanage': 3, 'ms-redist': 4, 'msagent': 5, 'dxmedia': 6, 'directx': 7, 'acrobat': 8, 'other': 9}
DEEP = {'game', 'davilex'}
lock = threading.Lock()


def log(msg):
    line = time.strftime('%H:%M:%S ') + msg
    print(line, flush=True)
    with open(os.path.join(LOGD, 'batch.log'), 'a') as f:
        f.write(line + '\n')


def host(cmd):
    return subprocess.run(HOST + cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, errors='replace')


def code_size(m):
    # self-extractors have large overlays and little code: size the job by its executable bytes
    return m.get('exec_raw_bytes') or m['size']


def heap_gb(m):
    c = code_size(m)
    if c > 2_500_000: return 6
    if c > 800_000: return 4
    if c > 250_000: return 2.5
    return 1.5


def exclusive(m):
    return heap_gb(m) >= 4


def mem_available_gb():
    for line in open('/proc/meminfo'):
        if line.startswith('MemAvailable:'):
            return int(line.split()[1]) / 1048576
    return 0.0


def set_ceiling():
    host(['systemctl', '--user', 'set-property', '--runtime', SLICE, 'MemoryMax=%dM' % int(a.ceiling_gb * 1024), 'MemorySwapMax=0'])


def unit_active(unit):
    return host(['systemctl', '--user', 'is-active', unit]).stdout.strip() in ('active', 'activating')


def job(m):
    mid = m['id']
    dst = os.path.join(ROOT, 'decompiled', mid)
    proj = os.path.join(ROOT, 'analysis-projects', mid)
    if os.path.exists(os.path.join(dst, 'summary.json')) and not a.force:
        return 'skip'
    if os.path.isdir(proj):
        shutil.rmtree(proj)
    os.makedirs(proj, exist_ok=True)
    os.makedirs(dst, exist_ok=True)
    shutil.rmtree(os.path.join(dst, 'functions'), ignore_errors=True)
    input_path = os.path.join(ROOT, m['primary_location'])
    size = m['size']
    deep = m['group'] in DEEP
    per_func = '1' if m['group'] in ('game', 'davilex') else '0'
    threads = '3' if code_size(m) > 800_000 else '2'
    cmd = [GHIDRA, proj, 'analysis', '-import', input_path, '-overwrite', '-scriptPath', os.path.join(ROOT, 'scripts/ghidra'),
           '-preScript', 'ConfigureAnalysis.java', 'deep' if deep else 'standard', '-max-cpu', '4', '-analysisTimeoutPerFile', '7200']
    seeds = ''
    # per-module facts established by inspection: see inventory/module_overrides.json and its reasons
    ovp = os.path.join(ROOT, 'inventory/module_overrides.json')
    ov = json.load(open(ovp)).get(mid, {}) if os.path.exists(ovp) else {}
    if ov.get('noncode'):
        cmd += ['-preScript', 'SplitNonCode.java', ov['noncode'][0], ov['noncode'][1], ov.get('noncode_name', '.text_noncode')]
    if ov.get('seeds'):
        seeds = os.path.join(ROOT, ov['seeds'])
    if m.get('is_delphi'):
        cmd += ['-processor', 'x86:LE:32:default', '-cspec', 'borlanddelphi']
        seeds = os.path.join(dst, 'delphi', 'delphi_seeds.tsv')
        cp = subprocess.run([os.path.expanduser('~/.local/share/reverse-engineering/python-analysis/bin/python'), '-I', os.path.join(ROOT, 'scripts/delphi_scan.py'), input_path, os.path.join(dst, 'delphi')], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
        log('delphi_scan %s: %s' % (mid, cp.stdout.strip()[-200:]))
    frag = '0' if m.get('is_delphi') else '1'
    cmd += ['-postScript', 'RecoverGaps.java', dst, frag] + ([seeds] if seeds else [])
    cmd += ['-postScript', 'ExportModule.java', dst, per_func, threads]
    heap = heap_gb(m)
    start = time.time()
    logfile = os.path.join(LOGD, mid + '.console.log')
    unit = 'a2r4g-%d-%d' % (os.getpid(), abs(hash(mid)) % 1000000)
    full = HOST + ['systemd-run', '--user', '--scope', '-q', '--slice=' + SLICE, '--unit=' + unit, '-p', 'OOMPolicy=continue', '-p', 'MemorySwapMax=0',
                   'env', 'GHIDRA_HEADLESS_MAXMEM=%dM' % int(heap * 1024)] + cmd
    rc = None
    with open(logfile, 'w') as lf:
        proc = subprocess.Popen(full, stdout=lf, stderr=subprocess.STDOUT)
        seen, gone = False, 0
        while True:
            try:
                rc = proc.wait(timeout=30)
                break
            except subprocess.TimeoutExpired:
                pass
            active = unit_active(unit + '.scope')
            seen = seen or active
            gone = gone + 1 if (seen and not active) else 0
            if gone >= 3 or time.time() - start > 3 * 3600:
                # the scope ended but the host-spawn bridge did not report it, or the job hit its time limit
                host(['systemctl', '--user', 'stop', unit + '.scope'])
                proc.kill()
                rc = proc.wait()
                break
    rec = dict(id=mid, input=m['primary_location'], sha256=m['sha256'], rc=rc, seconds=round(time.time() - start, 1), command=cmd)
    ok = os.path.exists(os.path.join(dst, 'summary.json'))
    if ok:
        rec['summary'] = json.load(open(os.path.join(dst, 'summary.json')))
    json.dump(rec, open(os.path.join(LOGD, mid + '.job.json'), 'w'), indent=1)
    return ('ok %s functions, %s assembly-only' % (rec['summary']['functions'], rec['summary']['assembly_only'])) if ok else 'FAILED rc=%s' % rc


def main():
    mods = json.load(open(os.path.join(ROOT, 'inventory/modules.json')))
    # only modules needed to run the game: see analysis_scope in inventory/modules.csv
    mods = [m for m in mods if m['analysis_scope'] == 'decompile' and m['toolchain'] == 'ghidra']
    if a.groups:
        gs = set(a.groups.split(','))
        mods = [m for m in mods if m['group'] in gs]
    if a.only:
        mods = [m for m in mods if a.only in m['id']]
    mods.sort(key=lambda m: (PRIORITY.get(m['group'], 9), m['size']))
    set_ceiling()
    log('batch start: %d modules, ceiling %s GB, at most %d jobs' % (len(mods), a.ceiling_gb, a.max_jobs))
    running, used, solo = [], [0.0], [False]
    results = {}

    def worker(m, gb):
        t0 = time.time()
        try:
            res = job(m)
        except Exception as e:
            res = 'EXCEPTION %r' % (e,)
        with lock:
            used[0] -= gb
            if exclusive(m):
                solo[0] = False
            results[m['id']] = res
        log('%-60s %6.0fs %s' % (m['id'], time.time() - t0, res))

    pending = list(mods)
    while pending or any(t.is_alive() for t in running):
        running = [t for t in running if t.is_alive()]
        with lock:
            free = a.ceiling_gb - used[0]
            solo_on = solo[0]
        started = False
        if len(running) < a.max_jobs and not solo_on and mem_available_gb() >= a.min_available_gb:
            for i, m in enumerate(pending):
                gb = heap_gb(m) + 1
                if exclusive(m) and running:
                    continue
                if gb <= free:
                    pending.pop(i)
                    with lock:
                        used[0] += gb
                        if exclusive(m):
                            solo[0] = True
                    t = threading.Thread(target=worker, args=(m, gb))
                    t.start()
                    running.append(t)
                    started = True
                    break
        time.sleep(0.5 if started else 3)
    bad = sorted(k for k, v in results.items() if not (v == 'skip' or v.startswith('ok')))
    log('batch finished: %d modules, %d failed %s' % (len(results), len(bad), bad))
    sys.exit(1 if bad else 0)


if __name__ == '__main__':
    main()
