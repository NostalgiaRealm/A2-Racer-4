
/* ==== FUN_0044ae80 @ 0044ae80 ==== 
 * signature: undefined __stdcall FUN_0044ae80(void)
 * body: 0044ae80-0044afb6
 */

void FUN_0044ae80(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint *puVar4;
  CHAR local_40 [64];
  
  iVar3 = 0;
  if (DAT_006fba98 != 0) {
    iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_005a0a58);
    pcVar2 = *(char **)(iVar1 + 4);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    set_ini_filename(pcVar2);
    wsprintfA(local_40,s_LAP_RECORD_E_d_L_d_005a0a68,DAT_006fb898,DAT_006fb958);
    write_ini_value_setting(s_BEST_TIMES_005a0a7c,local_40,DAT_006fb8ec);
    wsprintfA(local_40,s_RACE_RECORD_E_d_L_d_005a0a88,DAT_006fb898,DAT_006fb958);
    write_ini_value_setting(s_BEST_TIMES_005a0a9c,local_40,DAT_006fb8f0);
    if (((int)DAT_005a3ee8 < 0) || (9 < (int)DAT_005a3ee8)) {
      DAT_005a3ee8 = 0;
    }
    FUN_005587a3(local_40,(byte *)s_TIME_CHECK_COUNT_E_d_L_d_005a0aa8);
    write_ini_value_setting(s_BEST_TIMES_005a0ac4,local_40,DAT_005a3ee8);
    if (0 < (int)DAT_005a3ee8) {
      puVar4 = &DAT_006fce50;
      do {
        wsprintfA(local_40,s_TIME_CHECK_E_d_C_d_L_d_005a0ad0,DAT_006fb898,iVar3,DAT_006fb958);
        write_ini_value_setting(s_BEST_TIMES_005a0ae8,local_40,*puVar4);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < (int)DAT_005a3ee8);
    }
  }
  return;
}


