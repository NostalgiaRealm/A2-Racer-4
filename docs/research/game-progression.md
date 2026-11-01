# Career and progression (menu.exe, spel.dat, shipped INI)

> **Correction, 2026-10-31.** This note was written against the disc 1.01 snapshot, before Davilex's two official updates were found in the installation ([`../provenance.md`](../provenance.md), [`../../original-game-decompiled/original/updates/README.md`](../../original-game-decompiled/original/updates/README.md)). "Download car = DeLorean" was wrong, and track 9 and the download car are not locked with the updates installed. Fixed in place below: sections 6, 9, 10, Inferred, Unknown and the checklist. The rest of the note is as it was written, for the disc. The original has not been run with the updates.

Prefixes: `M:` = menu.exe, `S:` = spel.dat. Addresses are image addresses. Flow, screens and the save table are in `startup-flow.md` (S.3, S.4, S.6) and `menu-forms.md` (S.5, S.12); this file adds the numbers and rules and corrects them where noted. menu.exe code was read as raw disassembly (objdump) wherever Ghidra's C loses code after `try..finally`. Nothing here was observed at runtime.

## Confirmed

### 1. Money

- Currency is Euro. Per-character balance `TCharResult.FPoints` (+8), saved in the RCR. `M:0x48dca4` setter clamps `< 0` to 0, no upper clamp in the menu. spel.dat clamps 0..999,999 (`S:0x4502e0`, `gameplay-systems.md` S.18).
- New character: `TCharResult` uses the plain `TDataObject.Create` (`M:0x45e3c0`, VMT `M:0x48d848` slot 1), no field set, so **0 Euro, 0 turbo, track 0, no tune-ups** (`TTourState` ctor `M:0x48d31c`, `CreateNewPlayer M:0x48c24c` touches only char index and settings).
- Sources: in-race pickups and speed cameras (`gameplay-systems.md` S.18: +100, +500, +1000, flitspaal +100, flitser -50) plus `FirstPlaceBonus`. No prize money table is live: `S:0x4501c0` has no live caller (`gameplay-systems.md` S.8). menu.exe adds nothing else (below).

**Money rule after a Tour race (`FillRaceResultsTour M:0x4a5624`), finished only:**

1. Clear all 5 tune-up flags (`M:0x48dc38`).
2. `FPoints = max(0, game.ini [PLAYER] MONEY)` (`M:0x48dca4`).
3. `Turbo = clamp(game.ini [PLAYER] TURBO_AMOUNT, 0, 100)` (`M:0x48dcb4`).
4. Then chase or race rules (section 5). Not-finished race: no change at all; the tune-ups stay bought and the money paid for them stays spent.

Upper bound in effect: the menu has no cap, so `FPoints` can pass 999,999 by a bonus, but the next race reads it clamped to 999,999 and writes that back (`S:0x4502e0`).

| spel.dat value | Written when finished | Becomes money? |
|---|---|---|
| `checkpoint_money` (remaining ms / checkpoint_speed) | yes | No, no menu read (`startup-flow.md` S.4) |
| `radarbonus` | yes, stays 0 (`gameplay-systems.md` S.13) | No |
| `position`, `tracktime` | yes | No. `tracktime` only ranks |
| Prize table 55000, 35000, 15000 | code dead | No |

Manual (`Handleiding.pdf.txt`) agrees: tune-ups are paid with coins picked up on the road: yellow 100, orange 500, red 1000.

### 2. Price table, `static.ini [TUNEUPS]`

`*** specs=name, price, dspeed, dacc, dbrakes, dhandl`

| Ix | Name | Price (Euro) | dSpeed | dAccel | dBrakes | dHandling | game.ini key |
|---|---|---|---|---|---|---|---|
| 0 | Motor | 2300 | 3 | 1 | 0 | -1 | `MOTOR` |
| 1 | Banden | 1700 | 0 | 0 | 0 | 4 | `BANDEN` |
| 2 | ABS Bremsen | 1500 | 0 | 0 | 4 | 0 | `ABS` |
| 3 | Getriebe | 2300 | 1 | 3 | 0 | -1 | `VERSNELLINGSBAK` |
| 4 | Turbo | 250 | 0 | 0 | 0 | 0 | `TURBO_AMOUNT` |

`[GAMEVALUES] TURBOOILAMOUNT=10`, `FirstPlaceBonus=2500`.

### 3. Garage rules (`TfrmGarage`, Tour only)

