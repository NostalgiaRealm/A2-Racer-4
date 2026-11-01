
/* ==== FUN_004981f0 @ 004981f0 ==== 
 * signature: undefined FUN_004981f0(void)
 * body: 004981f0-0049827a
 */

void FUN_004981f0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4981fc;
  uVar1 = FUN_0045f46c();
  puStack_10 = (undefined1 *)0x49820c;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowWheelSettingsDlg",0);
  puStack_10 = (undefined1 *)0x49821a;
  piVar2 = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_004929c4,'\x01',0);
  puStack_14 = &UNK_0049827b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar2[0xc1] = param_2;
  puStack_10 = &stack0xfffffffc;
  TDaviGraphicSlider_set_Position((int *)piVar2[0xbf],*(int *)(param_2 + 0x2c));
  iVar3 = (**(code **)(*piVar2 + 0xd8))();
  if (iVar3 == 1) {
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(piVar2[0xbf] + 0x204);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00498282;
  puStack_14 = (undefined *)0x49827a;
  FUN_00402f9c(piVar2);
  return;
}


