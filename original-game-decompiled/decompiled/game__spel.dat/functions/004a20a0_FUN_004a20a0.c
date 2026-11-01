
/* ==== FUN_004a20a0 @ 004a20a0 ==== 
 * signature: undefined __thiscall FUN_004a20a0(void * this, float * param_1)
 * body: 004a20a0-004a20e6
 */

void __thiscall FUN_004a20a0(void *this,float *param_1)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *(int *)(*(int *)this + 8);
  local_4 = *(float *)(iVar1 + 0x18);
  local_8 = *(float *)(iVar1 + 0x14);
  local_c = *(float *)(iVar1 + 0x10);
  FUN_004a41b0(&local_c);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


