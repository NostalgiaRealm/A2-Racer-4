
/* ==== FUN_004d2d10 @ 004d2d10 ==== 
 * signature: undefined __stdcall FUN_004d2d10(undefined4 * param_1, undefined4 * param_2)
 * body: 004d2d10-004d2d31
 */

void FUN_004d2d10(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)*param_1)(0);
  }
  return;
}


