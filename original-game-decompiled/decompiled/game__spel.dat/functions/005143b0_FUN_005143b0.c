
/* ==== FUN_005143b0 @ 005143b0 ==== 
 * signature: int __cdecl FUN_005143b0(int * param_1, int param_2)
 * body: 005143b0-00514442
 */

int __cdecl FUN_005143b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  if ((param_2 < 0) ||
     (((param_1[iVar1 + 1] != 0 && (param_1[iVar1 + 1] + -1 <= param_2)) || (iVar1 <= param_2)))) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_setaddn_005b9ee4);
    FUN_005149f0(DAT_0074c784,&DAT_00712694,param_1);
    FUN_0051e8e0(5,(int *)0x0);
  }
  iVar2 = param_1[param_2 + 2];
  iVar3 = param_1[param_2 + 1];
  piVar5 = param_1 + param_2 + 2;
  param_1[param_2 + 1] = iVar2;
  piVar4 = piVar5;
  while (iVar2 != 0) {
    piVar4 = piVar4 + 1;
    iVar2 = *piVar4;
    *piVar5 = iVar2;
    piVar5 = piVar5 + 1;
  }
  iVar2 = param_1[iVar1 + 1];
  param_1[iVar1 + 1] = iVar2 + -1;
  if (iVar2 == 0) {
    param_1[iVar1 + 1] = *param_1;
  }
  return iVar3;
}


