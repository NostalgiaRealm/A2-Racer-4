
/* ==== FUN_004d2de0 @ 004d2de0 ==== 
 * signature: void * __cdecl FUN_004d2de0(int param_1, int param_2, void * param_3)
 * body: 004d2de0-004d2e11
 */

void * __cdecl FUN_004d2de0(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -0x18;
    param_3 = (void *)((int)param_3 + -0x18);
    FUN_004cf110(param_3,(void *)param_2);
  } while (param_2 != param_1);
  return param_3;
}


