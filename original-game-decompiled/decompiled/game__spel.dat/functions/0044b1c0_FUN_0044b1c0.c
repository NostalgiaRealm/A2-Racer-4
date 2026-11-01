
/* ==== FUN_0044b1c0 @ 0044b1c0 ==== 
 * signature: undefined __stdcall FUN_0044b1c0(void)
 * body: 0044b1c0-0044b4bf
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b1c0(void)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  CHAR local_428 [32];
  CHAR local_408 [1028];
  
  FUN_004c3fa0((byte *)s_Entry_write_player_info_005a0b88);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a0ba4);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  FUN_004c3c70(s_PLAYER_005a0bc0,s_finished_005a0bb4,DAT_006fba98);
  iVar1 = 0;
  if (0 < (int)DAT_006fb8f8) {
    puVar4 = &DAT_006fbe40;
    do {
      iVar1 = iVar1 + 1;
      FUN_005587a3(local_428,(byte *)s_lap__d_time_005a0bc8);
      FUN_004c3c70(s_PLAYER_005a0bd4,local_428,*puVar4);
      puVar4 = puVar4 + 1;
    } while (iVar1 < (int)DAT_006fb8f8);
  }
  FUN_004c3c70(s_PLAYER_005a0be8,s_lapcount_005a0bdc,DAT_006fb8f8);
  FUN_00450290(DAT_006fcf8c / DAT_005a3eec);
  iVar1 = FUN_00448470(0xb);
  if (iVar1 != 0) {
    pcVar5 = s_out_of_time_005a0c04;
    pcVar2 = s_PLAYER_005a0c10;
  }
  else {
    pcVar5 = s_out_of_time_005a0bf0;
    pcVar2 = s_PLAYER_005a0bfc;
  }
  FUN_004c3c70(pcVar2,pcVar5,(uint)(iVar1 == 0));
  iVar1 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  iVar1 = FUN_00425300(iVar1);
  if (iVar1 < 1000) {
    pcVar5 = s_total_loss_005a0c2c;
    pcVar2 = s_PLAYER_005a0c38;
  }
  else {
    pcVar5 = s_total_loss_005a0c18;
    pcVar2 = s_PLAYER_005a0c24;
  }
  FUN_004c3c70(pcVar2,pcVar5,(uint)(iVar1 >= 1000));
  if (DAT_006fba98 != 0) {
    uVar3 = FUN_004502d0();
    FUN_004c3c70(s_PLAYER_005a0c48,s_money_005a0c40,uVar3);
    uVar3 = FUN_00450100();
    FUN_004c3c70(s_PLAYER_005a0c60,s_turbo_amount_005a0c50,uVar3);
    uVar3 = FUN_00450280();
    FUN_004c3c70(s_PLAYER_005a0c74,s_radarbonus_005a0c68,uVar3);
    uVar3 = FUN_004502b0();
    FUN_004c3c70(s_PLAYER_005a0c90,s_checkpoint_money_005a0c7c,uVar3);
    uVar3 = FUN_00450410();
    FUN_004c3c70(s_PLAYER_005a0ca0,s_damage_005a0c98,uVar3);
    FUN_004c3c70(s_PLAYER_005a0cb4,s_tracktime_005a0ca8,DAT_006fbaa0);
    FUN_004c3c70(s_PLAYER_005a0cc8,s_position_005a0cbc,DAT_006fbaa4);
    FUN_005587a3(local_428,(byte *)s_DAMAGE_MESH_005a0cd0);
    FUN_005587a3(local_408,(byte *)s__d__d__d__d__d__d__d__d_005a0cdc);
    FUN_004c3c30(s_PLAYER_005a0cf4,local_428,local_408);
    FUN_005587a3(local_428,(byte *)s_DAMAGE_VALUE_005a0cfc);
    FUN_005587a3(local_408,(byte *)s__f__f__f__f__f__f__f__f_005a0d0c);
    FUN_004c3c30(s_PLAYER_005a0d24,local_428,local_408);
    iVar1 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
    uVar3 = FUN_00425300(iVar1);
    FUN_004c3c70(s_PLAYER_005a0d34,s_damage_005a0d2c,uVar3);
  }
  return;
}


