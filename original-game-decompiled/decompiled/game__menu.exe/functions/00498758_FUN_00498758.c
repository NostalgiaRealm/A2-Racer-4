
/* ==== FUN_00498758 @ 00498758 ==== 
 * signature: undefined FUN_00498758(void)
 * body: 00498758-004987d9
 */

void FUN_00498758(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  int *piStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  puStack_14 = (undefined1 *)0x498769;
  iStack_8 = param_2;
  FUN_00404090(param_2);
  puStack_18 = &UNK_004987f7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x49877c;
  puStack_14 = &stack0xfffffffc;
  uVar1 = FUN_0045f46c();
  puStack_20 = (undefined1 *)0x49878c;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowDeletePlayerDlg",2);
  puStack_20 = (undefined1 *)0x49879a;
  piStack_10 = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_00496c14,'\x01',0);
  puStack_24 = &UNK_004987da;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00496dc4(piStack_10,iStack_8);
  uStack_c = (**(code **)(*piStack_10 + 0xd8))();
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &UNK_004987e1;
  puStack_24 = (undefined *)0x4987d9;
  FUN_00402f9c(piStack_10);
  return;
}


