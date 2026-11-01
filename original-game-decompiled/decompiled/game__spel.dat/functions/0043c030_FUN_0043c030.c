
/* ==== FUN_0043c030 @ 0043c030 ==== 
 * signature: undefined __cdecl FUN_0043c030(int param_1)
 * body: 0043c030-0043c06c
 */

void __cdecl FUN_0043c030(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a550,0x62,param_1);
  if (*(int *)(&DAT_006c3ac8 + iVar1 * 0x10) != 0) {
    iVar1 = FUN_0043c070(s_C__Work_A2IV_Game_prog_ev_main_c_0059a574,100,param_1);
    (**(code **)(&DAT_006c3ac8 + iVar1 * 0x10))();
  }
  return;
}


