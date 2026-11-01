
/* ==== FUN_00437f20 @ 00437f20 ==== 
 * signature: undefined __register FUN_00437f20(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00437f20-00437f8a
 */

void FUN_00437f20(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_c;
  int local_8;
  
  pcStack_14 = (code *)0x437f32;
  local_8 = param_1;
  FUN_00404090(param_1);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  local_c = FUN_00403edc(local_8);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_c,4);
  if (0 < local_c) {
    (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),local_8,local_c);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00437f92;
  pcStack_18 = (code *)0x437f8a;
  FUN_00403c5c(&local_8);
  return;
}


