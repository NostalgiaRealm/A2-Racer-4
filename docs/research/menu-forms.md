# menu.exe: user interface and navigation inventory

> **Correction, 2026-10-31.** This note has known errors. The correction table in [`../original-behavior.md`](../original-behavior.md) lists them with their evidence; where it differs from this note, the table holds. The text below is as it was written.
>
> Davilex's two official updates were found in the installation after this note was written ([`../provenance.md`](../provenance.md), [`../../original-game-decompiled/original/updates/README.md`](../../original-game-decompiled/original/updates/README.md)). So "track position 9 and char position 7 stay locked" holds for disc 1.01 only. That row in section 13 is fixed in place, and the `FDownloadCharIsAvailable` entry in Unknown is settled.

Static analysis of `menu.exe` (Delphi 5, `decompiled/game__menu.exe/`), the decoded DFMs, `menucaps.ini`, `menu.ini`, `agent.ini`, `static.ini` and the images in `extracted/game-archives/menurcs/`. The game was not run: `dynamic/RESULTS.md` shows the menu was never observed past the intro video.

Conventions. Addresses are `menu.exe` image addresses. Published form/method names come from the binary. `name mine` marks an invented name. `@L,T` is the effective position after the `menucaps.ini` override. `[tN]` is TabOrder. `stem "X"` is a button image set with its caption X; captions were read by decoding the TGA, because almost all button text is baked into pixels. `FUN_*` are Ghidra names.

Warning for anyone re-reading the code: Ghidra drops code that follows a `try/finally` (it sits in `code_gaps.csv` as `partly_defined_data`). Two gaps matter here and were disassembled by hand: `0x49a723` (TfrmTrack loads `indfocus`) and `0x49c6a0` (the unlock sequence).

## Confirmed

### 1. Class tree and all 45 DFM resources

```
TForm
├─ TfrmMain  TfrmIntro  TfrmDisplaySettings  TfrmException2  TBalloonForm
├─ TCaptionForm → TSingletonForm → TGameMenuScreen
│    ├─ TfrmTrackIntro
│    └─ TBaseFormOneWay
│         ├─ TfrmMainScreen TfrmResults TfrmLoseNormal TfrmQualify TfrmWinNormal
│         │  TfrmWinChase TfrmLoseChase TfrmWinFinal
│         └─ TBaseFormTwoWay → TfrmDifficulty TfrmCurrentChar TfrmCharacter TfrmTrack TfrmGarage TfrmQuickRace
└─ TDaviForm → TGDIForm → TfrmCoolDialog
     ├─ TfrmCloseDlg TfrmCDRequest TfrmNewPlayer TfrmHighScoreDlg TfrmDeletePlayer TfrmNoMoney
     │  TfrmInternetDlg TfrmUnlock TfrmDoubleKeys TfrmPlayer TfrmOptions TfrmKeySettings
     ├─ TfrmStartInfo → TfrmStartInfoKeyBoard
     └─ TfrmSliderSettings → TfrmWheelSettings, TfrmJoyStickSettings
TDataModule → TData
```
`TFRMMESSAGEBOX` exists only as a DFM resource: the name occurs only in `.rsrc` (raw offsets 0x10d50a, 0xbca74) and `delphi_classes.json` has no such class, so nothing can create it.

DFMs are inherited deltas. Flatten them along the class chain. Object order in the most-derived DFM gives the Z-order among graphic controls for the objects it lists (binary DFM `ffChildPos` indexes confirm it), with `imgBackGround` first; objects it does not list keep their ancestor position. `TPanel`, `TEdit`, `TMediaPlayer` are real windows and always sit above graphic controls of the same parent.

### 2. Screen size and windows

| Thing | Size and position | Evidence |
|---|---|---|
| Display mode at start | 800×600, tries 24, 16, 15, 32 bpp in that order; restored on exit | `FUN_00481634`, `FUN_00481500`, entry `0x4a9170` |
| `frmMain` | Borderless, black, full screen. Hides `Progman` and `Shell_TrayWnd`, shows them again on destroy | `TfrmMain.FormCreate` 0x4a4d20, `FormDestroy` 0x4a4e2c |
| Every `TGameMenuScreen` | Always **800×600** at ((ScreenW-800)/2, (ScreenH-600)/2), child of `frmMain`. DFM ClientWidth/Height (792, 804, 810, 865...) are ignored | `TGameMenuScreen.FormCreate` 0x49e394 |
| Background of a screen | `imgBackGround` TImage, alClient. All backgrounds are 800×600 24-bit BMP | same; file headers |
| Every `TfrmCoolDialog` | Size = its background TGA. `Position = poDesktopCenter`, `BorderStyle = bsNone` | `TfrmCoolDialog.GDIFormShow` 0x488ff0 |
| `frmIntro` | 792×573 client, `poScreenCenter`, video stretched to the client rect | DFM, `FormShow` 0x4a4928 |
| `frmDisplaySettings` | 497×586, plain Windows dialog | DFM |
| Button size | Always the size of its `_up` image; the DFM Width/Height are ignored | `FUN_00481698`, `TCustomGDIButton.vmt_07c` 0x468cac |

### 3. Data module fields used by the UI (`Data` global = `[0x4ab694]`, private names mine)

| Offset | Meaning | Offset | Meaning |
|---|---|---|---|
| +0x54 | wavBtnDown | +0xa0 | Agent (`TDaviAgent`) or nil |
| +0x58..+0x9c | shared button definitions (section 8) | +0xa4 | FPlayerPos (string in `FUN_0048003c`), 0-based finish rank |
| +0x90 | wavRadioBtn | +0xa8 | **RaceMode**: 0 none, 1 Quick Race, 2 Tour; written as PREVSTATE |
| +0xb0 | SoundManager | +0xb4 | BitmapManager |
| +0xac | ResourceManager (`MenuRcs.img/.ind`) | +0xb8 | exe directory |
| +0xbc | Menu.hlp path, empty if absent | +0xc0 | SaveGame (current player) |
| +0xc4 | MenuIni | +0xc8 | GameIni (race result, `/Default` only) |
| +0xcc | Static (`static.ini`) | +0xd0 | result flags, below |
| +0xd4 | rank list | +0xd8 | ExitRequested |
| +0xdc | TFont "Arial" | +0x50 | MenuFont1 (Hammer Fat) |

Result flags at +0xd0: 1 chase track, 2 RR_QUALIFY, 4 RR_WINRACE, 8 RR_WINTRACK, 0x20 RR_BESTLAP (names from log strings at 0x49efd4, 0x49eff8, 0x49f0e8, 0x49eed8; bit 1 name mine).

Records (names mine, offsets from code): SaveGame +8 header (player name), +0xc QRState, +0x10 TourState, +0x14 track to drive (IndexInGame), +0x18 Settings, +0x1c TourStarted. RaceState +8 CharIx, +0xc TrackIx; QRState +0x10 HarryUnlocked; TourState +0x10 char-result list. CharResult +8 Euro, +0xc TrackReached, +0x10 Turbo, +0x14..+0x18 tune-up bought. Char +0x10 IndexInGame, +0x14 LockedText, +0x18 Story, +0x1c winracetext, +0x20 Speed, +0x24 Accell, +0x28 Brakes, +0x2c Handling. Track +8 IndexInGame, +0x30 Type, +0x34 Story, +0x38 WinText, +0x3c LoseText, +0x40 QualifyText, +0x50[difficulty] QualifyPos, +0x5c>0 is chase. Settings +8 Difficulty (0,1,2), +0xc Controls, +0x10 FX, +0x14 Voice, +0x18 Music, +0x1c FxOn, +0x1d MusicOn, +0x1f StartInfoOn, +0x20 DriverIndex, +0x24 GUID, +0x28 GUIDChanged, +0x2c Resolution, +0x30 Gamma, +0x34 Bilinear, +0x35 Alpha, +0x36 Mipmapping, +0x38 RenderFocus, +0x3c TextureMem, +0x3d WaitVbl. Controls +8 Up(Gas), +0xc Down(Rem), +0x10 Left, +0x14 Right, +0x18 Extra1(Turbo), +0x1c Extra2(Handrem), +0x20 Extra3(Claxon), +0x24 ControlType (0 keyboard, 1 joystick, 2 gamepad, 3 wheel), +0x28 JoySensitivity, +0x2c WheelSensitivity.

### 4. Start-up to the first screen

Entry `0x4a9170`:
1. Title `Race Menu`. If the command line has neither `/FIRSTTIME` nor `/DEFAULT`: show MENUSTRINGS 21 `Start het spel met 'A2Racer4.exe'.` and terminate.
2. Switch display to 800×600. Create `frmMain`, then `Data`. `Application.Run`.

`TData.DataCreate` 0x47efb8 clears read-only on `menu.ini`, `game.ini`, `raser.ini`, loads MenuRcs, sound manager, bitmap manager, `menumsc.wav`, the shared button graphics (`FUN_00480828`), tries the agent (`hunny`, `hunny.acs`) in try/except, loads `static.ini`, `menu.ini`, and `game.ini` unless `/FIRSTTIME`.

`TfrmMain.FormActivate` 0x4a4fe8 (first activation only) calls StartUp `FUN_004a5d70`:
1. **CD check** `FUN_004a5d4c`: looks for `<C..Z>:\` + INTROAVI (`DATA\INTRO1.MPG`). Not found: `TfrmCDRequest`. Result 2 → exit. Result 1 → carries on, with no re-check.
2. RaceMode := PREVSTATE. `/FIRSTTIME` forces PREVSTATE 0.
3. **PREVSTATE 0**: `FUN_004a50d0` plays `<exe dir>\INTRO1.MPG` or the disc copy in `TfrmIntro`, then music at the *static default* music volume, then `FUN_004a525c`: CURRENTPLAYER<0 → `TfrmNewPlayer` loop until a name or Cancel (Cancel = terminate); else load player. Then show `TfrmMainScreen`.
4. **PREVSTATE 1**: music, load player, `FUN_004a54dc`, then `FUN_004a58a4`.
5. **PREVSTATE 2**: music, load player, `FUN_004a5624`, then `FUN_004a59cc`.

Loading a player (`FUN_0048af60`) sets the music volume to that player's value.

### 5. Navigation graph

**Forward flow**
```
TfrmMainScreen ──Verder──► TfrmDifficulty ─┬─ Quick ─► TfrmQuickRace ──Verder──► [StartInfo?] ─► RACE
                                           └─ Tour ──► TourStarted? TfrmCurrentChar : TfrmCharacter
