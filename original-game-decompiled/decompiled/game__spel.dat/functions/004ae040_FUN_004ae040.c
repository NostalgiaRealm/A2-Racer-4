
/* ==== FUN_004ae040 @ 004ae040 ==== 
 * signature: undefined __thiscall FUN_004ae040(void * this, undefined2 param_1, undefined2 param_2, undefined2 param_3)
 * body: 004ae040-004ae084
 */

void __thiscall FUN_004ae040(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x70) + *(int *)((int)this + 0x78) * 2) = param_1;
  iVar1 = *(int *)((int)this + 0x78) + 1;
  *(int *)((int)this + 0x78) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x70) + iVar1 * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x78) + 1;
  *(int *)((int)this + 0x78) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x70) + iVar1 * 2) = param_3;
  *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
  return;
}


