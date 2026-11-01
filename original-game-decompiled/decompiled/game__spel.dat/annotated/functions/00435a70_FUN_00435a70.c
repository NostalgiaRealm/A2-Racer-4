
/* ==== FUN_00435a70 @ 00435a70 ==== 
 * signature: float10 __cdecl FUN_00435a70(float param_1)
 * body: 00435a70-00435aa3
 */

float10 __cdecl FUN_00435a70(float param_1)

{
  float10 fVar1;
  
  fVar1 = -(float10)5.0;
  if (fVar1 <= (float10)param_1) {
    if (5.0 < param_1) {
      return (float10)5.0;
    }
    fVar1 = (float10)param_1;
  }
  return fVar1;
}


