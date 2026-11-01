
/* ==== FUN_0050d3b0 @ 0050d3b0 ==== 
 * signature: undefined __thiscall FUN_0050d3b0(void * this, undefined4 param_1, int param_2)
 * body: 0050d3b0-0050d3fa
 */

void __thiscall FUN_0050d3b0(void *this,undefined4 param_1,int param_2)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 0x1c) = param_1;
  DAT_005b9848 = DAT_005b9848 + 1;
  if ((param_2 != 0) && (piVar1 = *(int **)((int)this + 0x14), piVar1 != (int *)0x0)) {
    if (this != (void *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)this + 0x20);
      return;
    }
    (**(code **)(*piVar1 + 0x1c))(0);
    return;
  }
  (*(code *)**(undefined4 **)((int)this + 0x20))();
  return;
}