TfrmCurrentChar ─Verder─► TfrmTrack          TfrmCurrentChar ─Ander karakter─► TfrmCharacter
TfrmCharacter ─Verder─► voice, 2000 ms ─► TfrmTrack
TfrmTrack ─Verder─► TfrmGarage ─Verder─► [StartInfo?] ─► RACE
```
**Back buttons (Terug)**: Difficulty→MainScreen 0x49d2a0; QuickRace→Difficulty 0x49bf04; CurrentChar→Difficulty 0x49b61c; Character→CurrentChar 0x49adec; Track→CurrentChar 0x499d54; Garage→Track 0x499524.

**Race launch**: `FUN_0047ff64` sets ExitRequested and calls `Application.Terminate`. `TData.DataDestroy` 0x47f4ac then: ExitRequested=0 forces RaceMode 0 (window closed by other means); RaceMode≠0 runs `WriteToInis` `FUN_0048c3f0` (`game.ini`, then `raser.ini` via `FUN_0048ba20`); saves the player `SaveGame<n>.RCR`; saves `menu.ini` with PREVSTATE=RaceMode and EXITCODE (40 when RaceMode≠0, else 255; `TMenuIni.vmt_01c` 0x48f168). The launcher runs `spel.dat`, then `menu.exe /Default`.

**Return from race, Quick Race** (`FUN_004a58a4`): FINISHED and not chase → `TfrmResults`; otherwise → `TfrmQuickRace`. Results Verder → `TfrmQuickRace`.

**Return from race, Tour** (`FUN_004a59cc`; FINISHED, Out_Of_Time, Total_Loss from `game.ini` [PLAYER]):

| Condition | Screen |
|---|---|
| not FINISHED, not chase | `TfrmTrack` |
| not FINISHED, chase, player aborted (all three flags 0, `FUN_0048a6ac`) | `TfrmTrack` |
| not FINISHED, chase, out of time or total loss | `TfrmLoseChase` |
| FINISHED, not chase | `TfrmResults` |
| FINISHED, chase, no RR_QUALIFY | `TfrmLoseChase` |
| FINISHED, chase, RR_QUALIFY, no RR_WINRACE | `TfrmWinChase` |
| FINISHED, chase, RR_WINRACE | `TfrmWinFinal` |

Result flags come from `FUN_004a5624`: not chase and finished: clears tune-ups, stores Euro and Turbo, ranks (`FUN_0048003c`), best-lap check; rank 0 → `FUN_0049f010` (RR_WINTRACK only, advance if on the reached track, Euro += FirstPlaceBonus 2500); rank ≤ QualifyPos(difficulty) → `FUN_0049f100` (RR_QUALIFY, advance). Chase and finished: `FUN_0049eef0` sets RR_QUALIFY, advances, sets RR_WINRACE when the last track index equals TrackReached. New best lap (`FUN_0049ed60`): `TfrmHighScoreDlg` loop until a name, shown over the black main form before the next screen.

**After results, Tour** (`TfrmResults.vmt_0fc` 0x4a0a20): RR_WINTRACK → `TfrmWinNormal`; else RR_QUALIFY → `TfrmQualify`; else `TfrmLoseNormal`.

| From | Verder or timer | To |
|---|---|---|
| TfrmLoseNormal 0x49f4f8, TfrmLoseChase 0x4a1094 | Verder | TfrmTrack |
| TfrmQualify 0x49fe54, TfrmWinNormal 0x4a02f0, TfrmWinChase 0x4a0db4 | Verder | TfrmTrackIntro |
| TfrmTrackIntro | click on background or 3500 ms | TfrmTrack |
| TfrmWinFinal 0x4a42e8 | Verder | HarryUnlocked=0 → TfrmQuickRace, else TfrmCharacter |

**Unlock** (0x49c6a0, event run after `TfrmQuickRace` is shown): if RR_WINRACE and not HarryUnlocked: HarryUnlocked:=1, select char position LOCKEDCHARIX, voice `unlock`, modal `TfrmUnlock`.

**Close button "Einde"** on every screen except main (`TGameMenuScreen.btnCloseClick` 0x49e9bc): `TfrmCloseDlg`. Result 3 → RaceMode:=0, exit (EXITCODE 255). Result 1 → `TfrmMainScreen`. Result 2 → stay. `TfrmMainScreen.btnCloseClick` 0x49dc20 exits at once, with no dialog. `TfrmTrackIntro` hides Help and Einde.

**Modal dialogs**

| Opened from | Dialog | Launcher |
|---|---|---|
| MainScreen Opties | TfrmOptions | `FUN_0049898c` |
| MainScreen Speler | TfrmPlayer | `FUN_00498634` |
| MainScreen Internet | TfrmInternetDlg | `FUN_004988f8` |
| Options Instellen | TfrmKeySettings / TfrmJoyStickSettings / TfrmWheelSettings | `FUN_00498378`, `FUN_004982b4`, `FUN_004981f0` |
| Options Geavanceerd | TfrmDisplaySettings | 0x495a2c |
| KeySettings OK with duplicates | TfrmDoubleKeys | `FUN_00498828` |
| Player | TfrmNewPlayer, TfrmDeletePlayer | `FUN_00498414`, `FUN_00498758` |
| Garage Kopen | TfrmNoMoney | `FUN_004986d0` |
| Garage or QuickRace Verder, if StartInfoOn | TfrmStartInfoKeyBoard (ControlType 0) or TfrmStartInfo | `FUN_0049812c` |
| Any screen Einde | TfrmCloseDlg | 0x49e048 |

### 6. Shared base-form behaviour and transitions

There are **no animated transitions**. A screen change is `TGameMenuScreen.vmt_0e8` 0x49e81c (GoToScreen, name mine):
1. Get or create the target through the singleton list (`FUN_0048f760`).
2. target.prevClass := self class (+0x2e4).
3. self: `Visible:=False`, `Parent:=nil` (`vmt_0f0`).
4. target: `Parent:=MainForm`, `Visible:=True`, then the optional event at +0x2e8 (`vmt_0f4`; used by QuickRace and WinFinal).
5. self posts CM_RELEASE (0xb021), so the old screen is destroyed.

So **every visit re-creates the form** and re-runs `FormCreate`. Keep nothing in form instances: state lives in `Data` and SaveGame.

| Class | Behaviour | Address |
|---|---|---|
| TCaptionForm | Constructor applies `menucaps.ini` | 0x4a732c |
| TSingletonForm | Registers instance in the list at `DAT_004ad490`; removes it on destroy | 0x48f7d0, 0x48f850 |
| TGameMenuScreen | Create: btnHelp=`gdfBtnHelp`, btnClose=`gdfBtnClose`, 800×600, background `Copy(ClassName,5,8)`+`.bmp`, fallback `currentc`, btnHelp.Enabled=Menu.hlp present. Show: stops the current voice. Close: hides agent. Help: voice `cmh07_00`, agent balloon or WinHelp | 0x49e394, 0x49e660, 0x49ecb4, 0x49e678 |
| TBaseFormOneWay | Adds btnNext @649,518 def `gdfBtnNextSingle`; click → virtual +0xfc (Next). Show: focus btnNext | 0x4908b4, 0x49098c |
| TBaseFormTwoWay | btnNext def becomes `gdfBtnNext`; adds btnPrevious @581,552 `gdfBtnPrevious`; click → virtual +0x100 (Previous) | 0x4913c0 |
| TGDIForm | Region machinery (unused, `Transparent=False` in dialogs). Before paint, draws the main form's window content behind itself, so TGA alpha corners blend with the screen | 0x46b97c |
| TfrmCoolDialog | Caption = app title. Defaults: btnOk1 `gdfBtnOkDlg` Default, ModalResult 1; btnClose `gdfBtnCloseDlg` Cancel, ModalResult 2; btnHelp `gdfBtnHelp`. Show: load `<name>.tga` (virtual +0xe4, default `Copy(ClassName,5,8)`) into imgBackGround, set form size, apply menucaps, Help enable, focus btnOk1. Close: hide agent | 0x488f2c, 0x488ff0, 0x48937c |

Common positions: screens btnHelp @609,7, btnClose @685,7, imgItem default @456,96. Tab orders differ per form. Dialogs: Help and x positions vary and are listed per form. Help is hidden (`Visible=False`) on CloseDlg, CDRequest, HighScoreDlg, NoMoney, Unlock, DoubleKeys, StartInfo, StartInfoKeyBoard.

### 7. Custom components

**TWinControlWrapper** (0x464ff0): a TGraphicControl that owns an invisible 0×0 TWinControl named `Wrapper<Name>`; this is why DFM `ActiveControl` reads `btnNext.WrapperbtnNext`. The hidden control takes focus, TabOrder and keys. In the port one focusable element per button replaces this.

**TGDIButtonDefinition** (0x466ed8): shared look for many buttons. Seven links, in this index: 0 Up, 1 Down, 2 Focused, 3 Hovered, 4 Disabled, 5 Hint, 6 ClickRegion. Also Width, Height, CaptionRect, WordWrap, Layout, Alignment, Font, Transparent*, Translucent, TranslucencyFactor, OnButtonStateChange. An empty state image falls back to Up (`FUN_00467ed0`).

**TCustomGDIButton** (0x4672c0), state choice `vmt_0c8` 0x46877c, first match wins:
1. not Enabled → 4 Disabled
2. mouse/space pressed, or Checked → 1 Down
3. hovering → 3 Hovered
4. focused, or Default with no focused window → 2 Focused
5. else → 0 Up

- On each state change the definition's `OnButtonStateChange(Button, NewState, OldState)` fires (`FUN_00468dd4`, `FUN_00467eac`).
- Paint `vmt_084` 0x468914: copy the canvas behind into an offscreen DIB, blend the state image, blit back. Then caption with `DrawText`; format from `FUN_00467f70`: WordWrap→DT_WORDBREAK else DT_SINGLELINE; tlCenter→DT_VCENTER; taCenter→DT_CENTER. If CaptionRect width<1, the client rect is used. Disabled caption: drawn twice, offset (1,1) in clBtnHighlight, then clBtnShadow.
- Hover: a TDaviTimer polls at `MouseCheckDelay` ms (60; 30 on btnControls and btnVideoAdvanced) for cursor inside, topmost, and hit-test OK (`FUN_00468284`).
- Hit test `vmt_094` 0x4685ac: with a ClickRegion: outside its size = miss, and a pixel equal to the region's auto transparent colour = miss. Auto colour is the bottom-left pixel (`FUN_00456a14`; TTarga/TDIB address rows top-down). Without a region: state image rectangle. Note `nextm_re.bmp` is inverted (white outside), and `backm_re`, `helpm_re`, `ryes_re` have odd bottom-left pixels (0d0d0d, 232323, c6c6c6), so their black outer area counts as a hit.
- Click (`dyn_ffec` 0x468344): clears Down, sets parent form `ModalResult := Button.ModalResult` (+0x18c), fires OnClick.
- Keys: Space down shows Down, Space up clicks if the press stayed armed, Esc cancels (0x4686cc, 0x468734). CM_DIALOGKEY 0x468418: Enter clicks if focused or Default-with-no-focus; Esc clicks if Cancel; both need no modifiers and a focusable button.

**TCustomGDICheckBox** (0x48f9a8): Click toggles Checked (`vmt_0cc`) before OnClick. Checked uses the Down image. **TCustomGDIRadioButton** (0x49005c): Click sets Checked only; SetChecked also sets TabStop:=Checked and unchecks all other TGDIRadioButtons with the same Parent (0x4905a0), so each parent is one group.

**TCustomGDIGraphic / TGDIGraphic** (0x463794, 0x4638d0): image control. `FUN_00489c28` sets its size from the TGA. Paint 0x463d6c blends like the button; no Translucent and no Transparent → plain blit. Created with Translucent=True in all forms.

**Blending** (`FUN_00454850`), per pixel, A from the TGA, B/G/R each:
- factor 255 (0x454584): `dst += ((src-dst)*A) >> 8`
- other factor F (0x4545f8): `a=(F*A)>>8; dst=(src*a + dst*(256-a))>>8`

Factor is 255 except `gdfRadioBtn` and `gdfCheckBox`: **150**. `gdfBtnKey` and `gdfBtnMS` have Translucent=False, so opaque.

**CombinedBtnStateChange** 0x47f804 (used by most definitions): on Down or Focused: `Button.SetZOrder(top)`, parent invalidate; on Down also wavBtnDown. This is required: `btnPrevious` and `btnNext` overlap, as do key image shapes. **BtnStateChange** 0x47f7ec: Down → wavBtnDown only. **gdfRadioBtnButtonStateChange** 0x47f7d4: Down → wavRadioBtn.

**TDaviGraphicSlider** (0x46a048) + **TDaviSliderNeedle** (0x469ecc). Paint: blit BackImage at 0,0. Fields Min, Max, Position, LargeStep 5, DelayTime 250, RepeatTime 50, MarginHorz 0, MarginVert 0. Needle def `Data.defSlider` (`SLIDER.bmp`, 6×15, embedded in DFM).
- Needle Left = MarginHorz + (ClientW − NeedleW − 2·MarginHorz)·(Pos−Min)/(Max−Min) (0x46ac70). Top = MarginVert.
- Drag: clamp the needle X, Pos = Min + (Left−MarginHorz)·(Max−Min)/(ClientW−NeedleW−2·MarginHorz) (0x46ab50), fire OnChange.
- Click on track (0x46adc8): X < pos pixel (0x46abfc) → Pos−=LargeStep, else Pos+=LargeStep; repeat timer 1 after DelayTime, then timer 2 every RepeatTime until mouse up or the cursor is on the needle.
- Keys (0x46ad20): PgUp +LargeStep, PgDn −LargeStep, End → Min, Home → Max, Left/Down −1, Up/Right +1.
- Set Position clamps and fires OnChange if changed (0x46af6c).

**TStatusIndicator** (0x491520, name from binary): N TGDIGraphic pips at x+dx·i. `FUN_00491710(n)`: first n visible, rest hidden. **TMultiIndicator** (0x491580), `FUN_0049180c(base, delta)` for pip i: i<base and i<base+delta → normal image; i<base and i≥base+delta → image 2; i≥base and i<base+delta → image 3; else hidden. Garage: normal `klrondje`, image 2 `redin_up` (loss), image 3 `blind_up` (gain).

**TDaviWave** (0x453f9c): embedded WAV. `wavBtnDown` and `wavRadioBtn` both `start.wav` (4092 bytes), `wavIrritatingAsHell` `trin.wav` (2634 bytes), in `resources/RCDATA/RCDATA_TDATA_0.dfm.bin` and `RCDATA_TFRMOPTIONS_0.dfm.bin`.

**TDaviEmbeddedFont** (0x47e670): `Hammer Fat` TrueType 38788 bytes, installed as a temp font. Only reachable through menucaps `Font=1`, and `menucaps.ini` sets only `[DEFAULT] Font=0`, so **no label uses it**. The Hammer-style lettering on screen is baked into images.

**Other**: `TDaviLinkLabel` balloon items; `TDaviSpeedButton` (12×12 balloon close); `TDaviButton` (exception dialog only).

### 8. Artwork: MenuRcs conventions and formats

Archive `MenuRcs.ind/.img` (format in `docs/formats/resource-archives.md`). **A loose file in the exe directory beats the archive** (`FUN_00489eb8`, `FUN_00489760`, `FUN_004823ac`). Missing asset: only an error log (`FUN_0045fe38`), no exception.

Formats, all 400 TGAs: type 10 RLE, 32 bpp, descriptor 8 (8 alpha bits, bottom-up). The menu BMPs are 24-bit. Sounds are WAV.

Loaders (`TBitmapManager`, 0x4895d8):

| Function | Name in strings | Effect |
|---|---|---|
| `FUN_00489c28` | GetImgTargaFromFile | `<name>.tga` into TGDIGraphic, control resized to image. Missing → empty, 0×0 |
| `FUN_00489e40` | (mine) indexed | name + two-digit index, then as above |
| `FUN_004899ec` | GetImgBitmapFromFile | `<name>.bmp` into TImage |
| `FUN_00481698` | ReadBtnDefGraphics | Button definition from `<stem>_up,_do,_hi,_di,_fo` `.tga` and `_re.bmp` |

**Load order matters.** `ReadBtnDefGraphics` reuses one TTarga for up, do, hi, di, fo; on a missing file the object keeps the previous image, which is then assigned. So a missing state gets the last loaded image, not Up:

| Stem | Files | Effective Hovered | Effective Disabled | Effective Focused |
|---|---|---|---|---|
| tour, quick, easy, norma, hard | up do hi re | hi | hi | hi |
| radhm, radex | up do hi | hi | hi | hi |
| radio | up do di | do | di | di |
| check | up do hi fo | hi | hi | fo |
| key | up | up | up | up |

All others have the full set. Up also sets the definition size.

**Button stems and baked captions**

| Stem | Caption | Size | Definition | Stem | Caption | Size | Definition |
|---|---|---|---|---|---|---|---|
| helpm | Help | 102×41 | Data.gdfBtnHelp | end | Einde | 103×41 | Data.gdfBtnClose |
| nextm | Verder | 139×73 | Data.gdfBtnNext | nexts | Verder | 139×73 | Data.gdfBtnNextSingle |
| backm | Terug | 110×39 | Data.gdfBtnPrevious | okay | OK | 104×41 | Data.gdfBtnOkDlg |
| okas | OK | 121×41 | Data.gdfBtnOkSingleDlg | cance | Annuleren | 103×41 | Data.gdfBtnCancelDlg |
| cross | x | 60×41 | Data.gdfBtnCloseDlg | ryes | Ja | 104×41 | Data.gdfBtnYesDlg |
| lno | Nee | 103×41 | Data.gdfBtnNoDlg | next2 | Volgende | 104×41 | Data.gdfBtnNextItem |
| back2 | Vorige | 103×41 | Data.gdfBtnPreviousItem | radio | (radio dot) | 16×16 | Data.gdfRadioBtn |
| check | (check box) | 40×40 | Data.gdfCheckBox | tour | Tour | 245×37 | MainScreen gdfBtnTour |
| quick | Quickrace | 245×37 | MainScreen gdfBtnQR | inter | Internet | 129×41 | MainScreen gdfBtnInternet |
| playe | Speler | 138×41 | MainScreen gdfBtnPlayer | optio | Opties | 129×41 | MainScreen gdfBtnOptions |
| easy | Makkelijk | 245×37 | Difficulty gdfBtnEasy | norma | Normaal | 245×37 | Difficulty gdfBtnMedium |
| hard | Moeilijk | 245×37 | Difficulty gdfBtnHard | newch | Ander karakter | 180×41 | CurrentChar gdfBtnChoose |
| back3 | Vorige | 129×41 | Garage gdfBtnPrevious3 | next3 | Volgende | 129×41 | Garage gdfBtnNext3 |
| buy | Kopen | 138×41 | Garage gdfBtnBuyTU | advan | Geavanceerd | 121×41 | Options gdfBtnAdvVideo |
| setti | Instellen | 121×41 | Options gdfBtnCtrlSettings | defau | Standaard | 121×41 | KeySettings gdfBtnDefault |
| key | (beige cap) | 71×35 | KeySettings gdfBtnKey | delet | Verwijderen | 121×41 | Player gdfBtnDeletePlayer |
| butp1 | Nieuwe speler | 131×163 | Player defEmpty | PCH00..05 | (portrait) | 131×163 | Player defCharNN, created in `FUN_004946e8`, loaded on demand in `FUN_0049421c` |
| radhm | Hoofdmenu | 262×44 | CloseDlg gdfBigRadioBtnMain | radex | Spel beëindigen | 361×46 | CloseDlg gdfRadioBtnExit |

The Data set is loaded in `FUN_00480828`. `gdfBtnMS` is not: it keeps its embedded `m018.bmp` (195×237) as Disabled image, used only by the easter egg in TfrmCharacter.

**Background and item images**

| Purpose | Files | Size | Baked text |
|---|---|---|---|
| Screens | `mainscre` | 800×600 BMP | Hoofdmenu, Spelkeuze |
| | `difficul` (Tour), `quickdif` (Quick) | | Moeilijkheid |
| | `currentc` | | Karakter, Huidige Karakter, Budget €, Gereden etappes, 1..9 |
| | `characte` | | Karakters, Karakterprofiel, Snelheid, Acceleratie, Wegligging, Remkracht, Gereden etappes, 1..9 |
| | `track` | | Etappe, Type:, Kwalificatie:, Rekord:, 1..9 |
| | `garage` | | Garage, Tune-up, Rijgedrag, Snelheid, Acceleratie, Wegligging, Remkracht, Turbo, Budget € |
| | `quickrac` | | Quickrace, Type:, Rekord:, Rijgedrag, the four stats |
| | `results` / `quickres` | | Resultaten, (`results` only: Winnaars van vandaag), Plaats, Karakter, Tijd, 1..5 |
| | `losenorm`, `qualify`, `winnorma` | | Verloren; Gekwalificeerd; Etappe winnaar |
| | `winchase`, `losechas` | | Ontsnapt; Gepakt (D.T. Harry drawn in the image) |
| | `winfinal`, `trackint` | | Winnaar, Gefeliciteerd !; Nieuwe Etappe |
| All 17 screens | | | watermark `A2 Racer Club` |
| Dialogs | `options` 535×476 | TGA | Opties, Besturing, Weergave, Geluid, Toetsenbord, Gamepad, Joystick, Stuur, 3D kaart, laag, Normaal, Hoog, Muziek, Geluidseffecten, Stemmen, Start - Info weergeven |
| | `player` 535×476 | | Speler, Huidige speler keuze |
| | `keysetti`, `popstrt0` 535×476 | | Toetsenbord, Gas, Links, Remmen, Rechts, Turbo, Handrem, Claxon (`popstrt0` adds Start - Info weergeven) |
| | `popstrt1` / `2` / `3` 318×379 | | Besturing + Gamepad / Joystick / Stuurtje, Start - Info weergeven |
| | `closedlg` 527×258, `popempty` 527×243 | | none |
| | `newplaye` 527×243 | | Nieuwe Speler, Vul hier je naam in en druk op OK: |
| | `highscor` 527×258 | | Beste Rondetijd, Vul hier je naam in en druk op OK: |
| | `nomoney` 527×258 | | Je hebt niet genoeg Euros. |
| | `cdreques` 527×258 | | CD niet gevonden. Plaats de cd-rom in de cd-rom speler. |
| | `unlock` 527×258 | | Je hebt Harry's auto gewonnen! Deze kun je voortaan in de quickrace rijden! |
| | `wheelset`, `joystick` 535×258 | | Stuurwiel; Joystick |
| Name plates | `chara_00..08` 290×40 | TGA | Edgar de Flits, Tommie 'El Nino', James Brons, Kat(harina), Barbara 'Barberally', D.T. Harry, De politie, Miss Mariah Honeybunny, De Schaduw |
| | `trname00..09` 246×40 | | Amsterdam, Rotterdam, Scheveningen, Wenen, Berlijn, Hamburg haven, Frankfurt luchthaven, Bodensee, München - Wenen, Country etappe |
| | `tune_00..04` 246×40 | | Motor, Banden, Remmen, Versnellingsbak, Turbo |
| | `headtour`, `headquic` 246×40 | | Tour, Quickrace |
| Portraits | `ch_00..05` 412×325; `qr_ch00..06,08` 366×281; `win_ch00..06,08`, `los_ch00..04` 253×520; `res_ch00..06,08` 98×66; `tuneup00..04` 331×338; `diffic00..02` 401×360; `tour`, `quick` 415×489; `hunny`, `shadow` 320×432 | TGA | |
| Slideshows | `ttc0T_FF` (T track 0..8), 380×380; `qtc0T_FF` (T 0..9), 250×250; F 00..05 | TGA | |
| Pips | `klrondje`, `blind_up`, `redin_up` 16×16; `butbigci`, `indfocus` 25×25; `focus` 98×66 | TGA | |
| Options | `opt_keyb`, `opt_gpad`, `opt_joys`, `opt_whee`, `opt_lowr`, `opt_midr`, `opt_higr`, `opt_soun` BMP 119×107; `opt_3dfx` TGA 119×107 | | |

Background name: `Copy(ClassName,5,8)` (`TfrmMainScreen`→`mainscre`, `TfrmCDRequest`→`cdreques`), lowercase for the port. Overrides: Difficulty Quick→`quickdif`; Results Quick→`QUICKRES`; DeletePlayer, InternetDlg, DoubleKeys→`popempty`; StartInfo by ControlType: 0 `POPSTRT0`, 1 `POPSTRT2`, 2 `POPSTRT1`, 3 `POPSTRT3`.

Not in the archive though referenced: `COPANGRY`, `cophappy` (WinChase, LoseChase): imgItem ends up 0×0; Harry is in the background BMP instead. `qr_CH07` (char position 7 has indexingame=7, but only 00..06, 08 exist).

No code reference found for: `headeasy`, `headhard`, `headnorm`, `gamepad.tga`, `radbi_*`, `slide*.bmp` (the DFM embeds the same sizes), `pch05`, `radio_up.bmp`, `css07_*`, `cfr07_00`, 22 `*Empty ResItem*` members.

### 9. Caption engine (`FUN_004865e4`), fonts and colours

Runs in `TCaptionForm` constructor, `TfrmCoolDialog.GDIFormShow` and `TfrmDisplaySettings.FormShow`. For each component of the form, section = form ClassName, key = `<Component>.<Prop>`:

| Class | Properties and defaults |
|---|---|
| TControl | Left, Top (default: current) |
| TLabel | Font, Caption (default `[DEFAULT] Caption`, **empty**), Hint, FontSize, FontColor. Height := −MulDiv(size,96,72). Style := [fsBold], except in TfrmDisplaySettings |
| TButton | Font, Caption, FontSize (default BtnFontSize), FontColor (default BtnFontColor) |
| TRadioButton | Font, Caption, FontSize (default BtnFontSize), FontColor (default FontColor) |
| TGDIButton | Caption := '' always |
| TEdit | Font, Hint, FontSize (via Font.Size), FontColor (default clWindowText) |

Consequences: **a label with no menucaps caption and no runtime caption is blank**, and DFM label fonts are overwritten. Font index 1 = Hammer Fat, anything else = Data Arial (`FUN_004865c4`). So label default: **Arial 12 pt bold (−16 px), COLORREF 0x0040D2F1 = #F1D240**.

`[DEFAULT]`: Caption empty, Font 0, FontSize 12, BtnFontSize 11, FontColor 0x0040D2F1 (#F1D240), BtnFontColor 0x000E2862 (#62280E), DisabledFontColor 0x004B6163 (#63614B). Other values used: 0x0080F2F1 (#F1F280), 0x00FFFFFF, 0x00000000. COLORREF is 0x00BBGGRR.

Section lookup is by exact class, so `[TfrmStartInfo]` does not reach TfrmStartInfoKeyBoard. Stale entries with no component are ignored: `[TfrmTrackWinner]`, `lblSound2`, `lblScreen2`, `btnGeneral`, `btnProblems`, `btnPreviousTrack`.

**Time format**: `[FORMAT] TIME=%d:%.2d:%.2d`, minutes:seconds:hundredths (`FUN_00481090`).

**MENUSTRINGS** (`menu.ini`, loaded in `unit_123_initialization`, keys 1..40):

| Key | Text | Used by |
|---|---|---|
| 1 | Weergave - Geavanceerd | DisplaySettings title |
| 2 | Deze track kun je downloaden van het Internet. | QuickRace lblLocked, normal track |
| 3 | Texture detail | grpTexture |
| 4 | Weet je zeker dat je speler '%s' wilt verwijderen? | DeletePlayer lblSure |
| 5 | A2 Racer 4 Menu | Application title, frmMain caption, dialog captions |
| 6 | De toets '%s' is dubbel gebruikt! | DoubleKeys |
| 7 | Ontgrendel deze track door je er in de Tour voor te kwalificeren. | QuickRace lblLocked, chase track |
| 8 | Ontsnappen | Track lblQualify, chase |
| 9 | Welkom %s! | MainScreen lblTitle |
| 10 | Winnaarsbonus :  %d Euro | WinNormal lblBonus |
| 13 | Prijs: %s Euro. | Garage lblPrice |
| 14 | %s Plaats | Track lblQualify, with `[ordinalnumbers]` 1e..5e, index = QualifyPos+1 |
| 17 | (absent, empty) | Player empty slot caption |
| 21 | Start het spel met 'A2Racer4.exe'. | entry |
| 22, 23 | Algemeen, Problemen | DisplaySettings tabs |

### 10. Sound in the menu

Music: `menumsc.wav` from the exe directory (5,650,458 bytes), `Play` with DSBPLAY_LOOPING (`FUN_004820d0`). Voice: `FUN_00480448` stops the current voice, plays `<name>.WAV` at Voice volume. FX: `FUN_004807cc` (Fx volume, no stop). Any screen's FormShow stops the current voice.

Name builders: `FUN_00480584(p,n)` = p + `_` + 2-digit Random(n). `FUN_004806b0(p,i,n)` = p + 2-digit i + `_` + 2-digit Random(n). `FUN_0048063c(p,i)` = p + 2-digit i.

| Where | Sound | Trigger |
|---|---|---|
| Most buttons | wavBtnDown (`start.wav`) | state → Down |
| Radios, check boxes | wavRadioBtn (`start.wav`) | state → Down |
| Help, screens and dialogs | `cmh07_00` | click |
| Options FX and Voice sliders | wavIrritatingAsHell (`trin.wav`) at FX volume | OnChange |
| TfrmCurrentChar, TfrmResults, TfrmHighScoreDlg | `aud3`; `aud2`; `aud2` | show |
| TfrmCharacter Verder | `CCS<char>_<Random 2>`, then 2000 ms | click |
| TfrmTrack | `CTI07_<track>` or chase `CTI08_<track>`, 1500 ms after a track change | tmrSound |
| TfrmGarage, return from Tour race | no RR_QUALIFY: `CBR07_<Random 6>`; else `CGR07_<Random 3>` | show |
| Garage buy | FX `PEEP` | purchase |
| TfrmLoseNormal | `CDL<char>_<Random 2>`, after 4500 ms `CDL07_<track>` | show, timSample |
| TfrmQualify | `CDW<winner>_<Random 2>`, after 4500 ms `CDQ07_<track>` | |
| TfrmWinNormal | `CDW<char>_<Random 2>`, after 4500 ms `CDW07_<track>` | |
| TfrmWinChase; TfrmLoseChase | `CDW05_<track>`; `CDL05_<track>` | show |
| TfrmTrackIntro | `NextTr` | show |
| TfrmWinFinal | `CDW07_04`; after duration+1500 ms `CCW08_<char>`; after its duration+1500 ms `CCW08_05` | timSample1, timSample2 |
| Unlock | `unlock` | see section 5 |

Duration seconds (`FUN_00482a0c`) = Trunc(member bytes × WavTimeFactor / 1,000,000); `menu.ini [PARAMETERS] WavTimeFactor=25`.

### 11. Keyboard and mouse

- **Tab** / Shift+Tab: next/previous TabStop control. **Arrows**: next (Right, Down) or previous (Left, Up) in tab order within the active control's parent, ignoring TabStop (`TCustomForm.dyn_b005` 0x4493bc). Arrows do not select a radio by themselves; Space does.
- **Enter**: focused button, or Default with no focus. **Esc**: visible button with Cancel. On screens Cancel = btnClose (Einde); on dialogs btnClose (x), or btnExit / btnCancel on CloseDlg and StartInfo. **Space**: click focused button.
- Radio buttons have no DFM TabStop; only the checked one gets TabStop.
- First focus: TBaseFormOneWay `btnNext`, except where noted. Dialogs: `btnOk1`, except NewPlayer and HighScoreDlg (`txtName`).
- Mouse: left press focuses the control (`TWinControlWrapper.vmt_06c` 0x465a6c) and shows Down. Hover is polled. No wheel handling. Hit shape per section 7.
- Name fields: Enter sets ModalResult 1 (0x494d44, 0x494fb0), MaxLength 12.
- `TfrmKeySettings`: KeyPreview. See its entry.
- `TfrmIntro`: any key except Space, or any mouse button: stop, close (0x4a4a78, 0x4a4ad8).

### 12. Per-form inventory (45)

Screen entries list only additions and overrides to the common buttons of section 6. Help caption is from `agent.ini`. A `lbl...` with empty caption is listed only when its position matters.

#### Non-screen forms

**1. TData** (unit MenuData, VMT 0x47ed2c). Data module, no UI. OnCreate 0x47efb8, OnDestroy 0x47f4ac. Embedded: Hamrfat.ttf, start.wav ×2, SLIDER.bmp ×4, `hilfe active area.bmp` (overwritten by `helpm_re`), m018.bmp. Definitions: section 8.

**2. TfrmMain** (MainForm, 0x4a4bb4). Black host window for all screens; no controls. Caption from key 5. FormCreate 0x4a4d20, FormShow 0x4a4f14 (Height = SM_CYSCREEN), FormActivate 0x4a4fe8 (runs StartUp once), FormDestroy 0x4a4e2c.

**3. TfrmIntro** (FormIntro, 0x4a46b8). Plays `intro1.mpg` through hidden `MenuIntro` TMediaPlayer. FormShow 0x4a4928, MenuIntroNotify 0x4a49f4 (at end or stop → close), FormKeyDown 0x4a4a78, FormMouseDown 0x4a4ad8. Media exception → posts WM_USER (0x400) → `dyn_0400` 0x4a4a6c closes.

**4. TCaptionForm** (CaptionFrm, 0x4a720c), **5. TSingletonForm** (SingletonForm, 0x48f5e0). Abstract, never shown. Section 6.

**6. TGameMenuScreen** (BaseForm, 0x49e19c), **7. TBaseFormOneWay** (FormOneWay, 0x490738), **8. TBaseFormTwoWay** (FormTwoWay, 0x491248). Abstract. Section 6. +0xfc and +0x100 are abstract there.

**9. TfrmCoolDialog** (FormCoolDialog, 0x488d68). Abstract dialog base. Handlers GDIFormShow 0x488ff0, btnHelpClick 0x4891e0, GDIFormClose 0x48937c, ShowWinHelp 0x4893a0.

**10. TfrmMessageBox**. DFM only, no class. Dead.

**11. TBalloonForm** (FormBalloon, 0x4776e8). Help balloon for the agent. 294×335, stay-on-top, colour 15590634 (#EAE4ED), `lblCaption` @6,6, `btnClose` TDaviSpeedButton @168,6 12×12. Items: TDaviLinkLabel per `agent.ini` entry, Tag=context id (`FUN_00477ab0`); click → `Application.HelpContext(Tag)` (`FUN_0047df44`). Handlers FormClose 0x47d898, FormDeactivate 0x47d89c, FormPaint 0x47d8b0, btnCloseClick 0x47d9b0.

**12. TfrmException2** (FormException2, 0x4a7568). Crash dialog, caption `Fout`, 436×356 collapsing to memo top−8. Default text `Er is een onverwachte fout opgetreden.`; runtime from `menu.ini [ERRORSTRINGS]`. radioService, radioCloseApp, radioIgnore; `&Details >>` shows `Foutmelding (Toets Ctrl+C om de melding naar het klembord te kopiëren)` and a memo. OK sets ModalResult 6, 7 or 5 (0x4a7ff0). Service option runs `SERVICE.EXE -r<title>` (`FUN_004a7a48`). Ctrl+C copies (0x4a808c).

#### Screens

**13. TfrmMainScreen** (FormMainScreen, 0x49d4bc). Background `mainscre`. Help `Hoofdmenu`. Player picks Tour or Quick Race and opens options, player, internet.
- `lblTitle` @42,166 319×34 = `Welkom %s!` with player name (`FUN_0049dc40`). `lblTextBlock` @42,218 319×125 = `Kies hier voor de Tour of Quick Race. In de Tour doe je mee met de A2 Race Club en probeert D.T. Harry je uit te schakelen. Met de Quick Race kan je snel een track naar keuze racen.`
- `optTour` @46,375 [t4] tour "Tour" → 0x49dd74, imgItem=`tour`. `optQuickRace` @46,431 [t5] quick "Quickrace" → 0x49dd40, imgItem=`quick`. Both state handler → radio sound. `imgItem` @385,74.
- `btnOptions` @31,550 [t1] optio "Opties" → 0x49d888. `btnPlayer` @133,550 [t2] playe "Speler" → 0x49d9fc, refreshes title. `btnInternet` @244,550 [t3] inter "Internet", Enabled = default browser found (0x491024), → 0x49da14: Ja → open DOWNLOADURL, set +0x33c.
- `btnNext` [t0] nexts "Verder" → `vmt_0fc` 0x49da44: if +0x33c, reload `static.ini`; RaceMode := optTour?2:1; → Difficulty. `btnHelp` [t6]. `btnClose` [t7] end "Einde" → 0x49dc20.
- FormCreate 0x49db5c, FormShow 0x49d894: RaceMode=1 checks QuickRace, otherwise Tour.
- `PopupMenu1` `Money = 300` (0x49dcc4), `At last track` (0x49dce8), `Unlock supercop` (0x49dd28): the form has no `PopupMenu` property, unreachable. `imgCar` @754,27: no reference in the handlers.

**14. TfrmDifficulty** (FormDifficulty, 0x49cca0). Background `difficul`, or `quickdif` in Quick (vmt_0e4 0x49d2b4). Help `Moeilijkheid`.
- `imgItemName` @75,91 = `headtour` / `headquic`. `lblTextBlock` @49,158 303×121 = `Kies hier de moeilijkheidsgraad van de race. De gekozen moeilijkheidsgraad heeft invloed op de kwalificatie-eisen en je snelheid en die van je tegenspelers.`
- `optEasy` @46,320 [t1] easy "Makkelijk" 0x49d374; `optMedium` @46,375 [t2] norma "Normaal" 0x49d3ac; `optHard` @46,430 [t3] hard "Moeilijk" 0x49d3e4. Each sets imgItem `diffic00/01/02`, @399,94. Show: checks stored difficulty (Settings +8).
- `btnNext` [t0] → 0x49d124 stores 0/1/2, then section 5. `btnPrevious` [t6] → MainScreen. `btnHelp` [t4], `btnClose` [t5]. FormCreate 0x49d304, FormShow 0x49cf00.

**15. TfrmCurrentChar** (FormCurrentChar, 0x49b288). Background `currentc`. Help `Huidig karakter`. Shows chosen Tour character and progress; voice `aud3`.
- `imgItemName` @49,91 `chara_NN`. `imgItem` @388,123 `ch_NN`. `lblTextBlock` @40,177 321×176 = `Dit is je huidige karakter. Hieronder kun je zien hoeveel Euro's je hebt en tot welke track je bent gekomen. Als je een ander karakter kiest, worden de resultaten van dit karakter opgeslagen.`
- `lblPoints` @136,383 = Euro. TStatusIndicator `butbigci` ×9 at (42,458), dx 37, n=TrackReached (`FUN_0049b630`).
- `btnChooseChar` @112,515 [t4] newch "Ander karakter" → 0x49b4e8 → Character. `btnNext` [t1] → Track. `btnPrevious` [t3] → Difficulty. `btnHelp` [t0], `btnClose` [t2]. FormCreate 0x49b704, FormShow 0x49b4fc.

