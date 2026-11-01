
/* ==== FUN_00449ea0 @ 00449ea0 ==== 
 * signature: undefined __stdcall FUN_00449ea0(void)
 * body: 00449ea0-00449f94;00449f98-00449ff1;00449ff5-0044a004
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00449f95-00449f97 00449ff2-00449ff4
 */

void FUN_00449ea0(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  CHAR local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059fcd8);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004c3b60(pcVar2);
  wsprintfA(local_40,s_LAP_RECORD_E_d_L_d_0059fce8,DAT_006fb898,DAT_006fb958);
  DAT_006fb8ec = FUN_004c3cd0(s_BEST_TIMES_0059fcfc,local_40);
  if (DAT_006fb8ec == 0) {
    DAT_006fb8ec = 0xfffffff;
  }
  wsprintfA(local_40,s_RACE_RECORD_E_d_L_d_0059fd08,DAT_006fb898,DAT_006fb958);
  DAT_006fb8f0 = FUN_004c3cd0(s_BEST_TIMES_0059fd1c,local_40);
  if (DAT_006fb8f0 == 0) {
    DAT_006fb8f0 = 0xfffffff;
  }
  FUN_005587a3(local_40,(byte *)s_TIME_CHECK_COUNT_E_d_L_d_0059fd28);
  iVar1 = FUN_004c3cd0(s_BEST_TIMES_0059fd44,local_40);
  if ((-1 < iVar1) && (iVar1 < 10)) {
    iVar4 = 0;
    if (0 < iVar1) {
      piVar5 = &DAT_006fce50;
      do {
        wsprintfA(local_40,s_TIME_CHECK_E_d_C_d_L_d_0059fdac,DAT_006fb898,iVar4,DAT_006fb958);
        iVar3 = FUN_004c3cd0(s_BEST_TIMES_0059fdc4,local_40);
        *piVar5 = iVar3;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s___d__Value_not_found_for_chec_0059fdf4);
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s___d__Incorrect_nr_of_time_che_0059fd74);
}


