
/* ==== FUN_0047ad30 @ 0047ad30 ==== 
 * signature: undefined4 * __thiscall FUN_0047ad30(void * this, void * param_1)
 * body: 0047ad30-0047ae02
 */

undefined4 * __thiscall FUN_0047ad30(void *this,void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  *(undefined ***)this = &PTR_FUN_00576a90;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
  iVar5 = *(int *)((int)param_1 + 8);
  *(int *)((int)this + 8) = iVar5;
  pvVar1 = operator_new(iVar5 * 0xc);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  *(void **)((int)this + 0xc) = pvVar1;
  pvVar1 = operator_new(*(int *)((int)this + 8) * 0xc);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  *(void **)((int)this + 0x10) = pvVar1;
  iVar5 = 0;
  if (*(int *)((int)this + 4) < 1) {
    return this;
  }
  iVar4 = 0;
  do {
    puVar2 = (undefined4 *)FUN_0047aff0(param_1,local_18,iVar5);
    puVar3 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar4);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar2 = (undefined4 *)FUN_0047b020(param_1,local_c,iVar5);
    puVar3 = (undefined4 *)(iVar4 + *(int *)((int)this + 0x10));
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xc;
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
  } while (iVar5 < *(int *)((int)this + 4));
  return this;
}


