# spel.dat: Win32 and DirectX surface for the JavaScript host

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. Fixed in place below: Unknown (the `U` spin in `FUN_00439910`). The rest of the note is as it was written.
>
> The 8-bit path (`3D kaart` off, `RESOLUTION` 0 and 1) was run on an emulated Windows 98 machine and ported after this note was written: [`render-8bit.md`](render-8bit.md) holds where it differs, and C3 (`SHADEMODE`, Ramp device, palette flags, `SetMaterial` count, the `FUN_004b9b40` paths) and I1 (the advice to skip this path) are fixed in place below.

All addresses are `spel.dat` image addresses (base `0x00400000`). `FUN_*` and `DAT_*` are Ghidra names. CRT names in parentheses are mine unless the Ghidra name already shows them. Evidence is the function or call site given in each row; arguments were read from `disassembly.asm`, because the decompiler drops most COM arguments.

Reachability tiers used below (computed from `calls.csv`, `data_refs.csv` and a scan of `.rdata`/`.data` for function pointers):

| Tier | Meaning |
|---|---|
| W | direct-call chain from `WinMain` `0x00458270` |
| E | direct-call chain from CRT entry `0x00559715` only (startup/exit) |
| I | reached only through an indirect call or a taken address (vtable, handler table, `FUN_0043c120` state pointer) |
| X | no direct caller, no reference from reachable code, no pointer in data: treated as unused |

---

# Confirmed

## C0. Image and process facts

| Fact | Value | Evidence |
|---|---|---|
| Fixed base, no relocations | base `0x00400000`, data directory 5 empty | PE header |
| Entry point | `0x00559715` (CRT) → `WinMain(hInst, 0, cmdline, nCmdShow)` at `0x00458270` → `exit` `FUN_00559c79` | `entry` decompile |
| Sections | `.text 0x401000-0x575fff`, `.rdata 0x576000-0x58cfff`, `.data 0x58d000-0x751407` | `sections.csv` |
| `.data` raw size | `0x3d000`, so `0x5ca000-0x751407` is zero-initialised BSS | PE section header |
| Stack | reserve `0x100000`, commit `0x1000` | PE optional header |
| Subsystem | 2 (GUI) | PE optional header |
| Threads | none: no `CreateThread`, `_beginthread`, `Sleep`, `WaitFor*`, `SetEvent`, `SetTimer`, MCI, AVI or multimedia-timer import | `imports.csv` |
| Video | no video API imported; `[MOVIES]` keys in `raser.ini` have no player in `spel.dat` | `imports.csv` |
| TEB access | only `FS:[0]` (3,141 instructions). No other `FS:` offset anywhere | instruction scan |
| Random seed | `srand(time(NULL))` in `FUN_004c55c0` (`FUN_00559f8f`, `FUN_0055861b`), so a run is not reproducible unless the host fixes `GetLocalTime`/`GetSystemTime` | `FUN_004c55c0` |

Start-up order that fixes the order of host calls (`FUN_004580e0`):

1. `FUN_00475b50` script engine (`_findfirst`, `fopen` on the script file).
2. `FUN_00447db0` reads `raser.ini`.
3. `FUN_004491f0` writes `[PLAYER] finished=0` to the game INI; `FUN_00449b30` reads `[GFX OPTIONS]`.
4. `FUN_004480f0` → `FUN_004c55c0`: window, DirectDraw, display mode, surfaces, system info. Then `FUN_00447be0`: disc check, file list.
5. `FUN_0046ee80`: DirectInput.
6. `FUN_004c04b0(focus, 10, 10, 0x1000)`: Direct3D.
7. `FUN_0044c200`: game data, DirectSound (`FUN_004506e0`), loads with progress flips.
8. `FUN_004a65e0`: `QueryPerformanceFrequency`.

Main loop `0x004582de-0x00458350`, exact order:

```
while (DAT_006fb89c != 0) {
  FUN_0044cb80();  // handle_game: timer, input, physics, render, flip
  FUN_004517f0();
  FUN_0044e180();  // frame counter ++
  if (FUN_00458020()) break;  // message pump, 1 = WM_QUIT
  if (key(VK_CONTROL 0x11) && key(VK_F10 0x79)) FUN_00458400();  // BMP screenshot to disk, no tweak gate
  FUN_0041c150(&DAT_005d3118);  // cop radio
}
```

`DAT_006fb89c` is set to 1 by `FUN_0044cf60` and cleared by `FUN_0044cda0(4)`.

Display configuration comes from `raser.ini` `[PROGRAM] RESOLUTION`, shipped as 3, through `FUN_00447870`:

| RESOLUTION | Mode index (`0x5b37b0` table, stride `0x14`) | W×H×bpp | Driver var | Forces focus | `FUN_0044bd10` `DAT_006fb8d0` |
|---|---|---|---|---|---|
| 0 | 0 | 320×200×8 | 0 | no | 0 |
| 1 | 3 | 640×480×8 | 0 | no | 0 |
| 2 | 9 | 640×480×16 | 0 | no | 1 |
| 3 (shipped) | 9 | 640×480×16 | 1 | 1 | 1 |
| 4 | 10 | 800×600×16 | 1 | 1 | 1 |
| 5 | 6 (+`FUN_004c0450(1)`, device forced to RGB) | 320×200×16 | 0 | no | 1 |
| 6 | 6 | 320×200×16 | 1 | 1 | 1 |
| 7 | 11 | 1024×768×16 | 1 | 1 | 1 |
| 8 | 12 | 1280×1024×16 | 1 | 1 | 1 |
| 9 | 13 | 1600×1200×16 | 1 | 1 | 1 |

Current mode: `0x5b3798` W, `0x5b379c` H, `0x5b37a0` bpp, `0x5b3794` index. Focus `DAT_0059dbb4`: 1 = back buffer, 2 = system-memory buffer screen. `FOCUS=1` in `raser.ini` sets 2 (`FUN_004477b0`), but `FUN_00447870` then overwrites it with 1 for RESOLUTION 3, 4, 6, 7, 8, 9. `WINDOWED=0` shipped. The patch notes' mode-table addresses (`0x005B3798`, `0x005B3864`, ...) match this table.

## C1. Imports

### File I/O (reached through the recompiled CRT)

The game never calls `CreateFileA` directly. Game code uses `fopen` `FUN_005589a5`, `fread` `FUN_00558b35`, `fwrite` `FUN_00558c1d`, `fseek` `FUN_0055a06b`, `ftell` `FUN_005692e1`, `fclose` `FUN_005588fd`.

