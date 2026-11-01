
/* ==== FUN_004175a0 @ 004175a0 ==== 
 * signature: undefined __thiscall FUN_004175a0(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)
 * body: 004175a0-004178e7
 */

void __thiscall FUN_004175a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  puVar5 = param_1;
  puVar4 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)((*(int *)((int)this + 0xc) - (int)puVar4) / 0xc)) {
    if (param_2 <= (uint)(((int)puVar4 - (int)param_1) / 0xc)) {
      if (param_2 != 0) {
        puVar5 = puVar4;
        for (puVar6 = puVar4 + param_2 * -3; puVar6 != puVar4; puVar6 = puVar6 + 3) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar6;
            puVar5[1] = puVar6[1];
            puVar5[2] = puVar6[2];
          }
          puVar5 = puVar5 + 3;
        }
        puVar4 = *(undefined4 **)((int)this + 8);
        puVar5 = *(undefined4 **)((int)this + 8) + param_2 * -3;
        while (param_1 != puVar5) {
          puVar4[-3] = puVar5[-3];
          puVar4[-2] = puVar5[-2];
          puVar4[-1] = puVar5[-1];
          puVar4 = puVar4 + -3;
          puVar5 = puVar5 + -3;
        }
        puVar4 = param_1 + param_2 * 3;
        for (; param_1 != puVar4; param_1 = param_1 + 3) {
          *param_1 = *param_3;
          param_1[1] = param_3[1];
          param_1[2] = param_3[2];
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0xc;
      }
      return;
    }
    puVar5 = param_1 + param_2 * 3;
    if (param_1 != puVar4) {
      puVar6 = puVar5 + param_2 * -3;
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar6;
          puVar5[1] = puVar6[1];
          puVar5[2] = puVar6[2];
        }
        puVar6 = puVar6 + 3;
        puVar5 = puVar5 + 3;
      } while (puVar6 != puVar4);
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    for (iVar7 = param_2 - ((int)puVar4 - (int)param_1) / 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
        puVar4[1] = param_3[1];
        puVar4[2] = param_3[2];
      }
      puVar4 = puVar4 + 3;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar4; param_1 = param_1 + 3) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0xc;
    return;
  }
  iVar7 = *(int *)((int)this + 4);
  if ((iVar7 == 0) || (uVar8 = ((int)puVar4 - iVar7) / 0xc, uVar8 <= param_2)) {
    uVar8 = param_2;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = ((int)puVar4 - iVar7) / 0xc;
  }
  iVar7 = iVar7 + uVar8;
  iVar2 = iVar7;
  if (iVar7 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 0xc);
  puVar6 = puVar3;
  for (puVar4 = *(undefined4 **)((int)this + 4); puVar4 != param_1; puVar4 = puVar4 + 3) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar4;
      puVar6[1] = puVar4[1];
      puVar6[2] = puVar4[2];
    }
    puVar6 = puVar6 + 3;
  }
  if (param_2 != 0) {
    param_1 = (undefined4 *)param_2;
    puVar4 = puVar6;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_3;
        puVar4[1] = param_3[1];
        puVar4[2] = param_3[2];
      }
      puVar4 = puVar4 + 3;
      param_1 = (undefined4 *)((int)param_1 + -1);
    } while (param_1 != (undefined4 *)0x0);
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar4 = puVar6 + param_2 * 3;
  if (puVar5 != puVar1) {
    puVar5 = (undefined4 *)((int)puVar4 + (param_2 * -0xc - (int)puVar6) + (int)puVar5);
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = puVar5[2];
      }
      puVar5 = puVar5 + 3;
      puVar4 = puVar4 + 3;
    } while (puVar5 != puVar1);
  }
  iVar2 = *(int *)((int)this + 8);
  for (iVar9 = *(int *)((int)this + 4); iVar9 != iVar2; iVar9 = iVar9 + 0xc) {
    FUN_0041e410();
  }
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar3 + iVar7 * 3;
  if (iVar2 != 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) =
         puVar3 + (param_2 + (*(int *)((int)this + 8) - iVar2) / 0xc) * 3;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_2 * 3;
  return;
}


