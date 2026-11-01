
/* ==== FUN_0050d340 @ 0050d340 ==== 
 * signature: undefined __thiscall FUN_0050d340(void * this, undefined4 param_1, undefined4 param_2, int param_3)
 * body: 0050d340-0050d391
 */

void __thiscall FUN_0050d340(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  DAT_005b9848 = DAT_005b9848 + 1;
  if ((param_3 != 0) && (piVar1 = *(int **)((int)this + 0x14), piVar1 != (int *)0x0)) {
    if (this != (void *)0x0) {
      (**(code **)(*piVar1 + 0x18))((int)this + 0x28);
      return;
    }
    (**(code **)(*piVar1 + 0x18))(0);
    return;
  }
  (*(code *)**(undefined4 **)((int)this + 0x28))();
  return;
}