| Rule | Value | Evidence |
|---|---|---|
| Selection on show | Tune-up 0 (Motor) | `FormShow M:0x4990a0` -> `M:0x4993d4(0)` |
| Prev/Next | Wrap over 0..4 | `M:0x4995b0`, `M:0x4998cc` |
| Buy Motor/Banden/ABS/Getriebe | Needs `FPoints >= price`, else `TfrmNoMoney`. Sets flag, `FPoints -= price` (`M:0x48d9d8`). Plays `PEEP`. One per race | `M:0x4991f4` |
| Buy Turbo | Needs `FPoints >= 250` and `Turbo < 100`. `Turbo = clamp(Turbo + 10, 0, 100)`, `FPoints -= 250`. Repeatable | `M:0x48dc4c`, `M:0x48dcb4` |
| Kopen enabled | Turbo: `Turbo < 100`. Others: flag not set. Money is not part of it, so a poor player gets the dialog | `M:0x499600` |
| Stat rows | `char stat + sum(deltas of bought tune-ups)` + preview delta of the selected one if unbought and not Turbo. Tune-up fields: Speed +0x34, Accell +0x38, Brakes +0x3C, Handling +0x40. Screen order top to bottom: Speed, Accell, Handling, Brakes, Turbo (settles the Inferred note in `menu-forms.md`) | `M:0x4996a0`, sums `M:0x48d8c8`..`M:0x48d994`, rows `M:0x498ed4`..`M:0x498ffd` |
| Turbo row | `Trunc(Turbo*9/100)`, +1 preview pip only when Turbo is selected | `M:0x49984f`, float 100.0 at `M:0x4998c8` |
| Pip images (`M:0x49180c`, 9 pips) | `i < v`: `klrondje`; `v+d <= i < v`: `redin_up` (preview loss); `v <= i < v+d`: `blind_up` (preview gain); else hidden | `M:0x498e7a`, `M:0x491790` |
| Screen voice on show | If PREVSTATE=2: `CGR07` (3 variants) when RR_QUALIFY set, else `CBR07` (6 variants). A win sets only RR_WINTRACK, so it takes the `CBR07` branch | `M:0x499538` |
| Texts | `lblPoints` = Euro decimal, `lblPrice` = MENUSTRINGS 13 with the price, `lblTextBlock` = `TEXT<i>` | `M:0x499464` |

Flag 4 (Turbo) is never set: `M:0x48dcd0` is called only from `M:0x48d9d8` (non-Turbo path) and the loader, so RCR tune-up byte 4 stays 0. `TURBO_AMOUNT` is the only turbo state; it carries over per character after a finished race.

Effect of tune-ups in the race: `[PLAYER] MOTOR/BANDEN/ABS/VERSNELLINGSBAK` are the upgrade index into `vdyns.dat` for the player car (`simulation-core.md` "VDYNS.DAT"). The `dSpeed..dHandling` numbers only move the menu pips. Quick Race writes all four flags as 1, MONEY 0, TURBO_AMOUNT 100 (`startup-flow.md` S.3). Consumption: flags clear only after a **finished** race (section 1).

Not referenced by any binary (byte search of spel.dat, menu.exe, bonus.dso, A2Racer4.exe = 0 hits for `garage.ini`; rsc.dll, setdebug.exe = 0 hits for `garage`): `garage.ini` (legacy car prices 15000..200000 and per-car item prices, Trabant to Diablo). `car_cfg.ini` field 6 `Price` = 5000 in every row; only use found is a debug print (`Price%d`, `S:0x423ce0`).

### 4. Repairs

No repair shop or repair item exists in `menu.exe` (`[TUNEUPS]` has 5 entries, none repairs; "reparatie" appears only in `garage.ini` and `language.ini` texts 62, 63). Repairs happen only in the race: `pw_reps`, `pw_repb`, trigger 2 (`gameplay-systems.md` S.18). Damage between races: see section 12.

### 5. Tour: championship rules

The Tour is the only championship. There is no points table or standings: `FPoints` is the Euro balance despite its name. `[TOURRACE] TRACKIX=2,0,1,7,8,3,5,6,4` gives the order. `QUALIFYPOSITION` is the worst allowed 0-based rank, per difficulty 0,1,2. Field = player + 4 racers, ranks 0..4. Display `<N>e Plaats` = value+1 via `menu.ini [OrdinalNumbers]` keys 1..7 (`M:0x499f80`, loader `M:0x487365`; shipped 1..5).

| Tour pos | Track (static n) | Type | Req. Makkelijk | Req. Normaal | Req. Moeilijk | Laps |
|---|---|---|---|---|---|---|
| 0 | Scheveningen (2) | Kustrace | 5e | 4e | 3e | 2 |
| 1 | Amsterdam (0) | Stadsrace | 4e | 3e | 3e | 2 |
| 2 | Rotterdam (1) | Stadsachtervolging | Ontsnappen | Ontsnappen | Ontsnappen | 2 |
| 3 | BodenSee (7) | Drielandenrace | 4e | 3e | 2e | 2 |
| 4 | Munchen - Wenen (8) | Snelwegrace | 3e | 2e | 1e | 1 |
| 5 | Wenen (3) | Stadsachtervolging | Ontsnappen | Ontsnappen | Ontsnappen | 2 |
| 6 | Hamburg (5) | Havenrace | 2e | 1e | 1e | 2 |
| 7 | Frankfurt (6) | Vliegveldrace | 1e | 1e | 1e | 2 |
| 8 | Berlijn (4) | Stadsachtervolging | Ontsnappen | Ontsnappen | Ontsnappen | 2 |

