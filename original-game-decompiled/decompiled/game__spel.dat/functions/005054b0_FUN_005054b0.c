
/* ==== FUN_005054b0 @ 005054b0 ==== 
 * signature: undefined __thiscall FUN_005054b0(void * this, double * param_1, double * param_2, float * param_3)
 * body: 005054b0-005055b0
 */

void __thiscall FUN_005054b0(void *this,double *param_1,double *param_2,float *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float local_38;
  float local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_28 = *param_2 - *param_1;
  local_20 = param_2[1] - param_1[1];
  local_18 = param_2[2] - param_1[2];
  fVar4 = FUN_004f9580(&local_28);
  *(float *)((int)this + 0x58) = (float)fVar4;
  fVar2 = (float)local_28;
  *param_3 = fVar2;
  fVar3 = (float)local_20;
  param_3[1] = fVar3;
  param_3[2] = (float)local_18;
  if (0.9 <= fVar2 * fVar2) {
    local_38 = 0.0;
    local_30 = 1.0;
  }
  else {
    local_38 = 1.0;
    local_30 = 0.0;
  }
  param_3[0x20] = fVar3 * local_30;
  param_3[0x21] = (float)local_18 * local_38 - fVar2 * local_30;
  param_3[0x22] = 0.0 - fVar3 * local_38;
  FUN_004f9780(param_3 + 0x20);
  dVar1 = param_1[1];
  fVar2 = *(float *)(param_1 + 2);
  fVar3 = *(float *)((int)param_1 + 0x14);
  *(double *)(param_3 + 8) = *param_1;
  *(double *)(param_3 + 10) = dVar1;
  param_3[0xc] = fVar2;
  param_3[0xd] = fVar3;
  return;
}


