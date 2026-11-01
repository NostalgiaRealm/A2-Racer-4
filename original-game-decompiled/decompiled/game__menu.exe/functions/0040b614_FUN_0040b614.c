
/* ==== FUN_0040b614 @ 0040b614 ==== 
 * signature: undefined __register FUN_0040b614(int param_1, char param_2, byte * param_3, undefined4 param_4, undefined4 param_5)
 * body: 0040b614-0040b66d
 */

void FUN_0040b614(int param_1,char param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

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
    pcStack_28 = (code *)0x40b628;
    param_1 = FUN_0040329c(param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  pcStack_2c = thunk_FUN_004036bc;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  pcStack_28 = (code *)&stack0xfffffffc;
  FUN_00409254(param_3,param_5,param_4,(int *)&local_8);
  FUN_00403cb0((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_30;
  pcStack_28 = FUN_0040b675;
  pcStack_2c = (code *)0x40b66d;
  FUN_00403c5c((int *)&local_8);
  return;
}


