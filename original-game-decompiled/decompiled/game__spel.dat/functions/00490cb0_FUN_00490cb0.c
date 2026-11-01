
/* ==== FUN_00490cb0 @ 00490cb0 ==== 
 * signature: undefined __stdcall FUN_00490cb0(undefined1 * param_1, int param_2, undefined1 * param_3)
 * body: 00490cb0-00490cdb
 */

void FUN_00490cb0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00491250(param_1,param_3);
    param_1 = param_1 + 0x114;
  }
  return;
}


