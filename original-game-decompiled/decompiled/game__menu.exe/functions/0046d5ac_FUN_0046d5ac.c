
/* ==== FUN_0046d5ac @ 0046d5ac ==== 
 * signature: undefined __register FUN_0046d5ac(undefined4 param_1, undefined4 param_2)
 * body: 0046d5ac-0046d5ee
 */

void FUN_0046d5ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  func_0x0046d4a4(param_1,&local_8);
  (**(code **)(*local_8 + 0xc))(local_8,param_2);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0046d5f6;
  pcStack_18 = (code *)0x46d5ee;
  FUN_00405860((int *)&local_8);
  return;
}


