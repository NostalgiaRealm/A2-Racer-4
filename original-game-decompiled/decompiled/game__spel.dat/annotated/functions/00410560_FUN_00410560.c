
/* ==== FUN_00410560 @ 00410560 ==== 
 * signature: undefined1 * __stdcall FUN_00410560(undefined1 * param_1, undefined1 * param_2, undefined1 * param_3)
 * body: 00410560-00410597
 */

undefined1 * FUN_00410560(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00410f80(param_3,param_1);
    param_1 = param_1 + 0x54;
    param_3 = param_3 + 0x54;
  } while (param_1 != param_2);
  return param_3;
}


