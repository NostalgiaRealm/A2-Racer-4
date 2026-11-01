
/* ==== FUN_004ec7e0 @ 004ec7e0 ==== 
 * signature: undefined __thiscall FUN_004ec7e0(void * this, undefined4 * param_1, uint param_2, int param_3)
 * body: 004ec7e0-004ecab9
 */

void __thiscall FUN_004ec7e0(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar8 = *(undefined4 **)((int)this + 8);
  if ((uint)((*(int *)((int)this + 0xc) - (int)puVar8) / 0x3c) < param_2) {
    iVar5 = *(int *)((int)this + 4);
    if ((iVar5 == 0) || (uVar4 = ((int)puVar8 - iVar5) / 0x3c, uVar4 <= param_2)) {
      uVar4 = param_2;
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = ((int)puVar8 - iVar5) / 0x3c;
    }
    iVar5 = iVar5 + uVar4;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 * 0x3c);
    puVar8 = puVar3;
    for (puVar6 = *(undefined4 **)((int)this + 4); uVar4 = param_2, puVar1 = puVar8,
        puVar6 != param_1; puVar6 = puVar6 + 0xf) {
      FUN_004ecf40(puVar8,(int)puVar6);
      puVar8 = puVar8 + 0xf;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_004ecf40(puVar1,param_3);
      puVar1 = puVar1 + 0xf;
    }
    puVar8 = puVar8 + param_2 * 0xf;
    puVar6 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar6; param_1 = param_1 + 0xf) {
      FUN_004ecf40(puVar8,(int)param_1);
      puVar8 = puVar8 + 0xf;
    }
    iVar2 = *(int *)((int)this + 8);
    for (iVar7 = *(int *)((int)this + 4); iVar7 != iVar2; iVar7 = iVar7 + 0x3c) {
      FUN_004eaa50(iVar7);
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar3 + iVar5 * 0xf;
    if (*(int *)((int)this + 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x3c;
    }
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar5) * 0xf;
    return;
  }
  if ((uint)(((int)puVar8 - (int)param_1) / 0x3c) < param_2) {
    puVar6 = param_1 + param_2 * 0xf;
    for (puVar3 = param_1; puVar3 != puVar8; puVar3 = puVar3 + 0xf) {
      FUN_004ecf40(puVar6,(int)puVar3);
      puVar6 = puVar6 + 0xf;
    }
    puVar8 = *(undefined4 **)((int)this + 8);
    for (iVar5 = param_2 - ((int)puVar8 - (int)param_1) / 0x3c; iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_004ecf40(puVar8,param_3);
      puVar8 = puVar8 + 0xf;
    }
    puVar8 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar8; param_1 = param_1 + 0xf) {
      FUN_004ee100(param_1);
    }
  }
  else {
    if (param_2 == 0) {
      return;
    }
    puVar6 = puVar8;
    for (puVar3 = puVar8 + param_2 * -0xf; puVar3 != puVar8; puVar3 = puVar3 + 0xf) {
      FUN_004ecf40(puVar6,(int)puVar3);
      puVar6 = puVar6 + 0xf;
    }
    iVar5 = *(int *)((int)this + 8);
    for (puVar8 = (undefined4 *)(iVar5 + param_2 * -0x3c); param_1 != puVar8; puVar8 = puVar8 + -0xf
        ) {
      iVar5 = iVar5 + -0x3c;
      FUN_004ee100(iVar5);
    }
    puVar8 = param_1 + param_2 * 0xf;
    for (; param_1 != puVar8; param_1 = param_1 + 0xf) {
      FUN_004ee100(param_1);
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x3c;
  return;
}


