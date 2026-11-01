
/* ==== FUN_004104f0 @ 004104f0 ==== 
 * signature: undefined1 * __stdcall FUN_004104f0(undefined1 * param_1, undefined1 * param_2, undefined1 * param_3)
 * body: 004104f0-00410527
 */

undefined1 * FUN_004104f0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00410e30(param_3,param_1);
    param_1 = param_1 + 0x14;
    param_3 = param_3 + 0x14;
  } while (param_1 != param_2);
  return param_3;
}


