
/* ==== FUN_0053f150 @ 0053f150 ==== 
 * signature: float10 __cdecl FUN_0053f150(double param_1, double param_2, double param_3, double param_4, double param_5)
 * body: 0053f150-0053f19a
 */

float10 __cdecl
FUN_0053f150(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_1;
  fVar2 = fVar1 / ((float10)param_4 + (float10)param_5);
  fVar3 = fVar1 - fVar2 * (float10)param_5;
  fVar2 = fVar2 * (float10)param_4;
  return ((fVar1 * fVar1 * (float10)param_3 - fVar2 * fVar2 * (float10)param_2) -
         (float10)(double)(fVar3 * fVar3 * (float10)param_3)) * (float10)0.5;
}


