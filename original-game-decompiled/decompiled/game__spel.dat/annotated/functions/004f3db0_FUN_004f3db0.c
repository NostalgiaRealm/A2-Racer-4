
/* ==== FUN_004f3db0 @ 004f3db0 ==== 
 * signature: undefined __thiscall FUN_004f3db0(int param_1, double param_2, float * param_3, double param_4)
 * body: 004f3db0-004f3f10
 */

void __thiscall FUN_004f3db0(int param_1,double param_2,float *param_3,double param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_20;
  float local_1c;
  
  fVar1 = (float10)param_2;
  fVar2 = (float10)*param_3 * fVar1;
  fVar3 = (float10)param_3[1] * fVar1;
  fVar4 = (float10)param_3[2] * fVar1;
  if ((float10)0.5 <= fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4) {
    fVar5 = ROUND((float10)1.4426950408889634 * -fVar2);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * -fVar2 - fVar5);
    fVar2 = (float10)fscale((float10)1 + fVar2,fVar5);
    fVar5 = (float10)1.4426950408889634 * -(float10)(float)fVar3;
    fVar3 = ROUND(fVar5);
    fVar5 = (float10)f2xm1(fVar5 - fVar3);
    fVar3 = (float10)fscale((float10)1 + fVar5,fVar3);
    local_1c = (float)fVar3;
    fVar4 = (float10)1.4426950408889634 * -(float10)(float)fVar4;
    fVar3 = ROUND(fVar4);
    fVar4 = (float10)f2xm1(fVar4 - fVar3);
    fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
  }
  else {
    fVar2 = (float10)1.0 - fVar2;
    local_1c = 1.0 - (float)fVar3;
    fVar3 = (float10)1.0 - (float10)(float)fVar4;
  }
  local_20 = (float)fVar2;
  fVar1 = fVar1 * (float10)param_4;
  if ((float10)0.25 <= fVar1) {
    fVar4 = ROUND((float10)1.4426950408889634 * -fVar1);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * -fVar1 - fVar4);
    fVar1 = (float10)fscale((float10)1 + fVar2,fVar4);
  }
  else {
    fVar1 = (float10)1.0 - fVar1;
  }
  *(float *)(param_1 + 0x94) = local_20 * *(float *)(param_1 + 0x94);
  *(float *)(param_1 + 0x98) = local_1c * *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0x9c) = (float)fVar3 * *(float *)(param_1 + 0x9c);
  *(float *)(param_1 + 0xa4) = (float)((float10)*(float *)(param_1 + 0xa4) * fVar1);
  *(float *)(param_1 + 0xa8) = (float)((float10)*(float *)(param_1 + 0xa8) * fVar1);
  *(float *)(param_1 + 0xac) = (float)((float10)*(float *)(param_1 + 0xac) * fVar1);
  return;
}


