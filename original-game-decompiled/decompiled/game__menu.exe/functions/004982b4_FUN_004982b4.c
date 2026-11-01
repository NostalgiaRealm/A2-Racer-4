
/* ==== FUN_004982b4 @ 004982b4 ==== 
 * signature: undefined FUN_004982b4(void)
 * body: 004982b4-0049833e
 */

void FUN_004982b4(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4982c0;
  uVar1 = FUN_0045f46c();
  puStack_10 = (undefined1 *)0x4982d0;
  FUN_0045fb90(uVar1,(undefined4 *)"ShowJoystickSettingsDlg",0);
  puStack_10 = (undefined1 *)0x4982de;
  piVar2 = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_00492bb8,'\x01',0);
  puStack_14 = &UNK_0049833f;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  piVar2[0xc1] = param_2;
  puStack_10 = &stack0xfffffffc;
  TDaviGraphicSlider_set_Position((int *)piVar2[0xbf],*(int *)(param_2 + 0x28));
  iVar3 = (**(code **)(*piVar2 + 0xd8))();
  if (iVar3 == 1) {
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(piVar2[0xbf] + 0x204);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00498346;
  puStack_14 = (undefined *)0x49833e;
  FUN_00402f9c(piVar2);
  return;
}


