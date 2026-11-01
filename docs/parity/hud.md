# HUD parity

Every HUD element, overlay state, HUD key and screen-shape behaviour found in `spel.dat` and its overlay files, with its implementation and verification status. Part of [`../feature-parity.md`](../feature-parity.md). Original behaviour and numbers: [`../behavior/hud.md`](../behavior/hud.md).

Addresses are `spel.dat` VAs. "Recompiled" items run in `spel.wasm`, built from `spel.dat` by `tools/recomp/`. They draw through `source/host/directx.js` and `source/render/d3d-renderer.js`, and files come through `source/host/game-files.js`. Notes only name further files.

What the verification words mean here. A check covers only what it says.

- `reference-frame`: one frame by eye, the first race frame on etappe 0 with car 0, against the owner's 4:3 screenshot of his patched game under Wine. It does not record the port's window shape.
- `compared with the original: reference-wine`: `tools/reference-wine/`, the original `spel.dat` under Wine on etappe 0 at 60 ticks per second, set next to the port, for what the row's Notes say, in one setup. For the HUD: the durations of the countdown states, and three frames by eye at 640x480, `evidence/reference-wine/side-*.png`.
- `compared with the original: reference-86box`: `tools/reference-86box/`, `evidence/reference-86box/results.md`, for the 8-bit path, which Wine cannot run. The original `spel.dat` on a throwaway copy of the owner's 86Box Windows 98 machine, disc 1.01 data, etappe 0, car 0, screenshots of the guest. For the HUD: its text region in the port's frame at rest against the guest's, pixel-exact in RGB, 81.7% identical at `RESOLUTION` 1 and 63.6% at 0, and the rest of the picture by eye. It does not cover the pause dialog, end of race or the wait pictures as the game draws them. One emulated machine: [`render.md`](render.md) has its parts.
- `check-flow`: `tools/check-flow.mjs`, a whole race with car 1 and zero console errors. It does not look at the HUD.
- `check-phone-flow`: `tools/check-phone-flow.mjs`, taps on an emulated touch profile, `evidence/flow-phone/`. It reads no HUD.
- `check-race-ui`: `tools/check-race-ui.mjs`, named checks in `evidence/race-ui/summary.json`, with car 0. Finish and game over are entered through `0x0044cda0`. It reads state and computes rectangles from the canvas formulas; it does not read HUD positions from the game or compare pictures.
- `check-software`: `tools/check-software.mjs`, named checks in `evidence/software/flow/summary.json`. The 8-bit path by real clicks in the real menu, at 1280x720, with a whole race by the bot. It reads state, not pictures.
- `check-driving`: `tools/check-driving.mjs`, scripted driving in Node, no renderer.
- `run-bot`: `tools/run-bot.mjs`, a whole race headless, no renderer.
- `boot-all`: `tools/build-race-lists.mjs`, 2 s per etappe and car, no renderer.
- `form check`: per-form browser checks of the menu.
- `fix check`: a one-off script written for one change and run once, on Amsterdam, not kept in `tools/`. Screenshots judged by eye.
- `fix check: launch through the menu, 6 s of gas, 0 console errors`: the one launch check of track 9 with car 7, a one-off script on the final build when the updates came in, in headless Chromium, not on Amsterdam. The real menu, Quick Race position 9 and character position 7, a race on the keyboard device, 31.24 m/s after 6 s of gas, 0 console errors. Screenshots `evidence/smoke/download-quickrace.png`, `download-race-start.png`, `download-race-driving.png`. By eye: "Country etappe", "De Schaduw", the truck, its HUD, driving on the left, € pickups. Nothing else: no lap, no race end, no sound, no comparison with the original. The original has not been run with the updates.
- `not verified`: no check looks at it. A screenshot in `evidence/` is not listed as verification.

