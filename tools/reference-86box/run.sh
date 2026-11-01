#!/bin/bash
# One start of the throwaway machine under a private Xvfb, on the host, in its own systemd scope.
#   env REFBOX=/some/tmpfs/folder tools/reference-86box/run.sh --name r1 --resolution 1 --seconds 240
# Any argument goes to drive.py. Needs prepare.sh first.
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
SCOPE="a2r4-refbox-$$"
LIMIT="${REFBOX_LIMIT:-900}"
export PYTHONPATH="${REFWINE_PYTHONPATH:-/home/rick/.local/lib/python3.14/site-packages}"
export PYTHONDONTWRITEBYTECODE=1
timeout -k 10 "$LIMIT" systemd-run --user --scope -q --unit="$SCOPE" -p MemoryMax=6G -p MemorySwapMax=0 \
  --setenv=PYTHONPATH --setenv=PYTHONDONTWRITEBYTECODE --setenv=REFBOX \
  python3 "$HERE/drive.py" "$@"
status=$?
systemctl --user stop "$SCOPE.scope" 2>/dev/null
exit $status
