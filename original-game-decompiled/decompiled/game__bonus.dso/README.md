# bonus.dso

Compiled DaviScript for the bonus objects in a race. This folder holds generated output. No script source exists on the disc or in the install.

| File | Content |
|---|---|
| `bonus.dsasm` | Full disassembly: every item and instruction with its file offset |
| `bonus.pseudo.txt` | Readable reconstruction, generated from the disassembly only |
| `items.csv` | All 668 items: classes, members, functions, arguments, imports |

Reproduce with:

```bash
python3 -I scripts/formats/dso_dump.py original/install/bonus.dso decompiled/game__bonus.dso/bonus.dsasm decompiled/game__bonus.dso/items.csv decompiled/game__bonus.dso/bonus.pseudo.txt
```

## Confirmed

The parser consumes all 25,177 bytes and yields 668 items and 724 instructions. Layouts come from the loader in `spel.dat`.

**File:** `u32 version` (must be `0x1B`, checked in `0x004d8a80`), `u32 compile time`, then 5 item lists, each `i32 count` plus items. `bonus.dso` fills three of them: classes, one variable (`g_Player`) and the imported functions.

**Item** (`0x004d4040`, `0x004d3e90`): `u8 tag`, `i16 length + name`, type. A type is `u8 kind` (0 void, 1 double, 2 int, 3 string, 4 object; the runtime's printer has `Double`, `String` and `Class`), `u8 count` (`0xFF` means none), then `count * {u8 tag, u16 index}`.

| Tag | Item | Body after the header |
|---|---|---|
| `0x32` | member | none |
| `0x35` | argument or local | `i32` stack offset |
| `0x37` | variable | `i32` value |
| `0x3B` | function | 2 item lists, then code |
| `0x3C` | method bound to game code | argument list |
| `0x3D` | method with code | 2 item lists, code, 1 item list |
| `0x3F`, `0x41` | imported function | argument list |
| `0x42` | class | member list, method list |

**Code** (`0x004ddb10`): `u16 count`, then instructions (`0x004e39d0`, table `0x4e3c38`). Operand forms come from `0x004e2d10`, table `0x4e2f74`.

| Tag | Reads | Printer text |
|---|---|---|
| 0 | `i32` target | `JP %d` |
| 1 | `i32` target, `u8`, operand | `P%s %d` |
| 2 | `i32` target, `u8`, 2 operands, `u8` | conditional compare and jump |
| 3 | 2 operands | move |
| 4 | 2 operands, `u8` op, operand | `BINOP` |
| 5 | 2 operands, `u8` op | unary, table `0x4e880c` |
| 6 | 2 operands, `u8` | `UPDATE` |

| Operand tag | Reads | Meaning |
|---|---|---|
| 0 | `u8` kind and value | constant (kind 0 none, 1 double, 2 int, 3 string, 4 int) |
| 1 | `u8` | register (`[R%d]`) |
| 2 | path | item reference, innermost first |
| 3 | none | stack (`(STACK, %s)`) |
| 4 | path, `u8` | call (`CALL %s%s`) |
| 5 | `u16` | index |

Operator names come from the runtime's own tables. Binary: `+ * - / >= <= > < == <> OR AND`. Unary: `NEG NOT`, casts, `ROUND`, trigonometry, `LOG10 EXP LOG`, `STRLEN STRLWR STRUPR ASCII CHR`.

**How the game uses it.** `script_init` (`0x00475b50`) registers `D3DVECTOR`, `D3DCOLOR`, `CPlayer` and `CBonus` and loads `bonus.dso`. Handlers are found by built names such as `OnPickup_%s` (`0x00477df0`) and `OnFramecall_%s` (`0x00478ac0`), so they match object names like `pw_fastf_ANIM` in the `.omp` files.

## Inferred

- **Stack model behind `bonus.pseudo.txt`.** `MOV Rn` pushes a value of that kind, and a call consumes its arguments plus `@self`. Evidence: argument offsets fit this order, and all 190 functions end with an empty stack under the model.
- **`UPDATE`.** In `bonus.pseudo.txt` it appears as `UPDATE<sub 1>` with money and turbo, and `<sub 3>` with damage, so sub 1 looks like add and sub 3 like subtract. The `sub` values were not traced into the interpreter.
- `JP -2` at the end of each function means return.

## Unknown

- The exact meaning of tags 1 and 2, because `bonus.dso` has no conditional jumps to test against.
- Exact interpreter behavior. It was not executed. Only the file structure and printer names are direct evidence.
- Whether other `.dso` scripts ever existed. This is the only one on the disc, and `spel.dat` names only this one.