## HUD structure and states

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| HUD pass inside the race scene: update, then draw | `0x0044da30`, `0x004882f0`, `0x00488ef0`, `0x00484fc0`; `hud-overlay.md` 2 | yes (recompiled) | checked on Amsterdam: reference-frame | `hook!hudDraw` in `source/host/race.js` wraps the draw |
| HUD update over a whole race | `0x00488ef0` | yes (recompiled) | checked on Amsterdam: run-bot | Ran with no renderer and no fault. No HUD output examined |
| HUD pass order: before skid, clouds, flag, `bwlk`, on top by depth | `0x0044da30`; `render-frame.md` | partial | not verified | On purpose: the port draws the HUD last, at native size, in `D3DRenderer.present`, or on the mode's grid on the 8-bit path. Alpha HUD parts blend over late effects, and no world geometry can cover the HUD |
| Depth stacking inside the HUD: body, stripes, glass, needles, knobs | `0x4a74f0`, mesh z; `hud-overlay.md` 7 | yes (host) | checked on Amsterdam: reference-frame | `clearDepth`, then depth test on in the HUD pass |
| HUD projection and identity view | `0x00485ed0`, `0x004b39d0` | yes (recompiled) | checked on Amsterdam: reference-frame | Captured per batch as `hudVP`, `D3DRenderer.batch` |
| Alpha blending state `SRCALPHA`/`INVSRCALPHA` | `0x00485ed0` | yes (host) | checked on Amsterdam: reference-frame | `materialFor`. Seen on racer portraits |
| Forced texture filter during the HUD pass | `0x00485ed0`, `0x00486040`, `0x004bc200`; `render-textures.md` 11 | yes (host) | fix check: at FILTER=0 the HUD is linear, speedometer crop within 8/255 of FILTER=2 | Filter is per batch: `pipelineKey` bit 18. No filter shows on the 8-bit path: see there |
| Overlay state 0, loading | `0x00487f20` | yes (recompiled) | not verified | Runs inside `race.boot()`, never painted |
| Overlay state 1, normal | `0x0044c7d7` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Overlay state 2, pause | `0x0044cf90` | yes (recompiled) | checked on Amsterdam: check-race-ui | Keys, clocks and present alpha. Picture: see Requestors |
| Overlay state 3, quit question | `0x0044cf90` | yes (recompiled) | checked on Amsterdam: check-race-ui | Keys and clocks. Picture: see Requestors |
| Overlay state 5, finish table | `0x0043ac80` | yes (recompiled) | checked on Amsterdam: check-flow, check-race-ui | `FINISHED=1` can only follow this state in `check-flow`. Picture not compared |
| Overlay state 6, total loss | `0x0043bc20`, `0x0044c950` | yes (recompiled) | checked on Amsterdam: check-race-ui | Entered through `0x0044cda0(6)`, not by damage. Its lines not looked at |
| Overlay state 7, arrested | `0x0043bc20`, `0x0043a980` | yes (recompiled) | not verified | |
| Overlay state 12, time up | `0x0043bc20`, `0x0044c8c0` | yes (recompiled) | not verified | Chase tracks only |
| Overlay states 8, 9, 10, 11, countdown | `0x0043c3d0` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-flow | A race starts only through them. Durations 0.92, 0.92, 0.92, 1.02 s, against the original's 0.92, 0.90, 0.92, 1.02 s under Wine. Picture: one frame by eye, `evidence/reference-wine/side-ov8.png` |
| `overlay_detail=3` | `0x00449b30`, `game.ini` | yes (recompiled) | checked on Amsterdam: check-race-ui | Reads 3, then 0 and 1 through key D |
| `disable_overlay=0` gates only the empty 2D display | `0x0044cb80` | yes (recompiled) | not verified | |
| `OVERLAYELEMENTS` mask, 15 in `game.ini` since the car update, absent on disc 1.01 | `0x00449b30`, `0x0048abe0`, `0x00494560`, `0x00496e20`, `0x00496320` | yes (recompiled) | not verified | At 15, mode 1 of key 5 keeps elements 1, 2, 4, 8. Absent reads 0: all groups hide. The vfs trims the key, so the port reads 15 like the original. Not exercised in any check, and that picture was not looked at |
| Composite `Overlay`, no children | `overlay0.ini` | n/a | not verified | Empty |
| Composite `Ornaments`, no children | `overlay0.ini` | n/a | not verified | Empty |
| Composite `Tuneups`, only `OVL_PW_FASTFORWARD` | `overlay0.ini` | n/a | not verified | Never shown in the original |

## Overlay INI per car

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| File selection by `[PLAYER] car` | `0x00487f20` | yes (recompiled) | boot only: boot-all | |
| `overlay0.ini`, car 0 Edgar de Flits, `ovl0*` meshes | `original/install/overlay0.ini`, `gen_anim.ini` | yes (recompiled) | checked on Amsterdam: reference-frame | Also the car in `check-race-ui` |
| `overlay1.ini`, car 1 Tommie 'El Nino', `ovl1*` meshes | `overlay1.ini` | yes (recompiled) | checked on Amsterdam: check-flow | Whole race with this file. Look not checked |
| `overlay2.ini`, car 2 James Brons, `2` anims map to `ovl5*` | `overlay2.ini`, `gen_anim.ini` | yes (recompiled) | boot only: boot-all | |
| `overlay3.ini`, car 3 Kat, `ovl3*` meshes | `overlay3.ini` | yes (recompiled) | boot only: boot-all | |
| `overlay4.ini`, car 4 Barbarally, `ovl4*` meshes | `overlay4.ini` | yes (recompiled) | boot only: boot-all | |
| `overlay5.ini`, car 5 D.T. Harry, `ovl5*` meshes | `overlay5.ini` | yes (recompiled) | boot only: boot-all | |
| `overlay6.ini`, car 6 politie-auto, `ovl5*` meshes, `PLAYER_6` | `overlay6.ini` | yes (recompiled) | boot only: boot-all | |
| `overlay7.ini`, car 7 De Schaduw, `ovl5*` meshes, `PLAYER_6`, `PLAYER_7` | `overlay7.ini` since the car update, absent on disc 1.01; `0x00487f20` | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | `0x00487f20` finds its file and the HUD comes up. By eye on the launch check's screenshots, no comparison with the original |
| Fallback to `overlay5.ini` for other cars | `0x00487f20` | n/a | not verified | Menu never writes those values |
| `game.ini [Portraits]` names 0..7 | `0x004932a0`, `game.ini` | yes (recompiled) | boot only: boot-all | A missing name is fatal. `7=PLAYER_7` since the car update |
| INI grammar through `GetPrivateProfile*` | `0x004c3b60`, `0x0047ed10`; `hud-overlay.md` 4 | yes (host) | boot only: boot-all | `source/host/win32.js`, `source/host/vfs.js` |
| Overlay files byte-identical in `public/assets/game` | `cmp` against the install | yes (host) | not verified | Compared with `cmp` for this document. Not one of the listed checks |

