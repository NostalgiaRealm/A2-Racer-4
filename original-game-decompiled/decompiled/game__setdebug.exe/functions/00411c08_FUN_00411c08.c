
/* ==== FUN_00411c08 @ 00411c08 ==== 
 * signature: undefined __register FUN_00411c08(int param_1, undefined4 param_2, uint param_3)
 * body: 00411c08-00411c79
 */

void FUN_00411c08(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_c;
  char local_5;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_c = 0;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0041176c(param_1,6,param_3);
  FUN_00411b6c(param_1,(undefined4 *)&local_5,1);
  if (local_5 != '\x01') {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_0041322c(param_1,&local_c,extraout_ECX);
    FUN_00411700();
  }
  FUN_00411b6c(param_1,(undefined4 *)&local_5,1);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00411c81;
  pcStack_18 = (code *)0x411c79;
  FUN_004039b8(&local_c);
  return;
}


