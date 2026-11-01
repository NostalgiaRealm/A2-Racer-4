# A2 Racer 4: game content inventory

> **Correction, 2026-10-31.** This note was written against the disc 1.01 snapshot, before Davilex's two official updates were found in the installation ([`../provenance.md`](../provenance.md), [`../../original-game-decompiled/original/updates/README.md`](../../original-game-decompiled/original/updates/README.md)). So it was out of date on track 9 (no files, locked) and car 7 (unreachable, a DeLorean). Fixed in place below: sections 1.2, 1.3, 1.4, 2.1, 2.4, 2.5, 3.3, Inferred, Unknown and the checklist. The rest of the note is as it was written, for the disc. The original has not been run with the updates.

What content exists and what is reachable. INI files are in `original-game-decompiled/original/install/`, the updates' new and changed files in `original-game-decompiled/original/updates/installed/`. `S:0x...` = spel.dat, `M:0x...` = menu.exe. Sibling documents are cited, not repeated: `startup-flow.md` (launch, INI flow), `menu-forms.md` (screens), `gameplay-systems.md` (rules, AI, police), `simulation-core.md` (VDYNS), `audio.md`, `hud-overlay.md`, `input.md`, `win32-surface.md`.

Static analysis only; nothing was run.

## Confirmed

### 1. Tracks and environments

#### 1.1 Identity and rules (`static.ini [TRACK0..9]`, `raser.ini [MAPS]`)

| Ix | NAME | TYPE | Laps | QUALIFYPOSITION d0,d1,d2 | British | MAPS arg0 | Track mode arg14 | Ambient RGB arg11-13 |
|---|---|---|---|---|---|---|---|---|
| 0 | Amsterdam | Stadsrace | 2 | 3,2,2 | 0 | 1 city | 0 normal | 50,50,50 |
| 1 | Rotterdam | Stadsachtervolging | 2 | 9,9,9 | 0 | 1 | 1 chase | 70,70,70 |
| 2 | Scheveningen | Kustrace | 2 | 4,3,2 | 0 | 1 | 0 | 128,128,128 |
| 3 | Wenen | Stadsachtervolging | 2 | 9,9,9 | 0 | 1 | 1 chase | 128,128,128 |
| 4 | Berlijn | Stadsachtervolging | 2 | 9,9,9 | 0 | 1 | 1 chase | 70,70,70 |
| 5 | Hamburg | Havenrace | 2 | 1,0,0 | 0 | 1 | 0 | 70,70,70 |
| 6 | Frankfurt | Vliegveldrace | 2 | 0,0,0 | 0 | 1 | 0 | 70,70,70 |
| 7 | BodenSee | Drielandenrace | 2 | 3,2,1 | 0 | 1 | 0 | 70,70,70 |
| 8 | Munchen - Wenen | Snelwegrace | 1 | 2,1,0 | 0 | 0 highway | 0 | 60,60,60 |
| 9 | Download-race | Country-race | 2 | 0,0,0 | 1 | 1 | 0 | 66,66,66 |

- `INDEXINGAME` equals the static index for all 10.
- `CHASETIME` is `170111,150111,110111` for 1, 3, 4 and 0 for the rest. It only decides `IsChase` (`startup-flow.md` section 3). The real chase timer is section 4 below.
- `[MAPS]` has 12 rows (`count=12`). Rows 10, 11 (`etappe10`, `etappe11`) have no static.ini entry, no `etappe*` files and no `e10_anim.ini`, `e11_anim.ini`.
- `[MAPS]` arg 8 is the placeholder `TRACK n`, and arg 9 (music index) has no reader (`startup-flow.md`). Music is round-robin over `[MUSIC]` `M_DISCO1, M_MOBIE1, M_EIGHTY1, M_FUNKY1, M_MOBIE2, M_REVENGE1` (`audio.md`), so no track has its own music.
- `[ETAPPE] DIRECTION` is absent from shipped `game.ini`, value 0 (`startup-flow.md`).

#### 1.2 Environment files per track

All textures come from `[MAPS]` args 2-5 and the same names in `etappeN.ini [textures]`: `e0N_weg` road, `e0N_gras`, `e0N_gra2`, `e0N_vang`. Sky and car reflection from `e0N_anim.ini [sky]`, `[car_reflect]`. Wait screen from `raser.ini [wait_hi]`, `[wait_lo]`. Unaccelerated sky `scrl_lo`, `scrl_hi` is shared (args 6, 7). `[PALET]` is 8-bit/16-bit palette: `e02_pl16.pcx` for 16-bit on all.

| E | Sky mesh, texture | Reflection | Wait screen | `.ini` object rows | Story text location hint (`static.ini`) |
|---|---|---|---|---|---|
| 0 | `skybox00.d3d`, `sky00.pcx` | `skyref02` | `e00_w_hi` | 211 | Grachten, smalle straatjes, trams |
| 1 | `skybox01`, `sky01` | `skyref01` | `e01_w_hi` | 167 | Rotterdam, politienet sluit |
| 2 | `skybox02`, `sky02` | `skyref02` | `e02_w_hi` | 107 | Strand van Scheveningen |
| 3 | `skybox03`, `sky03` | `skyref02` | `e03_w_hi` | 145 | Dwars door Wenen |
| 4 | `skybox04`, `sky04` | `skyref02` | `e04_w_hi` | 229 | Berlijn, ultimatum |
| 5 | `skybox05`, `sky05` | `skyref05` | `e05_w_hi` | 80 | Haven, schepen, dokken, kades |
| 6 | `skybox06`, `sky06` | `skyref06` | `e06_w_hi` | 128 | Vertrekhal, hangar, banen, jumbojets |
| 7 | `skybox07`, `sky07` | `skyref02` | `e07_w_hi` | 103 | Bergen, bossen, tunnels, bochten |
| 8 | `skybox08`, `sky08` | `skyref08` | `e08_w_hi` | 135 | Snelweg, bergen, haarspeldbochten, tunnels |
| 9 | `skybox09`, `sky09` | `skyref02` | `e09_w_hi` | not counted, `etappe9.ini` comes with the track update | None (`story=***nvt***`) |

