# Program flow across A2Racer4.exe, menu.exe and spel.dat

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. The text below is as it was written.
>
> Davilex's two official updates were found in the installation after this note was written ([`../provenance.md`](../provenance.md), [`../../original-game-decompiled/original/updates/README.md`](../../original-game-decompiled/original/updates/README.md)). So what it said about track 9's files, the `[DOWNLOADCAR]` section, `overlay7.ini` and `OVERLAYELEMENTS` holds for disc 1.01 only. Those lines, in section 3, and the `BRITISH` entry in Inferred are fixed in place.
>
> The 8-bit path (`3D kaart` off, `RESOLUTION` 0 and 1) was run on an emulated Windows 98 machine and ported after this note was written, and [`render-8bit.md`](render-8bit.md) holds where it differs, so the lines that said `spel.dat` never ran, at the top and in Unknown, and the menu's table in section 3 are fixed in place below.

Prefixes: `L:` = A2Racer4.exe, `M:` = menu.exe, `S:` = spel.dat. Addresses are image addresses (base 0x400000). `DAT_xxx` are Ghidra globals. Delphi class and method names come from the binary; field names starting with `F` come from the dump strings in `vmt_000`; names marked (mine) are mine. All facts are static except where marked "observed" (`dynamic/RESULTS.md`, Wine, menu only). `spel.dat` had not been seen running when this was written.

## Confirmed

### 0. Evidence warning for menu.exe

Ghidra stops decoding at the Delphi `PUSH addr; ...; RET` finally trampoline, so code after a `try..finally` is missing from `decompiled.c` and from `calls.csv`. Example: the raser.ini half of `WriteToInis` is at `M:0x48c50d-0x48c5a9`, in `code_gaps.csv`, and calls `M:0x48ba20`, which therefore shows 0 callers. The flow functions and INI writers below were read as raw disassembly of the original bytes (objdump), and callers were found with a byte scan for `E8`/`E9` targets. Do not trust a "no callers" in `functions.csv` for menu.exe.

### 1. Launcher (L:0x401250 WinMain)

```
if hPrevInstance != 0: return 0
RegisterClassEx("MOTOR", BLACK_BRUSH, wndproc L:0x401440)
   fail: MessageBox("WinMain(): RegisterClass() failed", "Err! -7 CCWINMAP"); return 0
hwnd = CreateWindowEx(WS_EX_APPWINDOW, "MOTOR", "", WS_POPUP, 0, 0, SM_CXSCREEN, SM_CYSCREEN); ShowWindow(nCmdShow)
arg = "/FirstTime"
forever:
   drain PeekMessage; WM_QUIT -> return wParam (0, from PostQuitMessage(0))
   if closing: continue
   code = run("menu.exe", arg)
   if code == 40:  run("spel.dat", ""); arg = "/Default"; continue
   arg = ""; SendMessage(hwnd, WM_CLOSE); closing = true    // wndproc: WM_CLOSE -> DestroyWindow, WM_DESTROY -> PostQuitMessage(0)
```

- `run` = `L:0x401130`: `_spawnve(_P_WAIT, name, {name, arg, NULL}, NULL)` (`L:0x405151` -> `0x405168`), which resolves a bare name to `.\name`. Observed: `app ".\menu.exe" cmdline "menu.exe /FirstTime"`.
- After the spawn, success or failure, `run` returns `L:0x4010c0`, so its result is the INI value. Ghidra shows `run` as `void`, but the asm returns EAX (`L:0x4011f6-0x4011fe`). The process exit codes of menu.exe and spel.dat are never read.
- `L:0x4010c0` = `GetPrivateProfileIntA("General", "ExitCode", 0, <cwd>\Menu.ini)`; cwd from `_getcwd` (`L:0x405036`, `L:0x401020`).
- The return value of `run("spel.dat")` is discarded: the race always returns to the menu.
- Wndproc: `WM_MOUSEMOVE` -> `SetCursor(NULL)`; `WM_PAINT` empty. The window stays black behind the other programs.

| `[General] ExitCode` read | Launcher action | Who produces it |
|---|---|---|
| 40 (0x28) | Run `spel.dat`, wait, then `menu.exe /Default` | `M:0x48f168` when `Data.RaceMode` != 0 |
| 255 (0xFF) | Close and end | `M:0x48f168` when `Data.RaceMode` = 0; also the shipped `menu.ini` value |
| 0 or key missing | `MessageBox("%s (%d) No value specified for menu exit!...")`, then close and end | Not written by any code |
| Any other | Close and end | Not written by any code |

Spawn failure MessageBoxes (caption `MOTOR`): errno 2 `File or path is not found`, 7 `Argument list exceeds 1024 bytes`, 8 `Specified file is not executable or has invalid executable-file format`, 12 `Not enough memory is available to execute new process`, 22 `mode argument is invalid`.

### 2. menu.exe startup order

**Before the program block** (Delphi unit initialization, evidence: observed file order `menu.ini`, `menucaps.ini` first):

- `M:0x487270` reads `menu.ini` sections `MenuStrings`, `OrdinalWords`, `OrdinalNumbers` into a global at `M:0x4ab8b4` (offset = (key-1)*4, e.g. +0x10 = key 5, +0x50 = key 21).
- `M:0x486f48` reads `MenuCaps.ini` defaults.

**Program block `M:0x4a9170`:**

1. `Application.Initialize`; log path = `<exedir>\MenuTrac.log`; `Application.Title = "Race Menu"`.
2. Scan all ParamStr upper-cased (`M:0x48159c`). `/FIRSTTIME`: reset log, log `Version %d/%d/%d/%d`. Else `/DEFAULT`: continue. Neither: ShowMessage(MenuStrings[21] = `Start het spel met 'A2Racer4.exe'.`), `Application.Terminate`, end.
3. `M:0x481634`: set display 800x600, trying 24, 16, 15, then 32 bpp (`EnumDisplaySettings` + `ChangeDisplaySettings`, `M:0x481500`).
4. `TDaviExceptionLogger` init (`M:0x4a8500`); `CreateForm(TfrmMain)`; `CreateForm(TData)`; `frmMain.Visible = True`; `Application.Run`.
5. Finally `M:0x481588`: `ChangeDisplaySettings(NULL, 0)`.

**TfrmMain** (no border, `clBlack`, the parent of all screens, `M:0x49e8c4`):

- `FormCreate M:0x4a4d20`: first-activate flag `+0x2d0 = 1`; `SetBounds(0, 0, Screen.Width, Screen.Height)`; Title and Caption = MenuStrings[5] `A2 Racer 4 Menu`; `FindWindow("Progman")` and `FindWindow("Shell_TrayWnd")` -> `ShowWindow(SW_HIDE)`.
- `FormDestroy M:0x4a4e2c`: `ShowWindow(SW_RESTORE)` on both.
- `FormActivate M:0x4a4fe8`: first time only, `vmt+0x80`, then `StartUp`.

**TData.DataCreate M:0x47efb8, in order:**

1. Create font object, name `Arial`.
2. `Data.GameDir` (+0xB8, mine) = `ExtractFilePath(Application.ExeName)`.
3. `M:0x47f6e8`: `debug.ini [GENERAL] debug`; 0 sets the log's active flag `+0xC` to 0 (`M:0x45f660`).
4. `M:0x481104` on `menu.ini`, `game.ini`, `raser.ini`: clear the read-only attribute.
5. `M:0x4803ac`: if `Menu.hlp` exists, `Application.HelpFile = <dir>Menu.hlp>first`.
6. Resource manager on `<dir>MenuRcs` (`MenuRcs.IND/IMG`, +0xAC); `TSoundManager` (+0xB0); `TBitmapManager` (+0xB4).
7. `M:0x4825f8` LoadMusic: `<dir>menumsc.wav`; missing -> log `unable to load music : ` and no music flag.
8. `M:0x480828` ReadDefGraphics.
9. try `TDaviAgent("hunny.acs", "hunny")` (+0xA0); on exception log `Failed to create MS-Agent.` and leave nil.
10. `TStatic` (+0xCC) from `static.ini` (`M:0x48e148`).
11. `TMenuIni` (+0xC4) from `menu.ini` (`M:0x48edec`).
12. Only if `not FFirstTime`: rank list (+0xD4) and `TGameIni` (+0xC8) from `game.ini` (`M:0x48a804`).

**TMenuIni load `M:0x48edec`:**

| Key | Field | Default if missing |
|---|---|---|
| `[GENERAL] CURRENTPLAYER` | +0x14 `FCurrentPlayer` | 0 (shipped -1) |
| `[GENERAL] PREVSTATE` | +9 `FPrevious` | 0 (shipped 0) |
| `[FORMAT] TIME` | +0xC | shipped `%d:%.2d:%.2d` |
| `[GENERAL] INTROAVI` | +0x10 | shipped `DATA\INTRO1.MPG` |
| `[HIGHSCORES] <i>`, `name<i>`, i < trackcount | list +0x18 | 0, `<no name>` |

`/FIRSTTIME` sets +8 `FFirstTime = 1` and forces `FPrevious = 0`.

**StartUp `M:0x4a5d70`:**

```
r = CheckCd()                    // M:0x4a5d4c
if r == 2:  Data.RaceMode = 0; Data.DoExit; return
Data.RaceMode = MenuIni.FPrevious
switch FPrevious:
  0: ShowIntro; StartMusic(static default); GetPlayer
  1: StartMusic(static default); LoadPlayer(CurrentPlayer); FillRaceResultsQR;   FlowQR
  2: StartMusic(static default); LoadPlayer(CurrentPlayer); FillRaceResultsTour; FlowTour
  else: log "illegal value of Previous : "
```