## Speedometer

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `Speedometer` composite at rest | `0x0048ee50`, `overlay0.ini` | yes (recompiled) | checked on Amsterdam: reference-frame | Group `right` in `source/host/hud-layout.js` on other shapes |
| Slide-in from local 1,0,0 in 1.2 s | `0x0048ef20`, `0x0048f140` | yes (recompiled) | not verified | |
| `OVL_SPEEDOMETER_BODY`, per car | `overlay0.ini`, `ovl*spd1` | yes (recompiled) | checked on Amsterdam: reference-frame | Car 0 |
| `OVL_SPEEDOMETER_STRIPES` | `ovl_spd3` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `OVL_SPEEDOMETER_GLAS` | `ovl_spd2` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `OVL_SPEEDOMETER_HLTH`, full bar | `ovl_shlt` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `OVL_SPEEDOMETER_HLTH_BK` | `ovl_shlb` | yes (recompiled) | not verified | Hidden behind a full bar in the reference |
| Health bar scale, damage/1100 | `0x0048a230` | yes (recompiled) | not verified | |
| `OVL_SPEEDOMETER_DIAL` at rest | `ovl_wijz` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Speed needle, `min(speed/200, 1)*1820.44` | `0x0048a230`, `0x0049ca10`, `0x0049ca90`, `0x0044eba2` | yes (recompiled) | fix check: maximum 1820.44, dial z = 737.28 at speed 81, read at run time | 0 to 160 degrees |
| `OVL_SPEEDOMETER_DOP` | `ovl_knop` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `OVL_SPEEDOMETER_TURBODIAL` at rest | `ovl_wij2` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Turbo needle, `turbo/100*2048` | `0x0048a230`, `0x0049cb00`, `0x0044e970` | yes (recompiled) | fix check: turbo z = 2048 at turbo 100, read at run time | 0 to 180 degrees |
| `OVL_SPEEDOMETER_TURBODOP` | `ovl_knp2` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `OVL_SPEEDOMETER_RED_LED`, `_RED_LUD`, `_RED_GLOW`, on at damage ratio >= 0.8 | `0x00489c10`, `ovl_rled`, `ovl_rlud`, `ovl_rlit` | yes (recompiled) | not verified | Glow: `DESTBLEND=4`, `pipelineKey` |
| `OVL_SPEEDOMETER_GRN_LED`, `_GRN_LUD`, `_GRN_GLOW`, on at turbo ratio <= 0.2 | `0x00489c10`, same red meshes | yes (recompiled) | not verified | |
| `STRING_DAMAGE_TXT`, text 55 `SCHADE` | `overlay0.ini`, `language.ini` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `STRING_EURO_SIGN` `@` | `overlay0.ini`, `FONT1_ASCII` 64 | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `STRING_EURO_MONEY` at `000000` | `overlay0.ini` | yes (recompiled) | checked on Amsterdam: reference-frame | |
| Money string follows `0x6fba68`, `%06d`, clamp 0..999999 | `0x0048abe0`, string `+0x230`; `hud-overlay.md` 9 | yes (recompiled) | not verified | |
| Rev counter | none; `hud-overlay.md` 9 | n/a | not verified | Does not exist in the original |
| Gear indicator | none; `hud-overlay.md` 9 | n/a | not verified | Does not exist in the original |

## Communicator

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `Communicator` composite slides in to 0.011 in 1.2 s, out to -1 in 3.0 s | `0x0048a010`, `0x0048f0d0`, `0x00489e80` | yes (recompiled) | fix check: at 390x844 fully out of view while hidden; `leftShift` at 800x360 | Group `left`; the shift grows with the slide. Slide timing not measured |
| `OVL_COMMUNICATOR_BODY`, per car | `ovl*com1` | yes (recompiled) | not verified | |
| `OVL_COMMUNICATOR_GLAS1`, photo window | `ovl_com2` | yes (recompiled) | not verified | |
| `OVL_COMMUNICATOR_GLAS2`, text window | `ovl_com3` | yes (recompiled) | not verified | |
| `OVL_COMMUNICATOR_HLTH`, damage/1100 of the message's car | `ovl_chlt`, `0x0048a230` | yes (recompiled) | not verified | Not for `HONNEY`, `SHADOW` |
| `OVL_COMMUNICATOR_HLTH_BK` | `ovl_chlb` | yes (recompiled) | not verified | |
| `OVL_COMMUNICATOR_RED_LED`, `_RED_LUD`, `_RED_GLOW` | `0x00489d30` | yes (recompiled) | not verified | -7 per tick at the fixed 60 ticks per second |
| `STRING_0_COMMUNICATOR` | `overlay0.ini` | yes (recompiled) | not verified | |
| `STRING_1_COMMUNICATOR` | `overlay0.ini` | yes (recompiled) | not verified | |
| `STRING_2_COMMUNICATOR` | `overlay0.ini` | yes (recompiled) | not verified | |
| `STRING_3_COMMUNICATOR` | `overlay0.ini` | yes (recompiled) | not verified | |
| Message wrap, `chars_per_line=20`, `@` comma, `#` new line | `communi.ini`, `0x0048ae80` | yes (recompiled) | not verified | |
| Queue of 10, priority insert | `0x0048a910`, `0x00489ec0` | yes (recompiled) | not verified | |
| Message speech samples, 151 entries in `[SAMPLES]` | `communi.ini`, `audio.md` 12 | yes (recompiled) | not verified | Sound checked by state only; `source/audio/game-audio.js` |
| Photo `OVL_PORTRAITS_SHADOW`, 4 messages | `communi.ini [SHADOW]`, `ovl_fac8` | yes (recompiled) | not verified | |
| Photo `OVL_PORTRAITS_HONNEY`, 14 messages | `communi.ini [HONNEY]`, `ovl_fac7` | yes (recompiled) | not verified | |
| Photo `OVL_PORTRAITS_HARRY`, 26 messages | `communi.ini [HARRY]`, `ovl_fac5` | yes (recompiled) | not verified | |
| Photo `OVL_PORTRAITS_POLICE`, no active message | `communi.ini [POLICE]`, `ovl_fac6` | n/a | not verified | Unreachable in the original: `audio.md` 12 |
| Photo `OVL_PORTRAITS_EDGAR`, 19 messages | `communi.ini [EDGAR]`, `ovl_fac0` | yes (recompiled) | not verified | |
| Photo `OVL_PORTRAITS_JAMES`, 21 messages | `communi.ini [JAMES]`, `ovl_fac2` | yes (recompiled) | not verified | |
| Photo `OVL_PORTRAITS_BARBARALLY`, 14 messages | `communi.ini [BARBARALLY]`, `ovl_fac4` | yes (recompiled) | not verified | |
| Photo `OVL_PORTRAITS_TOMMY`, 25 messages | `communi.ini [TOMMY]`, `ovl_fac1` | yes (recompiled) | not verified | |
| Photo `OVL_PORTRAITS_KAT`, 26 messages | `communi.ini [KAT]`, `ovl_fac3` | yes (recompiled) | not verified | |
| System event `copalert` | `communi.ini [SYSTEM]` 0, `0x0041eeb0` | yes (recompiled) | not verified | |
| System event `goleft` | `[SYSTEM]` 1, `0x00456600` | yes (recompiled) | not verified | |
| System event `goright` | `[SYSTEM]` 2, `0x004566e0` | yes (recompiled) | not verified | |
| System event `gofork` | `[SYSTEM]` 3, `0x004567c0` | yes (recompiled) | not verified | |
| System event `gozigzag` | `[SYSTEM]` 4, `0x004568a0` | yes (recompiled) | not verified | |
| System event `newmessage`, sample `mesin` | `[SYSTEM]` 5, `0x0048a230` | yes (recompiled) | not verified | |
| Categories `game_position_01..05` | `communi.ini [CATEGORIES]`, `0x00456050` | yes (recompiled) | not verified | |
| Categories `call_for_backup`, `go_for_it`, `challenge_at_start`, `challenge_at_finish` | `0x00455cc0`..`0x00455f70` | yes (recompiled) | not verified | |
| Categories `knock_out`, `police_outsmarted`, `attack`, `warning_from_harry` | `0x0041f9f0`, `0x0041f070`, `0x004200e0`, `0x0041f350` | yes (recompiled) | not verified | |
| Categories `junction_ahead_left`, `junction_ahead_right` | `0x00456390`, `0x00456470` | yes (recompiled) | not verified | |
| Categories `racer0..4collision`, `racer0..4passing`, `racer0..4passed` | `0x0041a5b0`, `0x004128a0` | yes (recompiled) | not verified | |
| Categories `warning_about_harry`, `a_lotta_damage`, `reactions_on_warnings`, `reactions_on_challenge` | no sender literal; `audio.md` 12 | n/a | not verified | Unreachable in the original |
| `testmode`, `testmessages` | `communi.ini` false; `0x0048f250`, `0x0048f720` | n/a | not verified | Off as shipped |
| End-of-race photos | `0x0048fc90`, `0x0048fc70`, no reference | n/a | not verified | Dead code |

