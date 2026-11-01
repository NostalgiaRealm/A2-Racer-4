
/* ==== FUN_004fadc0 @ 004fadc0 ==== 
 * signature: undefined __thiscall FUN_004fadc0(void * this, float * param_1, double * param_2)
 * body: 004fadc0-004fae5a
 */

void __thiscall FUN_004fadc0(void *this,float *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  fVar1 = *param_1;
  dVar4 = *(double *)this;
  dVar5 = *(double *)((int)this + 0x40);
  fVar2 = param_1[1];
  dVar6 = *(double *)((int)this + 8);
  dVar7 = *(double *)((int)this + 0x48);
  fVar3 = param_1[2];
  dVar8 = *(double *)((int)this + 0x10);
  dVar9 = *(double *)((int)this + 0x50);
  dVar10 = *(double *)((int)this + 0x70);
  dVar11 = *(double *)((int)this + 0x60);
  param_2[1] = (double)((float)*(double *)((int)this + 0x30) * fVar3 +
                        (float)*(double *)((int)this + 0x28) * fVar2 +
                        (float)*(double *)((int)this + 0x20) * fVar1 +
                       (float)*(double *)((int)this + 0x68));
  *param_2 = (double)((float)dVar8 * fVar3 + (float)dVar6 * fVar2 + (float)dVar4 * fVar1) + dVar11;
  param_2[2] = (double)((float)dVar9 * fVar3 + (float)dVar7 * fVar2 + fVar1 * (float)dVar5 +
                       (float)dVar10);
  return;
}