**16. TfrmCharacter** (FormCharacter, 0x49a810). Background `characte`. Help `Karaktersmenu`. Cycle the 5 Tour characters. Show sets TourStarted:=1.
- `imgItemName` @49,91 `chara_NN`. `imgItem` @388,123 `ch_NN`. `lblTextBlock` @38,174 326×152, 11 pt = Story.
- Stat pips `klrondje` ×9, x=181+13i, y=336+15r: rows Speed, Accell, Handling, Brakes (`FUN_0049af5c`, `FUN_0049ae50`). Track pips `butbigci` at (42,458), dx 37, n=TrackReached.
- `btnPrevChar` @108,515 [t1] back2 "Vorige" 0x49abbc, `btnNextChar` @185,515 [t5] next2 "Volgende" 0x49ac04: wrap around, `FUN_0049ac68`. Neither is a TabStop.
- `btnNext` [t2] → 0x49aac4: voice `CCS<char>_*`, timSelection 2000 ms → 0x49b18c → Track. `btnPrevious` [t4] → CurrentChar. `btnHelp` [t0], `btnClose` [t3].
- Easter egg `imgCar` @450,0 105×4 OnDblClick 0x49b1b4: if the player name starts with `f`, imgItem := m018.bmp.
- FormShow 0x49ae00, FormDestroy 0x49af0c. `lbl1` hidden.

