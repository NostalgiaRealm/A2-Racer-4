
/* ==== FUN_0042d1e0 @ 0042d1e0 ==== 
 * signature: undefined __register FUN_0042d1e0(int * param_1, int param_2, undefined4 param_3)
 * body: 0042d1e0-0042d204
 */

void FUN_0042d1e0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
    *param_1 = iVar1;
  }
  FUN_00410104((int *)*param_1,param_2);
  return;
}


