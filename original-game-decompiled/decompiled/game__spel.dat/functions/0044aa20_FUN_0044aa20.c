
/* ==== FUN_0044aa20 @ 0044aa20 ==== 
 * signature: undefined __stdcall FUN_0044aa20(void)
 * body: 0044aa20-0044aacc;0044aad0-0044ab7f;0044ab83-0044aba9;0044abad-0044ac3c;0044ac40-0044ac66;0044ac6a-0044aca8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044aacd-0044aacf 0044ab80-0044ab82 0044abaa-0044abac 0044ac3d-0044ac3f 0044ac67-0044ac69
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044aa20(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  float *pfVar8;
  CHAR local_e8 [32];
  byte local_c8 [200];
  
  FUN_004c3fa0((byte *)s_Entry_load_player_info_005a058c);
  iVar2 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a05a4);
  pcVar3 = *(char **)(iVar2 + 4);
  iVar2 = 0;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004c3b60(pcVar3);
  uVar4 = FUN_004c3cd0(s_PLAYER_005a05bc,s_money_005a05b4);
  FUN_004502e0(uVar4);
  FUN_00450260(0);
  FUN_00450290(0);
  uVar4 = FUN_004c3cd0(s_PLAYER_005a05d4,s_turbo_amount_005a05c4);
  FUN_00450110(uVar4);
  FUN_004c3fa0((byte *)s_set_game_playercar_005a05dc);
  DAT_006fba5c = FUN_004c3cd0(s_PLAYER_005a05f4,&DAT_005a05f0);
  if ((DAT_006fba5c < 0) || (10 < DAT_006fba5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__set_player_info___s__d____Inval_005a0620);
  }
  DAT_006fba30 = FUN_004c3cd0(s_PLAYER_005a0654,s_copland_005a064c);
  DAT_006fbaa4 = DAT_005d2ab0;
  if (DAT_006fb964 == 0) {
    DAT_006fbaa4 = 0;
  }
  _DAT_005a16fc = FUN_004c3cd0(s_PLAYER_005a066c,s_RESETWAITTIME_005a065c);
  FUN_005587a3(local_e8,(byte *)s_DAMAGE_MESH_005a0674);
  FUN_004c3d10(s_PLAYER_005a0680,local_e8,(LPSTR)local_c8,199);
  FUN_004c3fa0((byte *)s_Buffer_read___s__005a0688);
  iVar5 = -1;
  pbVar7 = local_c8;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  if (iVar5 == -2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__load_player_info___s__d____No_v_005a06c0);
  }
  iVar5 = FUN_004c3d60(local_c8,(uint *)0x0);
  if (iVar5 != 8) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__load_player_info___s__d____Inva_005a0724);
  }
  iVar5 = 0;
  puVar6 = &DAT_006fbb10;
  do {
    uVar4 = FUN_004c3ec0(iVar5);
    *puVar6 = uVar4;
    FUN_004c3ec0(iVar5);
    FUN_004c3fa0((byte *)s_Region__d__value__d__005a0770);
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)puVar6 < 0x6fbb30);
  FUN_005587a3(local_e8,(byte *)s_DAMAGE_VALUE_005a0788);
  FUN_004c3d10(s_PLAYER_005a0798,local_e8,(LPSTR)local_c8,199);
  FUN_004c3fa0((byte *)s_Buffer_read___s__005a07a0);
  iVar5 = -1;
  pbVar7 = local_c8;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  if (iVar5 == -2) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__load_player_info___s__d____No_v_005a07d8);
  }
  iVar5 = FUN_004c3d60(local_c8,(uint *)0x0);
  if (iVar5 != 8) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__load_player_info___s__d____Inva_005a083c);
  }
  pfVar8 = (float *)&DAT_006fbaf0;
  do {
    iVar5 = FUN_004c3ec0(iVar2);
    *pfVar8 = (float)iVar5;
    FUN_004c3ec0(iVar2);
    FUN_004c3fa0((byte *)s_Region__d__value__f__005a0888);
    pfVar8 = pfVar8 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar8 < 0x6fbb10);
  return;
}


