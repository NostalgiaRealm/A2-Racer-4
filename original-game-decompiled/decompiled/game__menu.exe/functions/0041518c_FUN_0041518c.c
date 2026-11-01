
/* ==== FUN_0041518c @ 0041518c ==== 
 * signature: undefined __register FUN_0041518c(int param_1, undefined4 param_2, uint param_3)
 * body: 0041518c-004151c8
 */

void FUN_0041518c(int param_1,undefined4 param_2,uint param_3)

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
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00414de0(param_1,&local_8,param_3);
  FUN_00415024(param_1,extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_004151d0;
  pcStack_14 = (code *)0x4151c8;
  FUN_00403c5c(&local_8);
  return;
}


