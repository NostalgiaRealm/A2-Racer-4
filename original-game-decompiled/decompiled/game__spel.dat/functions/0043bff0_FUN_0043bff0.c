
/* ==== FUN_0043bff0 @ 0043bff0 ==== 
 * signature: undefined __cdecl FUN_0043bff0(int param_1)
 * body: 0043bff0-0043c02c
 */

void __cdecl FUN_0043bff0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a508,0x4f,param_1);
  if (*(int *)(&DAT_006c3ac0 + iVar1 * 0x10) != 0) {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a52c,0x51,param_1);
    (**(code **)(&DAT_006c3ac0 + iVar1 * 0x10))();
  }
  return;
}


