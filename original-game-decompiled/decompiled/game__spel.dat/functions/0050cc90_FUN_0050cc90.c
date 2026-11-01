
/* ==== FUN_0050cc90 @ 0050cc90 ==== 
 * signature: undefined __thiscall FUN_0050cc90(void * this, int param_1)
 * body: 0050cc90-0050ccbf
 */

void __thiscall FUN_0050cc90(void *this,int param_1)

{
  if (*(int **)((int)this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x20) + 8))
              (*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x124),0);
  }
  (**(code **)(*(int *)this + 0x20))();
  return;
}


