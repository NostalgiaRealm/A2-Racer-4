
/* ==== FUN_0043c120 @ 0043c120 ==== 
 * signature: undefined __cdecl FUN_0043c120(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 0043c120-0043c13c;0043c140-0043c1e3
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0043c13d-0043c13f
 */

void __cdecl FUN_0043c120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_006c3b90 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Game_Actions_not_initted_0059a650);
  }
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a674,0xcb,param_1);
  if (*(int *)(&DAT_006c3acc + iVar1 * 0x10) != 0) {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a698,0xd1,param_1);
    *(undefined4 *)(&DAT_006c3ac4 + iVar1 * 0x10) = param_3;
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a6bc,0xd2,param_1);
    *(undefined4 *)(&DAT_006c3ac0 + iVar1 * 0x10) = param_2;
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a6e0,0xd3,param_1);
    *(undefined4 *)(&DAT_006c3ac8 + iVar1 * 0x10) = param_4;
    FUN_0043bff0(param_1);
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a704,0xd9,param_1);
    *(undefined4 *)(&DAT_006c3acc + iVar1 * 0x10) = 0;
  }
  return;
}


