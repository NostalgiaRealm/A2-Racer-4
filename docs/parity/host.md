# Host and process model: parity

What the port implements of the Win32 and DirectX surface of `spel.dat`, its files and INI semantics, the registry, the image and memory model, and the programs around the race, and which of it was checked. Part of [feature-parity.md](../feature-parity.md). The findings behind each row are in [behavior/host.md](../behavior/host.md), programs and versions in [provenance.md](../provenance.md).

**How to read Verified for host rows.** "checked on Amsterdam: check-flow" means the race path that has to pass through this call ran to the end in that check with no host error. It does not say the host gives the same answers as Windows. The reference runs of the original under Wine (`evidence/reference-wine/results.md`) measure timing and the car, not the host's answers. reference-86box reads only the guest's screen, so a row that names it compares what the answers give in the picture, for what its Notes say, not the answers. Which calls lie on that path comes from reading the code and from one count of host calls in a headless whole race on Amsterdam around the `tools/run-bot.mjs` setup (same wasm and host code, a stand-in sound backend, one pause and one quit dialog added). That count is not one of the checks. In Notes, "Boot", "Ticks" and "Exit" say when the call ran in it, and "Not called" that it did not. Rows with no call stay "not verified". That count ran the 16-bit path: what a row says of `RESOLUTION` 0 and 1 comes from the code, `docs/research/8bit-device.md` and check-software.

| Name in Verified | Tool | Covers |
|---|---|---|
| check-flow | `tools/check-flow.mjs` | Intro to results with real clicks, a whole race by the bot at `speed=8`, the game writing `FINISHED=1` and `TRACKTIME` 603433, zero console errors or warnings |
| check-race-ui | `tools/check-race-ui.mjs` | 76 named checks in `evidence/race-ui/summary.json`: touch, keyboard, stand-in pad, pause, focus, settings, full screen in headless Chromium, finish and game over entered through `FUN_0044cda0`, load failure |
| check-software | `tools/check-software.mjs` | The 8-bit path through the real menu with real clicks: a whole race by the bot at `RESOLUTION` 1, the game writing `FINISHED=1` and `TRACKTIME` 603433, a race at `RESOLUTION` 0 left with Esc and J, back on with the 3D card in the same page, zero console errors or warnings. 17 of 17, by name in `evidence/software/flow/summary.json` |
| reference-86box | `tools/reference-86box/`, `docs/research/render-8bit.md`, `evidence/reference-86box/results.md` | The original `spel.dat` at `RESOLUTION` 0 and 1 on a throwaway copy of the owner's 86Box Windows 98 machine, disc 1.01 data, etappe 0, car 0. Screenshots of the guest set against the port's frame at rest, pixel by pixel in RGB. An emulated machine, not a real one |
| repeat-trace | `tools/benchmark.mjs`, `tools/compare-traces.mjs` | The same input gives the same state of every object with a physics body, 485 on Amsterdam, at all 71 samples between rendering profiles |
| boot-all | `tools/build-race-lists.mjs` | All 10 etappes with all 8 cars for 2 s with no renderer, to record which files each race reads. Also all 10 etappes with car 0 at `RESOLUTION` 0 and 1, for the `soft` lists. Not a gameplay check |
| form check | Per-form browser checks, `evidence/forms/` | Screens, navigation, options persistence |
| fix check | One-off script run by whoever made that fix, not kept as a tool | Only what the row says |
| fix check: launch through the menu, 6 s of gas, 0 console errors | One one-off script on the final build when the updates came in | Track 9 with car 7, not Amsterdam, in headless Chromium: the real menu, Quick Race position 9 and character position 7, a race on the keyboard device, 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. Nothing else: no lap, no race end, no sound, no comparison with the original. The original has not been run with the updates |

Everything is on etappe 0 (Amsterdam), in headless Chromium 145 on an AMD Radeon RX 6700 XT through ANGLE Vulkan, unless a row says otherwise. Sound was checked by state only, never by ear. No real phone, tablet or gamepad, no other browser engine.

Addresses are `spel.dat` unless marked `L:` (`A2Racer4.exe`) or `M:` (`menu.exe`).

## Imports of spel.dat (142)

