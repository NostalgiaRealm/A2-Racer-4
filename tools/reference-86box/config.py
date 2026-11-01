#!/usr/bin/env python3
"""The owner's machine settings for the throwaway copy. Same CPU, memory, video and sound hardware.
Only what concerns the host changes: disk path, software presenting, one window pixel per guest pixel."""
import re
import sys

CHANGES = {
    'General': {'vid_renderer': 'qt_software', 'scale': '1', 'force_43': '0', 'hide_status_bar': '1',
                'hide_tool_bar': '1', 'confirm_exit': '0', 'confirm_reset': '0', 'dpi_scale': '0',
                'vid_resize': '0', 'video_filter_method': '0'},
    'Sound': {'midi_device': 'none'},
    'Hard disks': {'hdd_01_fn': 'win98.img', 'hdd_01_ide_channel': '0:0', 'hdd_01_speed': 'ramdisk'},
}


def main(src, dst):
    out, section, seen = [], None, set()
    with open(src, encoding='utf-8', errors='replace') as f:
        lines = f.read().splitlines()

    def flush():
        for k, v in CHANGES.get(section, {}).items():
            if (section, k) not in seen:
                out.append(f'{k} = {v}')

    for line in lines:
        m = re.match(r'\[(.+)\]\s*$', line)
        if m:
            flush()
            section = m.group(1)
            out.append(line)
            continue
        m = re.match(r'(\w+)\s*=', line)
        if m and section in CHANGES and m.group(1) in CHANGES[section]:
            seen.add((section, m.group(1)))
            out.append(f'{m.group(1)} = {CHANGES[section][m.group(1)]}')
            continue
        out.append(line)
    flush()
    with open(dst, 'w', encoding='utf-8') as f:
        f.write('\n'.join(out) + '\n')


main(*sys.argv[1:3])