**Rules (finished races only, `M:0x4a5624`):**

| Case | Effect | Evidence |
|---|---|---|
| Race, rank 0 | RR_WINTRACK (no RR_QUALIFY). If `FNextUndrivenTrack == FTrackIx`: advance. `FPoints += 2500`, **on every win, also replays** | `M:0x49f010` |
| Race, 0 < rank <= QualifyPos | RR_QUALIFY. If `FNextUndrivenTrack == FTrackIx`: advance | `M:0x49f100` |
| Race, rank > QualifyPos | No flag, no advance. Money and turbo from the race are kept | `M:0x4a57f5` |
| Chase, finished | RR_QUALIFY. Advance **without** the equality check, so a replayed chase also moves `FNextUndrivenTrack` on. If `FTrackIx == count-1` (8, Berlijn): RR_WINRACE | `M:0x49eef0` |
| Advance | `if count > next: next++`, so `next` ends at 9 | `M:0x48dd00` |
| Character finished | `count <= next` | `M:0x48dcdc` |
| Track screen selection | Finished: stored `FTrackIx`; else `next`. Max selectable: `next` or last if finished | `M:0x49a168`, `M:0x49a464` |

Correction to `startup-flow.md` S.4: the RR_WINRACE test compares `TourState.FTrackIx` (+0xC of TourState), not `FNextUndrivenTrack`; `M:0x49ef6e`.

Winner screen: `lblBonus` = MENUSTRINGS 10 `Winnaarsbonus :  %d Euro` with `FirstPlaceBonus` (`M:0x4a0304`).

Difficulty also selects `[LEAGUE] LEAGUE` and the chase limit: `[CHECKPOINTTIME] Difficulty<d>` = 92, 71, 62, default 110 if the key is missing (`M:0x48e33f`), times `checkpoint_value=1000` = 92,000 / 71,000 / 62,000 ms (`startup-flow.md` S.3). Difficulty is a Settings value, not per character, so it can change at every Tour start (`TfrmDifficulty`).

Debug handlers, unreachable (form has no `PopupMenu` link, `menu-forms.md` S.12): `Money = 300` sets `FPoints=300` (`M:0x49dcc4`); `At last track` sets `next=count-1` (`M:0x49dce8`); `Unlock supercop` sets `HarryUnlocked=1` (`M:0x49dd28`).

### 6. Highscores

- One best lap per static track, 10 entries, global over all players, modes and difficulties, in `menu.ini [HIGHSCORES]` `<i>` (ms) and `name<i>`. Missing keys load as 0 and `<no name>` (`M:0x48efac`); a 0 can never be beaten.
- `CheckIfBestLap M:0x49ed60`: for lap i in `0..NRLAPS-1`, signed `lap[i] < hs.time` -> set RR_BESTLAP, store time; a later lower lap overwrites. If set: modal `TfrmHighScoreDlg` prefilled with the player name (`M:0x48b2b4`, `M:0x4984f0`), loops until non-empty, max 12 chars (DFM `MaxLength`). Called from both modes, only when finished.
- Display `[FORMAT] TIME=%d:%.2d:%.2d`, args `ms/60000`, `(ms/1000)%60`, `(ms/10)%100` (`M:0x481090`). Written on every menu exit (`M:0x48f168`).
- Shipped table:

| n | Track | ms | Shown | Name |
|---|---|---|---|---|
| 0 | Amsterdam | 177137 | 2:57:13 | Andre |
| 1 | Rotterdam | 211039 | 3:31:03 | Jack |
| 2 | Scheveningen | 184061 | 3:04:06 | Hidde |
| 3 | Wenen | 267330 | 4:27:33 | Kent |
| 4 | Berlijn | 270971 | 4:30:97 | Frits |
| 5 | Hamburg | 136528 | 2:16:52 | Cameron |
| 6 | Frankfurt | 121216 | 2:01:21 | Jelle |
| 7 | BodenSee | 210709 | 3:30:70 | Jeroen |
| 8 | Munchen - Wenen | 204502 | 3:24:50 | Marcel |
| 9 | Download-race | 305050 | 5:05:05 | Byron |

