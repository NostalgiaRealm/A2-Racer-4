
/* ==== FUN_0053f9e0 @ 0053f9e0 ==== 
 * signature: undefined __thiscall FUN_0053f9e0(void * this, int param_1)
 * body: 0053f9e0-0053fa2b
 */

void __thiscall FUN_0053f9e0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(short *)(iVar1 + 0x3e) < 2) {
    FUN_00505cc0(*(void **)(iVar1 + 0x20));
    return;
  }
  FUN_004f6be0(iVar1);
  if ((**(uint **)(param_1 + 0x14) & 0x3000) != 0) {
    FUN_0053f0a0(*(int *)((int)this + 4));
  }
  if ((**(uint **)(param_1 + 0x14) & 0xc00) == 0) {
    FUN_0053f080(*(int *)((int)this + 4));
  }
  return;
}