Menu art per track (`extracted/game-archives/menurcs`): `trname00..09`; `ttc0T_00..05` for 9 tracks (54 images), `qtc0T_00..05` for 10 tracks (60 images). See `menu-forms.md` sections 17, 19.

Weather: no track setting for weather exists in `[MAPS]`, `static.ini` or `e0N_anim.ini`. `game.ini [GFX OPTIONS] part_rain=1` goes to `DAT_006fb91c` (`S:0x449b30`), whose only read stores it in an emitter field at +0xd0 (`S:0x462f70`, from `S:0x4625b0` in `init_game`). The particle id table in `gameplay-systems.md` section 17 has no rain id. `FOG=0` shipped.

#### 1.3 Track size and placed content

Parsed from `etappeN.*` with the layouts in `docs/formats/game-data.md`.

| E | Chunks | `.omp` objects | Cops, anim | Supercop `humvee_ANIM` | Flitspaal `g_fltsrp` | Blockade cars, path type | Start truck `truck_ANIM` |
|---|---|---|---|---|---|---|---|
| 0 | 363 | 1037 | 2, police01 | 0 | 4 | 3, type 14 | 1 |
| 1 | 507 | 616 | 10, police01 | 1 | 4 | 14, type 14 | 1 |
| 2 | 400 | 628 | 4, police01 | 0 | 4 | 3, type 14 | 1 |
| 3 | 645 | 991 | 10, police02 | 1 | 4 | 17, type 17 | 1 |
| 4 | 634 | 1015 | 10, police02 | 1 | 4 | 18, type 17 | 1 |
| 5 | 326 | 328 | 0 | 0 | 0 | 0 | 1 |
| 6 | 334 | 584 | 0 | 0 | 0 | 0 | 1 |
| 7 | 477 | 371 | 0 | 0 | 5 | 0 | 1 |
| 8 | 607 | 770 | 1, police02 | 0 | 4 | 7, type 17 ×6 + type 18 ×1 | 1 |
| 9 | 401 | 778 | 3, police01 ×2 + police02 ×1 | 0 | 5 | 3, type 14 ×1 + type 17 ×2 | 1 |

Row 9 comes from the track update (`etappe9.*`); disc 1.01 has no such files. It also places ramp `a_ramp00` 1 and banner `a_zepp00` 1. `etappe9.pth` is 480 bytes.

Path types and meaning: `gameplay-systems.md` section 15. Type 12 (E0: 5, E1: 7) has no code. Type 0 (E3: 2, E4: 1, E8: 1) is update-only.

Pickups per track (`.omp` names; handlers `OnPickup_*_ANIM` in `bonus.dso`, `gameplay-systems.md` section 16):

| E | 1pts | 5pts | 10pts | reps | repb | turbs | turbb | godm | stop | fastf | Total |
|---|---|---|---|---|---|---|---|---|---|---|---|
| 0 | 6 | 10 | 2 | 18 | 2 | 19 | 1 | 1 | 1 | 0 | 60 |
| 1 | 0 | 15 | 1 | 16 | 3 | 0 | 0 | 2 | 0 | 0 | 37 |
| 2 | 13 | 8 | 2 | 8 | 5 | 16 | 2 | 2 | 3 | 4 | 63 |
| 3 | 10 | 5 | 5 | 14 | 2 | 0 | 0 | 0 | 0 | 0 | 36 |
| 4 | 32 | 8 | 2 | 18 | 0 | 0 | 0 | 5 | 0 | 0 | 65 |
| 5 | 0 | 5 | 5 | 13 | 6 | 16 | 4 | 5 | 2 | 5 | 61 |
| 6 | 8 | 9 | 0 | 2 | 3 | 1 | 1 | 1 | 1 | 2 | 28 |
| 7 | 12 | 8 | 6 | 26 | 2 | 19 | 4 | 1 | 4 | 3 | 85 |
| 8 | 10 | 13 | 3 | 2 | 7 | 0 | 6 | 3 | 2 | 2 | 48 |
| 9 | 10 | 3 | 5 | 12 | 1 | 10 | 0 | 2 | 1 | 1 | 45 |

Row 9 comes from the track update. Chase tracks 1, 3, 4 have no turbo, freeze or fast-forward pickups. `etappe2.ini [objects]` labels: `pw_1pts` Bonus - 100 Euro, `pw_5pts` 500 Euro, `pw_10pts` 1000 Euro, `pw_reps`/`pw_repb` Small/Big Repair, `pw_turbs`/`pw_turbb` Small/Big Turbo, `pw_godm` Invulnerable, `pw_stop` Freeze, `pw_fastf` Fast Forward.

Other placed dynamic kinds (total across E0-8, tracks): `a_ramp00` 20 (0,1,3,4,7); `a_zapp00` 14 (1,3,4); start/finish banner `a_zepp00` 8 (0-7), `a_zepp01`, `a_zepp07` (8); `b_npol1` politie auto obstakel 25 (0,1,2); `b_dpol1` German police breakaway 64 (3,4,5,8); `b_hek1` 130; `b_crat1` 44, `b_crat2` 13; `b_vuil1` 30; `b_oil1` 26, `b_oil1e` 3; `b_mark1` 27; `b_grb1` 23; `b_halt1` 21; `b_beer1` 15; `b_stei1` 14; `b_trl2` 12, `b_trl1` 5; `b_phon` 9; `b_toil1` 8; `b_truck1` 7; `b_cont1` 5; `b_pipe1` 5; `b_vent1` 1; `g_palet2` 2; `truckcol` 5. Behaviour and masses: `gameplay-systems.md` section 17. The 802 distinct `.omp` names are otherwise track scenery and colliders.

