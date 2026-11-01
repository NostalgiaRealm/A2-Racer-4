
/* ==== FUN_0052a0c0 @ 0052a0c0 ==== 
 * signature: float10 __cdecl FUN_0052a0c0(double param_1, double param_2, double param_3, undefined4 * param_4)
 * body: 0052a0c0-0052a169
 */

float10 __cdecl FUN_0052a0c0(double param_1,double param_2,double param_3,undefined4 *param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_1;
  if (((float10)param_3 <= fVar1) || (fVar1 <= -(float10)param_3)) {
    if (((float10)param_2 / fVar1 <= (float10)param_3) &&
       (-(float10)param_3 <= (float10)param_2 / fVar1)) {
      *param_4 = 1;
      return (float10)0.0;
    }
  }
  else {
    fVar2 = fVar1;
    if (fVar1 < (float10)0.0) {
      fVar2 = -fVar1;
    }
    fVar3 = (float10)param_2;
    if (fVar3 < (float10)0.0) {
      fVar3 = -fVar3;
    }
    if (fVar3 <= fVar2) {
      *param_4 = 1;
      return (float10)0.0;
    }
  }
  *param_4 = 0;
  return fVar1 / (float10)param_2;
}


