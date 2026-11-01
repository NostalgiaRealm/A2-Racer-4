
/* ==== FUN_00514dd0 @ 00514dd0 ==== 
 * signature: undefined __cdecl FUN_00514dd0(int * param_1, int param_2, int param_3)
 * body: 00514dd0-00514e46
 */

void __cdecl FUN_00514dd0(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (((param_2 < 0) || (param_3 <= param_2)) || (*param_1 < param_3)) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_setzero_005ba264);
    FUN_005149f0(DAT_0074c784,&DAT_00712694,param_1);
    FUN_0051e8e0(5,(int *)0x0);
  }
  param_1[*param_1 + 1] = param_3 + 1;
  piVar3 = param_1 + param_2 + 1;
  for (uVar1 = (param_3 - param_2) * 4 + 4U >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)piVar3 = 0;
    piVar3 = (int *)((int)piVar3 + 1);
  }
  return;
}


