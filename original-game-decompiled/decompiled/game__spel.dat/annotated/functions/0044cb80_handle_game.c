
/* ==== handle_game @ 0044cb80 ==== 
 * signature: undefined __stdcall handle_game(void)
 * body: 0044cb80-0044cd96
 * note: ANALYST: Per-frame game update in the main loop. [confidence: confirmed] [evidence: caller log 'Calling handle_game']
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ANALYST: Per-frame game update in the main loop. [confidence: confirmed] [evidence: caller log
   'Calling handle_game'] */

void handle_game(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_48 [8];
  undefined4 uStack_28;
  
  FUN_004c3fa0((byte *)s_handle_game___005a1924);
  FUN_004c3fa0((byte *)s_calling__>_gt_update_timer___005a1934);
  FUN_004a6700((int *)&DAT_007128b0);
  FUN_00469fa0();
  FUN_0046fdb0();
  FUN_004c3fa0((byte *)s_calling__>_rceng_handle_objects__005a1954);
  FUN_004a9870(*(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50),DAT_006fb8b0 * 2);
  FUN_004c3fa0((byte *)s_calling__>_ai_check_cars_outside_005a1978);
  FUN_0041ca20(DAT_006fba58);
  uStack_28 = 0x44cc01;
  FUN_004c3fa0((byte *)s_calling__>_handle_game_cameras___005a19ac);
  uStack_28 = 0x44cc06;
  FUN_00438670();
  uStack_28 = 0x44cc0b;
  FUN_004509b0();
  puVar3 = (undefined4 *)
           (DAT_0073b0d0 + *(int *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
  puVar4 = auStack_48;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  fVar5 = FUN_004a6800(0x7128b0);
  FUN_0045dc00((float)fVar5);
  FUN_0044e830();
  FUN_00444de0(DAT_006fba58,DAT_006fbad0);
  FUN_004c3fa0((byte *)s_calling__>_check_game_keys___005a19d0);
  FUN_0044cf90();
  FUN_00427130(&DAT_005d3460);
  FUN_0044c950();
  fVar5 = FUN_004031e0(0x6fbabc);
  if ((float10)_DAT_005a16fc < fVar5) {
    DAT_0059becc = 0x44;
  }
  FUN_004c3fa0((byte *)s_calling__>_render_game___005a19f0);
  FUN_0044da30();
  FUN_004aa0c0();
  FUN_00464cf0();
  FUN_00464cb0();
  FUN_004c3fa0((byte *)s_calling__>_handle_game_actions___005a1a0c);
  FUN_0043c260();
  FUN_0044c8c0();
  FUN_004c3fa0((byte *)s_calling__>_check_player_damage___005a1a30);
  if (DAT_006fb920 == 0) {
    FUN_004c3fa0((byte *)s_calling__>_draw_2d_display___005a1a54);
    thunk_FUN_0043f8a0();
  }
  pvVar1 = (void *)FUN_00472230();
  FUN_00471bd0(pvVar1);
  FUN_004c3fa0((byte *)s_calling__>_update_game_screen___005a1a74);
  winmain();
  FUN_0044cb30();
  if (DAT_006fb8d8 != 0) {
    winmain();
    winmain();
    FUN_0044ca80();
    DAT_006fb8d8 = 0;
  }
  DAT_006fb8dc = DAT_006fb8dc + 1;
  FUN_004c3fa0((byte *)s_end_of_handle_game___005a1a98);
  return;
}


