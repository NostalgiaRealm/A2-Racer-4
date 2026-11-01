#!/bin/bash
# Creates the throwaway prefix and the working copy of the game. Runs on the host.
#   tools/reference-wine/prepare.sh
set -eu
HERE="$(cd "$(dirname "$0")" && pwd)"
PROJECT="$(cd "$HERE/../.." && pwd)"
source "$HERE/env.sh"
INSTALL="$PROJECT/original-game-decompiled/original/install"

mkdir -p "$REFWINE" "$HOME" "$XDG_RUNTIME_DIR" "$XDG_CACHE_HOME" "$XDG_CONFIG_HOME" "$XDG_DATA_HOME" "$REFWINE/logs"
chmod 700 "$XDG_RUNTIME_DIR"
touch "$HOME/.Xauthority"   # python-xlib wants the file to exist
cat > "$ALSA_CONFIG_PATH" <<'CONF'
pcm.!default { type null }
ctl.!default { type null }
pcm.null { type null }
CONF

if [ -e "/tmp/.X11-unix/X${DISPLAY#:}" ] || [ -e "/tmp/.X${DISPLAY#:}-lock" ]; then
  echo "display $DISPLAY is in use, set REFWINE_DISPLAY" >&2; exit 3
fi
Xvfb "$DISPLAY" -screen 0 1024x768x24 -nolisten tcp >"$REFWINE/logs/xvfb-prepare.log" 2>&1 &
XV=$!
trap 'wineserver -k 2>/dev/null || true; kill $XV 2>/dev/null || true' EXIT
sleep 1

timeout 180 wineboot -i >"$REFWINE/logs/wineboot.log" 2>&1
timeout 60 wineserver -w || true

# The Direct3D texture memory probe overflows above about 128 MB (owner's README, part 4).
# Audio goes to the ALSA null device only.
timeout 60 wine reg add 'HKCU\Software\Wine\Direct3D' /v VideoMemorySize /t REG_SZ /d 32 /f >>"$REFWINE/logs/wineboot.log" 2>&1
timeout 60 wine reg add 'HKCU\Software\Wine\Drivers' /v Audio /t REG_SZ /d alsa /f >>"$REFWINE/logs/wineboot.log" 2>&1
timeout 60 wineserver -k || true
timeout 60 wineserver -w || true

G="$WINEPREFIX/drive_c/A2R4"
mkdir -p "$G"
cp -a "$INSTALL/." "$G/"
chmod -R u+rw "$G"
# Wine may refuse the .dat extension; the bytes stay the same.
cp "$G/spel.dat" "$G/spel.exe"
cmp "$INSTALL/spel.dat" "$G/spel.exe"
ls -la "$G/spel.exe" "$G/game.ini" "$G/raser.ini"
echo prepared "$WINEPREFIX"
