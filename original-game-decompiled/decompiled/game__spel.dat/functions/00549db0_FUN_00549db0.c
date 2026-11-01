
/* ==== FUN_00549db0 @ 00549db0 ==== 
 * signature: float10 __cdecl FUN_00549db0(float * param_1, int param_2, float * param_3, float * param_4)
 * body: 00549db0-00549df2
 */

float10 __cdecl FUN_00549db0(float *param_1,int param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  
  pfVar1 = param_1 + (param_2 + 0xc) * 4;
  return (float10)*param_1 * (float10)*param_4 +
         (float10)param_1[1] * (float10)param_4[1] + (float10)param_1[2] * (float10)param_4[2] +
         (float10)*pfVar1 * (float10)*param_3 +
         (float10)pfVar1[1] * (float10)param_3[1] + (float10)pfVar1[2] * (float10)param_3[2];
}


