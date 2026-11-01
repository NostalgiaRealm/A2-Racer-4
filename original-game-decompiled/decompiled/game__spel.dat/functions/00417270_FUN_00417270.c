
/* ==== FUN_00417270 @ 00417270 ==== 
 * signature: undefined __thiscall FUN_00417270(void * this, undefined4 * param_1, uint param_2, undefined4 * param_3)
 * body: 00417270-0041759f
 */

void __thiscall FUN_00417270(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar6 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)((*(int *)((int)this + 0xc) - (int)puVar6) / 0x18)) {
    if (param_2 <= (uint)(((int)puVar6 - (int)param_1) / 0x18)) {
      if (param_2 != 0) {
        puVar7 = puVar6;
        for (puVar3 = puVar6 + param_2 * -6; puVar3 != puVar6; puVar3 = puVar3 + 6) {
          FUN_00411fb0(puVar7,puVar3);
          puVar7 = puVar7 + 6;
        }
        puVar6 = *(undefined4 **)((int)this + 8);
        for (puVar7 = *(undefined4 **)((int)this + 8) + param_2 * -6; param_1 != puVar7;
            puVar7 = puVar7 + -6) {
          puVar6[-6] = puVar7[-6];
          FUN_004093c0(puVar6 + -5,puVar7 + -5,0,0xffffffff);
          puVar6[-1] = puVar7[-1];
          puVar6 = puVar6 + -6;
        }
        puVar6 = param_1 + param_2 * 6;
        if (param_1 != puVar6) {
          do {
            *param_1 = *param_3;
            FUN_004093c0(param_1 + 1,param_3 + 1,0,0xffffffff);
            param_1[5] = param_3[5];
            param_1 = param_1 + 6;
          } while (param_1 != puVar6);
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x18;
      }
      return;
    }
    puVar7 = param_1 + param_2 * 6;
    for (puVar3 = param_1; puVar3 != puVar6; puVar3 = puVar3 + 6) {
      FUN_00411fb0(puVar7,puVar3);
      puVar7 = puVar7 + 6;
    }
    puVar6 = *(undefined4 **)((int)this + 8);
    for (iVar5 = param_2 - ((int)puVar6 - (int)param_1) / 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_00411fb0(puVar6,param_3);
      puVar6 = puVar6 + 6;
    }
    puVar6 = *(undefined4 **)((int)this + 8);
    if (param_1 != puVar6) {
      do {
        *param_1 = *param_3;
        FUN_004093c0(param_1 + 1,param_3 + 1,0,0xffffffff);
        param_1[5] = param_3[5];
        param_1 = param_1 + 6;
      } while (param_1 != puVar6);
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x18;
    return;
  }
  iVar5 = *(int *)((int)this + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar6 - iVar5) / 0x18, uVar4 <= param_2)) {
    uVar4 = param_2;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar6 - iVar5) / 0x18;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 0x18);
  puVar6 = puVar3;
  for (puVar7 = *(undefined4 **)((int)this + 4); uVar4 = param_2, puVar1 = puVar6, puVar7 != param_1
      ; puVar7 = puVar7 + 6) {
    FUN_00411fb0(puVar6,puVar7);
    puVar6 = puVar6 + 6;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_00411fb0(puVar1,param_3);
    puVar1 = puVar1 + 6;
  }
  puVar6 = puVar6 + param_2 * 6;
  puVar7 = *(undefined4 **)((int)this + 8);
  for (; param_1 != puVar7; param_1 = param_1 + 6) {
    FUN_00411fb0(puVar6,param_1);
    puVar6 = puVar6 + 6;
  }
  iVar2 = *(int *)((int)this + 8);
  for (iVar8 = *(int *)((int)this + 4); iVar8 != iVar2; iVar8 = iVar8 + 0x18) {
    FUN_0041e3a0(iVar8);
  }
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar3 + iVar5 * 6;
  if (iVar2 != 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) =
         puVar3 + (param_2 + (*(int *)((int)this + 8) - iVar2) / 0x18) * 6;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_2 * 6;
  return;
}


