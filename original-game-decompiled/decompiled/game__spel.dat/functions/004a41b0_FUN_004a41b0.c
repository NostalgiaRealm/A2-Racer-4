
/* ==== FUN_004a41b0 @ 004a41b0 ==== 
 * signature: undefined __cdecl FUN_004a41b0(float * param_1)
 * body: 004a41b0-004a41d6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a41b0(float *param_1)

{
  float fVar1;
  
  fVar1 = 1.0 / _DAT_005af184;
  *param_1 = fVar1 * *param_1;
  param_1[1] = -(fVar1 * param_1[1]);
  param_1[2] = fVar1 * param_1[2];
  return;
}


