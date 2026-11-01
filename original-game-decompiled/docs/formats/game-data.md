# Game data formats

Models, tracks, physics tables, fonts and INI files. Layouts come from loaders in `spel.dat`. Field names here are descriptive analyst names unless a string proves them.

## Confirmed

### `.d3d` models: `mesh_load` `0x004be590`

```
i32 v
if v < 0:  i32 vertices; i32 triangles; vertices * 49 bytes
else:      vertices = v; i32 triangles; vertices * 33 bytes
triangles * 9 bytes     (starts with 3 u16 vertex indices)
```

The code rejects unsupported versions. All 1,971 models match their size exactly: 1,847 with the 49-byte vertex and 124 without a version field (`scripts/formats/d3d_check.py`, `inventory/validation/d3d_models.csv`).

### Track files: `etappe0`-`etappe8`

`0x004ae490` loads them in the order `.cmp`, `.dmp`, `.pmp` with `.rmp`, then `.omp`. `.pth` loads separately.

| File | Loader | Layout |
|---|---|---|
| `.cmp` | `0x004b35f0` | `i32 count`, then 24-byte records of six 32-bit values |
| `.dmp` | `0x004aa9d0` | `i32 count`, then 36-byte records of nine 32-bit values |
| `.omp` | `0x004aead0` | `i32 count`, then 68-byte records, see below |
| `.pmp` | `0x004ab6d0` | `i32 chunks`; each chunk has 3 floats, 2 ints, then 3 int lists (`i32 count`, values) |
| `.rmp` | `0x004aba30` | `i32 -1`, `i32 value`, `i32 chunks`; each chunk has 4 plane lists |
| `.pth` | `0x004641d0` | `i32 -1`, `i32 paths` (40 at most); each path has 6 ints, the last being a point count, then 16 bytes per point |

- **`.omp` record:** `i32`, `i32 type`, 3 floats, 3 floats, `char name[32]`, `i32`. Names such as `pw_reps_ANIM` link to the `anim` INI files, and the `pw_*` ones link to the `bonus.dso` handlers.
- **`.rmp` planes:** errors name the lists road, land, extra and rail. Limits are 16, 24, 12 and 12. `0x004b31a0` reads one plane as 4 vertices (x, y, z, u, v, and a colour dword when the version is -1), then 6 int indices: 120 bytes in all.
- `0x004ae570` stops with an error unless `.pmp` and `.rmp` have equal chunk counts.

Validation (`scripts/formats/track_dump.py`, `inventory/validation/track_files.csv`): 52 of 54 files parse with every byte accounted for. `etappe6.omp` has 136 unread bytes at the end (the size of 2 records) and `etappe6.pth` has 224.

### Physics tables

- `VDYNS.DAT` is read as 100 records of `0x268` bytes in `0x004290f0`: 61,600 bytes exactly. `0x00433270` passes the same buffer and sizes to `0x00558c1d`.
- `PHYS%d.DAT` is handled in `0x00432d20` (next to `car_twk.cpp`) as 20 records of `0xF0` bytes through `0x00558c1d`. No such file exists on the disc.

### DaviScript

`bonus.dso` is decoded in full. See `decompiled/game__bonus.dso/README.md`.

### Other files

- `sfx.img` and `sfx.ind` on the disc are identical, and differ from `VDYNS.DAT` in 263 of 61,600 bytes.
- The name `default.txt` and the `.icd` extension do not occur in any game module.
- `etappe1.hbp` and `etappe5.hbp` are on the disc only, 8 bytes each. The string `hbp` was not found in `spel.dat`.

### INI files and the code that references them

Function addresses are those that reference the file name.

| File | Module | Referencing code |
|---|---|---|
| `raser.ini`, `game.ini` | `spel.dat` | `0x00448cd0` registers them; `game.ini` also `0x0046ee10`, `0x004932a0` |
| `behavior.ini` | `spel.dat` | `0x004013f0`, `0x0040f000` |
| `cops.ini` | `spel.dat` | `0x004079a0` |
| `traffic.ini` | `spel.dat` | `0x00413a10` |
| `opponent.ini` | `spel.dat` | `0x00419a30` |
| `damage.ini` | `spel.dat` | `0x00426a90` |
| `car_cfg.ini` | `spel.dat` | `0x004492c0` |
| `intel.ini` | `spel.dat` | `0x00449460`, `0x00449690` |
| `car_snd.ini`, `anmtypes.ini` | `spel.dat` | `0x0044c200` |
| `sound.ini` | `spel.dat` | `0x004506e0` |
| `language.ini` | `spel.dat` | `0x00458bc0` |
| `overlay0`-`overlay7.ini` | `spel.dat` | `0x00487f20`; `overlay7.ini` is named in code but not on disc or in the install |
| `communi.ini` | `spel.dat` | `0x0048ae80`, `0x0048ebe0` |
| `menu.ini` | `menu.exe` | `0x00480b74`, `0x00487270`, `0x004a790c` |
| `game.ini`, `raser.ini` | `menu.exe` | `0x00480dd4`, `0x0048c07c` |
| `agent.ini` | `menu.exe` | `0x004891e0`, `0x004893a0`, `0x0049e678`, `0x0049eb00` |
| `static.ini` | `menu.exe` | `0x0049da44` |
| `L0_ANIM.INI` | `menu.exe` | `0x0048e9f8` |
| `debug.ini` | `setdebug.exe` | `0x00445940` |

`overlay1`-`6.ini` differ from `overlay0.ini` by only 10-22 changed lines.

## Inferred

- `.cmp`, `.dmp`, `.pmp` and `.omp` hold, in that order: camera or path points, detail records, per-chunk visibility and waypoint links, and placed objects. This reads off field use and strings such as "chunk waypoint left over"; each field was not traced.
- The second `.rmp` header value is a total count across chunks.
- The 3 floats in `.pmp` are a chunk position, because they are stored at the chunk's position fields.
- `0x00558c1d` is the C runtime `fwrite`, going by its signature and how it is used, so `0x00433270` and `0x00432d20` save tweaked physics data rather than load it.
- The trailing bytes in `etappe6.omp` and `etappe6.pth` are leftovers from an earlier save, because the loaders never read them.

## Unknown

- The meaning of each byte in the 49-byte and 33-byte vertices. The format of `.fnt` beyond its first 48 bytes being `0xFF`.
- `VDYNS.DAT` field meanings.
- Which INI keys are read and how: this table stops at the file level.
- Whether the `.CHK` and `.hbp` files were used in any shipped code path.
