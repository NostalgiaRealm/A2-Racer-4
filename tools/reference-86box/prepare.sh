#!/bin/bash
# Makes a throwaway copy of the owner's 86Box Windows 98 machine with the game on it. Runs on the host.
#   env REFBOX=/some/tmpfs/folder tools/reference-86box/prepare.sh
# The owner's disk image and configuration are only read. REFBOX must be outside the project.
set -eu
HERE="$(cd "$(dirname "$0")" && pwd)"
PROJECT="$(cd "$HERE/../.." && pwd)"
: "${REFBOX:?set REFBOX to a scratch folder}"
: "${REFBOX_IMAGE:=/mnt/4TB_NVME/86Box VMs/Windows 98/Windows 98.img}"
: "${REFBOX_MACHINE:=$HOME/.var/app/net._86box._86Box/data/86Box/Virtual Machines/Windows 98}"
INSTALL="$PROJECT/original-game-decompiled/original/install"
VM="$REFBOX/vm"
mkdir -p "$VM" "$REFBOX/logs" "$REFBOX/xdg/config" "$REFBOX/xdg/data" "$REFBOX/xdg/cache"
cp "$REFBOX_IMAGE" "$VM/win98.img"
chmod u+w "$VM/win98.img"
cp -a "$REFBOX_MACHINE/nvr" "$VM/"
python3 "$HERE/config.py" "$REFBOX_MACHINE/86box.cfg" "$VM/86box.cfg"
export MTOOLS_SKIP_CHECK=1
DISK="$VM/win98.img@@32256"
# The copy of the game: disc 1.01 without updates, plus spel.exe, the same bytes as spel.dat.
mmd -i "$DISK" ::/A2R4
mcopy -i "$DISK" -s -n -Q -m "$INSTALL"/* ::/A2R4/
mcopy -i "$DISK" -n -Q -m "$INSTALL/spel.dat" ::/A2R4/SPEL.EXE
mdir -i "$DISK" ::/A2R4/SPEL.EXE | tail -n 3
echo "prepared $VM"
