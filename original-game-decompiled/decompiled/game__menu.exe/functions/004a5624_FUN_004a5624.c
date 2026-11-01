
/* ==== FUN_004a5624 @ 004a5624 ==== 
 * signature: undefined FUN_004a5624(void)
 * body: 004a5624-004a5848
 */

void FUN_004a5624(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined *puStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puVar1 = PTR_DAT_004ab694;
  puStack_118 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  puStack_11c = &UNK_004a5849;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar2 = puStack_8;
  uVar4 = FUN_0045f46c();
  FUN_0045fb90(uVar4,puVar2,0);
  iVar5 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  bVar3 = FUN_00461c84(iVar5);
  if (bVar3) {
    *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 1;
  }
  iVar5 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
  bVar3 = FUN_00461c84(iVar5);
  if (bVar3) {
    if (*(char *)(*(int *)(*(int *)puVar1 + 200) + 0xc) != '\0') {
      FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dc38();
      uVar6 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dca4(uVar6,*(undefined4 *)(*(int *)(*(int *)puVar1 + 200) + 8));
      uVar6 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
      FUN_0048dcb4(uVar6,*(undefined4 *)(*(int *)(*(int *)puVar1 + 200) + 0x14));
      FUN_0049ed60();
      FUN_0049eef0();
    }
  }
  else if (*(char *)(*(int *)(*(int *)puVar1 + 200) + 0xc) != '\0') {
    FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dc38();
    uVar6 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dca4(uVar6,*(undefined4 *)(*(int *)(*(int *)puVar1 + 200) + 8));
    uVar6 = FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
    FUN_0048dcb4(uVar6,*(undefined4 *)(*(int *)(*(int *)puVar1 + 200) + 0x14));
    FUN_0048003c(*(undefined4 *)puVar1);
    FUN_0049ed60();
    iVar5 = *(int *)(*(int *)puVar1 + 0xa4);
    if (iVar5 == 0) {
      FUN_0049f010();
    }
    else {
      uVar6 = FUN_0048c624(*(int *)(*(int *)puVar1 + 0xc0));
      iVar7 = *(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x18);
      iVar7 = FUN_00462070(uVar6,CONCAT31((int3)((uint)iVar7 >> 8),*(undefined1 *)(iVar7 + 8)));
      if (iVar5 <= iVar7) {
        FUN_0049f100();
      }
    }
  }
  piVar8 = (int *)FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  piVar8 = (int *)(**(code **)(*piVar8 + 8))();
  uVar4 = FUN_0045f46c();
  FUN_0045fd98(uVar4,0x4a5890,piVar8);
  uVar4 = FUN_0045f46c();
  FUN_0045fc70(uVar4);
  *in_FS_OFFSET = "FillRaceResultsTour";
  FUN_00403c80(&iStack_c,2);
  return;
}


