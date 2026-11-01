
/* ==== FUN_00414ec0 @ 00414ec0 ==== 
 * signature: float10 __cdecl FUN_00414ec0(float * param_1)
 * body: 00414ec0-00414f2a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00414ec0(float *param_1)

{
  float10 fVar1;
  
  if (*param_1 == 0.0) {
    *param_1 = 0.0001;
  }
  fVar1 = (float10)fpatan(-((float10)param_1[2] / (float10)*param_1),(float10)1);
  fVar1 = (fVar1 + (float10)1.5707964) * (float10)0.31830987 * (float10)(_DAT_005b23b8 * 0.5);
  if (fVar1 < (float10)0.0) {
    fVar1 = fVar1 + (float10)_DAT_005b23b8;
  }
  if (*param_1 < 0.0) {
    fVar1 = fVar1 + (float10)(_DAT_005b23b8 * 0.5);
  }
  return fVar1;
}


