
/* ==== FUN_0047ae10 @ 0047ae10 ==== 
 * signature: void * __thiscall FUN_0047ae10(void * this, void * param_1)
 * body: 0047ae10-0047aea2
 */

void * __thiscall FUN_0047ae10(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  FUN_0047ad00((int)this);
  FUN_0047ac90(this,*(int *)((int)param_1 + 8));
  iVar3 = *(int *)((int)param_1 + 4);
  iVar4 = 0;
  *(int *)((int)this + 4) = iVar3;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)FUN_0047aff0(param_1,local_18,iVar4);
      puVar2 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar3);
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar1 = (undefined4 *)FUN_0047b020(param_1,local_c,iVar4);
      puVar2 = (undefined4 *)(iVar3 + *(int *)((int)this + 0x10));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
    } while (iVar4 < *(int *)((int)this + 4));
    return this;
  }
  return this;
}


