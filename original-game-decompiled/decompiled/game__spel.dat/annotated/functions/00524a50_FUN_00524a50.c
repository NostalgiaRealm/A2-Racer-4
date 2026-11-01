
/* ==== FUN_00524a50 @ 00524a50 ==== 
 * signature: float10 __cdecl FUN_00524a50(int param_1, double param_2, double param_3, double * param_4)
 * body: 00524a50-00524a76
 */

float10 __cdecl FUN_00524a50(int param_1,double param_2,double param_3,double *param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)param_2 / (float10)param_1;
  *param_4 = (double)fVar1;
  return SQRT((float10)param_3 / (float10)param_1 - fVar1 * fVar1);
}


