#!/bin/bash
# Short runtime observation under Wine, on a virtual display, in a throwaway prefix. Runs on the host.
# Usage: run_observation.sh <package_root> [withcd]
set -u
R="$1"; W="$R/dynamic/.work"; export WINEPREFIX="$W/prefix" WINEARCH=win64 WINEDLLOVERRIDES="mscoree,mshtml=" WINEDEBUG=-all DISPLAY=:97
Xvfb :97 -screen 0 1024x768x16 >/dev/null 2>&1 & XV=$!
sleep 1
timeout 90 wineboot -i >/dev/null 2>&1
G="$WINEPREFIX/drive_c/A2R4"; mkdir -p "$G"; cp -a "$R/original/install/." "$G/"; chmod -R u+rw "$G"
# Second run: a copy of the intro on drive D:, because menu.exe searches C: to Z: for DATA\INTRO1.MPG
if [ "${2:-}" = "withcd" ]; then mkdir -p "$W/cd/DATA"; cp "$R/original/disc/Data/intro1.mpg" "$W/cd/DATA/INTRO1.MPG"; ln -sfn "$W/cd" "$WINEPREFIX/dosdevices/d:"; fi
export WINEDEBUG=-all,+process,+loaddll,+file
cd "$G"
timeout 75 wine A2Racer4.exe > "$W/trace.log" 2>&1 &
RUN=$!
for t in 15 35 60; do sleep $((t==15?15:t==35?20:25)); import -display :97 -window root "$R/dynamic/screenshots/${2:-nocd}_t${t}s.png" 2>/dev/null; done
wait $RUN; echo "launcher exit status: $?" > "$W/status.txt"
WINEDEBUG=-all wineserver -k 2>/dev/null
kill $XV 2>/dev/null
wc -c "$W/trace.log" >> "$W/status.txt"
