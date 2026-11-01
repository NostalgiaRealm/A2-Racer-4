
/* ==== FUN_0050f270 @ 0050f270 ==== 
 * signature: undefined __thiscall FUN_0050f270(void * this, int param_1)
 * body: 0050f270-0050f28f
 */

void __thiscall FUN_0050f270(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)((int)this + 0x20) + 0x28 + param_1 * 4);
  if (*piVar1 == 0) {
    *piVar1 = 1;
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + -1;
  }
  return;
}