**17. TfrmTrack** (FormTrack, 0x49999c). Background `track`. Help `Etappemenu`. Pick a Tour stage up to the reached one.
- `imgTrackName` @82,91 `trname<IndexInGame>`. `lblTextBlock` @37,167 327×146 = Story. `lblType` @153,380 = Type, `lblQualify` @153,407 = `<N>e Plaats` or `Ontsnappen`, `lblTime` @153,434 and `lblRecName` @230,434 = record from `menu.ini [HIGHSCORES]`; all four #F1F280.
- `imgTrack1/2` @410,84 slideshow `ttc0T_FF`, timCycler 2000 ms 0x49a458, frame loaded into the hidden image, then both flip (`FUN_0049a328`). `imgItem` @480,112 `hunny` shown for normal tracks; `imgShadow` @480,112 `shadow` for chase.
- Pips `butbigci` at (42,494), dx 37, n=TrackReached. `imgFocus` `indfocus`, x=42+37·trackIx, y=494 (`FUN_00499d68`; tail at 0x49a723).
- `btnPrevTrack` @104,552 [t1] back2 "Vorige" 0x499f28, Enabled trackIx>0. `btnNextTrack` @181,552 [t2] next2 "Volgende" 0x499f54, Enabled trackIx<max. No wrap. Max = TrackReached, or last track if the character finished. tmrSound 1500 ms 0x49a5c0.
- `btnNext` [t0] → 0x499c7c: SaveGame+0x14 := IndexInGame → Garage. `btnPrevious` [t5] → CurrentChar. `btnHelp` [t3], `btnClose` [t4]. FormShow 0x49a168. `lblAncFocus` anchor.

