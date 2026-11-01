
/* ==== FUN_00449e20 @ 00449e20 ==== 
 * signature: undefined __stdcall FUN_00449e20(void)
 * body: 00449e20-00449e78;00449e7c-00449e9c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00449e79-00449e7b
 */

void FUN_00449e20(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_Game_Settings_0059fc60);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_006fb8fc = read_ini_value_setting(s_OPTIONS_0059fc78,s_NRLAPS_0059fc70);
  if ((0 < DAT_006fb8fc) && (DAT_006fb8fc < 1000)) {
    if ((&DAT_006fa58c)[DAT_006fb898 * 0x25] == 0) {
      DAT_006fb8fc = 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Incorrect_value_for_nr_o_0059fca4);
}


