
/* ==== FUN_0053b0c0 @ 0053b0c0 ==== 
 * signature: undefined __thiscall FUN_0053b0c0(void * this, float param_1)
 * body: 0053b0c0-0053b372
 */

void __thiscall FUN_0053b0c0(void *this,float param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *this_00;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  uVar15 = *(uint *)((int)this + 0x14);
  if ((uVar15 & 0x3c0000) == 0x100000) {
    FUN_005109b0((int)this);
    return;
  }
  iVar2 = (int)this + (uVar15 >> 8 & 3) * 0x1c + 0x18;
  iVar5 = *(int *)(iVar2 + 0x10);
  iVar3 = (int)this + ((uVar15 ^ 0x100) >> 8 & 3) * 0x1c + 0x18;
  iVar6 = *(int *)(iVar5 + 0xa4);
  iVar7 = *(int *)(iVar3 + 0x10);
  iVar8 = *(int *)(iVar7 + 0xa4);
  pdVar1 = (double *)(*(int *)(iVar5 + 0x18) + 0x120);
  dVar14 = *pdVar1;
  dVar13 = *pdVar1;
  dVar12 = *pdVar1;
  dVar11 = *pdVar1;
  dVar4 = *pdVar1;
  FUN_00500b70(&local_48,(double *)(iVar6 + 0xb8),(float *)(iVar6 + 0xd8),
               *(double *)(*(int *)(iVar5 + 0x18) + 0x120) - *(double *)(iVar6 + 0x68));
  FUN_00500b70(&local_28,(double *)(iVar8 + 0xb8),(float *)(iVar8 + 0xd8),
               dVar4 - *(double *)(iVar8 + 0x68));
  fVar9 = *(float *)(iVar6 + 0x1c0) + *(float *)(iVar6 + 0x1b8) + 1e-19;
  fVar10 = *(float *)(iVar8 + 0x1c0) + *(float *)(iVar8 + 0x1b8) + 1e-19;
  dVar4 = (double)(fVar10 + fVar9);
  if (((*(uint *)((int)this + 0x14) & 0x30000) == 0) &&
     (dVar11 = ((((double)*(float *)(iVar5 + 0x5c) +
                  (double)*(float *)(iVar5 + 0x54) * (dVar12 - *(double *)(iVar5 + 0x48)) +
                 (dVar11 - *(double *)(iVar7 + 0x48)) * (double)*(float *)(iVar7 + 0x54) +
                 (double)*(float *)(iVar7 + 0x5c)) - *(double *)((int)this + 0x60)) -
               ((double)*(float *)((int)this + 0x58) -
               ((double)*(float *)((int)this + 0x68) * (local_48 - local_28) +
               (double)*(float *)((int)this + 0x70) * (local_38 - local_18) +
               (double)*(float *)((int)this + 0x6c) * (local_40 - local_20)))) + (double)param_1,
     *(double *)(*(int *)(iVar5 + 0x18) + 0xc0) * dVar4 * 4.0 < dVar11)) {
    FUN_0051ed40();
    dVar4 = dVar11 / dVar4;
    *(double *)((int)this + 0x60) = dVar11 + *(double *)((int)this + 0x60);
    iVar5 = *(int *)(iVar2 + 0x10);
    FUN_0050e2c0((void *)(iVar5 + 0x68),*(int *)(iVar2 + 4));
    uVar15 = FUN_0050dfd0((void *)(iVar5 + 0x68),iVar2,
                          (float)(((float10)dVar13 - (float10)*(double *)(iVar5 + 0x48)) *
                                  (float10)*(float *)(iVar5 + 0x50) +
                                  (float10)*(float *)(iVar5 + 0x58) +
                                 (float10)dVar4 * (float10)fVar9));
    *(uint *)(iVar2 + 4) = uVar15;
    iVar2 = *(int *)(iVar3 + 0x10);
    FUN_0050e2c0((void *)(iVar2 + 0x68),*(int *)(iVar3 + 4));
    uVar15 = FUN_0050dfd0((void *)(iVar2 + 0x68),iVar3,
                          (float)(((float10)dVar14 - (float10)*(double *)(iVar2 + 0x48)) *
                                  (float10)*(float *)(iVar2 + 0x50) +
                                  (float10)*(float *)(iVar2 + 0x58) +
                                 (float10)dVar4 * (float10)fVar10));
    *(uint *)(iVar3 + 4) = uVar15;
    return;
  }
  this_00 = *(void **)(*(int *)(iVar5 + 0x18) + 0x10);
  FUN_0053b6a0((int)this);
  if ((*(uint *)((int)this + 0x14) & 0x3000) == 0x1000) {
    FUN_0053a4e0(this_00,this);
    return;
  }
  FUN_0053a410(this_00,this);
  return;
}


