
/* ==== FUN_004f42f0 @ 004f42f0 ==== 
 * signature: undefined __thiscall FUN_004f42f0(void * this, float * param_1, float * param_2, float * param_3, float * param_4, float * param_5)
 * body: 004f42f0-004f4380
 */

void __thiscall
FUN_004f42f0(void *this,float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_2;
  fVar2 = param_1[2];
  fVar3 = param_2[2];
  fVar4 = *param_1;
  fVar5 = *param_1;
  fVar6 = param_2[1];
  fVar7 = *param_2;
  fVar8 = param_1[1];
  fVar9 = *(float *)((int)this + 0x38);
  fVar10 = *(float *)((int)this + 0x3c);
  *param_5 = (param_2[2] * param_1[1] - param_1[2] * param_2[1]) * *(float *)((int)this + 0x34);
  param_5[1] = (fVar1 * fVar2 - fVar3 * fVar4) * fVar9;
  param_5[2] = (fVar5 * fVar6 - fVar7 * fVar8) * fVar10;
  fVar1 = *(float *)((int)this + 0x40);
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  *param_4 = *param_3 * fVar1;
  param_4[1] = fVar2 * fVar1;
  param_4[2] = fVar3 * fVar1;
  return;
}