#### 1.4 Track availability

- Tour: 9 stages (section 3.1).
- Quick Race: list of 10. A track needs all 7 files `etappe<ix>.cmp .dmp .ini .omp .pmp .pth .rmp` next to the exe. Chase tracks also need any Tour character to have reached them (`M:0x461a4c`, `FUN_0049c78c`, `menu-forms.md` section 19).
- Track 9 Download-race; the menu's name art `trname09` reads "Country etappe", and that is what the player sees. The track update adds all seven `etappe9.*` files, so the rule above opens it with no change of code: Quick Race position 9, not in the Tour. `[MAPS]` row 9 is a city track in normal mode, ambient 66. `BRITISH=1`, the only track with it. `etappe9.ini` labels objects such as Uffington Horse, Ave Red Lion: an English country track. On the disc already: `e09_anim.ini`, `static.ini [TRACK9]`, `[MAPS]` row 9, `traffic.ini [Traffic Track 9]`, `behavior.ini [Track 9 Behaviors]`, `trname09`, `qtc09_*`, and 140 distinct `e09_*`/`e9_*` names in `rcs` (for example `e09_weg`, `e09_w_hi`, `e09_cess`, `e9_trein`). `cops.ini` has no track 9 section (ends at 8); boot and the launch check ran with no message on that. Disc 1.01 without updates: no `etappe9.*` in the install or in `original/disc/Data` (checked by listing), so it shows as locked in Quick Race and the race cannot start. `[GENERAL] DOWNLOADURL=http://www.davilex.nl/cgi-davilex/frames/produkt_inlog.cgi?set=a2r4`.
- `.hbp` files (`etappe1.hbp`, `etappe5.hbp`) exist on disc only, 8 bytes, no reference (`game-data.md`).

### 2. Cars

#### 2.1 Player characters and their cars

Joined from `static.ini [charN]`, `car_cfg.ini [league0..2]`, `L%d_anim.ini` (the three files are byte-identical, same MD5). `CAR` = `indexingame`, selects `RACER_<CAR>` and `overlay<CAR>.ini` (`startup-flow.md`, fatal outside 0..10).

| Char | Name (`static.ini`) | CAR | RefName | AnimName | Anim entries 0, 1, 2 | CarType | Driver | Mass | Damage | Pips acc/spd/hnd/brk | Tour | QR |
|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 0 | Edgar de Flits | 0 | RACER_0 | RACER_1 | `checker`, `che_wie`, `che_ram` | 0 Checker Cab | EDGAR | 600 | `dam_racer0` | 2/4/4/3 | yes | yes |
| 1 | Tommie 'El Nino' | 1 | RACER_1 | RACER_2 | `hotrod`, `hot_wie1`, `hot_ram` | 1 Hotrod | TOMMIE | 600 | `dam_racer1` | 5/3/4/2 | yes | yes, default |
| 2 | James Brons | 2 | RACER_2 | RACER_3 | `countach`, `coun_wie`, `coun_ram` | 5 Countach | JAMES | 600 | `dam_racer5` | 4/5/5/2 | yes | yes |
| 3 | Katharina 'Kat' | 3 | RACER_3 | RACER_4 | `merceslk`, `mer_wie`, `mer_ram` | 3 Mercedes SLK | KATHARINE | 600 | `dam_racer3` | 4/4/4/4 | yes, default | yes |
| 4 | Barbarally | 4 | RACER_4 | RACER_5 | `buggy`, `bug_wie`, `bug_ram` | 4 Buggy | BARBARA | 600 | `dam_racer4` | 3/3/3/3 | yes | yes |
| 5 | D.T. Harry | 5 | RACER_5 | RACER_6 | `humvee`, `hum_wie`, `hum_ram`, also `humveeb` | 2 Humvee | RATTER | 600 | `dam_racer2` | 5/5/5/5 | no | locked, unlock below |
| 6 | politie-auto | 6 | RACER_6 | RACER_7 | `politie`, `POL_WIE`, `POL_RAM` | 6 | TELEBUGGY | 600 | `dam_politie` | 3/3/3/3 | no | yes, no lock found |
| 7 | hunny | 7 | RACER_7 | DOWNLOADCAR | `TRU`, `TRU_WIE`, `TRU_RAM` | 42 | KENT | 1500 | `dam_truck` | 0/0/0/0 | no | not in any list |
| 8 | downld (art: De Schaduw) | 7 | RACER_7 | DOWNLOADCAR | same | 42 | KENT | 1500 | `dam_truck` | 5/5/5/5 | no | yes, opens with the car update |

