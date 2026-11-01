
/* ==== FUN_00441430 @ 00441430 ==== 
 * signature: undefined __stdcall FUN_00441430(void)
 * body: 00441430-0044148d;00441496-004414df
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0044148e-00441495
 */

void FUN_00441430(void)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  CHAR local_40 [64];
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_System_Settings_0059cd7c);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  write_ini_value_setting(s_PROGRESS_0059cd94,s_COUNT_0059cd8c,DAT_006cd044);
  if ((-1 < (int)DAT_006cd044) && ((int)DAT_006cd044 < 0x3e9)) {
    iVar1 = 0;
    if (0 < (int)DAT_006cd044) {
      puVar3 = &DAT_006cd048;
      do {
        wsprintfA(local_40,s_percent_d_0059cdf0,iVar1);
        write_ini_value_setting(s_PROGRESS_0059cdfc,local_40,*puVar3);
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar1 < (int)DAT_006cd044);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__g_nr_times_called_incorr_0059cdc4);
}


