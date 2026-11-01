
/* ==== FUN_00411f20 @ 00411f20 ==== 
 * signature: undefined4 * __stdcall FUN_00411f20(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 00411f20-00411f57
 */

undefined4 * FUN_00411f20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00411fb0(param_3,param_1);
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


