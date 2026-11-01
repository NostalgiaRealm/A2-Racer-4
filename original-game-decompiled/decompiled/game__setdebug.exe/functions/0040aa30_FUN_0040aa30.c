
/* ==== FUN_0040aa30 @ 0040aa30 ==== 
 * signature: undefined __register FUN_0040aa30(int param_1, char param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 * body: 0040aa30-0040aa9b
 */

void FUN_0040aa30(int param_1,char param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5
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
    pcStack_2c = (code *)0x40aa46;
    param_1 = FUN_00403014(param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
  }
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  ppuVar1 = &local_8;
  pcStack_2c = (code *)&stack0xfffffffc;
  FUN_00405298(param_3,(int *)&local_c);
  FUN_0040873c(local_c,param_5,param_4,(int *)ppuVar1);
  FUN_00403a0c((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_0040aaa3;
  pcStack_30 = (code *)0x40aa9b;
  FUN_004039dc((int *)&local_c,2);
  return;
}


