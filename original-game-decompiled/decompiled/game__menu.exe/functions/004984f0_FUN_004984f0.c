
/* ==== FUN_004984f0 @ 004984f0 ==== 
 * signature: undefined FUN_004984f0(void)
 * body: 004984f0-0049858e
 */

void FUN_004984f0(int *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  puStack_18 = &stack0xfffffffc;
  puStack_10 = (undefined4 *)0x0;
  puStack_1c = &UNK_004985ac;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x498511;
  uVar1 = FUN_0045f46c();
  puStack_24 = (undefined1 *)0x498521;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowHighScoreDlg",2);
  puStack_24 = (undefined1 *)0x49852f;
  piStack_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_00494de0,'\x01',0);
  puStack_28 = &UNK_0049858f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  TGroupBox_set_Caption(piStack_c[0xbe],(uint *)*param_1);
  uStack_8 = (**(code **)(*piStack_c + 0xd8))();
  TGroupBox_get_Caption(piStack_c[0xbe],(int *)&puStack_10);
  FUN_00403cb0(param_1,puStack_10);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &UNK_00498596;
  puStack_28 = (undefined *)0x49858e;
  FUN_00402f9c(piStack_c);
  return;
}


