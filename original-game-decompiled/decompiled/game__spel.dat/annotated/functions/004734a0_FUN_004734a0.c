
/* ==== FUN_004734a0 @ 004734a0 ==== 
 * signature: undefined4 __thiscall FUN_004734a0(void * this, int param_1)
 * body: 004734a0-00473584
 */

undefined4 __thiscall FUN_004734a0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  int *piVar13;
  bool bVar14;
  bool bVar15;
  
  iVar9 = 0;
  iVar4 = (*(code *)**(undefined4 **)((int)this + 0x10))();
  if (0 < iVar4) {
    do {
      puVar12 = (undefined4 *)**(undefined4 **)((int)this + 0x18);
      iVar4 = iVar9;
      if (0 < iVar9) {
        do {
          puVar12 = (undefined4 *)*puVar12;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar4 = FUN_00473760(param_1);
      iVar5 = FUN_00473760(puVar12[2]);
      uVar1 = *(uint *)(iVar4 + 8);
      pbVar10 = *(byte **)(iVar4 + 4);
      if (pbVar10 == (byte *)0x0) {
        pbVar10 = &DAT_0057629c;
      }
      uVar2 = *(uint *)(iVar5 + 8);
      uVar7 = uVar2;
      if (uVar1 <= uVar2) {
        uVar7 = uVar1;
      }
      bVar14 = false;
      iVar4 = 0;
      bVar15 = true;
      pbVar11 = *(byte **)(iVar5 + 4);
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar14 = *pbVar11 < *pbVar10;
        bVar15 = *pbVar11 == *pbVar10;
        pbVar11 = pbVar11 + 1;
        pbVar10 = pbVar10 + 1;
      } while (bVar15);
      if (!bVar15) {
        iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      }
      if (((iVar4 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar4 = (*(code *)**(undefined4 **)((int)this + 0x10))();
    } while (iVar9 < iVar4);
  }
  piVar3 = *(int **)((int)this + 0x18);
  piVar13 = (int *)piVar3[1];
  piVar6 = operator_new(0xc);
  piVar8 = piVar3;
  if (piVar3 == (int *)0x0) {
    piVar8 = piVar6;
  }
  *piVar6 = (int)piVar8;
  if (piVar13 == (int *)0x0) {
    piVar13 = piVar6;
  }
  piVar6[1] = (int)piVar13;
  piVar3[1] = (int)piVar6;
  *(int **)piVar6[1] = piVar6;
  FUN_004d2770(piVar6 + 2,&param_1);
  iVar4 = *(int *)((int)this + 0x1c) + 1;
  *(int *)((int)this + 0x1c) = iVar4;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}


