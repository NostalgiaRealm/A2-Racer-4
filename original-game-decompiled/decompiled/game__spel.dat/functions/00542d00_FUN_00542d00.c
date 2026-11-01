
/* ==== FUN_00542d00 @ 00542d00 ==== 
 * signature: undefined __thiscall FUN_00542d00(void * this, double * param_1, int param_2, float * param_3, float * param_4, float param_5)
 * body: 00542d00-00543149
 */

void __thiscall
FUN_00542d00(void *this,double *param_1,int param_2,float *param_3,float *param_4,float param_5)

{
  float *pfVar1;
  float *this_00;
  double *this_01;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float10 fVar18;
  float10 fVar19;
  float local_28;
  float local_24;
  float local_20;
  float local_18 [2];
  float local_10;
  
  this_01 = (double *)(param_2 + 0x128);
  pfVar1 = (float *)(param_2 + 0x34);
  *(double **)((int)this + 0x6c) = this_01;
  local_28 = (float)((float10)*param_1 - (float10)*(double *)(param_2 + 0x188));
  local_24 = (float)((float10)param_1[1] - (float10)*(double *)(param_2 + 400));
  local_20 = (float)((float10)param_1[2] - (float10)*(double *)(param_2 + 0x198));
  pfVar12 = *(float **)this;
  fVar3 = local_24 * pfVar12[2] - local_20 * pfVar12[1];
  fVar4 = local_20 * *pfVar12 - local_28 * pfVar12[2];
  dVar17 = *(double *)(param_2 + 0x138);
  fVar6 = local_28 * pfVar12[1] - local_24 * *pfVar12;
  dVar9 = *(double *)(param_2 + 0x130);
  dVar10 = *(double *)(param_2 + 0x150);
  dVar11 = *(double *)(param_2 + 0x170);
  dVar16 = *(double *)(param_2 + 0x158);
  dVar15 = *(double *)(param_2 + 0x178);
  *param_3 = fVar3 * (float)*this_01 +
             fVar4 * (float)*(double *)(param_2 + 0x148) +
             fVar6 * (float)*(double *)(param_2 + 0x168);
  param_3[3] = 1.0;
  fVar5 = fVar3 * (float)dVar9 + fVar4 * (float)dVar10 + fVar6 * (float)dVar11;
  param_3[1] = fVar5;
  fVar4 = fVar3 * (float)dVar17 + fVar4 * (float)dVar16 + fVar6 * (float)dVar15;
  param_3[2] = fVar4;
  fVar5 = fVar5 * *(float *)(param_2 + 0x38);
  fVar4 = fVar4 * *(float *)(param_2 + 0x3c);
  fVar3 = *(float *)(param_2 + 0x40);
  *param_4 = *param_3 * *pfVar1;
  pfVar12 = (float *)(param_2 + 0x94);
  param_4[1] = fVar5;
  pfVar2 = (float *)(param_2 + 0xa4);
  param_4[2] = fVar4;
  param_4[3] = fVar3;
  *(double *)((int)this + 0xd8) =
       (double)(*param_3 * *param_4 + fVar4 * param_3[2] + fVar3 * param_3[3] + fVar5 * param_3[1] +
               (float)*(double *)((int)this + 0xd8));
  pfVar13 = *(float **)this;
  pfVar14 = *(float **)((int)this + 4);
  *(float *)((int)this + 0x138) =
       (*pfVar12 * *param_3 +
        *(float *)(param_2 + 0x98) * param_3[1] + *(float *)(param_2 + 0x9c) * param_3[2] +
       *pfVar13 * *pfVar2 +
       pfVar13[1] * *(float *)(param_2 + 0xa8) + pfVar13[2] * *(float *)(param_2 + 0xac)) * param_5
       + *(float *)((int)this + 0x138);
  if (pfVar14 != (float *)0x0) {
    fVar3 = local_24 * pfVar14[2] - local_20 * pfVar14[1];
    fVar4 = local_20 * *pfVar14 - local_28 * pfVar14[2];
    pfVar13 = param_3 + 4;
    local_10 = local_28 * pfVar14[1] - local_24 * *pfVar14;
    dVar9 = *(double *)(param_2 + 0x130);
    dVar10 = *(double *)(param_2 + 0x150);
    dVar11 = *(double *)(param_2 + 0x170);
    dVar15 = *(double *)(param_2 + 0x138);
    dVar16 = *(double *)(param_2 + 0x158);
    dVar17 = *(double *)(param_2 + 0x178);
    *pfVar13 = fVar3 * (float)*this_01 +
               fVar4 * (float)*(double *)(param_2 + 0x148) +
               local_10 * (float)*(double *)(param_2 + 0x168);
    param_3[5] = fVar3 * (float)dVar9 + fVar4 * (float)dVar10 + local_10 * (float)dVar11;
    param_3[6] = fVar3 * (float)dVar15 + fVar4 * (float)dVar16 + local_10 * (float)dVar17;
    param_3[7] = 1.0;
    fVar3 = param_3[5];
    fVar4 = *(float *)(param_2 + 0x38);
    fVar5 = param_3[6];
    fVar6 = *(float *)(param_2 + 0x3c);
    fVar7 = param_3[7];
    fVar8 = *(float *)(param_2 + 0x40);
    param_4[4] = *pfVar13 * *pfVar1;
    param_4[5] = fVar3 * fVar4;
    param_4[6] = fVar5 * fVar6;
    param_4[7] = fVar7 * fVar8;
    *(double *)((int)this + 0x100) =
         (double)(*pfVar13 * param_4[4] +
                  param_4[5] * param_3[5] + param_4[6] * param_3[6] + param_4[7] * param_3[7] +
                 (float)*(double *)((int)this + 0x100));
    *(double *)((int)this + 0xe0) =
         (double)(param_4[4] * *param_3 + param_4[5] * param_3[1] + param_4[6] * param_3[2] +
                 (float)*(double *)((int)this + 0xe0));
    fVar18 = FUN_005050f0(pfVar2,*(float **)((int)this + 4));
    *(float *)((int)this + 0x13c) =
         (float)((float10)param_5 *
                 ((float10)*pfVar13 * (float10)*pfVar12 +
                  (float10)param_3[5] * (float10)*(float *)(param_2 + 0x98) +
                  (float10)param_3[6] * (float10)*(float *)(param_2 + 0x9c) + fVar18) +
                (float10)*(float *)((int)this + 0x13c));
    if (*(float **)((int)this + 8) != (float *)0x0) {
      FUN_004ff210(local_18,&local_28,*(float **)((int)this + 8));
      FUN_00543910(this_01,local_18,param_3 + 8);
      pfVar14 = param_3 + 8;
      this_00 = param_4 + 8;
      param_3[0xb] = 1.0;
      FUN_005439a0(this_00,pfVar14,pfVar1);
      dVar9 = *(double *)((int)this + 0x128);
      fVar18 = FUN_00543970(this_00,pfVar14);
      *(double *)((int)this + 0x128) = (double)(fVar18 + (float10)dVar9);
      dVar9 = *(double *)((int)this + 0xe8);
      fVar18 = FUN_005050f0(this_00,param_3);
      *(double *)((int)this + 0xe8) = (double)(fVar18 + (float10)dVar9);
      dVar9 = *(double *)((int)this + 0x108);
      fVar18 = FUN_005050f0(this_00,pfVar13);
      *(double *)((int)this + 0x108) = (double)(fVar18 + (float10)dVar9);
      fVar18 = FUN_005050f0(pfVar2,*(float **)((int)this + 8));
      fVar19 = FUN_005050f0(pfVar12,pfVar14);
      *(float *)((int)this + 0x140) =
           (float)((float10)param_5 * (fVar19 + (float10)(double)fVar18) +
                  (float10)*(float *)((int)this + 0x140));
    }
  }
  return;
}