## Rank portraits

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `Portraits` composite | `overlay0.ini` | yes (recompiled) | checked on Amsterdam: reference-frame | Group `rank` on other shapes |
| `PLAYER_0`..`PLAYER_4` rows at 25, 25+60*i, 10, in rank order | `overlay0.ini`, `0x00493640` | yes (recompiled) | checked on Amsterdam: reference-frame | Five rows in the first frame |
| `PLAYER_5`, same slot as `PLAYER_4` | `overlay0.ini` comment | yes (recompiled) | boot only: boot-all | |
| `PLAYER_6`, `overlay6` and `overlay7` only | `overlay6.ini`, `overlay7.ini` | yes (recompiled) | boot only: boot-all | |
| `PLAYER_7`, `overlay7` only, `player_8.d3d`, same slot as `PLAYER_4` | `overlay7.ini`, `gen_anim.ini` since the car update | yes (recompiled) | fix check: launch through the menu, 6 s of gas, 0 console errors; boot only: boot-all | The launch check looked at the HUD as a whole, not at this element |
| Alpha: player 255, racers `0xb4` | `0x00493640` | yes (recompiled) | checked on Amsterdam: reference-frame | By eye |
| Swap on rank change, 0.6 s | `0x00492ac0`, `0x00493090` | yes (recompiled) | not verified | |
| `OVL_PLAYER_OUTLINE` on the player's portrait, scale 0.95 | `0x00493d60` | yes (recompiled) | checked on Amsterdam: reference-frame | Position only |
| Outline colour pulse, 0.6 s | `0x00493d60` | yes (recompiled) | not verified | |

## Statistics

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `STRING_RACE_TIME_VALUE`, clock 0, `%02d:%02d:%d` | `0x00497230`, `0x00496b10` | yes (recompiled) | checked on Amsterdam: reference-frame | `00:00:0` at start. Virtual clock. Group `stats` |
| `STRING_CUR_LAP`, `RONDE n/m` | `0x00496b10` | yes (recompiled) | checked on Amsterdam: reference-frame | `RONDE 1/2` |
| `STRING_CUR_POS`, `POSITIE n/m` | `0x00496b10` | yes (recompiled) | checked on Amsterdam: reference-frame | `POSITIE 5/5` |
| `STRING_COUNTDOWN_TIMER`, clock 11, chase tracks 1, 3, 4 | `0x00496dd0`, `raser.ini [MAPS]` arg 14 | yes (recompiled) | boot only: boot-all | No chase level ran in a browser. Group `topCentre`. Control clearance: see below |
| `TIME_TICK` below 6 s | `0x0044c8c0` | yes (recompiled) | not verified | |

## Direction signs and wrong-way frame

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `OVL_DIRECTION_GOLEFT`, 6000 ms | `0x00489b70`, `ovl_left` | yes (recompiled) | fix check: forced visible, crops against 4:3 at 360x800 and 390x844 | Group `plates`. Not triggered by driving, timing not measured |
| `OVL_DIRECTION_GORIGHT`, 6000 ms | `ovl_righ` | yes (recompiled) | fix check: forced visible, crops against 4:3 at 360x800 and 390x844 | Same |
| `OVL_DIRECTION_GOBOTH`, 6000 ms | `ovl_fork` | yes (recompiled) | fix check: forced visible, crops against 4:3 at 360x800 and 390x844 | Same |
| `OVL_DIRECTION_GOZIGZAG`, 6000 ms | `ovl_bend` | yes (recompiled) | fix check: forced visible, crops against 4:3 at 360x800 and 390x844 | Same |
| Signs hidden while driving the wrong way | `0x00489c10` | yes (recompiled) | not verified | |
| `OVL_TURNAROUND_FRAME`, shown while frac(time) > 0.4 | `0x004950c0`, `0x00429360`, `ovl_wway` | yes (recompiled) | fix check: forced visible, crops against 4:3 at 360x800 and 390x844 | Group `plates`. Not triggered by driving |
| Signs and frame in one place on tall shapes, same look | `overlay0.ini`, all at 320,50 | yes (host) | fix check: largest vertex error 0.75 and 0.91 canvas units, calculated on all five meshes | On purpose: moved to the top with a tilt, `HudLayout.setShape`, `apply`. Their place relative to the 3D view differs from the original |

