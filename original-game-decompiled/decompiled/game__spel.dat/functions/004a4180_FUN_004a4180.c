
/* ==== FUN_004a4180 @ 004a4180 ==== 
 * signature: undefined __cdecl FUN_004a4180(float * param_1)
 * body: 004a4180-004a41a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004a4180(float *param_1)

{
  float fVar1;
  
  fVar1 = _DAT_005af184;
  *param_1 = _DAT_005af184 * *param_1;
  param_1[1] = -(fVar1 * param_1[1]);
  param_1[2] = fVar1 * param_1[2];
  return;
}


