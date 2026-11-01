
/* ==== FUN_0040a974 @ 0040a974 ==== 
 * signature: undefined __register FUN_0040a974(int param_1, char param_2, byte * param_3, undefined4 param_4, undefined4 param_5)
 * body: 0040a974-0040a9cd
 */

void FUN_0040a974(int param_1,char param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  byte *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    pcStack_28 = (code *)0x40a988;
    param_1 = FUN_00403014(param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  pcStack_2c = thunk_FUN_00403434;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcStack_28 = (code *)&stack0xfffffffc;
  FUN_0040873c(param_3,param_5,param_4,(int *)&local_8);
  FUN_00403a0c((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_0040a9d5;
  pcStack_2c = (code *)0x40a9cd;
  FUN_004039b8((int *)&local_8);
  return;
}