- Tour list `[TOURRACE] CHARIX=0,1,3,4,2`, `DEFAULTCHAR=2` is a list position (`startup-flow.md`), so default Kat.
- Quick Race list `[QUICKRACE] CHARIX=0,1,5,6,3,4,2,8`, `DEFAULTCHAR=1` is position, so default Tommie. Position 2 Harry locked. Position 7 `downld` opens with the car update.
- Harry unlock: Tour win (`RR_WINRACE`) with any character, `LOCKEDCHARTEXT=U ontgrendelt D.T. Harry door een karakter uit te spelen!` (`menu-forms.md` section 5).
- Download char: needs `L0_ANIM.INI [DOWNLOADCAR] Count > 0`. The car update renames `TOURNAMENT_BONUS` to `DOWNLOADCAR` in `l0_anim.ini`, `l1_anim.ini`, `l2_anim.ini` (`0=TRU.d3d,l1racer2.pcx`, `1=TRU_WIE.d3d,l1racer2.pcx`, `2=TRU_RAM.d3d,l1racer3.pcx`) and adds `overlay7.ini`, which car 7 selects (`startup-flow.md`). So the rule opens it with no change of code: car 7 is the truck, "De Schaduw" on the art. Also from the car update: wheel positions 25 to 41 (dummy) and 42 (truck) in `car_cfg.ini`, `car_snd.ini [Car42]`, `damage.ini` `dam_truck` (car row 10, mesh row 10, `truck_fase1` rows 115 to 128, count 129).
- Disc 1.01 without updates: rows 7 and 8 are `TOURNAMENT_BONUS` on `DeLorean`, `DeLo_wie`, `DeLo_ram`, CarType 7, driver PIET, `dam_dummy`. `[DOWNLOADCAR]` and `overlay7.ini` are absent, so car 7 is unreachable.
- All league rows: SoundType `hoog4`, Price 5000 (no reader cited; garage prices come from `[TUNEUPS]`).
- Name plates `chara_00..08` show: Edgar de Flits, Tommie 'El Nino', James Brons, Kat(harina), Barbara 'Barberally', D.T. Harry, De politie, Miss Mariah Honeybunny, De Schaduw (`menu-forms.md` section 8).
- Art: `ch_00..05`; `qr_ch00..06, 08`; `res_ch`, `win_ch` 8 each; `los_ch00..04`. Final movies `ch00..ch04.avi` for the 5 Tour characters.
- `game.ini [Portraits]` 0..6 = `PLAYER_0..6`, HUD meshes `player_0..6.d3d`. `overlay0..6.ini` exist. The car update adds `[Portraits] 7=PLAYER_7`, `gen_anim.ini` `PLAYER_7_PORTRAIT` (`player_8.d3d,overlay.pcx`) and `overlay7.ini`.
- Per-car physics: `simulation-core.md` VDYNS table; the car update changes record 7 only. Mesh pieces for damage: `CHE_A00..18`, `HOT_A00..09`, `HUM_A00..12`, `HUM_B00..11`, `MER_A00..09`, `BUG_A00..09`, `COU_A00..04`, `POL_A00..08`, `PLZ_A00..08`, `TRU_A*` (car update), plus `*_BOT`, `*_DRV` in `gen_anim.ini`.

#### 2.2 AI opponents

- Count: `intel.ini [GENERAL] NrOpponents=4`, comment says max 6, enforced `<= 6` (`startup-flow.md`, `ini_load_all`).
- Selection `S:0x42de60`: index counts up from 0, skipping `CAR` (`DAT_006fba5c`), name `RACER_%d`. With 4 opponents the AI cars are always the first four of RACER_0..4 excluding the player. So cars 5, 6, 7 are never AI racers.
- Opponents are disabled on chase tracks: the menu writes `[OPTIONS] OPPONENTS=0`, and `S:0x42de60` sets the count to 0 (`Opponents are disabled`). Player grid slot: `NrOpponents`, or 0 with none (`S:0x44aa20`).
- Field: 5 cars in non-chase races, and the results screen has 5 rows (`menu-forms.md` section 20).
- `opponent.ini` holds `[Racer 0..3 Level 0..2]`. Key is the etappe 0..9 (`gameplay-systems.md` section 10), Level is league (`S:0x419afe` reads `DAT_006fb958`). All lines use state `IRRITATING`. Every line has 10 `TARGETPOS` values by race progress decile.

#### 2.3 Traffic

`car_cfg.ini [traffic]` rows with `gen_anim.ini` meshes (texture `cars01`) and `e06_anim.ini` for the airport set. Descriptions are the developers' comments in `car_cfg.ini [light_positions]`. Driver `KLAAS`, Dynamics 0, `dam_dummy`, price 5000.

| Row | RefName | Anim, mesh | Comment | Sound | Mass | CarType |
|---|---|---|---|---|---|---|
| 4 | VEHICLE01 | VEH_01, `veh_01` | witte truck | loop12 | 6000 | 25 |
| 6 | VEHICLE02 | VEH_02, `veh_02` | lichtblauwe twingo ofzo | loop12 | 600 | 26 |
| 3 | VEHICLE03 | VEH_03, `veh_03` | gele gemeente truck met laadbak | loop8 | 6000 | 27 |
| 7 | VEHICLE04 | VEH_04, `veh_04` | wit autootje, honda civic | loop12 | 600 | 28 |
| 1 | VEHICLE05 | VEH_05, `veh_05` | beige mercedes taxi | hoog4 | 600 | 29 |
| 5 | VEHICLE06 | VEH_06, `veh_06` | volkswagen passat stationcar | toeren1 | 600 | 30 |
| 2 | VEHICLE07 | VEH_07, `veh_07` | donkere alfa romeo | loop8 | 600 | 31 |
| 8 | VEHICLE08 | VEH_08, `veh_08` | blauwe peugeot 30-nogwat | loop8 | 600 | 32 |
| 11 | VEHICLE09 | VEH_09, `veh_09` | wit mercedes busje | loop8 | 900 | 33 |
| 12 | VEHICLE10 | VEH_10, `veh_10` | donker blauwe ford KA | loop8 | 900 | 34 |
| 13 | VEHICLE11 | VEH_11, `veh_11` | gele streekbus | loop8 | 900 | 35 |
| 14 | VEHICLE12 | VEH_12, `veh_12` | container truck | loop8 | 900 | 36 |
| 15 | VEHICLE13 | E06_VEH_1, `e06_buss` | geel/zwart geblokt personen busje | loop8 | 900 | 37 |
| 16 | VEHICLE14 | E06_VEH_2, `e06_fire` | gele fire-truck voor op vliegveld | loop8 | 900 | 38 |
| 17 | VEHICLE15 | E06_VEH_3, `e06_pull` | bagage karretje | loop8 | 900 | 39 |
| 18 | VEHICLE16 | E06_VEH_4, `e06_rove` | gele rover jeep met checkers en zwaailichten | loop8 | 900 | 40 |
| 19 | VEHICLE17 | E06_VEH_5, `e06_lift` | bagage-lift-auto-dingetje voor op vliegveld | loop8 | 900 | 41 |

