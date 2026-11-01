
/* ==== FUN_004135d8 @ 004135d8 ==== 
 * signature: undefined __register FUN_004135d8(int param_1, undefined4 param_2, uint param_3)
 * body: 004135d8-00413614
 */

void FUN_004135d8(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = 0;
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0041322c(param_1,&local_8,param_3);
  FUN_00413470(param_1,extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0041361c;
  pcStack_14 = (code *)0x413614;
  FUN_004039b8(&local_8);
  return;
}


