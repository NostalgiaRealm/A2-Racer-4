
/* ==== FUN_004b0020 @ 004b0020 ==== 
 * signature: undefined4 __cdecl FUN_004b0020(float param_1, float param_2, float * param_3, float * param_4)
 * body: 004b0020-004b00bb
 */

undefined4 __cdecl FUN_004b0020(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) {
      if (0.0 < param_2) {
        return 0;
      }
    }
    else {
      fVar1 = param_2 / param_1;
      if (fVar1 < *param_3) {
        return 0;
      }
      if (fVar1 < *param_4) {
        *param_4 = fVar1;
        return 1;
      }
    }
  }
  else {
    fVar1 = param_2 / param_1;
    if (*param_4 < fVar1) {
      return 0;
    }
    if (*param_3 < fVar1) {
      *param_3 = fVar1;
      return 1;
    }
  }
  return 1;
}