Per track: `traffic.ini`, already tabulated in `gameplay-systems.md` section 14. Slots max 50. `traffic.ini` also has track 9. Track 6 is the only track using VEHICLE13..17, which is also the only anim file defining them.

#### 2.4 Police and supercop

| Row | RefName | Anim, mesh | Mass | Used by |
|---|---|---|---|---|
| 0 | COP0 | PATH_POLITIE_ANIM, `police01` | 600 | NL. Named by `.omp` `police01_ANIM` type 9 (`S:0x4536e0` builds `COP%c`), and blockade path types 13..15 |
| 9 | COP1 | PATH_POLIZEI_ANIM, `police02` | 600 | German. Named by `.omp` `police02_ANIM`, and blockade path types 16..18 |
| 20 | COP2 | POLICE01_ANIM, `pol_lo_0` (low poly) | 600 | `cops.ini [Cop Types] 0`, sound loop8 |
| 21 | COP3 | POLICE02_ANIM, `plz_lo_0` (low poly) | 600 | `cops.ini [Cop Types] 1`, sound loop8 |
| 10 | SUPERCOP | HUMVEE_ANIM, `humvee`, `hum_wie`, `hum_ram`, `humveeb` | 1100 | `cops.ini [Cop Types] 2`, `.omp` `humvee_ANIM` type 28 on E1, E3, E4. Driver HUMVEE, CarType 24, Dynamics 10, `dam_supercop`, price 100000 |

- `[league*] 8` is `RACER_8`, anim RACER_8, mesh `polizei`, driver ABU, mass 1500, `dam_polizei`: no character reaches it.
- Also `gen_anim.ini` `[mpolizei]` mesh `police01`, loaded by path types 2, 8, which are absent from all `.pth` (`gameplay-systems.md` section 15).
- Cop lights `coplights`: `bluelite.d3d`. Siren `POLITIE_SIRENE`.
- Radio and portraits: `communi.ini` sections HARRY, POLICE, SHADOW, HONNEY, EDGAR, JAMES, BARBARALLY, TOMMY, KAT.
- Regular cops 37 total (E0 2, E1 10, E2 4, E3 10, E4 10, E8 1), plus 3 on E9 from the track update. Tactics: only `Default=0,1` is used (`gameplay-systems.md` section 11).

#### 2.5 Helicopter and other moving path objects

Meshes per track from `e0N_anim.ini`; path counts from `.pth`; code `gameplay-systems.md` section 15. Etappe 9 (`etappe9.pth`, track update) is not counted here.

| Path type | Anim name in code | Meaning (`pathtypes` in `etappeN.ini`, code file) | E3 | E4 | E6 | E7 | E8 |
|---|---|---|---|---|---|---|---|
| 5 | `C_HELI`, `C_LBLADE`, `C_SBLADE`, sound `HELI` | helicopter, `pth_heli.cpp` `S:0x463a60` | | 2 paths: `E04_cess`, blades `E04_Absc` | | 1 path: `E07_cess`, blades `E07_Absc` | |
| 7 | `a_VLIEGT`, sound `PLANE` | plane | 1: `E03_boin` | 2: `E04_zepp` | 1: `e6boing6` | | |
| 4 | `C_TREIN`, sound `TRAIN` | train | | 2: `E04_bahn` | 1: `E6skylin` | | 2: `e08_ice` |
| 3 | `e00_rond` | boat (`pathtypes`) | | 1: `E04_Boot` | | | |
| 6 | traffic type, sound `HOOG4` | path car, E1: 1 path | | | | | 1 path |

- Helicopter has no gameplay link: it moves along its path only (`gameplay-systems.md` section 11). `S:0x463a60` attaches `C_LBLADE` with all-zero float args and `C_SBLADE` with 0, 0.026, 7.06, -77.58 (hex constants `0x3cd4fdf4`, `0x40e1eb85`, `0xc29b2b02`).
- E3 defines `c_HELI` as `E03_Lkwn`, `C_TREIN` as `e03_tram`, `e00_rond` as `E03_absc`, but only type 7 and 0, 17 paths exist there, so these are not instantiated by path code.
- `E04_Absc` and `E07_Absc` are byte-identical. `E04_cess`, `E07_cess`, `E09_cess` have different hashes but the same size: 161 vertices, 192 triangles, bounding box 154.6 × 50.9 × 154.8 units (racer `checker`: 20.3 × 12.0 × 52.5).

#### 2.6 Rows with no route into a race

| Row | Mesh | Evidence |
|---|---|---|
| `[league*] 10..12` CARAVAN, VOUWWAGEN, JETSKI | TRAILER01..03: `trailer1`, `trailer2`, `trailer3`; dyn 0, mass 300 | `[Connected Object Types] count=0`, `[Connected Object Assignments] count=0`; `S:0x42b550` returns early with count 0. The meshes still load through `L%d_anim.ini [Config]` |
| `[league*] 9` RACER_9, driver CHICK | anim `veh_08`, mass 1500 | No character has `indexingame` 9; AI only uses 0..4 |
| `[league*] 8` RACER_8 | see 2.4 | Same |
| `[CarNames]` `CarType1..13` | placeholder text | Not names shown to the player |
| `[wheel_positions]`, `[light_positions]` rows 8, 10..20: vage peugeot, Alfa, London Bus, Truck, Passat, Twingo, Honda Civic, BMW Z3, Aston Martin DB7, TVR, Rolls Royce, Lamborghini Diablo | Position data only | No car row has CarType 8 or 10..20. A comment on the Rolls Royce row says these cars are not really used in A2 IV |
| `garage.ini` (Trabant, Astra, VW, BMW, Porsche, Diablo prices) | | No `garage` string in spel.dat `strings.csv`; `garage.ini` absent from the module reference table in `game-data.md` and from menu.exe `strings.csv` |