**CD check:**

- `CheckCd` (`M:0x4a5d4c`): search (`M:0x4a5c24`) with lower-case drive letter `c` to `z`: `<d>:\` + INTROAVI = `c:\DATA\INTRO1.MPG` ..., `FileExists`. Found -> 1. Not found -> log `search on cd: intro not found - ...`, return the modal result of `TfrmCDRequest` (`M:0x4985dc`).
- `TfrmCDRequest`: `btnOk1` ModalResult 1 (inherited from `TfrmCoolDialog`), `btnCancel` ModalResult 2. OK continues with no second check. Cancel exits with `RaceMode` 0, so ExitCode 255.
- Observed: dialog "CD niet gevonden" with no drive; no dialog with `DATA\INTRO1.MPG` on a mapped drive.

**Intro. There is one video.** `M:0x4a50d0` ShowIntro is the only caller of the movie form (`M:0x4a4850`):

1. Path = `<dir>` + `ExtractFileName(INTROAVI)` = `<dir>INTRO1.MPG` (`M:0x408a30`).
2. Missing: log `intro not found : `, log `now searching drives c to z`, search as above.
3. Still missing: log `final search: intro not found : ` and no intro, no error.
4. `TfrmIntro.Create(nil)`, set path +0x2d4, `ShowModal`, `Free`.

| Item | Value | Evidence |
|---|---|---|
| File | `intro1.mpg`, 33,700,324 bytes, MPEG-1 320x240 25 fps, 61.68 s, MP2 44.1 kHz stereo 128 kb/s, stream start 0.766 s | ffprobe on `original/install/intro1.mpg` |
| Form | `bsNone`, `poScreenCenter`, client 792x573, `TMediaPlayer MenuIntro` hidden | `TFRMINTRO.dfm.txt` |
| Play | `FileName`, `Open`, `Display = form`, `DisplayRect = ClientRect`, `Notify = True`, `Play` (MCI 0x803, 0x842, 0x806) | `TfrmIntro.FormShow M:0x4a4928` |
| Open or play error | `PostMessage(hwnd, 0x400, 0, 0)`; dynamic method 1024 `M:0x4a4a6c` = `Close` | `M:0x4a49c6` |
| Notify, mode playing | If `Position >= Length-1`: `Stop`, seek to start (MCI 0x807, flags 0x102), `Close` | `TfrmIntro.MenuIntroNotify M:0x4a49f4` |
| Notify, mode stopped | `Close` | same |
| Key down | `VK_SPACE` (0x20) is ignored. Any other key: playing -> `Stop`; open or stopped -> MCI close; then form `Close` | `TfrmIntro.FormKeyDown M:0x4a4a78` |
| Mouse down | Same, for any button | `TfrmIntro.FormMouseDown M:0x4a4ad8` |
| Transition | None in code: the form closes; the black frmMain is behind it | no fade calls in `M:0x4a4928-0x4a4b2c` |

**Music.**

- Loaded in DataCreate, started in StartUp after the intro.
- `StartMusic M:0x4820d0` -> `IDirectSoundBuffer::Play(0, 0, DSBPLAY_LOOPING)` (`push 1,0,0` at `M:0x482180`). Nothing stops it while the menu runs: `TGameMenuScreen.FormShow` only stops the current voice (`M:0x482950`).
- File `menumsc.wav`: PCM 44.1 kHz stereo 16-bit, 32.03 s.
- Volume `M:0x482830` -> `M:0x480fcc`: `SetVolume = clamp(-trunc(10^(2 + (100-v)/100 * (log10(4000)-2))), -4000, -100)`. Values: v=100 -> -100, v=75 -> -251, v=50 -> -632, v=25 -> -1590, v=0 -> -4000.
- First volume is `static.ini [DEFAULTSETTINGS] MUSICVOLUME` = 50. `LoadPlayer` (`M:0x48af60`) then applies the player's `FMusicVolume`.

**First screen.** `GetPlayer M:0x4a525c`:

- `CurrentPlayer >= 0`: `LoadPlayer`. On exception log `load player error` and go to `AskForNewPlayer`.
- `CurrentPlayer < 0` (shipped -1): `AskForNewPlayer M:0x4a53d8`: modal `TfrmNewPlayer` loop until the name is non-empty. Modal result 2 -> `Application.Terminate` (no DoExit, so `AllowExit` stays 0).
- Result 1 -> `TfrmMainScreen` is shown (class pointer `M:0x49d470`, `vmt+0xF4`).

### 3. How a race is launched

**Screen path (all class pointers read from the code):**

```
TfrmMainScreen  Next (vmt_0fc M:0x49da44): optTour checked -> RaceMode=2, else RaceMode=1 -> TfrmDifficulty
TfrmDifficulty  FlowToNext M:0x49d124: Settings.Difficulty = 0/1/2 (optEasy/optMedium/else)
   RaceMode 1 -> TfrmQuickRace (FormShow sets RaceMode=1 again) --Next vmt_0fc M:0x49bf18--> [start]
   RaceMode 2 -> player+0x1C==1 ? TfrmCurrentChar : TfrmCharacter -> TfrmTrack -> TfrmGarage --Next vmt_0fc M:0x4991ac--> [start]
TfrmTrack.vmt_0fc M:0x499c7c: player.FTrackToDrive = selected TTrack.index (+8)
TfrmCharacter.vmt_0fc: voice, timer, then TfrmTrack.   TfrmCurrentChar.vmt_0fc: TfrmTrack.
TfrmQuickRace track change M:0x49c198: QRState.FTrackIx = list index; player.FTrackToDrive = [QUICKRACE] TRACKIX[list index] (M:0x462424)

[start]: if Settings.FStartInfoOn: modal M:0x49812c (ControlType==0 -> TfrmStartInfoKeyBoard, else TfrmStartInfo);
         modal result 2 -> stay on the screen; otherwise, or when FStartInfoOn=0 -> Data.DoExit
