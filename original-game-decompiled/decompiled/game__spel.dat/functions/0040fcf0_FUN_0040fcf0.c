
/* ==== FUN_0040fcf0 @ 0040fcf0 ==== 
 * signature: int __thiscall FUN_0040fcf0(void * this, undefined1 * param_1, undefined1 * param_2)
 * body: 0040fcf0-0040fec6
 */

int __thiscall FUN_0040fcf0(void *this,undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar1 = *(int *)((int)this + 4);
  puVar5 = *(undefined1 **)((int)this + 8);
  iVar3 = *(int *)((int)this + 0xc) - (int)puVar5;
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x14 + iVar4 == iVar4) {
    if ((iVar1 == 0) || (uVar6 = ((int)puVar5 - iVar1) / 0x14, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar5 - iVar1) / 0x14;
    }
    iVar4 = iVar4 + uVar6;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = 0;
    }
    puVar2 = operator_new(iVar3 * 0x14);
    puVar7 = puVar2;
    for (puVar5 = *(undefined1 **)((int)this + 4); puVar5 != param_1; puVar5 = puVar5 + 0x14) {
      FUN_00410e30(puVar7,puVar5);
      puVar7 = puVar7 + 0x14;
    }
    FUN_00410e30(puVar7,param_2);
    FUN_004104f0(param_1,*(undefined1 **)((int)this + 8),puVar7 + 0x14);
    FUN_0040ff00(*(int *)((int)this + 4),*(int *)((int)this + 8));
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar2 + iVar4 * 0x14;
    iVar4 = FUN_0040fed0((int)this);
    *(undefined1 **)((int)this + 4) = puVar2;
    *(undefined1 **)((int)this + 8) = puVar2 + (iVar4 + 1) * 0x14;
  }
  else {
    iVar4 = (int)puVar5 - (int)param_1 >> 0x1f;
    if (((int)puVar5 - (int)param_1) / 0x14 + iVar4 == iVar4) {
      FUN_004104f0(param_1,puVar5,param_1 + 0x14);
      FUN_00410530(*(undefined1 **)((int)this + 8),
                   1 - ((int)*(undefined1 **)((int)this + 8) - (int)param_1) / 0x14,param_2);
      FUN_004105d0(param_1,*(void **)((int)this + 8),param_2);
    }
    else {
      FUN_004104f0(puVar5 + -0x14,puVar5,puVar5);
      FUN_00410720(param_1,(void *)((int)*(void **)((int)this + 8) + -0x14),
                   *(void **)((int)this + 8));
      FUN_004105d0(param_1,param_1 + 0x14,param_2);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x14;
  }
  return *(int *)((int)this + 4) + (((int)param_1 - iVar1) / 0x14) * 0x14;
}


