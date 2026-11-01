
/* ==== FUN_004f8d60 @ 004f8d60 ==== 
 * signature: undefined __thiscall FUN_004f8d60(void * this, double * param_1, double * param_2, double param_3)
 * body: 004f8d60-004f8f13
 */

void __thiscall FUN_004f8d60(void *this,double *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  pdVar3 = param_1;
  dVar1 = *param_1 * *param_2 +
          param_2[3] * param_1[3] + param_1[1] * param_2[1] + param_1[2] * param_2[2];
  if (dVar1 <= 0.0) {
    dVar1 = -dVar1;
    param_1 = (double *)0xbf800000;
  }
  else {
    param_1 = (double *)0x3f800000;
  }
  if (dVar1 < 0.9989999999525025) {
    fVar4 = (float10)FUN_00558550();
    fVar5 = (float10)1.0 / SQRT((float10)1.0 - (float10)dVar1 * (float10)dVar1);
    fVar6 = (float10)fsin(((float10)1.0 - (float10)param_3) * (float10)(double)fVar4);
    fVar6 = fVar6 * fVar5;
    fVar4 = (float10)fsin((float10)(double)fVar4 * (float10)param_3);
    fVar4 = fVar4 * (float10)(float)param_1 * (float10)(double)fVar5;
    *(double *)this = (double)(fVar4 * (float10)*param_2 + fVar6 * (float10)*pdVar3);
    *(double *)((int)this + 8) = (double)(fVar4 * (float10)param_2[1] + fVar6 * (float10)pdVar3[1]);
    *(double *)((int)this + 0x10) =
         (double)(fVar4 * (float10)param_2[2] + fVar6 * (float10)pdVar3[2]);
    *(double *)((int)this + 0x18) =
         (double)(fVar6 * (float10)pdVar3[3] + fVar4 * (float10)param_2[3]);
    return;
  }
  *(double *)this = ((double)(float)param_1 * *param_2 - *pdVar3) * param_3 + *pdVar3;
  *(double *)((int)this + 8) =
       ((double)(float)param_1 * param_2[1] - pdVar3[1]) * param_3 + pdVar3[1];
  *(double *)((int)this + 0x10) =
       ((double)(float)param_1 * param_2[2] - pdVar3[2]) * param_3 + pdVar3[2];
  dVar1 = ((double)(float)param_1 * param_2[3] - pdVar3[3]) * param_3 + pdVar3[3];
  *(double *)((int)this + 0x18) = dVar1;
  dVar1 = (dVar1 * dVar1 +
          *(double *)((int)this + 0x10) * *(double *)((int)this + 0x10) +
          *(double *)((int)this + 8) * *(double *)((int)this + 8) +
          *(double *)this * *(double *)this) * 0.5;
  dVar2 = 1.5 - dVar1;
  dVar2 = (0.5 - dVar2 * dVar2 * dVar1) + dVar2;
  dVar2 = (0.5 - dVar2 * dVar2 * dVar1) + dVar2;
  *(double *)this = dVar2 * *(double *)this;
  *(double *)((int)this + 8) = dVar2 * *(double *)((int)this + 8);
  *(double *)((int)this + 0x10) = dVar2 * *(double *)((int)this + 0x10);
  *(double *)((int)this + 0x18) = dVar2 * *(double *)((int)this + 0x18);
  return;
}


