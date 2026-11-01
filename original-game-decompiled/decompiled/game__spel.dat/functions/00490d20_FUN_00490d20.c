
/* ==== FUN_00490d20 @ 00490d20 ==== 
 * signature: undefined __stdcall FUN_00490d20(undefined4 * param_1, int param_2, int param_3)
 * body: 00490d20-00490d48
 */

void FUN_00490d20(undefined4 *param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_004913b0(param_1,param_3);
    param_1 = param_1 + 0x1e;
  }
  return;
}


