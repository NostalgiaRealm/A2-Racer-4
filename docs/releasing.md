# Releasing

What a release contains, what stays out, and how to make one. Run this only when a release is requested. Do not retag or overwrite a published release: make a new version.

## What is published

The repository holds the port and the decompile. `.gitignore` decides what stays out of it, and the decompile archive is made from what is committed, so both agree.

| Left out | Why | Where it is listed |
|---|---|---|
| `original/disc-image/`, the ISO | A byte copy of the disc. The decompile and the port do not need it, and the sibling releases do not carry one either | `inventory/input_fingerprint_iso_before.sha256`, `inventory/disc_inventory.csv` |
| `original/disc/`: `Adobe Acrobat/`, `DXSetup/`, `MSagent/`, `dxmedia/`, `service/`, `setup.EXE`, `autorun.exe`; `extracted/disc*/` | Third-party redistributables and installers. They were never decompiled, by the owner's decision | `inventory/module_roles.csv`, `inventory/disc_inventory.csv` |
| `original/wine-prefix-external/` | What the installer put outside the game folder: NetManage DLLs, shortcuts and registry excerpts of one machine | `inventory/wine_prefix_external_inventory.csv` |
| `INSTALL.LOG`, `INSTTRCK.LOG` | Installer logs that name the local user. No game file reads them | `inventory/install_inventory.csv` |
| `reach.pkl` | A leftover analysis pickle | none |

Kept from the disc: `Data/`, `Handleiding/`, the read-me and help files. `tools/prepare-assets.py` takes `Hunny.acs` from there. To repeat the decompile from the disc (`scripts/reproduce_all.sh`) you need your own copy of it.

`rcs.img`, 114 MB, is over GitHub's limit of 100 MB per file. Git holds it in pieces in `large-files/`. `tools/large-files.mjs restore` runs on `npm ci`, checks the SHA-256 and writes `public/assets/game/rcs.img`, `original/install/rcs.img` and `original/disc/Data/rcs.IMG`. The decompile archive holds it whole, at `original/install/rcs.img`.

## Assets

No `.zip` copies: they held the same files as the installer, the `.dmg` and the source. Since 1.1.1 the Windows installer, the `.dmg` and the AppImage are the desktop downloads, and the web build comes from the source with `npm run build`. Each release uploads about 1.5 GB less per host.

| Asset | Made by |
|---|---|
| AppImage, Linux `.tar.gz`, Windows installer, `integrity-*.json` | `npm run desktop:linux`, `npm run desktop:win` on Linux. Wine is on the path for the Windows resource step |
| macOS `.dmg`, `integrity-darwin-*.json` | `.github/workflows/macos-release.yml` on an existing tag and draft release. On GitLab they are the same files |
| `-source.tar.gz`, `CHANGELOG-*.md`, `BUILD-INFO-*.json` | `npm run release:archives` |
| `-original-game-decompiled.tar.gz` with `.manifest.json` and `.sha256` | `npm run release:archives -- --decompile`, only in a release where `original-game-decompiled/` changed. Other releases link to the last release that has it: 1.1.1 |
| `SHA256SUMS.txt` | `node tools/package-release.mjs --sums`, last, over `release/<version>/` |

GitHub takes them as release assets. GitLab takes them into the generic package registry, `packages/generic/a2-racer-4/<tag>/<file>`, and the release links them with `direct_asset_url` `/-/releases/<tag>/downloads/<file>`.

## Steps

1. Set the version in `package.json` and `package-lock.json`. Write the section in `CHANGELOG.md` and `docs/releases/<version>.md`. Update the version line in `README.md`.
2. Commit. Tag `v<version>`. Push the branch and tag to `origin` (GitHub) and `gitlab`. Same commit on both.
3. From that commit: `npm ci`, `npm run desktop:linux`, `npm run desktop:win`, launch check, `npm run release:archives`. Move the packages into `release/<version>/`.
4. Make a draft release on GitHub, run the macOS workflow on the tag, fetch its files into `release/<version>/`.
5. `node tools/package-release.mjs --sums`. Upload everything to both hosts, with the release notes. Publish.
6. Check each host on its own: a fresh clone at the tag, the commit, the file list, every asset downloaded and compared with `SHA256SUMS.txt`, without being signed in.

The tag is the release. Later commits on `main`, such as this document's, do not move it.

## Kinds of check

Keep these apart in the notes. A later one does not stand in for an earlier one.

| Kind | What it says | How |
|---|---|---|
| Source | The tree works | `tools/check-*.mjs`: [validation.md](validation.md) |
| Package content | The package holds the right bytes | `tools/verify-desktop-package.mjs`, runs in the build, writes `integrity-*.json` |
| Launch | The package starts and a race runs | `node tools/check-desktop.mjs --exe <executable>` under Xvfb, Linux. Windows package under Wine by hand: start it with `--remote-debugging-port`, drive it with Playwright's `connectOverCDP`. That is Wine, not Windows |
| Gameplay | Someone or something played it | The flow checks, in a browser. Not on the packages |
| Real device | It works on that device | None so far |
