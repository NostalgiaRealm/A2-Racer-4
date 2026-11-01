
/* ==== FUN_00444c40 @ 00444c40 ==== 
 * signature: undefined __cdecl FUN_00444c40(int param_1, int param_2, int param_3)
 * body: 00444c40-00444d16
 */

void __cdecl FUN_00444c40(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  float local_80 [16];
  float local_40 [16];
  
  FUN_004449b0(param_2,local_40,local_80);
  FUN_00444a60(param_3,(int)local_40,(int)local_80);
  FUN_00444ac0(0,(int)local_40,(int)local_80);
  FUN_00444b40(param_1,local_40,local_80);
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006ce140 + iVar1 * 0x1910) = 2;
  FUN_004a6800(0x7128b0);
  lVar2 = __ftol();
  iVar1 = FUN_004447a0(param_1);
  *(int *)(&DAT_006cfa48 + iVar1 * 0x1910) = (int)lVar2;
  iVar1 = FUN_004447a0(param_1);
  *(undefined4 *)(&DAT_006cfa44 + iVar1 * 0x1910) = 1;
  return;
}


