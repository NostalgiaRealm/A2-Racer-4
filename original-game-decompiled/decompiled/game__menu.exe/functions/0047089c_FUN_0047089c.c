
/* ==== FUN_0047089c @ 0047089c ==== 
 * signature: undefined __register FUN_0047089c(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0047089c-004708e9
 */

void FUN_0047089c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  _union_2683 local_14;
  
  pcStack_24 = (code *)&stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  pcStack_28 = thunk_FUN_004036bc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00404ffc((VARIANTARG *)&local_14.n2,param_3);
  FUN_0047055c(param_1,param_2,&local_14);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_004708f1;
  pcStack_28 = (code *)0x4708e9;
  FUN_00405038((VARIANTARG *)&local_14.n2);
  return;
}


