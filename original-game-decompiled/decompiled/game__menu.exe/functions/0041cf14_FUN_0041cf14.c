
/* ==== FUN_0041cf14 @ 0041cf14 ==== 
 * signature: undefined __register FUN_0041cf14(int * param_1)
 * body: 0041cf14-0041cf32
 */

void FUN_0041cf14(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    (**(code **)*param_1)();
    FUN_00402f9c(param_1);
  }
  return;
}


