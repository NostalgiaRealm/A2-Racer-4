
/* ==== FUN_00501680 @ 00501680 ==== 
 * signature: undefined4 __thiscall FUN_00501680(void * this, int param_1, uint param_2)
 * body: 00501680-0050176f
 */

undefined4 __thiscall FUN_00501680(void *this,int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = *(int *)((int)this + 0xc);
  uVar5 = *(uint *)((int)this + 4);
  uVar7 = param_2;
  while( true ) {
    uVar7 = uVar5 & uVar7;
    iVar1 = iVar4 + uVar7 * 0xc;
    if (((*(uint *)(iVar4 + uVar7 * 0xc) | 0x80000000) == param_2) &&
       (*(int *)(iVar1 + 4) == param_1)) break;
    uVar7 = uVar7 + 1;
  }
  uVar6 = *(undefined4 *)(iVar1 + 8);
  puVar2 = (uint *)(iVar4 + uVar5 * 0xc);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  param_2 = uVar5;
  if (puVar2[1] != 0) {
    param_2 = *puVar2 & uVar5;
  }
  uVar8 = uVar7 + 1 & uVar5;
  puVar2 = (uint *)(iVar4 + uVar8 * 0xc);
  iVar1 = *(int *)(iVar4 + 4 + uVar8 * 0xc);
  while (iVar1 != 0) {
    uVar9 = *puVar2 & uVar5;
    if ((int)uVar7 < (int)uVar8) {
      if ((((int)param_2 <= (int)uVar9) && ((uVar9 != param_2 || ((int)uVar8 < (int)uVar9)))) ||
         ((int)uVar9 <= (int)uVar7)) {
LAB_00501719:
        puVar3 = (uint *)(iVar4 + uVar7 * 0xc);
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        uVar7 = uVar8;
      }
    }
    else {
      if (uVar7 != uVar5) break;
      if ((int)param_2 <= (int)uVar9) goto LAB_00501719;
    }
    uVar5 = *(uint *)((int)this + 4);
    iVar4 = *(int *)((int)this + 0xc);
    uVar8 = uVar8 + 1 & uVar5;
    puVar2 = (uint *)(iVar4 + uVar8 * 0xc);
    iVar1 = *(int *)(iVar4 + 4 + uVar8 * 0xc);
  }
  *(undefined4 *)(*(int *)((int)this + 0xc) + 4 + uVar7 * 0xc) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + uVar7 * 0xc) = 0;
  return uVar6;
}


