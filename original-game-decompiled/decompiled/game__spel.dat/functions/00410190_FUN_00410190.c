
/* ==== FUN_00410190 @ 00410190 ==== 
 * signature: int __thiscall FUN_00410190(void * this, undefined4 * param_1, uint param_2, undefined1 * param_3)
 * body: 00410190-004104e1
 */

int __thiscall FUN_00410190(void *this,undefined4 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puVar10 = *(undefined4 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar10) / 0x30) < param_2) {
    iVar6 = *(int *)((int)this + 4);
    if ((iVar6 == 0) || (uVar5 = ((int)puVar10 - iVar6) / 0x30, uVar5 <= param_2)) {
      uVar5 = param_2;
    }
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = ((int)puVar10 - iVar6) / 0x30;
    }
    iVar6 = iVar6 + uVar5;
    iVar2 = iVar6;
    if (iVar6 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 0x30);
    puVar7 = puVar3;
    for (puVar10 = *(undefined4 **)((int)this + 4); uVar5 = param_2, puVar1 = puVar7,
        puVar10 != param_1; puVar10 = puVar10 + 0xc) {
      FUN_00410bd0(puVar7,(undefined1 *)puVar10);
      puVar7 = puVar7 + 0x30;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_00410bd0(puVar1,param_3);
      puVar1 = puVar1 + 0x30;
    }
    puVar7 = puVar7 + param_2 * 0x30;
    puVar10 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar10; param_1 = param_1 + 0xc) {
      FUN_00410bd0(puVar7,(undefined1 *)param_1);
      puVar7 = puVar7 + 0x30;
    }
    iVar2 = *(int *)((int)this + 8);
    for (iVar9 = *(int *)((int)this + 4); iVar9 != iVar2; iVar9 = iVar9 + 0x30) {
      FUN_00416ad0(iVar9);
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar3 + iVar6 * 0x30;
    if (*(int *)((int)this + 4) == 0) {
      iVar2 = 0;
      iVar6 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
      iVar6 = iVar2 * 0x2aaaaaab;
      iVar2 = iVar2 / 0x30;
    }
    *(undefined1 **)((int)this + 4) = puVar3;
    *(undefined1 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 0x30;
    return iVar6;
  }
  iVar6 = -((int)puVar10 - (int)param_1 >> 0x1f);
  if (param_2 <= (uint)(((int)puVar10 - (int)param_1) / 0x30)) {
    if (param_2 != 0) {
      iVar6 = param_2 * 0x30;
      puVar4 = puVar10;
      for (puVar8 = puVar10 + param_2 * -0xc; puVar8 != puVar10; puVar8 = puVar8 + 0xc) {
        FUN_00410bd0((undefined1 *)puVar4,(undefined1 *)puVar8);
        puVar4 = puVar4 + 0xc;
      }
      puVar7 = *(undefined1 **)((int)this + 8);
      for (puVar10 = (undefined4 *)(*(undefined1 **)((int)this + 8) + param_2 * -0x30);
          param_1 != puVar10; puVar10 = puVar10 + -0xc) {
        puVar7[-0x30] = *(undefined1 *)(puVar10 + -0xc);
        FUN_004093c0(puVar7 + -0x2c,puVar10 + -0xb,0,0xffffffff);
        *(undefined4 *)(puVar7 + -0x1c) = puVar10[-7];
        FUN_00411320(puVar7 + -0x18,(int)(puVar10 + -6));
        FUN_00411770(puVar7 + -0x10,(int)(puVar10 + -4));
        *(undefined4 *)(puVar7 + -8) = puVar10[-2];
        *(undefined4 *)(puVar7 + -4) = puVar10[-1];
        puVar7 = puVar7 + -0x30;
      }
      if (param_1 != param_1 + param_2 * 0xc) {
        puVar10 = param_1 + 5;
        do {
          *(undefined1 *)(puVar10 + -5) = *param_3;
          FUN_004093c0(puVar10 + -4,param_3 + 4,0,0xffffffff);
          *puVar10 = *(undefined4 *)(param_3 + 0x14);
          FUN_00411320(puVar10 + 1,(int)(param_3 + 0x18));
          FUN_00411770(puVar10 + 3,(int)(param_3 + 0x20));
          puVar10[5] = *(undefined4 *)(param_3 + 0x28);
          puVar10[6] = *(undefined4 *)(param_3 + 0x2c);
          puVar4 = puVar10 + 7;
          puVar10 = puVar10 + 0xc;
        } while (puVar4 != param_1 + param_2 * 0xc);
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + iVar6;
    }
    return iVar6;
  }
  puVar4 = param_1 + param_2 * 0xc;
  for (puVar8 = param_1; puVar8 != puVar10; puVar8 = puVar8 + 0xc) {
    FUN_00410bd0((undefined1 *)puVar4,(undefined1 *)puVar8);
    puVar4 = puVar4 + 0xc;
  }
  puVar7 = *(undefined1 **)((int)this + 8);
  for (iVar6 = param_2 - ((int)puVar7 - (int)param_1) / 0x30; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_00410bd0(puVar7,param_3);
    puVar7 = puVar7 + 0x30;
  }
  puVar10 = *(undefined4 **)((int)this + 8);
  for (; param_1 != puVar10; param_1 = param_1 + 0xc) {
    FUN_00411140(param_1,param_3);
  }
  iVar6 = *(int *)((int)this + 8) + param_2 * 0x30;
  *(int *)((int)this + 8) = iVar6;
  return iVar6;
}


