
/* ==== FUN_004f3390 @ 004f3390 ==== 
 * signature: undefined __thiscall FUN_004f3390(void * this, float * param_1, float * param_2, float * param_3, float * param_4)
 * body: 004f3390-004f34a0
 */

void __thiscall FUN_004f3390(void *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar1 = param_3[1] * param_1[2] - param_1[1] * param_3[2];
  fVar2 = *param_1 * param_3[2] - *param_3 * param_1[2];
  dVar8 = *(double *)((int)this + 0x168);
  fVar6 = *param_3 * param_1[1] - param_3[1] * *param_1;
  dVar3 = *(double *)((int)this + 0x148);
  dVar4 = *(double *)((int)this + 0x150);
  dVar5 = *(double *)((int)this + 0x158);
  dVar10 = *(double *)((int)this + 0x170);
  dVar9 = *(double *)((int)this + 0x178);
  *param_4 = fVar1 * (float)*(double *)((int)this + 0x128) +
             fVar2 * (float)*(double *)((int)this + 0x130) +
             (float)*(double *)((int)this + 0x138) * fVar6;
  fVar7 = fVar1 * (float)dVar3 + fVar2 * (float)dVar4 + fVar6 * (float)dVar5;
  param_4[1] = fVar7;
  fVar6 = fVar1 * (float)dVar8 + fVar2 * (float)dVar10 + fVar6 * (float)dVar9;
  param_4[2] = fVar6;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_4 = *param_2 + *param_4;
  param_4[1] = fVar7 + fVar1;
  param_4[2] = fVar6 + fVar2;
  return;
}


