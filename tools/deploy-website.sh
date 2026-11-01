#!/usr/bin/env bash
# Publish the browser version to the Nginx webserver in one command.
#
#   tools/deploy-website.sh            build, upload and verify
#   tools/deploy-website.sh --dry-run  build and show what would change on the server
#
# Settings, from the environment:
#   A2R4_DEPLOY_HOST  SSH target (default Debian)
#   A2R4_DEPLOY_PATH  web folder on the server, must end in /a2racer4
#   A2R4_DEPLOY_URL   public address checked after the upload ("" skips the check)
#
# The upload mirrors dist/ with rsync over SSH: only files whose contents changed, all put in
# place at the end, and files that no longer exist removed afterwards. docs/hosting.md.
set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
host="${A2R4_DEPLOY_HOST:-Debian}"
dest="${A2R4_DEPLOY_PATH:-/var/www/games.nostalgiarealm.com/a2racer4}"
url="${A2R4_DEPLOY_URL-https://games.nostalgiarealm.com/a2racer4/}"
dry=
case "${1:-}" in
  -n|--dry-run) dry=--dry-run ;;
  "") ;;
  *) echo "Usage: $0 [--dry-run]" >&2; exit 2 ;;
esac

# Never mirror into a guessed folder.
dest="${dest%/}"
case "$dest" in
  /*/a2racer4) ;;
  *) echo "Refusing to deploy to '$dest': expected an absolute path ending in /a2racer4" >&2; exit 1 ;;
esac

cd "$root"
echo "== Building the website in dist/"
npm run --silent build
for file in index.html src/main.js src/style.css game/spel.wasm assets/game/rcs.img assets/menu/forms.json; do
  [ -s "dist/$file" ] || { echo "Build incomplete: dist/$file is missing" >&2; exit 1; }
done
du -sh dist | cut -f1 | sed 's/^/   size: /'

echo "== Uploading to $host:$dest/${dry:+ (dry run)}"
if [ -n "$dry" ]; then report=(--dry-run --itemize-changes --info=stats1)
else report=(--info=progress2,stats1); fi
# Every build stamps dist/ with new file times, so compare contents instead.
rsync -az --checksum --no-owner --no-group --delete-delay --delay-updates --chmod=D755,F644 --mkpath "${report[@]}" dist/ "$host:$dest/"

if [ -n "$dry" ] || [ -z "$url" ]; then exit 0; fi
echo "== Checking $url"
failed=
for file in index.html src/main.js game/spel.wasm; do
  want=$(sha256sum < "dist/$file" | cut -d' ' -f1)
  live=$(curl -fsSL --max-time 120 -H 'Cache-Control: no-cache' "${url%/}/$file" | sha256sum | cut -d' ' -f1) || live=unreachable
  if [ "$live" = "$want" ]; then echo "   $file: live copy matches"
  else echo "   Warning: the live $file differs from the upload ($live)" >&2; failed=1; fi
done
[ -z "$failed" ] || exit 1
echo "   The live site serves the new build."
