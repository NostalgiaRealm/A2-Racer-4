
/* ==== FUN_0049898c @ 0049898c ==== 
 * signature: undefined FUN_0049898c(void)
 * body: 0049898c-004989e9
 */

void FUN_0049898c(void)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  
  puStack_10 = (undefined1 *)0x498997;
  uVar1 = FUN_0045f46c();
  puStack_10 = (undefined1 *)0x4989a7;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowOptionsDlg",0);
  puStack_10 = (undefined1 *)0x4989b5;
  piStack_c = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_0049504c,'\x01',0);
  puStack_14 = &UNK_004989ea;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  uStack_8 = (**(code **)(*piStack_c + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004989f1;
  puStack_14 = (undefined *)0x4989e9;
  FUN_00402f9c(piStack_c);
  return;
}


