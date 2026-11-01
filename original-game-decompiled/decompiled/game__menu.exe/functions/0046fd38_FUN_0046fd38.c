
/* ==== FUN_0046fd38 @ 0046fd38 ==== 
 * signature: undefined __register FUN_0046fd38(int * param_1, VARIANTARG * param_2)
 * body: 0046fd38-0046fd8a
 */

void FUN_0046fd38(int *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0046f49c(param_1);
  FUN_00405894((int *)&local_8,(undefined4 *)param_1[0x80]);
  FUN_00404f50(param_2,local_8);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0046fd92;
  pcStack_18 = (code *)0x46fd8a;
  FUN_00405860((int *)&local_8);
  return;
}


