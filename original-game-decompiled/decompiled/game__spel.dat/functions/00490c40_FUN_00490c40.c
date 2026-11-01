
/* ==== FUN_00490c40 @ 00490c40 ==== 
 * signature: undefined __stdcall FUN_00490c40(undefined4 * param_1, undefined4 * param_2)
 * body: 00490c40-00490c61
 */

void FUN_00490c40(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1e) {
    (**(code **)*param_1)(0);
  }
  return;
}


