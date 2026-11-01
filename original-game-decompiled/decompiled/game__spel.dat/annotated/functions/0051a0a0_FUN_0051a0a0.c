
/* ==== FUN_0051a0a0 @ 0051a0a0 ==== 
 * signature: undefined __cdecl FUN_0051a0a0(int * param_1, uint param_2, int param_3)
 * body: 0051a0a0-0051a114
 */

void __cdecl FUN_0051a0a0(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_1[iVar2 + 1] != 0) {
    iVar2 = param_1[iVar2 + 1] + -1;
  }
  iVar1 = FUN_005164c0(param_2);
  if (-1 < iVar1) {
    if (iVar1 < iVar2) {
      param_1[iVar1 + 1] = param_3;
      return;
    }
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_errror__point_add_005bc630);
    FUN_0051e8e0(5,(int *)0x0);
    return;
  }
  FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_warning__point_ad_005bc674);
  return;
}


