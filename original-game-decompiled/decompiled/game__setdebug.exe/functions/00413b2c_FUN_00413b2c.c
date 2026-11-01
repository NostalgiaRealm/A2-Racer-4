
/* ==== FUN_00413b2c @ 00413b2c ==== 
 * signature: undefined __register FUN_00413b2c(int param_1, int param_2, undefined4 param_3)
 * body: 00413b2c-00413b56
 */

void FUN_00413b2c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  FUN_0040eec8(*(int **)(param_1 + 0x10),param_2);
  *(int *)(param_2 + 4) = param_1;
  return;
}


