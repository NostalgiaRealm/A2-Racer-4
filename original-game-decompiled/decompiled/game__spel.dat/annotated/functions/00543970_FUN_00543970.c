
/* ==== FUN_00543970 @ 00543970 ==== 
 * signature: float10 __thiscall FUN_00543970(float * param_1, float * param_2)
 * body: 00543970-00543992
 */

float10 __thiscall FUN_00543970(float *param_1,float *param_2)

{
  return (float10)*param_2 * (float10)*param_1 +
         (float10)param_2[1] * (float10)param_1[1] +
         (float10)param_2[2] * (float10)param_1[2] + (float10)param_2[3] * (float10)param_1[3];
}


