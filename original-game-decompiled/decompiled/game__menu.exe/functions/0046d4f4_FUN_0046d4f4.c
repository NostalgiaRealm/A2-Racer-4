
/* ==== FUN_0046d4f4 @ 0046d4f4 ==== 
 * signature: undefined __register FUN_0046d4f4(int param_1, undefined4 param_2)
 * body: 0046d4f4-0046d536
 */

void FUN_0046d4f4(int param_1,undefined4 param_2)

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
  FUN_0046d454(param_1,(int *)&local_8);
  (**(code **)(*local_8 + 0xc))(local_8,param_2);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0046d53e;
  pcStack_18 = (code *)0x46d536;
  FUN_00405860((int *)&local_8);
  return;
}


