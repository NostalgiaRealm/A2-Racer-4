
/* ==== FUN_00501220 @ 00501220 ==== 
 * signature: undefined __thiscall FUN_00501220(void * this, uint param_1, uint param_2)
 * body: 00501220-005012ca
 */

void __thiscall FUN_00501220(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)((int)this + 4);
  iVar5 = (*(uint *)((int)this + 8) & 0xffffff) * 2;
  if (iVar5 - iVar2 != 0 && iVar2 <= iVar5) {
    FUN_00501170(this,iVar2 * 2 + 2);
  }
  uVar3 = *(uint *)((int)this + 8);
  uVar8 = *(uint *)((int)this + 4);
  uVar6 = uVar8 & param_2;
  *(uint *)((int)this + 8) = (uVar3 + 1 ^ uVar3) & 0xffffff ^ uVar3;
  puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar6 * 8);
  uVar3 = *(uint *)(*(int *)((int)this + 0xc) + 4 + uVar6 * 8);
  uVar7 = uVar6;
  while (uVar3 != 0) {
    uVar4 = *puVar1;
    uVar8 = uVar4 & uVar8;
    if ((int)uVar7 < (int)uVar8) {
      puVar1[1] = param_1;
      *puVar1 = param_2;
      uVar7 = uVar8;
      param_1 = uVar3;
      param_2 = uVar4;
    }
    uVar8 = *(uint *)((int)this + 4);
    uVar6 = uVar6 + 1 & uVar8;
    puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar6 * 8);
    uVar3 = *(uint *)(*(int *)((int)this + 0xc) + 4 + uVar6 * 8);
  }
  *(uint *)(*(int *)((int)this + 0xc) + 4 + uVar6 * 8) = param_1;
  *(uint *)(*(int *)((int)this + 0xc) + uVar6 * 8) = param_2;
  return;
}


