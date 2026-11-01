
/* ==== TfrmWinFinal.medWinnerNotify @ 004a4214 ==== 
 * signature: undefined TfrmWinFinal.medWinnerNotify(void)
 * body: 004a4214-004a42b0
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmWinFinal_medWinnerNotify(int *param_1)

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
  puStack_118 = &UNK_004a42b1;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_004a3640(param_1[0xbe]);
  FUN_004a2c98((int *)param_1[0xbe]);
  *in_FS_OFFSET = "medWinnerNotify";
  FUN_00403c80(&iStack_c,2);
  return;
}


