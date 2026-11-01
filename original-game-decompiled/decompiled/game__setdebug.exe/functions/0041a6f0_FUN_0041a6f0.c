
/* ==== FUN_0041a6f0 @ 0041a6f0 ==== 
 * signature: undefined __register FUN_0041a6f0(int * param_1)
 * body: 0041a6f0-0041a70e
 */

void FUN_0041a6f0(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[1] = param_1[1] + -1, param_1[1] == 0)) {
    (**(code **)*param_1)();
    FUN_00402d14(param_1);
  }
  return;
}


