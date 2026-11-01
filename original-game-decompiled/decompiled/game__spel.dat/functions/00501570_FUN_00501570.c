
/* ==== FUN_00501570 @ 00501570 ==== 
 * signature: undefined __thiscall FUN_00501570(void * this, uint param_1, uint param_2, uint param_3)
 * body: 00501570-0050162b
 */

void __thiscall FUN_00501570(void *this,uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)this <= *(int *)((int)this + 8) * 2) {
    FUN_005014a0(this,*(int *)this * 2);
  }
  uVar7 = *(uint *)((int)this + 4);
  uVar5 = uVar7 & param_3;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar5 * 0xc);
  uVar2 = *(uint *)(*(int *)((int)this + 0xc) + 4 + uVar5 * 0xc);
  uVar6 = uVar5;
  uVar4 = param_2;
  while (uVar2 != 0) {
    uVar3 = *puVar1;
    uVar7 = uVar3 & uVar7;
    param_2 = uVar4;
    if ((int)uVar6 < (int)uVar7) {
      param_2 = puVar1[2];
      puVar1[1] = param_1;
      puVar1[2] = uVar4;
      *puVar1 = param_3;
      uVar6 = uVar7;
      param_1 = uVar2;
      param_3 = uVar3;
    }
    uVar7 = *(uint *)((int)this + 4);
    uVar5 = uVar5 + 1 & uVar7;
    puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar5 * 0xc);
    uVar4 = param_2;
    uVar2 = *(uint *)(*(int *)((int)this + 0xc) + 4 + uVar5 * 0xc);
  }
  iVar8 = uVar5 * 0xc;
  *(uint *)(*(int *)((int)this + 0xc) + 4 + iVar8) = param_1;
  *(uint *)(*(int *)((int)this + 0xc) + 8 + iVar8) = uVar4;
  *(uint *)(*(int *)((int)this + 0xc) + iVar8) = param_3;
  return;
}


