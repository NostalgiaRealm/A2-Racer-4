#!/bin/bash
# The whole measurement, in the order it was run. Original under Wine first, one start per line, then
# the same scenarios on the port. Run from a distrobox with distrobox-host-exec on PATH, or on the host
# with HOSTRUN= (empty). About 20 minutes. Other programs may run; nothing here touches them.
#   tools/reference-wine/prepare.sh      (on the host, once)
#   tools/reference-wine/campaign.sh
set -u
HERE="$(cd "$(dirname "$0")" && pwd)"
PROJECT="$(cd "$HERE/../.." && pwd)"
RAW="$PROJECT/evidence/reference-wine/raw"
HOSTRUN="${HOSTRUN-distrobox-host-exec}"
run() { timeout 120 $HOSTRUN "$@" 2>&1 | grep -v xauthority; }
R="$HERE/run.sh"

# 60 ticks per second, clean clock: gas at 16 moments around GO.
i=0
for at in ov8+0.2 go+0 go+0.35 go+0.5 go+0.6 go+0.9 go+1.2 go+1.5 go+1.7 go+1.9 go+2.1 go+2.35 go+2.7 go+3.15 go+3.4 go+3.75; do
  i=$((i + 1))
  run "$R" --name "$(printf 'launch60-%02d' $i)" --pace 60 --gas-at "$at" --gas-for 12 --after 0.5
done
# The same key script six times.
for i in 1 2 3 4 5 6; do
  run "$R" --name "repeat60-$i" --pace 60 --gas-at go+0.5 --gas-for 12 --after 0.5
done
run "$R" --name shot60 --pace 60 --gas-at go+0.5 --gas-for 9 --after 0.2 --shot ov8+0.3 --shot go+4.5 --shot go+8.5
# No limit, with the clean clock and with the host's clock.
run "$R" --name free-clean-1 --gas-at go+1 --gas-for 12 --after 0.5 --shot go+6 --shot ov8+0.3
run "$R" --name free-clean-2 --gas-at go+2 --gas-for 12 --after 0.5
run "$R" --name free-clean-3 --gas-at go+1 --gas-for 12 --after 0.5
run "$R" --name free-clean-4 --gas-at go+2 --gas-for 12 --after 0.5
run env REFWINE_CLOCK_START=host "$R" --name free-host-1 --gas-at go+1 --gas-for 12 --after 0.5
run env REFWINE_CLOCK_START=host "$R" --name free-host-2 --gas-at go+2 --gas-for 12 --after 0.5
run env REFWINE_CLOCK_START=host "$R" --name host60-1 --pace 60 --gas-at go+1 --gas-for 12 --after 0.5
run env REFWINE_CLOCK_START=host "$R" --name host60-2 --pace 60 --gas-at go+2 --gas-for 12 --after 0.5
# Other tick rates.
for hz in 30 120 240; do
  i=0
  for at in go+0.3 go+1 go+1.7 go+2.4; do
    i=$((i + 1))
    run "$R" --name "launch$hz-$i" --pace "$hz" --gas-at "$at" --gas-for 12 --after 0.5
  done
done
# Reverse from standstill, brake from speed, opponents and traffic with no input.
i=0
for at in go+0.5 go+1 go+1.5 go+2 go+2.5 go+3; do
  i=$((i + 1))
  run "$R" --name "reverse60-$i" --pace 60 --down-at "$at" --down-for 8 --after 0.5
done
i=0
for at in go+0.5 go+1.2 go+2; do
  i=$((i + 1))
  run "$R" --name "brake60-$i" --pace 60 --gas-at "$at" --gas-for 5 --down-after-gas 0 --down-for 6 --after 0.5
done
for i in 1 2 3; do
  run "$R" --name "racers60-$i" --pace 60 --racers --traffic --seconds 31 --max-seconds 60
done

# The port. No Wine, no display. Node inside or outside the distrobox.
cd "$PROJECT" || exit 1
P=(timeout 90 node tools/reference-wine/port-launch.mjs --out "$RAW")
i=0
for at in ov8+0.2 go+0 go+0.35 go+0.5 go+0.6 go+0.9 go+1.2 go+1.5 go+1.7 go+1.9 go+2.1 go+2.35 go+2.7 go+3.15 go+3.4 go+3.75; do
  i=$((i + 1))
  "${P[@]}" --name "$(printf 'port-launch60-%02d' $i)" --gas-at "$at" --gas-for 12 --after 0.5
done
i=0
for at in go+0.5 go+1 go+1.5 go+2 go+2.5 go+3; do
  i=$((i + 1))
  "${P[@]}" --name "port-reverse60-$i" --down-at "$at" --down-for 8 --after 0.5
done
i=0
for at in go+0.5 go+1.2 go+2; do
  i=$((i + 1))
  "${P[@]}" --name "port-brake60-$i" --gas-at "$at" --gas-for 5 --down-after-gas 0 --down-for 6 --after 0.5
done
"${P[@]}" --name port-racers60 --racers --traffic --seconds 31
"${P[@]}" --name port-racers60-whole --whole-push --racers --traffic --seconds 31
# Gas at every third tick from GO to GO+4 s, for the share of each regime on the port.
for k in $(seq 0 3 240); do
  printf 'port-sweep-%d go%s\n' "$k" "$(LC_ALL=C awk "BEGIN { printf \"%+.4f\", $k / 60 }")"
done | xargs -P 4 -L 1 bash -c 'timeout 90 node tools/reference-wine/port-launch.mjs --out "$0" --name "$1" --gas-at "$2" --gas-for 12 --after 0 >/dev/null' "$RAW/../port-sweep-raw"
python3 tools/reference-wine/analyze.py csv "$RAW"/../port-sweep-raw/port-sweep-*.json > "$RAW/../port-sweep.csv"
rm -rf "$RAW/../port-sweep-raw"
gzip -9f "$RAW"/*.json
