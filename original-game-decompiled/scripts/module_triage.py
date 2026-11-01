#!/usr/bin/env python3
"""Identify every unique code module: group, provenance, compiler, packing and PE metadata.

Usage (with the analysis venv python, which has pefile): module_triage.py <output_root>
Reads inventory/modules_raw.json. Writes inventory/modules.json and inventory/modules.csv.
"""
import csv, json, math, os, re, shutil, struct, subprocess, sys, time
import pefile

ROOT = sys.argv[1]
INV = os.path.join(ROOT, 'inventory')
HOST = ['distrobox-host-exec'] if shutil.which('distrobox-host-exec') else []
ACRO = 'extracted/disc_Adobe_Acrobat_rp505nld.exe__embedded-cabs/'
DXM = 'extracted/disc_dxmedia_DXMEDIA.exe__embedded-cabs/'
DXC = 'extracted/disc_DXSetup_DirectX.cab__cab/'
AGENT = 'extracted/disc_MSagent_MSagent.exe__embedded-cabs/'
WISE_A = 'extracted/disc-setup.EXE__wise/'
WISE_S = 'extracted/disc-service-Setup.exe__wise/'
GAME_NAMES = {'a2racer4.exe', 'a2racer4.icd', 'spel.dat', 'menu.exe', 'rsc.dll', 'setdebug.exe', 'bonus.dso'}


def group_of(locs):
    """Prefer the most game-relevant location of a module with several copies."""
    low = [l.replace('\\', '/') for l in locs]
    names = {os.path.basename(l).lower() for l in low}
    if any(l.startswith('original/install/') for l in low) and names & GAME_NAMES:
        return 'game'
    if names & {'uninst32.exe', 'unwise.exe'} and any(l.startswith(('original/install/', WISE_A)) for l in low):
        return 'installer'
    if names & {'service.exe', 'service.cpl'} or 'original/disc/autorun.exe' in low:
        return 'davilex'
    if any(l in ('original/disc/setup.EXE', 'original/disc/service/Setup.exe') for l in low):
        return 'installer'
    if names & {'httpct.ocx', 'nmocod.dll', 'nmsckn.dll', 'nmorenu.dll'}:
        return 'netmanage'
    if any(ACRO in l or l == 'original/disc/Adobe Acrobat/rp505nld.exe' for l in low):
        return 'acrobat'
    if any(DXM in l or l == 'original/disc/dxmedia/DXMEDIA.exe' for l in low):
        return 'dxmedia'
    if any(AGENT in l or l == 'original/disc/MSagent/MSagent.exe' for l in low):
        return 'msagent'
    if any(DXC in l or l.startswith('original/disc/DXSetup/') for l in low):
        return 'directx'
    if any('/_unnamed/' in l or 'W32INST_PATH_' in l or 'UNINST32.EXE' in l for l in low):
        return 'installer'
    if any(WISE_A in l or WISE_S in l for l in low):
        return 'ms-redist'
    return 'other'


def entropy(d):
    if not d:
        return 0.0
    c = [0] * 256
    for x in d:
        c[x] += 1
    return -sum(v / len(d) * math.log2(v / len(d)) for v in c if v)


def vinfo(pe):
    out = {}
    try:
        for fi in getattr(pe, 'FileInfo', []) or []:
            for e in fi:
                if e.Key == b'StringFileInfo':
                    for st in e.StringTable:
                        for k, v in st.entries.items():
                            out[k.decode('latin1')] = v.decode('latin1', 'replace').strip('\0 ')
    except Exception:
        pass
    return out


def pe_info(path):
    r = {}
    pe = pefile.PE(path, fast_load=False)
    ts = pe.FILE_HEADER.TimeDateStamp
    r['timestamp_utc'] = time.strftime('%Y-%m-%d %H:%M:%S', time.gmtime(ts))
    r['timestamp_raw'] = ts
    r['linker'] = '%d.%d' % (pe.OPTIONAL_HEADER.MajorLinkerVersion, pe.OPTIONAL_HEADER.MinorLinkerVersion)
    r['subsystem'] = pefile.SUBSYSTEM_TYPE.get(pe.OPTIONAL_HEADER.Subsystem, str(pe.OPTIONAL_HEADER.Subsystem))
    r['image_base'] = hex(pe.OPTIONAL_HEADER.ImageBase)
    r['entry_rva'] = hex(pe.OPTIONAL_HEADER.AddressOfEntryPoint)
    secs, high = [], []
    code_size = 0
    for s in pe.sections:
        nm = s.Name.rstrip(b'\0').decode('latin1')
        e = round(entropy(s.get_data()), 2)
        ex = bool(s.Characteristics & 0x20000000)
        secs.append('%s(%x,%s,H=%.2f)' % (nm, s.SizeOfRawData, 'X' if ex else '-', e))
        if ex:
            code_size += s.SizeOfRawData
            if e > 7.3:
                high.append(nm)
    r['sections'] = ' '.join(secs)
    r['exec_raw_bytes'] = code_size
    r['high_entropy_code_sections'] = ','.join(high)
    r['overlay_bytes'] = len(pe.get_overlay() or b'')
    imports = []
    for d in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []) or []:
        imports.append(d.dll.decode('latin1'))
    r['imports'] = ';'.join(imports)
    r['import_count'] = sum(len(d.imports) for d in getattr(pe, 'DIRECTORY_ENTRY_IMPORT', []) or [])
    ex = getattr(pe, 'DIRECTORY_ENTRY_EXPORT', None)
    r['export_count'] = len(ex.symbols) if ex else 0
    r['export_dll_name'] = ex.name.decode('latin1') if ex and ex.name else ''
    pdb = ''
    for d in getattr(pe, 'DIRECTORY_ENTRY_DEBUG', []) or []:
        e = getattr(d, 'entry', None)
        if e is not None and hasattr(e, 'PdbFileName'):
            pdb = e.PdbFileName.rstrip(b'\0').decode('latin1')
        elif d.struct.Type == 2:
            raw = pe.__data__[d.struct.PointerToRawData:d.struct.PointerToRawData + d.struct.SizeOfData]
            if raw[:4] in (b'NB10', b'RSDS', b'NB09', b'NB11'):
                pdb = raw[16:].split(b'\0')[0].decode('latin1', 'replace') if raw[:4] == b'NB10' else raw[:4].decode()
    r['debug_info'] = pdb
    r['resource_only'] = code_size == 0 or (pe.OPTIONAL_HEADER.AddressOfEntryPoint == 0 and r['export_count'] == 0 and r['import_count'] == 0)
    r['version_info'] = vinfo(pe)
    pe.close()
    return r


