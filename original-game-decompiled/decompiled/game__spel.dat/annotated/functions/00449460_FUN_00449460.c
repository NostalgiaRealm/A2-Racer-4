
/* ==== FUN_00449460 @ 00449460 ==== 
 * signature: undefined __stdcall FUN_00449460(void)
 * body: 00449460-004494c6;004494ca-004494ca
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004494c7-004494c9
 */

void FUN_00449460(void)

{
  int iVar1;
  char *pcVar2;
  
  FUN_004489a0(&DAT_006fa558,(byte *)s_INTEL_INI_0059f474,(byte *)s_AI_Settings_0059f468);
  iVar1 = FUN_00448c90(&DAT_006fa558,(byte *)s_AI_Settings_0059f480);
  pcVar2 = *(char **)(iVar1 + 4);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  set_ini_filename(pcVar2);
  DAT_005d2ab0 = read_ini_value_setting(s_General_0059f498,s_NrOpponents_0059f48c);
  if (6 < DAT_005d2ab0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s___s___d_Too_many_opponents_for_t_0059f4c4);
  }
  return;
}


