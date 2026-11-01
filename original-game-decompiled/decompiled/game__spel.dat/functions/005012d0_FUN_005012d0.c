
/* ==== FUN_005012d0 @ 005012d0 ==== 
 * signature: uint __thiscall FUN_005012d0(void * this, undefined4 param_1, uint param_2)
 * body: 005012d0-005013c4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_005012d0(void *this,undefined4 param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = param_2 & *(uint *)((int)this + 4);
  while( true ) {
    puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar8 * 8);
    if (*(int *)(*(int *)((int)this + 0xc) + 4 + uVar8 * 8) == 0) {
      _DAT_00000000 = 0;
    }
    if (((*puVar1 | 0x80000000) == param_2) &&
       (iVar5 = (*(code *)**(undefined4 **)this)(puVar1[1],param_1), iVar5 == 1)) break;
    uVar8 = uVar8 + 1 & *(uint *)((int)this + 4);
  }
  uVar2 = puVar1[1];
  iVar5 = *(int *)((int)this + 0xc);
  uVar6 = *(uint *)((int)this + 8);
  uVar3 = *(uint *)((int)this + 4);
  *(uint *)((int)this + 8) = (uVar6 - 1 ^ uVar6) & 0xffffff ^ uVar6;
  uVar6 = uVar3;
  if (*(int *)(iVar5 + 4 + uVar3 * 8) != 0) {
    uVar6 = *(uint *)(iVar5 + uVar3 * 8) & uVar3;
  }
  uVar7 = uVar8 + 1 & uVar3;
  iVar4 = *(int *)(iVar5 + 4 + uVar7 * 8);
  while (iVar4 != 0) {
    uVar9 = uVar3 & *(uint *)(iVar5 + uVar7 * 8);
    if ((int)uVar8 < (int)uVar7) {
      if ((((int)uVar6 <= (int)uVar9) && ((uVar9 != uVar6 || ((int)uVar7 < (int)uVar9)))) ||
         ((int)uVar9 <= (int)uVar8)) {
LAB_00501384:
        *(undefined4 *)(iVar5 + uVar8 * 8) = *(undefined4 *)(iVar5 + uVar7 * 8);
        *(undefined4 *)(iVar5 + 4 + uVar8 * 8) = *(undefined4 *)(iVar5 + 4 + uVar7 * 8);
        uVar8 = uVar7;
      }
    }
    else {
      if (uVar8 != uVar3) break;
      if ((int)uVar6 <= (int)uVar9) goto LAB_00501384;
    }
    uVar3 = *(uint *)((int)this + 4);
    iVar5 = *(int *)((int)this + 0xc);
    uVar7 = uVar7 + 1 & uVar3;
    iVar4 = *(int *)(iVar5 + 4 + uVar7 * 8);
  }
  *(undefined4 *)(*(int *)((int)this + 0xc) + 4 + uVar8 * 8) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + uVar8 * 8) = 0;
  return uVar2;
}


