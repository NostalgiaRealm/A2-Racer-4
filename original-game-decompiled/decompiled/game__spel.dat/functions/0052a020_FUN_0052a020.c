
/* ==== FUN_0052a020 @ 0052a020 ==== 
 * signature: float10 __cdecl FUN_0052a020(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0052a020-0052a0b4
 */

float10 __cdecl
FUN_0052a020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  float10 fVar1;
  undefined8 local_10;
  
  fVar1 = SQRT((float10)param_1) * (float10)(double)CONCAT44(param_3,param_2);
  local_10 = (double)fVar1;
  if ((float10)(double)CONCAT44(param_5,param_4) < fVar1) {
    local_10 = (double)CONCAT44(param_5,param_4);
  }
  fVar1 = ((float10)param_1 * (float10)local_10 * (float10)1.01 +
          (float10)(double)CONCAT44(param_3,param_2)) * (float10)2.220446049250313e-16;
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_distround___2_2g_maxabs__2_2g_005c22c8);
    fVar1 = (float10)(double)fVar1;
  }
  return fVar1;
}