Data.DoExit M:0x47ff64: Data.AllowExit(+0xD8, mine) = 1; Application.Terminate
```

`RaceMode` (mine) = `TData+0xA8`: 0 none, 1 Quick Race, 2 Tour. Quit paths set it to 0 then call `DoExit`: `TfrmMainScreen.btnCloseClick M:0x49dc20`, `TGameMenuScreen.btnCloseClick M:0x49e9bc` when `TfrmCloseDlg` returns 3 (it returns 1 for "main screen").

**TData.DataDestroy `M:0x47f4ac`, in order:**

```
if AllowExit == 0: RaceMode = 0            // any exit not through DoExit
elif RaceMode != 0: WriteToInis(player)    // M:0x48c3f0: game.ini, then raser.ini
if player != nil: SavePlayer               // M:0x47fa5c -> SaveGame<CURRENTPLAYER>.RCR
MenuIni.SaveToFile(menu.ini)               // M:0x460568 -> M:0x48f168
```

So game.ini and raser.ini are written **only when a race starts**. Options changed in the menu live in the save file until then.

**WriteToInis `M:0x48c3f0`:** open `<dir>game.ini` as `TIniFile`; `WriteControlStuffToIni M:0x48b350`; `WriteGeneralStuffToIni M:0x48bcf0`; RaceMode 1 -> `WriteQRStuffToIni M:0x48b5bc`, RaceMode 2 -> `WriteVRStuffToIni M:0x48b7c8`; close. Open `<dir>raser.ini`; `M:0x48ba20`; close.

**Encoding.** All writes go through `WritePrivateProfileStringA` (`M:0x458494`). WriteInteger writes decimal. WriteBool writes `0` or `1` (`M:0x4583a8`). Sections and keys are case-insensitive, so both `[PROGRAM] RESOLUTION` and `[program] resolution` hit one line. All other keys and comments in the file survive.

**Data the table refers to.**

| Object | Field | Source / meaning |
|---|---|---|
| Track (`static.ini [TRACK<FTrackToDrive>]`) | +0x44 `INDEXINGAME`, +0x48 `NRLAPS`, +0x4C `BRITISH`, +0x50 `QUALIFYPOSITION[3]`, +0x5C `CHASETIME[3]` | `M:0x461c8c` |
| IsChase | `CHASETIME[0] > 0` | `M:0x461c84` |
| Character | +0xC `IndexInGame`, +0x10 static char index | `M:0x4606d0` |
| QR character | `QRState.FCharacterIx` -> `[QUICKRACE] CHARIX` -> char | `M:0x48c20c` |
| Tour character | `TourState.FCharacterIx` -> `[TOURRACE] CHARIX` -> char | `M:0x48c22c` |
| CharResult | +8 `FPoints` (money), +0xC `FNextUndrivenTrack`, +0x10 turbo (mine), +0x14..0x18 tune-up flags: 0 Motor, 1 Banden, 2 ABS, 3 Getriebe, 4 Turbo (`[TUNEUPS]`) | `M:0x48da18` |
| `f(v)` | `clamp(100 - trunc(10^(2*(100-v)/100)), 1, 100)`: 100->99, 75->97, 50->90, 25->69, 0->1. Shipped raser.ini 90/90/99 equals f(50), f(50), f(100) | `M:0x480f04` |

**game.ini keys written by menu.exe before every race:**

| [Section] Key | Value | Menu source | spel.dat reader -> global | Effect in spel.dat |
|---|---|---|---|---|
| `[INPUT] DEVICE` | ControlType 0->1, 1->3, 2->2, 3->4 (`M:0x4a6a38`) | `Controls+0x24` | `S:0x46ee10` -> `S:0x46ece0` | 1 keyboard (`S:0x46d360`), 2 joypad (`S:0x46d8a0`), 3 or 4 wheel/joystick (`S:0x46e350`); else fatal |
| `[INPUT] LEFT` | VK code | `Controls+0x10` | `S:0x46d360` -> `0x46ced0` -> `0x46cd60` | Action `CarLeft`. Read only when DEVICE=1. Value 0 is fatal |
| `[INPUT] RIGHT` | VK | `+0x14` | same | `CarRight` |
| `[INPUT] UP` | VK | `+0x8` | same | `CarForward` |
| `[INPUT] DOWN` | VK | `+0xC` | same | `CarBackward` |
| `[INPUT] EXTRA1` | VK | `+0x18` | same | `CarTurbo` |
| `[INPUT] EXTRA2` | VK | `+0x1C` | same | `CarHandbrake` |
| `[INPUT] EXTRA3` | VK | `+0x20` | same | `CarHorn` |
| `[INPUT] SENSITIVITY` | ControlType==3 ? WheelSens : JoySens (`M:0x4a6a70`) | `Controls+0x2C / +0x28` | `S:0x46ee10` | input object +0x24 |
| `[ETAPPE] ETAPPE` | Track `INDEXINGAME` | Track+0x44 | `S:0x447db0`, `S:0x44acb0` -> `DAT_006fb898` | Track index; fatal if > [MAPS] count. Selects [MAPS], [PALET], [wait_hi], `etappe%d.pth` |
| `[OPTIONS] NRLAPS` | Track `NRLAPS` | Track+0x48 | `S:0x449e20` -> `DAT_006fb8fc` | Laps; fatal outside 1..999; forced to 1 if [MAPS] arg0 = 0 (highway, only track 8) |
| `[OPTIONS] OPPONENTS` | `1` if not chase, `0` if chase | `M:0x461c84` XOR 1 | `S:0x449230` -> `DAT_006fb964` | 0: no racers (`S:0x42de60`), player grid slot 0, no [RACERS] write-back |
| `[ETAPPE] BRITISH` | Track `BRITISH` | Track+0x4C | `S:0x449550` -> `DAT_006fb954` | Driving side input to `S:0x42de60`, `S:0x44e340` |
| `[LEAGUE] LEAGUE` | `Settings.Difficulty` 0..2 | Settings+8 | `S:0x4494d0` -> `DAT_006fb958` | Selects `car_cfg.ini [league%d]`, `raser.ini [3D Anims] league%d`, `[BEST TIMES] ..._L%d` |
| `[PLAYER] DAMAGE` | 0 | constant | No read site in spel.dat or menu | Not read |
| `[PLAYER] CHECKPOINT_SPEED` | Only if chase: `static.ini [CHECKPOINTTIME] Difficulty<d>` = 92 / 71 / 62 | TStatic+0xC (`M:0x48e6ec`) | `S:0x44bf10` -> `DAT_005a3eec` | Time limit ms = `checkpoint_value` x this; value < 1 -> 50. Key is left stale after a chase |
| `[GFX OPTIONS] gamma` | `FGamma` | Settings+0x30 | `S:0x449b30` -> `DAT_006fb93c` | Gamma path flag (`S:0x447a00`, `S:0x44bad0`) |
| `[GFX OPTIONS] alpha_blending` | `0`/`1` | Settings+0x35 | `S:0x449b30` -> `DAT_006fb940` | Passed to overlay (`S:0x487f20`) |
| `[GFX OPTIONS] CUSTOM_TEXTURE_MEMORY` | Enum 0->0x200000, 1->0x800000, 2->0x1000000, other->0x800000 (`M:0x4a7160`) | Settings+0x3C | `S:0x449b30` -> `DAT_006fb978` | Clamped to available texture memory in `S:0x44c200` |
| `[OPTIONS] waitvbl` | `0`/`1` | Settings+0x3D | `S:0x44a010` -> `DAT_006fb8e4` | VBL wait |
| `[OPTIONS] filter` | Bilinear ? 2 : 0 (`M:0x4a7150`) | Settings+0x34 | `S:0x44a050`; re-read in `S:0x44bbf0`, `S:0x43d3c0` | Value 2 enables filtering |

Key values are VK codes, listed with Dutch names in `menu.ini [CONTROLKEYS]`. `S:0x46ced0` binds a second key when the first is one of: LCONTROL+RCONTROL, LALT+RALT, LEFT+NUMPAD4, RIGHT+NUMPAD6, UP+NUMPAD8, DOWN+NUMPAD2, LSHIFT+RSHIFT.

**Additional [PLAYER] keys by mode** (reader `S:0x44aa20` for money, turbo, car; `S:0x44a110` for tune-ups):

| Key | Quick Race (`M:0x48b5bc`) | Tour (`M:0x48b7c8`) | spel.dat global and limits |
|---|---|---|---|
| `MONEY` | 0 | `CharResult.FPoints` | `DAT_006fba68`, clamp 0..999,999 (`S:0x4502e0`) |
| `CAR` | QR char `IndexInGame` | Tour char `IndexInGame` | `DAT_006fba5c`; fatal outside 0..10. Selects `RACER_%d`, `overlay%d.ini` |
| `TURBO_AMOUNT` | 100 | `CharResult`+0x10 | `DAT_006fba74`, clamp 0..100 (`S:0x450110`) |
| `MOTOR` | `1` | tune-up[0] | `DAT_006fbb40` |
| `BANDEN` | `1` | tune-up[1] | `DAT_006fbb44` |
| `ABS` | `1` | tune-up[2] | `DAT_006fbb4c` |
| `VERSNELLINGSBAK` | `1` | tune-up[3] | `DAT_006fbb50` |
| `POSITION` | 4 | 4 | No read site. Player grid slot is `DAT_006fbaa4 = DAT_005d2ab0` (NrOpponents, `intel.ini` = 4), or 0 without opponents (`S:0x44aa20`) |

Tweak-menu captions confirm the flags: `- Upgrade motor`, `- Upgrade gearbox`, `- Tires` (`S:0x432880` reads `DAT_006fbb40`, `0x6fbb50`, `0x6fbb44`). `turbo` (`DAT_006fbb48`) stays at shipped `TURBO=1`; `injectie` is absent, so 0.

**raser.ini keys written by menu.exe before every race (`M:0x48ba20`):**

| [Section] Key | Value | Menu source | spel.dat reader | Effect |
|---|---|---|---|---|
| `[PROGRAM] RESOLUTION` | Mode index | Settings+0x2C | `S:0x447db0` -> `DAT_0059db38`; `S:0x447870`, `S:0x44bd10` | See table below |
| `[SOUND] MUSICVOLUME` | MusicOn(+0x1D) ? f(+0x18) : 0 | | `S:0x447db0` -> `DAT_0059dbb8` | 0 = no music (`S:0x450de0`) |
| `[SOUND] SFXVOLUME` | FXOn(+0x1C) ? f(+0x10) : 0 | | -> `DAT_0059dbbc` | |
| `[SOUND] POLICEVOLUME` | VoicesOn(+0x1E) ? f(+0x14) : 0 | | -> `DAT_0059dbc0` | |
| `[directx] index` | `FDriverIndex` | Settings+0x20 | `S:0x447db0` -> `DAT_0059dbcc` | -1 or > 0 selects a driver GUID (`S:0x447830`) |
| `[directx] guid` | Only if `FGUIDChanged` (+0x28): `%d,%d,...` 11 numbers (`M:0x48128c`) | Settings+0x24 | `S:0x447db0` -> `DAT_0059dbd0..` | Absent in shipped file; empty string skips parsing |
| `[program] resolution` | Same as RESOLUTION | Settings+0x2C | same line | |
| `[program] focus` | `FRenderFocus` | Settings+0x38 | `S:0x447db0` -> `S:0x4477b0` | 0 -> `DAT_0059dbb4=1`, 1 -> 2, else fatal. Overridden to 1 by `S:0x447870` for resolutions 3,4,6,7,8,9 |

| RESOLUTION | Mode | Size | `DAT_006fb8d0` hardware 3D | `DAT_006fb890` class | `DAT_006fb894` 8-bit |
|---|---|---|---|---|---|
| 0 | 0 | 320x200x8 | 0 | 0 | 1 |
| 1 | 3 | 640x480x8 | 0 | 1 | 1 |
| 2 | 9 | 640x480x16 | 1 | 1 | 0 |
| 3 | 9 | 640x480x16 | 1 | 1 | 0 |
| 4 | 10 | 800x600x16 | 1 | 2 | 0 |
| 5 | 6 | 320x200x16 | 1 | 0 | 0 |
| 6 | 6 | 320x200x16 | 1 | 0 | 0 |
| 7 | 11 | 1024x768x16 | 1 | 3 | 0 |
| 8 | 12 | 1280x1024x16 | 1 | 4 | 0 |
| 9 | 13 | 1600x1200x16 | 1 | 5 | 0 |

Sources: `S:0x447870`, `S:0x44bd10`, mode table `S:0x5b37b0`. The menu's own table (`M:0x4ab4d8`, assert index <= 9) has entries only for 3, 4, 6, 7, 8, 9; with `3D kaart` off the menu writes 0 (`Laag`) or 1 (`Normaal`) (`menu-forms.md` section 12 no. 38). Default `[DEFAULTSETTINGS] RESOLUTION=3`. `LoadPlayer` and new-player creation overwrite `Settings.FResolution` from raser.ini `[PROGRAM] RESOLUTION` (default 3, `M:0x48c07c`).

**menu.ini keys written on every menu exit (`M:0x48f168`):**

| Key | Value | Read by |
|---|---|---|
| `[GENERAL] CURRENTPLAYER` | `FCurrentPlayer` | menu.exe next start |
| `[GENERAL] PREVSTATE` | `Data.RaceMode` | menu.exe next start |
| `[GENERAL] EXITCODE` | RaceMode = 0 ? 255 : 40 | Launcher |
| `[HIGHSCORES] <i>` | Best lap ms for `[TRACK<i>]` | menu.exe |
| `[HIGHSCORES] name<i>` | Name | menu.exe |

**All other TIniFile users in menu.exe are read-only** (only slots +0, +8, +0x10 called): `M:0x47f6e8`, `0x480b74` (`[PARAMETERS] WavTimeFactor`, default 46), `0x480c9c`, `0x480dd4`, `0x482af8`, `0x486f48`, `0x487270`, `0x4893a0`, `0x48a804`, `0x48c07c`, `0x48e148`, `0x48e9f8` (`L0_ANIM.INI [DOWNLOADCAR] Count`), `0x491fa4`, `0x497b4c`, `0x49eb00`, `0x4a790c`.

**Keys spel.dat reads that menu.exe never writes** (shipped `game.ini` / `raser.ini` values; the file must keep them). A missing integer reads as 0 (`S:0x4c3cd0`).

| File, section | Keys = shipped value | Reader |
|---|---|---|
| game `[OPTIONS]` | `Police=1 Traffic=1 BonusCountDown=1 Invulnerable=0` | `S:0x449230` |
| game `[OPTIONS]` | `demo=0`, `dif_mod=4`, `stuur_model=0`, `ai_model=0`, `traffic_ai_model=1` | `S:0x449590`, `0x4495d0`, `0x449610`, `0x449650`, `0x449af0` |
| game `[OPTIONS]` | `BACKGROUND` absent, `RESIZETEXTURE=0`, `STARTCHUNK` absent (comment only), `VISIBLECHUNKS=25` (min 10), `3DSOUND=1`, `BENZINEPRIJS=1` | `S:0x44a540`, `0x44a590`, `0x44a5e0`, `0x44a630`, `0x44a4f0`, `0x44a4a0` |
| game `[OPTIONS]` | `texturecopy=0`, `collisionoff=0`, `difficulty=1`, `FOG=0` | `S:0x44a1f0`, `0x44a1b0`, `0x44a0d0`, `0x44a090` |
| game `[GFX OPTIONS]` | `clouds=1 finish_flag=1 skidmarks=1 fade_skmarks=1 particles=1 part_rain=1 disable_overlay=0 overlay_detail=3 object_lights=1 mipmapping=0 radar=0 drawwp=0`; `OVERLAYELEMENTS` absent on disc 1.01, `15` from the car update | `S:0x449b30` |
| game `[PLAYER]` | `copland=0`, `RESETWAITTIME=10`, `DAMAGE_MESH`, `DAMAGE_VALUE` (exactly 8 values or fatal) | `S:0x44aa20` |
| game `[PLAYER]` | `turbo=1`, `injectie` absent | `S:0x44a110` |
| game `[PLAYER]` | `checkpoint_value=1000` | `S:0x44bf10` |
| game `[ETAPPE]` | `DIRECTION` absent (0) | `S:0x44acb0` |
| game `[RACERS]` | `count` must be 6 or fatal; `<i>` 3 values, `DAM<i>` 8, `VAL<i>` 8, i=0..5, or fatal | `S:0x44a230` |
| game `[BEST TIMES]` | `LAP_RECORD_E%d_L%d`, `RACE_RECORD_E%d_L%d`, `TIME_CHECK_COUNT_E%d_L%d` (0..9), `TIME_CHECK_E%d_C%d_L%d`. Record 0 -> 0xFFFFFFF | `S:0x449ea0` |
| game `[CAMS]` | `0`..`8`. Missing `0`..`3` is fatal | `S:0x437f00`, `0x437990`, `0x437b10` |
| game `[Portraits]` | `<car>` = overlay element name; missing is fatal | `S:0x4932a0` |
| game `[CDCHECK]` | `SIZE`, `NAME` absent: "[Not checking cdrom]" | `S:0x447be0` |
| raser `[PROGRAM]` | `NAME=A2 Racer IV` (window title), `WINDOWED=0` | `S:0x447db0` |
| raser `[MOUSE]` `[IMG]` | `TYPE=1`; `RCSFILE=rcs` | `S:0x447db0` |
| raser `[PALET]` | `etappe%d` two names, or fatal; `SHOW=0` | `S:0x447db0` |
| raser `[HELPDESK]` | `DEBUGON=0`, `TWEAK_MODE=0` (`DAT_006fb950`) | `S:0x447db0`, `S:0x449510` |
| raser `[SOUND]` | `BUFFERS=80`, `ON=1` | `S:0x447db0` |
| raser `[MUSIC]` | `0..5` names, `COUNT=6` (1..30 or fatal), `LAST` | `S:0x44ad40` |
| raser `[MAPS]` | `COUNT=12` (1..30 or fatal), `<i>` exactly 15 args or fatal | `S:0x44a690` |
| raser `[wait_hi]` `[wait_lo]` | One name per map; `wait_lo` only for class 0 in 8-bit | `S:0x449cb0` |
| raser `[3D Anims]` | `general`, `<i>`, `league%d` | `S:0x467fd0`, `0x467c30`, `0x467f60`, `0x468c10` |
| raser `[progress]` | `CALCULATE=0`, `COUNT=11`, `percent%d` | `S:0x441370` |
| language `[SETTINGS]` | `language=0`, `text_count=69`; `[NEDERLANDS]` | `S:0x458bc0` |

raser `[MOVIES]` has no read site. `[MAPS]` arg 9 ("music index") is parsed to `+0x80` (`0x6fa610`), which has no absolute reference in the byte scan. `[MUSIC] LAST` chooses the music.

**Track table (`static.ini`):**

| n | NAME | INDEXINGAME | Laps | QUALIFYPOSITION (d0,d1,d2) | Chase | BRITISH |
|---|---|---|---|---|---|---|
| 0 | Amsterdam | 0 | 2 | 3,2,2 | no | 0 |
| 1 | Rotterdam | 1 | 2 | 9,9,9 | yes | 0 |
| 2 | Scheveningen | 2 | 2 | 4,3,2 | no | 0 |
| 3 | Wenen | 3 | 2 | 9,9,9 | yes | 0 |
| 4 | Berlijn | 4 | 2 | 9,9,9 | yes | 0 |
| 5 | Hamburg | 5 | 2 | 1,0,0 | no | 0 |
| 6 | Frankfurt | 6 | 2 | 0,0,0 | no | 0 |
| 7 | BodenSee | 7 | 2 | 3,2,1 | no | 0 |
| 8 | Munchen - Wenen | 8 | 1 | 2,1,0 | no | 0 |
| 9 | Download-race | 9 | 2 | 0,0,0 | no | 1 |

- `[QUICKRACE]` `TRACKIX=2,0,1,7,8,3,5,6,4,9`, `CHARIX=0,1,5,6,3,4,2,8`, `DEFAULTCHAR=1`. `[TOURRACE]` `TRACKIX=2,0,1,7,8,3,5,6,4`, `CHARIX=0,1,3,4,2`, `DEFAULTCHAR=2`.
- Characters -> `indexingame`: char0-7 = 0-7 (Edgar, Tommie, James Brons, Kat, Barbarally, D.T. Harry, politie-auto, hunny); char8 `downld` = 7.
- `CHASETIME` values (`170111,150111,110111`) reach only `IsChase` and the debug dump: the getter at `M:0x461c7c` has one caller, `TTrack.vmt_000`. The chase limit comes from `CHECKPOINT_SPEED`.
- Track availability `M:0x461a4c`: `etappe<INDEXINGAME>` + `.cmp .dmp .ini .omp .pmp .pth .rmp` must all exist in the game dir. Disc 1.01 has no such files for track 9; the track update adds all seven, so this rule opens it. Chase tracks in Quick Race also need `M:0x48c644`.
- Download char: `L0_ANIM.INI [DOWNLOADCAR] Count > 0`. Disc 1.01 has no such section and no `overlay7.ini`, needed by car 7. The car update adds both, so this rule opens it: car 7 is the truck, De Schaduw on the art.

### 4. What spel.dat writes back, and how menu.exe reads it

**At init:** `S:0x4491f0` writes `game.ini [PLAYER] finished=0`, so a crash or quit reports "not finished". `S:0x44ad40` writes `raser.ini [MUSIC] LAST = (LAST+1) mod COUNT` (invalid -> 0); that value picks the race music (`S:0x450de0`).

**At exit:** `S:0x44afc0`, called from exit-game `S:0x4490a0`, runs `S:0x44b1c0`, `S:0x44afe0`, `S:0x44ae80`, `S:0x44b180` in that order. "Finished" = `DAT_006fba98`.

| Section, key | Written when | Value | Read by menu.exe |
|---|---|---|---|
| `[PLAYER] finished` | Always | 0/1 | `FINISHED` -> `TGameIni+0xC FPlayerFinished` |
| `[PLAYER] lap_%d_time` (1-based) | Always, for i < lapcount | Lap ms (`DAT_006fbe40[i]`, timer 0 at each crossing, `S:0x456a30`) | `LAP_1_TIME`..`LAP_5_TIME` if the key exists -> `FPlayerLapTimes`. Stale higher laps stay in the file |
| `[PLAYER] lapcount` | Always | `DAT_006fb8f8` | No |
| `[PLAYER] out_of_time` | Always | 1 if timer 0xB remaining = 0 | `Out_Of_Time` -> `FOutOfTime` |
| `[PLAYER] total_loss` | Always | 1 if car damage >= 1000 | `Total_Loss` -> `FTotalLoss` |
| `[PLAYER] money` | finished | `DAT_006fba68` | `MONEY` -> `FPlayerPoints` (+8) |
| `[PLAYER] turbo_amount` | finished | `DAT_006fba74` | `TURBO_AMOUNT` -> +0x14 |
| `[PLAYER] radarbonus` | finished | 0..30, from `DAT_006fbdec` (`S:0x43ad40`) | No |
| `[PLAYER] checkpoint_money` | finished | `remaining_ms / checkpoint_speed`, clamp 0..999,999 | No |
| `[PLAYER] damage` | finished, twice | Last value = damage points (`S:0x425300`) | No |
| `[PLAYER] tracktime` | finished | Timer 3 ms (`DAT_006fbaa0`) | `TRACKTIME` -> `FPlayerTrackTime` |
| `[PLAYER] position` | finished | `DAT_006fbaa4` | No |
| `[PLAYER] DAMAGE_MESH`, `DAMAGE_VALUE` | finished | 8 ints, 8 floats | No. spel.dat re-applies them next race (`S:0x44aa20`, `S:0x44ceb0`) |
| `[RACERS] <i>` | finished and opponents, i < NrOpponents | `car,finish_slot,time_ms` after `S:0x42e150` | i=0..3: field 0 -> character by game index, field 2 -> `FTime` |
| `[RACERS] DAM<i>`, `VAL<i>` | same | 8 ints, 8 floats | No; re-applied next race |
| `[BEST TIMES] LAP_RECORD_E%d_L%d`, `RACE_RECORD_E%d_L%d`, `TIME_CHECK_COUNT_E%d_L%d`, `TIME_CHECK_E%d_C%d_L%d` | finished | ms | No |
| `[GFX OPTIONS] available_texture_memory` | Always | `DAT_0073b4f9` | `M:0x480c9c`, used by `M:0x488bd8` |

Other writes:

- `raser.ini [PROGRESS] COUNT, percent%d` only with `calculate=1` (`S:0x441510`).
- `game.ini [CAMS]` from key-gated camera code (`S:0x437a80`, `S:0x437d60`, reached from `S:0x438670`).
- `S:0x499580` "WriteToIni" has callers `S:0x4993d0` and `S:0x49bf10`, which have no call or absolute reference.

`S:0x42e150` before `[RACERS]`: a racer that has not finished gets an extrapolated time: `time + (time / (total_chunks - to_go)) * to_go`. Then slot = number of racers with a lower time, +1 if >= the player's position.

**Menu side.** `TGameIni` is loaded in DataCreate on every `/Default` start. It uses `TSafeIniFile`, which raises an exception if the section is missing (`M:0x460124`). `[RACERS]` loop is i=0..3. Times are ms; format `M:0x481090` = `[FORMAT] TIME` with `ms/60000, (ms/1000)%60, (ms/10)%100`.

`FlagsRR` (mine) = `TData+0xD0`. Names from log strings: 0x01 chase (mine), 0x02 `RR_QUALIFY`, 0x04 `RR_WINRACE`, 0x08 `RR_WINTRACK`, 0x20 `RR_BESTLAP`.

`FillRankResults M:0x48003c`: four `TRankResults(character, time)` from `[RACERS]` plus the player with `FPlayerTrackTime`; sort by time ascending (`M:0x48002c`); `Data.PlayerPos` (+0xA4, 0-based) = player's rank. Player character = same character as an opponent asserts `double racers`.

`CheckIfBestLap M:0x49ed60`: for i < track `NRLAPS`: if lap[i] < `[HIGHSCORES]` of `FTrackToDrive`: set `RR_BESTLAP`, store. If set, modal name dialog `M:0x4984f0` until non-empty, store name.

`FillRaceResultsQR M:0x4a54dc`:

```
if track(QR).IsChase: flags |= 1
if finished:
    if not QR track IsChase: FillRankResults
    CheckIfBestLap
