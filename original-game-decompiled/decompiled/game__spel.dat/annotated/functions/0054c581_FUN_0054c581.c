
/* ==== FUN_0054c581 @ 0054c581 ==== 
 * signature: undefined __thiscall FUN_0054c581(void * this, int param_1)
 * body: 0054c581-0054c594
 */

void __thiscall FUN_0054c581(void *this,int param_1)

{
  **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - param_1;
  **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + param_1 * 2;
  return;
}


