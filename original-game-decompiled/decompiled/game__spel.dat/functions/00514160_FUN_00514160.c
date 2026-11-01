
/* ==== FUN_00514160 @ 00514160 ==== 
 * signature: undefined __cdecl FUN_00514160(int * param_1)
 * body: 00514160-005141e3
 */

void __cdecl FUN_00514160(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = iVar1;
    if (param_1[iVar1 + 1] != 0) {
      iVar2 = param_1[iVar1 + 1] + -1;
    }
    if ((iVar1 < iVar2) || (iVar1 == 0)) {
      pcVar3 = s_qhull_internal_error__qh_setchec_005b9f38;
    }
    else {
      if (param_1[iVar2 + 1] == 0) {
        return;
      }
      pcVar3 = s_qhull_internal_error__qh_setchec_005b9f90;
    }
    FUN_00558953(DAT_0074c784,(byte *)pcVar3);
    FUN_005149f0(DAT_0074c784,s_ERRONEOUS_005b9f2c,param_1);
    FUN_0051e8e0(5,(int *)0x0);
  }
  return;
}


