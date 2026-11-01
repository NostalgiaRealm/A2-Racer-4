
/* ==== FUN_004e5cf0 @ 004e5cf0 ==== 
 * signature: undefined __thiscall FUN_004e5cf0(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)
 * body: 004e5cf0-004e5fb3
 */

void __thiscall FUN_004e5cf0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar6 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar6 >> 4)) {
    if ((uint)((int)puVar6 - (int)param_1 >> 4) < param_2) {
      puVar5 = param_1 + param_2 * 4;
      for (puVar4 = param_1; puVar4 != puVar6; puVar4 = puVar4 + 4) {
        FUN_004e5fc0(puVar5,(int)puVar4);
        puVar5 = puVar5 + 4;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      for (iVar7 = param_2 - ((int)puVar6 - (int)param_1 >> 4); iVar7 != 0; iVar7 = iVar7 + -1) {
        FUN_004e5fc0(puVar6,(int)param_3);
        puVar6 = puVar6 + 4;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      if (param_1 != puVar6) {
        puVar5 = param_1 + 1;
        do {
          if (puVar5 + -1 != param_3) {
            *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(param_3 + 3);
            *puVar5 = param_3[1];
            puVar5[1] = param_3[2];
          }
          puVar4 = puVar5 + 3;
          puVar5 = puVar5 + 4;
        } while (puVar4 != puVar6);
        *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x10;
        return;
      }
    }
    else {
      if (param_2 == 0) {
        return;
      }
      puVar5 = puVar6;
      for (puVar4 = puVar6 + param_2 * -4; puVar4 != puVar6; puVar4 = puVar4 + 4) {
        FUN_004e5fc0(puVar5,(int)puVar4);
        puVar5 = puVar5 + 4;
      }
      puVar6 = *(undefined4 **)((int)this + 8);
      puVar5 = *(undefined4 **)((int)this + 8) + param_2 * -4;
      while (puVar1 = puVar5, puVar4 = puVar6, param_1 != puVar1) {
        puVar5 = puVar1 + -4;
        puVar6 = puVar4 + -4;
        if (puVar6 != puVar5) {
          *(undefined1 *)(puVar4 + -1) = *(undefined1 *)(puVar1 + -1);
          puVar4[-3] = puVar1[-3];
          puVar4[-2] = puVar1[-2];
        }
      }
      if (param_1 != param_1 + param_2 * 4) {
        puVar6 = param_1 + 1;
        do {
          if (puVar6 + -1 != param_3) {
            *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_3 + 3);
            *puVar6 = param_3[1];
            puVar6[1] = param_3[2];
          }
          puVar5 = puVar6 + 3;
          puVar6 = puVar6 + 4;
        } while (puVar5 != param_1 + param_2 * 4);
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x10;
    return;
  }
  iVar7 = *(int *)((int)this + 4);
  if ((iVar7 == 0) || (uVar2 = (int)puVar6 - iVar7 >> 4, uVar2 <= param_2)) {
    uVar2 = param_2;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)puVar6 - iVar7 >> 4;
  }
  iVar7 = uVar2 + iVar7;
  iVar3 = iVar7;
  if (iVar7 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 << 4);
  puVar6 = puVar4;
  for (puVar5 = *(undefined4 **)((int)this + 4); uVar2 = param_2, puVar1 = puVar6, puVar5 != param_1
      ; puVar5 = puVar5 + 4) {
    FUN_004e5fc0(puVar6,(int)puVar5);
    puVar6 = puVar6 + 4;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_004e5fc0(puVar1,(int)param_3);
    puVar1 = puVar1 + 4;
  }
  puVar6 = puVar6 + param_2 * 4;
  puVar5 = *(undefined4 **)((int)this + 8);
  for (; param_1 != puVar5; param_1 = param_1 + 4) {
    FUN_004e5fc0(puVar6,(int)param_1);
    puVar6 = puVar6 + 4;
  }
  puVar6 = *(undefined4 **)((int)this + 8);
  for (puVar5 = *(undefined4 **)((int)this + 4); puVar5 != puVar6; puVar5 = puVar5 + 4) {
    (**(code **)*puVar5)(0);
  }
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar4 + iVar7 * 4;
  if (iVar3 != 0) {
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) =
         puVar4 + ((*(int *)((int)this + 8) - iVar3 >> 4) + param_2) * 4;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar4;
  *(undefined4 **)((int)this + 8) = puVar4 + param_2 * 4;
  return;
}


