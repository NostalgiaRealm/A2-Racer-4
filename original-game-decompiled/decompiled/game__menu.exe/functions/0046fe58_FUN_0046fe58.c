
/* ==== FUN_0046fe58 @ 0046fe58 ==== 
 * signature: undefined __register FUN_0046fe58(int * param_1, undefined4 param_2, int * param_3)
 * body: 0046fe58-0046fea5
 */

void FUN_0046fe58(int *param_1,undefined4 param_2,int *param_3)

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
  FUN_0046feb4(param_1,param_2,(VARIANTARG *)&local_14.n2);
  FUN_00404da4(param_3,(VARIANTARG *)&local_14.n2);
  *in_FS_OFFSET = uStack_2c;
  pcStack_24 = FUN_0046fead;
  pcStack_28 = (code *)0x46fea5;
  FUN_00405038((VARIANTARG *)&local_14.n2);
  return;
}


