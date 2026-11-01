# Resource archives and `rsc.dll`

Covers `rcs.IMG/IND`, `MenuRcs.IMG/IND`, `RC.IMG/IND`, the `.CHK` files, and the `xvga_*` API in `rsc.dll`.

## Confirmed

**Named archives** (`rcs`, `MenuRcs`). `rsc.dll` `xvga_init_fileio` (`0x10001090`) reads the index:

```
IND:  i16 count
      count * { char name[20]; u32 offset_in_img; }
```

- Member size is the next offset minus this one. The last member ends at the end of the IMG.
- Names are compared with `0x100134c0`.
- Members are plain files stored without compression or encryption: PCX, TGA, BMP, WAV, D3D, FNT.
- Validation (`scripts/formats/check_archives.py`, result in `inventory/validation/archives.txt`): 2,787 members cover all 114,235,152 bytes of `rcs.IMG`, and 577 members cover all 94,400,362 bytes of `MenuRcs.IMG`.

**`rsc.dll` API**, from the export thunks at `0x10001005-0x10001041`:

| Export | Implementation | Behavior |
|---|---|---|
| `xvga_init_fileio(ind, img)` | `0x10001090` | Loads the index, opens the IMG |
| `xvga_exit_fileio` | `0x10001b50` | Frees and closes |
| `xvga_fileio_set_check_sequence(0 or 1)` | `0x100013f0` | Value 1 makes open and exist skip the archive and use loose files |
| `xvga_src_fopen(name)` | `0x100017c0` | Looks in the index and seeks to the member; if not listed, plain `fopen` |
| `xvga_src_fseek` | `0x10001470` | On the archive handle, offsets are relative to the current member |
| `xvga_src_filelength` | `0x100016a0` | File length for ordinary handles |
| `xvga_src_fclose` | `0x10001940` | Keeps the archive handle open |
| `xvga_file_exist(name)` | `0x10001a30` | Index first, then `fopen` |
| `xvga_rc_num_files`, `xvga_rc_filename`, `xvga_rc_filepos`, `xvga_rc_filelength` | `0x10001c00`, `0x10001c30`, `0x10001c90`, `0x10001cd0` | Index queries |
| `xvga_get_filehandle` | `0x10001d10` | OS handle of a stream |

In this build all error messages are the literal placeholder text "Tekst in box" with title "Title".

**`RC.IND`/`RC.IMG`.** `RC.IND` is `u16 count` (186), then `count * u32 offset`, and the first offset is 2. `RC.IMG` begins with the same `u16` count. Members have no names. `spel.dat` opens them in `0x00458650` and `0x00458730`, with "animations" in the error messages, and reads them in `0x004cc580`: a `u16` count, then four `i16` values per image, then image data.

**`spel.dat` has its own archive code.** `0x00447be0` passes `rcs.img` to `0x004c5e90`, and `0x004c62c0` opens files, from `D:\Work\dxdraw\Fileio.cpp`.

**`.CHK` files.** `rcs.CHK` and `MenuRcs.CHK` are on the disc only. They hold `u16 2`, `u32 count`, then `count` 8-byte values. The sizes fit exactly: 2,784 for `rcs.CHK` and 621 for `MenuRcs.CHK`.

## Inferred

- The four `RC` member values are width, height and a hotspot: the first image has 125, 120, 62, 44, and 62 is half of 125.
- The `.CHK` values look like Windows FILETIME dates: their high parts are `0x01c0....`, which falls in 2000. They differ from the IND counts (2,787 and 577), and the installer does not copy them, so they look like build leftovers.
- The "check sequence" name suggests a load-order check, but the code only uses the flag to prefer loose files.

## Unknown

- What the `*Empty ResItem*` members are for. They hold real PCX or TGA data under a placeholder name.
- The full pixel format of `RC` images.
- Who calls `xvga_fileio_set_check_sequence` in `menu.exe`, and with which value.
