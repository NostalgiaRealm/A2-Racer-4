
/* ==== FUN_0049c4d8 @ 0049c4d8 ==== 
 * signature: undefined FUN_0049c4d8(void)
 * body: 0049c4d8-0049c642
 */

void FUN_0049c4d8(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  char *pcVar3;
  int iStack_12c;
  undefined *puStack_128;
  undefined1 *puStack_124;
  byte abStack_114 [256];
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined1 uStack_8;
  
  puStack_124 = &stack0xfffffffc;
  iStack_10 = 0;
  iStack_14 = 0;
  puStack_128 = &UNK_0049c643;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  uStack_8 = 0;
  iStack_c = param_2;
  FUN_00402ee4(*param_1,abStack_114);
  FUN_00403e80(&iStack_14,abStack_114);
  pcVar3 = "SetCurrentCharIx";
  FUN_00403f9c(&iStack_10,3);
  iVar2 = iStack_10;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,iVar2,2,(int)pcVar3);
  FUN_0048d180(*(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc),param_2);
  iVar2 = FUN_0048c20c(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  TGroupBox_set_Caption(param_1[200],*(uint **)(iVar2 + 0x14));
  uVar1 = FUN_0049ca08(param_1,param_2);
  TGroupBox_set_Visible((int *)param_1[200],uVar1 ^ 1,extraout_ECX);
  FUN_00491710(param_1[0xd5],*(int *)(iVar2 + 0x28));
  FUN_00491710(param_1[0xd3],*(int *)(iVar2 + 0x24));
  FUN_00491710(param_1[0xd2],*(int *)(iVar2 + 0x20));
  FUN_00491710(param_1[0xd4],*(int *)(iVar2 + 0x2c));
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xca],
               (undefined4 *)&UNK_0049c688,*(int *)(iVar2 + 0x10));
  iVar2 = *(int *)(iVar2 + 0x10);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xb7],
               (undefined4 *)&UNK_0049c698,iVar2);
  FUN_0049c3c8(param_1);
  *in_FS_OFFSET = iVar2;
  FUN_00403c80(&iStack_14,2);
  return;
}


