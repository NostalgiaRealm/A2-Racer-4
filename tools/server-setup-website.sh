#!/usr/bin/env bash
# One-time setup of /a2racer4/ on the Nginx server. Run as root on the server; safe to run again.
#
#   sudo bash server-setup-website.sh [--from DIR]
#
# 1. Creates the web folder, owned by the upload account, and moves a staged build into it.
# 2. Adds the /a2racer4/ locations to the games site, with a backup, and rolls back if nginx -t fails.
#
# It changes nothing for the other games.
set -euo pipefail

site=/etc/nginx/sites-available/games.nostalgiarealm.com
web=/var/www/games.nostalgiarealm.com/a2racer4
owner=rick
bare=games.nostalgiarealm.com
from=
while [ $# -gt 0 ]; do
  case "$1" in
    --from) from="$2"; shift 2 ;;
    *) echo "Usage: $0 [--from DIR]" >&2; exit 2 ;;
  esac
done
[ "$(id -u)" = 0 ] || { echo "Run this as root (sudo)." >&2; exit 1; }
[ -f "$site" ] || { echo "Missing $site" >&2; exit 1; }

backup="$site.bak-$(date +%F-%H%M%S)-a2racer4"
apply() {  # Test the edited site; put the backup back if Nginx refuses it.
  if nginx -t; then
    systemctl reload nginx
  else
    echo "nginx -t failed: restoring $backup" >&2
    cp -a "$backup" "$site"
    exit 1
  fi
}

echo "== Web folder $web"
install -d -o "$owner" -g www-data -m 755 "$web"
if [ -n "$from" ]; then
  [ -s "$from/index.html" ] || { echo "No build in $from" >&2; exit 1; }
  rsync -a --delete --chown="$owner:www-data" --chmod=D755,F644 "$from/" "$web/"
  rm -rf -- "$from"
fi
[ -s "$web/index.html" ] && echo "   build in place: $(du -sh "$web" | cut -f1)"

cp -a "$site" "$backup"

if grep -q 'location /a2racer4/' "$site"; then
  echo "== /a2racer4/ is already in the site"
else
  echo "== Adding /a2racer4/ to the site (backup: $backup)"
  grep -q '^    # Static Kao website\.$' "$site" || { echo "Insertion point not found in $site" >&2; exit 1; }
  snippet=$(mktemp)
  cat > "$snippet" <<'EOF'
    # A2 Racer 4.
    location = /a2racer4 {
        return 301 /a2racer4/$is_args$args;
    }

    location ~ ^/a2racer4/(?:\.|.*/\.) {
        return 404;
    }

    location /a2racer4/ {
        # Text and the wasm shrink a lot. rcs.img and rc.img stay out of this:
        # the race reads them by byte ranges.
        gzip on;
        gzip_vary on;
        gzip_comp_level 5;
        gzip_min_length 1024;
        gzip_types application/json application/javascript text/javascript text/css image/svg+xml application/wasm;
        root /var/www/games.nostalgiarealm.com;
        index index.html;
        autoindex off;
        try_files $uri $uri/ =404;
    }

EOF
  sed -i "/^    # Static Kao website\.\$/{
r $snippet
N
}" "$site"
  rm -f "$snippet"
  # sed's r appends after the marker: put the marker back in front of the Kao block.
  python3 -I - "$site" <<'EOF'
import sys
path = sys.argv[1]
s = open(path).read()
marker = '    # Static Kao website.\n'
assert s.count(marker) == 1
s = s.replace(marker, '')
kao = '    location = /kao {\n'
assert s.count(kao) == 1
s = s.replace(kao, marker + kao)
open(path, 'w').write(s)
EOF
  apply
fi

echo "== Done: https://$bare/a2racer4/"