**18. TfrmGarage** (FormGarage, 0x498aa4). Background `garage`. Help `Garagemenu`. Buy tune-ups before a Tour race.
- `imgItemName` @82,91 `tune_NN`. `imgItem` @429,99 `TUNEUPNN`. `lblStaticInfo` @45,176 298×50 = `Hier kun je tune-ups kopen. Deze tune-ups gaan maar één race mee.` `lblPrice` @45,237 = `Prijs: %s Euro.` `lblTextBlock` @45,275 298×80 = tune-up text (menucaps `Koop een van deze Tune-Ups om uw auto te verbeteren. Deze Tune-Ups gaan 1 race mee.` is replaced at show). `lblPoints` @179,477, 13 pt, black = Euro.
- TMultiIndicator ×5, 9 pips, x=181+13i, y=379+15r: Speed, Accell, Handling, Brakes, Turbo. Turbo pips = Trunc(Turbo·9/100), +1 preview when Turbo selected. Other rows show the selected unbought tune-up as delta (`FUN_004996a0`).
- `btnPrevTU` @37,515 [t1] back3 "Vorige" 0x4998cc; `btnNextTU` @250,515 [t3, set at show] next3 "Volgende" 0x4995b0; wrap over 5. `btnBuyTuneUp` @139,515 [t2] buy "Kopen" 0x4991f4: Euro<price → TfrmNoMoney; else `PEEP`, buy. Enabled: not yet bought; Turbo: Turbo<100, adds TURBOOILAMOUNT 10 (`FUN_0048dc4c`).
- `btnNext` [t0] → 0x4991ac: StartInfoOn=0 → race; else `FUN_0049812c`, result≠2 → race. `btnPrevious` [last] → Track. `btnHelp` [t4, set at show], `btnClose` [t5, set at show]. FormCreate 0x498d8c, FormShow 0x4990a0, FormDestroy 0x499650.

