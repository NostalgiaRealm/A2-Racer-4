
/* ==== FUN_00543150 @ 00543150 ==== 
 * signature: undefined __thiscall FUN_00543150(void * this, int param_1, float * param_2, float * param_3, float param_4)
 * body: 00543150-0054342e
 */

void __thiscall FUN_00543150(void *this,int param_1,float *param_2,float *param_3,float param_4)

{
  float *pfVar1;
  double *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float *pfVar14;
  float *pfVar15;
  float10 fVar16;
  
  this_00 = (double *)(param_1 + 0x128);
  pfVar14 = *(float **)this;
  *(double **)((int)this + 0x6c) = this_00;
  fVar5 = (float)*(double *)(param_1 + 0x150) * pfVar14[1] +
          (float)*(double *)(param_1 + 0x170) * pfVar14[2] +
          *pfVar14 * (float)*(double *)(param_1 + 0x130);
  fVar6 = (float)*(double *)(param_1 + 0x158) * pfVar14[1] +
          (float)*(double *)(param_1 + 0x178) * pfVar14[2] +
          *pfVar14 * (float)*(double *)(param_1 + 0x138);
  fVar2 = pfVar14[1];
  dVar8 = *(double *)(param_1 + 0x148);
  dVar9 = *(double *)(param_1 + 0x168);
  fVar3 = pfVar14[2];
  dVar10 = *this_00;
  fVar4 = *pfVar14;
  param_2[3] = 0.0;
  pfVar14 = (float *)(param_1 + 0x94);
  *param_2 = (float)dVar10 * fVar4 + (float)dVar9 * fVar3 + fVar2 * (float)dVar8;
  param_2[1] = fVar5;
  param_2[2] = fVar6;
  fVar5 = fVar5 * *(float *)(param_1 + 0x38);
  fVar6 = fVar6 * *(float *)(param_1 + 0x3c);
  *param_3 = *(float *)(param_1 + 0x34) * *param_2;
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  param_3[3] = 0.0;
  *(double *)((int)this + 0xd8) =
       (double)(*param_2 * *param_3 + fVar5 * param_2[1] + fVar6 * param_2[2] +
               (float)*(double *)((int)this + 0xd8));
  pfVar15 = *(float **)((int)this + 4);
  *(float *)((int)this + 0x138) =
       (*param_2 * *pfVar14 +
       *(float *)(param_1 + 0x9c) * param_2[2] + *(float *)(param_1 + 0x98) * param_2[1]) * param_4
       + *(float *)((int)this + 0x138);
  if (pfVar15 != (float *)0x0) {
    fVar2 = pfVar15[2];
    dVar8 = *(double *)(param_1 + 0x170);
    dVar9 = *(double *)(param_1 + 0x150);
    fVar3 = pfVar15[1];
    dVar10 = *(double *)(param_1 + 0x130);
    fVar4 = *pfVar15;
    fVar5 = pfVar15[2];
    dVar11 = *(double *)(param_1 + 0x178);
    dVar12 = *(double *)(param_1 + 0x158);
    fVar6 = pfVar15[1];
    dVar13 = *(double *)(param_1 + 0x138);
    fVar7 = *pfVar15;
    param_2[4] = (float)*this_00 * *pfVar15 +
                 (float)*(double *)(param_1 + 0x148) * pfVar15[1] +
                 (float)*(double *)(param_1 + 0x168) * pfVar15[2];
    param_2[5] = (float)dVar10 * fVar4 + (float)dVar9 * fVar3 + fVar2 * (float)dVar8;
    param_2[6] = (float)dVar13 * fVar7 + (float)dVar12 * fVar6 + fVar5 * (float)dVar11;
    param_2[7] = 0.0;
    fVar2 = param_2[5];
    fVar3 = *(float *)(param_1 + 0x38);
    fVar4 = param_2[6];
    fVar5 = *(float *)(param_1 + 0x3c);
    fVar6 = param_2[7];
    fVar7 = *(float *)(param_1 + 0x40);
    param_3[4] = *(float *)(param_1 + 0x34) * param_2[4];
    param_3[5] = fVar2 * fVar3;
    param_3[6] = fVar4 * fVar5;
    param_3[7] = fVar6 * fVar7;
    *(double *)((int)this + 0x100) =
         (double)(param_2[4] * param_3[4] + param_3[5] * param_2[5] + param_3[6] * param_2[6] +
                 (float)*(double *)((int)this + 0x100));
    *(double *)((int)this + 0xe0) =
         (double)(param_3[4] * *param_2 + param_3[6] * param_2[2] + param_3[5] * param_2[1] +
                 (float)*(double *)((int)this + 0xe0));
    *(float *)((int)this + 0x13c) =
         (param_2[4] * *pfVar14 +
         param_2[5] * *(float *)(param_1 + 0x98) + param_2[6] * *(float *)(param_1 + 0x9c)) *
         param_4 + *(float *)((int)this + 0x13c);
  }
  if (*(float **)((int)this + 8) != (float *)0x0) {
    FUN_004fafa0(this_00,*(float **)((int)this + 8),param_2 + 8);
    pfVar15 = param_3 + 8;
    pfVar1 = param_2 + 8;
    param_2[0xb] = 0.0;
    fVar2 = param_2[9];
    fVar3 = *(float *)(param_1 + 0x38);
    fVar4 = param_2[10];
    fVar5 = *(float *)(param_1 + 0x3c);
    fVar6 = param_2[0xb];
    fVar7 = *(float *)(param_1 + 0x40);
    *pfVar15 = *(float *)(param_1 + 0x34) * *pfVar1;
    param_3[9] = fVar2 * fVar3;
    param_3[10] = fVar4 * fVar5;
    param_3[0xb] = fVar6 * fVar7;
    *(double *)((int)this + 0x128) =
         (double)(*pfVar15 * *pfVar1 + param_3[9] * param_2[9] + param_3[10] * param_2[10] +
                 (float)*(double *)((int)this + 0x128));
    *(double *)((int)this + 0xe8) =
         (double)(*param_2 * *pfVar15 + param_3[10] * param_2[2] + param_3[9] * param_2[1] +
                 (float)*(double *)((int)this + 0xe8));
    dVar8 = *(double *)((int)this + 0x108);
    fVar16 = FUN_005050f0(pfVar15,param_2 + 4);
    *(double *)((int)this + 0x108) = (double)(fVar16 + (float10)dVar8);
    fVar16 = FUN_005050f0(pfVar14,pfVar1);
    *(float *)((int)this + 0x140) =
         (float)((float10)param_4 * fVar16 + (float10)*(float *)((int)this + 0x140));
  }
  return;
}