Separate in-race records: `game.ini [BEST TIMES]` `LAP_RECORD_E%d_L%d`, `RACE_RECORD_E%d_L%d`, `TIME_CHECK_COUNT_E%d_L%d` (0..9, else fatal), `TIME_CHECK_E%d_C%d_L%d`, per track and league, loaded by `S:0x449ea0` (0 or missing -> `0xFFFFFFF`), written by `S:0x44ae80` when finished; the menu does not read them (`startup-flow.md` S.3, S.4). Shipped file seeds E0..E8 for L0..L2 except E0 L1; the car update's `game.ini` has `RACE_RECORD_E8_L0=316400` and no `TIME_CHECK_COUNT_E8_L0`. They survive in `game.ini`, global to the install; race use in `gameplay-systems.md` (lap and race record logic).

### 7. Player profiles

| Item | Rule | Evidence |
|---|---|---|
| Storage | One `SaveGame<N>.RCR` per player in the game dir; `menu.ini CURRENTPLAYER=N`. N is parsed back from one character, position 9 of the name, so N must stay a single digit | `M:0x481178`, `M:0x47f95c`, `M:0x481208` |
| Name | `TEdit.MaxLength=12` in `TfrmNewPlayer`; stored as ShortString[32] | DFM, `M:0x45e398` (0x21 bytes) |
| Number of players | 1 current + 4 other buttons `btn1..btn4`, so 5 reachable. Unused buttons get `defEmpty`, Tag -1 -> new player. More files than 4 others are simply not shown | `M:0x493ed0` loop `esi<4`, `M:0x494110`, `M:0x49443f` |
| New | `TfrmNewPlayer` loop until name or Cancel; lowest free N (`M:0x47fc75`, tests file exists); `CreateNewPlayer M:0x48c24c`; saved at once (`M:0x47fd14`); becomes current | `M:0x493754`, `M:0x47fbd4` |
| Switch | Free the current object, load the clicked file | `M:0x4943b8`, `M:0x47f840` |
| Delete | Enabled only if another player exists (`flcount>0`). Confirm dialog (MENUSTRINGS 4), delete current file, then click event of first other button loads the next | `M:0x4944fc`, `M:0x47fdc8`, `M:0x494131` |
| Cancel of dialog | Open: save current, delete old `.BAK`, copy every `save*.rcr` to `.BAK`. Modal result 2: delete all `SaveGame*.RCR`, copy each `.BAK` back, reload original player, result 2. Close: delete `.BAK` | `M:0x49354c`, `M:0x493658`, `M:0x493ac8` |
| List entry | Header only (name + Tour char). Button art `pch<NN>_{up,do,fo,di,hi,re}` through runtime `defChar<NN>`, NN = `[TOURRACE] CHARIX[FTourCharIx]` | `M:0x492dd8`, `M:0x49421c`, `M:0x4946e8` |
| Name checks | Non-empty only; no trim, no duplicate check | `M:0x4937d6`, `M:0x498414` |
| Bad or missing file | Exception `Unable to load: <file>` | `M:0x47f977`, `M:0x47f9a6` |

**When saved (all callers):** `TData.DataDestroy` (every menu exit, race start included, `M:0x47f54f`), opening the Player dialog (`M:0x4935d7`), creating a player (`M:0x47fd14`, `M:0x49383d`). Not after a purchase or race result, so that state lives in memory until the next menu exit.

### 8. `SaveGame<N>.RCR` layout

Re-verified from `M:0x48ad68` (load), `M:0x48ae64` (save) and sub-writers; matches `startup-flow.md` S.6. All little-endian. Total 227 bytes, no magic, no version, no checksum. Write order Header, Settings, Controls, TourState, QRState, FTrackToDrive. Short file: `TStream.ReadBuffer` raises (`M:0x4126d0`).

| Offset | Size | Field | Notes |
|---|---|---|---|
| 0 | 33 | Name | ShortString: length byte + 32 chars, cp1252; UI allows 12 |
| 33 | 4 | Tour char index | `TourState.FCharacterIx` copy (`M:0x48c830`) |
| 37 | 4 | Difficulty | byte in memory, zero-extended (`M:0x4a65e3`); same for TextureMem, ControlType |
| 41 | 4 | Resolution | overwritten after load from raser.ini (`M:0x48c07c`) |
| 45 / 49 / 53 | 12 | FX, Music, Voices volume | 0..100 |
| 57..64 | 8 | bool FXOn, MusicOn, VoicesOn, StartInfoOn, AlphaBlending, Bilinear, WaitVbl, Mipmapping | |
| 65 / 69 / 73 / 77 | 16 | Gamma, TextureMem enum, DriverIndex, RenderFocus | |
| 81 | 40 | Up, Down, Left, Right, Extra1, Extra2, Extra3, ControlType, JoySens, WheelSens | `M:0x4a6d70` |
| 121 | 8 | Tour `FCharacterIx`, `FTrackIx` | |
| 129 | 85 | 5 x {`FNextUndrivenTrack`, `FPoints`, Turbo (int32), 5 bool tune-ups} | 17 bytes each, order `M:0x48dba5` |
| 214 | 9 | QR `FCharacterIx`, `FTrackIx`, bool `FShowedUnlockPopup` (HarryUnlocked) | |
| 223 | 4 | `FTrackToDrive` | |