**19. TfrmQuickRace** (FormQuickRace, 0x49ba10). Background `quickrac`. Help `Quick Race menu`. Pick any available track and character. Show sets RaceMode=1.
- Track: `imgTrackName` @82,91 `trnameNN`. `lblType` @140,169, `lblTime` @140,217, `lblRecName` @214,217. `imgTrack1/2` @485,45 slideshow `qtc0T_FF`, timCycler 2000 ms 0x49cbec. `lblLocked` @489,135, 14 pt white, visible if unavailable: key 7 for chase tracks, key 2 otherwise. `btnPrevTrack` @108,248 [t1] back2 "Vorige" 0x49bf7c, `btnNextTrack` @185,248 [t2] next2 "Volgende" 0x49c088; wrap over TRACKIX (10).
- Character: `imgCharName` @49,336 `chara_NN`. `imgItem` @421,279 `qr_CHNN`. Stat pips `klrondje`, x=180+13i, y=428+15r. `lblCharLocked` @496,376, 14 pt white = LockedText, visible if locked. `btnPrevChar` @108,505 [t3] back2 0x49c468, `btnNextChar` @185,505 [t4] next2 0x49c40c; wrap over CHARIX (8).
- Availability (`FUN_0049c78c`): track files `.cmp .dmp .ini .omp .pmp .pth .rmp` must all exist in the exe dir; chase tracks also need any Tour character to have reached them. Char position LOCKEDCHARIX(2, D.T. Harry) needs HarryUnlocked; DOWNLOADCHARIX(7) needs the download flag (`FUN_0049ca08`).
- `btnNext` [t0] Enabled only if both available (`FUN_0049c3c8`) → 0x49bf18: as Garage, but timCycler stops around the dialog. `btnPrevious` [t7] → Difficulty. `btnClose` [t6] → 0x49cbf8: stops timCycler, then base. After Annuleren the slideshow stays stopped until the next track change. `btnHelp` [t5]. FormCreate 0x49bd5c, FormShow 0x49bdec, FormDestroy 0x49bd98. `imgTrack` @444,120 has no loader.

