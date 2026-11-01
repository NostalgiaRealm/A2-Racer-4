
/* ==== FUN_0054c5b6 @ 0054c5b6 ==== 
 * signature: undefined __thiscall FUN_0054c5b6(void * this, int param_1)
 * body: 0054c5b6-0054c5c9
 */

void __thiscall FUN_0054c5b6(void *this,int param_1)

{
  **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) - param_1;
  **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + param_1 * 2;
  return;
}


