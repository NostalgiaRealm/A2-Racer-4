
/* ==== FUN_004bd750 @ 004bd750 ==== 
 * signature: undefined4 __thiscall FUN_004bd750(void * this, int param_1)
 * body: 004bd750-004bd77b
 */

undefined4 __thiscall FUN_004bd750(void *this,int param_1)

{
  void *pvVar1;
  
  FUN_004bd800((int)this);
  pvVar1 = operator_new(param_1 * 2);
  *(int *)((int)this + 0x94) = param_1;
  *(void **)((int)this + 0x90) = pvVar1;
  return 0;
}


