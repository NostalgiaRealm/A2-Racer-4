
/* ==== FUN_00514330 @ 00514330 ==== 
 * signature: int __cdecl FUN_00514330(int * param_1, int param_2)
 * body: 00514330-005143a4
 */

int __cdecl FUN_00514330(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + *param_1 + 1;
  iVar2 = param_1[*param_1 + 1];
  *piVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    *piVar1 = *param_1;
  }
  if ((param_2 < 0) || (*piVar1 <= param_2)) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_setaddn_005b9ee4);
    FUN_005149f0(DAT_0074c784,&DAT_00712694,param_1);
    FUN_0051e8e0(5,(int *)0x0);
  }
  iVar2 = *piVar1;
  iVar3 = param_1[param_2 + 1];
  param_1[param_2 + 1] = param_1[iVar2];
  param_1[iVar2] = 0;
  return iVar3;
}


