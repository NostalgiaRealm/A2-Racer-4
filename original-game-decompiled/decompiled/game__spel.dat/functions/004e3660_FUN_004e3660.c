
/* ==== FUN_004e3660 @ 004e3660 ==== 
 * signature: undefined __thiscall FUN_004e3660(void * this, void * param_1)
 * body: 004e3660-004e3690
 */

void __thiscall FUN_004e3660(void *this,void *param_1)

{
  int *piVar1;
  
  FUN_004e4020(this,param_1);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
  (**(code **)(*piVar1 + 0x20))(param_1);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
  (**(code **)(*piVar1 + 0x20))(param_1);
  return;
}


