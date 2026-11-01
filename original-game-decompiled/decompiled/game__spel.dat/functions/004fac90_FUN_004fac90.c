
/* ==== FUN_004fac90 @ 004fac90 ==== 
 * signature: undefined __thiscall FUN_004fac90(void * this, float * param_1, float * param_2)
 * body: 004fac90-004fad1f
 */

void __thiscall FUN_004fac90(void *this,float *param_1,float *param_2)

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
  dVar4 = *(double *)((int)this + 0x20);
  dVar5 = *(double *)((int)this + 0x40);
  fVar2 = param_1[1];
  dVar6 = *(double *)((int)this + 0x28);
  dVar7 = *(double *)((int)this + 0x48);
  fVar3 = param_1[2];
  dVar8 = *(double *)((int)this + 0x30);
  dVar9 = *(double *)((int)this + 0x68);
  dVar10 = *(double *)((int)this + 0x50);
  dVar11 = *(double *)((int)this + 0x70);
  *param_2 = (float)*(double *)((int)this + 0x10) * fVar3 +
             (float)*(double *)((int)this + 8) * fVar2 + (float)*(double *)this * fVar1 +
             (float)*(double *)((int)this + 0x60);
  param_2[1] = (float)dVar8 * fVar3 + (float)dVar6 * fVar2 + (float)dVar4 * fVar1 + (float)dVar9;
  param_2[2] = (float)dVar10 * fVar3 + (float)dVar7 * fVar2 + fVar1 * (float)dVar5 + (float)dVar11;
  return;
}


