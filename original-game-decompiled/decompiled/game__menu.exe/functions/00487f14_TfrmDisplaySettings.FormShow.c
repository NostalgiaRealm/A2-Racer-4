
/* ==== TfrmDisplaySettings.FormShow @ 00487f14 ==== 
 * signature: undefined TfrmDisplaySettings.FormShow(void)
 * body: 00487f14-0048801c
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmDisplaySettings_FormShow(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_0048801d;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  FUN_004865e4(param_1);
  TGroupBox_set_Caption((int)param_1,*(uint **)PTR_DAT_004ab8b4);
  iVar3 = FUN_00485de8(param_1[0xc6],0);
  TGroupBox_set_Caption(iVar3,*(uint **)(PTR_DAT_004ab8b4 + 0x54));
  iVar3 = FUN_00485de8(param_1[0xc6],1);
  TGroupBox_set_Caption(iVar3,*(uint **)(PTR_DAT_004ab8b4 + 0x58));
  TGroupBox_set_Caption(param_1[0xd4],*(uint **)(PTR_DAT_004ab8b4 + 8));
  FUN_004884b8(param_1);
  (**(code **)(*(int *)param_1[0xcf] + 0xb0))();
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


