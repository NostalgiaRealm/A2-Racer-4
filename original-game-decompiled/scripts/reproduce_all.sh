#!/bin/bash
# Rebuilds this package from the two inputs. Run from anywhere. Target binaries are never executed here.
# Requires: python3, Ghidra 12.1.4 (ghidra-headless), 7z, cabextract, file, wrestool, pdftotext,
# Detect It Easy (diec), a Python with pefile, and the bundled unshield under scripts/tools/unshield.
# Inside a distrobox, the scripts call host tools through distrobox-host-exec when that command exists.
set -euo pipefail

INSTALL="${INSTALL:-$HOME/.wine/drive_c/Program Files (x86)/Davilex/A2 Racer 4}"
ISO="${ISO:-$HOME/V1.01 A2 Racer 4 - De politie slaat terug!.iso}"
PREFIX_C="${PREFIX_C:-$HOME/.wine/drive_c}"
OUT="${OUT:-$(cd "$(dirname "$0")/.." && pwd)}"
PEPY="${PEPY:-$HOME/.local/share/reverse-engineering/python-analysis/bin/python}"
S="$OUT/scripts"

mkdir -p "$OUT"/{inventory,logs/ghidra,original/install,original/disc,original/disc-image,extracted,decompiled,analysis-projects,docs/original-documentation}

# 1. Byte-exact copies of the inputs
cp -a "$INSTALL/." "$OUT/original/install/"
cp -a "$ISO" "$OUT/original/disc-image/"

# 2. Disc audit and extraction (own ISO 9660 parser; result compared with 7-Zip on 2026-10-30)
python3 -I "$S/iso_analyze.py" "$OUT/original/disc-image/$(basename "$ISO")" "$OUT/inventory/iso" \
  --extract "$OUT/original/disc" --unreferenced "$OUT/extracted/iso-unreferenced-sectors"

# 3. Files the installer placed outside the install folder (paths from INSTALL.LOG; syswow64 is Wine's mapping of system32)
E="$OUT/original/wine-prefix-external"
mkdir -p "$E/windows/syswow64" "$E/windows/MsAgent/Chars" "$E/Program Files (x86)/Davilex/Shared/Service" \
  "$E/users/rick/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Davilex" "$E/users/rick/Desktop" "$E/registry"
for f in httpct.ocx INETWH32.DLL NMOCOD.DLL NMSCKN.DLL NMORENU.DLL SERVICE.CPL; do cp -a "$PREFIX_C/windows/syswow64/$f" "$E/windows/syswow64/"; done
cp -a "$PREFIX_C/windows/MsAgent/Chars/hunny.acs" "$E/windows/MsAgent/Chars/"
cp -a "$PREFIX_C/Program Files (x86)/Davilex/Shared/Service/." "$E/Program Files (x86)/Davilex/Shared/Service/"
cp -a "$PREFIX_C/Program Files (x86)/Davilex/Davilex Service.lnk" "$E/Program Files (x86)/Davilex/"
cp -a "$PREFIX_C/users/rick/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Davilex/"*{A2,Service}* \
  "$E/users/rick/AppData/Roaming/Microsoft/Windows/Start Menu/Programs/Davilex/"
cp -a "$PREFIX_C/users/rick/Desktop/A2 Racer 4.lnk" "$E/users/rick/Desktop/"

# 4. Nested installers and archives
python3 -I "$S/wise_extract.py" "$OUT/original/disc/setup.EXE" "$OUT/extracted/disc-setup.EXE__wise"
python3 -I "$S/wise_extract.py" "$OUT/original/disc/service/Setup.exe" "$OUT/extracted/disc-service-Setup.exe__wise"
python3 -I "$S/extract_nested.py" "$OUT" "$S/tools/unshield"
A="$OUT/extracted/disc_Adobe_Acrobat_rp505nld.exe__embedded-cabs/cab_00_at_00020528.cab__cab"
python3 -I "$S/blast.py" "$A/_INST32I.EX_" "$A/_INST32I.EX___blast" --archive
python3 -I "$S/rc_extract.py" "$OUT/original/disc/Data" "$OUT/extracted/game-archives"

# 5. Inventories and module triage
python3 -I "$S/build_inventory.py" "$OUT"
"$PEPY" -I "$S/module_triage.py" "$OUT"
python3 -I "$S/build_module_roles.py" "$OUT"

# 6. Decompilation of the modules that run the game (resumable: delete a module's summary.json to redo it).
# Inventory-only modules are skipped: see analysis_scope in inventory/modules.csv.
python3 -I "$S/run_ghidra_batch.py" "$OUT" --ceiling-gb 9 --max-jobs 3

# 7. Per-module resources and raw string scans; translation-unit map for spel.dat
"$PEPY" -I "$S/extract_module_metadata.py" "$OUT"
python3 -I "$S/build_tu_map.py" "$OUT/decompiled/game__spel.dat"

# 8. Text versions of the original documentation
D="$OUT/original/disc"; DOC="$OUT/docs/original-documentation"
pdftotext -layout "$D/Handleiding/Handleiding.pdf" "$DOC/Handleiding.pdf.txt"
python3 -I "$S/winhelp_to_text.py" "$D/LEESMIJ.HLP" "$DOC/LEESMIJ.HLP.txt" "$DOC/hlp-pictures/LEESMIJ"
python3 -I "$S/winhelp_to_text.py" "$D/Data/MenuData/Menu.hlp" "$DOC/Menu.hlp.txt" "$DOC/hlp-pictures/Menu"
python3 -I "$S/winhelp_to_text.py" "$E/Program Files (x86)/Davilex/Shared/Service/SERVICE.HLP" "$DOC/SERVICE.HLP.txt" "$DOC/hlp-pictures/SERVICE"

# 9. DaviScript, data format checks and generated maps
B="$OUT/decompiled/game__bonus.dso"; mkdir -p "$B" "$OUT/inventory/validation"
python3 -I "$S/formats/dso_dump.py" "$OUT/original/install/bonus.dso" "$B/bonus.dsasm" "$B/items.csv" "$B/bonus.pseudo.txt"
python3 -I "$S/formats/d3d_check.py" "$OUT/extracted/game-archives/rcs" "$OUT/inventory/validation/d3d_models.csv"
python3 -I "$S/formats/track_dump.py" "$OUT/original/install" "$OUT/inventory/validation/track_files.csv"
python3 -I "$S/formats/check_archives.py" "$OUT/original/disc/Data" "$OUT/extracted/game-archives"
python3 -I "$S/write_spel_map.py" "$OUT"
"$PEPY" -I "$S/classify_delphi_gaps.py" "$OUT"
python3 -I "$S/finalize_nested_inventory.py" "$OUT"
python3 -I "$S/write_module_records.py" "$OUT"

# 10. Analyst names on a copy of the projects, then the coverage report. Text documents are hand-written and not regenerated.
python3 -I "$S/apply_annotations.py" "$OUT" game__spel.dat game__rsc.dll game__A2Racer4.exe
python3 -I "$S/build_coverage.py" "$OUT" --inputs "$INSTALL" "$ISO"
