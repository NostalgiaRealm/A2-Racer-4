
/* ==== FUN_00501a40 @ 00501a40 ==== 
 * signature: undefined __thiscall FUN_00501a40(void * this, double * param_1, void * param_2)
 * body: 00501a40-00501eb5
 */

void __thiscall FUN_00501a40(void *this,double *param_1,void *param_2)

{
  float *this_00;
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  void *this_01;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  longlong lVar16;
  double local_90;
  int local_88;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double local_58 [2];
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double adStack_28 [4];
  
  iVar10 = *(int *)this;
  iVar11 = *(int *)(*(int *)(iVar10 + 0xc) + 0x24);
  fVar14 = (float10)FUN_004ff1f0();
  fVar15 = (float10)FUN_004ff1f0();
  fVar1 = *(float *)(iVar11 + 8);
  dVar3 = *(double *)(*(int *)(iVar10 + 0xc) + 200) * (double)*(float *)(iVar11 + 0x10);
  local_58[0] = (double)(fVar1 * fVar1);
  if (dVar3 * dVar3 < (double)fVar14) {
    (**(code **)(**(int **)(*(int *)(iVar10 + 0xc) + 0x20) + 4))();
  }
  if (local_58[0] < (double)fVar15) {
    (**(code **)**(undefined4 **)(*(int *)(iVar10 + 0xc) + 0x20))();
  }
  fVar14 = FUN_004f9440((float *)(*(int *)this + 0xa4));
  *(float *)(*(int *)this + 0x1b8) = (float)fVar14;
  local_90 = *param_1;
  *(float *)(*(int *)this + 0x70) = (float)param_1[1];
  pbVar9 = *(byte **)this;
  if (((*pbVar9 & 0xc0) == 0) && (*(int *)(*(int *)(pbVar9 + 0xc) + 0x144) != 5)) {
    this_00 = (float *)(pbVar9 + 0x94);
    fVar14 = (float10)FUN_004ff1f0();
    iVar10 = 1;
    if ((float10)0.027777777777777776 < fVar14 * (float10)local_90 * (float10)local_90) {
      lVar16 = __ftol();
      iVar10 = (int)lVar16 + 1;
      local_90 = local_90 / (double)iVar10;
    }
    FUN_004f89c0(&dStack_78,this_00,local_90);
    dVar3 = (double)((*(float *)(pbVar9 + 0x14) - *(float *)(pbVar9 + 0x18)) *
                    *(float *)(pbVar9 + 0x3c));
    dVar4 = (double)((*(float *)(pbVar9 + 0x1c) - *(float *)(pbVar9 + 0x14)) *
                    *(float *)(pbVar9 + 0x38));
    dVar5 = (double)((*(float *)(pbVar9 + 0x18) - *(float *)(pbVar9 + 0x1c)) *
                    *(float *)(pbVar9 + 0x34));
    FUN_005024b0(&dStack_48,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),SUB84(dVar4,0),
                 (int)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
    local_88 = 1;
    while( true ) {
      FUN_00502790(local_58,*(float *)(pbVar9 + 0x9c) * *(float *)(pbVar9 + 0x98) * (float)dStack_48
                   ,*(float *)(pbVar9 + 0x9c) * *this_00 * (float)dStack_40,
                   *this_00 * *(float *)(pbVar9 + 0x98) * (float)dStack_38);
      FUN_004fe070(this_00,this_00,(float *)local_58,local_90);
      if (iVar10 <= local_88) break;
      FUN_004f89c0(adStack_28,this_00,local_90);
      FUN_005026e0(&dStack_78,adStack_28,&dStack_78);
      local_88 = local_88 + 1;
    }
  }
  else {
    FUN_004f8a50(&dStack_78,(float *)(pbVar9 + 0x94),local_90);
  }
  iVar10 = *(int *)this;
  iVar11 = *(int *)(iVar10 + 0xc);
  dVar3 = *(double *)(iVar11 + 0x120) - *(double *)(iVar10 + 0x68);
  *(undefined4 *)(iVar10 + 0x68) = *(undefined4 *)(iVar11 + 0x120);
  *(undefined4 *)(iVar10 + 0x6c) = *(undefined4 *)(iVar11 + 0x124);
  iVar10 = *(int *)this;
  *(double *)(iVar10 + 0xc0) =
       (double)*(float *)(iVar10 + 0xdc) * dVar3 + *(double *)(iVar10 + 0xc0);
  *(double *)(iVar10 + 200) = (double)*(float *)(iVar10 + 0xe0) * dVar3 + *(double *)(iVar10 + 200);
  *(double *)(iVar10 + 0xb8) =
       (double)*(float *)(iVar10 + 0xd8) * dVar3 + *(double *)(iVar10 + 0xb8);
  iVar10 = *(int *)this;
  local_58[0] = (double)*(float *)(iVar10 + 0xac);
  *(undefined4 *)(iVar10 + 0xd8) = *(undefined4 *)(iVar10 + 0xa4);
  *(undefined4 *)(iVar10 + 0xdc) = *(undefined4 *)(iVar10 + 0xa8);
  *(float *)(iVar10 + 0xe0) = *(float *)(iVar10 + 0xac);
  puVar12 = (undefined4 *)(*(int *)this + 0x108);
  puVar13 = (undefined4 *)(*(int *)this + 0xe8);
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  iVar10 = *(int *)this;
  dVar3 = *(double *)(iVar10 + 0x118);
  dVar4 = *(double *)(iVar10 + 0x120);
  dVar5 = *(double *)(iVar10 + 0x108);
  dVar6 = *(double *)(iVar10 + 0x118);
  dVar7 = *(double *)(iVar10 + 0x120);
  dVar8 = *(double *)(iVar10 + 0x118);
  *(double *)(iVar10 + 0x118) =
       (dStack_70 * *(double *)(iVar10 + 0x108) +
       dStack_68 * *(double *)(iVar10 + 0x120) + dStack_60 * *(double *)(iVar10 + 0x118)) -
       dStack_78 * *(double *)(iVar10 + 0x110);
  *(double *)(iVar10 + 0x120) =
       ((dStack_60 * *(double *)(iVar10 + 0x120) - dStack_78 * *(double *)(iVar10 + 0x108)) -
       dStack_70 * *(double *)(iVar10 + 0x110)) - dStack_68 * dVar6;
  *(double *)(iVar10 + 0x108) =
       (dStack_60 * *(double *)(iVar10 + 0x108) +
       dStack_78 * dVar7 + dStack_68 * *(double *)(iVar10 + 0x110)) - dStack_70 * dVar8;
  *(double *)(iVar10 + 0x110) =
       (dStack_60 * *(double *)(iVar10 + 0x110) + dStack_70 * dVar4 + dStack_78 * dVar3) -
       dStack_68 * dVar5;
  FUN_004f8f80((double *)(*(int *)this + 0x108));
  FUN_00501ec0(this,&dStack_78);
  iVar10 = *(int *)this;
  fVar1 = *(float *)(iVar10 + 0x1c0);
  fVar2 = *(float *)(iVar10 + 0x1b8);
  iVar10 = *(ushort *)(iVar10 + 0x4e) - 1;
  if (iVar10 < 0) {
    return;
  }
  do {
    this_01 = (void *)(*(int *)(*(int *)(*(int *)this + 0x50) + iVar10 * 4) + 0x48);
    FUN_005027d0(this_01,*(undefined4 *)(*(int *)(param_1 + 2) + 0x120),
                 *(undefined4 *)(*(int *)(param_1 + 2) + 0x124),(float)*param_1,fVar1 + fVar2,
                 *(undefined4 *)(*(int *)this + 0x1b8));
    iVar11 = FUN_005027b0((int)this_01);
    if (iVar11 != 0) {
      FUN_005026a0(param_2,this_01);
    }
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  return;
}


