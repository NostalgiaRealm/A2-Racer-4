
/* ==== FUN_00442d30 @ 00442d30 ==== 
 * signature: undefined4 * __thiscall FUN_00442d30(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)
 * body: 00442d30-0044306d
 */

undefined4 * __thiscall
FUN_00442d30(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar3 = *(undefined4 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar3) / 0x8c) < param_2) {
    iVar6 = *(int *)((int)this + 4);
    if ((iVar6 == 0) || (uVar4 = ((int)puVar3 - iVar6) / 0x8c, uVar4 <= param_2)) {
      uVar4 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)puVar3 - iVar6) / 0x8c;
    }
    iVar6 = uVar4 + iVar6;
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = 0;
    }
    puVar1 = operator_new(iVar5 * 0x8c);
    puVar2 = puVar1;
    for (puVar3 = *(undefined4 **)((int)this + 4); uVar4 = param_2, puVar7 = puVar2,
        puVar3 != param_1; puVar3 = puVar3 + 0x23) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar7 = puVar3;
        puVar8 = puVar2;
        for (iVar5 = 0x23; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar2 = puVar2 + 0x23;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (puVar7 != (undefined4 *)0x0) {
        puVar3 = param_3;
        puVar8 = puVar7;
        for (iVar5 = 0x23; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar7 = puVar7 + 0x23;
    }
    puVar7 = *(undefined4 **)((int)this + 8);
    puVar3 = puVar2 + param_2 * 0x23;
    if (param_1 != puVar7) {
      puVar2 = (undefined4 *)((int)puVar3 + (param_2 * -0x8c - (int)puVar2) + (int)param_1);
      do {
        if (puVar3 != (undefined4 *)0x0) {
          puVar8 = puVar2;
          puVar9 = puVar3;
          for (iVar5 = 0x23; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        puVar2 = puVar2 + 0x23;
        puVar3 = puVar3 + 0x23;
      } while (puVar2 != puVar7);
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar1 + iVar6 * 0x23;
    if (*(int *)((int)this + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x8c;
    }
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 **)((int)this + 8) = puVar1 + (param_2 + iVar6) * 0x23;
    return puVar1 + (param_2 + iVar6) * 0x23;
  }
  puVar2 = (undefined4 *)(((int)puVar3 - (int)param_1) * -0x15f15f15);
  if ((uint)(((int)puVar3 - (int)param_1) / 0x8c) < param_2) {
    puVar2 = param_1 + param_2 * 0x23;
    if (param_1 != puVar3) {
      puVar1 = puVar2 + param_2 * -0x23;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          puVar7 = puVar1;
          puVar8 = puVar2;
          for (iVar6 = 0x23; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar1 = puVar1 + 0x23;
        puVar2 = puVar2 + 0x23;
      } while (puVar1 != puVar3);
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    for (iVar6 = param_2 - ((int)puVar3 - (int)param_1) / 0x8c; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        puVar2 = param_3;
        puVar1 = puVar3;
        for (iVar5 = 0x23; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar1 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar1 = puVar1 + 1;
        }
      }
      puVar3 = puVar3 + 0x23;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    while (param_1 != puVar3) {
      puVar7 = param_1 + 0x23;
      puVar2 = param_3;
      puVar1 = param_1;
      for (iVar6 = 0x23; param_1 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar1 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    puVar3 = (undefined4 *)(*(int *)((int)this + 8) + param_2 * 0x8c);
    *(undefined4 **)((int)this + 8) = puVar3;
    return puVar3;
  }
  if (param_2 != 0) {
    puVar2 = puVar3;
    for (puVar1 = puVar3 + param_2 * -0x23; puVar1 != puVar3; puVar1 = puVar1 + 0x23) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar7 = puVar1;
        puVar8 = puVar2;
        for (iVar6 = 0x23; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      puVar2 = puVar2 + 0x23;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    puVar2 = puVar3 + param_2 * -0x23;
    while (param_1 != puVar2) {
      puVar2 = puVar2 + -0x23;
      puVar3 = puVar3 + -0x23;
      puVar1 = puVar2;
      puVar7 = puVar3;
      for (iVar6 = 0x23; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar2 = param_1;
    while (puVar2 != param_1 + param_2 * 0x23) {
      puVar7 = puVar2 + 0x23;
      puVar3 = param_3;
      puVar1 = puVar2;
      for (iVar6 = 0x23; puVar2 = puVar7, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x8c;
  }
  return puVar2;
}


