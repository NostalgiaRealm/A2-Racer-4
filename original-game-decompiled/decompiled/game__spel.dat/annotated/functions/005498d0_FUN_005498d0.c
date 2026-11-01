
/* ==== FUN_005498d0 @ 005498d0 ==== 
 * signature: undefined __thiscall FUN_005498d0(float * param_1, float * param_2, double param_3)
 * body: 005498d0-00549900
 */

void __thiscall FUN_005498d0(float *param_1,float *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = *param_2 * (float)param_3;
  param_1[1] = fVar1 * (float)param_3;
  param_1[2] = fVar2 * (float)param_3;
  return;
}


