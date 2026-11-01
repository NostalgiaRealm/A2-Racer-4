
/* ==== FUN_00444d20 @ 00444d20 ==== 
 * signature: undefined __cdecl FUN_00444d20(int param_1, int param_2, int param_3)
 * body: 00444d20-00444dd1
 */

void __cdecl FUN_00444d20(int param_1,int param_2,int param_3)

{
  int iVar1;
  float local_80 [16];
  float local_40 [16];
  
  iVar1 = FUN_004447a0(param_1);
  if (*(int *)(&DAT_006ce140 + iVar1 * 0x1910) + 2 < 100) {
    FUN_004449b0(param_2,local_40,local_80);
    FUN_00444a60(param_3,(int)local_40,(int)local_80);
    FUN_00444ac0(0,(int)local_40,(int)local_80);
    FUN_00444b40(param_1,local_40,local_80);
    iVar1 = FUN_004447a0(param_1);
    *(int *)(&DAT_006ce140 + iVar1 * 0x1910) = *(int *)(&DAT_006ce140 + iVar1 * 0x1910) + 2;
  }
  return;
}


