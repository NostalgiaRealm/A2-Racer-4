
/* ==== FUN_0054f99f @ 0054f99f ==== 
 * signature: undefined2 * __thiscall FUN_0054f99f(void * this, undefined2 * param_1, undefined2 * param_2, undefined2 * param_3)
 * body: 0054f99f-0054f9dd
 */

undefined2 * __thiscall
FUN_0054f99f(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    cVar1 = (**(code **)(*(int *)this + 0x30))(*param_1,0);
    *param_3 = *(undefined2 *)(*(int *)((int)this + 0x10) + cVar1 * 2);
    param_3 = param_3 + 1;
  }
  return param_1;
}