| Import | Tier | Users | Behaviour callers depend on |
|---|---|---|---|
| `CreateFileA` | W, I | `FUN_00565ef5` (`_sopen`); `FUN_0056310f` (`CONIN$`, console only) | access, share, disposition from the CRT; relative paths against the current directory |
| `ReadFile` | W | `FUN_0055fc3a` (`_read`) | returns bytes read; 0 at EOF |
| `WriteFile` | W | `FUN_0055fe30` (`_write`), `FUN_00561acb` (CRT error text) | bytes written |
| `SetFilePointer` | W, I | `FUN_00562b76` (`_lseek`), `FUN_005677d3` | new position; `0xFFFFFFFF` plus `GetLastError` on failure |
| `CloseHandle` | W | `FUN_0055ef30`, `FUN_00565ef5` | nonzero |
| `GetFileType` | E, W | `FUN_005618ab` (`_ioinit`), `FUN_00565ef5` | must be `FILE_TYPE_DISK` (1) for files, otherwise the CRT treats them as devices |
| `FlushFileBuffers` | I | `FUN_005630b8` (`_commit`) | success |
| `SetEndOfFile` | W | `FUN_00568263` | success |
| `FindFirstFileA` | W | `FUN_005590ff` (`_findfirst`): `FUN_00475860` (fatal "Scriptfile not found" if missing), `FUN_00447a80` (only with `[CDCHECK]` keys, absent in the shipped INI) | handle or `INVALID_HANDLE_VALUE` |
| `FindClose` | W | `FUN_005591c9` | |
| `FileTimeToLocalFileTime`, `FileTimeToSystemTime` | W | `FUN_005591e8` (`__timet_from_ft`), inside `_findfirst` | |
| `GetFileAttributesA` | W | `FUN_0055926e` (`_access`): `FUN_004489a0`, `FUN_00458650`, `FUN_00458730`, `FUN_004683f0`, `FUN_004cd3b0` | `-1` for a missing file drives real decisions |
| `GetCurrentDirectoryA`, `GetFullPathNameA` | W | `FUN_00569161` (under `FUN_0056914e`, `_getcwd`): `FUN_004c3b60` builds every INI path | absolute path, no trailing backslash required (one is added if missing) |
| `GetDriveTypeA` | W | `FUN_00569232` (`_getcwd` validation), `FUN_004cca80` (drive table `A:\`..., 27 entries from `"%c:\"`) | 5 = CD-ROM, stored as type 3, used by the disc check (C1 system info) |
| `GetModuleFileNameA` | E, W | `FUN_0056152c` (`_setargv`), `FUN_00561acb` | |
| `GetStdHandle` | E, W | `FUN_005618ab`, `FUN_00561acb` | |
| `SetStdHandle` | W | `FUN_0055a18c`, `FUN_0055a203` | no-op acceptable for a GUI process (standard CRT behaviour, not traced further) |
| `SetHandleCount` | E | `FUN_005618ab` | return ignored |

### INI

| Import | Tier | Users | Dependence |
|---|---|---|---|
| `GetPrivateProfileIntA` | W | `FUN_004c3cd0` only (164 call sites) | args `(section, key, 0, 0x7406f0)`: default is always 0, missing key returns 0 |
| `GetPrivateProfileStringA` | W | `FUN_004c3d10` (default `""` at `0x712694`, path `0x7406f0`), `FUN_00499960` | |
| `WritePrivateProfileStringA` | W | `FUN_004c3c30`, `FUN_004c3c70` (integer form); `FUN_00499580` tier X | written values must be visible to later reads in the same run; fatal only from the "no INI file set" guard, the return value is not checked |

`FUN_004c3b60` builds `0x7406f0` as `<cwd>\<name>`; a name of 16 characters or more, or an empty name, is fatal ("filename has incorrect lenght"). The active INI is global state, set before each read.

### Heap and memory

| Import | Tier | Users | Dependence |
|---|---|---|---|
| `LocalAlloc` | W | `FUN_004caaf0`, `FUN_004ca420`, `FUN_004bc4e0`, `FUN_004cbc70`, `FUN_004c71b0`, `FUN_004cce20`, `FUN_004c66c0`, `FUN_004c5e90`, `FUN_004cca80`, `FUN_004c9c90`, `FUN_004cbd20` | flag `0x40` (`LPTR`) at all 13 call sites: zeroed memory; NULL is fatal at the sites that check |
| `LocalReAlloc` | W | `FUN_004c70d0` (sound exit) | `(ptr, 0, 2 LMEM_MOVEABLE)`, return not used; only shrinks the sound table to 0 at exit |
| `LocalFree` | W | `FUN_004c6560` | nonzero return is fatal ("failure to free file list") |
| `HeapCreate`, `HeapDestroy` | E | `FUN_00561a56` (`_heap_init`) | 0 aborts start-up with CRT error 0x1c |
| `HeapAlloc`, `HeapFree`, `HeapReAlloc`, `HeapSize` | W, E | `malloc` `FUN_00559f59`, `free` `FUN_00559d4e`, `realloc` `FUN_0055a9b4`, `calloc` `FUN_0055ab88`, SBH `FUN_0056201c`, `FUN_00562085`, `FUN_005626b9`; `_msize` `FUN_0055dfbc` | zero-fill flag from `calloc` |
| `VirtualAlloc`, `VirtualFree` | W | CRT small-block heap `FUN_005626b9`, `FUN_0056276a`, `FUN_00562085` | reserve + commit at page granularity |
| `IsBadReadPtr`, `IsBadWritePtr`, `IsBadCodePtr` | I | `FUN_0056556c`, `FUN_00565588`, `FUN_005655a4`: C++ EH validation (`FUN_0055d7be`, `FUN_0055d2ad`, `FUN_00560d38`) | must return 0 for valid pointers |

### Timing

| Import | Tier | Users | Dependence |
|---|---|---|---|
| `QueryPerformanceFrequency` | W | `FUN_004a65e0` | TRUE: frequency stored as `float` at `0x7128b4`. FALSE: timer uses `timeGetTime`, divisor `1000.0` |
| `QueryPerformanceCounter` | W, I | `FUN_004a6700` (per frame), `FUN_004a6840` (reset), `FUN_0050a5e0` (vtable slot `0x578840`, Ipion performance counter) | FALSE from the game timer is fatal ("HiRes timer failed") |
| `timeGetTime` | W | fallback in `FUN_004a6700`, `FUN_004a6840` | only used when QPF fails |
| `GetTickCount` | W, I | game clocks `FUN_004482c0`, `00448330`, `004483a0`, `00448470`, `00448570`, `004486a0`; progress `004414e0`, `00441510`, `004415e0`; events `0043a910`, `0043a980`, `0043ac80`, `0043bd60`; `0044e830`, `0044e970`, `00450190`, `0048abe0`; cars `004239e0`, `00425730`, `00425a40`, `00426530`, `00426fe0`, `00427400`; AI `0040e5a0`; paths `004632e0`. Tier X: `0043b500`, `0043f330`, `0043f440`, `0043f590`, `0043fa50`, `0043fc03`, `0044fd22`, `004264b0`, `004635a0` | milliseconds; all uses are differences |
| `GetSystemTimeAsFileTime` | W | `FUN_00559348` (`clock`): `0044e160`, `0044e190`, `0044e200`, script `004d7960`, qhull `0051d8e0`, `0051e8e0`, `00524a80`, `005255c0`, `00539270` | |
| `GetSystemTime`, `GetLocalTime`, `GetTimeZoneInformation` | W | `FUN_00559f8f` (`time`): `FUN_004c55c0` seed, script `004d79f0`, qhull `0051ceb0`, `005255c0`, `00539270`; `FUN_0056352a` (`_tzset`) | |

Game clock detail (`FUN_004a6700`, object `0x7128b0`): `t = (float)count / (float)freq` stored as a 32-bit float at `0x7128b8`; `dt = t - previous_rounded_t`. The stored `dt` at `0x7128bc` is a weighted average of the last four raw values (`0.5, 0.25, 0.125, 0.125`), ring at `DAT_00712868`, index `DAT_007128c0`, ring initialised to `0x3dcccccd` (0.1). `FUN_004a6800` returns 0.1 when `dt == 0` or `dt > 0.1`. It does not clamp negatives. Consequence: the host's counter must start near zero. The owner's patch notes measured this effect at long uptimes (`README_technical_spel.dat.md`, part 9). `FUN_004a6840` restarts the ring and sets `dt = 0`; its only caller is `FUN_0044ca80` (after pause or the quit requester).

### Windows and messages

| Import | Tier | Users | Dependence |
|---|---|---|---|
| `RegisterClassA` | W | `FUN_004c55c0` | class `"Davilex Entertainment"`, style 3, wndproc `FUN_004cd6b0`, no menu; return ignored |
| `LoadIconA`, `LoadCursorA` | W | `FUN_004c55c0` | id `0x7f00`; return only passed to `RegisterClassA` |
| `CreateWindowExA` | W | `FUN_004c55c0` | fullscreen: exstyle `0x40000`, style `0x80000000`, size from `GetSystemMetrics(0/1)`; windowed: exstyle `0x300`, style `0xc00000`, size W×H. Title from `[PROGRAM] NAME`, default `"Davilex Game"` (`0x59db3c`). NULL returns failure, then fatal |
| `GetClientRect`, `MoveWindow` | W | `FUN_004c55c0` | size correction only |
| `ShowWindow` | W | `FUN_004c55c0` (`nCmdShow`), fatal paths (`SW_MINIMIZE` = 6) | must activate the window, see `WM_ACTIVATEAPP` below |
| `UpdateWindow` | W | `FUN_004c55c0` | |
| `PeekMessageA`, `TranslateMessage`, `DispatchMessageA` | W | `0x458041`, `0x4cd579`, `0x4cd5bc`, `0x4cd5f9`, `0x4cd63c`, `0x4cd670` | always `(msg, NULL, 0, 0, PM_REMOVE=1)`. `WM_QUIT` (`0x12`) tested on `msg.message` |
| `WaitMessage` | W | `0x458074` | blocks while the application is inactive (C4) |
| `PostMessageA` | W | `FUN_004c4040` | `WM_CLOSE` (`0x10`) to own window at shutdown |
| `PostQuitMessage` | I | wndproc on `WM_DESTROY` | |
| `DefWindowProcA` | I | wndproc | must turn `WM_CLOSE` into `WM_DESTROY`, otherwise the shutdown pump has nothing to do. The pump then returns anyway (`FUN_004cd660` returns 0) |
| `GetUpdateRect`, `BeginPaint`, `EndPaint` | I | wndproc `WM_PAINT` | no drawing between them |
| `SetCursor` | I, W | wndproc `WM_SETCURSOR` (NULL = hidden), `FUN_004cece0` | |
| `GetAsyncKeyState` | W | `FUN_004c5e40` only (138 call sites) | sign bit only. `FUN_004c5e40(vk)`: first `GetAsyncKeyState(VK_SHIFT 0x10)`; with `vk & 0x100` clear, returns nonzero only if Shift is **up** and `vk` is down; with `vk & 0x100` set, only if Shift is down. So every plain key poll reads 0 while Shift is held. Polled independently of DirectInput |
| `MessageBoxExA` | W | `FUN_004c4150` (flags `0x51010`), `FUN_004a0140`, `FUN_004a6980` (flags `0x10010`, caption "Assertion failure") | blocking; only on fatal paths |
| `wsprintfA` | W | `0049fac0`, `0049fc40`, `0042e9b0`, `0042ea90`, `0041aa80`, `0042eb70`, `0042ec50`, `0044ae80`, `0041af00`, `00449ea0`, `00441370`, `00441430`, `00468ca0`, `004641d0`, `004932a0`, `00468990`, `00458bc0`; `00491700` tier X | formats file names and INI keys (`%s%d.wav`, `CE%dL%d.wav`, `percent%d`). Needs `%d`, `%s`, `%02d` at minimum |
| `MessageBeep` | I | `FUN_0045e240` (`MessageBeep(0)`), called from `FUN_0045e920`, a particle update reached through a vtable | no return dependency |
| `SetRect` | W | `FUN_004c5930` (debug text, see GDI) | |
| `ClientToScreen` | W | `FUN_004c41e0` (windowed), `FUN_004c5930` | windowed only in `FUN_004c41e0` |
| `GetCursorPos`, `ScreenToClient` | W | `FUN_004ce640` | unused at run time: gate `DAT_0074b2f4` is never written (C2) |
| `KillTimer` | W | `FUN_004ce410` | no `SetTimer` import, so no timer id can exist |
| `GetSystemMetrics` | W | see system info | |

### System info

| Import | Tier | Users | Dependence |
|---|---|---|---|
| `GlobalMemoryStatus` | W | `FUN_004ccc10` | **`dwTotalPhys` matters:** `FUN_00450de0` starts music only if `DAT_00740dc8 > 17000000`; otherwise music volume is set to 0 and logged. Report more than 17 MB |
| `GetSystemInfo` | W | `FUN_004ccc10` | `dwProcessorType` logged only |
| `GetComputerNameA`, `GetUserNameA` | W | `FUN_004ccc10` | buffers `0x740d58`, `0x740d88` have no other reader; failure tolerated |
| `GetSystemMetrics` | W | `FUN_004c55c0` (0, 1); `FUN_004ccc10` (`0x43`, `0x13`, `0x3f`, `0x49`) | second group only logs and sets flags with no reader found |
| `GetVersion` | E | `entry` | stored for the CRT |
| `GetVersionExA` | W | `FUN_0056521b` (locale) | |
| `GetCommandLineA`, `GetStartupInfoA`, `GetModuleHandleA` | E | `entry`; `GetStartupInfoA` also `FUN_005618ab`; `GetModuleHandleA` also `FUN_0055db58` | `hInstance` returned goes to `RegisterClassA`, `DirectInputCreateA` |
| `GetCurrentProcess`, `TerminateProcess`, `ExitProcess` | W | `FUN_00559c9b` (`doexit`), `FUN_004c4150`, `FUN_00559830` | `ExitProcess(1)` after fatal message |
| `LoadLibraryA`, `GetProcAddress` | W | `FUN_005666e2`: `user32.dll` `MessageBoxA`, `GetActiveWindow`, `GetLastActivePopup` (CRT error box); `FUN_0055db58`: `KERNEL32` `IsProcessorFeaturePresent` then `(*p)(0)`, called from `FUN_00558415` in `_cinit`, falling back to the FDIV test `FUN_0055db1a` | host may return NULL from `GetProcAddress`; the fallback then runs x87 code |
| `OutputDebugStringA` | W | `FUN_004c3fa0` | unused: `DAT_007408ec` is only set through `FUN_004c3f80`, whose first argument is 0 at every site |
| `GetLastError` | W, I | CRT error mapping | |

Log sink: `FUN_004c3fa0` appends to `debug.txt` through `fopen` when `DAT_007408e8 == 1` (`DEBUGON`, also forced on in fatal paths and in `GD_EXCEPTION` catches). 940 call sites, including several per frame in the main loop, so with `DEBUGON=1` every call is an open, write and close.

Disc check, `FUN_004cd3b0` called from `FUN_00447be0` with `"\DATA"`, tier W: (1) if `getenv("NOCD")` (`FUN_0055a328`, string at `0x5b66c0`) is set, its first character becomes drive letter `DAT_00740dec` and the check ends. (2) Otherwise each drive of type 5 (`GetDriveTypeA`, table from `FUN_004cca80`, filled by `FUN_004ccc10`) is tried with `_access("X:\DATA", 0)`. None found: fatal `"program installation check failed "`. **Host options: put `NOCD=...` in the environment block, or report one CD-ROM drive with `\DATA` present.** Then `FUN_004cd4a0(path)` tries `fopen(path, "r")` in the current directory and falls back to `X:\DATA\<name>`. Patch part 7 changes the fatal into a return.

### Console

| Import | Tier | Users | Dependence |
|---|---|---|---|
| `ReadConsoleInputA`, `GetConsoleMode`, `SetConsoleMode` | I | `FUN_0055a6fe` (`_getch`) ← `FUN_004d79c0`, script function `getch` | See below |
| `PeekConsoleInputA`, `GetNumberOfConsoleInputEvents` | I | `FUN_0055a7cf` (`_kbhit`) ← `FUN_004d7990`, script function `kbhit` | See below |

`bonus.pseudo.txt` lines 844-845 list both only as `extern`; no other line of `bonus.pseudo.txt` mentions them. The console imports are not used by the shipped script.

### CRT internals (startup, locale, EH)

| Import | Tier | Users |
|---|---|---|
| `GetEnvironmentStrings`, `GetEnvironmentStringsW`, `FreeEnvironmentStringsA`, `FreeEnvironmentStringsW` | E | `FUN_00561779` |
| `GetACP`, `GetOEMCP`, `GetCPInfo` | E, W | `FUN_00560f35`, `FUN_00560d9c`, `FUN_00560fdb`, `FUN_0055cf6a` |
| `LCMapStringA`, `LCMapStringW` | W | `FUN_0055c112` |
| `CompareStringA`, `CompareStringW` | W | `FUN_0055cf6a` |
| `GetStringTypeA`, `GetStringTypeW` | W | `FUN_00565391` |
| `MultiByteToWideChar`, `WideCharToMultiByte` | W, I | `FUN_00563ddd`, `FUN_0054ee6a`, `FUN_00565391`, `FUN_0055cf6a`, `FUN_0055c112`, `FUN_00561779`, `FUN_00563c91`, `FUN_0056352a`, `FUN_00562da7`, `FUN_0054eaa1` |
| `IsValidLocale`, `IsValidCodePage`, `GetLocaleInfoA`, `EnumSystemLocalesA`, `GetUserDefaultLCID` | W | `FUN_00564aea`, `FUN_0056505d`, `FUN_00564cbf`, `FUN_00564f4a`, `FUN_0056511a` (`setlocale` path under `FUN_0055beb6`, used by the iostream code in DaviScript) |
| `GetLocaleInfoW` | X | `FUN_005686e3`, `FUN_005687f6`, `FUN_005688b9` |
| `SetEnvironmentVariableA` | W | `FUN_0056758d` |
| `RtlUnwind` | W | thunk `0x568990` ← `__global_unwind2` `0x557ff0`, `FUN_00557d4c` |
| `RaiseException` | W | `__CxxThrowException@8` `0x5593c0`, `FUN_0055f3ab` (FP errors) |
| `SetUnhandledExceptionFilter` | X | `FUN_00560d7e`, `FUN_00560d8f` |
| `UnhandledExceptionFilter` | E | `FUN_00561297` |

### GDI32 and ADVAPI32

`SetTextColor`, `SetBkColor`, `SetBkMode`, `ExtTextOutA`, `TextOutA`, `SelectObject`, `GetTextExtentPoint32A`, with `lstrlenA` and `SetRect`, are used by `FUN_004c5930` only (`D:\Work\dxdraw\Font.cpp`), through `IDirectDrawSurface::GetDC/ReleaseDC`. Reachable callers: `0040b380`, `00431b00`, `00431c20`, `00432f40`, `00433020`, `00433100`, `00433270`, `00433950`, `00433c30`, `00433f30`, `004345a0`, `00434900`, `00434c20`, `004350b0`, `004351f0`, `0044da30`, `00471c90`, `0048f380`, `0048f720`. The rest (`00402fa0`, `004226f0`, `00428320`, `00431aa0`, `00431b40`, `00431d50`, `00432020`, `004321a0`, `004323b0`, `00432560`, `004325d0`, `00432880`, `00432990`, `00432c70`, `0043f690`, `0044e200`, `004518e0`) are tier X. `GetUserNameA` (ADVAPI32) is the only ADVAPI32 import.

### WINMM mixer

| Import | Tier | Users | Dependence |
|---|---|---|---|
| `mixerGetNumDevs` | W | `FUN_004cdd80` | **returning 0 is safe:** `FUN_004cdd80` returns 0, `FUN_004ce0d0(4)` returns `-1`, `FUN_004ce030(4, v)` returns 10000, nothing fatal |
| `mixerOpen`, `mixerGetLineInfoA`, `mixerGetLineControlsA`, `mixerGetControlDetailsA`, `mixerSetControlDetails`, `mixerClose` | W | `FUN_004cdd80`, `FUN_004cdfd0`, `FUN_004ce000`, `FUN_004cdfa0` | with a nonzero device count, `mixerOpen` failure and control-details failure are fatal. `FUN_004cdf2a` tier X |

Sole game use: `FUN_0044ca80` (pause) reads volume of line component 4 (`FUN_004ce0d0(4)`), sets it to 0, and restores it afterwards. Control type table `0x5b6770`: `0x50030001`, `0x50030003`, `0x50030002`; index 0 used.

## C2. Window procedure `FUN_004cd6b0`

Handler slots `0x740e08-0x740e70`, plus `0x740df0` and `0x740e04`, have read references only and are in BSS, so they stay NULL (`data_refs.csv`, plus a scan for writes to `0x740e..`). Every message routed to a slot (keyboard, mouse, focus, command, menu and so on) therefore falls through to `DefWindowProcA`. What is actually live:

| Message | Behaviour |
|---|---|
| `WM_ACTIVATEAPP` `0x1c` | **`DAT_00740dfc = wParam & 0xffff`**, `DAT_00740e00 = wParam >> 16`, returns 0 |
| `WM_ACTIVATE` `0x06` | stores `wParam` split into `DAT_00740df4`, `DAT_00740df8` (write-only), returns 0 |
| `WM_DESTROY` `0x02` | `PostQuitMessage(0)`, then `DefWindowProcA` |
| `WM_PAINT` `0x0f` | `GetUpdateRect`, then `BeginPaint`/`EndPaint` if nonzero; returns 0 |
| `WM_ERASEBKGND` `0x14` | returns 1 |
| `WM_SETCURSOR` `0x20` | `SetCursor(NULL)` because `DAT_0074b2f4` is 0; returns 1 |
| `WM_QUIT` `0x12` | logged, `DefWindowProcA` |
| `WM_DRAWITEM` `0x2b` | `FUN_004cee40` if `lParam+0x14` is not the main window; no child controls exist |
| `WM_TIMER` `0x113` | `FUN_004ce4f0`, then `DefWindowProcA`; no timer exists |
| `WM_DEVICECHANGE` `0x219` | `FUN_004ced80`, logs CD insert/remove |
| everything else | `DefWindowProcA` |

**Host requirement:** `DAT_00740dfc` starts at 0 (BSS). The host must deliver `WM_ACTIVATEAPP` with `wParam = 1` before the first main-loop pump, in practice from `ShowWindow` during `FUN_004c55c0`. Otherwise `FUN_00458020` blocks in `WaitMessage` on its first call.

The dxdraw mouse layer is inert: `DAT_0074b2f4`, `0x74b318`, `0x74b188`, `0x74b084`, `0x74b18c` have read references only, so `FUN_004ce550` and `FUN_004ce5d0` (its releases) do nothing. **`FUN_004cece0` is fatal when reached** ("(handle_mouse) Mouse is not initialised", because `DAT_0074b2f4` is 0); see the shutdown row in C4. Game mouse input goes through InputLib.

## C3. COM

**Method names:** every vtable offset below is confirmed from call-site bytes. Offset-to-name resolution comes from my knowledge of the DirectX 5 headers (`ddraw.h`, `d3d.h`, `dinput.h`, `dsound.h`), not from the binary. It is corroborated by adjacent error strings for: `QueryInterface`, `CreateSurface`, `Lock`, `Unlock`, `Flip`, `Blt`, `SetColorKey`, `SetPalette`, `SetDisplayMode`, `SetCooperativeLevel`, `GetPixelFormat`, `GetSurfaceDesc`, `EnumDisplayModes`, `AddAttachedSurface`, `GetAttachedSurface`, `CreatePalette`, `SetEntries`, `SetHWnd`, `SetClipper`, `BeginScene`, `EndScene`, `SetRenderState`, `SetTransform`, `AddViewport`, `SetCurrentViewport`, `SetViewport2`, viewport `Clear`, `SetBackground`, `CreateMaterial`, `SetMaterial`, material and texture `GetHandle`, `CreateDevice`, device `GetCaps`, `EnumDevices`, `EnumTextureFormats`, `DrawPrimitive`, `DrawIndexedPrimitive`, texture `Load`, all DirectInput device calls that have throw messages, and all DirectSound calls that have fatal messages. Header knowledge only: `AddRef`, `Release`, `IsLost`, `Restore`, `GetDC`, `ReleaseDC`, `SetLightState`, `WaitForVerticalBlank`, `Poll`, `GetFrequency`, `SetProperty`, `GetProperty`, `Unacquire`. The owner's patch notes independently name viewport `+0x30` `IDirect3DViewport2::Clear` and DirectDraw `+0x18` `CreateSurface`, and treat device `+0x5C` as render-state setting.

**Error model:** almost every failure is fatal through `FUN_004c4150`, with text from `FUN_004c4400` (DirectDraw), `FUN_004bb290` (Direct3D) or `FUN_004c65b0` (DirectSound). InputLib throws `CInputException` instead, also fatal when caught. So the host must return `S_OK` where listed unless a row says otherwise.

### GUIDs present in `.rdata`

| Address | GUID | Used by |
|---|---|---|
| `0x578d10` | `IID_IDirect3DTexture2` | `FUN_004b9b40` (3 sites) |
| `0x578d20` | `IID_IDirect3DRampDevice` | `FUN_004bbd40`, `FUN_004bbf20`, by value |
| `0x578d30` | `IID_IDirect3DRGBDevice` | same |
| `0x578d40` | `IID_IDirect3DHALDevice` | same |
| `0x578d50` | `IID_IDirect3D2` | `FUN_004c0460` |
| `0x578d60` | `IID_IDirectDrawSurface2` | `FUN_004c4fa0` |
| `0x578d70` | `IID_IDirectDraw2` | `FUN_004c55c0` |
| `0x578d80` | `IID_IDirectSound3DBuffer` | `FUN_004c6a90` (unreachable, below) |
| `0x578d90` | `IID_IDirectSound3DListener` | no reference anywhere |
| `0x578da0` | `GUID_SysKeyboard` | no reference anywhere; devices are created from enumerated GUIDs |
| `0x578db0` | `IID_IDirectInputDevice2A` | `FUN_004f1e50` |
| `0x578dc0-0x578e40` | `GUID_Key`, `GUID_Z/Y/XAxis`, `GUID_POV`, `GUID_Slider`, `GUID_Rz/Ry/RxAxis` | object tables of the data formats at `0x549e20`, `0x54ae40`, `0x54aed0` |

`GUID_SysMouse` and `GUID_Joystick` are not in the binary. `FUN_004bbc50` passes the device GUID in its stack arguments, as `&param_1`.

### IDirectDraw (`DAT_0074088c`, from `DirectDrawCreate`)

| Offset | Method | Site | Args | Checked |
|---|---|---|---|---|
| global | `DirectDrawEnumerateA` | `FUN_004cd150` | `(FUN_004ccf60, 0)` | return ignored |
| global | `DirectDrawCreate` | `FUN_004c55c0` | `(FUN_004cd170(DAT_005b37ac), &0x74088c, 0)`; GUID pointer NULL unless a 3Dfx or `.VXD` secondary driver was enumerated | fatal if nonzero |
| `+0x00` | `QueryInterface` | `0x4c5839` | `IID_IDirectDraw2`, out `0x740894` | fatal |
| `+0x08` | `Release` | `0x4c4100` | | |
| `+0x14` | `CreatePalette` | `0x4c9d09` | flags `0x44` (`8BIT|ALLOW256`), entries `DAT_007409f0`, out `0x7409ec`, NULL. Only when bpp ≤ 8 | fatal |
| `+0x18` | `CreateSurface` | table below | `(desc, &out, NULL)` | fatal except `0x4bc0ce` |
| `+0x20` | `EnumDisplayModes` | `0x4cd2f0` | `(0, NULL, NULL, FUN_004cd280)` | fatal |
| `+0x50` | `SetCooperativeLevel` | `0x4c57fc` | `(hwnd, DAT_005b37a4)`: `0x11` initial, `0x51` after `FUN_00447870` OR-ed in `0x40`; windowed `8` | fatal |

### IDirectDraw2 (`DAT_00740894`)

| Offset | Method | Site | Args | Checked |
|---|---|---|---|---|
| `+0x00` | `QueryInterface` | `0x4c0472` | `IID_IDirect3D2`, out `0x73b778` | fatal |
| `+0x54` | `SetDisplayMode` | `0x4c58ca` | `(W, H, bpp, 0, 0)`, skipped when windowed | fatal ("could not set display mode") |
| `+0x58` | `WaitForVerticalBlank` | `0x44da61` | `(4, NULL)`, only when `[OPTIONS] WAITVBL` ≠ 0 (shipped 0) | ignored |

### Surface creation (`IDirectDraw::CreateSurface`)

`DDSURFACEDESC` size is `0x6c`, zeroed before filling. Offsets: `+4` flags, `+8` height, `+0xc` width, `+0x14` back-buffer count, `+0x18` mip count or Z depth, `+0x48` pixel format, `+0x68` caps.

| Site | Wrapper | dwFlags | Size | dwCaps | Other | Use |
|---|---|---|---|---|---|---|
| `0x4c504d` | `FUN_004c4fa0` | `0x21`, or `1` if no back buffer | | `0x2218` (`PRIMARY|FLIP|COMPLEX|3DDEVICE`), or `0x2200` | `dwBackBufferCount` = `DAT_005b37a8` (initial 1, 0 when windowed) | `DAT_007408ac` primary |
| `0x4c4b53` | `FUN_004c4b00` | `7` | W×H | `0x2800` (`3DDEVICE|SYSMEM`) | | `DAT_00740890` buffer screen. Also `DAT_007408b0` back when no flip chain: `0x2800`, or `0x6000` windowed |
| `0x4c4acd` | `FUN_004c4a80` | `7` | args | `0x800` | | system-memory images: `FUN_004ca420`, `FUN_004cb230`, `FUN_004cbd20`, `FUN_0044bfc0` (16×16) |
| `0x4c4bf6` | `FUN_004c4b90` | `0x1007` | args | caller's | caller's pixel format | `0x1800` (`TEXTURE|SYSMEM`) from `FUN_004b9890` and via `FUN_004b96c0`; `0x4005000` (`TEXTURE|VIDEOMEM|ALLOCONLOAD`) from `FUN_004b9ab0` |
| `0x4c4ca6` | `FUN_004c4c30` | `0x21007` | args | caller's `| 0x401008` (`TEXTURE|COMPLEX|MIPMAP`) | mip count at `+0x18` | mipmapped textures |
| `0x4c067d` | `FUN_004c0610` | `0x47` | W×H | `0x20000` (`ZBUFFER`); `0x20800` for focus 2 | Z depth `0x10` from `FUN_004c04b0` | `DAT_0073b774` |
| `0x4bc0ce` | `FUN_004bc070` | `0x1007` | 256×256 | `0x10005000` (`TEXTURE|VIDEOMEM|LOCALVIDMEM`) | pixel format = primary's (`0x740968`) | memory probe |

**Texture-memory probe, `FUN_004bc0f0`, called from `FUN_004bbd40` and `FUN_004bbf20`:** creates `0x4bc070` surfaces into a 1,024-entry stack array until `CreateSurface` fails (returns 0), with no bound check. It stores `count × 65536 × (bpp/8)` at `this+0x2a1` (`0x73b4f9`), then releases them all. **The host must fail this `CreateSurface` before 1,024 successes**, or stop it by recompiling `FUN_004bc0f0` away (the patch notes crash analysis agrees; their fix returns 64 MB). `0x73b4f9` caps `custom_texture_memory` (`FUN_0044c200`, `DAT_006fb978 = min`) and is written to the INI at `FUN_0044b180`.

### IDirectDrawSurface (all kept as v1 pointers)

`DAT_007408ac` primary, `DAT_007408b0` back, `DAT_00740890` buffer screen, `DAT_0073b774` Z, plus texture and image surfaces. `IDirectDrawSurface2` is obtained for `0x740840`, `0x7408b8`, `0x74089c` by `QueryInterface` (`0x4c5084`, `0x4c523f`, `0x4c52f4`, `0x4c5409`; fatal on failure) but no method is ever called through them, except `Release` of `0x740840` at `0x4c50e5` in the retry path.

| Offset | Method | Sites | Args and notes |
|---|---|---|---|
| `+0x00` | `QueryInterface` | `0x4c5084`, `0x4c523f`, `0x4c52f4`, `0x4c5409` (Surface2); `0x4b9cac`, `0x4b9d3b`, `0x4b9e3a` (Texture2) | fatal |
| `+0x04` | `AddRef` | `0x4b9dae` | no-HAL path: same surface serves as memory and video texture |
| `+0x08` | `Release` | `0x4c407c`, `0x4c40b0`, `0x4c40dc`, `0x4c50da`, `0x4c0911`, `0x4b99aa`, `0x4b9aa3`, `0x4b9c53`, `0x4b9c9b`, `0x4ba3b9`, `0x4ba470`, `0x4ba480`, `0x4cbfdb`, `0x4c5586` (clipper) | |
| `+0x0c` | `AddAttachedSurface` | `0x4c0745`, `0x4c0717`, `0x4c06e9` | Z on primary, back or buffer screen by focus; fatal |
| `+0x14` | `Blt` | `0x4c4300`; `0x4c4eb9`, `0x4c4efc`, `0x4c4f3a`; `0x4c4dd4`; `0x4c8cb4`...`0x4c8f01`; `0x4c93e8`, `0x4c9473`, `0x4c94fe`; `0x4c9784`, `0x4c9828`, `0x4c98cd`; `0x4c9b52`; `0x4b996c`, `0x4b99a4`, `0x4b9a46`, `0x4b9a82`; `0x4ba38e`; `0x44561d`, `0x44566e`; `0x4cea5c`, `0x4cead1`, `0x4ceb43`, `0x4ce7da`, `0x4ce84e`, `0x4ce8bf` | flags: `0x1000000` `WAIT`; `0x1008000` `WAIT|KEYSRC` (`FUN_004c8b90` argument bit 8, `FUN_004c9560`); `0x1000400` `WAIT|COLORFILL` with `DDBLTFX` size `100`, color at `+0x50`. Rects may scale (`FUN_004416f0`: picture to W×H; `FUN_004b9890`: texture region). All sites read are fatal on failure except `0x4b99a4` (mip level copy, return unchecked) |
| `+0x2c` | `Flip` | `0x4c42a4` | `(NULL, 1)` `DDFLIP_WAIT`; fatal. **Sole present call** |
| `+0x30` | `GetAttachedSurface` | `0x4c5208`; `0x4b99c6` (mip chain) | caps value `4` (`BACKBUFFER`) at `0x4c5208`, out `0x7408b0`; fatal |
| `+0x44` | `GetDC` | `0x4c5a33`, `0x4c5b99`, `0x4c5cff` | debug text |
| `+0x54` | `GetPixelFormat` | `0x4c8574` | primary, into `0x740968` with `dwSize 0x20`; **RGB shift and width derived from masks at `+0x10`, `+0x14`, `+0x18`; `DDPF_PALETTEINDEXED8` (`0x20`) branch; fatal on failure** |
| `+0x58` | `GetSurfaceDesc` | `0x4c996d`, `0x4c99a4`, `0x4c9bc8`, `0x4c9c01` | `dwSize 0x6c`, `dwFlags 6`; width and height read |
| `+0x60` | `IsLost` | `0x4c4a68` (helper `FUN_004c4a60`, 25 callers), `0x44818b`, `0x4c0931`, `0x4c9368`, `0x4c96f0`, `0x4b8d38` | nonzero triggers `Restore` |
| `+0x64` | `Lock` | `0x4c47d5`, `0x4c48b6`, `0x4c4925`, `0x4c4d6d`, `0x45848d` | `(NULL, desc, 1 DDLOCK_WAIT, NULL)`, `dwSize 0x6c`. `FUN_004c48f0(surf, &pitch)`: returns `lpSurface` (`+0x24`), writes `lPitch` (`+0x10`). Fatal, except `FUN_004c4ce0` (test lock, failure selects no back-buffer retry) |
| `+0x68` | `ReleaseDC` | `0x4c5e2d` | |
| `+0x6c` | `Restore` | `0x4c4a72`, `0x4c0940`, `0x4c9397`, `0x4c9727`, `0x4b8dd4` | return ignored |
| `+0x70` | `SetClipper` | `0x4c555a` | windowed only |
| `+0x74` | `SetColorKey` | `0x4c5194`, `0x4c53a5`, `0x4c54b0`, `0x44c052`, `0x43b876`, `0x43b8b9`, `0x4b9e77`, `0x4b9eb2`, `0x4ca6c4`, `0x4cbee5` | `(8 DDCKEY_SRCBLT, &ddck)`. `FUN_0044c030`: key 0 on buffer screen. fatal |
| `+0x7c` | `SetPalette` | `0x4c9dbf`, `0x4c9e03`, `0x4c9e43`, `0x4b9dd4`, `0x4b9e06` | ≤8-bit modes and no-HAL palettized textures |
| `+0x80` | `Unlock` | `0x4c49f2`, `0x4c4a36`, `0x4c4d81`, `0x45858a` | `(NULL)` |

Software access actually on the path for RESOLUTION 3: `FUN_004416f0` loads a picture into the buffer screen through `FUN_004409d0` (PCX `FUN_004cae20`, or TGA `FUN_004c00b0`) and `Blt`s to the back buffer; `FUN_004cb630`/`FUN_004c00b0` lock system-memory surfaces to fill textures; `FUN_00441fa0` radar. **The host must expose lockable system-memory pixels in linear wasm memory, 16-bit, with `lPitch`.**

Present, `FUN_004c41e0`: `IsLost/Restore` on primary and back, then `Flip`. If `DAT_005b37a8 == 0`, `Blt(primary, rect, back, srcrect, 0x1000000, NULL)`. `FUN_0044df10`: focus 1 goes straight to `FUN_004c41e0`; focus 2 first `Blt`s buffer screen to back. Callers of `FUN_004c41e0`: `FUN_0044df10`, `FUN_004480f0`, `FUN_00448160`, `FUN_004c4fa0`, and `FUN_00441760` (tier X).

Surface setup order, `FUN_004c4fa0`: create primary; QI Surface2; test `Lock`/`Unlock` (`FUN_004c4ce0(0)`, skipped if the mode's modex flag `DAT_007408e0` is set); on lock failure with a back buffer requested, release both and retry with 0 back buffers. `GetPixelFormat`. `SetColorKey`. `GetAttachedSurface(BACKBUFFER)`; QI; test lock; `SetColorKey`. Create buffer screen; QI; test lock; `SetColorKey`. `FUN_004c9c90` palette (no-op above 8 bpp). Clear both, one flip.

### IDirectDrawClipper

`DirectDrawCreateClipper(0, &clip, 0)` then `+0x20 SetHWnd(0, hwnd)` at `0x4c5528`, surface `SetClipper`, `+0x08 Release` at `0x4c5586`. All inside `FUN_004c4fa0` under `DAT_007408e4` (`WINDOWED=1`). Not reached with the shipped INI.

### IDirectDrawPalette (`DAT_007409ec`)

`+0x18 SetEntries(0, base, count, entries)` at `0x4c9efa` (`FUN_004c9e70`), `+0x10 GetEntries` at `0x4c9fba` (`FUN_004c9f30`, caller `FUN_0043b0b0`, a state handler installed by `FUN_00457880`). `FUN_004c9e70` returns immediately when `DAT_007409f8 = 1`, which `FUN_004c9c90` sets for bpp > 8. `FUN_004c9f30` has the same guard. So above 8 bpp no palette object exists and neither call reaches COM. `FUN_004c9ff0` also writes `peFlags`, only 0, 0x40, 0x80 (the `D3DPAL_*` flags), and then calls `SetEntries`.

### IDirect3D2 (`DAT_0073b778`)

| Offset | Method | Site | Args | Checked |
|---|---|---|---|---|
| `+0x08` | `Release` | `0x4c04a8` | | |
| `+0x0c` | `EnumDevices` | `0x4c33a8` | `(FUN_004c2e40, this)` | fatal |
| `+0x14` | `CreateMaterial` | `0x4bb1f4` | `(out, NULL)`, object is `IDirect3DMaterial2` | fatal |
| `+0x18` | `CreateViewport` | `0x4c0e22` | `(out, NULL)`, object is `IDirect3DViewport2` | fatal |
| `+0x20` | `CreateDevice` | `0x4bbce0`, `0x4bbd04`, `0x4bbd28` | `(&guid, surface, out 0x73b4b4)`; surface by focus: 2 buffer, 1 back, 0 primary | see below |

**`CreateLight` (`+0x10`) has no call site.** All 8 references to `0x73b778` were checked. No `IDirect3DLight` is ever created; the light array built by `FUN_004c38d0` stays empty; `FUN_004c3b40` (`+0x08` on `[ESI+0x58]`) never finds an element.

Device selection, `FUN_004bbd40(focus)`: first constructs a local device list with `FUN_004c31f0` (capacity 100). Bpp < 9: `IID_IDirect3DRampDevice`, type `this+0x278 = 4`, `[+0x2b9] = 1` at `0x4bbe77` (no reader of either was found), failure returns 0. Otherwise `IID_IDirect3DHALDevice`, type `this+0x278 = 1`; on failure logs and tries `IID_IDirect3DRGBDevice`, type 3; failure returns 0. `FUN_004bbf20(focus, type)` is the variant under `DAT_0073b780` (RESOLUTION 5, type 3). After success: `FUN_004bc160` `GetCaps`, `FUN_004bb7a0` state setup, `FUN_004bc0f0` probe. The callers `FUN_004bb560`, `FUN_004bb570` and `FUN_004c04b0` ignore the return value, so a failed device leaves `DAT_0073b4b4` NULL and later code dereferences it.

### IDirect3DDevice2 (`DAT_0073b4b4` = `0x73b258 + 0x25c`)

| Offset | Method | Sites | Args |
|---|---|---|---|
| `+0x08` | `Release` | `0x4bc055` | |
| `+0x0c` | `GetCaps` | `0x4bc1af`, `0x44ba36` | `(hwDesc, helDesc)`, both `dwSize 0xcc` |
| `+0x18` | `AddViewport` | `0x4c0eb4` | |
| `+0x24` | `EnumTextureFormats` | `0x4c1e2e` | `(FUN_004c1e60, 0x73b7d8)` |
| `+0x28` | `BeginScene` | `0x44db07`, `0x441687` | fatal. Only these two sites |
| `+0x2c` | `EndScene` | `0x44dcc0`, `0x4416be` | fatal |
| `+0x34` | `SetCurrentViewport` | `0x4c0f10`, `0x4c0ddf` | |
| `+0x5c` | `SetRenderState` | see table | `(state, value)`; fatal at most sites |
| `+0x64` | `SetLightState` | `0x4badda`; `0x4bba69`, `0x4bbaa0`, `0x4bbad7`, `0x4bbb0e`; `0x456e26`...`0x4575cc` (15); `0x4577f6` | `1` material handle; `4` fog mode, `5` start, `6` end, `7` density |
| `+0x68` | `SetTransform` | 41 sites | `1` world `&0x73b474` (29 sites); `2` view `&0x73b434` (`0x438b58`, `0x485f9a`, `0x486076`); `3` projection `&0x73b3f4` (`0x44c339`, `0x44d465`, `0x44d523`, `0x4518a6`, `0x486008`, `0x4860c6`); `FUN_004bb7a0` sets all three from the device object |
| `+0x74` | `DrawPrimitive` | below | `(type, vtype, verts, count, flags)` |
| `+0x78` | `DrawIndexedPrimitive` | below | `(type, vtype, verts, nverts, indices, nindices, flags)` |

No call of `Begin`, `Vertex`, `Index`, `End`, `GetRenderState`, `GetLightState`, `GetTransform`, `MultiplyTransform`, `NextViewport`, `DeleteViewport`, `SetRenderTarget`, `GetDirect3D`, `GetStats` or clip status was found.

Render states used (state number, value, sites):

| State | Name | Values | Sites |
|---|---|---|---|
| 1 | `TEXTUREHANDLE` | handle from texture table `0x73b1b0`, stride `0x48` | `0x43deb9`, `0x4401e4`, `0x44271e`, `0x442aa8`, `0x442b10`, `0x4451f9`, `0x446151`, `0x447083`, `0x44dad3`, `0x44dba8`, `0x45fdf8`, `0x462d57`, `0x47b228`, `0x4aee0e`, `0x4aef39`, `0x4af08a`, `0x4af1b3`, `0x4b8b4e`, `0x4bd234` |
| 4 | `TEXTUREPERSPECTIVE` | `[+0x298]` = 1 | `0x4bb908` |
| 7 | `ZENABLE` | `[+0x2a5]` = 1; toggled | `0x4bb976`, `0x440355`, `0x462e11`, `0x462e80`, `0x486107` |
| 8 | `FILLMODE` | 1 point, 2 wireframe, restore (default `[+0x2cd]` = 3 solid) | `0x4be3a0`, `0x4be410`, `0x4be558` |
| 9 | `SHADEMODE` | 2 Gouraud, never sent: `DAT_006fb8d0 == 0` returns first, and the constructor's `+0x2c9 = 2` (`0x4bb6ff`) makes the cache compare match | `0x44bce4` |
| 14 | `ZWRITEENABLE` | 0, 1 | `0x4a753d`, `0x4a7639` |
| 17 | `TEXTUREMAG` | 1, 2, 3, 4, 6 | `FUN_004bc200` |
| 18 | `TEXTUREMIN` | 1, 2, 3, 4, 6 | `FUN_004bc200` |
| 19 | `SRCBLEND` | 5 `SRCALPHA`, 6 `INVSRCALPHA`, table `0x5afa50` | `0x43df0a`, `0x440235`, `0x44276d`, `0x443da4`, `0x4445c7`, `0x44524b`, `0x45dd3a`, `0x4470d4`, `0x485f3a`, `0x4a75b2` |
| 20 | `DESTBLEND` | 6, 5, 2 `ONE`, `[ESI+0x4c]`, table `0x5afa54` | `0x43df19`, `0x440244`, `0x44277c`, `0x443db8`, `0x4445e9`, `0x44525a`, `0x45dd4e`, `0x4470e3`, `0x47cd07`, `0x47cd5b`, `0x485f49`, `0x4a75e5` |
| 21 | `TEXTUREMAPBLEND` | 1 decal default, 2 modulate, 7 copy (`DAT_006fb8d0` chooses) | `0x4bb9ad`, `0x44bc25`, `0x44bc4d`, `0x43d476` |
| 27 | `ALPHABLENDENABLE` | 0, 1 | `0x43defb`, `0x43e04c`, `0x440226`, `0x44031c`, `0x44275e`, `0x442b50`, `0x443d90`, `0x443e9e`, `0x44523c`, `0x4453fb`, `0x4470c5`, `0x447278`, `0x45dd26`, `0x45dd9a`, `0x485f2b`, `0x48614c`, `0x4b5e50`, `0x4b5e6f` (18, same count as the patch notes) |
| 28 | `FOGENABLE` | `[+0x27c]` = 0; 0/1 | `0x4bb9fb`, `0x456dba`, `0x457066`, `0x457396` |
| 34 | `FOGCOLOR` | `[+0x280]` = `0xffffff`; `0xc8c8ff`, `0xb4b4c8`, computed | `0x4bba32`, `0x456df0`, `0x456f32`, `0x45709c`, `0x457273`, `0x4573cc`, `0x45750e`, `0x43b322` |
| 41 | `COLORKEYENABLE` | `[+0x2a9]` = 1, set once | `0x4bb93f` |
| 47 | `ZBIAS` | 0, 1 | `0x443dc7`, `0x443e64`, `0x4445f8`, `0x444637` |

Blend table `0x5afa50`: pairs `(2,1)`, `(5,6)`, `(2,4)`, `(5,6)` = `(ONE,ZERO)`, `(SRCALPHA,INVSRCALPHA)`, `(ONE,INVSRCCOLOR)`, `(SRCALPHA,INVSRCALPHA)`.

Filter logic, `FUN_004bc200(this, on)`, `this+0x2a0` = mipmap flag (`DAT_0073b4f8`): `on=0`: mip 3/3, no mip 1/1. `on=1`: mip 6/6, falling back to 4/4 if setting 6 returns nonzero; no mip 2/2. The fallback is the only place where a `SetRenderState` failure is tolerated. Filter chosen by `[OPTIONS] FILTER == 2` in `FUN_0044bbf0`; when `DAT_006fb8d0 == 0` the function returns without filtering.

Device defaults from the constructor `FUN_004bb5a0`, sent in `FUN_004bb7a0`: perspective 1, Z enable 1, color key 1, map blend 1, fog 0, fog color `0xffffff`, fog mode (`+0x284`) 3, fog start 3.25, fog end 50.0, fog density 0.8, fill 3, min texture dimension `+0x29c = 0x40` (read at `FUN_004b9800`, `FUN_004b9b40`: **a requested texture dimension below 64 is fatal**). Fog is switched per track by `FUN_00456d90`, `FUN_00457040`, `FUN_00457370`, each writing `0x40600000` (3.5) to `0x73b4e4`.

Draw calls:

| Site | Function | Call | Prim | VType | Count | Flags | Note |
|---|---|---|---|---|---|---|---|
| `0x4aee55`, `0x4aef82`, `0x4af0cd` | `FUN_004aecd0` | DIP | 4 tri list | 2 `LVERTEX` | `[EBX+0x74]`, `0x84`, `0x64` | 8 | 3 of 4 track passes |
| `0x4af1ff` | `FUN_004aecd0` | DIP | 4 | 2 | `[EBX+0x94]` | 1 | |
| `0x4be46b` | `FUN_004be340` | DIP | 4 | 2 `LVERTEX` | `[ESI+0x84]` | 8 | mesh, `*param_1 == 2` |
| `0x4be4cf` | `FUN_004be340` | DIP | 4 | 1 **`D3DVERTEX`** | `[ESI+0x7c]` | 8 | mesh, `*param_1 == 1` |
| `0x43dfc8` | `FUN_0043de00` | DP | 6 fan | 2 | 6 | 1 | `gfx_bwlk.cpp` |
| `0x4402d1` | `FUN_00440160` | DP | 5 strip | 2 | `0x22`, `0x6c9468` | var | finish flag |
| `0x442792`, `0x442b64` | `FUN_0044269d`, `FUN_00442a25` | DP | 6 | 3 **`TLVERTEX`** | 4 | var, 1 | radar |
| `0x445349`, `0x4453b2` | `FUN_00445180` | DP | 5 | 2 | computed | | skid marks |
| `0x446220` | `FUN_004460c1` | DP | 4 | 2 | computed | | sparks |
| `0x4471d1` | `FUN_00446fe0` | DP | 6 | 2 | computed | | clouds |
| `0x460182` | `FUN_00460070` | DP | 5 | 2 | 4 | 0 | `par_spark.cpp` |
| `0x462e49` | `FUN_00462cf0` | DP | 2 line list | 2 | var | var | `prt_main.cpp` |
| `0x47b260` | `FUN_0047b110` | DP | 6 | 2 | `[ESI+4]` | 1 | car shadow (`S_SHADOW.PCX`; caller `00443100`) |
| `0x40a319`, `0x40a488`, `0x40a6fa`, `0x40a91d`, `0x40af09`, `0x40b30a` | AI debug | DP | 4 or 2 | 2 | | | gate: `DAT_006fb97c`, `DAT_006fb97d` with tweak |

Flag values: 1 `D3DDP_WAIT`, 8 `D3DDP_DONOTUPDATEEXTENTS`. Vertices are passed as pointers into wasm memory, stride by type (`D3DVERTEX`, `D3DLVERTEX`, `D3DTLVERTEX`, 32 bytes each in `d3dtypes.h`).

### IDirect3DViewport2

Object at `viewportEntry + 0x2c` (`FUN_004c0e10`). Calls: `+0x44 SetViewport2` `0x4c0ee0`; `+0x30 Clear` `0x4c0f86`; `+0x20 SetBackground` `0x4576cb` (`FUN_004576c0`), `0x457724` (`FUN_004576f0`). No `Release`, no `AddLight`.

`D3DVIEWPORT2` built in `FUN_004c0e10`: `dwSize 0x2c`, `dwX 0`, `dwY 0`, `dwWidth W`, `dwHeight H`, `dvClipX -1.0`, `dvClipY H/W`, `dvClipWidth 2.0`, `dvClipHeight 2·H/W`, `dvMinZ 0.0`, `dvMaxZ 1.0`. Same as patch part 3.

`Clear(1, &rect, flags)`, rect from the viewport: `FUN_004c0780` flags 1 or 3 (`TARGET`, `|ZBUFFER`). `FUN_004c0840(p)`: flags `p | 2` when Z exists and `DAT_0073b4fd` ≠ 0, otherwise **0**. Each frame `FUN_0044da30` calls `FUN_004c0840(0)`, so **only Z is cleared per frame; the target is not**. `SetBackground(handle)` takes the material handle at object `+0x50`; a failure is fatal.

### IDirect3DMaterial2

Created in `FUN_004bb190`. Calls: `+0x0c SetMaterial`, 28 sites (`0x4bb21f`, `0x4bb286`, `0x40a2fc`, `0x40a46b`, `0x40a6e3`, `0x40a903`, `0x40b2f4`, `0x43b3d5`, `0x43b406`, `0x43de8b`, `0x440445`, `0x4426f2`, `0x442a72`, `0x442aec`, `0x446123`, `0x447055`, `0x44db85`, `0x457708`, `0x457782`, `0x4577c2`, `0x45fdc9`, `0x462d34`, `0x47b203`, `0x4af185`, `0x4b8a80`, `0x4bb097`, `0x4bb14b`, `0x4bb171`; `0x440445` is helper `FUN_00440430`, with 8 callers); `+0x14 GetHandle(device, &handle)` `0x4bb254`. Fatal on failure at creation. `D3DMATERIAL dwSize 0x50`, diffuse and ambient default 1.0, `dwRampSize 0x10` at `+0x4c`. Handle stored at object `+0x50`; `SetLightState(1, handle)` selects it (`0x4badda`).

### IDirect3DTexture2

Obtained by `QueryInterface` from a surface. Texture object (`FUN_004b9b40`, table `0x73b1b0`): `+4` system-memory surface, `+8` video surface, `+0xc` memory Texture2, `+0x10` video Texture2, `+0x14` name, `+0x24`/`+0x28` dimensions, `+0x30` loaded flag.

| Offset | Method | Sites | Notes |
|---|---|---|---|
| `+0x08` | `Release` | `0x4ba490`, `0x4ba4a0`, `0x4b9f1e` | |
| `+0x0c` | `GetHandle` | `0x4b9efc` (video), `0x4b9f56` (memory, no-HAL) | `(device, &handle)`. `0x887602E2` (`D3DERR_TEXTURE_BADSIZE`, compared at `0x4b9efc` as `-0x7789fd1e`): releases, and is fatal if HAL. Other errors fatal |
| `+0x14` | `Load` | `0x4b9d68`, `0x4ba6b7`, `0x4ba7e8` | video from memory |

Paths in `FUN_004b9b40`, chosen by `FUN_004c1030(0x73b258)` = `HWDesc.dwFlags != 0`:

- **HAL (`dwFlags` ≠ 0) and second argument ≠ 4 (`[ESP+0x28]`, stored at texture `+0x2c`; not the device type, `this+0x278` is write-only):** system surface (caps `0x1800`), video surface (`0x4005000`), QI both, `Load`, `SetColorKey` both, `GetHandle` on video.
- **No HAL (`dwFlags` = 0):** video pointer = system surface with `AddRef`, palette set if format type 2, QI, `SetColorKey`, `GetHandle` on memory Texture2. Both are valid game paths.

Mip chain, `FUN_004b9890`: per level a temporary system surface, `Blt` to it, `Blt` into the level, `Release`, then `GetAttachedSurface` at `0x4b99c6` for the next level; level size halves each pass.

Restore after loss: `FUN_004b8bc0` (from the pump): `IsLost` on each video surface; if lost `Restore` and `FUN_004ba4c0` reloads.

### DirectInput

`DirectInputCreateA(hInstance, 0x500, &0x74b994, NULL)` at `FUN_004f1b30`, thunk `0x54ae38`. Failure throws. Use count `DAT_0074b998`.

IDirectInputA: `+0x0c CreateDevice(lpddi+4 = guidInstance, &this[0xa4], NULL)` `0x4f1eec`; `+0x10 EnumDevices(devType, FUN_004f1a50, this, 1)` `0x4f2096` (`DIEDFL_ATTACHEDONLY`); `+0x08 Release` `0x4f1c25`.

IDirectInputDeviceA at `this+0xa4` (`FUN_004f1d30`):

| Offset | Method | Sites | Args |
|---|---|---|---|
| `+0x00` | `QueryInterface` | `0x4f1fd7` | `IID_IDirectInputDevice2A`, out `this+0xa8`; throws on failure, for every device |
| `+0x08` | `Release` | `0x4f1c50` | |
| `+0x0c` | `GetCapabilities` | `0x4f1f62` | `DIDEVCAPS dwSize 0x2c` at `this+0xac`; throws |
| `+0x14` | `GetProperty` | `0x4f0707` | `DIPROP_RANGE` (4), `DIPROPRANGE {0x18, 0x10, offset, 1 BYOFFSET}`; offset 0 (`lX`), and 4 (`lY`) if `dwAxes > 1` (`FUN_004f0790`); throws |
| `+0x18` | `SetProperty` | `0x4eefff` | mouse: `DIPROP_AXISMODE` (2), `{0x14, 0x10, 0, 0, 1 REL}` |
| `+0x1c` | `Acquire` | `0x4ed89a`, `0x4ef1b1`, `0x4f0961` (init, return ignored); `0x4ed518`, `0x4ee5b5`, `0x4ef562` (retry) | |
| `+0x20` | `Unacquire` | `0x4ef1e5`, `0x4f099c` | |
| `+0x24` | `GetDeviceState` | keyboard `0x4ed500`, `0x4ed533` (`0x100` bytes at `this+0xdc`); mouse `0x4ee59d`, `0x4ee5cd` (`0x10` bytes); joystick `0x4ef54a`, `0x4ef57a` (`0x50` bytes at `this+0xe0`) | `0x8007001E` (`DIERR_INPUTLOST`) → `Acquire`; if that returns 0, read again and a second failure throws; if `Acquire` fails, nothing happens and the state buffer stays stale. Any other nonzero first read throws (read for keyboard, mouse and joystick); button test is bit 7 |
| `+0x2c` | `SetDataFormat` | `0x4ed7c5` (`0x54ae20`), `0x4ef0d5` (`0x54aeb0`), `0x4f0885` (`0x54b190`) | throws |
| `+0x34` | `SetCooperativeLevel` | `0x4ed831`, `0x4ef141`, `0x4f08f1` | `(hwnd, 6)` `NONEXCLUSIVE|FOREGROUND`; throws |

IDirectInputDevice2A at `this+0xa8` (`FUN_004f1dc0`): `+0x64 Poll` `0x4ef534` (joystick, return ignored); `+0x08 Release` `0x4f1c6a`.

Data format structures live in `.text` and are read as data:

| Address | Format | dwSize | objSize | dwFlags | dwDataSize | dwNumObjs | rgodf |
|---|---|---|---|---|---|---|---|
| `0x54ae20` | keyboard | 24 | 16 | 2 | 256 | 256 | `0x549e20` |
| `0x54aeb0` | mouse | 24 | 16 | 2 | 16 | 7 | `0x54ae40` |
| `0x54b190` | joystick | 24 | 16 | 1 | 80 | 44 | `0x54aed0` |

Device classes by vtable: keyboard `0x578228`, mouse `0x578250`, joystick `0x578268`; slot 1 init (`FUN_004ed760`, `FUN_004ef070`, `FUN_004f0820`), slot 2 unacquire, slot 3 update. `FUN_004ea7d0` updates all devices once per frame via `FUN_0046fdb0` in `FUN_0044cb80`, so **all DirectInput reads are polled synchronously at frame start**. `FUN_004ea1f0` runs `FUN_004eb170` for `"Keyboard"`, `"Mouse"` and `"Joystick"`, each creating `"<name>%d"` from index 0 upward until init returns false.

DIK names: keyboard table at `0x5b7a18`, stride 12 (`PTR_s_CM_KEYB_ESC_005b7a1c`); device state read by scan code.

### DirectSound

`DirectSoundEnumerateA(FUN_004c6740, 0)` (`0x54b1a8`), then `DirectSoundCreate(NULL or GUID, &0x740924, NULL)` (`0x54b1ae`) in `FUN_004c71b0`. Failure returns `0x2af9`, and `FUN_004c7150` then returns 0, **so sound can be absent without a fatal error**. All 3D code is dead: `+0x34` in the buffer table is only ever zero-initialised, `FUN_004c6a90` branch never taken, `IDirectSound3DBuffer` gets only the `Release` at `0x4c6e0d`. No listener.

IDirectSound:

| Offset | Method | Site | Args |
|---|---|---|---|
| `+0x08` | `Release` | `0x4c710d` | |
| `+0x0c` | `CreateSoundBuffer` | `0x4c6911` (primary), `0x4c6a59` (secondary), `0x4c6b2a` (3D, dead) | `(desc, &out, NULL)`. Primary: `{0x14, 1 PRIMARYBUFFER, 0, 0, NULL}`. Secondary: `{0x14, 0xE8 LOCSOFTWARE|FREQ|PAN|VOL, size, 0, &wfx}`; fatal |
| `+0x14` | `DuplicateSoundBuffer` | `0x4c6ba2` | fatal; used to play overlapping copies |
| `+0x18` | `SetCooperativeLevel` | `0x4c72fc` | `(hwnd, 3)` `DSSCL_EXCLUSIVE`; failure returns `0x2af9`, no sound |

IDirectSoundBuffer (primary `0x74092c`; secondaries in table `DAT_00740934`, stride `0x44`: `+0` name, `+0x28` buffer, `+0x2c` 3D, `+0x30` used, `+0x34` 3D flag, `+0x38` age, `+0x3c` size, `+0x40` id):

| Offset | Method | Sites | Args and checks |
|---|---|---|---|
| `+0x08` | `Release` | `0x4c6e1c`, `0x4c6eb2`, `0x4c706d` | fatal message on failure in some |
| `+0x20` | `GetFrequency` | `0x4c757c` | `FUN_004c7520` |
| `+0x24` | `GetStatus` | `0x4c6c2e`, `0x4c6cd2` | fatal; bit 0 = playing |
| `+0x2c` | `Lock` | `0x4c77b6` | `(0, size, &p1, &n1, &p2, &n2, 1)`; fatal |
| `+0x30` | `Play` | `0x4c6988` (primary `0,0,1`), `0x4c7c0e` (`0,0,flags`: 1 = loop) | fatal |
| `+0x34` | `SetCurrentPosition` | `0x4c6d48` | `(0)` |
| `+0x38` | `SetFormat` | `0x4c694c` | primary, `WAVEFORMATEX`; failure returns `0x2afa`, next mode tried |
| `+0x3c` | `SetVolume` | `0x4c7637` | fatal unless in `-10000..-100` (game clamps to `-4000..-100`, `FUN_0049e370`) |
| `+0x40` | `SetPan` | `0x4c771f` | `-10000..10000` |
| `+0x44` | `SetFrequency` | `0x4c74eb` | `100..100000`, or 0 |
| `+0x48` | `Stop` | `0x4c6d15`, `0x4c7039` | |
| `+0x4c` | `Unlock` | `0x4c7851` | fatal |

Format negotiation, `FUN_004c7150`: mode 13 downward to 1 until `SetFormat` succeeds. Table `0x5b4b60` (Hz, bits, stereo, align): 13 = 44100/16/stereo/4, 12 = 44100/16/mono/2, 11 = 22050/16/stereo/4, 10 = 22050/16/mono/2, 9 = 16000/16/stereo/4, 8 = 16000/16/mono/2, 7 = 44100/8/stereo/2, 6 = 44100/8/mono/1, 5 = 22050/8/stereo/2, 4 = 22050/8/mono/1, 3 = 16000/8/stereo/2, 2 = 16000/8/mono/1, 1 = 11025/8/stereo/2. **Accept mode 13.**

Sound files: `FUN_004c7880` reads a fixed `0x2c`-byte WAV header and copies the body in one `Lock`/`Unlock`. There is no streaming and no notification. A buffer is never written again except on load. Capacity: `[SOUND] BUFFERS` (`FUN_00447550`), shipped 80; when full, `FUN_004c6fb0` evicts by age.

### Enumeration callbacks

| Enumerator | Callback | What it does with results | What the game requires |
|---|---|---|---|
| `DirectDrawEnumerateA` | `FUN_004ccf60(guid, desc, name, ctx)` | stores into table `0x740db0` (20 entries, `0xd8` each); names containing `3DFX`, or starting `DD3Dfx`, `R3D`, `mnstr2`, set `DAT_005b60bc`; other `.VXD` set `DAT_005b60b8`. Returns 1, or 0 when full | **Nothing.** Zero callbacks is valid; `FUN_004cd170` then returns 0 and `DirectDrawCreate(NULL)` runs |
| `EnumDisplayModes` | `FUN_004cd280(desc, ctx)` | reads `dwHeight`, `dwWidth`, `ddpf.dwRGBBitCount`; marks exact match in the mode table at `0x5b37c0`; always returns 1 | **Nothing.** `FUN_004cd330` result only logs "could not find mode"; `SetDisplayMode` still runs and must succeed |
| `IDirect3D2::EnumDevices` | `FUN_004c2e40(guid, desc, name, hw, hel, list)` | copies into a local list, logs, destroyed with the local object in `FUN_004bbd40` | Returns `S_OK`. Results unused for selection |
| `IDirect3DDevice2::EnumTextureFormats` | `FUN_004c1e60(ddsd, list)` | element `0xb0`. Classifies by `ddpf.dwFlags`: `0x20` 8-bit → slot `0x73b822`; `0x08` 4-bit → slot `0x73b81e`; else must be 16-bit (log only otherwise), mask shifts and widths computed. `0x01` alpha → type 4, slot `0x73b826`, **most alpha bits wins**. No alpha → type 3, slot `0x73b82a`: the first candidate with bit total ≤ screen's is taken regardless of shifts; a later one replaces it only if bit total ≤ screen's, shifts equal the screen's, and its total is not further from the screen's | **At least one non-alpha 16-bit format.** `FUN_004c2b90(3)` selects `0x73b82a` for bpp > 8; `FUN_004c2a50` is fatal when the selection is out of range. Report a 565 format matching the primary's masks |
| `DirectSoundEnumerateA` | `FUN_004c6740(guid, desc, name, ctx)` | records `SB16.VXD` in `0x5b4c40`, other `.VXD` in `0x5b4c44` | **Nothing.** Zero callbacks gives "Using default driver" |
| `IDirectInput::EnumDevices` | `FUN_004f1a50(lpddi, this)` | counts `DAT_0074b990` up to wanted index `DAT_0074b98c`; at match calls `FUN_004f1e50` (CreateDevice, GetCapabilities, QI Device2) and returns 0; else returns 1 | **`keyboard0` must exist**, else fatal "Could not find the keyboard device!" (`FUN_0046ee80`). Mouse and joystick optional. Then `[INPUT] DEVICE` (shipped 1, `FUN_0046ee10`) names a device; if not attached, fatal "Device %s is not attached!" |

### Caps the game reads

`FUN_004bc160` copies HW and HEL into the device object; getters use HW when `HW.dwFlags != 0`, HEL otherwise (`FUN_004c1030`).

| Field | Offset | Reader | Effect |
|---|---|---|---|
| `dwFlags` (HW) | `+4` | `FUN_004c1030` | HAL or no-HAL texture path, all getters |
| `dwMaxTextureWidth` | `+0xb4` (HEL `+0x180`) | `FUN_004c1080` ← `FUN_00498490`, `FUN_00498760` | **texture detail limit; 0 means no limit; a texture over a nonzero limit is fatal ("The texture %s violates...")** |
| `dpcTriCaps.dwSrcBlendCaps`, `dwDestBlendCaps` | `+0x74`, `+0x78` (HW only) | `FUN_0044b9d0` | both 0 clears `DAT_006fb940` (`alpha_blending`). Stored in `DAT_006fb928`, `DAT_006fb92c`, used by `FUN_0044b570` and `FUN_00446e50` |
| color model, render/Z depths, light caps, min/max sizes, memory caps | | `FUN_004c15f0` | log only |

## C4. Blocking and control flow

Callers of `FUN_00458020`: only `0x45831c` in `WinMain`. `PeekMessageA` sites: all six listed in C1. Callers of present `FUN_004c41e0` and `BeginScene`: listed in C3. All loops were found by back-edge scan of every function for calls to `PeekMessageA`, `WaitMessage`, `GetTickCount`, `QueryPerformanceCounter`, `timeGetTime`, `GetAsyncKeyState`, `GetCursorPos`, the input manager, or present (up to 4 call levels), then read by hand.

### Loops that do not return until something outside the loop changes

| Address | Function | Spins on | Ends when | Reached |
|---|---|---|---|---|
| `0x00458035-0x00458088` | `FUN_00458020` pump | `PeekMessageA`; `WaitMessage` while `DAT_00740dfc == 0` | queue empty and application active; returns 1 at once on `WM_QUIT` | every frame. After any wait: `IsLost/Restore` on primary, back and buffer screen, `FUN_004b8bc0` textures, `FUN_004c0920` Z, `FUN_004b2ea0(0x73b020)` |
| `0x0044c9a2-0x0044c9ae` | `FUN_0044c990` pause | `GetAsyncKeyState('P' 0x50)` | P released | `FUN_0044ca80` when `DAT_006fb8d8 == 1`, set by P in `FUN_0044cf90` |
| `0x0044c9b0-0x0044c9e9` | same | scan of VK `0..0xff` | **any key seen down and then up** (inner release spin `0x0044c9d1-0x0044c9dc`). Reads 0 while Shift is held | same |
| `0x0044ca01-0x0044ca0d` | `FUN_0044c9f0` quit requester | `VK_ESCAPE` | ESC released | `FUN_0044ca80` when `DAT_006fb8d8 == 2`, set by ESC in `FUN_0044cf90` |
| `0x0044ca0f-0x0044ca58` | same | `J` `0x4a`, `Y` `0x59`, `VK_ESCAPE`, `N` `0x4e` | J or Y: `FUN_0044cda0(4)` (quit) and return. ESC or N: exit loop | same |
| `0x0044ca6a-0x0044ca76` | same | `VK_ESCAPE` | ESC released | same |
| `0x0043ad08-0x0043ad30` | `FUN_0043ac80` | ESC, Enter `0xd`, Space `0x20` | all three released | game state 3 update, after 1,500 ms (`0x5dc`) and one of the keys pressed; returns 1 |
| `0x00419708-0x00419714`, `0x004197cc-0x004197d8` | `FUN_00419600` | `VK_F11` `0x7a` | F11 released | racer callback whose address `FUN_0042de60` stores at `0x42df79` (call frequency not traced). **The spin is not gated by tweak mode**, only the state change is |

No message pump runs and nothing is drawn or flipped inside any of these. `GetAsyncKeyState` is expected to change state on its own, by interrupt. Around pause, `FUN_0044cb80` flips twice before and `FUN_0044ca80` does: `FUN_004ce0d0(4)`; `FUN_004ce030(4, 0)`; pause 3 game clocks 0, 3, 0xb (`FUN_00448330`); `FUN_0042e440`; **the wait**; `FUN_004483a0` for the clocks; `FUN_0042e4a0`; `FUN_004ce030(4, v)`; `FUN_004a6840` clock reset.

### Tweak-only loops (`raser.ini [HELPDESK] TWEAK_MODE`, read by `FUN_00449510` into `DAT_006fb950`, its only write, shipped 0)

`FUN_004351f0` is reached only from `FUN_00427b90` when `DAT_006fb950 == 1` and Ctrl+Space+C. Under it: `FUN_00431c20` `0x00431c70-0x00431d25`, `FUN_00431ad0` `0x00431ae2-0x00431aed`, `FUN_00433270` `0x004332aa-0x004332b6`, `FUN_00433950` `0x00433ade-0x00433c04`, and `FUN_004350b0`, `FUN_00433c30`, `FUN_00433f30`, `FUN_004345a0`, `FUN_00434900`, `FUN_00434c20`. They use GDI text and never flip. `FUN_00458440` (Lock-based dump, `0x45848d`) is under key F with the same gate. In `FUN_0044cf90` the block up to `0x44d55a` is skipped without tweak.

### Dead spin loops (tier X)

`FUN_00427d86`, `FUN_00431b40`, `FUN_004321a0`, `FUN_00432990`, `FUN_00432d20` (no caller, no pointer), and the `FUN_00431e20`, `FUN_00432430`, `FUN_00432640`, `FUN_00432760` group below `FUN_00432d20`.

### Bounded loops around message or flip

| Address | Function | Behaviour |
|---|---|---|
| `0x004cd58b-0x004cd5c0` | `FUN_004cd560` | drains the queue once; called once from `FUN_004480f0`; result ignored |
| `0x004a0173`, `0x004a69db`, `0x004c41a2` | fatal paths | `while (FUN_004cd5e0() != 0)`; then `MessageBoxExA`; then exit |
| `0x004c4131-0x004c4142` | `FUN_004c4040` shutdown | after `PostMessageA(hwnd, WM_CLOSE)`: `while (FUN_004cd660() != 0)`. `FUN_004cd660` always returns 0 (`XOR EAX,EAX` on both paths), so one iteration. It calls `exit(0)` if it sees `WM_QUIT`. **If `PeekMessageA` finds nothing it calls `FUN_004cece0`, which is fatal, so the host's `PostMessageA` must make the message visible to the next `PeekMessageA`** |
| `0x004ae7d0-0x004ae821` | `FUN_004ae570` track load | one `FUN_004415e0` per step (progress) |

Progress drawing `FUN_004415e0`: callers `FUN_0044c200`, `FUN_004580e0`, `FUN_004ae490`, `FUN_004ae570`. Each does `FUN_004416f0` (background to back buffer), `BeginScene`, `FUN_004882f0` (overlay), `EndScene`, flip. Percent table from `[PROGRESS] CALCULATE/COUNT/percentN`, up to 1,000 entries, written back by `FUN_00441430`. This is the only flip outside `handle_game`, the exit clears and start-up. **No fade, requester or video loop exists:** all flips are enumerated above. Overlay requesters (`FUN_00495330`) and the wait screen (`FUN_00497560`) draw inside the normal frame.

### Non-blocking timed waits (per-frame state updates through `FUN_0043c120`, called by `FUN_0043c260`)

| State | Enter / update / exit | Timing |
|---|---|---|
| `FUN_0044cda0(1)` | `0043c5d0`, `0043c650`, `0043c660` | not timed here |
| `(3)` | `0043ab70`, `0043ac80`, `0043ad40` | 1,500 ms before key accept |
| `(6)` | `0043bc20`, `0043bd60`, `0043be50` | 1,000 ms before key accept, no spin |
| `(8)` | `0043a910`, `0043a980`, `0043a9f0` | 4,000 ms |

### Calls that can block in a host

| Call | Site | Note |
|---|---|---|
| `WaitMessage` | `0x458074` | only while inactive |
| `MessageBoxExA` | 3 sites | fatal only |
| `WaitForVerticalBlank` | `0x44da61` | `WAITVBL` only |
| `Flip`, `Blt`, `Lock` with `*_WAIT` | C3 | the game never polls `GetFlipStatus`/`GetBltStatus` |

`Sleep` is not imported. Frame pacing does not exist in the original: the loop runs as fast as `Flip` and physics allow.

## C5. Exceptions and SEH

Structure: 3,141 `FS:[0]` instructions, 1,017 `__CxxFrameHandler` thunks (`MOV EAX, funcinfo; JMP 0x557d9b`), 3,444 `Unwind@` funclets, 137 `_EH_prolog` users, 96 catch records in 66 try blocks (from `FuncInfo` magic `0x19930520`). `__CxxThrowException@8` `0x5593c0`, 190 sites: copies the record template at `0x5795f8` (code `0xE06D7363`, flags 1, 3 parameters, magic `0x19930520`) and calls `RaiseException`. `_except_handler3` `0x55e3b4` frames exist only in CRT code (17 `PUSH 0x55e3b4`: `entry`, `FUN_00558643`, `FUN_005586c5`, `FUN_00558745`, `FUN_0055c112`, `FUN_0055cf6a`, `FUN_0055d559`, `FUN_0055d688`, `FUN_0055d7be`, `FUN_0055d982`, `FUN_0055da5c`, `FUN_0055dab2`, `FUN_005634b0`, `FUN_00565391`, `FUN_005679bc`, `FUN_005686e3`, `FUN_005687f6`). None filters a hardware fault as normal control flow in game code.

Thrown types and sites:

| Type (RTTI) | ThrowInfo | Sites | Throwers |
|---|---|---|---|
| `CInputException` | `0x5872d0` | 51 | InputLib |
| `CHudException` | `0x57f730` | 37 | `Hud_*` |
| `bad_cast` | `0x584188` | 35 | iostream `use_facet` |
| `CFacManException` | `0x583558` | 21 | factory manager |
| `char *` | `0x57d508` | 15 | `FUN_0045d170` (12), `FUN_0045e8d0`, `FUN_004875b0`, `FUN_00487640` |
| `CPhysicsException` | `0x583178` | 7 | `DaviIpionSupport` |
| `CRegVarException` | `0x5828d8` | 6 | `FUN_00498d00`, `FUN_00499580`, `FUN_00499f50`, `FUN_0049aec0`, `FUN_0049b0c0` |
| `out_of_range` | `0x57f4e0` | 5 | STL string |
| `length_error`, `ios_base::failure`, `bad_alloc`, `logic_error`, `runtime_error` | | 9 | STL (includes `0x54c6db` with no type pushed next to it) |
| `CDSRuntimeError`, `list<CDSLinkError>*`, `CFatalErrorThrow`, `std::string` | `0x584c40`, `0x5845c0`, `0x586d80`, `0x587530` | 4 | DaviScript, `FUN_004eac80` |

Every catch funclet classified by its code:

| Class | Count | Funclets |
|---|---|---|
| Fatal (calls `FUN_004c4150`) | 50 | `409cc3`, `40a157`, `44fc36`, `454b66`, `458386`, `4583e5`, `46ed9e`, `46efa2`, `46fd54`, `46fdf5`, `47016d`, `470227`, `470318`, `470f4a`, `471c28`, `4759da`, `475a0c`, `475a7a`, `477d1d`, `477d9f`, `477f52`, `478172`, `478392`, `478583`, `4787a8`, `47882a`, `4789e8`, `478a6a`, `478c28`, `478caa`, `478e68`, `478eea`, `4790a8`, `47912a`, `4792f4`, `479376`, `47ed7c`, `47ed9a`, `485139`, `485157`, `4881e3`, `488201`, `48829e`, `4882bc`, `488337`, `488355`, `4883dc`, `4883fa`, `488731`, `48874f` |
| Rethrow as another type | 5 | `481100` (`char *` → `CHudException`), `4a3fb9`, `4ea3d2`, `4ea532`, `4eb9d2` |
| Non-fatal, resumes | 41 | below |

Non-fatal catches, each returning a mid-function continuation address in `EAX` to `__CxxFrameHandler`:

| Catch funclets | Continuation | Function | Behaviour |
|---|---|---|---|
| `45935f`, `459392` | `0x4593c1` | `FUN_00459280` | log `GD_EXCEPTION`, skip particle work |
| `45aede`, `45af11` | `0x45af40` | `FUN_0045ada0` | same |
| `45c5ba`, `45c5ed` | `0x45c61c` | `FUN_0045c4a0` | same |
| `45ce8a`, `45cebd` | `0x45ceec` | `FUN_0045cd70` | same |
| `45db6a`, `45db9c` | `0x45d303` | `FUN_0045d170` | same |
| `45dc6c`, `45dc9f` | `0x45dcce` | `FUN_0045dc00` | same |
| `45ddae`, `45dde1` | `0x45dd9d` | `FUN_0045dce0` | same |
| `45de51`, `45de84` | `0x45deb3` | `FUN_0045de10` | same |
| `45e823`, `45e856` | `0x45e885` | `FUN_0045e780` | same |
| `45f40a`, `45f43d` | `0x45f46c` | `FUN_0045f2f0` | same |
| `45fea2`, `45fed5` | `0x45ff04` | `FUN_0045fd50` | same |
| `4601b1`, `4601e4` | `0x4601a0` | `FUN_00460070` | same |
| `4610aa`, `4610dd` | `0x46110c` | `FUN_00460f90` | same |
| `45a62c` | `0x45a632` | `FUN_0045a500` | empty `catch (...)` |
| `4619cc` | `0x4619d2` | `FUN_004618a0` | empty `catch (...)` |
| `4622ac` | `0x4622b2` | `FUN_00462180` | empty `catch (...)` |
| `402b79`, `553960` | `0x402b9a`, `0x553981` | STL string growth | allocation retry after `bad_alloc` |
| `4d4263`, `4d4442`, `4d45a1`, `4d4687`, `4d4938`, `4d4e8a`, `4d76cb`, `4d7865`, `4e7e65`, `4e8091` | `0x4d4289`, `0x4d4468`, `0x4d45c7`, `0x4d46ad`, `0x4d495e`, `0x4d4eb0`, `0x4d76f2`, `0x4d788b`, `0x4e7e8b`, `0x4e80b7` | iostream in DaviScript | `setstate(badbit)` via `FUN_0054c6db`, which may rethrow |

Findings on normal flow:

- Input, HUD, script, physics, factory and RegVar throws lead to fatal messages when they reach a catch; `WinMain` has its own (`458386` `CPhysicsException`, `4583e5` `...` "Unhandled exception!"). I found no throw used to leave a loop or signal an ordinary condition.
- `char *` throws in `FUN_0045d170` carry `"CreateSparkSystem failed"`, `"CreateLeafSystem failed"`, `"CreateMailSystem failed"`, `"CreatePaperSystem failed"`, `"CreateTrashSystem failed"`, `"CreateBirdSystem failed"`, `"CreateDirtSystem failed"`, `"CreateDirtpieceSystem failed"`, `"CreateWaterSystem failed"`, `"CreateWaterwaveSystem failed"` (twice), `"CreateCarPartSystem failed"`: thrown when a particle system cannot be created, caught locally, logged, skipped. `FUN_0045d170` is called from `00474690` (script glue) and `0045b250`...`0045bd30`. `FUN_0045e8d0` throws for a NULL emitter. `FUN_00487640` throws "Bad float" when a HUD INI value does not parse, which `481100` converts to a fatal `CHudException`.
- `setjmp` `__setjmp3` `0x55b084`: `FUN_0051e7a0` (buffer `0x74c514`), `FUN_005251c0` (buffer `0x74c57c`), both qhull under `FUN_00511610`, and that runs on the physics path. `longjmp` `0x55b100`: `FUN_0051e8e0` and `FUN_00526a20`, qhull error exit. `setjmp` runs normally; `longjmp` only on qhull errors.

## C6. Runtime routines the recompiler must recognise

| Address | Name | Sites | Non-standard behaviour | How to recognise |
|---|---|---|---|---|
| `0x00559400` | `_chkstk`/`_alloca_probe` (patch notes: "stack probe") | 33 | size in `EAX`; probes pages with `TEST [ECX],EAX`; sets `ESP`; returns with `PUSH EAX; RET`, preserving `ECX` | `MOV EAX, imm; CALL 0x559400` at function start, bytes `51 3D 00 10 00 00 8D 4C 24 08` |
| `0x00558524` | `__ftol` | 274 | **argument in `ST0`, popped; result `EDX:EAX`**; forces RC=truncate with `FLDCW`, `FISTP qword` | `CALL 0x558524` straight after x87 code; bytes `55 8B EC 83 C4 F4 9B D9 7D FE` |
| `0x0055b39c` | `_EH_prolog` (name mine) | 137 | handler in `EAX`; builds `-1`, handler, `FS:[0]` frame; moves return address, sets `EBP`; returns with `PUSH EAX; RET` | `MOV EAX, 0x57xxxx; CALL 0x55b39c`; bytes `6A FF 50 64 A1 00 00 00 00` |
| `0x005593c0` | `__CxxThrowException@8` | 190 | stdcall; Ghidra marks it no-return | template at `0x5795f8` |
| `0x00557d9b` | `__CxxFrameHandler` (name mine) | 1,017 thunks | function-info pointer in `EAX` | `MOV EAX, funcinfo; JMP 0x557d9b` |
| `0x0055da10` | `__CallSettingFrame@12` | 2 | sets `EBP` to the parent frame, then `CALL EAX` funclet | see C7 |
| `0x00557d0a` | `_JumpToContinuation` (name mine) | | pops SEH frame, loads `ESP`/`EBP`, `JMP EAX` | see C7 |
| `0x00557d3e`, `0x00557d45` | `_CallMemberFunction0/1` (names mine) | | `POP EAX; POP ECX; XCHG [ESP],EAX; JMP EAX` | see C7 |
| `0x00557ff0`, `0x00558032`, `0x0055809a`, `0x005580bd` | `__global_unwind2`, `__local_unwind2`, `__abnormal_termination`, `__NLG_Notify1` | | SEH unwinding; `__NLG` writes a global for debuggers | Ghidra names |
| `0x0055b084`, `0x0055b100` | `__setjmp3`, `longjmp` | 2, 2 | saves `EBP`, `EBX`, `EDI`, `ESI`, `ESP`, return address, `FS:[0]`, magic `0x56433230` at `+0x20`; `longjmp` unwinds and `JMP [EDX+0x14]` | Ghidra names |
| `0x005580e0` | `memcpy` | 89 | cdecl; overlap-safe; **computed jumps into `.text` tables** `0x558140`, `0x5581bc`, `0x558228`, `0x558238`, `0x558370`, `0x5582c8`, `0x5583c0`; Ghidra splits it into `FUN_00558179`, `caseD_3 0x5581a0`, `caseD_0 0x558238`, `FUN_0055829e`, `FUN_005582a9`, `FUN_005582f5`, `caseD_3 0x558320`, `caseD_0 0x5583d0` | entry bytes `55 8B EC 57 56 8B 75 0C 8B 4D 10 8B 7D 08`. Replace as a unit |
| `0x0055b3c0` | `memmove` | 17 | same code, tables `0x55b420`, `0x55b49c`, `0x55b508`, `0x55b518`, `0x55b5a8`, `0x55b650`, `0x55b6a0` | same bytes |
| `0x0055b700` | `_memset` | 9 | plain; `REP STOSD` | Ghidra name |
| `0x0055b320` | `_strlen` | 73 | dword-at-a-time, aligned reads | Ghidra name |
| `0x0055edb0`, `0x00558fb0`, `0x0055ab50`, `0x0055ac90`, `0x00559650`, `0x00558a90`, `0x005654e0` | `_strcmp`, `_strncpy`, `_strncmp`, `_strncat`, `_strrchr`, `_memchr`, `__strcmpi` | | hand-written CRT, ordinary stack ABI | Ghidra names |
| `0x00560c90`, `0x00560cd0`, `0x00565e80` | `__allmul`, `__aulldiv`, `__aullrem` | | `RET 0x10`, result `EDX:EAX` | Ghidra names |
| `0x005661b0` | `__allshl` | 2 | value `EDX:EAX`, count `CL` | Ghidra name |
| `0x00567e50` | `___add_12` | | CRT long double helper | Ghidra name |

x87-stack helpers: argument(s) in `ST`, result in `ST0`, ABI not visible from `cdecl` analysis.

| Address | Name | Sites | Convention and body | Callers |
|---|---|---|---|---|
| `0x00558550` | `_CIacos` (name mine, body is `FLD1; FADD ST1; FLD1; FSUB ST2; FMULP; FSQRT; FXCH; FPATAN`) | 7 | `ST0` in/out; stub → `0x55e2a8`, `0x55856d` | `004031f0`, `00414470`, `00414640`, `004161d0`, `004e8eff`, `004f8d60`, `00506d00` |
| `0x00559e50` | `_CIasin` (name mine, same body without `FXCH`) | 6 | `ST0` in/out; stub → `0x55e2a8`, `0x559e6d` | `004e8ecc`, `004f4890`, `00502dc0` |
| `0x00559960` | `_CIpow` (name mine) | 4 | `ST1^ST0`; body `0x559982` uses `FYL2X`, `F2XM1`, `FSCALE`, `FSAVE`, `FRSTOR`; assembly only in the C export | `0049e750`, `004e5400`, `004e5527` |
| `0x0055aaf8`, `0x0055ab02`, `0x0055ab09` | `_CIsinh`, `_CIcosh`, `_CItanh` (from name strings at `0x5c8bea`, `0x5c8c0a`, `0x5c8c2a`) | 1 each | `MOV EDX, table; JMP 0x56329e` | `004e8f64`, `004e8fca`, `004e8f97`, DaviScript math |
| `0x0055aae0`, `0x0055aaea`, `0x0055aaf1` | `sinh`, `cosh`, `tanh` | 0 | `MOV EDX, table; JMP 0x563445`, double on stack | none |
| `0x0056329e`, `0x00563260` | `__cintrindisp1`, `__cintrindisp2` | 3, 0 | x87 args; Ghidra names | |
| `0x00563445`, `0x005632d4` | `__ctrandisp1`, `__ctrandisp2` | 3, 0 | stack doubles → `__fload` `0x563471` → dispatch | |
| `0x0055dff0`, `0x0055e057` | `__trandisp1`, `__trandisp2` | | `FXAM`, `XLAT` via `0x5c868d`, **`JMP [EBX]` into function table at `[EDX+0x10..]`** | Ghidra names |
| `0x0055e265`, `0x00563471`, `0x0055e1d7`, `0x0055e2cb`, `0x0055e235`, `0x0055e2be`, `0x0055e220` | `__fload_withFB`, `__fload`, `__startOneArgErrorHandling`, `__math_exit`, control word set to `0x27f`, control word restore, `2^ST0` | | internal to the above | |

A scan of every direct call whose preceding instruction loads or computes on the x87 stack found no other x87-argument helper in `.text` (no `_CIsqrt`, `_CIsin`, `_CIcos`, `_CIatan`, `_CIexp` or `_CIlog` call). The game **inlines** those as x87 instructions.

x87 instruction counts over `.text`: 33,682 x87 instructions total; `FSQRT` 149, `FPATAN` 29, `FSIN` 25, `FCOS` 20, `FRNDINT` 16, `FSCALE` 12, `F2XM1` 8, `FPREM` 6, `FPTAN` 5, `FYL2X` 4, `FPREM1` 2, `FSAVE`/`FRSTOR` 2 each, `FXAM` 3; `FNSTSW` 1,511 (compare results read through `AX`), `SAHF` 36. `FIST`-style conversions go mostly through `__ftol`. `0x56689d`-style `INT 6` and `FDIV`/`FPREM` variants belong to `FUN_00566887` `_adj_*`: Pentium FDIV workarounds `FUN_00566d4c`, `FUN_00566d98`, `FUN_00566e4c`, `FUN_00566e98`, tier X (only `FUN_00566f61` ← `FUN_00561c91`, not on a game path found).

**FPU control word (consequential for physics):**

| Site | Code | Effect | Restored? |
|---|---|---|---|
| `0x4aa147-0x4aa15a` `FUN_004aa0c0` (physics stepper, once per frame from `FUN_0044cb80`) | `FNCLEX; FSTCW; AND 0xfcff; OR (1<<8); FLDCW` | **precision-control field set to `01b`** before `FUN_004a45d0` (adds `dt` to a running time at `this+0x74` and passes it as a double to `FUN_004f8380`, whose call chain reaches Ipion `FUN_0050bfc0`) | **No. There is no second `FLDCW` in this function** |
| `0x50bfd3`, `0x50bfed` `FUN_0050bfc0` | `OR AH,3` → `PC=11b` around a virtual call, then restored | extended precision | yes |
| `0x511cd1` `FUN_00511cc0` (hull builder, `004a1180`, `00511610`, `00511d20`, `0051ede0`) | `OR AH,3` | extended precision | **no second `FLDCW` in this function** |
| `__ftol`, `_CI*` paths | RC or `0x27f` temporarily | | yes |
| `FUN_0055fae8` (`_controlfp`-style) | CRT | | |

## C7. Code read as data, return addresses, computed jumps

Plain jump tables: 182 `JMP [reg*4 + table]` in 142 functions; tables are in `.text` directly after the function (`code_gaps.csv` "defined data"). `data_refs.csv` has 202 `DATA` references from code to non-function `.text` addresses, mostly these tables. 25 are two-level (byte index table read with `MOV CL,[EAX+table]`, then dword table): `0x40bd86`, `0x415764`, `0x418b00`, `0x44f363`, `0x499fc7`, `0x49b583`, `0x4bb2ab`, `0x4c1351`, `0x4c4489`, `0x4c44c6`, `0x4c4517`, `0x4c6618`, `0x4c81e9`, `0x4cd702`, `0x4cd8ad`, `0x4cd98f`, `0x4e268b`, `0x4e26c0`, `0x51af52`, `0x51b4d5`, `0x51b7fd`, `0x51ba13`, `0x51bcb4`, `0x51c46a`, `0x52fb65`. Note: `.text` must be mapped readable.

**The three register jumps (`JMP EAX`), all C++ EH runtime:**

| Address | Routine | Sequence | Meaning |
|---|---|---|---|
| `0x00557d35` | `_JumpToContinuation` `FUN_00557d0a` | pops one SEH frame; `MOV ESP,[EBX-4]; MOV EBP,[EBP-4]; JMP EAX` | **after a catch: resumes in the middle of the catching function with its original `ESP`/`EBP`.** Targets are the continuations in C5 and fatal paths never arrive here |
| `0x00557d43` | `_CallMemberFunction0` | `POP EAX; POP ECX; XCHG [ESP],EAX; JMP EAX` | calls a `thiscall` target with the return address repositioned: destructor of an exception object |
| `0x00557d4a` | `_CallMemberFunction1` | same bytes | copy constructor of an exception object |

Other non-table indirect jumps:

| Address | Function | Form | Meaning |
|---|---|---|---|
| `0x00557f68` | `FUN_00557efe` (matches MSVC `__TranslatorGuardHandler`, name mine) | `MOV ESP,[EBX+0x1c]; MOV EBP,[EBX+0x20]; JMP [EBX+0x18]` | EH guard frame: continues at a stored continuation. No `_set_se_translator` use was looked for |
| `0x0055b175` | `_longjmp` | `JMP [EDX+0x14]` | return address saved by `__setjmp3` |
| `0x0055e055`, `0x0055e0e1` | `__trandisp1/2` | `JMP [EBX]` | math class dispatch |
| `0x459582`, `0x459d92`, `0x45a792`, `0x45b122`, `0x45c7a2`, `0x45d072`, `0x45e302`, `0x45f5f2`, `0x460062`, `0x4612e2`, `0x461b32`, `0x462492` | `FUN_00459580`, etc. | `JMP [EAX+4]` | virtual tail call, `this` in `ECX` |
| `0x486179`, `0x487212`, `0x4d4c4d`, `0x4e01d5` | | `JMP [EAX+0x2c]`, `[EAX+0x3c]`, `[EDX+0x10]`, `[EAX+0x14]` | virtual tail call |
| `0x549e00`, `0x549e06`, `0x549e0c`, `0x54ae38`, `0x54b1a8`, `0x54b1ae`, `0x560f4f`, `0x560f64`, `0x568990` | import thunks | `JMP [IAT]` | |

Indirect calls: 1,973 `COMPUTED_CALL` plus 51 terminators in `calls.csv`; 1,513 of them `CALL [reg+off]` virtual or COM form. `FUN_0055da10` `CALL EAX` at `0x55da35` invokes catch and unwind funclets, **with `EBP` set to the frame of the parent function and no normal prologue**: all 96 catch funclets and 3,444 `Unwind@` funclets address the parent's locals through `EBP`.

Return address used as data:

| Site | Use |
|---|---|
| `0x0055b096` `__setjmp3` | `MOV EAX,[ESP]`, stored in jmp_buf |
| `0x0055b3a6-0x0055b3ba` `_EH_prolog` | reads return slot, overwrites it with `EBP`, returns through `PUSH EAX; RET` |
| `0x00559428-0x0055942e` `_chkstk` | loads saved `ECX` and return address, `PUSH EAX; RET` |
| `0x00557d3e`, `0x00557d45` | above |
| `0x0055daa8`, `0x0055dafe` | `CALL $+5` then `JMP`, in `terminate`/`unexpected` wrappers `FUN_0055da5c`, `FUN_0055dab2`. Only the two `CALL $+5` in the binary. Fatal path only |

Ghidra's `unaff_retaddr` in `decompiled.c` (lines 21384, 55555, 69174, 76849, ... ) was sampled at `FUN_004a0140`, `FUN_004c48f0`, `FUN_004c9b90`: these are stack-tracking artefacts or functions merged across a no-return call, not return-address reads. A search of machine code found no other `MOV reg,[ESP]` at function entry and no `XCHG [ESP]`, `ADD [ESP]` or `SUB [ESP]` other than the sites above.

Code read as data: read references into `.text`: `0x43bd48` and `0x44f578` (jump and index tables), `0x566670`-`0x566694` (`FUN_005661cf` table), plus the DirectInput data formats and object tables at `0x549e20-0x54b190` (linker placed them in `.text`). No code checksums `.text`; nothing writes to `.text` (no `WRITE` reference with a `.text` target). `FUN_004c9b90` compares surface descriptions, not code.

Mid-function entry labels that exist because of `Unwind@`/continuation use and decoded-junk fragments: `FUN_00465345` (`CLI` is a misdecode inside a call displacement), `FUN_00415387`, `FUN_0049b0b5`, `FUN_00561d90`: mid-function fragments, not entry points (`recovered_functions.tsv`).

---

# Inferred

## I1. Host choices the code allows

- **The 8-bit paths need not be skipped.** Forcing `RESOLUTION` to 3 or higher would make the Ramp device, palette, modex surfaces, the `DAT_006fb8d0 == 0` sky blits (`FUN_004456a0`) and `FUN_004c9c90`'s palette fall away (C0, C3), but the menu selects 0 and 1 with `3D kaart` off (`Laag`, `Normaal`), so the port answers them: [`render-8bit.md`](render-8bit.md).
- **Report no HAL (`HWDesc.dwFlags = 0`) to avoid double texture storage.** C3 shows `FUN_004b9b40` then shares one surface and skips `Load`. Costs: the `dwSrcBlendCaps`/`dwDestBlendCaps` check reads HW desc directly, so those two fields would still have to be filled in for alpha blending to stay on; `FUN_004c1080` would read HEL's max width. Not tested. Reporting a HAL keeps the path the original exercised on real cards.
- **Simplest stubs:** `DirectDrawEnumerateA`, `DirectSoundEnumerateA` with zero callbacks; `mixerGetNumDevs` = 0; `GetLocalTime`/`GetSystemTime` real; `IsBad*Ptr` = 0.
- **Environment:** an environment block containing `NOCD=C` removes the need to fake a CD-ROM, without patching. The patch notes' file lookup rule then finds files in the current directory first.
- A single-threaded browser host cannot change key state inside a spin without yielding, so it must either rewrite the spins (I2) or run the wasm in a Worker with shared key state.

## I2. Yield design consequences

The main loop body is the only place the game needs to give time back on a normal frame: everything per frame is bounded, because there are no waits inside `FUN_0044cb80` other than the C4 list. So the expected shape is a host-driven step of the loop body, rather than running `WinMain` to completion. To do that without stack switching, these must be rewritten in the recompiled output:

| Rewrite | Replacement idea |
|---|---|
| `0x458270` loop | exported step per browser frame |
| `FUN_00458020` `WaitMessage` | host pauses stepping while inactive; run the post-wait restore path on resume, or keep surfaces never lost so it is a no-op |
| `FUN_0044c990`, `FUN_0044c9f0` (`FUN_0044ca80`) | state machine: on `DAT_006fb8d8 != 0` do the "before" half, poll per step, do the "after" half |
| `FUN_0043ac80` release spin | return 0 until keys are released, or poll on later steps |
| `FUN_00419600` F11 spins | safe to drop the `while` because the key state does not change during a step |
| `FUN_00439910` U spin | same |

Alternatively Asyncify or a Worker with `Atomics.wait` handles spins generically, at a cost not measured here. Init (`FUN_004580e0`) contains progress flips (C4) and takes one uninterrupted call; to show progress the host must either use stack switching at `Flip` or show its own loading screen. A worker with a shared key-state table would allow the spins to run unchanged, because `GetAsyncKeyState` could read a SharedArrayBuffer updated by the page thread.

## I3. Recompiler consequences

- Continuations in C5 must be real re-entry points. The C5 table is what a static recompiler needs: only the listed addresses are targets of `_JumpToContinuation`. Fatal catches never reach it, because `FUN_004c4150` does not return.
- If throws are treated as fatal except those, the runtime can be small: the non-fatal set is particle code, iostream `setstate`, and STL `bad_alloc` retry. `bad_alloc` cannot occur if `operator new` `0x558465` never returns NULL.
- `longjmp` can stay fatal if qhull never errors on valid data; not established.
- `FUN_005580e0`/`FUN_0055b3c0`: replace with memmove semantics. `__ftol` truncates toward zero; the result is 64-bit, with low 32 bits in `EAX`. Game code uses `EAX`; values outside the 32-bit range wrap by truncation of the 64-bit result, not saturate.
- Register-passing `FUN_0055e2be`, `FUN_0055e235` must keep `ST` and `[ESP]` as written.

## I4. Reading of RESOLUTION 2

Case 2 does not set focus or driver var, so `FOCUS` from `raser.ini` applies there. Not exercised by the shipped INI.

## I5. `FUN_0044cb80` pause flips

Two extra `FUN_0044df10` calls before `FUN_0044ca80` make the current frame visible in both flip buffers, so the screen holds a stable image during the spin. Inferred from flip semantics.

---

# Unknown

- **Meaning of x87 `PC=01b` on real CPUs and in the original runtime.** `FUN_004aa0c0` sets it every frame. Intel documents that encoding as reserved. No evidence here on which precision it produces, or on what `IDirect3D2::CreateDevice` or DirectX itself did to the control word between frames. This decides whether physics ran in 24-, 53- or 64-bit mantissa precision. `dynamic/RESULTS.md` has no `spel.dat` run. A recompiled x87 emulation has to pick; measurement on Wine or real hardware is needed.
- **Whether `FUN_00511cc0`'s un-restored `PC=11b` persists to the next physics step,** or is overwritten by `FUN_004aa0c0` first. The call chain was not ordered within a frame.
- **Whether `FUN_00439910` (`U` spin) is gated by tweak mode: settled, it is, indirectly.** The test at `0x438a6c` compares the camera id of the active slot with 7, and only slot 7 holds id 7 (one-off headless read in the port on etappe 0: ids 0, 1, 0, 4, 5, 8, 6, 7, 2, 3 for slots 0 to 9). Slot 7 is selected only by `FUN_004397f0`, from view 0xE (`FUN_0043a9f0` and `FUN_0043cc70` only restore a saved slot), and key U selects view 0xE only inside the `DAT_006fb950` block of `FUN_00438670`. Key 7 selects view id 7 in slot 0 (`FUN_004390d0` ends in `FUN_00438410(0)`), which does not reach the spin: pressing it in that run left slot 0 active.
- Whether `FUN_0044e830`, `FUN_0044e970`, `FUN_00450190`, `FUN_0048abe0` timers depend on `GetTickCount` and the QPC clock staying in step. Both come from one host clock unless a host makes them differ.
- Whether any `Create*System failed` throw in `FUN_0045d170` or anything inside the `FUN_00459280`-family `try` blocks fires in normal play with shipped data. Static reading shows failure guards, not frequency.
- Whether Ipion's `FUN_0050a5e0` (performance counter at vtable `0x578840`) is called on the normal path. Vtable slot found, no call traced.
- Whether qhull's `longjmp` paths ever fire with shipped car and track meshes.
- The stack depth actually reached; the image only says 1 MB reserve. `_chkstk` sites cover 33 large frames.
- `IDirectDrawSurface::GetDC` use at normal runtime in `0x44da30`, `0x471c90`, `0x48f380`, `0x48f720`: the conditions around those `FUN_004c5930` calls were sampled, not proven gated. Treat GDI text as debug output; if one fires in normal play the host needs a fallback.
- Array capacity of the texture format list `0x73b7d8`, and thus the number of `EnumTextureFormats` entries that are stored; not read. The callback returns 0 when full, so more entries are harmless.
- Whether `WM_ACTIVATEAPP` was delivered by the original to `FUN_004cd6b0` before or after `SetCooperativeLevel`. Only the requirement that it arrives before the first `FUN_00458020` is established.