### 3. Game modes

There is no mode concept in `spel.dat`; the menu writes INI values (`gameplay-systems.md` section 21). `RaceMode` in menu.exe: 1 Quick Race, 2 Tour (`M:0x49da44`). These are the only two entries on `TfrmMainScreen` (`optTour`, `optQuickRace`).

#### 3.1 Tour

9 stages in order, `[TOURRACE] TRACKIX=2,0,1,7,8,3,5,6,4`. Qualify if the 0-based finish position `<= QUALIFYPOSITION[difficulty]` (`startup-flow.md`, `M:0x4a5624`). Position 0 pays `FirstPlaceBonus=2500`.

| # | Track | Kind | Needed position, 0-based d0/d1/d2 |
|---|---|---|---|
| 1 | Scheveningen | Race | 4/3/2 |
| 2 | Amsterdam | Race | 3/2/2 |
| 3 | Rotterdam | Chase | Finish in time |
| 4 | BodenSee | Race | 3/2/1 |
| 5 | Munchen - Wenen | Highway race, 1 lap | 2/1/0 |
| 6 | Wenen | Chase | Finish in time |
| 7 | Hamburg | Race | 1/0/0 |
| 8 | Frankfurt | Race | 0/0/0 |
| 9 | Berlijn | Chase, final | Finish in time, then `TfrmWinFinal` |

- Per character: saved progress `CharResult` per Tour character (5). Fields: Euro, next track, turbo, tune-ups (`startup-flow.md` section 6).
- Garage, Tour only, one race each. `[TUNEUPS]` `name, price, dspeed, dacc, dbrakes, dhandl`: Motor 2300 +3 +1 0 -1; Banden 1700 0 0 0 +4; ABS Bremsen 1500 0 0 +4 0; Getriebe 2300 +1 +3 0 -1; Turbo 250 0 0 0 0, adds `TURBOOILAMOUNT=10`, max 100.
- End: `ch<NN>.avi` and `winracetext`; Harry unlock.

#### 3.2 Quick Race

- Any available track, any available character. Difficulty screen is shared.
- Writes `MONEY=0`, `TURBO_AMOUNT=100`, `MOTOR=BANDEN=ABS=VERSNELLINGSBAK=1` (`startup-flow.md` section 3). Tour writes the bought state.
- Chase track in Quick Race: `TfrmResults` is skipped on return (`M:0x4a58a4`).

#### 3.3 Race kinds in spel.dat

| Kind | Switch | Tracks | Field |
|---|---|---|---|
| City race | arg0=1, arg14=0 | 0, 2, 5, 6, 7, 9 (track update) | Player + 4 AI. Cops on 0, 2, 9 only |
| Highway race | arg0=0, NRLAPS forced 1 | 8 | Player + 4 AI + 1 cop |
| City chase | arg14=1, `OPPONENTS=0` | 1, 3, 4 | Player alone against 10 cops, Supercop, blockades, traffic |

Laps come from the menu (`Track.NRLAPS`); `game.ini Nrlaps` (2 on disc 1.01, 1 from the car update) is overwritten. All 9 city tracks, 0..7 and 9, have 2 laps. No lap-count option, reverse option or mirrored track was found in `static.ini` or `menu-forms.md`.

#### 3.4 Other switches that are not modes

| Switch | Status | Evidence |
|---|---|---|
| `copland` | Non-zero is fatal with shipped data: car `COP` has no row | `gameplay-systems.md` section 21 |
| `demo=0` | Read, no gameplay branch found | `gameplay-systems.md` section 21, `S:0x449590` |
| `TWEAK_MODE=0`, `DEBUGON=0` | Developer | `raser.ini [HELPDESK]`, `setdebug.exe` |
| `PopupMenu1` `Money = 300`, `At last track`, `Unlock supercop` | Unreachable: the form has no `PopupMenu` | `menu-forms.md` section 13 |
| `Police`, `Traffic`, `Invulnerable`, `BonusCountDown` | `game.ini [OPTIONS]`, menu never writes them, so shipped values hold | `startup-flow.md` |

### 4. Difficulty

Menu `TfrmDifficulty`: Makkelijk 0, Normaal 1, Moeilijk 2, default `[DEFAULTSETTINGS] DIFFICULTY=1`. It becomes `[LEAGUE] league`. Separately, `[OPTIONS] difficulty=1` is shipped and never written by the menu (`startup-flow.md`), so the `Easy` branches of that variable (`CopsPerPlayerEasy`, traffic defaults) stay inactive in the shipped flow.

All consumers of `DAT_006fb958` (league) from `data_refs.csv`: `S:0x403490` rubber band, `S:0x40d6f0` chase start, `S:0x419300` dead `GAMEPLAY.TXT` writer, `S:0x419a30` opponent.ini, `S:0x429710` AI speed/RPM, `S:0x432d20` tweak save, `S:0x4492c0` config load, `S:0x449ea0` and `S:0x44ae80` records, `S:0x467f60` and `S:0x468ca0` league anims.

