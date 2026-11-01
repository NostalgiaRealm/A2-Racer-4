
/* ==== TfrmOptions.btnCancelClick @ 004956b4 ==== 
 * signature: undefined TfrmOptions.btnCancelClick(void)
 * body: 004956b4-004957d1
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_btnCancelClick(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
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
  puStack_118 = &UNK_004957d2;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar2 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  piVar4 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8))();
  uVar3 = FUN_0045f46c();
  FUN_0045fd98(uVar3,0x4957f4,piVar4);
  FUN_00482830(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb0),param_1[0xe4]);
  FUN_004a70bc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18),param_1[0xe4]);
  iVar1 = *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
  *(int *)(iVar1 + 0x14) = param_1[0xe3];
  FUN_004a66ec(iVar1,param_1[0xe2]);
  param_1[0x8d] = 2;
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "btnCancelClick";
  FUN_00403c80(&iStack_c,2);
  return;
}