### 9. Characters and portraits

`static.ini`: `CHARCOUNT=9`. Static index n selects art and voices; `IndexInGame` (`CAR`, `RACER_%d`, overlay file) selects the car. Loader `M:0x4606d0`: +0xC IndexInGame, +0x10 n, +0x20 Speed, +0x24 Accell, +0x28 Brakes, +0x2C Handling (corrects "+0x10 IndexInGame" in `menu-forms.md` S.3; `startup-flow.md` has it right). Stats are never written to an INI (key tables in `startup-flow.md` S.3), so they only drive menu pips; the real car comes from `car_cfg.ini` and `vdyns.dat`.

| n | Name | IndexInGame | Spd | Acc | Hnd | Brk | Tour pos | QR pos | Availability |
|---|---|---|---|---|---|---|---|---|---|
| 0 | Edgar de Flits | 0 | 4 | 2 | 4 | 3 | 0 | 0 | always |
| 1 | Tommie 'El Niño' | 1 | 3 | 5 | 4 | 2 | 1 | 1 | always, QR default |
| 2 | James Brons | 2 | 5 | 4 | 5 | 2 | 4 | 6 | always |
| 3 | Katharina 'Kat' | 3 | 4 | 4 | 4 | 4 | 2 | 4 | always, Tour default |
| 4 | Barbarally | 4 | 3 | 3 | 3 | 3 | 3 | 5 | always |
| 5 | D.T. Harry | 5 | 5 | 5 | 5 | 5 | - | 2 | QR only, `HarryUnlocked` |
| 6 | politie-auto | 6 | 3 | 3 | 3 | 3 | - | 3 | QR only, always (`M:0x49ca4a`) |
| 7 | hunny | 7 | 0 | 0 | 0 | 0 | - | - | Not in any list |
| 8 | downld (art: De Schaduw) | 7 | 5 | 5 | 5 | 5 | - | 7 | QR only, download flag, set since the car update |

Defaults: `[TOURRACE] DEFAULTCHAR=2` and `[QUICKRACE] DEFAULTCHAR=1` are positions in the `CHARIX` lists (`M:0x48c31c`, `M:0x48c33d`, `M:0x48d180`). New player: both `FTrackIx` 0.

| Art member (`menurcs`) | Exists for n | Used by |
|---|---|---|
| `chara_NN` name | 00..08 | Character, CurrentChar, QuickRace, Qualify |
| `ch_NN` | 00..05 | Character, CurrentChar |
| `qr_chNN` | 00..06, 08 | QuickRace |
| `win_chNN`, `res_chNN` | 00..06, 08 | Results, Qualify, WinNormal |
| `los_chNN` | 00..04 | LoseNormal (Tour characters) |
| `ch<NN>.avi` (install) | 00..04 | WinFinal movie |

Texts: `name`, `story`, `winracetext`, `lockedtext` in `static.ini [char<n>]`. Voices `CCS<NN>_<0|1>` (`M:0x49aac4`, `audio.md`). Easter egg `m018.bmp`: `menu-forms.md` S.12.

**Cars behind the characters** (`car_cfg.ini [league0..2]`, `L0_anim.ini`). Rows are equal in all leagues except DynamicsType: cars 0-6 use 11-17, 21-27, and 0,1,5,3,4,2,6 for league 0,1,2; cars 7, 8 keep 7, 8 (`simulation-core.md`):

| Car | Anim section | Body mesh | Driver | Damage model | Reached by |
|---|---|---|---|---|---|
| 0 | RACER_1 | checker | EDGAR | dam_racer0 | n0 |
| 1 | RACER_2 | hotrod | TOMMIE | dam_racer1 | n1 |
| 2 | RACER_3 | countach | JAMES | dam_racer5 | n2 |
| 3 | RACER_4 | merceslk | KATHARINE | dam_racer3 | n3 |
| 4 | RACER_5 | buggy | BARBARA | dam_racer4 | n4 |
| 5 | RACER_6 | humvee | RATTER | dam_racer2 | n5 D.T. Harry |
| 6 | RACER_7 | politie | TELEBUGGY | dam_politie | n6 politie-auto |
| 7 | DOWNLOADCAR | TRU | KENT | dam_truck | n8 downld (De Schaduw), n7 hunny (in no list) |
| 8 | RACER_8 | polizei | ABU | dam_polizei | none |

