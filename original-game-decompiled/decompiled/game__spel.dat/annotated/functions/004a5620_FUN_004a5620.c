
/* ==== FUN_004a5620 @ 004a5620 ==== 
 * signature: undefined __thiscall FUN_004a5620(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)
 * body: 004a5620-004a5828
 */

void __thiscall FUN_004a5620(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar7 >> 2)) {
    if ((uint)((int)puVar7 - (int)param_1 >> 2) < param_2) {
      puVar5 = param_1 + param_2;
      if (param_1 != puVar7) {
        puVar4 = puVar5 + -param_2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar4 != puVar7);
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (iVar2 = param_2 - ((int)puVar7 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *param_3;
        }
        puVar7 = puVar7 + 1;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar5 = puVar7;
      for (puVar4 = puVar7 + -param_2; puVar4 != puVar7; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (puVar5 = puVar7 + -param_2; param_1 != puVar5; puVar5 = puVar5 + -1) {
        puVar7 = puVar7 + -1;
        *puVar7 = puVar5[-1];
      }
      puVar7 = param_1 + param_2;
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)((int)this + 4);
  if ((iVar2 == 0) || (uVar6 = (int)puVar7 - iVar2 >> 2, uVar6 <= param_2)) {
    uVar6 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar7 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar6;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 * 4);
  puVar5 = puVar4;
  for (puVar7 = *(undefined4 **)((int)this + 4); uVar6 = param_2, puVar1 = puVar5, puVar7 != param_1
      ; puVar7 = puVar7 + 1) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar7;
    }
    puVar5 = puVar5 + 1;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar7 = puVar5 + param_2;
  if (param_1 != puVar1) {
    puVar5 = (undefined4 *)((int)puVar7 + (param_2 * -4 - (int)puVar5) + (int)param_1);
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar1);
  }
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) = puVar4 + param_2;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar4;
  *(undefined4 **)((int)this + 8) = puVar4 + (*(int *)((int)this + 8) - iVar2 >> 2) + param_2;
  return;
}


