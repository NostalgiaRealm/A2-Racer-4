
/* ==== FUN_004a54dc @ 004a54dc ==== 
 * signature: undefined FUN_004a54dc(void)
 * body: 004a54dc-004a55e7
 */

void FUN_004a54dc(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
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
  puStack_118 = &UNK_004a55e8;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar1,0);
  iVar4 = FUN_0048c624(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0));
  bVar2 = FUN_00461c84(iVar4);
  if (bVar2) {
    *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) = *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) | 1;
  }
  if (*(char *)(*(int *)(*(int *)PTR_DAT_004ab694 + 200) + 0xc) != '\0') {
    iVar4 = FUN_0048c604(*(undefined4 *)(*(int *)PTR_DAT_004ab694 + 0xc0));
    bVar2 = FUN_00461c84(iVar4);
    if (!bVar2) {
      FUN_0048003c(*(undefined4 *)PTR_DAT_004ab694);
    }
    FUN_0049ed60();
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = "FillRaceResultsQR";
  FUN_00403c80(&iStack_c,2);
  return;
}


