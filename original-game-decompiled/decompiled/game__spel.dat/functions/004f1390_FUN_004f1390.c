
/* ==== FUN_004f1390 @ 004f1390 ==== 
 * signature: undefined __thiscall FUN_004f1390(void * this, undefined4 * param_1, uint param_2, undefined1 * param_3)
 * body: 004f1390-004f16cd
 */

void __thiscall FUN_004f1390(void *this,undefined4 *param_1,uint param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  puVar11 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)((*(int *)((int)this + 0xc) - (int)puVar11) / 0x28)) {
    if (param_2 <= (uint)(((int)puVar11 - (int)param_1) / 0x28)) {
      if (param_2 != 0) {
        puVar5 = puVar11;
        for (puVar9 = puVar11 + param_2 * -10; puVar9 != puVar11; puVar9 = puVar9 + 10) {
          FUN_004f1750((undefined1 *)puVar5,(undefined1 *)puVar9);
          puVar5 = puVar5 + 10;
        }
        pvVar1 = *(void **)((int)this + 8);
        puVar11 = (undefined4 *)((int)*(void **)((int)this + 8) + param_2 * -0x28);
        while (param_1 != puVar11) {
          FUN_004093c0((void *)((int)pvVar1 + -0x28),puVar11 + -10,0,0xffffffff);
          *(undefined4 *)((int)pvVar1 + -0x18) = puVar11[-6];
          *(undefined4 *)((int)pvVar1 + -0x14) = puVar11[-5];
          *(undefined4 *)((int)pvVar1 + -0x10) = puVar11[-4];
          *(undefined4 *)((int)pvVar1 + -0xc) = puVar11[-3];
          *(undefined4 *)((int)pvVar1 + -8) = puVar11[-2];
          *(undefined1 *)((int)pvVar1 + -4) = *(undefined1 *)(puVar11 + -1);
          pvVar1 = (void *)((int)pvVar1 + -0x28);
          puVar11 = puVar11 + -10;
        }
        if (param_1 != param_1 + param_2 * 10) {
          puVar11 = param_1 + 5;
          do {
            FUN_004093c0(puVar11 + -5,param_3,0,0xffffffff);
            puVar11[-1] = *(undefined4 *)(param_3 + 0x10);
            *puVar11 = *(undefined4 *)(param_3 + 0x14);
            puVar11[1] = *(undefined4 *)(param_3 + 0x18);
            puVar11[2] = *(undefined4 *)(param_3 + 0x1c);
            puVar11[3] = *(undefined4 *)(param_3 + 0x20);
            *(undefined1 *)(puVar11 + 4) = param_3[0x24];
            puVar5 = puVar11 + 5;
            puVar11 = puVar11 + 10;
          } while (puVar5 != param_1 + param_2 * 10);
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x28;
      }
      return;
    }
    puVar5 = param_1 + param_2 * 10;
    for (puVar9 = param_1; puVar9 != puVar11; puVar9 = puVar9 + 10) {
      FUN_004f1750((undefined1 *)puVar5,(undefined1 *)puVar9);
      puVar5 = puVar5 + 10;
    }
    puVar8 = *(undefined1 **)((int)this + 8);
    for (iVar7 = param_2 - ((int)puVar8 - (int)param_1) / 0x28; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_004f1750(puVar8,param_3);
      puVar8 = puVar8 + 0x28;
    }
    puVar11 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar11; param_1 = param_1 + 10) {
      FUN_004f18f0(param_1,param_3);
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x28;
    return;
  }
  iVar7 = *(int *)((int)this + 4);
  if ((iVar7 == 0) || (uVar6 = ((int)puVar11 - iVar7) / 0x28, uVar6 <= param_2)) {
    uVar6 = param_2;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = ((int)puVar11 - iVar7) / 0x28;
  }
  iVar7 = iVar7 + uVar6;
  iVar3 = iVar7;
  if (iVar7 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 * 0x28);
  puVar8 = puVar4;
  for (puVar11 = *(undefined4 **)((int)this + 4); uVar6 = param_2, puVar2 = puVar8,
      puVar11 != param_1; puVar11 = puVar11 + 10) {
    FUN_004f1750(puVar8,(undefined1 *)puVar11);
    puVar8 = puVar8 + 0x28;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    FUN_004f1750(puVar2,param_3);
    puVar2 = puVar2 + 0x28;
  }
  puVar8 = puVar8 + param_2 * 0x28;
  puVar11 = *(undefined4 **)((int)this + 8);
  for (; param_1 != puVar11; param_1 = param_1 + 10) {
    FUN_004f1750(puVar8,(undefined1 *)param_1);
    puVar8 = puVar8 + 0x28;
  }
  iVar3 = *(int *)((int)this + 8);
  for (iVar10 = *(int *)((int)this + 4); iVar10 != iVar3; iVar10 = iVar10 + 0x28) {
    FUN_004900b0(iVar10);
  }
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  iVar3 = *(int *)((int)this + 4);
  *(undefined1 **)((int)this + 0xc) = puVar4 + iVar7 * 0x28;
  if (iVar3 != 0) {
    *(undefined1 **)((int)this + 4) = puVar4;
    *(undefined1 **)((int)this + 8) =
         puVar4 + (param_2 + (*(int *)((int)this + 8) - iVar3) / 0x28) * 0x28;
    return;
  }
  *(undefined1 **)((int)this + 4) = puVar4;
  *(undefined1 **)((int)this + 8) = puVar4 + param_2 * 0x28;
  return;
}


