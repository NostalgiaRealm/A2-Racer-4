
/* ==== FUN_0047aea3 @ 0047aea3 ==== 
 * signature: undefined4 __thiscall FUN_0047aea3(void * this, void * param_1)
 * body: 0047aea3-0047aeaf
 */

undefined4 __thiscall FUN_0047aea3(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  if (this == param_1) {
    return 0;
  }
  if (*(int *)((int)param_1 + 4) < *(int *)((int)this + 8)) {
    *(int *)((int)this + 4) = *(int *)((int)param_1 + 4);
    iVar4 = 0;
    if (0 < *(int *)((int)param_1 + 4)) {
      iVar3 = 0;
      do {
        puVar1 = (undefined4 *)FUN_0047aff0(param_1,auStack_18,iVar4);
        puVar2 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar3);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        puVar1 = (undefined4 *)FUN_0047b020(param_1,auStack_c,iVar4);
        puVar2 = (undefined4 *)(*(int *)((int)this + 0x10) + iVar3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
      } while (iVar4 < *(int *)((int)param_1 + 4));
    }
    return 0;
  }
  return 0xffffffff;
}


