
/* ==== TfrmOptions.btnOkClick @ 00495808 ==== 
 * signature: undefined TfrmOptions.btnOkClick(void)
 * body: 00495808-004958ea
 * note: Name source: Delphi published method table
 */

/* Name source: Delphi published method table */

void TfrmOptions_btnOkClick(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined1 *puStack_114;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_114 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_118 = &UNK_004958eb;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  puVar6 = &UNK_00495900;
  pcVar5 = "btnOkClick";
  iVar7 = iStack_c;
  FUN_00403f9c((int *)&puStack_8,3);
  puVar2 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,0);
  FUN_004960fc(param_1);
  piVar4 = *(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18);
  iVar1 = *piVar4;
  (**(code **)(iVar1 + 0xc))(piVar4,param_1[0xe1],iVar1,pcVar5,puVar6,iVar7);
  piVar4 = (int *)(**(code **)(**(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8))();
  uVar3 = FUN_0045f46c();
  FUN_0045fd98(uVar3,0x49590c,piVar4);
  param_1[0x8d] = 1;
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = pcVar5;
  FUN_00403c80(&iStack_c,2);
  return;
}


