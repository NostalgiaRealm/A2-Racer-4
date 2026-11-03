#!/usr/bin/env bash
# Publish release/<version>/ to GitHub and GitLab: docs/releasing.md.
#
#   tools/publish-release.sh VERSION [--not-latest]
#
# Needs the tag pushed to both hosts, a draft GitHub release for it, and the macOS workflow
# finished (its .dmg files are fetched from that draft). Writes SHA256SUMS.txt, uploads every
# file to the GitHub release and to GitLab's generic package registry, links them from a GitLab
# release, and publishes both with docs/releases/VERSION.md as notes, links made absolute.
set -euo pipefail

version="${1:?version, e.g. 1.1.4}"
latest=true
[ "${2:-}" = --not-latest ] && latest=false
root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
dir="$root/release/$version"
notes="$root/docs/releases/$version.md"
project=88353354
api="https://gitlab.com/api/v4/projects/$project"
[ -d "$dir" ] && [ -f "$notes" ] || { echo "Missing $dir or $notes" >&2; exit 1; }
work="$(mktemp -d)"
trap 'rm -rf "$work"' EXIT

cd "$dir"
gh release download "v$version" --repo NostalgiaRealm/A2-Racer-4 --clobber --pattern '*.dmg' --pattern 'integrity-darwin*'
ls -1 | grep -v -e '^SHA256SUMS.txt$' -e '\.blockmap$' -e '\.yml$' -e '\.zip$' | LC_ALL=C sort | xargs -d '\n' sha256sum > SHA256SUMS.txt
echo "$version: $(wc -l < SHA256SUMS.txt) files, $(grep -h Tree integrity-*.json | sort -u | wc -l) distinct game tree hash"

python3 -I - "$notes" "$work" "$version" <<'PY'
import json, re, sys
src, work, v = sys.argv[1:4]
s = open(src).read()
hosts = {
    'gh': ('https://github.com/NostalgiaRealm/A2-Racer-4/blob/v%s/' % v, None),
    'gl': ('https://gitlab.com/Nostalgia_Realm/A2-Racer-4/-/blob/v%s/' % v,
           ('https://github.com/NostalgiaRealm/A2-Racer-4/releases/tag/', 'https://gitlab.com/Nostalgia_Realm/A2-Racer-4/-/releases/')),
}
for host, (base, swap) in hosts.items():
    t = s.replace('](../../CHANGELOG.md)', '](%sCHANGELOG.md)' % base)
    t = re.sub(r'\]\(\.\./([a-z-]+\.md)\)', lambda m: '](%sdocs/%s)' % (base, m.group(1)), t)
    t = re.sub(r'\]\(([0-9.]+\.md)\)', lambda m: '](%sdocs/releases/%s)' % (base, m.group(1)), t)
    if swap:
        t = t.replace(*swap)
    assert '](../' not in t
    open('%s/notes-%s.md' % (work, host), 'w').write(t)
PY

gh release upload "v$version" ./* --repo NostalgiaRealm/A2-Racer-4 --clobber
gh release edit "v$version" --repo NostalgiaRealm/A2-Racer-4 --draft=false --latest="$latest" \
  --title "A2 Racer 4 v$version" --notes-file "$work/notes-gh.md" >/dev/null

token=$(glab config get token --host gitlab.com 2>/dev/null || "$HOME/.local/bin/glab" config get token --host gitlab.com)
for f in *; do
  code=$(curl -sS -o /dev/null -w '%{http_code}' -H "PRIVATE-TOKEN: $token" --upload-file "$f" "$api/packages/generic/a2-racer-4/v$version/$f")
  [ "$code" = 201 ] || { echo "GitLab upload $f: $code" >&2; exit 1; }
done
python3 -I - "$work/notes-gl.md" "$version" "$project" > "$work/release.json" <<'PY'
import json, os, sys
notes, v, project = sys.argv[1:4]
base = 'https://gitlab.com/api/v4/projects/%s/packages/generic/a2-racer-4/v%s/' % (project, v)
files = sorted(f for f in os.listdir('.') if os.path.isfile(f))
print(json.dumps({'name': 'A2 Racer 4 v' + v, 'tag_name': 'v' + v, 'description': open(notes).read(),
                  'assets': {'links': [{'name': f, 'url': base + f, 'direct_asset_path': '/' + f, 'link_type': 'other'} for f in files]}}))
PY
curl -sS -H "PRIVATE-TOKEN: $token" -H 'Content-Type: application/json' -X POST --data @"$work/release.json" "$api/releases" \
  | python3 -I -c "import json,sys; d=json.load(sys.stdin); print('GitLab', d.get('message') or (d['tag_name'], d['commit']['id'][:12], len(d['assets']['links'])))"
