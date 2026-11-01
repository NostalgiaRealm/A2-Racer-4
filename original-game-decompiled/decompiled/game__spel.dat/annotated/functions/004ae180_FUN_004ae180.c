
/* ==== FUN_004ae180 @ 004ae180 ==== 
 * signature: undefined __thiscall FUN_004ae180(void * this, undefined2 param_1, undefined2 param_2, undefined2 param_3)
 * body: 004ae180-004ae1e2
 */

void __thiscall FUN_004ae180(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x90) + *(int *)((int)this + 0x98) * 2) = param_1;
  iVar1 = *(int *)((int)this + 0x98) + 1;
  *(int *)((int)this + 0x98) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x90) + iVar1 * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x98) + 1;
  *(int *)((int)this + 0x98) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x90) + iVar1 * 2) = param_3;
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + 1;
  return;
}


