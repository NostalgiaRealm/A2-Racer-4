
/* ==== FUN_0049e750 @ 0049e750 ==== 
 * signature: int __stdcall FUN_0049e750(float * param_1, float * param_2)
 * body: 0049e750-0049e7c5
 */

int FUN_0049e750(float *param_1,float *param_2)

{
  longlong lVar1;
  
  param_1 = (float *)(param_1[2] * *param_2 - param_2[2] * *param_1);
  if (0.0 <= (float)param_1) {
    FUN_00559960();
  }
  else {
    FUN_00559960();
  }
  lVar1 = __ftol();
  param_1 = (float *)lVar1;
  FUN_004a01a0((int *)&param_1,-10000,10000);
  return (int)param_1;
}