```

`FillRaceResultsTour M:0x4a5624` (tour = `TourState`, `cr` = its current CharResult):

```
if track.IsChase: flags |= 1
if finished:
    cr.tuneups = all false (M:0x48dc38); cr.FPoints = max(0, money); cr.turbo = clamp(turbo_amount, 0, 100)
    chase:     CheckIfBestLap; CheckChaseQualify M:0x49eef0:
                  flags |= RR_QUALIFY; advance FNextUndrivenTrack; if it == tour track count-1: flags |= RR_WINRACE
    not chase: FillRankResults; CheckIfBestLap
               PlayerPos == 0: Process1stPosition M:0x49f010: if FNextUndrivenTrack == FTrackIx advance;
                               flags |= RR_WINTRACK; FPoints += [GAMEVALUES] FirstPlaceBonus (2500)
               PlayerPos <= QUALIFYPOSITION[difficulty]: ProcessQualify M:0x49f100: flags |= RR_QUALIFY; same advance
```

Advance (`M:0x48dd00`): +1 while count > current. Money and turbo are not applied when the race was not finished.

**Next screen:**

| Function | Condition | Screen |
|---|---|---|
| `FlowQR M:0x4a58a4` | finished and not chase | `TfrmResults` |
| | otherwise | `TfrmQuickRace` |
| `FlowTour M:0x4a59cc` | finished, chase, QUALIFY and WINRACE | `TfrmWinFinal` |
| | finished, chase, QUALIFY only | `TfrmWinChase` |
| | finished, chase, no QUALIFY | `TfrmLoseChase` |
| | finished, not chase | `TfrmResults` |
| | not finished, chase, `M:0x48a6ac` true (finished, out_of_time, total_loss all 0) | `TfrmTrack` |
| | not finished, chase, out_of_time or total_loss | `TfrmLoseChase` |
| | not finished, not chase | `TfrmTrack` |
| `TfrmResults.vmt_0fc M:0x4a0a20` | `FPrevious` = 1 | `TfrmQuickRace` |
| | WINTRACK | `TfrmWinNormal` |
| | QUALIFY | `TfrmQualify` |
| | otherwise | `TfrmLoseNormal` |
| `TfrmWinNormal`, `TfrmQualify`, `TfrmWinChase` | Next | `TfrmTrackIntro` |
| `TfrmLoseNormal`, `TfrmLoseChase` | Next | `TfrmTrack` |
| `TfrmTrackIntro` | `timClose` 3500 ms or background click; voice `NextTr` | `TfrmTrack` |
| `TfrmWinFinal` `M:0x4a42e8` | `QRState+0x10` set | `TfrmCharacter` |
| | otherwise | `TfrmQuickRace` |

An arrest game-over writes finished=0, out_of_time=0, total_loss=0 (unless the timer also ran out), so in a chase it takes the "retry" row to `TfrmTrack`, not `TfrmLoseChase`.

`TfrmWinFinal` plays `<dir>ch<NN>.avi` (`NN` = static char index, two digits, `M:0x480b08`), looping via `medWinnerNotify` (seek to start, Play). Files: `ch00`..`ch04`, Cinepak 370x370 25 fps, about 3.3 s (ch00 probed), no audio track in ch00.

### 5. spel.dat start-up, main loop, race end, exit

**`WinMain S:0x458270`** ignores `lpCmdLine`; only hInstance and nCmdShow are passed on. Order:

1. `S:0x448cd0`: register `RASER.INI` as `System Settings`, `GAME.INI` as `Game Settings`. `S:0x4489a0` calls `_access`; missing file is fatal.
2. `init_main S:0x4580e0`:

| # | Call | Log string / content |
|---|---|---|
| 1 | `S:0x475b50` | `Init ScriptEngine`: script class table, then `bonus.dso` (`S:0x475860`) |
| 2 | `S:0x447db0("System Settings")` | game.ini `[ETAPPE] ETAPPE`; raser `[PROGRAM]`, `[MOUSE]`, `[SOUND]`, `[IMG]`, `[PALET]`, `[HELPDESK]`, `[DIRECTX]` |
| 3 | `S:0x4c3f80(0, DEBUGON != 0)` | Debug log switch |
| 4 | `S:0x458bc0` | `language.ini` |
| 5 | `S:0x4491f0` | Write `finished=0` |
| 6 | `S:0x449b30` | `[GFX OPTIONS]` |
| 7 | `S:0x4480f0` | `Initing 2d skelet`: mode (`S:0x447870`), window + DirectDraw (`S:0x447a00` -> `S:0x4c55c0`; class `Davilex Entertainment`, title `[PROGRAM] NAME`), then `S:0x447be0` CD check + archive open |
| 8 | `S:0x469fa0`, `S:0x46ee80` | Input manager; `[Input]` device binding |
| 9 | `S:0x4c04b0(focus, 10, 10, 0x1000)` | 3D library; illegal focus is fatal |
| 10 | `S:0x4414e0` | Progress clock; `[progress]` |
| 11 | `S:0x44c200` | `Initing game` |
| 12 | `S:0x4a65e0` | `Initing game timer.` QPC, else `timeGetTime` |
| 13 | `S:0x4415e0`, `S:0x441510` | Last progress step; end progress |
| 14 | `S:0x44e160` | FPS counters |
| 15 | `S:0x41b220` | `Init CopRadio` |

**`init_game S:0x44c200`** (order and log strings in the code): `S:0x44c090` (console vars) -> `set_game_display` `S:0x44bd10` -> `ini_load_all` `S:0x4492c0` -> `init_3d_library` `S:0x44bad0` -> clamp texture memory -> `set_game_render_states` `S:0x44bbf0` -> projection matrix `S:0x4b39d0(m, 0.5/f, 12500.0, f*pi)`, `f` = `DAT_006fb974` = 0x3ec00000 = 0.375 set in `S:0x449b30` -> `init_game_info` -> `init_2d_graphics` `S:0x440950` (`rc.img`, `rc.ind`) -> color key -> `init_ascii_fonts` -> `init_moving_sky` -> `init_game_actions` -> `InitSndFxEngine` `S:0x4506e0` -> damage `S:0x426a90` -> car sound (`CAR_SND.INI`) -> `init_3d_anim_config` -> overlay `S:0x487f20` + `S:0x4885b0` -> progress -> `ANMTYPES.INI` -> `rceng_init_engine` (4 road textures) -> progress -> `init_track_object_types` -> `init_all_triggers` -> `init_car_shadow_object` -> `S:0x4290f0` (`VDYNS.DAT`) -> `rceng_load_etappe` (`etappeN.ini`, track files) -> particles -> radar (if `[GFX OPTIONS] radar`) -> sparks -> clouds -> flag -> skidmarks -> progress -> `init_bkg` -> `init_game_cars` `S:0x4294a0` -> `init_3d_paths` (`etappeN.pth`) -> `init_etappe_timer` `S:0x44bf10` -> progress -> `init_game_cameras` -> `S:0x4096b0` -> ambient light from [MAPS] args 11-13 -> `S:0x488380` -> `DAT_0071277c=1` -> `S:0x450870`.

**`ini_load_all S:0x4492c0` order:** intel `[General] NrOpponents` (<= 6), options, league, [MAPS], player, etappe, music, background, resizetexture, startchunk, visiblechunks, 3dsound, benzineprijs, racers, texturecopy, collisionoff, tune-ups, difficulty, fog, waitvbl, filter, best times, nrlaps, wait screens, gfx (again), stuur, ai, traffic ai, dif_mod, demo, tweak, british, intel (full), `car_cfg.ini`.

**Grid.** `S:0x42e0d0`: player's slot = `DAT_006fbaa4`; racers fill remaining slots from 0. `S:0x42de60`: racer car indices 0,1,2,... skipping the player's car, written to `[RACERS]` field 0. The saved `[RACERS]` fields 0 and 1 from game.ini are overwritten, so the grid does not depend on the last result.

**`start_game S:0x44cf60`:** state 1; `S:0x4500b0` (player resets, timer 3 = count-up, limit 0xFFFFFFF); `DAT_006fb89c = 1` (loop flag); finished = 0; `DAT_006fb8c0 = 0`; `DAT_006fba9c = 0`; `S:0x44ceb0` (apply saved damage).

**Main loop (`S:0x458270`):**

```
while DAT_006fb89c != 0:
   handle_game S:0x44cb80;  S:0x4517f0 (timers 0x4516a0/0x451730/0x4517c0, FOV easing);  frame count S:0x44e180
   if my_handle_win_msg S:0x458020 (WM_QUIT seen): break
   if Ctrl and F10: screenshot S:0x458400 (lvl%2.2d_%2.2d.bmp)
   CopRadio S:0x41c150
