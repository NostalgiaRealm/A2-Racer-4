
/* ==== FUN_004156e0 @ 004156e0 ==== 
 * signature: undefined __register FUN_004156e0(int param_1, int param_2, undefined4 param_3)
 * body: 004156e0-0041570a
 */

void FUN_004156e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  FUN_00410104(*(int **)(param_1 + 0x10),param_2);
  *(int *)(param_2 + 4) = param_1;
  return;
}


