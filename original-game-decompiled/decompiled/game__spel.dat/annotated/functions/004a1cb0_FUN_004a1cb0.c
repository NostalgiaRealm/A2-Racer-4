
/* ==== FUN_004a1cb0 @ 004a1cb0 ==== 
 * signature: undefined __thiscall FUN_004a1cb0(void * this, float * param_1)
 * body: 004a1cb0-004a1d1a
 */

void __thiscall FUN_004a1cb0(void *this,float *param_1)

{
  float local_20 [4];
  float local_10;
  float local_c;
  float local_8;
  
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = 0.0;
  FUN_004f3f20(*(void **)(*(int *)((int)this + 8) + 0xa4),local_20,&local_10);
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  return;
}


