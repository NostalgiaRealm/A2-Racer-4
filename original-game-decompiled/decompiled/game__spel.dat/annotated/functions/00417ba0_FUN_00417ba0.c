
/* ==== FUN_00417ba0 @ 00417ba0 ==== 
 * signature: int __thiscall FUN_00417ba0(void * this, int param_1)
 * body: 00417ba0-00417d71
 */

int __thiscall FUN_00417ba0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (this != (void *)param_1) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1 >> 5;
    }
    puVar8 = *(undefined4 **)((int)this + 4);
    if (puVar8 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)((int)this + 8) - (int)puVar8 >> 5;
    }
    if (uVar6 <= uVar4) {
      puVar3 = *(undefined4 **)(param_1 + 8);
      while (puVar1 != puVar3) {
        puVar2 = puVar1 + 8;
        puVar7 = puVar8 + 8;
        puVar9 = puVar1;
        puVar10 = puVar8;
        for (iVar5 = 8; puVar1 = puVar2, puVar8 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return (int)this;
      }
      *(int *)((int)this + 8) =
           (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5) * 0x20 + *(int *)((int)this + 4);
      return (int)this;
    }
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar1 >> 5;
    }
    if (puVar8 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)((int)this + 0xc) - (int)puVar8 >> 5;
    }
    if (uVar6 <= uVar4) {
      if (puVar8 == (undefined4 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)puVar8 >> 5;
      }
      puVar3 = puVar1 + iVar5 * 8;
      while (puVar1 != puVar3) {
        puVar2 = puVar1 + 8;
        puVar7 = puVar8 + 8;
        puVar9 = puVar1;
        puVar10 = puVar8;
        for (iVar5 = 8; puVar1 = puVar2, puVar8 = puVar7, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      puVar1 = *(undefined4 **)(param_1 + 8);
      puVar8 = *(undefined4 **)((int)this + 8);
      for (; puVar3 != puVar1; puVar3 = puVar3 + 8) {
        if (puVar8 != (undefined4 *)0x0) {
          puVar9 = puVar3;
          puVar10 = puVar8;
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        puVar8 = puVar8 + 8;
      }
      if (*(int *)(param_1 + 4) == 0) {
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return (int)this;
      }
      *(int *)((int)this + 8) =
           (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5) * 0x20 + *(int *)((int)this + 4);
      return (int)this;
    }
    FUN_0054b339(puVar8);
    if (*(int *)(param_1 + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 5;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    puVar3 = operator_new(iVar5 << 5);
    *(undefined4 **)((int)this + 4) = puVar3;
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar8 = *(undefined4 **)(param_1 + 4); puVar8 != puVar1; puVar8 = puVar8 + 8) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar9 = puVar8;
        puVar10 = puVar3;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      puVar3 = puVar3 + 8;
    }
    *(undefined4 **)((int)this + 8) = puVar3;
    *(undefined4 **)((int)this + 0xc) = puVar3;
  }
  return (int)this;
}


