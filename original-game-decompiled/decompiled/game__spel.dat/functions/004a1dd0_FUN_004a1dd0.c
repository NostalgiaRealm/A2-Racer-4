
/* ==== FUN_004a1dd0 @ 004a1dd0 ==== 
 * signature: undefined __thiscall FUN_004a1dd0(void * this, float * param_1)
 * body: 004a1dd0-004a1e1a
 */

void __thiscall FUN_004a1dd0(void *this,float *param_1)

{
  float *pfVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  pfVar1 = (float *)FUN_004a1bf0(this,local_c);
  local_18 = *pfVar1;
  local_14 = pfVar1[1];
  local_10 = pfVar1[2];
  FUN_004a41b0(&local_18);
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}


