
/* ==== FUN_005017c0 @ 005017c0 ==== 
 * signature: uint __thiscall FUN_005017c0(void * this, uint param_1, uint param_2)
 * body: 005017c0-00501819
 */

uint __thiscall FUN_005017c0(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)this) {
    uVar2 = param_2;
    do {
      uVar2 = *(uint *)((int)this + 4) & uVar2;
      iVar3 = iVar3 + 1;
      puVar1 = (uint *)(*(int *)((int)this + 0xc) + uVar2 * 0xc);
      if (*(int *)(*(int *)((int)this + 0xc) + 8 + uVar2 * 0xc) == 0) {
        return 0;
      }
      if (((*puVar1 | 0x80000000) == param_2) && (puVar1[1] == param_1)) {
        return puVar1[2];
      }
      uVar2 = uVar2 + 1;
    } while (iVar3 < *(int *)this);
  }
  return 0;
}