exit_main S:0x458210; return 0
```

`handle_game` order: timer update `S:0x4a6700`; input `S:0x469fa0`/`S:0x46fdb0`; `rceng_handle_objects` `S:0x4a9870`; `S:0x41ca20`; `handle_game_cameras` `S:0x438670`; `S:0x4509b0`; `S:0x45dc00`; `S:0x44e830`; `S:0x444de0`; `check_game_keys` `S:0x44cf90`; `S:0x427130`; total-loss check `S:0x44c950`; reset hint if `S:0x4031e0 > RESETWAITTIME`; `render_game` `S:0x44da30`; `S:0x4aa0c0`; `S:0x464cf0`; `S:0x464cb0`; `handle_game_actions` `S:0x43c260`; `S:0x44c8c0`; 2D display unless `disable_overlay`; console; `update_game_screen` `S:0x44df10`; adaptive visible chunks `S:0x44cb30`; pause/quit handling if `DAT_006fb8d8`.

**Game states** (`DAT_006fb8a0`, set by `S:0x44cda0`; actions run by `S:0x43c120(id, start, poll, end)`, polled each frame by `S:0x43c260`, 13 slots):

| State | Set by | Action (start / poll / end) | Behaviour |
|---|---|---|---|
| 1 | `start_game` | 2: `S:0x43c5d0` / returns 1 / none | Then action 1: `S:0x43c380` (`START_ENGINES`) / `S:0x43c3d0` / `S:0x43c510` |
| 0 | `S:0x43c3d0` step 4 | | Racing. `DAT_006fb8c0 = DAT_006fba9c = 1` |
| 8 | `S:0x409160` player arrested in state 0 | 0xB: `S:0x43a910` / `S:0x43a980` / `S:0x43a9f0` | Count +1; after 4000 ms back to state 0; count > 2 -> game over mode 2 |
| 3 | `S:0x456b20` finish | 4: `S:0x43ab70` / `S:0x43ac80` / `S:0x43ad40` | `FINISH_JUICHEN`; 1500 ms; overlay state 5; wait for Esc, Enter or Space, then for release; radar bonus; finished = 1; state 4 |
| 6 | Game over | 0xC: `S:0x43bc20` / `S:0x43bd60` / `S:0x43be50` | Orbit camera; after 1000 ms any of Esc, Enter, Space -> state 4 |
| 4 | Above, or quit prompt | | `DAT_006fb89c = 0`: loop ends |

- Countdown `S:0x43c3d0`: 2.2 s -> overlay 8; 0.9 s -> 9; 0.9 s -> 10; 0.9 s -> 11 and state 0; 1.0 s more ends the action (overlay 1).
- Finish `S:0x456b20`: only in state 0, 7 or 8. Each crossing runs `S:0x456a30`. When `NRLAPS <= lapcount`: stop timer 3 (`tracktime`), race record, state 3, `DAT_006fcf8c = remaining timer 0xB`, finished = 1.
- Game-over modes `DAT_0059a190`: 0 total loss, damage > 0x44A = 1098 in state 0 (`S:0x44c950`), overlay 6. 1 out of time: track mode ([MAPS] arg 14) = 1, state 0, timer 0xB elapsed (`S:0x44c8c0`, ticks `TIME_TICK` under 6 s), overlay 0xC. 2 arrested, overlay 7.
- Timers: 0xB limit = `checkpoint_value * checkpoint_speed` ms, count-down; 0 limit = [MAPS] arg 10 x 1000 (`S:0x44bf10`). Timers 0, 0xB and 3 start together in `S:0x457ab0` (once, guarded by `DAT_005a3edc`), which is referenced from the data table at `S:0x5a3aec`, not at state 0.
- Esc in any state but 3 or 6: overlay 3, `DAT_006fb8d8=2`; after two more flips `S:0x44ca80` stops timers 0, 3, 0xB and the car timers, runs `S:0x44c9f0`: J or Y -> state 4; Esc or N -> resume. `P`: overlay 2, `DAT_006fb8d8=1`, `S:0x44c990` waits for any key.
- Language strings: 27 `EINDE`, 28-29 `WEET JE ZEKER DAT JE DE / RACE WILT BEEINDIGEN? (J/N)`, 24-26 `PAUZE`.

**Blocking loops (no message pump inside, polling `GetAsyncKeyState` via `S:0x4c5e40`):** `S:0x44c990`, `S:0x44c9f0`, the release wait in `S:0x43ac80`, tweak `S:0x432d58`.

**`my_handle_win_msg S:0x458020`:** PeekMessage loop. `DAT_00740dfc` (WM_ACTIVATEAPP wParam, `S:0x4cd6b0` case 0x1C) = 0 -> `WaitMessage`. On return it restores surfaces (`S:0x4c4a60` x3, `S:0x4b8bc0`, `S:0x4c0920`, `S:0x4b2ea0`).

**`exit_main S:0x458210`:**

1. `S:0x44e190` (log `%d frames, %f sec`, `fps = %f`).
2. Exit-game `S:0x4490a0`: `S:0x45de10`, `S:0x42f0d0`, `S:0x450840`, **`S:0x44afc0` write-back**, `S:0x4b2410`, ..., `S:0x4a6b50`.
3. `S:0x4b4850` objects; `S:0x4c0950` 3D lib.
4. `S:0x448160`: clear screen, `S:0x4c6560` free file list, `S:0x4c4040`: release DirectDraw, `PostMessage(WM_CLOSE)`, pump until quit.
5. `WinMain` returns 0.

**Fatal path `S:0x4c4150`** (1,600+ sites): format message, force debug log on, log, `ShowWindow(SW_MINIMIZE)`, pump, `MessageBoxEx`, `ExitProcess(1)`. It skips the write-back. `game.ini` still has `finished=0` from init. The launcher then restarts the menu with `/Default`.

**CD check in spel.dat, `S:0x4cd3b0("\DATA", "rcs.img")`, called from `S:0x447be0`:**

- Error text = language string 32 `A2 Racer CD-ROM niet gevonden.` (`S:0x4cd370`).
- Environment variable `NOCD` set (`S:0x55a328`): drive letter `DAT_00740dec` = first char of its value; no check, no error.
- Otherwise: for each drive with `GetDriveTypeA` = `DRIVE_CDROM` (list `S:0x4cca80` -> `S:0x4cca00`), test `X:\DATA\rcs.img` with `_access`. Found: keep the letter. None: `S:0x4c4150` fatal.
- `S:0x447a80` (`[CDCHECK]`, disabled by missing keys) only logs its result.
- The owner's patch `README_technical_spel.dat.md` part 7 documents the same fatal branch (`0x4cd478`); `NOCD` is not mentioned there.

**Memory gate.** `S:0x450de0` starts race music only if `MUSICVOLUME > 0` and `DAT_00740dc8` (`GlobalMemoryStatus.dwTotalPhys`, `S:0x4ccc10`) > 17,000,000; otherwise it logs and sets music volume to 0.

### 6. Registry and save locations

| Item | Fact | Evidence |
|---|---|---|
| spel.dat registry | None. ADVAPI32 import is only `GetUserNameA` (`S:0x4ccc5f`, logged) | `imports.csv` |
| A2Racer4.exe registry | None. Imports are KERNEL32, USER32, GDI32 | `imports.csv` |
| menu.exe registry | `M:0x402e00` `SOFTWARE\Borland\Delphi\RTL`; `M:0x4054a0` `Software\Borland\Locales`, `...\Delphi\Locales`; `M:0x44b368` `System\CurrentControlSet\Control\Keyboard Layouts\%.8x` (VCL); `M:0x490b4c` `.html` etc. `\shell\open\command` for the browser (`btnInternet`). No game state; the string `Software\Davilex` is not in the module | `calls.csv`, `strings.csv` |
| Installer keys | `Software\Davilex\A2 Racer 4`: `CurrentVersion=1`; `\1` `CurrentLanguage=NL`; `\1\NL`: `MAINDIR`, `ProgramFile`, `ReleaseVersion=1.01`, `ReleaseDate=20002212`, URLs. No game module holds that key string | `registry/system.reg.excerpt.txt`, `INSTALL.LOG` |
| Save games | `<dir>SaveGame<N>.RCR` (`M:0x481178`). N = lowest free number at creation (`M:0x47fbd4`). `menu.ini CURRENTPLAYER` = N. List: `save*.rcr` (`M:0x493338`), header only (`M:0x492dd8`) | code |
| Backups | Player dialog copies to `SaveGame<N>.BAK` (`M:0x4938ac`); restore `M:0x493ac8`; delete `M:0x493d30` | code |
| Other persistent state | `menu.ini` (`CURRENTPLAYER`, `PREVSTATE`, `EXITCODE`, `HIGHSCORES`), `game.ini`, `raser.ini` | sections 3-4 |
| Logs | `MenuTrac.log`, `menu.log` (observed); `debug.txt` only with `DEBUGON` (`S:0x4c3fa0`) | |

**`SaveGame<N>.RCR` layout** (all int32 little-endian; bool = 1 byte; `M:0x48ae64`). Size 227 bytes computed from the writers; no sample exists.

| Offset | Size | Field |
|---|---|---|
| 0 | 33 | Header name: ShortString[32], length byte first (`M:0x48ca44`) |
| 33 | 4 | Tour character index (`FTourCharIx`) |
| 37 | 20 | Settings ints: Difficulty, Resolution, FXVol, MusicVol, VoicesVol (`M:0x4a6574`) |
| 57 | 8 | bools, read order: FXOn, MusicOn, VoicesOn, StartInfoOn, AlphaBlending, Bilinear, WaitVbl, Mipmapping (`M:0x4a63f4`) |
| 65 | 16 | ints: Gamma, TextureMem enum, DriverIndex, RenderFocus |
| 81 | 40 | Controls ints: Up, Down, Left, Right, Extra1, Extra2, Extra3, ControlType, JoySens, WheelSens (`M:0x4a6d70`) |
| 121 | 8 | TourState: FCharacterIx, FTrackIx |
| 129 | 85 | 5 x CharResult: FNextUndrivenTrack, FPoints, turbo (int32), 5 tune-up bools (`M:0x48db2c`). Count = `[TOURRACE] CHARIX` |
| 214 | 9 | QRState: FCharacterIx, FTrackIx, bool FShowedUnlockPopup |
| 223 | 4 | FTrackToDrive |

New player (`M:0x48c24c`): Tour char index = `[TOURRACE] DEFAULTCHAR` (2), QR char index = `[QUICKRACE] DEFAULTCHAR` (1), Settings copied from `[DEFAULTSETTINGS]` (`M:0x4a6de4`), TextureMem from game.ini `CUSTOM_TEXTURE_MEMORY` (0x200000->0, 0x800000->1, 0x1000000->2, else 1), `+0x1C = 0`. `LoadPlayer` sets `+0x1C = 1`.

`[DEFAULTSETTINGS]`: DIFFICULTY=1, SHOWSTARTINFO=1, MUSICVOLUME=50, FXVOLUME=50, VOICESVOLUME=100, MUSICON=1, FXON=1, VOICESON=1, RESOLUTION=3, CONTROLTYPE=0, LEFT=37, RIGHT=39, UP=38, DOWN=40, EXTRA1=17, EXTRA2=18, EXTRA3=32, JOYSENSITIVITY=50, WHEELSENSITIVITY=50, AlphaBlending=1, BiliniarFiltering=1, WaitVbl=0, Gamma=0, RenderFocus=1, DriverIndex=0, MIPMAPPING=0.

### 7. Every file spel.dat opens by name

**Lookup rules:**

| Mechanism | Rule | Evidence |
|---|---|---|
| INI | `S:0x4c3b60`: `<getcwd>\<name>`; name must be 1..15 chars or fatal. `S:0x4489a0`: `_access(name)` relative to cwd, missing is fatal | code |
| Resource open | `S:0x4c62c0`: case-insensitive match in `rcs.ind`; found -> seek into shared `rcs.img` handle. Not found -> `fopen(name, "rb")` relative to cwd. Bypass flag `DAT_00740918` has reads only | code |
| Resource exists | `S:0x4c64d0`: index first, then `fopen` | code |
| Path resolve | `S:0x4cd4a0`: strip dir, try cwd; if not openable, `<NOCD or CD letter>:\DATA\<name>` | code |
| Archive | `S:0x4c5e90`: `i16 count`, then count x `{char name[20]; u32 offset}`; length = next offset minus this | code |
| `rcs.ind` content | 2,787 members: d3d 1971, wav 406, pcx 199, tga 173, fnt 31, 7 without extension. No INI, no track file | parsed from `original/install/rcs.ind` |

**Loose files (must be in the cwd):**

| Name | Built from | Opened by |
|---|---|---|
| `RASER.INI`, `GAME.INI` | literal | `S:0x448cd0` |
| `LANGUAGE.INI` | literal | `S:0x458bc0` |
| `INTEL.INI` | literal | `S:0x449460`, `S:0x449690` |
| `CAR_CFG.INI` | literal | `S:0x4492c0` |
| `COPS.INI` | literal | `S:0x4079a0` |
| `BEHAVIOR.INI` | literal | `S:0x40f000` |
| `TRAFFIC.INI` | literal | `S:0x413a10` |
| `OPPONENT.INI` | literal | `S:0x419a30` |
| `DAMAGE.INI` | literal | `S:0x426a90` |
| `CAR_SND.INI`, `ANMTYPES.INI` | literal | `S:0x44c200` |
| `SOUND.INI` | literal | `S:0x4506e0` |
| `communi.ini` | literal | `S:0x48ae80`, `S:0x48ebe0` |
| `overlay<CAR>.ini` | switch on `DAT_006fba5c`: 0..7 -> `overlay0..7.ini`, default `overlay5.ini` | `S:0x487f20` |
| `gen_anim.ini` | raser `[3D Anims] general` | `S:0x467fd0` |
| `e<NN>_anim.ini` | raser `[3D Anims] <etappe>` (key `%d` = `DAT_006fb898`) | `S:0x468ca0` -> `S:0x468c10` |
| `L<league>_anim.ini` | raser `[3D Anims] League<league>` | `S:0x468ca0`, `S:0x467f60` |
| `etappe<N>.INI` | [MAPS] arg 1 + `.INI` | `S:0x467c30`, `S:0x4691a0` |
| `etappe<N>.cmp`, `.dmp`, `.pmp` + `.rmp`, `.omp` | [MAPS] arg 1 + `%s.%s`, in that order | `S:0x4ae490` via resource open |
| `etappe%d.pth` | `DAT_006fb898`, `rb`, plain `fopen` | `S:0x4641d0` |
| `VDYNS.DAT` | literal, 100 x 0x268 bytes, `rb` | `S:0x4290f0` |
| `bonus.dso` | literal; `.ds` sibling is only probed by findfirst; missing `.dso` fatal `Scriptfile not found` | `S:0x475860` -> `S:0x4cf720` |
| `rcs.ind`, `rcs.img` | raser `[IMG] RCSFILE` + `.ind`/`.img` (`S:0x4473d0`, max 8 chars) | `S:0x447be0` -> `S:0x4c5e90` |
| `rc.img`, `rc.ind` | literal, via path resolve; missing fatal | `S:0x458730`, `S:0x458810`, `S:0x4588f0`, `S:0x4cc580`, `S:0x4cc0b0` |

**Resource files (`rcs.img`, or loose):**

| Kind | Name source | Evidence |
|---|---|---|
| Road textures | [MAPS] args 2-5 + `.TGA` (hardware 3D) or `.PCX` (`S:0x5a03f0`) | `S:0x44a690`, `S:0x44c200` |
| Sky (software only) | [MAPS] arg 6 or 7 + `.pcx`; only if `DAT_006fb8d0 == 0` and no `BACKGROUND` | `S:0x4454c0` |
| Loading screen | `[wait_hi] <etappe>`; extension replaced with `.tga` in 16-bit | `S:0x449cb0`, `S:0x4409d0`, `S:0x4416f0` |
| Palette | `[PALET] etappe%d` (lo, hi) | `S:0x447db0`, `S:0x447d10` |
| Object meshes and textures | `[Objects] <i>` in `etappeN.ini` and anim INIs: path stripped to name + ext; texture extension forced to `.TGA` or `.PCX` (`S:0x467960`) | `S:0x467c30`, `S:0x4691a0` |
| Cars | Vehicle name `RACER_<CAR>` (`COP` if `copland` != 0) -> `car_cfg.ini [league<d>]` row of 9 fields, parsed as strings 0-3, ints 4-7, string 8: e.g. `RACER_0,RACER_1,EDGAR,hoog4,600,0,5000,11,dam_racer0`. Field 0 = vehicle name. `RACER_1` is a section in `L<d>_anim.ini`, `dam_racer0` occurs in `damage.ini` | `S:0x44e340`, `S:0x42de60`, `S:0x423e40`, shipped files |
| HUD fonts | Table at `S:0x59a8c0` (`lo_fnt3.fnt`, `lomid.fnt`, ...), `S:0x59b328` hi set; overlay fonts from `overlay*.ini` | `S:0x43ce10`, `S:0x4ca420` |
| Fixed pictures | `S_SFX.PCX`, `S_SHADOW.PCX`, `L1RACER3.PCX`, `loradar/hiradar.pcx`, `init.pcx`, `back1..7.pcx` | strings with callers |
| Sound effects, music | `sound.ini [SndTypes] <i>=name,file,...`; missing file fatal (`S:0x49f030`) | `S:0x49fc40` |
| Race music | raser `[MUSIC] <LAST>` -> type name (`M_DISCO1`...) -> `sound.ini` file | `S:0x44ad40`, `S:0x450de0` |
| Engine sounds | `car_snd.ini` `[Car<n>]` type names | `S:0x42e890`-`S:0x42eea0` |
| Cop radio | `CCO%02d_%02d.WAV`, `CPA%02d_%02d.WAV`, `CBP%02d_%02d.WAV`; existence check first | `S:0x41b690`, `S:0x41b9d0` |
| Cop radio car voices | `%s%d.wav` | `S:0x41aa80` |
| Cop radio locations | `CE%dL%d.wav`; no `ce*` member in `rcs.ind` | `S:0x41af00` from `S:0x41b220` |

**Debug or tweak-only files:**

| Name | Mode | Gate |
|---|---|---|
| `debug.txt` | `at+` | Debug flag (`DEBUGON`, or fatal path) |
| `lvl%2.2d_%2.2d.bmp` | `wb` | Ctrl+F10 in main loop, no tweak gate |
| `PICTURE.PCX` | `wb` | Key 0x46 and `TWEAK_MODE=1` (`S:0x427bb6`) |
| `VDYNS.DAT` | `wb` | `S:0x433270`, via `S:0x4351f0`, `TWEAK_MODE=1` (`S:0x427bfa`) |
| `PhysicsReport.txt` | `at+` | Key 0x59 and `DAT_006fb950` != 0 (`S:0x44dcf2`) |
| `PHYS%d.DAT` | | `S:0x432d20` has no call or absolute reference |
| `GAMEPLAY.TXT`, `CfgFiles.INI` | | `S:0x419300`, `S:0x448d00`: no call or absolute reference |

### 8. Working directory and command line

| Module | Fact | Evidence |
|---|---|---|
| A2Racer4.exe | Uses cwd for `Menu.ini` and for spawning `.\menu.exe`, `.\spel.dat`. Shortcuts set the working dir to the install folder | `L:0x401020`, `.lnk` files |
| menu.exe | All paths are `ExtractFilePath(Application.ExeName)` + name. Args: `/FirstTime` (first round), `/Default` (after each race). Case-insensitive match against any ParamStr. Required: neither means exit | `M:0x47f07d`, `M:0x4a91dc`, `M:0x4a920d` |
| spel.dat | All paths relative to cwd. `lpCmdLine` unused | `S:0x458270`, `S:0x4c3b60` |
| setdebug.exe | Not started by these modules | no reference |

`SERVICE.EXE` is started only from the exception dialog, `ShellExecute("open", "SERVICE.EXE", "-r%s")` (`M:0x4a7a48`).

## Inferred

- **The launcher passes spel.dat an empty argument.** `L:0x407f40` has only three read references in the byte scan, in BSS, so it stays zero. Command line probably `spel.dat ` from the CRT join (compare observed `menu.exe /FirstTime`). Harmless, since `lpCmdLine` is unused.
- **Running `.dat` works** because `_spawnve` hands a path with any extension to `CreateProcess`, and the file is a PE.
- **Intro stretch.** MCI `MCI_DGV_PUT_DESTINATION` with the 792x573 client rect stretches 320x240 to 792x573, centered on 800x600 at about (4, 13), with black around it. Not observed on real hardware; the Wine run has only a timed screenshot.
- **Intro duration on screen** is about 61.7 s if not skipped.
- **Overlay states (`DAT_0071277c`) meanings**: 1 normal, 2 pause, 3 quit prompt, 5 finish stats, 6 total loss, 7 arrested, 8-11 countdown 3-2-1-go, 0xC time up. Read from who sets them and the matching language strings; the overlay code was not traced here.
- **`[RACERS]` slot is 0-based finish order** among all cars including the player's slot (`S:0x42e150`). The menu ignores it and sorts by time.
- **`BRITISH` means left-hand traffic**, from the name and its use with `DIRECTION` in `S:0x42de60`; static.ini sets it only on track 9. The port's one launch check on track 9 drives on the left (`evidence/smoke/`, by eye); the original has not been run with the updates.
- **Consequences for the port (mine, not original behaviour):**
  - Each race should be a fresh spel.dat instance. In the original it is a new process with zeroed globals; state crosses only through INI files.
  - The hand-written menu must run the same sequence at race start: `WriteToInis`, `SavePlayer`, write `menu.ini`, then start the race. After the race: re-read `game.ini` and run the `/Default` path of StartUp. No intro; music restarts.
  - Host `GetPrivateProfile*`/`WritePrivateProfileStringA` need Win32 semantics on the VFS: case-insensitive names, first match wins (raser `[MUSIC]` has `count` twice), integer parse stops at the first non-digit (tabs and comments follow values in `game.ini`, `garage.ini`), replace in place, comments preserved, cwd-relative full paths.
  - Simplest CD answer: put `NOCD=D` in the environment block the host returns to the CRT (`GetEnvironmentStrings`). The menu's own CD dialog is dropped with the hand-written menu.
  - `GlobalMemoryStatus.dwTotalPhys` must report > 17,000,000 or race music is off.
  - The blocking key loops in section 5 cannot run on the browser main thread without yielding: they need Asyncify/JSPI or a Worker with shared input state. Same for `WaitMessage` in `S:0x458020`.
  - `ExitProcess(1)` and a normal return must both lead back to the menu with `/Default` semantics.
  - `finished`, `out_of_time`, `total_loss` plus `FPrevious` fully decide the post-race screen.

## Unknown

- `spel.dat` was not run for this note, so none of section 5 has runtime confirmation here; the write-back order and the post-race menu path were never observed. `/Default` was not observed.
- `vmt+0x80` called from `TfrmMain.FormActivate` and `vmt+0xB0` at the end of `TfrmIntro.FormShow`: which VCL methods they are (Delphi slot numbers only).
- Exact visual size of the intro: whether any display scaling or the `TfrmIntro` form size is changed at runtime beyond the DFM.
- Whether the Windows MCI MPEG path delivered `MM_MCINOTIFY` in `mpPlaying` state or `mpStopped` at end of file. The handler covers both, and either closes the form.
- Whether `CE%dL%d.wav` (`S:0x41af00`, called from `S:0x41b220`) is reached with shipped data. No such member exists in `rcs.ind`, and `S:0x49f030` makes a missing file fatal, so the location loop condition must be checked before relying on this path.
- Fields 2-7 of `car_cfg.ini [league*]` rows (`S:0x423e40`): their use was not traced here. `hoog4` (field 3) matches a `sound.ini` name `HOOG4`, and `S:0x44c200` passes vehicle record +0x44 to the car sound setup, but the field-to-offset mapping was not read.
- `[GFX OPTIONS] gamma` value range as set by the Options screen, and what `S:0x4c7ed0` does with it.
- What `S:0x44c090` console variables are reachable in a retail build (`Invulnerable` is registered there).
- Cheat keys `Ctrl+Space+T` and `Ctrl+Space+I` in `S:0x44cf90`: found in code with no tweak gate; whether they were intended for release is unknown. They change `FUN_00448570(0xb, 100000)` and `DAT_006fb96c` respectively.
- Whether `SaveGame*.RCR` as computed (227 bytes) matches a real file: no sample exists in the install or the disc.
