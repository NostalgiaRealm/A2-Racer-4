
/* ==== FUN_00490ce0 @ 00490ce0 ==== 
 * signature: undefined4 * __stdcall FUN_00490ce0(int param_1, int param_2, undefined4 * param_3)
 * body: 00490ce0-00490d17
 */

undefined4 * FUN_00490ce0(int param_1,int param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_004913b0(param_3,param_1);
    param_1 = param_1 + 0x78;
    param_3 = param_3 + 0x1e;
  } while (param_1 != param_2);
  return param_3;
}


