
/* ==== FUN_00424ad0 @ 00424ad0 ==== 
 * signature: int __thiscall FUN_00424ad0(void * this, undefined1 * param_1, uint param_2, undefined1 * param_3)
 * body: 00424ad0-00424e27
 */

int __thiscall FUN_00424ad0(void *this,undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  void *this_00;
  
  puVar7 = *(undefined1 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar7) / 0x60) < param_2) {
    iVar5 = *(int *)((int)this + 4);
    if ((iVar5 == 0) || (uVar4 = ((int)puVar7 - iVar5) / 0x60, uVar4 <= param_2)) {
      uVar4 = param_2;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((int)puVar7 - iVar5) / 0x60;
    }
    iVar5 = iVar5 + uVar4;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 0x60);
    puVar6 = puVar3;
    for (puVar7 = *(undefined1 **)((int)this + 4); uVar4 = param_2, puVar1 = puVar6,
        puVar7 != param_1; puVar7 = puVar7 + 0x60) {
      FUN_00424e30(puVar6,puVar7);
      puVar6 = puVar6 + 0x60;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_00424e30(puVar1,param_3);
      puVar1 = puVar1 + 0x60;
    }
    puVar6 = puVar6 + param_2 * 0x60;
    puVar7 = *(undefined1 **)((int)this + 8);
    for (; param_1 != puVar7; param_1 = param_1 + 0x60) {
      FUN_00424e30(puVar6,param_1);
      puVar6 = puVar6 + 0x60;
    }
    iVar2 = *(int *)((int)this + 8);
    for (iVar8 = *(int *)((int)this + 4); iVar8 != iVar2; iVar8 = iVar8 + 0x60) {
      FUN_00424880(iVar8);
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar3 + iVar5 * 0x60;
    if (*(int *)((int)this + 4) == 0) {
      iVar2 = 0;
      iVar5 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
      iVar5 = iVar2 * 0x2aaaaaab;
      iVar2 = iVar2 / 0x60;
    }
    *(undefined1 **)((int)this + 4) = puVar3;
    *(undefined1 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 0x60;
    return iVar5;
  }
  iVar5 = -((int)puVar7 - (int)param_1 >> 0x1f);
  if (param_2 <= (uint)(((int)puVar7 - (int)param_1) / 0x60)) {
    if (param_2 != 0) {
      iVar5 = param_2 * 0x60;
      puVar6 = puVar7;
      for (puVar3 = puVar7 + param_2 * -0x60; puVar3 != puVar7; puVar3 = puVar3 + 0x60) {
        FUN_00424e30(puVar6,puVar3);
        puVar6 = puVar6 + 0x60;
      }
      this_00 = *(void **)((int)this + 8);
      puVar7 = (undefined1 *)((int)this_00 + param_2 * -0x60);
      while (param_1 != puVar7) {
        puVar7 = puVar7 + -0x60;
        this_00 = (void *)((int)this_00 + -0x60);
        FUN_00424f50(this_00,puVar7);
      }
      if (param_1 != param_1 + iVar5) {
        puVar7 = param_1 + 0x20;
        do {
          FUN_004093c0(puVar7 + -0x20,param_3,0,0xffffffff);
          FUN_004093c0(puVar7 + -0x10,param_3 + 0x10,0,0xffffffff);
          FUN_004093c0(puVar7,param_3 + 0x20,0,0xffffffff);
          FUN_004093c0(puVar7 + 0x10,param_3 + 0x30,0,0xffffffff);
          *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(param_3 + 0x40);
          *(undefined4 *)(puVar7 + 0x24) = *(undefined4 *)(param_3 + 0x44);
          *(undefined4 *)(puVar7 + 0x28) = *(undefined4 *)(param_3 + 0x48);
          *(undefined4 *)(puVar7 + 0x2c) = *(undefined4 *)(param_3 + 0x4c);
          FUN_004093c0(puVar7 + 0x30,param_3 + 0x50,0,0xffffffff);
          puVar6 = puVar7 + 0x40;
          puVar7 = puVar7 + 0x60;
        } while (puVar6 != param_1 + iVar5);
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + iVar5;
    }
    return iVar5;
  }
  puVar6 = param_1 + param_2 * 0x60;
  for (puVar3 = param_1; puVar3 != puVar7; puVar3 = puVar3 + 0x60) {
    FUN_00424e30(puVar6,puVar3);
    puVar6 = puVar6 + 0x60;
  }
  puVar7 = *(undefined1 **)((int)this + 8);
  for (iVar5 = param_2 - ((int)puVar7 - (int)param_1) / 0x60; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_00424e30(puVar7,param_3);
    puVar7 = puVar7 + 0x60;
  }
  puVar7 = *(undefined1 **)((int)this + 8);
  for (; param_1 != puVar7; param_1 = param_1 + 0x60) {
    FUN_00424f50(param_1,param_3);
  }
  iVar5 = *(int *)((int)this + 8) + param_2 * 0x60;
  *(int *)((int)this + 8) = iVar5;
  return iVar5;
}


