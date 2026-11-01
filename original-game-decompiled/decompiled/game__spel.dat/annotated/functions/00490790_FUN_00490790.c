
/* ==== FUN_00490790 @ 00490790 ==== 
 * signature: int __thiscall FUN_00490790(void * this, undefined1 * param_1, undefined1 * param_2)
 * body: 00490790-004909b3
 */

int __thiscall FUN_00490790(void *this,undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar1 = *(int *)((int)this + 4);
  puVar7 = *(undefined1 **)((int)this + 8);
  iVar3 = *(int *)((int)this + 0xc) - (int)puVar7;
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x114 + iVar4 == iVar4) {
    if ((iVar1 == 0) || (uVar6 = ((int)puVar7 - iVar1) / 0x114, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar7 - iVar1) / 0x114;
    }
    iVar4 = iVar4 + uVar6;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = 0;
    }
    puVar2 = operator_new(iVar3 * 0x114);
    puVar5 = puVar2;
    for (puVar7 = *(undefined1 **)((int)this + 4); puVar7 != param_1; puVar7 = puVar7 + 0x114) {
      FUN_00491250(puVar5,puVar7);
      puVar5 = puVar5 + 0x114;
    }
    FUN_00491250(puVar5,param_2);
    FUN_00490c70(param_1,*(undefined1 **)((int)this + 8),puVar5 + 0x114);
    FUN_004909f0(*(int *)((int)this + 4),*(int *)((int)this + 8));
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar2 + iVar4 * 0x114;
    iVar4 = FUN_004909c0((int)this);
    *(undefined1 **)((int)this + 4) = puVar2;
    *(undefined1 **)((int)this + 8) = puVar2 + (iVar4 + 1) * 0x114;
  }
  else {
    iVar4 = (int)puVar7 - (int)param_1 >> 0x1f;
    if (((int)puVar7 - (int)param_1) / 0x114 + iVar4 == iVar4) {
      FUN_00490c70(param_1,puVar7,param_1 + 0x114);
      FUN_00490cb0(*(undefined1 **)((int)this + 8),
                   1 - ((int)*(undefined1 **)((int)this + 8) - (int)param_1) / 0x114,param_2);
      FUN_00490d50(param_1,*(void **)((int)this + 8),param_2);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x114;
    }
    else {
      FUN_00490c70(puVar7 + -0x114,puVar7,puVar7);
      FUN_00490ed0(param_1,(void *)((int)*(void **)((int)this + 8) + -0x114),
                   *(void **)((int)this + 8));
      FUN_00490d50(param_1,param_1 + 0x114,param_2);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x114;
    }
  }
  return *(int *)((int)this + 4) + (((int)param_1 - iVar1) / 0x114) * 0x114;
}


