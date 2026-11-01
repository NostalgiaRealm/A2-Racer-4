
/* ==== FUN_00496dc4 @ 00496dc4 ==== 
 * signature: undefined FUN_00496dc4(void)
 * body: 00496dc4-00496e07
 */

void FUN_00496dc4(int param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  undefined4 *puStack_8;
  
  puStack_10 = (undefined1 *)0x496dd6;
  puStack_8 = param_2;
  FUN_00404090((int)param_2);
  puStack_14 = &UNK_00496e08;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_00403cb0((int *)(param_1 + 0x300),puStack_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00496e0f;
  puStack_14 = (undefined *)0x496e07;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


