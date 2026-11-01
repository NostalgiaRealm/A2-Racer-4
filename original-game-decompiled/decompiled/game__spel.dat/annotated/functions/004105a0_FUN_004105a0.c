
/* ==== FUN_004105a0 @ 004105a0 ==== 
 * signature: undefined __stdcall FUN_004105a0(undefined1 * param_1, int param_2, undefined1 * param_3)
 * body: 004105a0-004105c8
 */

void FUN_004105a0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00410f80(param_1,param_3);
    param_1 = param_1 + 0x54;
  }
  return;
}


