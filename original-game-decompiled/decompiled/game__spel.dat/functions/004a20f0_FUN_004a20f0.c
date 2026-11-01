
/* ==== FUN_004a20f0 @ 004a20f0 ==== 
 * signature: undefined __thiscall FUN_004a20f0(void * this, float * param_1)
 * body: 004a20f0-004a2135
 */

void __thiscall FUN_004a20f0(void *this,float *param_1)

{
  float *pfVar1;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = *(float **)(*(int *)this + 8);
  local_4 = pfVar1[2];
  local_8 = pfVar1[1];
  local_c = *pfVar1;
  FUN_004a41b0(&local_c);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


