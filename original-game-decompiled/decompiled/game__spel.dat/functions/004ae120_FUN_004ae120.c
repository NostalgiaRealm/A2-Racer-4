
/* ==== FUN_004ae120 @ 004ae120 ==== 
 * signature: undefined __thiscall FUN_004ae120(void * this, undefined2 param_1, undefined2 param_2, undefined2 param_3)
 * body: 004ae120-004ae164
 */

void __thiscall FUN_004ae120(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x60) + *(int *)((int)this + 0x68) * 2) = param_1;
  iVar1 = *(int *)((int)this + 0x68) + 1;
  *(int *)((int)this + 0x68) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x60) + iVar1 * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x68) + 1;
  *(int *)((int)this + 0x68) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x60) + iVar1 * 2) = param_3;
  *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + 1;
  return;
}


