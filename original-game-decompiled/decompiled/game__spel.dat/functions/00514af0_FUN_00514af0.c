
/* ==== FUN_00514af0 @ 00514af0 ==== 
 * signature: int __cdecl FUN_00514af0(int * param_1)
 * body: 00514af0-00514b4a
 */

int __cdecl FUN_00514af0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = *param_1;
  if ((param_1[iVar3 + 1] != 0) &&
     (iVar2 = param_1[iVar3 + 1] + -1, bVar1 = iVar3 < iVar2, iVar3 = iVar2, bVar1)) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_internal_error__qh_setsize_005ba064);
    FUN_005149f0(DAT_0074c784,s_set__005ba05c,param_1);
    FUN_0051e8e0(5,(int *)0x0);
    return iVar2;
  }
  return iVar3;
}