## Game text

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `STRING_GAME_TEXT`, fade over 2.75 s | `0x00494f10` | yes (recompiled) | fix check: a real bonus message; the longest text forced at 320x568, clear of `POSITIE` | Group `topCentre`. Fade not measured |
| Text 44 `EXTRA TIJD` | `language.ini`, checkpoint, `0x0044cf90` | yes (recompiled) | not verified | The cheat path uses Ctrl+Space+T, which no check ran |
| Text 45 `LAATSTE RONDE` | `0x456a30` | yes (recompiled) | not verified | |
| Text 46 `INVINCIBLE` | `0x0044cf90` | yes (recompiled) | not verified | |
| Text 47 `COP MODE` | `0x0043c3d0` | yes (recompiled) | not verified | |
| Text 48 `QUICK SERVICE` | trigger 2 | yes (recompiled) | not verified | |
| Text 49 `EERSTE WAARSCHUWING` | `0x43a540`; `gameplay-systems.md` 8 | n/a | not verified | Unreachable in the original |
| Text 50 `LAATSTE WAARSCHUWING` | `0x43a540`; `gameplay-systems.md` 8 | n/a | not verified | Unreachable in the original |
| Text 51 `FLITS BONUS +100 EURO` | flitspaal hit | yes (recompiled) | not verified | |
| Text 56 `STUURSLOT` | script `PrintText` | yes (recompiled) | not verified | |
| Text 57 `FAST FORWARD` | script `PrintText` | yes (recompiled) | not verified | |
| Text 58 `20 SEC ONKWETSBAAR` | script `PrintText` | yes (recompiled) | not verified | |
| Text 59 `+100 EURO` | script `PrintText` | yes (recompiled) | not verified | |
| Text 60 `+500 EURO` | script `PrintText` | yes (recompiled) | not verified | |
| Text 61 `+1000 EURO!` | script `PrintText` | yes (recompiled) | not verified | |
| Text 62 `KLEINE REPARATIE BONUS` | script `PrintText` | yes (recompiled) | not verified | |
| Text 63 `GROTE REPARATIE BONUS` | script `PrintText` | yes (recompiled) | not verified | |
| Text 64 `KLEINE TURBO BONUS` | script `PrintText` | yes (recompiled) | not verified | |
| Text 65 `GROTE TURBO BONUS` | script `PrintText` | yes (recompiled) | not verified | |
| Text 66 `RESET (ENTER/RETURN)` | `0x0044cf90`, text 0x42 | yes (recompiled) | not verified | The reset itself: see HUD keys |
| Text 67 `FLITS BOETE -50 EURO` | flitser | yes (recompiled) | not verified | |
| Text 68 `DRUK ENTER/RETURN VOOR RESET` | `0x0044cb80`, text 0x44 | yes (recompiled) | not verified | The text still names Enter. On touch it is `Reset`, on a pad the left stick click |

