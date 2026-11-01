
/* ==== FUN_005460f0 @ 005460f0 ==== 
 * signature: undefined __fastcall FUN_005460f0(void * param_1)
 * body: 005460f0-00546214
 */

void __fastcall FUN_005460f0(void *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = *(int *)((int)param_1 + 0x2c);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    puVar3 = (undefined4 *)(iVar4 * 8 + *(int *)((int)param_1 + 0x24));
    puVar8 = (undefined4 *)(iVar4 * 8 + *(int *)((int)param_1 + 0x18));
    *puVar3 = *puVar8;
    puVar3[1] = puVar8[1];
  }
  FUN_00546460((int)param_1);
  iVar4 = *(int *)((int)param_1 + 0x2c) + -1;
  while (-1 < iVar4) {
    iVar10 = *(int *)((int)param_1 + 0x20);
    iVar9 = *(int *)((int)param_1 + 0x28) * iVar4 + *(int *)((int)param_1 + 0x2c);
    iVar2 = *(int *)((int)param_1 + 0xc);
    iVar7 = iVar4 * 8;
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar2 + iVar9 * 8) = *(undefined4 *)(iVar10 + iVar7);
    *(undefined4 *)(iVar2 + 4 + iVar9 * 8) = *(undefined4 *)(iVar10 + 0xc + iVar4 * 8);
  }
  iVar4 = *(int *)((int)param_1 + 0x2c);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar7 = *(int *)((int)param_1 + 8);
    iVar10 = *(int *)((int)param_1 + 0x28) * iVar4 + *(int *)((int)param_1 + 0x2c);
    *(undefined4 *)(iVar7 + iVar10 * 8) = 0;
    *(undefined4 *)(iVar7 + 4 + iVar10 * 8) = 0;
  }
  uVar6 = *(int *)((int)param_1 + 8) +
          *(int *)((int)param_1 + 0x28) * *(int *)((int)param_1 + 0x2c) * 8;
  puVar3 = (undefined4 *)(uVar6 & 0xfffffff0);
  iVar4 = ((int)(uVar6 - (int)puVar3) >> 3) + *(int *)((int)param_1 + 0x2c);
  piVar5 = (int *)FUN_004f8370();
  if ((*piVar5 == 0) && (iVar7 = iVar4 + -1, -1 < iVar7)) {
    for (uVar6 = iVar4 + 3 + iVar7 & 0x3ffffffc; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
  }
  iVar4 = *(int *)((int)param_1 + 8);
  iVar10 = 0;
  iVar7 = (*(int *)((int)param_1 + 0x28) + 1) * *(int *)((int)param_1 + 0x2c);
  *(undefined4 *)(iVar4 + iVar7 * 8) = 0;
  *(undefined4 *)(iVar4 + 4 + iVar7 * 8) = 0x3ff00000;
  iVar4 = *(int *)((int)param_1 + 0x2c);
  *(int *)((int)param_1 + 0x2c) = iVar4 + 1;
  if (0 < iVar4) {
    iVar7 = *(int *)((int)param_1 + 0x28) * iVar4 * 8;
    do {
      uVar1 = *(undefined8 *)(iVar7 + *(int *)((int)param_1 + 0xc));
      FUN_00545e00(param_1,iVar10,iVar4,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
      iVar10 = iVar10 + 1;
      iVar7 = iVar7 + 8;
      iVar4 = *(int *)((int)param_1 + 0x2c) + -1;
    } while (iVar10 < iVar4);
  }
  FUN_00545b80(param_1,*(int *)((int)param_1 + 0x2c) + -1);
  return;
}