**20. TfrmResults** (FormResults, 0x4a0478). Background `results`, or `QUICKRES` in Quick (0x4a0b5c). Help `Resultaten`. Voice `aud2`.
- imgItem @456,96 `win_ch<1st>`. Five rows, created at show (0x4a0624): TGDIGraphic `res_chNN` at (96, 182+71r) and a TLabel at (250, 190+71r), 14 pt, colour of `lblTime` (#F1D240): row 0 absolute time, others ` + ` + difference. These labels are created after the caption engine ran, so they are not bold (font name: see Inferred). `imgFocus` `focus` at (96, 182+71·FPlayerPos), brought to front.
- `btnNext` [t0] → 0x4a0a20. `btnHelp` [t2]. Anchors `lblTopImage`, `lbl2ndImage`, `lblFocus`, `lblTime` hidden.

**21. TfrmLoseNormal** (FormLoseNormal, 0x49f320). Background `losenorm`. Help `Verloren`. `imgTrackName` @74,83. `lblTextBlock` @48,160 313×345 = LoseText. imgItem @456,96 `los_ch<char>`. `btnNext` [t1] → Track. `btnClose` [t2]. Voice: section 10. FormShow 0x49f50c, timSample 0x49f6fc. `lblPoints` hidden; `imgPosition` @284,77 unused.

**22. TfrmQualify** (FormQualify, 0x49fc84). Background `qualify`. Help `Kwalificatie`. `imgTrackName` @82,91. `lblTextBlock` @42,168 311×177 = QualifyText. `lblYouLost` @125,406 = `Je hebt verloren van:`. `imgWinnerName` @49,433 `chara_<winner>`. imgItem @456,96 `win_ch<winner>`. `btnNext` [t0] → TrackIntro. `btnHelp` [t2]. FormShow 0x49fe68, timSample 0x49ff90.

**23. TfrmWinNormal** (FormWinNormal, 0x4a0058). Background `winnorma`. Help `Etappe winnaar`. `imgTrackName` @74,83. `lblTextBlock` @43,171 318×225 = WinText. `lblBonus` @58,440 #F1F280 = `Winnaarsbonus :  2500 Euro`. imgItem `win_ch<char>`. `btnNext` [t2] → TrackIntro. FormShow 0x4a0218, timSample 0x4a03b0. First focus not set by DFM (`ActiveControl=nil`); base show focuses btnNext.

**24. TfrmWinChase** (FormWinChase, 0x4a0c34). Background `winchase`. Help `Ontsnapt`. `imgTrackName` @74,83, `lblTextBlock` @48,160 = WinText. `btnNext` [t2] → TrackIntro. FormShow 0x4a0dc8.

**25. TfrmLoseChase** (FormLoseChase, 0x4a0f0c). Background `losechas`. Help `Gepakt`. Same layout, LoseText. `btnNext` [t2] → Track. FormShow 0x4a10a8.

**26. TfrmWinFinal** (FormWinFinal, 0x4a3cf8). Background `winfinal`. Help `Race gewonnen`. Tour won. `lblTextBlock` @48,200 311×150 = winracetext. `pnlMovie` (415,86)-(785,456), 370×370, black, shows `<exe dir>ch<NN>.avi` via hidden `medWinner`, looped by `medWinnerNotify` 0x4a4214. `btnNext` [t0] Default → 0x4a42e8: stops timers and media, section 5. FormCreate 0x4a4594, FormShow 0x4a3f44, FormShowScreen 0x4a45b4, timers 0x4a4444, 0x4a455c.

**27. TfrmTrackIntro** (FormTrackIntro, 0x49f7c4). Background `trackint`. Stage interstitial, no visible buttons. `imgBackGround` OnClick 0x49f958; timClose 3500 ms 0x49fb28; both → Track. FormShow 0x49fa34.

#### Dialogs

Default buttons unless listed: `btnOk1` okay "OK" (ModalResult 1), `btnClose` cross "x" (2). Positions are effective.

**28. TfrmCloseDlg** (FormCloseDlg, 0x49de64). `closedlg`, no help. `optMainScreen` @100,76 [t5] radhm "Hoofdmenu", checked; `optQuit` @100,135 [t4] radex "Spel beëindigen". `btnExit` @328,217 [t1] cance "Annuleren", Cancel, 2. `btnOk1` @405,217 [t0] → 0x49e078: ModalResult 1 (main) or 3 (quit). GDIFormShow 0x49e0ac. Launcher returns the result (0x49e048).

**29. TfrmCDRequest** (FormCDRequest, 0x497108). `cdreques`. `btnOk1` @405,217 [t3] okay (1). `btnCancel` @328,217 [t1] cance (2). GDIFormShow 0x497260.

**30. TfrmNewPlayer** (FormNewPlayer, 0x494ba4). `newplaye`. Help `Nieuwe speler`. `txtName` @200,121 160×21 no border, colour 36546 (#C28E00), max 12, focused, Enter=OK. `btnOk1` @405,188 okas "OK". `btnCancel` @328,188 cance. `btnHelp` @372,15, `btnClose` @447,15. GDIFormShow 0x494d24, KeyDown 0x494d44. Caller loops on an empty name.

**31. TfrmHighScoreDlg** (FormHighScoreDlg, 0x494de0). `highscor`, voice `aud2`. `txtName` @176,121 like above, prefilled with the player name. `btnOk1` @385,217 okas. GDIFormShow 0x494f50, KeyDown 0x494fb0. Caller loops on an empty name; stores in `[HIGHSCORES]`.

**32. TfrmDeletePlayer** (FormDeletePlayer, 0x496c14). `popempty`. Help `Speler verwijderen`. `lblSure` @56,93 433×73, 14 pt black, key 4. `btnOk1` @405,187 ryes "Ja". `btnCancel` @328,187 lno "Nee" (2). `btnHelp` @374,12, `btnClose` @449,12. GDIFormShow 0x496e14.

**33. TfrmNoMoney** (FormNoMoney, 0x496f28). `nomoney`. `btnOk1` @360,217 okas. GDIFormShow 0x49705c.

**34. TfrmInternetDlg** (FormInternetDlg, 0x497320). `popempty`. Help `Internet`. `lblInternet1` @51,72 409×76, 14 pt black = `Op de A2 Racer internet site vind je informatie over het spel, downloads en links naar andere Davilex product sites.` `lblInternet2` @51,155 = `Wil je nu naar de A2 Racer internet site gaan?` `btnOk1` @405,187 ryes "Ja". `btnCancel` @328,187 lno "Nee". `btnHelp` @374,12, `btnClose` @449,12. GDIFormShow 0x4974d4.

**35. TfrmUnlock** (FormUnlock, 0x49b7d4). `unlock`. `btnOk1` @390,217 okas. GDIFormShow 0x49b964. Launcher `FUN_0049b904`.

**36. TfrmDoubleKeys** (FormDoubleKeys, 0x4948a8). `popempty`. `lblDouble` @69,97 385×73, 14 pt black, key 6. `btnOk1` @380,187 okas. GDIFormShow 0x494a90.

**37. TfrmPlayer** (FormPlayer, 0x4930d0). `player` 535×476. Help `Speler`. Inside `pnlBack` @15,62: `btn0` @24,2 [t0] current player (no handler); `btn1` @195,2, `btn2` @352,2, `btn3` @195,177, `btn4` @352,177 → `btn1Click` 0x4943bc; `lblTextBlock` @16,227 = `Kies hier je huidige speler.`
- Portrait button def = `PCH<IndexInGame of the player's Tour char>`; caption = player name, Arial, rect (10,135)-(115,155) (`FUN_004946e8`). Unused slots: `defEmpty` butp1 "Nieuwe speler", Tag −1. At most 4 other players shown.
- Click on slot: Tag −1 → `TfrmNewPlayer` (`FUN_00493754`); otherwise load that player. Refresh `FUN_00493ed0`.
- `btnDeletePlayer` @24,405 [t2] delet "Verwijderen", Enabled if another player exists → 0x4944fc: confirm, delete, then runs btn1's OnClick.
- `btnOk1` @413,435 [t0]. `btnCancel` @336,435 [t5] cance (2). `btnHelp` @382,13 [t3], `btnClose` @457,13 [t4].
- Open (`FUN_0049354c`): save player, copy every `SaveGame<n>.RCR` to `.BAK`. Result 2 (`FUN_00493658`) restores all files and reloads the original player. Files: `save*.rcr`, name `SaveGame<n>.RCR`, n = 9th filename char (`FUN_00481208`).
- GDIFormCreate 0x494658, GDIFormShow 0x4946b8.

**38. TfrmOptions** (FormOptions, 0x49504c). `options` 535×476. Help `Opties menu`. Edits a temp TSettings (+0x384). Top: `btnOk1` @413,435 [t0] → 0x495808: copy, assign to SaveGame.Settings, result 1. `btnCancel` @336,435 [t5] → 0x4956b4: restore Music, Fx, Voice, result 2. `btnHelp` @382,13 [t1], `btnClose` @457,13 [t2] result 2 with **no** volume restore.
- `pnlBack1` @7,93 190×355 (relative): `imgControl` @54,9 `OPT_KEYB/GPAD/JOYS/WHEE`. `optKeyboard` @61,155 [t1] 0x496480, `optJoyPad` @61,182 [t2] 0x4964c8 (disables btnControls), `optJoystick` @61,207 [t3] 0x496510, `optWheel` @61,232 [t4] 0x496558. Click labels `lblKeyboard` @80,151 80×25 0x495b78, `lblJoypad` @82,179 0x495b90, `lblJoystick` @81,204 0x495ba8, `lblWheel` @84,226 0x495bc0. `btnControls` @53,258 [t0] setti "Instellen" 0x4965a0. `chkStartInfoOn` @10,313 [t5]; `lblClickArea` @41,326 200×25 0x496b78.
- `pnlBack2` @209,96 290×309: `imgVideo` @8,7 `OPT_LOWR/MIDR/HIGR`; `imgVideo3d` @8,7 `opt_3dfx`, visible if 3D. `chkVideo3d` @7,133 [t4] 0x4959c4; `lblVideo3d` @36,150 0x495bd8. `optVideoLow` @17,179 [t5] 0x49591c (Enabled = not 3D), `optVideoMedium` @17,204 [t6] 0x495954, `optVideoHigh` @17,229 [t7] 0x49598c (Enabled = 3D). Labels `lblVideoLow` @33,176 0x495bf0, `lblVideoMedium` @33,200 0x495c18, `lblVideoHigh` @33,226 0x495c40; clicks only if the radio is enabled. If 3D toggles and a now-disabled radio is checked, Medium is clicked. `btnVideoAdvanced` @7,255 [t0] advan "Geavanceerd" 0x495a2c. `imgSound` @166,7 `opt_soun`. Sliders 111×15, 0..100: `sldrMusic` @171,138 [t1] 0x495c68 (live), `sldrSound` @170,196 [t2] 0x495cc8, `sldrVoice` @169,259 [t3] 0x495d1c.
- Resolution mapping, table at 0x4ab4d8, index → w,h,bpp: 0,1,2,5 → 0,0,0 (non-3D); 3 → 640×480×16; 4 → 800×600×16; 6 → 320×200×16; 7 → 1024×768×16; 8 → 1280×1024×16; 9 → 1600×1200×16. 3D = bpp>8 (`FUN_00487514`). Controls to index (`FUN_004960fc`): Low 3D?6:0; Medium 3D?3:1; High 4. A value outside 0,6,1,3,4 is custom: High shown, value kept (`FUN_004967d4`).
- Sliders: Pos>0 sets MusicOn, FxOn. GDIFormCreate 0x4967fc, GDIFormDestroy 0x4969c4, GDIFormShow 0x496a8c. `lblStartInfoOnClick` 0x495688 unwired.

**39. TfrmKeySettings** (FormKeySettings, 0x4919f4). `keysetti` 535×476. Help `Toetsen instellen`. Keyboard only. Key caps gdfBtnKey key, 71×35, opaque, not TabStop, OnClick `btnClick` 0x491d84: `btnGas` @240,106 [t1], `btnLeft` @128,175 [t2], `btnBreak` @239,174 [t7], `btnRight` @351,174 [t6], `btnTurbo` @128,299 [t3], `btnParkingBrake` @238,299 [t4], `btnHorn` @352,298 [t5]. Caption = key name, Tag = VK code.
- Capture (`FUN_00491c7c`): cap disabled, caption cleared, hidden `txtKey` 17×19 colour 10670034 (#D2CFA2) centred on it and focused. `FormKeyDown` 0x491e64: VK in `[CONTROLKEYS]` → assign; else beep; either way ends capture. `txtKeyExit` 0x491ef8 cancels.
- `[CONTROLKEYS]` format `index=VK,Name`, count 65, read by `FUN_00491fa4`. Not bindable: d, p (keys `*37`, `*49`, "used by game engine"). Examples: `1=37,links`, `2=38,omhoog`, `3=40,omlaag`, `4=39,rechts`, `20=32,spatie`, `48=188,komma`. Defaults `static.ini`: Gas 38, Rem 40, Left 37, Right 39, Turbo 17, Handrem 18, Claxon 32.
- `btnDefaults` @24,406 [t8] defau "Standaard" 0x492644. `btnOk1` @413,435 [t0] → 0x491f28: duplicates among the 7 (`FUN_004925dc`) → TfrmDoubleKeys, stay; else save, result 1. `btnCancel` @336,435 [t11] cance. `btnHelp` @382,13 [t10], `btnClose` @457,13 [t12]. FormCreate 0x4921c4, GDIFormShow 0x491f10. WM_GETDLGCODE handler 0x491d7c ORs in 4 (DLGC_WANTALLKEYS).

**40. TfrmSliderSettings** (FormSliderSettings, 0x492768). Abstract; `lblText` @56,80 161×73, `sldrSensitivity` @46,193 182×15, 0..100. `btnOk1` @413,203, `btnCancel` @336,203 cance, `btnHelp` @382,12, `btnClose` @457,12. `FormShow` 0x492910, `btnOkClick` 0x492920 unwired in children.

**41. TfrmWheelSettings** (0x4929c4). `wheelset`. Help `Stuur instellen`. Text `Hier kun je de gevoeligheid van je stuur instellen.` Launcher: Position:=WheelSensitivity; result 1 → store.

**42. TfrmJoyStickSettings** (0x492bb8). `joystick`. Help `Joystick instellen`. Text `Hier kun je de gevoeligheid van je joystick instellen.` Same with JoySensitivity. Tab order: slider [t2], OK [t3], Cancel [t4].

**43. TfrmStartInfo** (FormStartInfo, 0x4975f0). `POPSTRT1/2/3`. Reminder before a race. `chkStartInfo` @17,287 = StartInfoOn, focused by DFM then btnOk1. `lblClickArea` @56,296 161×36 0x4978d0. `btnOk1` @204,338 → 0x4977e0: store, result 1. `btnCancel` @127,338 cance, Cancel, 2. GDIFormShow 0x4977a0, vmt_0e4 0x497818.

**44. TfrmStartInfoKeyBoard** (0x49796c). `POPSTRT0`. Help caption exists (`Toetsen instellen`) but the button is hidden. Same at `chkStartInfo` @19,375, `lblClickArea` @56,393, `btnOk1` @413,435, `btnCancel` @336,435. Key names, 9 pt black: `lblSetGas` @249,116, `lblSetLeft` @140,184, `lblSetBrake` @249,184, `lblSetRight` @362,184, `lblSetTurbo` @139,309, `lblSetParkingBrake` @250,309, `lblSetHorn` @362,308. GDIFormShow 0x4980d4.

**45. TfrmDisplaySettings** (FormDisplaySettings, 0x4875b8). Plain Windows controls on a TPageControl, title key 1, not bold. FormCreate 0x487d30, FormDestroy 0x487e08, FormShow 0x487f14. `btnHelpStd` `Help` @414,14 0x488b60 (context 15 tab 0, 14 tab 1). `btnOk` `OK` @311,522 0x488050, `btnCancel` `Annuleren` @400,522. PageControl @8,28 472×477.
- **Tab `Algemeen`**: `Helderheid instellen (alleen met 3D-kaart)` @21,10; radios `licht` @42,33, `donker` @42,55 (Gamma 0, 1). `Mip-mapping (alleen met 3D kaart)` @45,89 + check @24,88. Group `Texture detail` @21,122: `Minimaal`, `Normaal`, `Maximaal` (TextureMem 0,1,2; `FUN_00488bd8`). `Videokaart instellen` @21,238; `Deze kun je instellen als je meer dan 1 videokaart in je computer hebt.` @21,262; `cboDriver` @21,317: `standaard`, `automatisch` + DirectDraw devices. `Overige resoluties (alleen met 3D-kaart)` @21,355; `Deze kun je instellen als deze door je videokaart wordt ondersteund.` @21,377; `cboResolution` @21,422.
- **Tab `Problemen`**: `Problemen oplossen` @22,24. `Zet bilineaire filtering uit bij prestatieproblemen, of wanneer je de volgende foutmelding krijgt: *FILTERING* error setting light state` @22,60; `Bilineaire filtering aan (alleen met 3D-kaart)` @47,127. `Zet deze uit als je problemen hebt met transparante effecten, zoals zwarte ramen in auto's, remlichten of wolkjes.` @22,173; `Transparante effecten aan (alleen met 3D-kaart)` @47,235. `Zet deze aan bij prestatieproblemen.` @22,280; `Rendergeheugen afgehandeld door videokaart` @47,308 (checked = RenderFocus 0). `Zet deze aan als je een onrustige beeldweergave hebt.` @22,364; `Verversingssnelheid synchroniseren op beeldscherm` @47,395. Labels toggle their controls (0x48805c..0x488110, 0x488ba0).
- 3D-only enable (`FUN_00487b9c`): mipmap, brightness, bilinear, alpha, texture, resolution. Texture limits from `game.ini [GFX OPTIONS] AVAILABLE_TEXTURE_MEMORY`: <0x1000000 disables Maximaal, <0x800000 disables Normaal.
- `cboDriverChange` 0x4882f4: index<2 → one fixed resolution entry, combobox disabled; else enumerate DirectDraw modes, list those in the 0x4ab4d8 table. Any change sets RenderFocus=1 and unchecks video-memory. OK 0x488808: DriverIndex=item−1, stores GUID, GUIDChanged=1.

### 13. Windows-dependent options and behaviour

| Item | Windows dependency | Evidence |
|---|---|---|
| `cboDriver` | DirectDrawEnumerateA | 0x487d30 |
| `cboResolution` | DirectDrawCreate, EnumDisplayModes | `FUN_0048813c`, `FUN_00487c68` |
| Render to video memory, WaitVbl | Written to INI for `spel.dat` | 0x488808 |
| Texture detail limits | AVAILABLE_TEXTURE_MEMORY in `game.ini` | `FUN_00480c9c` |
| Options "3D kaart", Laag/Normaal/Hoog | Select software or 3D mode index | section 12 no. 38 |
| Brightness, bilinear, alpha, mipmap | Written to INI | 0x488808 |
| Gamepad, Joystick, Stuur radios and sensitivity | Stored ControlType; no device check in the menu handlers | 0x4960fc |
| Display mode change, hiding taskbar | ChangeDisplaySettings, ShowWindow | `FUN_00481500`, 0x4a4d20 |
| CD check | Drive scan C:..Z: | `FUN_004a5c24` |
| Intro, winner movies | MCI TMediaPlayer, `.mpg`, `.avi` | 0x4a4928, 0x4a3f44 |
| Internet | Registry lookup of `.htm/.html` browser, ShellExecute | `FUN_00490b4c`, `FUN_004910f0` |
| Help | WinHelp `Menu.hlp>first` | `FUN_004803ac` |
| Help character | Microsoft Agent COM, `hunny.acs` (disc and Windows folder, not the game folder). Null agent → WinHelp at the first balloon item's context | 0x47f1b7, `FUN_0049eb00` |
| Exception dialog | `SERVICE.EXE` | `FUN_004a7a48` |
| Debug | `debug.ini`, `MenuTrac.log`, `menu.log` | `FUN_0047f6e8`, entry |
| Download track/char | Disc 1.01: `etappe9.*` and DOWNLOADSECTION not in the install, so track position 9 and char position 7 stay locked. With the two updates both are there, so both positions open | `FUN_0049c78c`, `static.ini` |

## Inferred

- **Dialog position**: VCL centres after OnShow, so a dialog is centred using the TGA size. Not traced in the VCL part of this binary.
- **Click rule**: VCL fires Click on mouse-up inside the control's rectangle, while press routing uses the hit test. So a drag-off cancels; a release on a non-region pixel inside the rectangle still clicks. Standard TControl behaviour, not re-read.
- **Paint behind dialog**: `FUN_00432884` in 0x46b97c is `PaintTo`, from its use.
- **Dynamic method names**: `dyn_ffec` Click, `dyn_ffda` MouseDown, `dyn_ffd8` MouseUp, `dyn_b005` CM_DIALOGKEY, `FUN_00403178` dynamic dispatch, `FUN_00449ac0` Close. From VCL patterns and use.
- **Volume**: from constants 4000, 100, 100, 10 in `FUN_00480fcc`, assuming `FUN_00420bd4`=Log10, `FUN_00420be4`=Power: `att_mB = -Trunc(100·40^((100-v)/100))`, clamped to −4000..−100, passed to `IDirectSoundBuffer::SetVolume` (+0x3c). So v=100 is −1 dB and v=0 is −40 dB, not silent.
- **Player caption font**: Data Arial with VCL default size and colour, since only the name is set (0x47f055).
- **Results time labels**: font name comes from the parent form (`MS Sans Serif` in the TGameMenuScreen DFM), since only size and colour are copied in 0x4a0624 and `ParentFont` is the TLabel default.
- **Hints do not show**: all HintLink are empty, menucaps Hint default is empty. `TGDIHint` paint not read.
- **Needle paint** (`TDaviGraphicButton`, 0x46937c, 24 methods not read): draws `SLIDER.bmp` with auto transparency, per `defSlider` DFM (`Transparent=True`, `tmAuto`).
- **`TGameMenuScreen.vmt_0ec`** (go back to prevClass): no handler read here calls it, so prevClass looks unused.
- **Help flag** +0x2e0 set in 0x49e678: no reader seen.
- **Which rows the Garage delta affects**: arguments to `FUN_0049180c` are lost in the C; the row order comes from the visible field offsets.
- **Port note**: since all baked text is in images, only labels listed in sections 9 and 12 need font rendering. Arial at those sizes is the reference.

## Unknown

- **Runtime look**: nothing past the intro was observed. Hover timing, focus visuals and blending are from code only.
- **Help context mapping** (settled by the Help port): `agent.ini` values go through `|CTXOMAP` of `menu.hlp`: 50 entries (context, topic offset). Offsets sorted ascending give the topics in file order, so 5 is `Welkom` (topic 2), 2 `Tour` (4), 3 `Quick Race` (5), 7 `Garage` (21). `tools/prepare-assets.py`, `prepare_help`.
- **MS Agent behaviour** (partly settled by the Help port): COM calls are put_Left +0x30, get_Left +0x34, put_Top +0x38, get_Top +0x3c, Hide +0x84, Show +0x88. `Hunny.acs` holds 57 frames of 75x150 and the animations Showing, Hiding, IdlingLevel1..3, no sound. agent.Left = button X + 10, agent.Top = button Y + 60 + balloon height (0x49e678); the balloon goes at Left = agent.Left, Top = agent.Top - (next item + 36), height next item + 30 (`FUN_0047d4d0`), so its top is button Y + 54 and Hunny stands 6 below it. Still unknown: when the Agent server plays the idle animations.
- **`FDownloadCharIsAvailable` source** (settled, `game-progression.md` section 10): set in the `TQuickRace` loader from DOWNLOADSECTION `Count`; the test is `L0_ANIM.INI [DOWNLOADCAR] Count > 0`.
- **`TBalloonForm` paint and layout** (settled by the Help port): `FUN_00477d64` only lists outline points for four balloon positions; position 1 (tail down) is used and copied into `balloonOutline` in `source/menu/forms/group-dialogs.js`. Constructor colours: white background, black frame. Width 150, caption @6,6, x @132,6, items from y 42, 3 apart (`FUN_00477c98`, `FUN_00477ab0`).
- **`FUN_0048b350`, `FUN_0048bcf0`, `FUN_0048b5bc`, `FUN_0048b7c8`, `FUN_0048ba20`** (keys written to `game.ini` and `raser.ini` at launch) were not traced here.
- **Mouse cursor**: resources CURSOR 1..7 exist; no custom cursor assignment was seen, but it was not searched exhaustively.
