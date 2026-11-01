
/* ==== FUN_004de170 @ 004de170 ==== 
 * signature: undefined4 * __stdcall FUN_004de170(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 004de170-004de19d
 */

undefined4 * FUN_004de170(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}