| Effect | Makkelijk 0 | Normaal 1 | Moeilijk 2 | Evidence |
|---|---|---|---|---|
| VDYNS record RACER_0..6 | 11,12,13,14,15,16,17 | 21,22,23,24,25,26,27 | 0,1,5,3,4,2,6 | `car_cfg.ini` |
| Max Speed km/h, stock/upgraded, cars 0-4, 6 | 100/115 | 115/130 | 130/145 | `simulation-core.md` |
| Max Speed km/h, car 5 Harry | 280/295 | 280/295 | 280/295 | same |
| Horsepower, stock/upgraded: Edgar | 80/85 | 80/95 | 95/105 | same |
| Tommie | 95/110 | 110/120 | 120/130 | same |
| James | 100/110 | 110/120 | 120/140 | same |
| Kat | 80/95 | 95/120 | 120/130 | same |
| Barbarally | 85/95 | 95/170 | 120/130 | same |
| Harry | 120/120 | 120/150 | 120/150 | same |
| Politie-auto | 80/90 | 100/110 | 120/120 | same |
| AI Max Speed multiplier | 90 % | 120 % | 200 % | `intel.ini`, `S:0x429a78` |
| AI Max RPM multiplier | 115 % | 80 % | 50 % | `intel.ini`, `S:0x429710` |
| AI Max Speed, derived (stock × multiplier) | 90 | 138 | 260 km/h | arithmetic |
| AI Max RPM, derived from 4500 | 5175 | 3600 | 2250 | arithmetic |
| AI skill word (corner speed) | NOVICE `60-a/15` | NORMAL `60-a/17` | NORMAL on etappe keys 0, 1; SKILLED `60-a/19` on keys 2..9 | `opponent.ini`, `S:0x403440` |
| AI TARGETPOS | Mostly 0, with targets 1..5 per racer and etappe | `1,0,1,0,...` | All 1 | `opponent.ini` |
| Rubber band, close, player > 17.5 m/s | Lead > 15 chunks: player speed - 5 m/s | Lead > 20: - 1.25 m/s | None | `intel.ini`, `S:0x403490` |
| Rubber band, far, player > 17.5 m/s | Lead > 40: - 12.5 m/s | Lead > 40: - 8.75 m/s | None | same |
| Next-car gap `[Level L] DISTANCE01,12,23,34,45` | 14,10,10,10,10 | 10,10,10,12,12 | 20,10,10,14,5 | `opponent.ini` |
| Qualify position | See 3.1 | See 3.1 | See 3.1 | `static.ini` |
| Chase timer, start and per checkpoint, s | 92 | 71 | 62 | `static.ini [CHECKPOINTTIME]` × `checkpoint_value=1000`, `startup-flow.md` |
| Records | `*_L0` | `*_L1` | `*_L2` | `S:0x449ea0` |
| League anims | `L0_anim.ini` | `L1_anim.ini` | `L2_anim.ini` | Identical files, no effect |

Not referenced by league or difficulty in shipped data: traffic per track (`traffic.ini`), placed cops, pickups, damage values. `dif_mod=4` is read with no branch found (`gameplay-systems.md` section 21). `ChaseTimeEasy/Hard`, `GiveUpDist`, `StopSpeed` are dead (`gameplay-systems.md` section 22).

### 5. Players, multiplayer, split-screen

**One human player. No multiplayer or split-screen code path exists.**

| Check | Result |
|---|---|
| Player car creation | `S:0x44e340` has one caller (`S:0x4294a0`), makes one car with type 1. Single `DAT_006fba5c`, `DAT_006fba58` |
| Racers | `S:0x42de60` makes only type 3 AI cars |
| Viewports | `S:0x4c09b0(10)` sets up the viewport array, then `S:0x4c0c30` adds one (log `add a viewport`). It has a single caller, `S:0x4c04b0`, at 3D init |
| Input | One `[INPUT]` set, one `DEVICE` (`input.md`, `startup-flow.md`) |
| INI | One `[PLAYER]` section with one `car`. `[RACERS]` holds only AI cars, `count` must be 6 |
| Imports, spel.dat | KERNEL32, USER32, WINMM, GDI32, DDRAW, DSOUND, DINPUT, ADVAPI32. No DPLAY, WSOCK, WS2_32 |
| Imports, menu.exe | USER32, KERNEL32, GDI32, COMCTL32, AVIFIL32, OLEAUT32, OLE32, RSC, ADVAPI32, VERSION, WINMM, DDRAW, SHELL32, DSOUND. Same absence |
| Strings | Zero hits in spel.dat `strings.csv` for `multi.?player`, `split`, `directplay`, `dplay`, `player ?2`, `2 ?player`, `tweespeler`, `ipx`, `modem`, `lobby`, `socket`. In menu.exe the only hits are VCL cursors `crHSplit`, `crVSplit` and `LoadPlayer`. `players` in spel.dat is the `communi.ini` section name (`S:0x48ae80`). `%s = NETWORK`, `Network is present` at `0x5b6158`, `0x5b61ec` |
| Manual | `Handleiding.pdf.txt`: zero hits for `multiplayer`, `netwerk`, `split`, `tegen elkaar`, `twee spelers`. Hint only |
| Menu | No multiplayer form among the 45 DFMs (`menu-forms.md` section 1). "Internet" only opens `DOWNLOADURL` in a browser |

`dplay*.dll`, `dpwsock*.dll` on the disc are part of the DirectX redistributable (`inventory/module_roles.csv`, role `directx`, inventory-only).

Profiles: `TfrmPlayer`, `TfrmNewPlayer`, `TfrmDeletePlayer`, `SaveGame<n>.RCR`, one active `CURRENTPLAYER`. These are local save slots.

## Inferred

