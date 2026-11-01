
/* ==== FUN_004d2d80 @ 004d2d80 ==== 
 * signature: undefined __stdcall FUN_004d2d80(void * param_1, int param_2, int param_3)
 * body: 004d2d80-004d2da8
 */

void FUN_004d2d80(void *param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_004d2e20(param_1,param_3);
    param_1 = (void *)((int)param_1 + 0x18);
  }
  return;
}