## Requestors and game-over lines

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `OVL_REQUESTOR_BODY`, per car | `ovl*reqb`, `0x004950c0` | yes (recompiled) | not verified | `evidence/race-ui/pause.png`, `quit-dialog.png` show it on car 0: screenshots, not a comparison |
| `STRING_PAUZE_HEADER` `Pauze` | `overlay0.ini` | yes (recompiled) | not verified | Same |
| `STRING_PAUZE_TEXT` `Druk een toets` | `overlay0.ini` | yes (recompiled) | not verified | Same |
| `STRING_QUIT_HEADER` `Wilt u echt` | `overlay0.ini` | yes (recompiled) | not verified | Same |
| `STRING_QUIT_TEXT` `stoppen!? (J/N)` | `overlay0.ini` | yes (recompiled) | not verified | Same |
| Pause wait: clocks stop, any key resumes | `0x0044ca80`, `0x0044c990` | yes (host) | checked on Amsterdam: check-race-ui | `hook!pauseBegin`, `Race.pollPause`, `Race.endPause` in `source/host/race.js`. Shift masks, mouse button resumes |
| Quit wait: J or Y ends, Esc or N resumes | `0x0044c9f0` | yes (host) | checked on Amsterdam: check-race-ui | N and J on the keyboard, Nee on screen. Y and resume by Esc not tried |
| Still picture during a dialog | `0x0044cb80`, no update during the spin | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.frame` presents at alpha 1: 98 frames. The check reads the alpha, not pixels |
| On-screen `Ja`, `Nee`, `Verder` | port addition | yes (host) | checked on Amsterdam: check-race-ui | `Nee` pressed here, `Ja` in check-phone-flow. The pause's `Verder` not pressed. `RaceRunner.updateDialogKeys`; in `docs/intentional-differences.md` |
| `STRING_RACE_OVER` `RACE OVER` | `overlay0.ini` | yes (recompiled) | not verified | |
| `STRING_TOTAL_LOSS` `TOTAL LOSS` | `overlay0.ini` | yes (recompiled) | not verified | |
| `STRING_ARRESTED` `GEARRESTEERD` | `overlay0.ini` | yes (recompiled) | not verified | |
| `STRING_TIME_UP` `JE TIJD IS OM` | `overlay0.ini` | yes (recompiled) | not verified | |
| Game over: after 1000 ms, Esc, Enter or Space | `0x0043bd60` | yes (recompiled) | checked on Amsterdam: check-race-ui | Enter on state 6, entered through `0x0044cda0`. Esc and Space not tried here. The delay not measured |
| Result screens on touch and pad: controls hidden, `Verder`, pad A | port addition, `0x0043ac80`, `0x0043bd60` | yes (host) | checked on Amsterdam: check-race-ui | State 5 at 800x360. `RaceRunner.updateResults`, `GamepadInput.pollRace`. A held press does not count. States 6, 7, 12 share the code and did not run on touch |
| End of race waits for Esc, Enter, Space up | `0x0043ac80` | yes (host) | checked on Amsterdam: check-race-ui | `RaceRunner.endWait`. Its 5 s safety limit is the port's |

## Start digits

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Sequence 2.2, 0.9, 0.9, 0.9, 1.0 s | `0x0043c3d0` | yes (recompiled) | compared with the original: reference-wine; checked on Amsterdam: check-flow | The race starts only through it. Measured durations: see overlay states 8, 9, 10, 11 |
| `OVL_START_DIGIT_3` | `ovl_dig3`, `0x00496110` | yes (recompiled) | not verified | Scale `1+8t`, alpha `255-255t` |
| `OVL_START_DIGIT_2` | `ovl_dig2` | yes (recompiled) | not verified | |
| `OVL_START_DIGIT_1` | `ovl_dig1` | yes (recompiled) | not verified | |
| `OVL_START_GO` | `ovl_strt`, `t = T/1.0` | yes (recompiled) | not verified | |
| Start "shake" `0x00496010` | no reference | n/a | not verified | Dead code |

## Finish screen

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| 1500 ms of normal HUD, then state 5 | `0x0043ac80` | yes (recompiled) | checked on Amsterdam: check-flow | Timing not measured |
| Esc, Enter or Space leaves | `0x0043ac80` | yes (recompiled) | checked on Amsterdam: check-flow, check-race-ui | Enter from the bot, Space from `Verder` and pad A. Esc not tried |
| `STRING_FINISH_TEXT` `DRUK 'SPATIE' OM VERDER TE GAAN` | `overlay0.ini`, 320,460 | yes (recompiled) | not verified | Group `bottomCentre`. Stays visible on touch because the controls hide. `evidence/race-ui/finish-touch.png` shows it: a screenshot, not a comparison |
| `STRING_FINISH_POS_1` | `0x00492980`, `0x004940e0` | yes (recompiled) | fix check: frozen frames and position dumps at 1280x720, 800x360, 360x800 | Group `finish`: start maps to the screen edge on wide shapes |
| `STRING_FINISH_POS_2` | same | yes (recompiled) | fix check: frozen frames and position dumps at 1280x720, 800x360, 360x800 | Same |
| `STRING_FINISH_POS_3` | same | yes (recompiled) | fix check: frozen frames and position dumps at 1280x720, 800x360, 360x800 | Same |
| `STRING_FINISH_POS_4` | same | yes (recompiled) | fix check: frozen frames and position dumps at 1280x720, 800x360, 360x800 | Same |
| `STRING_FINISH_POS_5` | same | yes (recompiled) | fix check: frozen frames and position dumps at 1280x720, 800x360, 360x800 | Same |
| Table rows `y0 = 0.5 - 1.5/(N+1)*rank` | `0x00492980` | yes (recompiled) | fix check: frozen frames and position dumps at 1280x720, 800x360, 360x800 | Centred on any shape |
| Portraits move to x -0.4 | `0x00492c70` | yes (recompiled) | fix check: frozen frames and position dumps at 1280x720, 800x360, 360x800 | Group `players`: from the edge column, no jump |
| Rank 0: two turns, scale up to 1.3, 1.2 s | `0x00492c70` | yes (recompiled) | not verified | |
| Times: best, `+` difference, `--:--:-` | `0x004940e0` | yes (recompiled) | not verified | |
| Player's row blinks, 300 ms on, 300 ms off | `0x004940e0` | yes (recompiled) | not verified | |
| Finish flag on | `0x0043fdd0`, `finish_flag=1` | yes (recompiled) | fix check: went up at tick 36944 in whole bot races, looked at by eye | See [`render.md`](render.md) |
| Finish flag covers wide and tall views | `0x0043fff0`, `0x0043fe20` | yes (host) | fix check: reach 0.9999 to 1.0 of the view at 5 shapes, s = 1 at 960x720 and 1000x900 | On purpose: `D3DRenderer.scaleFlag`. Equal to the original between A = 1.07 and 1.66 |
| Finish flag drawn nearest when `FILTER=2` | `0x00440160` | yes (host) | fix check: at FILTER=2 only the flag nearest, squares hard | Filter per batch |

## Wait screen

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Wait picture `e0N_w_hi` per etappe | `0x004416f0`, `raser.ini [wait_hi]` | yes (host) | not verified | `#loading`, `public/assets/loading/`, `prepare_loading` in `tools/prepare-assets.py`. In a 4:3 box. `check-flow` passes it and does not look at it. On the 8-bit path the PCX pictures through the game's palette: `eNN-lo.png` from `e0N_w_lo.pcx` at `RESOLUTION` 0, `eNN-8.png` from `e0N_w_hi.pcx` at 1 |
| `OVL_PROGRESS_BAR`, frames `ovl_p00`..`ovl_p10` | `0x004976d0`, `gen_anim.ini` | partial | fix check: 11 frames on a contact sheet, rectangle measured at 308.5, 438, 288, 24 | Original art at the original rectangle as `bar-00..10.png`, not drawn by the game. `RaceRunner.showBar`. On the 8-bit path `bar8-NN.png` from `overlay.pcx`, `prepare_loading_bar_8`, not on the contact sheet |
| Progress percent table | `raser.ini [progress]`, `0x004415e0` | partial | not verified | On purpose: runs inside `race.boot()`, never painted. The bar follows downloads, then stands on the last frame |
| Last load frame with the normal HUD | `0x004581d0` | no | not verified | Not painted, because `race.boot()` blocks |

