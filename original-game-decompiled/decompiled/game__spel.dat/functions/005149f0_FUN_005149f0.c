
/* ==== FUN_005149f0 @ 005149f0 ==== 
 * signature: undefined __cdecl FUN_005149f0(int * param_1, undefined4 param_2, int * param_3)
 * body: 005149f0-00514a75
 */

void __cdecl FUN_005149f0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
    if (param_3[iVar1 + 1] != 0) {
      iVar1 = param_3[iVar1 + 1] + -1;
    }
    FUN_00558953(param_1,(byte *)s__s_set__p_maxsize__d_size__d_ele_005b9fe8);
    if (*param_3 < iVar1) {
      iVar1 = *param_3 + 1;
    }
    if (0 < iVar1) {
      do {
        FUN_00558953(param_1,(byte *)&PTR_DAT_005b9fe4);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00558953(param_1,&DAT_005ae60c);
    return;
  }
  FUN_00558953(param_1,(byte *)s__s_set_is_null_005ba00c);
  return;
}


