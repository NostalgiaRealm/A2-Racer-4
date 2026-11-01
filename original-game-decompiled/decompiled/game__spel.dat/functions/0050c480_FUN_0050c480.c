
/* ==== FUN_0050c480 @ 0050c480 ==== 
 * signature: undefined __stdcall FUN_0050c480(int param_1, int param_2, float * param_3)
 * body: 0050c480-0050c4da
 */

void FUN_0050c480(int param_1,int param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = ((float)*(double *)(*(int *)(param_2 + 0xc) + 200) * *(float *)(param_1 + 0x10) * 0.9) /
          SQRT(param_3[2] * param_3[2] + param_3[1] * param_3[1] + *param_3 * *param_3);
  *param_3 = *param_3 * fVar1;
  param_3[1] = param_3[1] * fVar1;
  param_3[2] = param_3[2] * fVar1;
  return;
}


