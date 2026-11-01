
/* ==== FUN_00437fd0 @ 00437fd0 ==== 
 * signature: undefined __stdcall FUN_00437fd0(void)
 * body: 00437fd0-004380ee
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437fd0(void)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_006fb950 != 0) {
    fVar2 = FUN_00437f00();
    _DAT_00599718 = (float)fVar2;
    fVar2 = FUN_00437f00();
    _DAT_0059971c = (float)fVar2;
    fVar2 = FUN_00437f00();
    DAT_00599720 = (float)fVar2;
    fVar2 = FUN_00437f00();
    _DAT_00599724 = (float)fVar2;
  }
  puVar1 = &DAT_006c3540;
  do {
    puVar1[-10] = 0;
    *puVar1 = 1;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x6c3568);
  FUN_004c3fa0((byte *)s_Calling__init_cameras__00599a40);
  FUN_004b0a30(10);
  FUN_004c3fa0((byte *)s_Calling__init_player_camera__00599a58);
  FUN_00438d20();
  FUN_004c3fa0((byte *)s_Calling__init_start_camera__00599a78);
  FUN_00437950(1);
  FUN_004c3fa0((byte *)s_Calling__init_temp_camera__00599a98);
  FUN_004380f0(8);
  FUN_004c3fa0((byte *)s_Calling__init_ai_cockpit_camera__00599ab4);
  FUN_004381f0(9);
  FUN_004c3fa0((byte *)s_Calling__init_topview_camera__00599ad8);
  FUN_00438290(3);
  FUN_004c3fa0((byte *)s_Calling__init_tankstation_camera_00599af8);
  FUN_00437970(4);
  FUN_004c3fa0((byte *)s_Calling__init_any_camera__00599b1c);
  FUN_00437910(6);
  FUN_00437930(7);
  FUN_004c3fa0((byte *)s_Calling__add_camera__00599b38);
  DAT_006c352c = FUN_004b0a60();
  FUN_004c3fa0((byte *)s_Calling__change_active_camera__00599b50);
  FUN_00438410(0);
  FUN_004c3fa0((byte *)s_Exiting__init_game_cameras__00599b70);
  return;
}


