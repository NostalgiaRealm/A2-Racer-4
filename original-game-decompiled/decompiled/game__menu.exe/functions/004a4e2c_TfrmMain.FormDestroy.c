
/* ==== TfrmMain.FormDestroy @ 004a4e2c ==== 
 * signature: undefined TfrmMain.FormDestroy(void)
 * body: 004a4e2c-004a4ee2
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmMain_FormDestroy(int *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_004a4ee3;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar2 = puStack_8;
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,puVar2,0);
  ShowWindow((HWND)param_1[0xb5],9);
  ShowWindow((HWND)param_1[0xb6],9);
  FUN_00452d8c(&DAT_00452a8c);
  uVar1 = FUN_0045f46c();
  FUN_0045fc70(uVar1);
  *in_FS_OFFSET = "FormDestroy";
  FUN_00403c80(&iStack_c,2);
  return;
}


