
/* ==== FUN_00501ec0 @ 00501ec0 ==== 
 * signature: undefined __thiscall FUN_00501ec0(void * this, double * param_1)
 * body: 00501ec0-00502091
 */

void __thiscall FUN_00501ec0(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  int iStack_34;
  
  fVar10 = (float10)param_1[2] * (float10)param_1[2] +
           (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1;
  if (fVar10 <= (float10)1e-19) {
    *(undefined4 *)(*(int *)this + 0x1bc) = 0;
    iVar7 = *(int *)this;
    *(undefined4 *)(iVar7 + 0x1a8) = 0x3f800000;
    *(undefined4 *)(iVar7 + 0x1ac) = 0;
    *(undefined4 *)(iVar7 + 0x1b0) = 0;
  }
  else {
    iStack_34 = (int)((ulonglong)(double)fVar10 >> 0x20);
    fVar8 = fVar10 * (float10)0.5;
    fVar9 = (float10)(double)((ulonglong)((0x7ff00000 - iStack_34 >> 1) + 0x1ff00000) << 0x20);
    fVar9 = (((float10)0.5 - fVar8 * fVar9 * fVar9) + (float10)1.0) * fVar9;
    fVar9 = (((float10)0.5 - fVar9 * fVar9 * fVar8) + (float10)1.0) * fVar9;
    fVar9 = (((float10)0.5 - fVar9 * fVar9 * fVar8) + (float10)1.0) * fVar9;
    fVar9 = (((float10)0.5 - fVar9 * fVar9 * fVar8) + (float10)1.0) * fVar9;
    fVar9 = (((float10)0.5 - fVar9 * fVar9 * fVar8) + (float10)1.0) * fVar9;
    fVar10 = fVar9 * (float10)(double)fVar10;
    fVar8 = fVar10 * fVar10 * fVar10;
    fVar10 = (fVar8 * (float10)0.16666667 + fVar8 * fVar10 * fVar10 * (float10)0.40414 + fVar10) *
             (float10)*(float *)(*(int *)this + 0x70);
    *(float *)(*(int *)this + 0x1bc) = (float)(fVar10 + fVar10);
    iVar7 = *(int *)this;
    dVar1 = *param_1;
    dVar2 = param_1[2];
    dVar3 = param_1[1];
    dVar4 = *param_1;
    dVar5 = param_1[2];
    dVar6 = param_1[1];
    *(float *)(iVar7 + 0x1a8) =
         (float)(((float10)*(double *)(iVar7 + 0x128) * (float10)*param_1 +
                 (float10)*(double *)(iVar7 + 0x130) * (float10)param_1[1] +
                 (float10)*(double *)(iVar7 + 0x138) * (float10)param_1[2]) * fVar9);
    *(float *)(iVar7 + 0x1ac) =
         (float)((float10)(*(double *)(iVar7 + 0x150) * dVar3 +
                          *(double *)(iVar7 + 0x158) * dVar2 + *(double *)(iVar7 + 0x148) * dVar1) *
                fVar9);
    *(float *)(iVar7 + 0x1b0) =
         (float)((float10)(*(double *)(iVar7 + 0x170) * dVar6 +
                          *(double *)(iVar7 + 0x178) * dVar5 + *(double *)(iVar7 + 0x168) * dVar4) *
                fVar9);
  }
  iVar7 = *(int *)this;
  *(float *)(iVar7 + 0x1c0) = *(float *)(iVar7 + 0x1bc) * *(float *)(iVar7 + 8);
  return;
}


