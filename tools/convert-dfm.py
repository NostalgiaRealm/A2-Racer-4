#!/usr/bin/env python3
"""Turns the decoded Delphi form text files into public/assets/menu/forms.json.

Binary properties that hold a bitmap (slider BackImage) become PNG files next to it.
Input: original-game-decompiled/decompiled/game__menu.exe/delphi/forms/*.dfm.txt
"""
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'tools'))
SRC = os.path.join(ROOT, 'original-game-decompiled', 'decompiled', 'game__menu.exe', 'delphi', 'forms')
OUT = os.path.join(ROOT, 'public', 'assets', 'menu', 'forms.json')


def parse_value(v):
    v = v.strip()
    if re.fullmatch(r'-?\d+', v):
        return int(v)
    if v in ('True', 'False'):
        return v == 'True'
    if v.startswith("'") and v.endswith("'"):
        return v[1:-1].replace("''", "'")
    return v


def parse(text):
    root = None
    stack = []
    lines = text.splitlines()
    i = 0
    while i < len(lines):
        s = lines[i].strip()
        i += 1
        if not s:
            continue
        m = re.match(r'(object|inherited|inline) (\w+)\s*:\s*(\w+)', s)
        if m:
            node = {'name': m.group(2), 'class': m.group(3), 'props': {}, 'children': []}
            if stack:
                stack[-1]['children'].append(node)
            else:
                root = node
            stack.append(node)
            continue
        if s == 'end':
            stack.pop()
            continue
        m = re.match(r'([\w.]+)\s*=\s*(.*)$', s)
        if m and stack:
            key, val = m.group(1), m.group(2)
            if val.startswith('{binary'):
                stack[-1]['props'][key] = {'binary': True}
                continue
            if val == '(':
                items = []
                while i < len(lines):
                    t = lines[i].strip()
                    i += 1
                    if t.endswith(')'):
                        t = t[:-1]
                        if t:
                            items.append(parse_value(t))
                        break
                    items.append(parse_value(t))
                stack[-1]['props'][key] = items
                continue
            if val == '':
                # A multi-line string continuation
                parts = []
                while i < len(lines) and re.match(r"\s*'", lines[i]):
                    parts.append(parse_value(lines[i].strip().rstrip('+').strip()))
                    i += 1
                stack[-1]['props'][key] = ''.join(str(p) for p in parts)
                continue
            stack[-1]['props'][key] = parse_value(val)
    return root


def main():
    out = {}
    for name in sorted(os.listdir(SRC)):
        if not name.endswith('.dfm.txt'):
            continue
        with open(os.path.join(SRC, name), encoding='latin1') as f:
            tree = parse(f.read())
        out[name.split('.')[0]] = tree
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    with open(OUT, 'w') as f:
        json.dump(out, f)
    print('forms:', len(out))


if __name__ == '__main__':
    main()
