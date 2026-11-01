
/* ==== FUN_004a19c0 @ 004a19c0 ==== 
 * signature: undefined __thiscall FUN_004a19c0(void * this, float * param_1, float * param_2)
 * body: 004a19c0-004a1a81
 */

void __thiscall FUN_004a19c0(void *this,float *param_1,float *param_2)

{
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a0 [4];
  double local_80 [16];
  
  FUN_004f2b10(*(void **)((int)this + 8),local_80);
  local_e8 = *param_1;
  local_e4 = param_1[1];
  local_dc = *param_2;
  local_e0 = param_1[2];
  local_d8 = param_2[1];
  local_d4 = param_2[2];
  FUN_004a4180(&local_e8);
  FUN_004a4180(&local_dc);
  local_c0 = (double)local_e8;
  local_b8 = (double)local_e4;
  local_b0 = (double)local_e0;
  local_d0 = local_dc;
  local_cc = local_d8;
  local_c8 = local_d4;
  FUN_004fad20(local_80,&local_c0,local_a0);
  FUN_004f3260(*(void **)((int)this + 8),local_a0,&local_d0);
  return;
}


