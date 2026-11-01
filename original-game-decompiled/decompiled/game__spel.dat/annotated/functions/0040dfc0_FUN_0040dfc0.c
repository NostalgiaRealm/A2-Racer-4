
/* ==== FUN_0040dfc0 @ 0040dfc0 ==== 
 * signature: undefined __thiscall FUN_0040dfc0(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)
 * body: 0040dfc0-0040e24a
 */

void __thiscall FUN_0040dfc0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar6 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar6 >> 5)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 5) < param_2) {
      puVar4 = param_1 + param_2 * 8;
      if (param_1 != puVar6) {
        puVar3 = puVar4 + param_2 * -8;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            puVar7 = puVar3;
            puVar8 = puVar4;
            for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          puVar3 = puVar3 + 8;
          puVar4 = puVar4 + 8;
        } while (puVar3 != puVar6);
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      for (iVar1 = param_2 - ((int)puVar6 - (int)param_1 >> 5); iVar1 != 0; iVar1 = iVar1 + -1) {
        if (puVar6 != (undefined4 *)0x0) {
          puVar4 = param_3;
          puVar3 = puVar6;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar3 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          }
        }
        puVar6 = puVar6 + 8;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      while (param_1 != puVar6) {
        puVar7 = param_1 + 8;
        puVar4 = param_3;
        puVar3 = param_1;
        for (iVar1 = 8; param_1 = puVar7, iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
    }
    else {
      if (param_2 == 0) {
        return;
      }
      puVar4 = puVar6;
      for (puVar3 = puVar6 + param_2 * -8; puVar3 != puVar6; puVar3 = puVar3 + 8) {
        if (puVar4 != (undefined4 *)0x0) {
          puVar7 = puVar3;
          puVar8 = puVar4;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        puVar4 = puVar4 + 8;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      puVar4 = puVar6 + param_2 * -8;
      while (param_1 != puVar4) {
        puVar4 = puVar4 + -8;
        puVar6 = puVar6 + -8;
        puVar3 = puVar4;
        puVar7 = puVar6;
        for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar6 = param_1;
      while (puVar6 != param_1 + param_2 * 8) {
        puVar7 = puVar6 + 8;
        puVar4 = param_3;
        puVar3 = puVar6;
        for (iVar1 = 8; puVar6 = puVar7, iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
        }
      }
    }
    param_1 = (undefined4 *)(param_2 * 0x20);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + (int)param_1;
    return;
  }
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (uVar5 = (int)puVar6 - iVar1 >> 5, uVar5 <= param_2)) {
    uVar5 = param_2;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar6 - iVar1 >> 5;
  }
  iVar1 = iVar1 + uVar5;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 << 5);
  puVar4 = puVar3;
  for (puVar6 = *(undefined4 **)((int)this + 4); uVar5 = param_2, puVar7 = puVar4, puVar6 != param_1
      ; puVar6 = puVar6 + 8) {
    if (puVar4 != (undefined4 *)0x0) {
      puVar7 = puVar6;
      puVar8 = puVar4;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar4 = puVar4 + 8;
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar7 != (undefined4 *)0x0) {
      puVar6 = param_3;
      puVar8 = puVar7;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar7 = puVar7 + 8;
  }
  puVar7 = *(undefined4 **)((int)this + 8);
  puVar6 = puVar4 + param_2 * 8;
  if (param_1 != puVar7) {
    puVar4 = (undefined4 *)((int)puVar6 + (param_2 * -0x20 - (int)puVar4) + (int)param_1);
    do {
      if (puVar6 != (undefined4 *)0x0) {
        puVar8 = puVar4;
        puVar9 = puVar6;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 8;
    } while (puVar4 != puVar7);
  }
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar3 + iVar1 * 8;
  if (iVar2 != 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) =
         puVar3 + ((*(int *)((int)this + 8) - iVar2 >> 5) + param_2) * 8;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_2 * 8;
  return;
}


