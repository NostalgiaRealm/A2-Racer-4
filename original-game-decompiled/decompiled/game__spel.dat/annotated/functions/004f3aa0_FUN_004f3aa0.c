
/* ==== FUN_004f3aa0 @ 004f3aa0 ==== 
 * signature: float10 __thiscall FUN_004f3aa0(int param_1, float * param_2, float * param_3)
 * body: 004f3aa0-004f3b8c
 */

float10 __thiscall FUN_004f3aa0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float10 fVar2;
  float local_10;
  float local_c;
  float local_8;
  
  if (param_3 != (float *)0x0) {
    FUN_004f3a20(param_2,param_3,&local_10);
    fVar1 = *(float *)(param_1 + 0x40);
    local_8 = local_8 * local_8 * *(float *)(param_1 + 0x3c);
    local_10 = local_10 * local_10 * *(float *)(param_1 + 0x34);
    local_c = local_c * local_c * *(float *)(param_1 + 0x38);
    fVar2 = FUN_004f9440(&local_10);
    return (float10)1.0 / (fVar2 + (float10)fVar1);
  }
  fVar1 = *(float *)(param_1 + 0x40);
  local_8 = param_2[2] * param_2[2] * *(float *)(param_1 + 0x3c);
  local_10 = *param_2 * *param_2 * *(float *)(param_1 + 0x34);
  local_c = param_2[1] * param_2[1] * *(float *)(param_1 + 0x38);
  fVar2 = FUN_004f9440(&local_10);
  return (float10)1.0 / (fVar2 + (float10)fVar1);
}


