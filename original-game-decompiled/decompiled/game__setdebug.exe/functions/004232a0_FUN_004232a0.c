
/* ==== FUN_004232a0 @ 004232a0 ==== 
 * signature: undefined __register FUN_004232a0(int * param_1, int param_2, undefined4 param_3)
 * body: 004232a0-004232c4
 */

void FUN_004232a0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*param_1 == 0) {
    iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
    *param_1 = iVar1;
  }
  FUN_0040eec8((int *)*param_1,param_2);
  return;
}


