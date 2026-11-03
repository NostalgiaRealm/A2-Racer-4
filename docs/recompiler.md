# The spel.dat recompiler

`tools/recomp/` turns the original x86 `spel.dat` into `public/game/spel.wasm` and `public/game/spel.meta.json`. Run it with `npm run recompile`. It needs Python 3 with `capstone`; the machine's reverse-engineering environment has it at `~/.local/share/reverse-engineering/python-analysis/bin/python`.

Inputs: `original-game-decompiled/original/install/spel.dat` and Ghidra's function list `original-game-decompiled/decompiled/game__spel.dat/functions.csv`. Both stay unchanged. The output is about 6.5 MB and takes about 10 seconds to build.

| File | Purpose |
|---|---|
| `recompile.py` | PE loading, function discovery, control-flow graphs, x87 depth and flag analysis |
| `lift.py` | Instruction lifting and structured control flow |
| `wasmgen.py` | WebAssembly binary encoder |
| `replacements.py` | What is not lifted: hooks, intrinsics, byte patches, resume points |
| `build.py` | Puts it together, writes the module, metadata and `out/report.json` |

## The model

**Memory.** Linear memory holds the PE image at its original virtual addresses, so every absolute address and struct offset in the code stays what it was. Layout: POP table at `0x10000`, COM objects from `0x20000`, stack `0x100000-0x3E0000`, thread block at `0x3F0000`, host thunk addresses from `0x3F8000`, image from `0x400000`, code map at `0x760000`, heap from `0xC00000`, 256 MB in total. `.text` is not loaded, except for the index tables some switches read.

**Registers.** Each x86 function becomes a wasm function `(esp, eax, ecx, edx) -> (esp, eax)`. `edx` results go through a global, read only when a later instruction needs it. `ebx`, `ebp`, `esi` and `edi` are plain locals, because the MSVC calling convention makes them callee-saved. The few functions that read them as inputs (`__finally` blocks, `__setjmp3`) are found by analysis and get them through globals.

**Flags.** Most comparisons compile to a direct wasm comparison of the saved operands, chosen by which kind of instruction set the flags. Functions where one condition can see different kinds of flag setter, or that use `adc` chains, `sahf` and the like, materialise flags into locals.

**x87.** The stack is modelled with f64 locals at statically known depths, found by dataflow. Calls pass ST(0) results through a global. Two consequences:

- Precision is 53 bits, which is this port's choice. What the original ran at is not established: `FUN_004aa0c0` sets the reserved precision-control value `01` every frame and `FUN_0050bfc0` sets 11 around the physics, and the Intel manuals leave `01` undefined (Bochs treats it as extended; `docs/research/win32-surface.md` lists it as open). So results can differ from a native run in the last bits, and bit-equal comparison with a native trace is not possible. Under Wine the first three ticks of the original agree with this model to about 7 digits, with the x87 control word not read, and that is all this shows (`evidence/reference-wine/results.md`).
- Rounding-control is honoured where it matters (`fistp`, `frndint`). `__ftol` truncates.

**Control flow.** Reducible graphs use Ramsey's algorithm ("Beyond Relooper") to nest `block` and `loop` without a dispatcher. The nine irreducible functions get a state machine. By address they are mostly in the C runtime and qhull. `FUN_00489820` is not: `tu_map.csv` places it among `Ovl_Communicator.cpp` functions. `out/report.json` lists all nine. Jump tables become `br_table`; the compiler folds index offsets into the displacement and leaves holes, and both are handled.

**Calls.** Direct calls are wasm calls. Indirect calls go through a `u16` table per code byte (`CODE_MAP`) to a `call_indirect`. Imports and COM methods are host thunks: fake code addresses that call JavaScript through one import, `env.host(id, esp, eax, ecx, edx)`, and pop their arguments from a table.

**Entry points.** Ghidra's list is the base. Added: code pointers in data and in `push` immediates that it missed or glued onto preceding padding, and whatever `replacements.py` asks for. Exception-handling funclets are left out.

## What is not lifted (`replacements.py`)

| Address | Original | Why |
|---|---|---|
| `0x00458270` | `WinMain` | Its loop would block the browser; `source/host/race.js` runs one pass per tick |
| `0x0044CA80` | Pause and quit dialogs | They spin on the keyboard inside one call; `Race.pollPause` runs the same steps across ticks |
| `0x004A6700` | Frame clock update | Fixed tick: same 4-entry ring. The first sample is the clock's value at init, the second 8.4 ms as measured, every later one exactly T. A steady ring's `dt` alternates its last bit. See `hook!updateClock` in `source/host/race.js` and [`intentional-differences.md`](intentional-differences.md), Clock ring |
| `0x00484FC0` | HUD draw (wrapped) | Marks the HUD pass and moves HUD groups for the screen shape |
| `0x005593C0` | `__CxxThrowException` | Fatal, except inside the guarded particle functions |
| `0x0055B100`, `0x0051E7A0`, `0x005251C0` | `longjmp`, the two `setjmp` callers | qhull leaves through `longjmp` on flat input as a normal path. It throws a JS exception; the hook re-enters a second copy of the function from the setjmp return address |
| `0x00559400`, `0x0055B39C`, `0x00558524` | `_chkstk`, `_EH_prolog`, `__ftol` | Inlined: odd register conventions |
| `0x00558550`, `0x00559E50`, `0x00559960`, `0x0055AAF8`... | `_CIacos`, `_CIasin`, `_CIpow`, `_CIsinh`... | x87 helpers that jump between labels with values live across calls. They map to `Math` |
| `0x005580E0`, `0x0055B3C0`, `0x0055B700`, `0x00559650` | `memcpy`, `memmove`, `memset`, `strrchr` | Computed jumps and the direction flag. Bulk memory instructions instead |

The owner's fixes, parts 11 to 13 of his `A2-Racer-4-Fixes` 1.5.4: his added code at `0x575500` and the hooks of those parts, from `tools/recomp/owner-fixes/`, which also says what they needed from the recompiler: `pushad`, `popad`, `pause`, x87 arguments for five of his functions, a tail jump into the inlined `__ftol`, return addresses stored for the calls of the reset function, and four hooks spliced into their caller because they hand back results in registers a call does not return.

Byte patches, both from the owner's `A2-Racer-4-Fixes`: the no-CD change from part 7 (`0x004CD478`), and part 9's `traffic_mass` in the form of a changed operand: the `1.0` in the two `FDIVR` at `0x00416002` and `0x0042898F` becomes a cell at `0x003F1000` that `source/host/race.js` sets to `min(1, tick * 25)`. Why: `docs/original-behavior.md`, traffic pushes.

## Debugging

`node tools/run-headless.mjs --ticks 300` runs the race without a browser, using the same host code. The module carries a name section, so a trap's stack trace names the original functions. `tools/recomp/build.py --trace 004e25d0,004d8a80` makes those functions call `env.trace` on entry. `out/report.json` lists analysis problems: `unsupported` functions are decoded junk Ghidra took for code, and they trap if ever called.

`--no-ret-store` leaves out return-address stores and the last-indirect-target global. Use the default build when chasing a `BAD_INDIRECT_CALL`, since `g_a` then holds the target.

## Overriding a function

To replace an original function with JavaScript: add its address to `REPLACEMENTS` with a hook name and the bytes it pops, then bind it with `m.bindRaw('hook!name', pop, (esp, ecx, edx, eax) => result)`. With `keep_body: True` the original stays callable through `m.__call(addr, esp, eax, ecx, edx)`, which is how wrappers work.
