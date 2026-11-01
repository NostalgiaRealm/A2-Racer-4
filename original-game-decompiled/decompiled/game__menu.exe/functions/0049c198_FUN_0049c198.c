
/* ==== FUN_0049c198 @ 0049c198 ==== 
 * signature: undefined FUN_0049c198(void)
 * body: 0049c198-0049c362
 */

void FUN_0049c198(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int *in_FS_OFFSET;
  char *pcVar7;
  int iStack_134;
  undefined *puStack_130;
  undefined1 *puStack_12c;
  uint *puStack_11c;
  byte abStack_118 [256];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined1 uStack_c;
  int iStack_8;
  
  puStack_12c = &stack0xfffffffc;
  puStack_11c = (uint *)0x0;
  iStack_14 = 0;
  iStack_18 = 0;
  puStack_130 = &UNK_0049c363;
  iStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_134;
  uStack_c = 0;
  iStack_10 = param_2;
  FUN_00402ee4(*param_1,abStack_118);
  FUN_00403e80(&iStack_18,abStack_118);
  pcVar7 = "SetCurrentTrackIndex";
  FUN_00403f9c(&iStack_14,3);
  iVar3 = iStack_14;
  uVar2 = FUN_0045f46c();
  FUN_0045fa3c(uVar2,iVar3,2,(int)pcVar7);
  FUN_0048d250(*(int **)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0xc),param_2);
  iVar3 = FUN_0049c768(param_1);
  iStack_8 = FUN_004627d0(iVar3,param_2);
  uVar4 = FUN_0049c768(param_1);
  iVar5 = FUN_00462424(uVar4,param_2);
  *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14) = iVar5;
  iVar3 = iVar5;
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),(int *)param_1[0xc9],
               (undefined4 *)"trname",iVar5);
  iVar6 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),iVar5);
  FUN_00481090(*(undefined4 *)(iVar6 + 4),&puStack_11c);
  TGroupBox_set_Caption(param_1[0xc1],puStack_11c);
  iVar5 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),iVar5);
  TGroupBox_set_Caption(param_1[0xc2],*(uint **)(iVar5 + 8));
  TGroupBox_set_Caption(param_1[0xc0],*(uint **)(iStack_8 + 0x30));
  uVar2 = FUN_0049c77c(param_1,param_2);
  TGroupBox_set_Visible((int *)param_1[0xc3],uVar2 ^ 1,extraout_ECX);
  bVar1 = FUN_00461c84(iStack_8);
  if (bVar1) {
    TGroupBox_set_Caption(param_1[0xc3],*(uint **)(PTR_DAT_004ab8b4 + 0x18));
  }
  else {
    TGroupBox_set_Caption(param_1[0xc3],*(uint **)(PTR_DAT_004ab8b4 + 4));
  }
  FUN_0049cb94(param_1);
  *in_FS_OFFSET = iVar3;
  FUN_00403c5c((int *)&puStack_11c);
  FUN_00403c80(&iStack_18,2);
  return;
}