Rows come from `decompiled/game__spel.dat/imports.csv`. Behaviour notes: `docs/research/win32-surface.md` C1. Bound in `installWin32` in `source/host/win32.js`, the DirectX factories in `installDirectX` in `source/host/directx.js`. 137 of 142 are bound; 74 were called in the count.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `USER32!TranslateMessage` | IAT 0x5761bc; sites 0x4cd5a6, 0x4cd626, 0x4cd68d +1 | yes (host) | checked on Amsterdam: check-flow | Exit. No-op. |
| `USER32!MessageBoxExA` | IAT 0x5761c0; sites 0x4a69f7, 0x4a018b, 0x4c41be | yes (host) | not verified | Not called. Fatal paths only, and no check reached one. `host.onMessageBox` puts caption and text in the page's status line and returns: not modal. |
| `USER32!MessageBeep` | IAT 0x5761c4; sites 0x45e2f5 | n/a | not verified | Not called. No-op. Only caller `FUN_0045e240`, particle type 0, reached only through script `CreateParticles`, which `bonus.dso` declares and never calls. |
| `USER32!PeekMessageA` | IAT 0x5761c8; sites 0x4cd579, 0x4cd5bc, 0x4cd5f9 +3 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks, exit. Own queue in `installWin32`. Once per tick through `FUN_00458020`. |
| `USER32!ShowWindow` | IAT 0x5761cc; sites 0x4a69cc, 0x4a0164, 0x4c4193 +1 | yes (host) | checked on Amsterdam: check-flow | Boot. Delivers `WM_ACTIVATEAPP(1)` and `WM_ACTIVATE(1)`, which `FUN_00458020` needs. |
| `USER32!DispatchMessageA` | IAT 0x5761d0; sites 0x4cd5ad, 0x4cd62d, 0x4cd698 +1 | yes (host) | checked on Amsterdam: check-flow | Exit. Calls `FUN_004cd6b0`. |
| `USER32!PostMessageA` | IAT 0x5761d4; sites 0x4c412b | yes (host) | checked on Amsterdam: check-flow | Exit. `WM_CLOSE` to the own window, seen by the next `PeekMessageA`. |
| `USER32!WaitMessage` | IAT 0x5761d8; sites 0x458074 | yes (host) | not verified | Not called. Returns at once. Never reached: the host never sends `WM_ACTIVATEAPP(0)`. If it were, `FUN_00458020` would spin. |
| `USER32!LoadIconA` | IAT 0x5761dc; sites 0x4c5613 | yes (host) | checked on Amsterdam: check-flow | Boot. Dummy handle. |
| `USER32!ClientToScreen` | IAT 0x5761e0; sites 0x4c597b, 0x4c421a | n/a | not verified | Not called. Windowed mode and debug text only. |
| `USER32!GetClientRect` | IAT 0x5761e4; sites 0x4c5959, 0x4c56e9, 0x4c41f8 | yes (host) | checked on Amsterdam: check-flow | Boot. Mode size. |
| `USER32!UpdateWindow` | IAT 0x5761e8; sites 0x4c574a | yes (host) | checked on Amsterdam: check-flow | Boot. No-op. |
| `USER32!MoveWindow` | IAT 0x5761ec; sites 0x4c571f | yes (host) | checked on Amsterdam: check-flow | Boot. Ignored. |
| `USER32!CreateWindowExA` | IAT 0x5761f0; sites 0x4c56bd | yes (host) | checked on Amsterdam: check-flow | Boot. No window exists. Sends `WM_NCCREATE`, `WM_CREATE`. The title `A2 Racer IV` from `raser.ini` is dropped; the tab title is `A2 Racer 4`. |
| `USER32!GetSystemMetrics` | IAT 0x5761f4; sites 0x4c5684, 0x4c568a, 0x4ccd42 +3 | yes (host) | checked on Amsterdam: check-flow | Boot. Index 0 and 1 give the mode size, all else 0 (only logged). |
| `USER32!LoadCursorA` | IAT 0x5761f8; sites 0x4c5623 | yes (host) | checked on Amsterdam: check-flow | Boot. Dummy handle. |
| `USER32!SetRect` | IAT 0x5761fc; sites 0x4c5aeb, 0x4c5c51, 0x4c5db7 | n/a | not verified | Not called. Debug text only (`FUN_004c5930`). |
| `USER32!GetAsyncKeyState` | IAT 0x576200; sites 0x4c5e56, 0x4c5e5e, 0x4c5e6e +1 | yes (host) | checked on Amsterdam: check-race-ui | Ticks. Sign bit only. `GameInput.keyDown` in `source/input/keyboard.js` reads a key as up after 8 polls in one tick, so release spins end. Shift is exempt: `FUN_004c5e40` polls it before every other key. Check: `keyboard: repeat of an unseen key, re-press in a tick, Shift read every time`. |
| `USER32!SetCursor` | IAT 0x576204; sites 0x4cd862, 0x4ced76 | n/a | not verified | Not called. No-op. The host sends no `WM_SETCURSOR`; the pointer is in that row under Messages. |
| `USER32!DefWindowProcA` | IAT 0x576208; sites 0x4cd834, 0x4cd809, 0x4cd92b +1 | yes (host) | checked on Amsterdam: check-flow | Boot, exit. Turns `WM_CLOSE` into `WM_DESTROY`; all else returns 0. |
| `USER32!wsprintfA` | IAT 0x57620c; sites 0x49fb1d, 0x49fc9e, 0x42ea48 +24 | yes (host) | checked on Amsterdam: check-flow | Boot, exit. All 14 format strings at its 27 call sites fit the host's pattern (scripted scan of the sites). |
| `USER32!EndPaint` | IAT 0x576210; sites 0x4cd78d | n/a | not verified | Not called. `WM_PAINT` handler; the host posts no `WM_PAINT`. |
| `USER32!BeginPaint` | IAT 0x576214; sites 0x4cd781 | n/a | not verified | Not called. `WM_PAINT` handler; the host posts no `WM_PAINT`. |
| `USER32!GetUpdateRect` | IAT 0x576218; sites 0x4cd76d | n/a | not verified | Not called. `WM_PAINT` handler; the host posts no `WM_PAINT`. |
| `USER32!KillTimer` | IAT 0x57621c; sites 0x4ce474 | n/a | not verified | Not called. No `SetTimer` import, so no timer can exist. |
| `USER32!ScreenToClient` | IAT 0x576220; sites 0x4ce67b | n/a | not verified | Not called. `FUN_004ce640`, gate `DAT_0074b2f4` is never written. |
| `USER32!GetCursorPos` | IAT 0x576224; sites 0x4ce669 | n/a | not verified | Not called. `FUN_004ce640`, gate `DAT_0074b2f4` is never written. |
| `USER32!RegisterClassA` | IAT 0x576228; sites 0x4c5642 | yes (host) | checked on Amsterdam: check-flow | Boot. Class `Davilex Entertainment`; keeps the window procedure address. |
| `USER32!PostQuitMessage` | IAT 0x57622c; sites 0x4cd7ff | yes (host) | checked on Amsterdam: check-flow | Exit. Queues `WM_QUIT`, which nothing reads after a normal race. |
| `DDRAW!DirectDrawCreate` | IAT 0x576008; sites 0x549e06 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| `DDRAW!DirectDrawEnumerateA` | IAT 0x57600c; sites 0x549e0c | yes (host) | checked on Amsterdam: check-flow | Boot. Zero callbacks, allowed by `FUN_004cd170`. |
| `DDRAW!DirectDrawCreateClipper` | IAT 0x576010; sites 0x549e00 | n/a | not verified | Not called. `WINDOWED=1` only, not shipped and not written by the menu. The host writes no object, so that path would fault. |
| `DINPUT!DirectInputCreateA` | IAT 0x576018; sites 0x54ae38 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| `DSOUND!DirectSoundCreate` | IAT 0x576020; sites 0x54b1ae | yes (host) | checked on Amsterdam: check-flow | Boot. Sound by state only, as for all DirectSound rows. |
| `DSOUND!DirectSoundEnumerateA` | IAT 0x576024; sites 0x54b1a8 | yes (host) | checked on Amsterdam: check-flow | Boot. Zero callbacks: "Using default driver". |
| `KERNEL32!LocalAlloc` | IAT 0x57604c; sites 0x4cab04, 0x4ca57a, 0x4ca599 +10 | yes (host) | checked on Amsterdam: check-flow | Boot. LPTR zeroes. |
| `KERNEL32!GetPrivateProfileIntA` | IAT 0x576050; sites 0x4c3d01 | yes (host) | checked on Amsterdam: check-flow | Boot. 164 call sites through `FUN_004c3cd0`. |
| `KERNEL32!ExitProcess` | IAT 0x576054; sites 0x559d2c, 0x4c41c6, 0x55984d | yes (host) | not verified | Not called. Throws `GameExit`, handled in `Race.tick`, `Race.finish` and `RaceRunner.run`. Fatal path or CRT exit only, and no check reached one. |
| `KERNEL32!QueryPerformanceCounter` | IAT 0x576058; sites 0x50a5eb, 0x4a6850, 0x4a6710 | yes (host) | checked on Amsterdam: check-flow | Ticks. Virtual clock. `FUN_004a6700` is replaced, so the reads come from `FUN_0050a5e0`, about 7.7 per tick, and from `FUN_004a6840` after each dialog. |
| `KERNEL32!GetCurrentProcess` | IAT 0x57605c; sites 0x559cab | yes (host) | not verified | Not called. CRT `doexit` path. |
| `KERNEL32!lstrlenA` | IAT 0x576060; sites 0x4c5ac3, 0x4c5af8, 0x4c5c29 +6 | n/a | not verified | Not called. Debug text only (`FUN_004c5930`). |
| `KERNEL32!LocalFree` | IAT 0x576064; sites 0x4c656f | yes (host) | checked on Amsterdam: check-flow | Exit. Returns 0; nonzero is fatal in `FUN_004c6560`. |
| `KERNEL32!LocalReAlloc` | IAT 0x576068; sites 0x4c7127 | yes (host) | checked on Amsterdam: check-flow | Exit. Sound exit `FUN_004c70d0`. |
| `KERNEL32!GetDriveTypeA` | IAT 0x57606c; sites 0x569251, 0x4ccaff | yes (host) | checked on Amsterdam: check-flow | Boot. C: is 3, all else 1: no CD-ROM exists. |
| `KERNEL32!GetSystemInfo` | IAT 0x576070; sites 0x4cccf8 | yes (host) | checked on Amsterdam: check-flow | Boot. Logged only. |
| `KERNEL32!GlobalMemoryStatus` | IAT 0x576074; sites 0x4ccc8a | yes (host) | checked on Amsterdam: check-flow | Boot. `dwTotalPhys` 256 MB, over the 17,000,000 music gate. |
| `KERNEL32!GetComputerNameA` | IAT 0x576078; sites 0x4ccc35 | yes (host) | checked on Amsterdam: check-flow | Boot. Logged only. |
| `KERNEL32!WideCharToMultiByte` | IAT 0x57607c; sites 0x567a6f, 0x563cda, 0x5635f7 +9 | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_00561779`. Latin-1 mapping, not code page 1252. |
| `KERNEL32!MultiByteToWideChar` | IAT 0x576080; sites 0x563e56, 0x563e95, 0x54eeea +11 | yes (host) | checked on Amsterdam: check-flow | Boot. CRT locale helpers. Latin-1 mapping. |
| `KERNEL32!RtlUnwind` | IAT 0x576084; sites 0x568990 | yes (host) | not verified | Not called. No-op; unwinding is done by JavaScript exceptions, `source/host/hooks.js`. |
| `KERNEL32!GetLastError` | IAT 0x576088; sites 0x5678c0, 0x55fcc8, 0x55fd99 +10 | yes (host) | checked on Amsterdam: check-flow | Boot. Among others after the failed `_findfirst` on `bonus.ds`. |
| `KERNEL32!FileTimeToSystemTime` | IAT 0x57608c; sites 0x559213 | yes (host) | not verified | Not called. Inside `_findfirst`. `FUN_005591e8` returns early on a zero file time, and the host's find data has zero times. |
| `KERNEL32!FileTimeToLocalFileTime` | IAT 0x576090; sites 0x559201 | yes (host) | not verified | Not called. Same. |
| `KERNEL32!GetFileAttributesA` | IAT 0x576094; sites 0x559272 | yes (host) | checked on Amsterdam: check-flow | Boot. `_access`, `FUN_004489a0` and others. |
| `KERNEL32!GetSystemTimeAsFileTime` | IAT 0x576098; sites 0x559352, 0x559395 | yes (host) | checked on Amsterdam: check-flow | Boot, exit. `clock()`, `FUN_00559348`: FPS counters and qhull statistics. Real time, or `host.fixedDate`. Script `clock` is only declared by `bonus.dso`. |
| `KERNEL32!RaiseException` | IAT 0x57609c; sites 0x55f5c0, 0x5593ee | yes (host) | not verified | Not called. `__CxxThrowException` is hooked before it. FP error path only; throws a JavaScript `Error`. |
| `KERNEL32!GetModuleHandleA` | IAT 0x5760a0; sites 0x5597d7, 0x55db5d | yes (host) | checked on Amsterdam: check-flow | Boot. CRT entry. 0x400000 for NULL, 0 for a name, so `FUN_0055db58` falls back to the FDIV test. |
| `KERNEL32!GetStartupInfoA` | IAT 0x5760a4; sites 0x561904, 0x5597b4 | yes (host) | checked on Amsterdam: check-flow | Boot. CRT entry; `dwFlags` 0 gives `nCmdShow` 10. |
| `KERNEL32!GetCommandLineA` | IAT 0x5760a8; sites 0x559789 | yes (host) | checked on Amsterdam: check-flow | Boot. CRT entry. `spel.dat`; `lpCmdLine` is unused. |
| `KERNEL32!GetVersion` | IAT 0x5760ac; sites 0x55973b | yes (host) | checked on Amsterdam: check-flow | Boot. CRT entry. Reports Windows 98 (4.10). |
| `KERNEL32!TerminateProcess` | IAT 0x5760b0; sites 0x559cb2 | yes (host) | not verified | Not called. CRT `doexit` path. Throws `GameExit`. |
| `KERNEL32!HeapFree` | IAT 0x5760b4; sites 0x562349, 0x562746, 0x559d75 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks, exit. `Heap` class. |
| `KERNEL32!HeapAlloc` | IAT 0x5760b8; sites 0x55aa63, 0x55abcd, 0x562029 +2 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. `Heap` class in `source/host/win32.js`. |
| `KERNEL32!GetTimeZoneInformation` | IAT 0x5760bc; sites 0x563562, 0x559ffb | yes (host) | checked on Amsterdam: check-flow | Boot. `time()`. Zero bias. |
| `KERNEL32!GetSystemTime` | IAT 0x5760c0; sites 0x559fa6 | yes (host) | checked on Amsterdam: check-flow | Boot. `time()`. |
| `KERNEL32!FindFirstFileA` | IAT 0x5760c4; sites 0x559113 | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_00475860` on `bonus.ds` and `bonus.dso`. |
| `KERNEL32!QueryPerformanceFrequency` | IAT 0x5760c8; sites 0x4a65eb | yes (host) | checked on Amsterdam: check-flow | Boot. 1,193,182, exact in f32. `FUN_004a65e0`. |
| `KERNEL32!GetFileType` | IAT 0x5760cc; sites 0x561a11, 0x5619aa, 0x5660ae | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_005618ab`, `FUN_00565ef5`; 1 for open files, as the CRT needs. |
| `KERNEL32!ReadConsoleInputA` | IAT 0x5760d0; sites 0x55a76b | n/a | not verified | Not called. Not bound: throws `Host function not implemented` if reached. `_getch` under script `getch`, which `bonus.dso` declares and never calls. |
| `KERNEL32!SetConsoleMode` | IAT 0x5760d4; sites 0x55a753, 0x55a7c6 | n/a | not verified | Not called. Not bound. Same reachability. |
| `KERNEL32!GetConsoleMode` | IAT 0x5760d8; sites 0x55a73f | n/a | not verified | Not called. Not bound. Same reachability. |
| `KERNEL32!PeekConsoleInputA` | IAT 0x5760dc; sites 0x55a837 | n/a | not verified | Not called. Not bound: `_kbhit` under script `kbhit`, which `bonus.dso` declares and never calls. |
| `KERNEL32!GetNumberOfConsoleInputEvents` | IAT 0x5760e0; sites 0x55a804 | n/a | not verified | Not called. Not bound. Same reachability. |
| `KERNEL32!HeapReAlloc` | IAT 0x5760e4; sites 0x55aaa4, 0x5626e1 | yes (host) | checked on Amsterdam: check-flow | Boot. CRT `realloc`. |
| `KERNEL32!LCMapStringA` | IAT 0x5760e8; sites 0x55c1b9, 0x55c170 | yes (host) | not verified | Not called. CRT locale helpers. ASCII case only. |
| `KERNEL32!SetStdHandle` | IAT 0x5760ec; sites 0x55a1dc, 0x55a256 | yes (host) | not verified | Not called. No-op for a GUI process. |
| `KERNEL32!FindClose` | IAT 0x5760f0; sites 0x5591cd | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_00475860`. |
| `KERNEL32!CompareStringA` | IAT 0x5760f4; sites 0x55d023, 0x55cfc5 | yes (host) | not verified | Not called. `FUN_0055cf6a`, only `getenv` and `_putenv` call it, and the environment is empty. |
| `KERNEL32!CompareStringW` | IAT 0x5760f8; sites 0x55cfa8, 0x55d1cb | yes (host) | not verified | Not called. Always "equal"; same callers, never reached with an empty environment. |
| `KERNEL32!GetProcAddress` | IAT 0x5760fc; sites 0x56670c, 0x56671d, 0x56672a +1 | yes (host) | not verified | Not called. Returns 0. `GetModuleHandleA` answers 0 for `KERNEL32`, so `FUN_0055db58` does not ask. |
| `KERNEL32!HeapSize` | IAT 0x576100; sites 0x55dfdd | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. CRT `_msize`. |
| `KERNEL32!CloseHandle` | IAT 0x576104; sites 0x55ef95, 0x5660b9 | yes (host) | checked on Amsterdam: check-flow | Boot, exit. Writes back changed files. |
| `KERNEL32!ReadFile` | IAT 0x576108; sites 0x55fd8f, 0x55fcbe | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. `_read`. `rcs.img` and `rc.img` read through `SparseFile` in `source/host/game-files.js`. |
| `KERNEL32!WriteFile` | IAT 0x57610c; sites 0x55ff08, 0x55ff6d, 0x561c15 | yes (host) | not verified | Not called. Only `debug.txt` and tweak dumps with the shipped INI; handle writes are kept until `CloseHandle`. |
| `KERNEL32!SetUnhandledExceptionFilter` | IAT 0x576110; sites 0x560d83, 0x560d95 | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_00560d7e`, through the CRT's init table walker `FUN_00559d34`. Returns 0. |
| `KERNEL32!GetACP` | IAT 0x576114; sites 0x560f64 | yes (host) | checked on Amsterdam: check-flow | Boot. `_setmbcp` from `_setargv`. 1252. |
| `KERNEL32!GetOEMCP` | IAT 0x576118; sites 0x560f4f | yes (host) | not verified | Not called. Only for `_MB_CP_OEM`. 437. |
| `KERNEL32!UnhandledExceptionFilter` | IAT 0x57611c; sites 0x5613cf | yes (host) | not verified | Not called. CRT entry filter; exceptions are JavaScript errors here. |
| `KERNEL32!GetModuleFileNameA` | IAT 0x576120; sites 0x561b38, 0x56154f | yes (host) | checked on Amsterdam: check-flow | Boot. `_setargv`. `C:\A2Racer4\spel.dat`. |
| `KERNEL32!FreeEnvironmentStringsA` | IAT 0x576124; sites 0x561898 | yes (host) | not verified | Not called. Fallback when the W form fails. |
| `KERNEL32!FreeEnvironmentStringsW` | IAT 0x576128; sites 0x561847 | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_00561779`. |
| `KERNEL32!GetEnvironmentStrings` | IAT 0x57612c; sites 0x5617a8, 0x56185a | yes (host) | not verified | Not called. Fallback when the W form fails. |
| `KERNEL32!GetEnvironmentStringsW` | IAT 0x576130; sites 0x561794, 0x5617d4 | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_00561779`. Empty block, so `NOCD` is unset. |
| `KERNEL32!SetHandleCount` | IAT 0x576134; sites 0x561a48 | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_005618ab`. |
| `KERNEL32!GetStdHandle` | IAT 0x576138; sites 0x561a03, 0x561c0e | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_005618ab`. |
| `KERNEL32!HeapDestroy` | IAT 0x57613c; sites 0x561a85 | yes (host) | not verified | Not called. CRT start-up failure or `_heap_term`; the port does not run CRT exit after a normal race. |
| `KERNEL32!HeapCreate` | IAT 0x576140; sites 0x561a67 | yes (host) | checked on Amsterdam: check-flow | Boot. CRT entry, `FUN_00561a56`. |
| `KERNEL32!VirtualFree` | IAT 0x576144; sites 0x5622dc, 0x562337 | yes (host) | checked on Amsterdam: check-flow | Boot, exit. CRT small-block heap. Zeroes on decommit. |
| `KERNEL32!VirtualAlloc` | IAT 0x576148; sites 0x56272f, 0x5627bb | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. CRT small-block heap. Blocks of 64 KB from the top of memory. |
| `KERNEL32!IsBadWritePtr` | IAT 0x57614c; sites 0x565594 | yes (host) | not verified | Not called. C++ EH validation, which the hook bypasses. |
| `KERNEL32!SetFilePointer` | IAT 0x576150; sites 0x567835, 0x562bc5 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. `_lseek`. |
| `KERNEL32!OutputDebugStringA` | IAT 0x576154; sites 0x4c3fc3 | n/a | not verified | Not called. `FUN_004c3fa0`; `DAT_007408ec` is never set. |
| `KERNEL32!CreateFileA` | IAT 0x576158; sites 0x563122, 0x5660a1 | yes (host) | checked on Amsterdam: check-flow | Boot. `_sopen`. Paths go through `normalizePath` in `source/host/vfs.js`. |
| `KERNEL32!IsValidLocale` | IAT 0x57615c; sites 0x564be4 | yes (host) | not verified | Not called. `setlocale` path of the DaviScript iostream code. |
| `KERNEL32!IsValidCodePage` | IAT 0x576160; sites 0x564bce | yes (host) | not verified | Not called. `setlocale` path. |
| `KERNEL32!GetLocaleInfoA` | IAT 0x576164; sites 0x565292, 0x564c40, 0x564c25 +5 | yes (host) | not verified | Not called. `setlocale` path; empty answers. |
| `KERNEL32!EnumSystemLocalesA` | IAT 0x576168; sites 0x56507d, 0x564d25, 0x564f89 | yes (host) | not verified | Not called. `setlocale` path; no callbacks. |
| `KERNEL32!GetUserDefaultLCID` | IAT 0x57616c; sites 0x565123 | yes (host) | not verified | Not called. `setlocale` path. 0x0413. |
| `KERNEL32!GetVersionExA` | IAT 0x576170; sites 0x565235 | yes (host) | not verified | Not called. `FUN_0056521b`, locale. |
| `KERNEL32!GetStringTypeA` | IAT 0x576174; sites 0x567a15, 0x5653ea, 0x56541e +1 | yes (host) | not verified | Not called. CRT locale helpers. ASCII classes only. |
| `KERNEL32!GetStringTypeW` | IAT 0x576178; sites 0x5679fb, 0x567a3c, 0x5653d0 +1 | yes (host) | checked on Amsterdam: check-flow | Boot. CRT locale helpers. ASCII classes only. |
| `KERNEL32!IsBadReadPtr` | IAT 0x57617c; sites 0x565578 | yes (host) | not verified | Not called. C++ EH validation, which the hook bypasses. |
| `KERNEL32!IsBadCodePtr` | IAT 0x576180; sites 0x5655ac | yes (host) | not verified | Not called. C++ EH validation, which the hook bypasses. |
| `KERNEL32!LoadLibraryA` | IAT 0x576184; sites 0x5666f4 | yes (host) | not verified | Not called. CRT message box; returns 0. |
| `KERNEL32!SetEnvironmentVariableA` | IAT 0x576188; sites 0x567700 | yes (host) | not verified | Not called. `FUN_0056758d`, `_putenv`; ignored. |
| `KERNEL32!SetEndOfFile` | IAT 0x57618c; sites 0x56835c | yes (host) | not verified | Not called. `FUN_00568263`. |
| `KERNEL32!GetLocaleInfoW` | IAT 0x576190; sites 0x568719, 0x568753, 0x56882c +2 | n/a | not verified | Not called. Tier X in `win32-surface.md`. |
| `KERNEL32!WritePrivateProfileStringA` | IAT 0x576194; sites 0x499691, 0x4c3c61, 0x4c3cbb | yes (host) | checked on Amsterdam: check-flow | Boot, exit. `FINISHED=1` and the rest of the write-back reached the menu. |
| `KERNEL32!GetTickCount` | IAT 0x576198; sites 0x4239f1, 0x4239f5, 0x427404 +40 | yes (host) | checked on Amsterdam: check-race-ui | Boot, ticks, exit. Virtual clock, 34 game functions. Runs on during pause and quit dialogs; stops with the ticks on focus loss, in a hidden tab and under the settings panel. Check: `pause: P stops the race clocks, the wall clock runs on`. |
| `KERNEL32!GetPrivateProfileStringA` | IAT 0x57619c; sites 0x499a01, 0x4c3d4e | yes (host) | checked on Amsterdam: check-flow | Boot. `FUN_004c3d10`, `FUN_00499960`. |
| `KERNEL32!LCMapStringW` | IAT 0x5761a0; sites 0x55c154, 0x55c25f, 0x55c292 +1 | yes (host) | checked on Amsterdam: check-flow | Boot. CRT locale helpers. ASCII case only. |
| `KERNEL32!GetCPInfo` | IAT 0x5761a4; sites 0x564913, 0x560de4, 0x55d074 +1 | yes (host) | checked on Amsterdam: check-flow | Boot. `_setmbcp`. One byte per character. |
| `KERNEL32!GetLocalTime` | IAT 0x5761a8; sites 0x559f9c | yes (host) | checked on Amsterdam: check-flow | Boot. `time()` for `srand` in `FUN_004c55c0`. `host.fixedDate` fixes it for repeat-trace. |
| `KERNEL32!FlushFileBuffers` | IAT 0x5761ac; sites 0x5630e4 | yes (host) | not verified | Not called. `_commit`; no-op. |
| `KERNEL32!GetCurrentDirectoryA` | IAT 0x5761b0; sites 0x5691d0 | yes (host) | checked on Amsterdam: check-flow | Boot, exit. Every INI path, `FUN_004c3b60`. `C:\A2Racer4`. |
| `KERNEL32!GetFullPathNameA` | IAT 0x5761b4; sites 0x5691bc | yes (host) | not verified | Not called. `FUN_00569161`, only when a drive is named; `_getcwd(0)` takes `GetCurrentDirectoryA`. |
| `ADVAPI32!GetUserNameA` | IAT 0x576000; sites 0x4ccc5f | yes (host) | checked on Amsterdam: check-flow | Boot. Logged only. Answers `speler`. |
| `GDI32!SetTextColor` | IAT 0x57602c; sites 0x4c5a79, 0x4c5b38, 0x4c5bdf +3 | n/a | not verified | Not called. No-op. Debug text, `FUN_004c5930`, needs `TWEAK_MODE=1` or `testmode=true`. |
| `GDI32!SetBkColor` | IAT 0x576030; sites 0x4c5a93, 0x4c5b28, 0x4c5bf9 +3 | n/a | not verified | Not called. No-op. Same gate. |
| `GDI32!SetBkMode` | IAT 0x576034; sites 0x4c5aad, 0x4c5c13, 0x4c5d79 | n/a | not verified | Not called. No-op. Same gate. |
| `GDI32!ExtTextOutA` | IAT 0x576038; sites 0x4c5b0e, 0x4c5c74, 0x4c5dda | n/a | not verified | Not called. No-op. Same gate. |
| `GDI32!TextOutA` | IAT 0x57603c; sites 0x4c5b56, 0x4c5cbc, 0x4c5e1a | n/a | not verified | Not called. No-op. Same gate. |
| `GDI32!SelectObject` | IAT 0x576040; sites 0x4c5a5f, 0x4c5bc5, 0x4c5d2b | n/a | not verified | Not called. No-op. Same gate. |
| `GDI32!GetTextExtentPoint32A` | IAT 0x576044; sites 0x4c5ad0, 0x4c5c36, 0x4c5d9c | n/a | not verified | Not called. Fixed answer. Same gate. |
| `WINMM!mixerGetLineInfoA` | IAT 0x576234; sites 0x4cde20 | n/a | not verified | Not called. Never called with 0 devices. |
| `WINMM!mixerOpen` | IAT 0x576238; sites 0x4cdde5 | n/a | not verified | Not called. Never called with 0 devices. The original used it for the pause mute. |
| `WINMM!mixerGetLineControlsA` | IAT 0x57623c; sites 0x4cde91 | n/a | not verified | Not called. Never called with 0 devices. |
| `WINMM!mixerGetNumDevs` | IAT 0x576240; sites 0x4cdda9 | yes (host) | checked on Amsterdam: check-race-ui | Dialogs. Returns 0, so `FUN_0044ca80` leaves the mixer alone. Pause mutes through `host.onPauseChange` and `GameAudio.pauseAll`; recorded in `intentional-differences.md`, Mixer. Sound by state only. |
| `WINMM!mixerSetControlDetails` | IAT 0x576244; sites 0x4ce020 | n/a | not verified | Not called. Never called with 0 devices. |
| `WINMM!mixerGetControlDetailsA` | IAT 0x576248; sites 0x4cdfe6, 0x4cdee4 | n/a | not verified | Not called. Never called with 0 devices. |
| `WINMM!mixerClose` | IAT 0x57624c; sites 0x4cdfb3, 0x4cdf34 | n/a | not verified | Not called. Never called with 0 devices. |
| `WINMM!timeGetTime` | IAT 0x576250; sites 0x4a687e, 0x4a673b | yes (host) | not verified | Not called. Fallback when QPF fails; it never fails here. |

## COM methods

Bound in `installDirectX` in `source/host/directx.js`, in vtable order. Offsets from call-site bytes (`win32-surface.md` C3), corroborated by a scan of `disassembly.asm` for calls through the interface globals. Pointers kept in tables are outside that scan; the count found one more method that way, Texture `AddRef`. Sound rows by state only.

### IDirectDraw

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| QueryInterface +0x00 | 0x4c5839 IID_IDirectDraw2 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| AddRef +0x04 | no call found | yes (host) | not verified | Not called. Harmless extra. |
| Release +0x08 | 0x4c4100 | yes (host) | checked on Amsterdam: check-flow | Exit. |
| CreatePalette +0x14 | 0x4c9d09, bpp 8 or less | yes (host) | checked on Amsterdam: check-software | Only `RESOLUTION` 0 or 1. Writes an `IDirectDrawPalette` with its own copy of the 1024 bytes. |
| CreateSurface +0x18 | 7 sites, table in win32-surface.md C3 | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. `createSurface` stops the memory probe of `FUN_004bc0f0` by bytes, after 128 surfaces at 16 bits and 256 at 8: exactly `0x1000000`. See the `available_texture_memory` row. At 8 bits a surface with no format takes `PAL8`, and one more surface can be a screen: `host.bufferScreen`, the 8-bit path's target at focus 2. |
| EnumDisplayModes +0x20 | 0x4cd2f0 | yes (host) | checked on Amsterdam: check-flow | Boot. No callbacks, allowed: only logs "could not find mode". |
| SetCooperativeLevel +0x50 | 0x4c57fc, flags 0x51 | yes (host) | checked on Amsterdam: check-flow | Boot. No-op. |

### IDirectDraw2

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| QueryInterface +0x00 | 0x4c0472 IID_IDirect3D2 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| SetDisplayMode +0x54 | 0x4c58ca (W, H, bpp, 0, 0) | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. Sets `host.screen`, bits included: `screenFormat` then gives `PAL8` at `RESOLUTION` 0 and 1. A save with `RESOLUTION` 4 makes game code see 800x600 and looks the same as Normaal; `Hoog` is greyed in `TfrmOptions`. |
| WaitForVerticalBlank +0x58 | 0x44da61, only WAITVBL != 0 | yes (host) | not verified | Not called. No-op. The option is greyed; recorded in `intentional-differences.md`, Windows-only menu options. |

### IDirectDrawSurface (and Surface2, same object)

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| QueryInterface +0x00 | 0x4c5084, 0x4c523f, 0x4c52f4, 0x4c5409 Surface2; 0x4b9cac, 0x4b9d3b, 0x4b9e3a Texture2 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| AddRef +0x04 | 0x4b2d3d in `FUN_004b2cb0`, texture cache; 0x4b9dae, no-HAL path | yes (host) | checked on Amsterdam: check-flow, check-software | Boot, from the texture cache. The host reports a HAL with a 3D card, so the no-HAL site is reached only at `RESOLUTION` 0 and 1, where `HW.dwFlags` is 0. |
| Release +0x08 | 14 sites | yes (host) | checked on Amsterdam: check-flow | Boot, exit. |
| AddAttachedSurface +0x0c | 0x4c0745, 0x4c0717, 0x4c06e9 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| Blt +0x14 | 30 sites: WAIT, WAIT with KEYSRC, WAIT with COLORFILL | yes (host) | checked on Amsterdam: check-flow, check-software | Boot, exit, and a flitser in the race. Screen targets go to the renderer, others to `softBlit` and `softFill`, which work by the byte at 8 bits. There `blitToScreen` holds the sky's rectangles for the next present, and a `Blt` between screens is the present. |
| Blt at 8 bits, stretch into a page tile | `FUN_004b9fa0`; `docs/research/render-8bit.md` | yes (host) | compared with the original: reference-86box | `softBlit`: 256 into 341 or 342 in 16.16 steps from pixel centres. Compared: the world in a frame at rest. Plain rounding put a colour column one texel off at the kerb of Amsterdam, and this rule does not. |
| Flip +0x2c | 0x4c42a4, sole call | yes (host) | checked on Amsterdam: check-flow | Boot, ticks, exit. Ends the captured frame. |
| GetAttachedSurface +0x30 | 0x4c5208 back buffer, 0x4b99c6 mip chain | yes (host) | checked on Amsterdam: check-flow | Boot. |
| GetDC +0x44 | 0x4c5a33, 0x4c5b99, 0x4c5cff, debug text | n/a | not verified | Dummy DC. Debug text only. |
| GetPixelFormat +0x54 | 0x4c8574 | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. RGB 565. At 8 bits `PAL8`, flags 0x60 and zero masks: `FUN_004c8540` tests bit 0x20, and spins on zero masks without it. |
| GetSurfaceDesc +0x58 | 0x4c996d, 0x4c99a4, 0x4c9bc8, 0x4c9c01 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| IsLost +0x60 | 0x4c4a68 (25 callers), 0x44818b, 0x4c0931, 0x4c9368, 0x4c96f0, 0x4b8d38 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks, exit. Always 0: surfaces are never lost. |
| Lock +0x64 | 0x4c47d5, 0x4c48b6, 0x4c4925, 0x4c4d6d, 0x45848d | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. Pixels in wasm memory at the surface's 16 or 8 bits with `lPitch`. |
| ReleaseDC +0x68 | 0x4c5e2d, debug text | n/a | not verified | Debug text only. |
| Restore +0x6c | 0x4c4a72, 0x4c0940, 0x4c9397, 0x4c9727, 0x4b8dd4 | yes (host) | not verified | Not called, because `IsLost` is 0. |
| SetClipper +0x70 | 0x4c555a, windowed only | n/a | not verified | Windowed only. |
| SetColorKey +0x74 | 10 sites, key 0 | yes (host) | checked on Amsterdam: check-flow | Boot. At 8 bits the keys are palette indices, 0xFE on textures. |
| SetPalette +0x7c | 0x4c9dbf, 0x4c9e03, 0x4c9e43, 0x4b9dd4, 0x4b9e06, 8-bit and no-HAL | yes (host) | checked on Amsterdam: check-software | 8-bit and no-HAL paths only. No-op: the game has one palette object, for the screen and the page, and `SetEntries` is what reaches the renderer. |
| Unlock +0x80 | 0x4c49f2, 0x4c4a36, 0x4c4d81, 0x45858a | yes (host) | checked on Amsterdam: check-flow | Boot. |

### IDirectDrawClipper, IDirectDrawPalette, IDirectSound3DBuffer, IDirectSound3DListener

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Clipper SetHWnd +0x20, Release +0x08 | 0x4c5528, 0x4c5586, under WINDOWED=1 | n/a | not verified | No interface in the host. raser.ini WINDOWED=0, no writer in source/menu |
| Palette GetEntries +0x10, SetEntries +0x18 | 0x4c9fba, 0x4c9efa, bpp 8 or less | yes (host) | compared with the original: reference-86box; checked on Amsterdam: check-software | `IDirectDrawPalette` in `installDirectX`, with its own copy, because the flitser passes a stack buffer. `SetEntries` calls `D3DRenderer.setPalette`. Compared: the colours of a frame at rest, from the palette the game sets. `GetEntries` runs only for the flitser, which check-software saw in the port's palette and no frame of the guest caught. FUN_004c9e70, FUN_004c9f30 return at once above 8 bpp |
| 3DBuffer Release | 0x4c6e0d, branch never taken | n/a | not verified | All 3D sound code is dead: win32-surface.md C3 |
| 3DListener | GUID 0x578d90 with no reference | n/a | not verified |  |

### IDirect3D2

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Release +0x08 | 0x4c04a8 | yes (host) | checked on Amsterdam: check-flow | Exit. |
| EnumDevices +0x0c | 0x4c33a8 | yes (host) | checked on Amsterdam: check-flow | Boot. No callbacks: results are not used for selection. |
| CreateMaterial +0x14 | 0x4bb1f4 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| CreateViewport +0x18 | 0x4c0e22 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| CreateDevice +0x20 | 0x4bbce0, 0x4bbd04, 0x4bbd28 | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. One device, HAL accepted first try. At 8 bits the game passes the Ramp GUID: `device.ramp`, `D3DRenderer.setIndexed`. `RESOLUTION 1: Ramp device, 640x480, view on the mode grid`, `RESOLUTION 0: Ramp device, 320x200, clip 0.625, 200 rows`. |
| CreateLight +0x10 | no call site | n/a | not verified | Slot throws if called. |

### IDirect3DDevice2

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Release +0x08 | 0x4bc055 | yes (host) | checked on Amsterdam: check-flow | Exit. |
| GetCaps +0x0c | 0x4bc1af, 0x44ba36 | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. HAL flags, blend caps `0x1FFF`, `dwMaxTextureWidth` 0. `render-textures.md` rule 8 asks for 32 times a power of 2. With 0 `FUN_00498760` ends by overflow at n=27, but `FUN_00498030` stops on the budget first and larger requests clamp to H, so the result equals the 512 or more case (read, not run). On the Ramp device `HW` is empty, `dwFlags` 0, so `FUN_004c1030` takes the path with one surface per texture and no `Load`. |
| AddViewport +0x18 | 0x4c0eb4 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| EnumTextureFormats +0x24 | 0x4c1e2e | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. RGB 565 and ARGB 4444. On the Ramp device one format, `PAL8`. |
| BeginScene +0x28 | 0x44db07, 0x441687 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| EndScene +0x2c | 0x44dcc0, 0x4416be | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| SetCurrentViewport +0x34 | 0x4c0f10, 0x4c0ddf | yes (host) | checked on Amsterdam: check-flow | Boot. |
| SetRenderState +0x5c | 86 sites; states 1, 4, 7, 8, 9, 14, 17-21, 27, 28, 34, 41, 47 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. To `D3DRenderer` in `source/render/d3d-renderer.js`. |
| SetLightState +0x64 | 16 sites; 1 material, 4-7 fog | yes (host) | checked on Amsterdam: check-flow | Boot only, 5 calls from `FUN_004bab70` and `FUN_004bb7a0`. The per-track fog sites `0x456e26..0x4575cc` had no call on Amsterdam. |
| SetTransform +0x68 | 41 sites; world, view, projection | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| DrawPrimitive +0x74 | 12 sites | yes (host) | checked on Amsterdam: check-flow | Ticks. |
| DrawIndexedPrimitive +0x78 | 6 sites | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |

### IDirect3DViewport2, IDirect3DMaterial2, IDirect3DTexture2

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Viewport SetBackground +0x20 | 0x4576cb, 0x457724 | yes (host) | not verified | Not called on Amsterdam. |
| Viewport Clear +0x30 | 0x4c0f86; per frame Z only | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. Clears to black as well: recorded in `intentional-differences.md`, Frame clear. Not at 8 bits: only Z, as the original, so the colour of the world stays between frames. |
| Viewport SetViewport2 +0x44 | 0x4c0ee0 | yes (host) | checked on Amsterdam: check-flow, check-software | Boot. `updateClipMap` takes `clipY` and the mode's size from it: 0.75 and 640x480, or 0.625 and 320x200 at `RESOLUTION` 0. |
| Material SetMaterial +0x0c | 26 sites | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| Material GetHandle +0x14 | 0x4bb254 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| Texture AddRef +0x04 | 0x4b2d5e in `FUN_004b2cb0`, texture cache | yes (host) | checked on Amsterdam: check-flow | Boot. Not in `win32-surface.md` C3: see the corrections in [behavior/host.md](../behavior/host.md). |
| Texture Release +0x08 | 0x4ba490, 0x4ba4a0, 0x4b9f1e | yes (host) | not verified | Not called in a whole race, also not at exit. |
| Texture GetHandle +0x0c | 0x4b9efc, 0x4b9f56 | yes (host) | checked on Amsterdam: check-flow | Boot. Never returns `D3DERR_TEXTURE_BADSIZE`. |
| Texture Load +0x14 | 0x4b9d68, 0x4ba6b7, 0x4ba7e8 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. The 8-bit path does not call it: `HW.dwFlags` 0. |

### DirectInput

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| IDirectInputA Release +0x08 | 0x4f1c25 | yes (host) | checked on Amsterdam: check-flow | Exit. |
| IDirectInputA CreateDevice +0x0c | 0x4f1eec | yes (host) | checked on Amsterdam: check-flow | Boot. |
| IDirectInputA EnumDevices +0x10 | 0x4f2096 | yes (host) | checked on Amsterdam: check-flow | Boot. Keyboard and mouse always; joystick only on device 2, 3 or 4, which check-race-ui covers with a stand-in pad. |
| Device QueryInterface +0x00 | 0x4f1fd7 IID_IDirectInputDevice2A | yes (host) | checked on Amsterdam: check-flow | Boot. |
| Device Release +0x08 | 0x4f1c50, 0x4f1c6a | yes (host) | checked on Amsterdam: check-flow | Exit. |
| Device GetCapabilities +0x0c | 0x4f1f62 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| Device GetProperty +0x14 | 0x4f0707 DIPROP_RANGE | yes (host) | checked on Amsterdam: check-race-ui | Boot on device 2. 0..65535. Stand-in pad. |
| Device SetProperty +0x18 | 0x4eefff, mouse DIPROP_AXISMODE | yes (host) | checked on Amsterdam: check-flow | Boot. |
| Device Acquire +0x1c | 6 sites | yes (host) | checked on Amsterdam: check-flow | Boot. Never fails, so `DIERR_INPUTLOST` never occurs. |
| Device Unacquire +0x20 | 0x4ef1e5, 0x4f099c | yes (host) | checked on Amsterdam: check-flow | Exit. |
| Device GetDeviceState +0x24 | keyboard 0x100, mouse 0x10, joystick 0x50 bytes | yes (host) | checked on Amsterdam: check-race-ui | Ticks. `GameInput.fillDeviceState` in `source/input/keyboard.js`. At most 27 keys are reported: `keyboard: 40 keys held do not end the race`. |
| Device SetDataFormat +0x2c | 0x4ed7c5, 0x4ef0d5, 0x4f0885 | yes (host) | checked on Amsterdam: check-flow | Boot. Formats are assumed, not read from 0x54ae20, 0x54aeb0, 0x54b190. |
| Device SetCooperativeLevel +0x34 | 0x4ed831, 0x4ef141, 0x4f08f1 | yes (host) | checked on Amsterdam: check-flow | Boot. |
| Device2 Poll +0x64 | 0x4ef534 | yes (host) | checked on Amsterdam: check-race-ui | Ticks on device 2. Same object as the device. Stand-in pad. |

### DirectSound

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| IDirectSound Release +0x08 | 0x4c710d | yes (host) | checked on Amsterdam: check-flow | Exit. |
| IDirectSound CreateSoundBuffer +0x0c | 0x4c6911, 0x4c6a59 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| IDirectSound DuplicateSoundBuffer +0x14 | 0x4c6ba2 | yes (host) | checked on Amsterdam: check-flow | Ticks. `GameAudio.duplicate` gives each voice its own chain. Fix check: 12 voices playing, 3 of them duplicates, 12 distinct gain and merge nodes. |
| IDirectSound SetCooperativeLevel +0x18 | 0x4c72fc | yes (host) | checked on Amsterdam: check-flow | Boot. |
| Buffer Release +0x08 | 0x4c6e1c, 0x4c6eb2, 0x4c706d | yes (host) | checked on Amsterdam: check-flow | Boot, ticks, exit. |
| Buffer GetFrequency +0x20 | 0x4c757c | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| Buffer GetStatus +0x24 | 0x4c6c2e, 0x4c6cd2 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks, exit. `GameAudio.isPlaying`. |
| Buffer Lock +0x2c | 0x4c77b6 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| Buffer Play +0x30 | 0x4c6988, 0x4c7c0e | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| Buffer SetCurrentPosition +0x34 | 0x4c6d48 | yes (host) | checked on Amsterdam: check-flow | Ticks, exit. |
| Buffer SetFormat +0x38 | 0x4c694c | yes (host) | checked on Amsterdam: check-flow | Boot. Accepts mode 13, 44100/16/stereo. |
| Buffer SetVolume +0x3c | 0x4c7637 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| Buffer SetPan +0x40 | 0x4c771f | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| Buffer SetFrequency +0x44 | 0x4c74eb | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |
| Buffer Stop +0x48 | 0x4c6d15, 0x4c7039 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks, exit. |
| Buffer Unlock +0x4c | 0x4c7851 | yes (host) | checked on Amsterdam: check-flow | Boot, ticks. |

### Enumeration callbacks

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Enumerator DirectDrawEnumerateA, callback FUN_004ccf60 | win32-surface.md C3: zero callbacks valid | yes (host) | checked on Amsterdam: check-flow | Zero callbacks. |
| Enumerator EnumDisplayModes, callback FUN_004cd280 | zero callbacks valid | yes (host) | checked on Amsterdam: check-flow | Zero callbacks. |
| Enumerator IDirect3D2::EnumDevices, callback FUN_004c2e40 | results unused for selection | yes (host) | checked on Amsterdam: check-flow | Zero callbacks. |
| Enumerator IDirect3DDevice2::EnumTextureFormats, callback FUN_004c1e60 | needs a non-alpha 16-bit format, or at `RESOLUTION` 0 and 1 an 8-bit one | yes (host) | checked on Amsterdam: check-flow, check-software | Two formats. One on the Ramp device. |
| Enumerator DirectSoundEnumerateA, callback FUN_004c6740 | zero callbacks valid | yes (host) | checked on Amsterdam: check-flow | Zero callbacks. |
| Enumerator IDirectInput::EnumDevices, callback FUN_004f1a50 | keyboard0 is required, else fatal | yes (host) | checked on Amsterdam: check-flow | One device per enumeration of keyboard, mouse or, when present, joystick. |

## Messages, window and focus

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Window class `Davilex Entertainment`, wndproc FUN_004cd6b0 | 0x4c55c0, 0x4cd6b0 | yes (recompiled) | checked on Amsterdam: check-flow | Procedure runs as shipped; the host calls it through `sendToWindow` in `installWin32`. |
| WM_ACTIVATEAPP 0x1c | FUN_004cd6b0: DAT_00740dfc = wParam low word | yes (recompiled) | checked on Amsterdam: check-flow | Sent once with 1 at `ShowWindow`. Never sent with 0. |
| WM_ACTIVATE 0x06 | stores wParam, no reader | yes (recompiled) | checked on Amsterdam: check-flow | Sent once at `ShowWindow`. |
| WM_DESTROY 0x02 | PostQuitMessage(0) | yes (recompiled) | checked on Amsterdam: check-flow | `DefWindowProcA` turns `WM_CLOSE` into it. |
| WM_CLOSE 0x10 | PostMessageA at 0x4c4040 | yes (host) | checked on Amsterdam: check-flow | `PostMessageA` in `installWin32`, at race exit. |
| WM_QUIT 0x12 | tested on msg.message at 0x458041, FUN_004cd660 calls exit(0) | yes (recompiled) | checked on Amsterdam: check-flow | Queue in `installWin32`. `FUN_004cd660` sees `WM_CLOSE` only, so CRT exit does not run after a normal race. |
| WM_NCCREATE, WM_CREATE | real Windows behaviour; FUN_004cd6b0 passes them on | yes (host) | checked on Amsterdam: check-flow | `CreateWindowExA` in `installWin32`. |
| WM_PAINT 0x0f | GetUpdateRect, BeginPaint, EndPaint; no drawing | n/a | not verified | The host posts none. Nothing is drawn in the original either. |
| WM_ERASEBKGND 0x14 | returns 1 | n/a | not verified | The host posts none. |
| WM_SETCURSOR 0x20 | SetCursor(NULL): pointer hidden | yes (host) | checked on Amsterdam: check-race-ui | The host posts none. `RaceRunner.load` sets `#game.no-pointer` (`cursor:none`). Check: `pointer: none over the race, back for 2 s on a move`. |
| WM_DRAWITEM 0x2b | no child controls exist | n/a | not verified |  |
| WM_TIMER 0x113 | no timer exists | n/a | not verified |  |
| WM_DEVICECHANGE 0x219 | FUN_004ced80 logs CD insert and remove | n/a | not verified | No disc in the port. |
| Keyboard, mouse, command and menu messages | slots 0x740e08-0x740e70 stay NULL, all go to DefWindowProcA | n/a | not verified | Game input uses `GetAsyncKeyState` and DirectInput. |
| Pump FUN_00458020 | PeekMessageA loop; WaitMessage while DAT_00740dfc == 0, then restore surfaces | yes (recompiled) | checked on Amsterdam: check-flow | Runs as shipped once per tick, `Race.tick` in `source/host/race.js`. |
| Focus loss during a race | pump blocks in WaitMessage, DirectInput lost, DirectSound silent; wall-clock timers run on | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.setFocus` in `source/race-runner.js`: stops ticks and the virtual clock, suspends sound, clears input. Recorded in `intentional-differences.md`, Focus loss. Checks: `focus: clock stops, sound suspends, input clears`, `focus: resumes without a jump`. |
| Hidden tab during a race | As focus loss | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.visibility` calls `RaceRunner.setFocus`. Check: `hidden tab: clock stops and resumes`. |
| Ctrl+F10 screenshot `lvl%2.2d_%2.2d.bmp` | main loop, FUN_00458400, no tweak gate | no | not verified | Left out on purpose: F10 is masked in `source/input/keyboard.js`, and `Race.tick` does not test the keys. Recorded in `intentional-differences.md`, Debug keys. |
| Exclusive full screen | FUN_004c55c0: WS_POPUP, flags 0x51, SetDisplayMode | yes (host) | checked on Amsterdam: check-race-ui | `App.applyFullscreen` in `source/app.js`: Fullscreen API at the first gesture, setting `fullscreen` on by default in `source/settings.js`. Leaving it turns the setting off and opens the quit prompt in a race. Headless Chromium only: no real Esc in a browser that keeps it, no Safari prefix path, no effect of keyboard lock tried. An iPhone has no such call. Checks: the four `full screen:` rows. |
| Mouse pointer hidden in the race | WM_SETCURSOR, see above | yes (host) | checked on Amsterdam: check-race-ui | `#game.no-pointer`; `RaceRunner.showPointer` brings it back for 2 s on a mouse move, on purpose, because the gear button needs it. Check: `pointer: none over the race, back for 2 s on a move`. |
| Fatal error dialog | FUN_004c4150: ShowWindow(6), pump, MessageBoxExA, ExitProcess(1) | partial | not verified | `host.onMessageBox` puts the text in the status line, not modal, then `GameExit` leads back to the menu, in a race (`Race.tick`) and during load (`RaceRunner.run`). Read from the code: no check triggered a fatal in the game. |
| Mouse buttons end the pause | FUN_0044c990 scans VK 0..0xff, which includes VK_LBUTTON, VK_RBUTTON, VK_MBUTTON | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.canvasPress` feeds VK 1, 2, 4, 5 or 6 while a pause is open, a tap as well. `Race.pollPause` scans all VKs, with Shift masking every key. Check: `pause: a mouse button on the race resumes, once released`. |
| Pause dialog `FUN_0044c990` | Waits for P up, then sweeps VK 0..0xff; each key found down is waited on; `FUN_004c5e40` reads 0 while Shift is held | yes (host) | checked on Amsterdam: check-race-ui | `Race.pollPause`, one sweep per tick. Checks: `pause: Shift alone resumes nothing, and masks other keys`, `pause: any key resumes, and the race clock goes on from where it stood`. |
| Quit dialog `FUN_0044c9f0` | Waits for Esc up; J or Y quits; Esc or N leaves; then only Esc is waited for | yes (host) | checked on Amsterdam: check-race-ui | `Race.pollPause`. Checks: `quit dialog: Esc asks, Shift masks J, N stays without waiting for its own release`, `quit dialog: J ends the race, finished=0`. |
| Clocks during a dialog | `FUN_0044ca80`: slots 0, 3, 0xB and the racer slots stop; every other `GetTickCount` user runs on | yes (host) | checked on Amsterdam: check-race-ui | `Race.tick` advances the virtual clock in its pause branch, so a timed bonus can run out during a pause. Check: `pause: P stops the race clocks, the wall clock runs on`. |

## Files and the virtual file system

The race files are the installation with Davilex's two updates: `tools/prepare-assets.py`, `UPDATES` in `prepare_race`, lays `original/updates/installed/` over `original/install/`. The updates win, case-insensitive, stale files removed, `trkuinst.ini` skipped. `public/assets/game` has 142 files: 140 race files, each byte-identical to the current install by SHA-256, plus the generated `files.json` and `race-files.json`. New: `etappe9.*`, `overlay7.ini`, 17 `tru*.d3d`, `carupd.txt`, `trackupd.txt`. Changed: `car_cfg.ini`, `car_snd.ini`, `damage.ini`, `game.ini`, `gen_anim.ini`, `l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini`, `vdyns.dat`.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `RASER.INI` | S:0x448cd0, FUN_00447db0 | yes (recompiled) | checked on Amsterdam: check-flow | Read and written by the race; the menu writes it too (`GameData.writeRaserStuff` in `source/menu/data.js`). |
| `GAME.INI` | S:0x448cd0; 164 int reads | yes (recompiled) | checked on Amsterdam: check-flow | `FINISHED=1` and `TRACKTIME` written back. The car update's copy comes from the developers' machine: `Nrlaps=1`, `etappe=8`, `car=7`, `money=1330`, tune-ups 1. The menu writes those keys before every race; checks without the menu pin them with `pinRace`, `source/host/race-setup.js`. |
| `LANGUAGE.INI` | S:0x458bc0 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `INTEL.INI` | S:0x449460, S:0x449690 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `CAR_CFG.INI` | S:0x4492c0 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `COPS.INI` | S:0x4079a0 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `BEHAVIOR.INI` | S:0x40f000 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `TRAFFIC.INI` | S:0x413a10 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `OPPONENT.INI` | S:0x419a30 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `DAMAGE.INI` | S:0x426a90 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `CAR_SND.INI`, `ANMTYPES.INI` | S:0x44c200 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `SOUND.INI` | S:0x4506e0 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `communi.ini` | S:0x48ae80, S:0x48ebe0 | yes (recompiled) | checked on Amsterdam: check-flow | `testmode = false`, `testmessages = false` shipped. |
| `overlay0.ini`..`overlay6.ini` | S:0x487f20, by CAR | yes (recompiled) | boot only: boot-all | check-flow used one of them; not all seven ran a race. |
| `overlay7.ini` | S:0x487f20, by CAR; since the car update, absent on disc 1.01 | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | Car 7. The code named it all along. No whole race. |
| `gen_anim.ini` | S:0x467fd0 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `e00_anim.ini` | S:0x468ca0 | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `e01_anim.ini`..`e08_anim.ini` | S:0x468ca0 | yes (recompiled) | boot only: boot-all |  |
| `e09_anim.ini` | S:0x468ca0 | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | On the disc all along. Reachable since the track update brought `etappe9.*`, whose installer logs an overwrite of this file with the same bytes. |
| `L0_anim.ini`, `L1_anim.ini`, `L2_anim.ini` | S:0x468ca0, S:0x467f60 | yes (recompiled) | boot only: boot-all | boot-all ran at the shipped league=0. The three files are identical by hash, also after the car update, which renames `TOURNAMENT_BONUS` to `DOWNLOADCAR` in each. |
| `etappe0.{ini,cmp,dmp,pmp,rmp,omp,pth}` | S:0x4ae490, S:0x4641d0 | yes (recompiled) | checked on Amsterdam: check-flow | Fetched per race, `GameFiles.prepareRace` in `source/host/game-files.js`. |
| `etappe1..8.{ini,cmp,dmp,pmp,rmp,omp,pth}` (56 files) | S:0x4ae490, S:0x4641d0 | yes (recompiled) | boot only: boot-all | Fetched per race. |
| `etappe9.{ini,cmp,dmp,pmp,rmp,omp,pth}` (7 files) | S:0x4ae490, S:0x4641d0; since the track update, absent on disc 1.01 | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | Fetched per race. |
| `tru.d3d`, `tru_*.d3d` (17 files) | FUN_004c62c0: not in `rcs.ind`, so `fopen`; since the car update | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | Car 7's meshes, named by `L*_anim.ini [DOWNLOADCAR]` and `gen_anim.ini`. Loose files, fetched before the menu by `GameFiles.loadBase`. |
| `VDYNS.DAT` | S:0x4290f0, 100 x 0x268 bytes | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `bonus.dso` | S:0x475860 through `_findfirst`; missing is fatal | yes (recompiled) | checked on Amsterdam: check-flow |  |
| `rcs.ind`, `rcs.img` | S:0x447be0, S:0x4c5e90; 2,787 members, 114,235,152 bytes | yes (host) | checked on Amsterdam: check-flow | Sparse ranges, `SparseFile` in `source/host/game-files.js`, from `race-files.json`. A member missing from the lists comes in one synchronous request for the rest of it. The other sounds come in the background in pieces of 1 MB, `GameFiles.fetchLate`. |
| `rc.ind`, `rc.img` | S:0x458730, S:0x4cc580; 186 members | yes (host) | checked on Amsterdam: check-flow | Sparse ranges. The list starts at byte 0, which holds the image count `FUN_004cc580` reads. |
| Range lists of the 8-bit modes, `soft[0]` and `soft[1]` in `race-files.json` | `8bit-textures.md` section 11: PCX pictures and low fonts in place of TGA at `RESOLUTION` 0 and 1 | yes (host) | checked on Amsterdam: check-software; boot only: boot-all | `GameFiles.prepareRace` takes `common` and `etappe` from them by `RESOLUTION`; `car`, `pair` and `music` stay the same. Etappe 0: `common` 5.2 to 5.3 MB of `rcs.img`, and 1.1 to 1.2 MB for the etappe. `tools/build-race-lists.mjs` records them from boots of all 10 etappes at each mode, car 0. The other etappes have only that boot at these modes. |
| Race music: track and fetch | `FUN_0044ad40` picks `[MUSIC] LAST+1`, or 0 when that is below 0 or at or above `COUNT`; `FUN_00450de0` | yes (host) | fix check: LAST = -5, 0 to 5 and 99 load the predicted track, 0 samples different from the member; browser, 0 misses with a throttled track | The selection runs recompiled. `GameFiles.raceMusic` predicts it so that `prepareRace` can await that one track from the `music` list. Six tracks, 1.5 to 2.76 MB. |
| Bytes past a member in a buffer fill | `FUN_004c62c0`, `FUN_004cc0b0`, `FUN_0055a06b`: a seek drops the buffer before each member | yes (host) | fix check: game memory equals a full-archive run on etappe 0, car 0, to 300 ticks, except 834 bytes in the stream buffer | `SparseFile.read` leaves them 0 when not downloaded. Difference on purpose; other etappes were not compared. |
| `[GFX OPTIONS] available_texture_memory` | FUN_0044b180 writes the probe result at every exit; M:0x488bd8 reads it | yes (host) | fix check: 0x73b4f9 reads 16777216 after boot, game.ini holds 16777216 after a whole race, Maximaal and Normaal enabled | Host answer `0x1000000` on every machine, the host's choice. Read back on the 16-bit path only: at 8 bits the same number follows from 256 surfaces of 1 byte per pixel, by reading. A save that an older value lowered to Normaal stays there until the player changes it. |
| `debug.txt` | FUN_004c3fa0, `at+`; DEBUGON=1 or fatal path | yes (host) | not verified | Written to the virtual file system and kept in IndexedDB after a fatal error. No check reached a fatal. |
| `lvl%2.2d_%2.2d.bmp` | Ctrl+F10 | no | not verified | Left out on purpose with Ctrl+F10. Recorded in `intentional-differences.md`, Debug keys. |
| `PICTURE.PCX`, `VDYNS.DAT` write, `PhysicsReport.txt` | TWEAK_MODE=1 keys | n/a | not verified | `TWEAK_MODE=0` shipped. |
| `PHYS%d.DAT`, `GAMEPLAY.TXT`, `CfgFiles.INI` | no call or absolute reference | n/a | not verified |  |
| `CE%dL%d.wav` | S:0x41af00: the branch that loads them is never taken (audio.md section 11) | n/a | not verified | No such member in `rcs.ind`. |
| `menu.ini` | M:0x48edec, M:0x48f168; L:0x4010c0 reads ExitCode | yes (menu port) | form check | `source/menu/data.js`. `EXITCODE` is still written, though no launcher reads it. |
| `menucaps.ini` | M:0x486f48, M:0x4865e4 | yes (menu port) | form check | `source/menu/base-forms.js`. |
| `static.ini` | M:0x48e148 | yes (menu port) | form check | `source/menu/data.js`. |
| `agent.ini` | TDaviAgent, M:0x47efb8 | yes (menu port) | form check | `source/menu/forms/group-dialogs.js`. |
| `debug.ini`, `MenuTrac.log`, `menu.log` | M:0x47f6e8; observed in dynamic/logs | no | not verified | Left out on purpose: logs for support, no effect on the player. |
| `SaveGame<N>.RCR` | M:0x481178, M:0x47fbd4; 227 bytes computed | yes (menu port) | checked on Amsterdam: check-flow | IndexedDB through `source/host/persist.js`. check-flow found the file present. |
| `SaveGame<N>.BAK` | M:0x4938ac | partial | not verified | Kept in memory for the time of the player dialog (`GameData.beginPlayerDialog`), not as a file. |
| `garage.ini` | not referenced by any module (byte scan of the five native modules) | n/a | not verified | Prices for Trabant, Astra, VW: left over from an earlier game (inferred). |
| `version.txt` | not referenced by any module | n/a | not verified | Copied to `public/assets/game` and not read. |
| `Uninst32.ini`, `Unwise.ini` | installer data | n/a | not verified | Copied to `public/assets/game` and not read. |
| `carupd.txt`, `trackupd.txt` | readmes of the updates; not referenced by `spel.dat`, `menu.exe`, `A2Racer4.exe` or `rsc.dll` (byte scan) | n/a | not verified | Copied to `public/assets/game` and not read. |
| `Trkuinst.exe`, `trkuinst.ini`, `INSTTRCK.LOG` | installer of the track update | n/a | not verified | Not copied: `RACE_SKIP`, `RACE_SKIP_EXT` in `tools/prepare-assets.py`. |
| Paths: drive, `.\`, `C:\A2Racer4\` prefix, any case | S:0x4c3b60 `<cwd>\<name>` | yes (host) | checked on Amsterdam: check-flow | `normalizePath` in `source/host/vfs.js`. |
| Current directory | cwd = install folder (shortcuts) | yes (host) | checked on Amsterdam: check-flow | `C:\A2Racer4`, `GAME_DIR` in `source/host/win32.js`. |
| Persistence | plain files in the game folder | yes (host) | form check | IndexedDB `a2racer4`, store `files`, `source/host/persist.js`; memory only when storage is refused. Recorded in `intentional-differences.md`, Saves. |

## INI semantics

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Case-insensitive sections and keys | startup-flow.md section 3 | yes (host) | checked on Amsterdam: check-flow | `IniFile` in `source/host/vfs.js`. |
| First match wins (raser `[MUSIC]` has `count` twice) | startup-flow.md port rule | yes (host) | checked on Amsterdam: check-flow | `IniFile`. Scan of the 54 INI files in `public/assets/game`, 52 from disc 1.01 plus `etappe9.ini`, `overlay7.ini`: no value depends on a later duplicate. |
| Duplicate sections | Windows stops at the first section (not tested here) | partial | not verified | The port merges them, where Windows stops at the first (not tested here). Only `e09_anim.ini` has one, `[a_ramp00_anim]`. Track 9 is reachable since the track update, but the section has no extra keys, so the merge makes no difference. |
| Spaces around `=` in a line | `game.ini` since the car update: `OVERLAYELEMENTS = 15` | yes (host) | not verified | `IniFile` trims the key, so the port reads 15 like the original. Not exercised in any check. |
| Integer parse stops at the first non-digit | startup-flow.md port rule; game.ini has tabs and comments after values | yes (host) | checked on Amsterdam: check-flow | `parseInt` in `GetPrivateProfileIntA`. |
| Missing key gives the default, always 0 here | FUN_004c3cd0 | yes (host) | checked on Amsterdam: check-flow | `GetPrivateProfileIntA` in `installWin32`. |
| Hexadecimal values | only menucaps.ini has them, and spel.dat does not read it | n/a | not verified | `parseInt` base 10 would give 0. |
| Quoted strings lose their quotes | Win32 behaviour | yes (host) | not verified | `GetPrivateProfileStringA` in `installWin32`. |
| Key lists through a NULL key | Win32 behaviour; FUN_00499960 may ask | yes (host) | not verified | `GetPrivateProfileStringA` in `installWin32`. |
| Replace in place, comments kept | startup-flow.md port rule | yes (host) | checked on Amsterdam: check-flow | `IniFile.set`. |
| Written values seen by later reads in the run | win32-surface.md C1 | yes (host) | checked on Amsterdam: check-flow | Same parsed object, `Vfs.iniSet`. |
| NULL key deletes a section | Win32 behaviour | no | not verified | `IniFile.set` returns. `FUN_004c3c30` callers always pass a key. |

## Registry

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| spel.dat registry use | None: ADVAPI32 import is GetUserNameA only | n/a | not verified |  |
| A2Racer4.exe registry use | None: imports KERNEL32, USER32, GDI32 | n/a | not verified |  |
| menu.exe registry use | VCL locale and keyboard keys, `.html` open command for btnInternet; no game state | n/a | not verified | The hand port uses none. Browser link: see the menu parity rows. |
| `Software\Davilex\A2 Racer 4\1\NL` (MAINDIR, ReleaseVersion=1.01, ReleaseDate=20002212, URLs, Autorun, HelpFile, InstallLog, ProgramFile, ProgramLog, SetupPath, UninstallKey) | installer; registry/system.reg.excerpt.txt; no game module holds the key string | n/a | not verified | Under `Wow6432Node` in the prefix. |
| `...\1\TechInfo` | installer, for SERVICE.EXE (inferred) | n/a | not verified |  |
| `Software\Davilex\Shared\Service`, `\Registration` | installer, INSTALL.LOG | n/a | not verified |  |
| App Paths, Uninstall keys | installer | n/a | not verified |  |

## Image and memory

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Image at 0x00400000, no relocations | PE header | yes (recompiled) | checked on Amsterdam: check-flow | Linear memory holds the image at the same addresses: `docs/recompiler.md`. |
| `.text 0x401000-0x575fff` | sections.csv | yes (recompiled) | checked on Amsterdam: check-flow | Lifted; not loaded, except tables read as data (`text_refs` in `tools/recomp/build.py`). |
| `.rdata 0x576000-0x58cfff`, `.data 0x58d000-0x751407` | sections.csv | yes (recompiled) | checked on Amsterdam: check-flow | Loaded as data segments. |
| BSS `0x5ca000-0x751407` | PE section header | yes (recompiled) | checked on Amsterdam: check-flow | Zero at instantiation. |
| Entry 0x00559715, WinMain 0x00458270 | `entry` decompile | yes (recompiled) | checked on Amsterdam: check-flow | CRT runs as shipped until the `hook!WinMain` thunk, `Race.boot` in `source/host/race.js`. |
| Stack: reserve 1 MB, commit 4 KB | PE optional header | yes (host) | checked on Amsterdam: check-flow | 0x100000-0x3E0000, 2.9 MB, no guard page. |
| `FS:[0]` only | instruction scan, win32-surface.md C0 | yes (host) | checked on Amsterdam: check-flow | Thread block at 0x3F0000, `Machine.instantiate` in `source/host/machine.js`. |
| Threads: none | no CreateThread, `_beginthread`, Sleep, WaitFor*, SetTimer import | n/a | not verified |  |
| Heap: HeapAlloc, LocalAlloc, VirtualAlloc | win32-surface.md C1 | yes (host) | checked on Amsterdam: check-flow | `Heap` class in `source/host/win32.js`. 16-byte blocks with a header, free lists by size, 256 MB total; running out throws instead of returning NULL. |
| Zero-fill flags HEAP_ZERO_MEMORY, LPTR | calloc, 13 LocalAlloc sites | yes (host) | checked on Amsterdam: check-flow | `HeapAlloc`, `LocalAlloc` in `installWin32`. |
| COM objects | DirectX allocates them | yes (host) | checked on Amsterdam: check-flow | Low area 0x20000-0xF0000, never reused, `Machine.lowAlloc`. |
| GetProcAddress `IsProcessorFeaturePresent`, FDIV test | FUN_0055db58 | yes (host) | checked on Amsterdam: check-flow | `GetModuleHandleA` answers 0 for `KERNEL32`, so `GetProcAddress` is not asked and `FUN_0055db1a` runs the FDIV test, on doubles. |
| x87 80-bit stack, precision control | FUN_004aa0c0, 0x4aa147 | partial | checked on Amsterdam: repeat-trace | f64: recorded in `intentional-differences.md` and `docs/recompiler.md`. repeat-trace shows it repeats, not that it equals a native run. Under Wine the first three ticks agree to about 7 digits, with the control word not read. The effect of the original PC=01b is Unresolved. |
| C++ exceptions, 41 resuming catches | win32-surface.md C5 | partial | not verified | JavaScript exceptions. 16 functions in `GUARDED` catch and go on, `source/host/hooks.js`. The 2 STL retries and 10 iostream catches are not modelled: a throw there ends the race. The host-call count had no throw in a whole Amsterdam race; no check triggers one. |
| `setjmp`, `longjmp` in qhull | FUN_0051e7a0, FUN_005251c0 | yes (host) | checked on Amsterdam: check-flow | `setjmpGuardA`, `setjmpGuardB` in `source/host/hooks.js`, resume copies in `tools/recomp/replacements.py`. 23 `longjmp` during a boot of etappe 0 in the host-call count, none after. Shows the path runs with no host error, not that qhull's output equals the original's. |
| `.text` read as data: switch tables | win32-surface.md C7 | yes (recompiled) | checked on Amsterdam: check-flow | Copied to the same address, `tools/recomp/build.py`. |
| DirectInput data formats in `.text` | 0x54ae20, 0x54aeb0, 0x54b190 | yes (host) | checked on Amsterdam: check-flow | Only passed to `SetDataFormat`, which ignores them. |
| Functions the recompiler could not lift (10) | tools/recomp/out/report.json | n/a | not verified | `FUN_00465345` misdecode; `sub_004e4150` is the text `PAN`; `sub_004f9d00` is CRT table data; `FUN_0054aeb0` is the mouse data format; the other six are helpers of the CRT `exp`, `sinh` and `cosh` tables at 0x5c8bb3 and 0x5c8bea: the `_CIsinh` family is replaced as a unit, and no code refers to the `exp` table (scan of `.text` for its addresses). They trap if called. |

## Programs, processes, disc

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `A2Racer4.exe` launcher: alternates menu and race | L:0x401250, observed `menu.exe /FirstTime` | yes (host) | checked on Amsterdam: check-flow | `source/app.js`, one page. Recorded in `intentional-differences.md`, Processes. |
| `A2Racer4.icd` | Byte-identical to A2Racer4.exe; no module names it | n/a | not verified |  |
| `menu.exe /FirstTime` | M:0x4a9170; observed | yes (menu port) | checked on Amsterdam: check-flow | `GameData.beginMenuRun(firstTime)`. |
| `menu.exe /Default` | M:0x4a9170; not observed | yes (menu port) | checked on Amsterdam: check-flow | `flow.afterRace` in `source/menu/flow.js`. |
| `menu.exe` with neither argument: message and stop | M:0x4a9170, MenuStrings[21] | n/a | not verified | No separate process. |
| `[General] ExitCode` 40 runs the race | L:0x4010c0 | yes (host) | checked on Amsterdam: check-flow | `GameData.leaveMenu`: `raceMode` decides. |
| `[General] ExitCode` 255 ends the program | L:0x401250 | partial | fix check: the error dialog's close led back to the first screen | A tab cannot close itself: `App.exitGame` returns to the first screen. The same route serves Einde; Einde itself was not run in a listed check. |
| ExitCode 0 or missing: MessageBox, end | L:0x4010c0 | n/a | not verified | Not written by any code. |
| `spel.dat` as a new process per race | L:0x401130 `_spawnve` | yes (host) | checked on Amsterdam: check-flow | New wasm instance per race, `RaceRunner.load`. |
| Race exit code ignored | L:0x401250 | yes (host) | checked on Amsterdam: check-flow | `Race.exitCode` is kept, nothing reads it. |
| Failure while a race loads | `startup-flow.md` section 5: `ExitProcess(1)` and a normal return both lead to `menu.exe /Default` | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.run` catches, says `De race kon niet starten: <reden>` for 10 s, writes `finished=0`, cleans up. Check: `load failure: back in the menu with a message, finished=0`, by aborting the fetch of `spel.wasm`, not by a fatal in the game. |
| Race loading screen: `[wait_hi]` picture and `OVL_PROGRESS_BAR` | `FUN_004415e0`, `FUN_004416f0`, `0x004976d0`; `hud-overlay.md` sections 9 and 11a | partial | fix check: bar rectangle measured 308.5, 438, 288, 24; 11 frames on a contact sheet | `RaceRunner.showBar`: the original art at its place, with the same frame rule. The frame follows the download and stands on 95% during boot, on purpose, because boot blocks the browser. The last step with the HUD is not shown. At `RESOLUTION` 1 and 0 the art is `eNN-8.png` or `eNN-lo.png` and `bar8-NN.png`, made ahead from the PCX files through the game's palette. That art is not in the fix check, and not compared with the guest. |
| Waiting for release at the end of a race | `0x0043ac80`: Esc, Enter and Space all up | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.endWait` holds the last frame, with a 5 s limit the original does not have. `menu.ignoreRepeat` keeps repeats out of the menu. Check: `game over: Enter ends it, the race waits for its release, and the menu ignores repeats`, entered through `FUN_0044cda0`. |
| Launcher black window `MOTOR`, pointer hidden on mouse move | L:0x401440 | partial | not verified | Black page, `source/style.css`. The pointer is hidden only over the race canvas, not over the loading screen. |
| `setdebug.exe` | Not started by any module; `debug.ini` text says double-click it | n/a | not verified | Support tool, left out on purpose with `debug.ini`. |
| `rsc.dll` (xvga_* archive I/O) | menu.exe import | yes (menu port) | form check | Menu assets are converted ahead by `tools/prepare-assets.py`. |
| `SERVICE.EXE -r%s` | M:0x4a7a48, exception dialog | n/a | not verified | Windows support tool. Listed in the menu inventory. |
| `autorun.exe`, `setup.EXE`, `service/Setup.exe`, `UnInst32.exe`, `UnWise.exe` | disc and install packaging | n/a | not verified | [provenance.md](../provenance.md) section a. |
| Third party: DXSETUP, DXMEDIA, MSagent, rp505nld, NetManage controls, redistributables | inventory/module_roles.csv | n/a | not verified | [provenance.md](../provenance.md) section a. |
| Disc check spel.dat, FUN_004cd3b0 | fatal without a CD-ROM holding `\DATA\rcs.img` | yes (recompiled) | checked on Amsterdam: check-flow | Byte patch `EB B6` at 0x004CD478, `tools/recomp/replacements.py`. Recorded in `intentional-differences.md`, Disc. |
| Disc check menu.exe, FUN_004a5d4c, TfrmCDRequest | observed "CD niet gevonden" | yes (menu port) | checked on Amsterdam: check-flow | Skipped, `startUp` in `source/menu/flow.js`. Recorded in `intentional-differences.md`, Disc. |
| Environment `NOCD` | FUN_004cd3b0, not in the patch notes; the reference runs set it on the original | n/a | not verified | Empty environment block; the patch is used instead. |
