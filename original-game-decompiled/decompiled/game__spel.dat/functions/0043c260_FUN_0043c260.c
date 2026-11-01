
/* ==== FUN_0043c260 @ 0043c260 ==== 
 * signature: undefined __stdcall FUN_0043c260(void)
 * body: 0043c260-0043c27c;0043c280-0043c2c0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043c27d-0043c27f
 */

void FUN_0043c260(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_006c3b90 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Game_actions_not_initted_0059a818);
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a83c,0x113,iVar2);
    if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) == 0) {
      iVar1 = FUN_0043bf90(iVar2);
      if (iVar1 != 0) {
        FUN_0043c1f0(iVar2);
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  return;
}


