
/* ==== FUN_00491e0c @ 00491e0c ==== 
 * signature: undefined FUN_00491e0c(void)
 * body: 00491e0c-00491e57
 */

void FUN_00491e0c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  uint *puStack_8;
  
  puStack_14 = &stack0xfffffffc;
  puStack_8 = (uint *)0x0;
  puStack_18 = &UNK_00491e58;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  *(int *)(param_1 + 0xc) = param_2;
  FUN_00491d98(*(int *)(param_4 + -4),param_2,(int *)&puStack_8);
  TGroupBox_set_Caption(param_1,puStack_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_00491e5f;
  puStack_18 = (undefined *)0x491e57;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