- `E0N_cess` as mesh name suggests a reused Cessna-type model. The code and sound treat it as a helicopter. Its shape was not rendered. It has a tail point at z about -82, matching the small-blade offset -77.58. Wide vertices (|x| > 30) are few, 19 of 161.
- `C_LBLADE`, `C_SBLADE` mapped to `E0N_Absc` look like a data placeholder, because `E04_absc` also exists as `.omp` scenery on E4 and its box (27.5 × 37.4 × 85.8) does not look like a rotor. A port just draws what the INI names.
- Type 9 cops draw `POLICE01_ANIM`/`POLICE02_ANIM` (`pol_lo_0`, `plz_lo_0`), not the `COP0/1` row anim. Evidence: `.omp` names are anim names, and `S:0x407030` asserts the object's anim is in the `[Cop Types]` list (`COP2`, `COP3`, `SUPERCOP` anims). `COP0`, `COP1` rows then supply mass, sound, and damage only.
- `S:0x40d6f0` type 2 and league 2 test: cop type 2 is the `SUPERCOP` row. Shipped type 9 objects are types 0, 1, and the Supercop object uses its own FSM (`S:0x41e910`, `gameplay-systems.md` section 12). So this branch likely never fires, and the Supercop appears in every league.
- Settled by the updates: track 9 and the `downld` car were download content, each a separate official update. The art was on the disc all along, in `rcs.img`, `rc.img` and `menurcs.img`; only the data files were missing (`../provenance.md`).
- `%s = NETWORK` and `Network is present` are system-info logging (`GetSystemMetrics` style), judged only by neighbouring strings such as `Startup = Safe Mode Boot With Network`.
- Ambient 128 on E2, E3 against 50 on E0 suggests different lighting moods. Day or night was not established; sky textures were not inspected.

## Unknown

- Whether `part_rain` has a visible effect: `S:0x4625b0` sets up an emitter that stores the flag, but what that emitter draws was not traced.
- Rendering of `C_HELI` with its `_Absc` attachments in E4, E7.
- Disc 1.01 without updates only: `RACER_7` DeLorean with `overlay7.ini` absent, the crash behaviour if a save forces `CAR=7` was not traced.
- How `.hbp` and `rcs.CHK` were meant to be used.
- `Price` field of car rows: reader not traced.
- Settled: a track and a car were released, the two updates. Whether any more were is not known.
- `CHASETIME` values such as `170111` have no known meaning beyond non-zero.

## Checklist

Tracks: [ ] 0 Amsterdam [ ] 1 Rotterdam [ ] 2 Scheveningen [ ] 3 Wenen [ ] 4 Berlijn [ ] 5 Hamburg [ ] 6 Frankfurt [ ] 7 BodenSee [ ] 8 Munchen - Wenen [ ] 9 Download-race, shown as Country etappe, Quick Race only, from the track update

Track data per etappe 0-9 (9 from the track update): [ ] `.cmp` [ ] `.dmp` [ ] `.ini` [ ] `.omp` [ ] `.pmp` [ ] `.pth` [ ] `.rmp` [ ] `e0N_anim.ini` [ ] sky mesh and texture [ ] reflection [ ] wait screen [ ] 4 track textures [ ] ambient light

Player characters: [ ] Edgar de Flits (checker) [ ] Tommie 'El Nino' (hotrod) [ ] James Brons (countach) [ ] Katharina 'Kat' (merceslk) [ ] Barbarally (buggy) [ ] D.T. Harry (humvee, unlockable) [ ] politie-auto (politie, Quick Race) [ ] `downld` De Schaduw (truck `TRU`, Quick Race, car update) [ ] `hunny` as unused data only

AI opponents: [ ] 4 from RACER_0..4, skipping the player

Traffic: [ ] VEHICLE01 [ ] 02 [ ] 03 [ ] 04 [ ] 05 [ ] 06 [ ] 07 [ ] 08 [ ] 09 [ ] 10 [ ] 11 [ ] 12 [ ] 13 `e06_buss` [ ] 14 `e06_fire` [ ] 15 `e06_pull` [ ] 16 `e06_rove` [ ] 17 `e06_lift`

Police: [ ] NL cop `pol_lo_0` [ ] German cop `plz_lo_0` [ ] NL blockade car `police01` [ ] German blockade car `police02` [ ] Supercop humvee on E1, E3, E4 [ ] siren, `bluelite`

Path objects: [ ] Helicopter E4 ×2, E7 ×1 [ ] Plane E3 `E03_boin` [ ] Zeppelin path E4 `E04_zepp` ×2 [ ] Plane E6 `e6boing6` [ ] Train E4 `E04_bahn` ×2 [ ] Skyline train E6 `E6skylin` [ ] ICE E8 `e08_ice` ×2 [ ] Boat E4 `E04_Boot` [ ] Path car E1, E8

Pickups: [ ] `pw_1pts` [ ] `pw_5pts` [ ] `pw_10pts` [ ] `pw_reps` [ ] `pw_repb` [ ] `pw_turbs` [ ] `pw_turbb` [ ] `pw_godm` [ ] `pw_stop` [ ] `pw_fastf`

Modes: [ ] Tour, 9 stages [ ] Quick Race, with chase unlock [ ] City race [ ] Highway race [ ] City chase

Difficulty: [ ] Makkelijk [ ] Normaal [ ] Moeilijk [ ] All rows of section 4

Tune-ups: [ ] Motor [ ] Banden [ ] ABS Bremsen [ ] Getriebe [ ] Turbo

Unlocks: [ ] Harry by Tour win [ ] Chase tracks in Quick Race by Tour progress [ ] Track 9 and De Schaduw by the original's own rules, from the updates' files

Players: [ ] 1 human, local profiles only [ ] No multiplayer, no split-screen

Excluded, no route in shipped data: trailers, RACER_8, RACER_9, tracks 10, 11, `copland`, `garage.ini`
