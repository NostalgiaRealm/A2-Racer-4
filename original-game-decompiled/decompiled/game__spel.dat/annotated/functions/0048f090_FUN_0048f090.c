
/* ==== FUN_0048f090 @ 0048f090 ==== 
 * signature: undefined __thiscall FUN_0048f090(void * this, undefined4 param_1)
 * body: 0048f090-0048f0c2
 */

void __thiscall FUN_0048f090(void *this,undefined4 param_1)

{
  if (*(char *)((int)this + 0x238) != (char)param_1) {
    (**(code **)(**(int **)((int)this + 0x23c) + 0x20))(param_1);
    (**(code **)(**(int **)((int)this + 0x240) + 0x20))(param_1);
    *(char *)((int)this + 0x238) = (char)param_1;
  }
  return;
}