Row 7 since the car update, in all three leagues: `7=RACER_7,DOWNLOADCAR,KENT,hoog4,1500,42,5000,7,dam_truck`. On disc 1.01: `7=RACER_7,TOURNAMENT_BONUS,PIET,hoog4,1500,7,5000,7,dam_dummy`, on the `DeLorean` meshes.

**Race portraits:** `game.ini [Portraits]` 0..7 = `PLAYER_0`..`PLAYER_7`, key = car (disc 1.01 stops at 6; `7=PLAYER_7` comes with the car update); missing is fatal (`S:0x4932a0`). Details in `hud-overlay.md` ("Portraits composite"). No save-game link: portrait follows car index.

**Opponents in the race:** `S:0x42de60` walks `RACER_<c>` from c=0, skipping the player's `CAR`, for `NrOpponents` (4). So the field is cars 0,1,2,3, with the player's slot replaced by 4. D.T. Harry and politie-auto never race against the player. Menu ranks them by `IndexInGame` (`M:0x48e510`, `GetCharacterByGameIndex`; failure `charby index not found`, and same as player raises `double racers`).

### 10. Unlocks and bonus cars

| Item | Condition | Default | Scope | Evidence |
|---|---|---|---|---|
| D.T. Harry (`LOCKEDCHARIX=2`) | RR_WINRACE seen by `TfrmQuickRace` (win Berlijn escape in Tour with any character). First time only: set `HarryUnlocked`, select his position, voice `unlock`, modal `TfrmUnlock` | locked | Per player (RCR) | `M:0x49c6a0` |
| Locked text | `[char5] LOCKEDTEXT` on `lblCharLocked`, `Verder` disabled | | | `M:0x49c3c8` |
| Tour win next screen | `HarryUnlocked=0` -> QuickRace (unlock runs there), else Character | | | `M:0x4a42e8` |
| Chase tracks in QR (Rotterdam, Wenen, Berlijn) | Any character of the player has `FNextUndrivenTrack >= tour position` of that track | locked | Per player | `M:0x48c644`, `M:0x49c78c` |
| Locked track text | MENUSTRINGS 7 for chase tracks, 2 for the others | | | `menu-forms.md` S.12 |
| Non-chase tracks in QR | Files `etappe<i>.cmp/.dmp/.ini/.omp/.pmp/.pth/.rmp` exist. 0-8 ship on the disc; 9 (Download-race, art "Country etappe") comes with the track update | | Install | `M:0x461a4c` |
| Download car (`DOWNLOADCHARIX=7`) | `L0_ANIM.INI [DOWNLOADCAR] Count > 0` (section name from `DOWNLOADSECTION`), read when `static.ini` loads. The car update adds that section, so true. Disc 1.01 has no such section, so false; `overlay7.ini` is absent there too | locked on disc 1.01, open with the car update | Install | `M:0x48ea3d`, `M:0x48eb28`, `M:0x49ca08` |

Download content on disc 1.01: `DOWNLOADCAR` occurs only in `static.ini` and `menu.exe` on install and disc. No `etappe9.*` and no `overlay7.ini` anywhere; `[Portraits]` stops at 6, so car 7 would be fatal in spel.dat (`S:0x4932a0`). Track 9 ships `e09_anim.ini`, `trname09`, `qtc09_*`, 34 `e09*` members in `rcs` and its INI rows, but no track files. The two updates add what was missing: the track update all seven `etappe9.*` files, the car update `[DOWNLOADCAR]` in `l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini`, `overlay7.ini`, `[Portraits] 7=PLAYER_7` and 17 `tru*.d3d`. Both open by the rules above with no change of code. Meshes `delorean.d3d`, `delo_wie.d3d`, `delo_ram.d3d` are still in `rcs`; the truck replaces them in row 7.

Help topic 29 (`Menu.hlp.txt`) says finishing the Tour with one character frees D.T. Harry for Quick Race, which agrees with the code. Another help passage and the manual add that you must also finish first; no code path checks that, since the last Tour race is a chase without rank.

`[QUICKRACE] LOCKEDCHARTEXT` is loaded (+0x24, `M:0x48ea92`) but the screen uses the character's `LockedText` (`menu-forms.md` S.12). No money-based unlocks exist. Character finished state does not gate anything except the Track screen range.

### 11. Tour character roster rules

- Five independent `TCharResult` in the RCR, one per Tour position. Changing character keeps each one's Euro, turbo, tune-ups and progress (`M:0x48d31c`, `M:0x48d180`). `TourState.FTrackIx` is shared.
- `TfrmCharacter` Show sets `TourStarted`(+0x1C)=1; `LoadPlayer` also sets it (`M:0x48b029`); new player 0. It is not saved. So only a just-created player goes MainScreen -> Difficulty -> `TfrmCharacter`; a loaded one gets `TfrmCurrentChar` first.
- Winning the Tour does not reset a character; `next` stays 9, all tracks stay selectable, money stays, and another Berlijn escape shows `TfrmWinFinal` again (`M:0x49eef0`, `M:0x4a59cc`).
- Quick Race never changes career state: only `HarryUnlocked`, `QRState`, and highscores (`M:0x4a54dc`).

