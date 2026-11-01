
/* ==== FUN_00498378 @ 00498378 ==== 
 * signature: undefined FUN_00498378(void)
 * body: 00498378-004983dc
 */

void FUN_00498378(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x498384;
  uVar1 = FUN_0045f46c();
  puStack_10 = (undefined1 *)0x498394;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowKeySettingsDlg",0);
  puStack_10 = (undefined1 *)0x4983a2;
  piVar2 = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_004919f4,'\x01',0);
  puStack_14 = &UNK_004983dd;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar2[0xcd] = param_1;
  puStack_10 = &stack0xfffffffc;
  (**(code **)(*piVar2 + 0xd8))();
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_004983e4;
  puStack_14 = (undefined *)0x4983dc;
  FUN_00402f9c(piVar2);
  return;
}


