
/* ==== FUN_00410530 @ 00410530 ==== 
 * signature: undefined __stdcall FUN_00410530(undefined1 * param_1, int param_2, undefined1 * param_3)
 * body: 00410530-00410558
 */

void FUN_00410530(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00410e30(param_1,param_3);
    param_1 = param_1 + 0x14;
  }
  return;
}


