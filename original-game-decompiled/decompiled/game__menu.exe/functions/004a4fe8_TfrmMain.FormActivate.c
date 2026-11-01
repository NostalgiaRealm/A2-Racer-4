
/* ==== TfrmMain.FormActivate @ 004a4fe8 ==== 
 * signature: undefined TfrmMain.FormActivate(void)
 * body: 004a4fe8-004a5099
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMain_FormActivate(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
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
  puStack_118 = &UNK_004a509a;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  if ((char)param_1[0xb4] != '\0') {
    (**(code **)(*param_1 + 0x80))();
    FUN_004a5d70(param_1);
  }
  *(undefined1 *)(param_1 + 0xb4) = 0;
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "FormActivate";
  FUN_00403c80(&iStack_c,2);
  return;
}


