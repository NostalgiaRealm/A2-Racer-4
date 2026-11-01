
/* ==== FUN_004f36b0 @ 004f36b0 ==== 
 * signature: float10 __thiscall FUN_004f36b0(int param_1, float * param_2)
 * body: 004f36b0-004f374a
 */

float10 __thiscall FUN_004f36b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = param_2[2] * param_2[2];
  fVar2 = param_2[1] * param_2[1];
  fVar3 = *param_2 * *param_2;
  fVar4 = (fVar3 + fVar2) * *(float *)(param_1 + 0x3c);
  fVar3 = (fVar3 + fVar1) * *(float *)(param_1 + 0x38);
  fVar5 = (float10)((fVar2 + fVar1) * *(float *)(param_1 + 0x34));
  if (fVar5 < (float10)fVar3) {
    fVar5 = (float10)fVar3;
  }
  if (fVar5 < (float10)fVar4) {
    fVar5 = (float10)fVar4;
  }
  return (float10)1.0 / (fVar5 + (float10)*(float *)(param_1 + 0x40));
}


