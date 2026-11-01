
/* ==== FUN_0054f9de @ 0054f9de ==== 
 * signature: undefined2 * __thiscall FUN_0054f9de(void * this, undefined4 param_1, undefined2 * param_2, undefined2 * param_3)
 * body: 0054f9de-0054fa09
 */

undefined2 * __thiscall
FUN_0054f9de(void *this,undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  
  while( true ) {
    if (param_2 == param_3) {
      return param_2;
    }
    cVar1 = (**(code **)(*(int *)this + 8))(param_1,*param_2);
    if (cVar1 != '\0') break;
    param_2 = param_2 + 1;
  }
  return param_2;
}


