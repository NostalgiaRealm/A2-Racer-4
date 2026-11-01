
/* ==== FUN_0043c0c0 @ 0043c0c0 ==== 
 * signature: undefined __stdcall FUN_0043c0c0(void)
 * body: 0043c0c0-0043c0dc;0043c0e0-0043c11d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043c0dd-0043c0df
 */

void FUN_0043c0c0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_006c3b90 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Game_actions_not_initted_0059a5e4);
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a608,0xac,iVar2);
    if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) == 0) {
      FUN_0043c1f0(iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  DAT_006c3b90 = 0;
  return;
}


