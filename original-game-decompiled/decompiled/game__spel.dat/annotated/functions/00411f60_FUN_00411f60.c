
/* ==== FUN_00411f60 @ 00411f60 ==== 
 * signature: undefined4 * __stdcall FUN_00411f60(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 00411f60-00411fa1
 */

undefined4 * FUN_00411f60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


