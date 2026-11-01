
/* ==== FUN_0042dd6c @ 0042dd6c ==== 
 * signature: undefined __register FUN_0042dd6c(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0042dd6c-0042ddd6
 */

void FUN_0042dd6c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_c;
  int local_8;
  
  pcStack_14 = (code *)0x42dd7e;
  local_8 = param_1;
  FUN_00403dec(param_1);
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pcStack_14 = (code *)&stack0xfffffffc;
  local_c = FUN_00403c38(local_8);
  (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),&local_c,4);
  if (0 < local_c) {
    (**(code **)(**(int **)(param_4 + -4) + 8))(*(int **)(param_4 + -4),local_8,local_c);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0042ddde;
  pcStack_18 = (code *)0x42ddd6;
  FUN_004039b8(&local_8);
  return;
}