### 12. Damage across races

| Item | Rule | Evidence |
|---|---|---|
| Numeric car damage | Always 0 at race start: `S:0x44e340` calls setter `S:0x4252e0(rec, 0)` (clamp 0..1100). So a free full repair between races | `S:0x44e5e0` `PUSH EBX`, EBX=0 since `S:0x44e35f` |
| `[PLAYER] damage` | Written by spel.dat when finished, written `0` by the menu, **read by nobody** (`damage` strings only in `S:0x44b1c0` and script table `S:0x475b50`). Corrects `gameplay-systems.md` S.18 "Damage at start"; `startup-flow.md` S.3 is right. Comment in `game.ini` says range 0..100; real range is 0..1100 | `strings.csv` |
| `DAMAGE_MESH` (8 ints) | Written when finished, re-read at init (`S:0x44aa20` into `0x6fbb10`), applied per part where != -1 by `S:0x44ceb0` (from `S:0x44cf60`, from WinMain). So broken-part **visuals** carry over from the last finished race, across modes, characters and players. Menu never resets them. Same for racers via `[RACERS] DAM<i>` | `S:0x44ceb0`, `S:0x4a8660` |
| `DAMAGE_VALUE` (8 floats) | Parsed into `0x6fbaf0`; absolute references only in the read and in the writer `S:0x44b1c0` | `disassembly.asm` |

Shipped: `DAMAGE_MESH=-1,-1,-1,-1,-1,0,-1,-1`.

### 13. Music selection

No player choice. Menu: loops `menumsc.wav`. Race: `raser.ini [MUSIC] LAST` round-robin over `COUNT=6` (`M_DISCO1, M_MOBIE1, M_EIGHTY1, M_FUNKY1, M_MOBIE2, M_REVENGE1`), `idx=LAST+1`, out of range -> 0, written back at race start, also on an aborted race. Shipped `LAST=2`, so the first race uses index 3. `[MAPS]` arg 9 is parsed but has no reader. Details in `audio.md` (music section) and `startup-flow.md` S.3, S.4.

### 14. Language

| Part | Fact | Evidence |
|---|---|---|
| Race texts | `language.ini [SETTINGS] LANGUAGE` 0 `[NEDERLANDS]`, 1 `[ENGELS]`, 2 `[DUITS]`, other value fatal | `S:0x458bc0` |
| Table | `TEXT_COUNT=69`, range 0..200 or fatal; each `<i>` max 255 chars, stride 0x100 at `0x6fd14c`; missing key fatal | `S:0x458bc0` |
| Shipped | `LANGUAGE=0`. No writer in menu.exe or spel.dat; global `0x6fd144` written once, no other absolute reference (`disassembly.asm` one hit), so nothing but the text table switches | |
| Data quality | `[ENGELS]` and `[DUITS]` are partial: e.g. `[ENGELS]` 4 `GETANKT`, 5 `KOSTEN: DM %d`, 12 `STRAßENWACHT`; `[DUITS]` 30 `NIEUW RONDE RECORD!`, 42 `GEARRESTEERD` | `language.ini` |
| Menu | Dutch only. `menucaps.ini`, `static.ini`, `menu.ini [MENUSTRINGS]` and baked TGA text have no language key; `menu.exe` has no such string (only VCL `SYSTOOLS_STRINGS_ENGLISH`) | `strings.csv` |
| Installer | Registry `CurrentLanguage=NL`; no game module reads it | `startup-flow.md` S.6 |

## Inferred

- **Chase replay skip is an oversight, not a feature.** `CheckChaseQualify` lacks the `next == FTrackIx` guard that the two race paths have. Keep it: the brief is original behaviour. Replaying Rotterdam with `next=5` gives `next=6` and skips Wenen.
- **Settled: the download car is not the DeLorean.** That was inferred from the disc's data chain `[char8] indexingame=7` -> `car_cfg` row 7 -> `TOURNAMENT_BONUS`, and it was wrong. The car update settled it: its row 7 is the truck, De Schaduw (section 9).
- **Damage visuals carrying across characters and players** looks unintended but follows from the shipped code path (section 12).
- **Consequences for the port (mine, not original behaviour):**
  - Keep the RCR byte format and `menu.ini`/`game.ini` semantics in the VFS, so saves stay byte-compatible and logic stays testable against this document. Enumerate `save*.rcr` case-insensitively.
  - The original clears `Data+0xD0` flags by restarting the process per race. A one-page menu must zero them, `PlayerPos` and the rank list at each race return.
  - Persist at the same moments as the original or earlier: a browser tab close has no `DataDestroy`, so also save after results and after purchases. This only widens safety, the data stays the same.
  - Dialog backups (`.BAK`) can be an in-memory snapshot, as long as Cancel restores all players.
  - Internet button cannot function; keep it locked with the original texts (button in `menu-forms.md` S.12). The download car and track 9 need no port rule: with the updates' files they open by the original's own tests (`GameData.quickCharAvailable`, `GameData.trackFilesExist`, `quickTrackAvailable` in `source/menu/data.js`).

