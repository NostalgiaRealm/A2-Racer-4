
/* ==== FUN_004fe970 @ 004fe970 ==== 
 * signature: undefined __thiscall FUN_004fe970(void * this, float * param_1, float * param_2)
 * body: 004fe970-004fe9d2
 */

void __thiscall FUN_004fe970(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar7 = *(double *)((int)this + 0x38);
  fVar1 = *param_1;
  dVar8 = *(double *)((int)this + 0x78);
  fVar2 = param_1[2];
  dVar9 = *(double *)((int)this + 0x58);
  fVar3 = param_1[1];
  dVar10 = *(double *)((int)this + 0x40);
  fVar4 = *param_1;
  dVar11 = *(double *)((int)this + 0x80);
  fVar5 = param_1[2];
  dVar12 = *(double *)((int)this + 0x60);
  fVar6 = param_1[1];
  *param_2 = (float)*(double *)((int)this + 0x30) * *param_1 +
             (float)*(double *)((int)this + 0x50) * param_1[1] +
             (float)*(double *)((int)this + 0x70) * param_1[2];
  param_2[1] = (float)dVar9 * fVar3 + (float)dVar8 * fVar2 + (float)dVar7 * fVar1;
  param_2[2] = (float)(dVar12 * (double)fVar6 + dVar11 * (double)fVar5 + dVar10 * (double)fVar4);
  return;
}