def die(path):
    try:
        cp = subprocess.run(HOST + ['env', 'PATH=/home/rick/.local/bin:/usr/bin:/bin', 'diec', '--json', path], stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, text=True, errors='replace', timeout=120)
        j = json.loads(cp.stdout)
        vals = []
        for det in j.get('detects', []):
            for v in det.get('values', []):
                vals.append(v.get('string', ''))
        return vals
    except Exception as e:
        return ['diec failed: %r' % (e,)]


def slug(s):
    return re.sub(r'[^A-Za-z0-9._-]+', '_', s).strip('_')


def preferred(locs):
    return sorted(locs, key=lambda l: (0 if l.startswith('original/install/') else 1 if l.startswith('original/disc/') else 2 if l.startswith('original/wine') else 3, len(l)))[0]


def main():
    mods = json.load(open(os.path.join(INV, 'modules_raw.json')))
    # a few filenames are install-time names set by the Wise script rather than real module names
    used = {}
    out = []
    for i, m in enumerate(sorted(mods, key=lambda x: preferred(x['locations']).lower())):
        loc = preferred(m['locations'])
        m['group'] = group_of(m['locations'])
        # Owner's decision (2026-10-30): decompile only what runs the game. Everything else stays inventory-only.
        m['analysis_scope'] = 'decompile' if m['group'] == 'game' else 'inventory-only'
        m['primary_location'] = loc
        name = os.path.basename(loc)
        tail = name
        if m['group'] == 'acrobat' and '__cab/' in loc:
            tail = loc.split('__cab/', 1)[1].replace('.cab__installshield', '')
        elif m['group'] == 'dxmedia' and 'cab__cab/' in loc:
            tail = re.search(r'cab_(\d+)_at', loc).group(1) and ('cab' + re.search(r'cab_(\d+)_at', loc).group(1) + '_' + name)
        elif '/_unnamed/' in loc:
            tail = 'wise-internal_' + name
        mid = m['group'] + '__' + slug(tail)
        if mid in used:
            mid = '%s__%s' % (mid, m['sha256'][:8])
        used[mid] = 1
        m['id'] = mid
        m['name'] = name
        p = os.path.join(ROOT, loc)
        if m['format'].startswith('PE'):
            try:
                m.update(pe_info(p))
            except Exception as e:
                m['pe_error'] = repr(e)
        if m['format'] in ('PE32', 'PE32+', 'NE', 'LE', 'MZ'):
            m['die'] = die(p)
        else:
            m['die'] = []
        dtxt = ' '.join(m['die'])
        m['packer'] = '; '.join(v for v in m['die'] if re.match(r'(Packer|Protector|Installer|SFX|Cryptor|Protection)', v))
        m['compiler'] = '; '.join(v for v in m['die'] if re.match(r'(Compiler|Linker)', v))
        m['is_delphi'] = 'Delphi' in dtxt
        if m['format'] == 'JavaClass':
            m['toolchain'] = 'vineflower'
        elif m['format'] in ('PE32', 'NE', 'MZ'):
            m['toolchain'] = 'ghidra'
        elif m['format'] == 'LE':
            m['toolchain'] = 'ghidra-le-flat'
        else:
            m['toolchain'] = 'custom'
        out.append(m)
        if i % 50 == 0:
            print(i, m['id'], flush=True)
    json.dump(out, open(os.path.join(INV, 'modules.json'), 'w'), indent=1)
    fields = ['id', 'group', 'analysis_scope', 'name', 'format', 'arch', 'size', 'sha256', 'toolchain', 'is_delphi', 'compiler', 'packer', 'timestamp_utc', 'linker', 'subsystem', 'image_base', 'entry_rva', 'exec_raw_bytes', 'high_entropy_code_sections', 'overlay_bytes', 'export_count', 'import_count', 'resource_only', 'debug_info', 'primary_location', 'location_count', 'file_description', 'company', 'product', 'file_version', 'all_locations']
    with open(os.path.join(INV, 'modules.csv'), 'w', newline='') as f:
        w = csv.DictWriter(f, fields, extrasaction='ignore')
        w.writeheader()
        for m in out:
            v = m.get('version_info', {}) or {}
            m2 = dict(m, location_count=len(m['locations']), file_description=v.get('FileDescription', ''), company=v.get('CompanyName', ''), product=v.get('ProductName', ''), file_version=v.get('FileVersion', ''), all_locations=';'.join(m['locations']))
            w.writerow(m2)
    gc = {}
    for m in out:
        gc[m['group']] = gc.get(m['group'], 0) + 1
    print('groups', gc)
    print('packers', {m['id']: m['packer'] for m in out if m['packer']})
    print('high entropy', {m['id']: m.get('high_entropy_code_sections') for m in out if m.get('high_entropy_code_sections')})
    print('resource-only', sum(1 for m in out if m.get('resource_only')))


if __name__ == '__main__':
    main()
