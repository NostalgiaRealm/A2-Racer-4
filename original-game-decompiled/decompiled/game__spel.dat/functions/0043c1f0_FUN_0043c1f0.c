
/* ==== FUN_0043c1f0 @ 0043c1f0 ==== 
 * signature: undefined __cdecl FUN_0043c1f0(int param_1)
 * body: 0043c1f0-0043c20c;0043c210-0043c249;0043c24d-0043c25d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043c20d-0043c20f 0043c24a-0043c24c
 */

void __cdecl FUN_0043c1f0(int param_1)

{
  int iVar1;
  
  if (DAT_006c3b90 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Game_Actions_not_initted_0059a74c);
  }
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a770,0xef,param_1);
  if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Trying_to_delete_a_free_g_0059a7b8);
  }
  FUN_0043c030(param_1);
  FUN_0043bf10(param_1);
  return;
}


