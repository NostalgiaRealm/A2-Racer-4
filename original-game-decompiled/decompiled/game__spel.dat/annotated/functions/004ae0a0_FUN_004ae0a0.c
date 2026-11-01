
/* ==== FUN_004ae0a0 @ 004ae0a0 ==== 
 * signature: undefined __thiscall FUN_004ae0a0(void * this, undefined2 param_1, undefined2 param_2, undefined2 param_3)
 * body: 004ae0a0-004ae102
 */

void __thiscall FUN_004ae0a0(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)((int)this + 0x80) + *(int *)((int)this + 0x88) * 2) = param_1;
  iVar1 = *(int *)((int)this + 0x88) + 1;
  *(int *)((int)this + 0x88) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x80) + iVar1 * 2) = param_2;
  iVar1 = *(int *)((int)this + 0x88) + 1;
  *(int *)((int)this + 0x88) = iVar1;
  *(undefined2 *)(*(int *)((int)this + 0x80) + iVar1 * 2) = param_3;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 1;
  return;
}


