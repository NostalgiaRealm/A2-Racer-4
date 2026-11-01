
/* ==== FUN_0050c430 @ 0050c430 ==== 
 * signature: undefined __stdcall FUN_0050c430(int param_1, undefined4 param_2, float * param_3)
 * body: 0050c430-0050c47d
 */

void FUN_0050c430(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (*(float *)(param_1 + 8) * 0.99) /
          SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  *param_3 = *param_3 * fVar1;
  param_3[1] = param_3[1] * fVar1;
  param_3[2] = param_3[2] * fVar1;
  return;
}


