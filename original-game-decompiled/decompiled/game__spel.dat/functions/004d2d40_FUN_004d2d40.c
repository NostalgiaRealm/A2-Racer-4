
/* ==== FUN_004d2d40 @ 004d2d40 ==== 
 * signature: void * __stdcall FUN_004d2d40(int param_1, int param_2, void * param_3)
 * body: 004d2d40-004d2d77
 */

void * FUN_004d2d40(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_004d2e20(param_3,param_1);
    param_1 = param_1 + 0x18;
    param_3 = (void *)((int)param_3 + 0x18);
  } while (param_1 != param_2);
  return param_3;
}