## Fonts

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `FONT1` letters `A`..`Z`, `a`..`z` alias | `overlay0.ini`, `0x0047ea10` | yes (recompiled) | checked on Amsterdam: reference-frame | Letters in `SCHADE`, `RONDE`, `POSITIE` only |
| `FONT1` digits `0`..`9` | `overlay0.ini` | yes (recompiled) | checked on Amsterdam: reference-frame | Those in the first frame |
| `FONT1` `SPACE`, `MINUS`, `DIV` | `overlay0.ini` | yes (recompiled) | not verified | `:` seen in the time |
| `FONT1_ASCII` `/` | `overlay0.ini` 47 | yes (recompiled) | checked on Amsterdam: reference-frame | In `1/2`, `5/5` |
| `FONT1_ASCII` `@` euro | 64 | yes (recompiled) | checked on Amsterdam: reference-frame | |
| `FONT1_ASCII` `?` `!` `)` `(` `_` `;` `.` `+` `,` | 63, 33, 41, 40, 95, 59, 46, 43, 44 | yes (recompiled) | not verified | |
| `FONT1_ASCII` smileys `#` `$` `&`, `%` | 35, 36, 38, 37 | yes (recompiled) | not verified | |
| Character with no glyph draws nothing (`'`) | `0x0047e4e0` | yes (recompiled) | not verified | |
| Other INI keys never read (`SLASH`, `N_UMLAUT`, `PLAYER1`...) | table `0x576c98` | n/a | not verified | Never read in the original |
| `overlay.tga`, key colour, 24-bit | `0x004b8840`, `0x004c4030` | yes (host) | checked on Amsterdam: reference-frame | Key texels alpha 0: `uploadPixels` |
| `.fnt` sets `olfnt03`, `himid`, `higeel`, `hi_geld`, `hi_vlag`, `hi_bts`, `olfnt07`, `marc10`, `slider13`, `slider15`, `olfnt01`, `olfnt02`, `olfnt04`, `olfnt06`, `olfnt08`, `olfnt09`, `lo_fnt1` | `0x0043ce10`, `0x004ca420` | yes (recompiled) | boot only: boot-all | Loaded; only use needs `tweak_mode`. The 8-bit path loads other names, `lo_fnt3` and so on, from `soft` in `race-files.json` |
| `.fnt` draw, font 11 | `0x0043fc90`, `tweak_mode` | n/a | not verified | Off as shipped |
| GDI text `0x004c5930` | `tweak_mode`, `0x6fb97c`, `testmode` | n/a | not verified | Off as shipped. `TextOutA`, `ExtTextOutA` are stubs in `source/host/win32.js` |
| Race console `COM:>` | `0x0047108d` gate, `TWEAK_MODE=0` | n/a | not verified | Off as shipped |

## Items not on the HUD

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Radar | `radar=0`; draw `0x004426a0` has no reference | n/a | not verified | |
| Dashboard `Ovl_Dashboard.cpp` | `0x00488a70` has no reference | n/a | not verified | |
| Old 2D HUD | `0x0043e130`..`0x0043f690`, `0x0043b7f0`, no reference | n/a | not verified | |
| `draw_dashboard` | `0x0043f8a0`, empty | yes (recompiled) | not verified | Draws nothing |
| `OVL_PW_FASTFORWARD` | no code reference | n/a | not verified | |

## HUD keys

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| `5`, dashboard on/off | `0x0044d823`; `input.md` C7 | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Dashboard`. No pad button, on purpose: no free button is left. The check pressed the touch button: `0x712784` 0, 1, 0 |
| `D`, overlay detail | `0x0044d990`; `input.md` C7 | partial | checked on Amsterdam: check-race-ui | Keyboard and touch `Detail`. No pad button, on purpose. The check pressed the touch button: `0x6fb924` 3, 0, 1 |
| `Enter`, reset | `0x0044d705`; `input.md` C7 | yes (recompiled) | checked on Amsterdam: check-driving, check-race-ui | Keyboard in `check-driving`, touch `Reset` and pad left stick click in `check-race-ui` |
| `P`, pause | `0x0044cf90` | yes (recompiled) | checked on Amsterdam: check-race-ui | Also `Pauze` on touch, Start on pad; those two were not tried |
| `Esc`, quit question | `0x0044cf90` | yes (recompiled) | checked on Amsterdam: check-race-ui | Also `#race-stop` by mouse, tried, and `Stop` on touch in check-phone-flow. Back on pad not tried |

