
/* ==== FUN_004905f0 @ 004905f0 ==== 
 * signature: undefined4 * __thiscall FUN_004905f0(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 004905f0-0049078b
 */

undefined4 * __thiscall FUN_004905f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  iVar1 = *(int *)((int)this + 4);
  iVar6 = (int)param_1 - iVar1 >> 2;
  if (*(int *)((int)this + 0xc) - (int)puVar5 >> 2 != 0) {
    if ((int)puVar5 - (int)param_1 >> 2 == 0) {
      FUN_004de170(param_1,puVar5,param_1 + 1);
      FUN_004de280(*(undefined4 **)((int)this + 8),
                   1 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),param_2);
      puVar5 = *(undefined4 **)((int)this + 8);
      for (; param_1 != puVar5; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    else {
      FUN_004de170(puVar5 + -1,puVar5,puVar5);
      puVar5 = *(undefined4 **)((int)this + 8);
      puVar7 = puVar5;
      while (param_1 != puVar7 + -1) {
        puVar5 = puVar5 + -1;
        *puVar5 = puVar7[-2];
        puVar7 = puVar7 + -1;
      }
      puVar5 = param_1 + 1;
      for (; param_1 != puVar5; param_1 = param_1 + 1) {
        *param_1 = *param_2;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 4;
    return (undefined4 *)(*(int *)((int)this + 4) + iVar6 * 4);
  }
  if ((iVar1 == 0) || (uVar4 = (int)puVar5 - iVar1 >> 2, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar5 - iVar1 >> 2;
  }
  iVar1 = iVar1 + uVar4;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 4);
  puVar7 = puVar3;
  for (puVar5 = *(undefined4 **)((int)this + 4); puVar5 != param_1; puVar5 = puVar5 + 1) {
    FUN_004d2770(puVar7,puVar5);
    puVar7 = puVar7 + 1;
  }
  FUN_004d2770(puVar7,param_2);
  FUN_004de170(param_1,*(undefined4 **)((int)this + 8),puVar7 + 1);
  FUN_0042f530();
  FUN_0054b339(*(LPVOID *)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar3 + iVar1;
  iVar1 = FUN_00492480((int)this);
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + iVar1 + 1;
  return puVar3 + iVar6;
}


