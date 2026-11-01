#!/bin/bash
# One start of the original game with one scripted scenario, on the host, under a memory limit.
#   tools/reference-wine/run.sh --name launch-go --gas-at go+0 --gas-for 12
# Any argument after the script name goes to refwine.py. Raw samples go to REFWINE_OUT, default
# evidence/reference-wine/raw. Needs prepare.sh first.
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
SCOPE="a2r4-refwine-$$"
# env.sh is sourced inside the scope: systemd-run itself needs the real XDG_RUNTIME_DIR.
timeout -k 10 200 systemd-run --user --scope -q --unit="$SCOPE" -p MemoryMax=4G -p MemorySwapMax=0 \
  "$HERE/inner.sh" "$@"
status=$?
# Whatever is still in this scope after a timeout goes with it. Nothing outside the scope is touched.
systemctl --user stop "$SCOPE.scope" 2>/dev/null
exit $status
