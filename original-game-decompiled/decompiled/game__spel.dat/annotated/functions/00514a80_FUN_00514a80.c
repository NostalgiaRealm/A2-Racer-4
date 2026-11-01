
/* ==== FUN_00514a80 @ 00514a80 ==== 
 * signature: undefined __cdecl FUN_00514a80(int * param_1, int param_2, int param_3)
 * body: 00514a80-00514ae1
 */

void __cdecl FUN_00514a80(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = param_1[1];
  piVar3 = param_1;
  while ((piVar2 = piVar3 + 1, iVar1 != param_2 && (iVar1 != 0))) {
    iVar1 = piVar3[2];
    piVar3 = piVar2;
  }
  if (*piVar2 == 0) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_setrepl_005ba01c);
    FUN_005149f0(DAT_0074c784,&DAT_00712694,param_1);
    FUN_0051e8e0(5,(int *)0x0);
    return;
  }
  *piVar2 = param_3;
  return;
}


