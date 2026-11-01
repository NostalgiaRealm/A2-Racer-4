
/* ==== TfrmMain.FormShow @ 004a4f14 ==== 
 * signature: undefined TfrmMain.FormShow(void)
 * body: 004a4f14-004a4fb4
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMain_FormShow(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_004a4fb5;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar3 = puStack_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar3,0);
  iVar2 = GetSystemMetrics(1);
  TControl_set_Height(param_1,iVar2);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = "FormShow";
  FUN_00403c80(&iStack_c,2);
  return;
}


