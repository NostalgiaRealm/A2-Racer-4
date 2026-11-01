
/* ==== FUN_004f3a20 @ 004f3a20 ==== 
 * signature: undefined __cdecl FUN_004f3a20(float * param_1, float * param_2, float * param_3)
 * body: 004f3a20-004f3a90
 */

void __cdecl FUN_004f3a20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = FUN_004f9440(param_2);
  if ((float10)1e-19 < fVar2) {
    fVar1 = (float)((float10)1.0 / fVar2);
    FUN_004f9a10(param_3,param_2,param_1);
    *param_3 = *param_3 * fVar1;
    param_3[1] = param_3[1] * fVar1;
    param_3[2] = param_3[2] * fVar1;
    return;
  }
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  return;
}


