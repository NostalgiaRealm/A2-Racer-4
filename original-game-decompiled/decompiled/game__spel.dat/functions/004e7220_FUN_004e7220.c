
/* ==== FUN_004e7220 @ 004e7220 ==== 
 * signature: undefined __thiscall FUN_004e7220(void * this, undefined1 * param_1, uint param_2, undefined1 * param_3)
 * body: 004e7220-004e75af
 */

void __thiscall FUN_004e7220(void *this,undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  
  puVar9 = *(undefined1 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar9) / 0x78) < param_2) {
    iVar6 = *(int *)((int)this + 4);
    if ((iVar6 == 0) || (uVar5 = ((int)puVar9 - iVar6) / 0x78, uVar5 <= param_2)) {
      uVar5 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)puVar9 - iVar6) / 0x78;
    }
    iVar6 = iVar6 + uVar5;
    iVar2 = iVar6;
    if (iVar6 < 0) {
      iVar2 = 0;
    }
    pvVar3 = operator_new(iVar2 * 0x78);
    pvVar7 = pvVar3;
    for (puVar9 = *(undefined1 **)((int)this + 4); uVar5 = param_2, pvVar1 = pvVar7,
        puVar9 != param_1; puVar9 = puVar9 + 0x78) {
      FUN_004e75b0(pvVar7,puVar9);
      pvVar7 = (void *)((int)pvVar7 + 0x78);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_004e75b0(pvVar1,param_3);
      pvVar1 = (void *)((int)pvVar1 + 0x78);
    }
    pvVar7 = (void *)((int)pvVar7 + param_2 * 0x78);
    puVar9 = *(undefined1 **)((int)this + 8);
    for (; param_1 != puVar9; param_1 = param_1 + 0x78) {
      FUN_004e75b0(pvVar7,param_1);
      pvVar7 = (void *)((int)pvVar7 + 0x78);
    }
    iVar2 = *(int *)((int)this + 8);
    for (iVar10 = *(int *)((int)this + 4); iVar10 != iVar2; iVar10 = iVar10 + 0x78) {
      FUN_004e6a20(iVar10);
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(void **)((int)this + 0xc) = (void *)((int)pvVar3 + iVar6 * 0x78);
    if (*(int *)((int)this + 4) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x78;
    }
    *(void **)((int)this + 4) = pvVar3;
    *(void **)((int)this + 8) = (void *)((int)pvVar3 + (param_2 + iVar6) * 0x78);
    return;
  }
  if (param_2 <= (uint)(((int)puVar9 - (int)param_1) / 0x78)) {
    if (param_2 != 0) {
      puVar4 = puVar9;
      for (puVar8 = puVar9 + param_2 * -0x78; puVar8 != puVar9; puVar8 = puVar8 + 0x78) {
        FUN_004e75b0(puVar4,puVar8);
        puVar4 = puVar4 + 0x78;
      }
      pvVar7 = *(void **)((int)this + 8);
      puVar9 = (undefined1 *)((int)pvVar7 + param_2 * -0x78);
      while (param_1 != puVar9) {
        puVar9 = puVar9 + -0x78;
        pvVar7 = (void *)((int)pvVar7 + -0x78);
        FUN_004e6f40(pvVar7,puVar9);
      }
      if (param_1 != param_1 + param_2 * 0x78) {
        puVar9 = param_1 + 0x24;
        do {
          if (puVar9 + -0x24 != param_3) {
            FUN_004093c0(puVar9 + 0x44,param_3 + 0x68,0,0xffffffff);
            FUN_004093c0(puVar9,param_3 + 0x24,0,0xffffffff);
            *(undefined4 *)(puVar9 + 0x40) = *(undefined4 *)(param_3 + 100);
            FUN_004093c0(puVar9 + -0x24,param_3,0,0xffffffff);
            FUN_004093c0(puVar9 + 0x10,param_3 + 0x34,0,0xffffffff);
            FUN_004093c0(puVar9 + 0x30,param_3 + 0x54,0,0xffffffff);
            FUN_004093c0(puVar9 + 0x20,param_3 + 0x44,0,0xffffffff);
            FUN_004093c0(puVar9 + -0x10,param_3 + 0x14,0,0xffffffff);
            *(undefined4 *)(puVar9 + -0x14) = *(undefined4 *)(param_3 + 0x10);
          }
          puVar4 = puVar9 + 0x54;
          puVar9 = puVar9 + 0x78;
        } while (puVar4 != param_1 + param_2 * 0x78);
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x78;
    }
    return;
  }
  puVar4 = param_1 + param_2 * 0x78;
  for (puVar8 = param_1; puVar8 != puVar9; puVar8 = puVar8 + 0x78) {
    FUN_004e75b0(puVar4,puVar8);
    puVar4 = puVar4 + 0x78;
  }
  pvVar7 = *(void **)((int)this + 8);
  for (iVar6 = param_2 - ((int)pvVar7 - (int)param_1) / 0x78; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_004e75b0(pvVar7,param_3);
    pvVar7 = (void *)((int)pvVar7 + 0x78);
  }
  puVar9 = *(undefined1 **)((int)this + 8);
  for (; param_1 != puVar9; param_1 = param_1 + 0x78) {
    FUN_004e6f40(param_1,param_3);
  }
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x78;
  return;
}


