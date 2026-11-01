
/* ==== FUN_0042ee66 @ 0042ee66 ==== 
 * signature: undefined __thiscall FUN_0042ee66(void * this, int param_1, int param_2)
 * body: 0042ee66-0042ee6f
 */

void __thiscall FUN_0042ee66(void *this,int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)((int)this + 0x14) + param_1 * 4);
  if (*piVar1 == -1) {
    *piVar1 = param_2;
  }
  return;
}


