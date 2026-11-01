
/* ==== FUN_004871e0 @ 004871e0 ==== 
 * signature: undefined __thiscall FUN_004871e0(void * this, int param_1)
 * body: 004871e0-004871fb
 */

void __thiscall FUN_004871e0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x90) != param_1) {
    *(int *)((int)this + 0x90) = param_1;
    (**(code **)(*(int *)this + 0x3c))();
  }
  return;
}


