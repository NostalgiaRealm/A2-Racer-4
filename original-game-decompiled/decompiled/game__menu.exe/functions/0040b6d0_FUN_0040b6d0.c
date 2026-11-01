
/* ==== FUN_0040b6d0 @ 0040b6d0 ==== 
 * signature: undefined __register FUN_0040b6d0(int param_1, char param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 * body: 0040b6d0-0040b73b
 */

void FUN_0040b6d0(int param_1,char param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5
                 )

{
  undefined4 *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar1;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  byte *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = (byte *)0x0;
  if (param_2 != '\0') {
    pcStack_2c = (code *)0x40b6e6;
    param_1 = FUN_0040329c(param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
  }
  pcStack_30 = thunk_FUN_004036bc;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  ppuVar1 = &local_8;
  pcStack_2c = (code *)&stack0xfffffffc;
  FUN_00405808(param_3,(int *)&local_c);
  FUN_00409254(local_c,param_5,param_4,(int *)ppuVar1);
  FUN_00403cb0((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_0040b743;
  pcStack_30 = (code *)0x40b73b;
  FUN_00403c80((int *)&local_c,2);
  return;
}


