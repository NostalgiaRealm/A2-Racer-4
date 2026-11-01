
/* ==== FUN_00490c70 @ 00490c70 ==== 
 * signature: undefined1 * __stdcall FUN_00490c70(undefined1 * param_1, undefined1 * param_2, undefined1 * param_3)
 * body: 00490c70-00490cad
 */

undefined1 * FUN_00490c70(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00491250(param_3,param_1);
    param_1 = param_1 + 0x114;
    param_3 = param_3 + 0x114;
  } while (param_1 != param_2);
  return param_3;
}


