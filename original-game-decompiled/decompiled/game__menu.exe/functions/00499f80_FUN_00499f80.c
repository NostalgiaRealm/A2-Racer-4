
/* ==== FUN_00499f80 @ 00499f80 ==== 
 * signature: undefined FUN_00499f80(void)
 * body: 00499f80-0049a0ff
 */

void FUN_00499f80(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined1 *puStack_24;
  int iStack_18;
  undefined4 uStack_14;
  uint *puStack_10;
  uint *puStack_c;
  int iStack_8;
  
  puStack_24 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (uint *)0x0;
  puStack_10 = (uint *)0x0;
  uStack_14 = 0;
  iStack_18 = 0;
  puStack_28 = &UNK_0049a100;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar2 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  iVar3 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),*(int *)(iVar2 + 8));
  FUN_00481090(*(undefined4 *)(iVar3 + 4),&puStack_c);
  TGroupBox_set_Caption(*(int *)(param_1 + 0x300),puStack_c);
  iVar3 = FUN_0048f44c(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc4),*(int *)(iVar2 + 8));
  TGroupBox_set_Caption(*(int *)(param_1 + 0x308),*(uint **)(iVar3 + 8));
  bVar1 = FUN_00461c84(iVar2);
  if (bVar1) {
    TGroupBox_set_Caption(*(int *)(param_1 + 0x310),*(uint **)(PTR_DAT_004ab8b4 + 0x1c));
  }
  else {
    iVar3 = FUN_00462070(iVar2,*(undefined1 *)
                                (*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x18) + 8));
    uVar4 = iVar3 + 1;
    if (SCARRY4(iVar3,1)) {
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    uVar4 = uVar4 - 1;
    if (6 < uVar4) {
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    FUN_00403cf4(&iStack_8,*(int *)(PTR_DAT_004ab5fc + (uVar4 + 1) * 4 + -4));
    iStack_18 = iStack_8;
    uStack_14 = CONCAT31(uStack_14._1_3_,0xb);
    FUN_00409254(*(byte **)(PTR_DAT_004ab8b4 + 0x34),&iStack_18,0,(int *)&puStack_10);
    TGroupBox_set_Caption(*(int *)(param_1 + 0x310),puStack_10);
  }
  TGroupBox_set_Caption(*(int *)(param_1 + 0x304),*(uint **)(iVar2 + 0x30));
  TGroupBox_set_Caption(*(int *)(param_1 + 0x314),*(uint **)(iVar2 + 0x34));
  iVar2 = FUN_00499f14(param_1);
  iVar3 = FUN_0049a464(param_1);
  (**(code **)(**(int **)(param_1 + 0x31c) + 0x5c))(*(int **)(param_1 + 0x31c),iVar2 < iVar3);
  iVar2 = FUN_00499f14(param_1);
  (**(code **)(**(int **)(param_1 + 800) + 0x5c))(*(int **)(param_1 + 800),0 < iVar2);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &UNK_0049a107;
  puStack_28 = (undefined *)0x49a0ff;
  FUN_00403c80((int *)&puStack_10,3);
  return;
}


