#!/bin/bash
# Inside the scope: isolated environment, then one run of refwine.py.
#
# REFWINE_CLOCK_START (seconds, default 10) starts the machine clocks that Wine reads near that value,
# in a Linux time namespace, so QueryPerformanceCounter does not count from the host's boot. The game
# keeps its clock in a 32-bit float (owner's README, part 9), so a host uptime of a day would round
# every time step to 7.8 ms. REFWINE_CLOCK_START=host leaves the host's clock in place.
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
PROJECT="$(cd "$HERE/../.." && pwd)"
: "${REFWINE_OUT:=$PROJECT/evidence/reference-wine/raw}"
: "${REFWINE_CLOCK_START:=10}"
source "$HERE/env.sh"
# python-xlib is in the user's site-packages, so the real home is looked up before HOME moves.
export PYTHONPATH="${REFWINE_PYTHONPATH:-/home/rick/.local/lib/python3.14/site-packages}"
export PYTHONDONTWRITEBYTECODE=1
export REFWINE_CLOCK_START
PY=(python3 "$HERE/refwine.py" --out "$REFWINE_OUT" --install "$PROJECT/original-game-decompiled/original/install" "$@")
if [ "$REFWINE_CLOCK_START" = host ]; then
  exec "${PY[@]}"
fi
UP=$(cut -d. -f1 /proc/uptime)
OFF=$(( REFWINE_CLOCK_START - UP ))
exec unshare --user --map-current-user --time --monotonic="$OFF" --boottime="$OFF" --fork --kill-child=SIGTERM "${PY[@]}"