## Unknown

- No RCR sample exists; 227 bytes is computed from writers. No Tour was ever run, so all rules here are static.
- Equal-time ordering: `M:0x48002c` compare and the VCL sort were not checked for stability. Only matters when two cars share a time in ms.
- Top-level handling of the `Unable to load` exception at start-up was not traced.
- Whether the Davilex download page offered more than the two updates kept in `original-game-decompiled/original/updates/`. `DOWNLOADURL=http://www.davilex.nl/cgi-davilex/frames/produkt_inlog.cgi?set=a2r4`.
- Numeric meaning of `DAMAGE_VALUE` floats beyond the writer; no reader found by absolute address. `DAM<i>`/`VAL<i>` for racers read by `S:0x44a230`, use beyond mesh re-apply not traced.
- Whether `[RACERS]` slot or `position` were meant for a later feature; no reader in the menu.

## Checklist

- [ ] Euro per Tour character, start 0, never negative, effective cap 999,999
- [ ] Turbo per Tour character, start 0, range 0..100, carries over after a finished race
- [ ] Money and turbo taken from `game.ini` only when finished
- [ ] First-place bonus +2500 on every win, replays too, `TfrmWinNormal` label
- [ ] In-race coins +100/+500/+1000, flitspaal +100, flitser -50 (spel.dat)
- [ ] No prize money, checkpoint money, radar money
- [ ] Garage: 5 items, wrap, Motor default, prices 2300/1700/1500/2300/250
- [ ] Buy rules, `TfrmNoMoney`, `PEEP`, button enable rules
- [ ] Turbo oil +10 per 250, repeatable, disabled at 100
- [ ] Tune-up flags to `[PLAYER] MOTOR/BANDEN/ABS/VERSNELLINGSBAK`
- [ ] Flags cleared after finished race only; aborted race keeps them
- [ ] Stat pips with deltas, `klrondje`/`blind_up`/`redin_up`, turbo pips `Trunc(T*9/100)`
- [ ] Garage voice `CGR07`/`CBR07` on return from Tour
- [ ] Quick Race: all tune-ups 1, money 0, turbo 100, no career change
- [ ] No repair shop; numeric damage 0 at each race start
- [ ] `DAMAGE_MESH` and racer `DAM<i>` persist in `game.ini` from last finished race
- [ ] Tour order of 9 tracks, 3 chases, difficulty-based qualify table
- [ ] Rank 0 / qualify / fail rules, chase rule, unguarded chase advance
- [ ] RR_WINRACE on escape from Tour position 8, `TfrmWinFinal`, `ch<NN>.avi`
- [ ] Track screen selection and max track; replay of reached tracks
- [ ] Difficulty free to change between races, stored in Settings
- [ ] Chase limit 92/71/62 s plus checkpoint extensions
- [ ] Five Tour characters with independent results, shared `FTrackIx`
- [ ] Defaults Kat (Tour), Tommie (QR); `TourStarted` routing
- [ ] Eight QR positions, police car always free
- [ ] D.T. Harry unlock once per player, voice `unlock`, `TfrmUnlock`, auto-select
- [ ] Chase tracks in QR unlocked by any character reaching them
- [ ] Download car and track 9 open by the original's rules with the updates' files; locked with their texts without them
- [ ] Opponents = cars 0..3 skipping the player's, replaced by 4
- [ ] Results rank by time, 5 rows, `double racers` check
- [ ] Global best-lap table, 10 tracks, seeds, name dialog, 12 chars, format `%d:%.2d:%.2d`
- [ ] Per-league `[BEST TIMES]` written by spel.dat, kept in `game.ini`
- [ ] Up to 5 players, lowest free number, name rules, delete rules, char button art
- [ ] Player dialog Cancel restores all files
- [ ] RCR 227 bytes, exact layout; settings and controls per player
- [ ] Save at menu exit, Player dialog open, new player
- [ ] `menu.ini` CURRENTPLAYER, PREVSTATE, EXITCODE, HIGHSCORES
- [ ] Race music round-robin via `[MUSIC] LAST`, menu loop `menumsc.wav`
- [ ] Race texts from `language.ini` with 3 sections, 69 entries; fatal rules
- [ ] Menu Dutch only; `[Portraits]` 0..7 by car; character art by static index
