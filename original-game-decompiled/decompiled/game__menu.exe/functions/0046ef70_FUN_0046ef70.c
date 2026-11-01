
/* ==== FUN_0046ef70 @ 0046ef70 ==== 
 * signature: undefined __register FUN_0046ef70(int param_1, VARIANTARG * param_2)
 * body: 0046ef70-0046efad
 */

void FUN_0046ef70(int param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  int *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_0046d4f4(param_1,&local_8);
  FUN_00404f50(param_2,local_8);
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0046efb5;
  pcStack_14 = (code *)0x46efad;
  FUN_00405860((int *)&local_8);
  return;
}


