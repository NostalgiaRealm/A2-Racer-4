
/* ==== FUN_0043bf90 @ 0043bf90 ==== 
 * signature: undefined __cdecl FUN_0043bf90(int param_1)
 * body: 0043bf90-0043bfc3;0043bfc7-0043bfe1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043bfc4-0043bfc6
 */

void __cdecl FUN_0043bf90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a468,0x3a,param_1);
  if (*(int *)(&DAT_006c3ac4 + iVar1 * 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__NULL_pointer_for_command_0059a4b0);
  }
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a4e4,0x3f,param_1);
  (**(code **)(&DAT_006c3ac4 + iVar1 * 0x10))();
  return;
}


