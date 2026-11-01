
/* ==== FUN_004de280 @ 004de280 ==== 
 * signature: undefined __stdcall FUN_004de280(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 004de280-004de2a4
 */

void FUN_004de280(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


