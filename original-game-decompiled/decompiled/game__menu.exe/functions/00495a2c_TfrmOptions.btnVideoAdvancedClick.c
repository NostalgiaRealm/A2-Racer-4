
/* ==== TfrmOptions.btnVideoAdvancedClick @ 00495a2c ==== 
 * signature: undefined TfrmOptions.btnVideoAdvancedClick(void)
 * body: 00495a2c-00495b09
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_btnVideoAdvancedClick(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_20 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_14 = (undefined4 *)0x0;
  puStack_24 = &UNK_00495b0a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&puStack_c);
  FUN_00403f28(&iStack_8,(undefined4 *)"in btnVideoAdvancedClick. resolution: ",puStack_c);
  iVar3 = iStack_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar3);
  FUN_004960fc(param_1);
  piVar2 = (int *)TCustomForm_vmt_02c((int *)&PTR_TWinControl_vmt_000_004875b8,'\x01',0);
  piVar2[0xd8] = param_1[0xe1];
  iVar3 = (**(code **)(*piVar2 + 0xd8))();
  if (iVar3 == 1) {
    FUN_00495d6c(param_1);
  }
  FUN_00402f9c(piVar2);
  FUN_004085ac(*(undefined4 *)(param_1[0xe1] + 0x2c),(int *)&puStack_14);
  FUN_00403f28(&iStack_10,(undefined4 *)"out btnVideoAdvancedClick. resolution: ",puStack_14);
  iVar3 = iStack_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fe88(uVar1,iVar3);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &UNK_00495b11;
  puStack_24 = (undefined *)0x495b09;
  FUN_00403c80((int *)&puStack_14,4);
  return;
}


