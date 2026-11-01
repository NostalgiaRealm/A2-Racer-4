
/* ==== FUN_004a2050 @ 004a2050 ==== 
 * signature: undefined __thiscall FUN_004a2050(void * this, float * param_1)
 * body: 004a2050-004a2096
 */

void __thiscall FUN_004a2050(void *this,float *param_1)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(*(int *)this + 8);
  local_4 = (float)*(double *)(iVar1 + 0x30);
  local_8 = (float)*(double *)(iVar1 + 0x28);
  local_c = (float)*(double *)(iVar1 + 0x20);
  FUN_004a41b0(&local_c);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


