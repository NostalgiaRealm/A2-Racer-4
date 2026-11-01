
/* ==== FUN_004a4850 @ 004a4850 ==== 
 * signature: undefined FUN_004a4850(void)
 * body: 004a4850-004a48e3
 */

void FUN_004a4850(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  undefined *puStackY_30;
  undefined1 *puStackY_2c;
  int iVar2;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *puStack_14;
  undefined1 uStack_10;
  int *piStack_c;
  undefined4 *puStack_8;
  
  puStack_18 = (undefined1 *)0x4a4861;
  puStack_8 = param_1;
  FUN_00404090((int)param_1);
  puStack_1c = &UNK_004a4901;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_14 = puStack_8;
  uStack_10 = 0xb;
  iVar2 = 0;
  puStackY_2c = (undefined1 *)0x4a4884;
  puStack_18 = &stack0xfffffffc;
  uVar1 = FUN_0045f46c();
  puStackY_2c = (undefined1 *)0x4a4894;
  FUN_0045fa3c(uVar1,0x4a4918,2,iVar2);
  puStackY_2c = (undefined1 *)0x4a48a2;
  piStack_c = (int *)TCustomForm_vmt_02c((int *)&PTR_TWinControl_vmt_000_004a46b8,'\x01',0);
  puStackY_30 = &UNK_004a48e4;
  uStackY_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_34;
  puStackY_2c = &stack0xfffffffc;
  FUN_00403cb0(piStack_c + 0xb5,puStack_8);
  (**(code **)(*piStack_c + 0xd8))();
  *in_FS_OFFSET = uStackY_34;
  puStackY_2c = &UNK_004a48eb;
  puStackY_30 = (undefined *)0x4a48e3;
  FUN_00402f9c(piStack_c);
  return;
}