## Screen shapes and platform

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| Canvas at exactly 4:3 equals the original mapping | `0x004c0e10`; `hud-overlay.md` 5 | yes (host) | not verified | `D3DRenderer.updateClipMap`: by arithmetic. `reference-frame` does not record the port's window shape |
| No stretching on any shape | brief section 8 | yes (host) | not verified | `updateClipMap`; from the formula |
| Wide: groups at the screen edges | brief sections 7, 8; `hud-overlay.md` B, C | yes (host) | not verified | `source/host/hud-layout.js`. Screenshots in `evidence/race-ui/layout-*.png` are not a comparison |
| Tall: groups at top and bottom | brief sections 7, 8; `hud-overlay.md` C | yes (host) | fix check: by eye at 360x800, 390x844, 320x568 | Direction signs with them. `RaceRunner.layout`, `HudLayout.setShape` |
| Portrait: view and HUD on top, controls below | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Render size and control rectangles. HUD placement not read. `RaceRunner.layout` |
| Portrait rule: one test for script and CSS | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Class `race-portrait`. 800x880 uses the landscape layout with no hits |
| Orientation change during a race | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Portrait and back: sizes, gesture ends. `source/app.js`, `RaceRunner.layout` |
| HUD independent of render scale and resolution | brief section 8 | yes (host) | checked on Amsterdam: check-race-ui | Drawing buffer stays native at 480p 50% and at Auto 200%. HUD pixels not compared. `D3DRenderer.present`. The 8-bit path: see there |
| Readable HUD on phones in portrait | brief section 7; `hud-overlay.md` C note | yes (host) | fix check: k read as 1.333, 1.231, 1.35 at 360x800, 390x844, 320x568, by eye on screenshots | On purpose: k up to 1.35 for Speedometer, Communicator, stats. Communicator text 8.8 CSS px at 360 and 390 wide, 8.0 at 320, calculated |
| Safe areas on HUD groups | brief section 7; `hud-overlay.md` C note | yes (host) | fix check: fake insets at 800x360 | `safeAreaInsets`, `setShape`, `apply`. Headless Chromium reports zero insets, no real device, no run with k above 1 |
| Finish strings slide in from outside the picture on wide shapes | `hud-overlay.md` C note | yes (host) | fix check: frozen frames and position dumps at 1280x720, 800x360 | Group `finish` in `HudLayout.apply` |
| HUD clear of touch controls: Speedometer | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `layout:` at 8 sizes, computed rectangles |
| HUD clear of touch controls: Communicator | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | `leftShift`, `actions-lifted` at 640x360, 1024x768, 800x880. Computed rectangles |
| HUD clear of touch controls: statistics | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Column and gear placed around them. Computed rectangles |
| HUD clear of touch controls: countdown timer | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Rectangle only: no chase level ran in a browser |
| HUD clear of touch controls: state 5 prompt and row 5 | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Wheel, actions and column hidden, at 800x360 |
| HUD clear of touch controls: rank portraits | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | Wheel's rim, at the landscape sizes |
| HUD clear of touch controls: game text | brief section 7 | partial | not verified | Calculated: at 640x360 long texts run 8 to 37 CSS px under `Stop`. Clear at the other checked landscape sizes. Not among the check's rectangles |
| HUD clear of touch controls: requestor | brief section 7 | partial | not verified | Calculated: at 640x360 a corner of 11 by 26 CSS px under `Meer`, text clear. Not among the check's rectangles |
| HUD clear of touch controls: `Meer` open | brief section 7 | partial | not verified | The column widens, 5 columns at 640x360. The layout checks ran with it closed |
| HUD clear of touch controls: portrait layouts | brief section 7 | yes (host) | checked on Amsterdam: check-race-ui | All controls below the view at 360x800, 390x844, 360x640 |
| Gear clear of the statistics, mouse in portrait | brief section 7 | yes (host) | not verified | `--hud-unit` follows k in `RaceRunner.layout`. The layout checks ran with touch |

## 8-bit path, `3D kaart` off

Game code as shipped. Original behaviour and how it was compared: [`../behavior/hud.md`](../behavior/hud.md), 8-bit path. Port choices: `docs/intentional-differences.md`. Amsterdam with car 0 only.

| Feature | Original evidence | Implemented | Verified | Notes |
|---|---|---|---|---|
| HUD on its own target on the mode's grid | `0x004882f0`; `render-8bit.md` | yes (host) | compared with the original: reference-86box; checked on Amsterdam: check-software | `hud8`, `D3DRenderer.presentIndexed`: 640x480 or 320x200 at 4:3, wider or taller by the view's shape. Render scale does not touch it. Covers late effects by order, as on the other path. Compared: HUD text region of the frames at rest, 81.7% identical at `RESOLUTION` 1, 63.6% at 0. Rows of glyphs in some strings remain, and rank portraits differ by the opponents' order. check-software read the grid and render scale |
| Same mesh HUD in copy mode from `overlay.pcx` on the page | `0x00487f20`, `gen_anim.ini`; `8bit-drawing.md` 8 | yes (recompiled) | compared with the original: reference-86box | The texel's palette index goes to the target, key index 0xFE. `RGBA` and alpha have no effect. Compared: the same frames, and the rest of the HUD by eye |
| No filter shows on the HUD | `0x00485ed0`, `0x004bc200`; `render-8bit.md` | yes (host) | compared with the original: reference-86box | State 17, 18 = 2 has no effect on the Ramp device. `FRAG_INDEXED` has no filter. Compared: the same frames |
| `RESOLUTION` 0's squeeze: canvas by `H/W` to 200 rows | `0x0047cd90`, `0x0047fd20`, `0x00480500` | yes (recompiled) | compared with the original: reference-86box; checked on Amsterdam: check-software | Same code, with W, H as 320, 200 from `SetDisplayMode`. Compared: the port at 640x480 reduced to 320x200 against the guest's frame, HUD text region 63.6%. The guest's card double-scans to 640x400; that this filled 4:3 on a monitor of the period is inferred. check-software read clip 0.625 and 200 rows |
| `clipY` in `HudLayout.setShape` | `0x004c0e10`, `0x0047fd20` | yes (host) | not verified | `yr` and `dy` from the mode's `H/W`, passed by `RaceRunner.layout`, which runs a second time after boot. Compared frames are at 4:3, where `dy` is 0, and check-software runs at one wide shape: `RESOLUTION` 0 on a tall shape has no check |
| Wider views: same `xr` as 640x480 | none, port | yes (host) | checked on Amsterdam: check-software | Effective size 853x480 at `RESOLUTION` 1, 427x200 at 0, in a 1280x720 window. HUD positions on those shapes not compared. In `docs/intentional-differences.md` |
| Quit question on this path | `0x0044cf90`, `0x004950c0` | yes (recompiled) | checked on Amsterdam: check-software | Esc and J end a race at `RESOLUTION` 0. `evidence/software/flow/09-quit-320.png` is a screenshot, not a comparison. The pause dialog did not run |
| Finish table on this path | `0x0043ac80`, `0x00492c70` | yes (recompiled) | checked on Amsterdam: check-software | A whole race by the bot at `RESOLUTION` 1 ends with the results written. Picture not compared |
