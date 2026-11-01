
/* ==== FUN_00547110 @ 00547110 ==== 
 * signature: undefined4 __thiscall FUN_00547110(void * this, int * param_1, int * param_2, undefined4 * param_3, float * param_4, int param_5, int param_6)
 * body: 00547110-005479be
 */

undefined4 __thiscall
FUN_00547110(void *this,int *param_1,int *param_2,undefined4 *param_3,float *param_4,int param_5,
            int param_6)

{
  double *pdVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  double *pdVar14;
  float10 fVar15;
  float10 fVar16;
  int *local_224;
  uint *local_220;
  uint *local_21c;
  uint *local_218;
  uint *local_214;
  int iStack_20c;
  int *local_204;
  double local_200;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  uint local_198;
  int local_194;
  int local_190;
  int local_18c;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_168;
  double local_160;
  double local_158;
  int *local_148;
  int *local_144;
  double *local_140;
  int local_13c [2];
  double *local_134;
  double local_130;
  double local_128 [3];
  int *local_110;
  int *local_10c;
  double *local_108;
  int local_104;
  int local_100;
  double *local_fc;
  int *local_d8;
  int *local_d4;
  double *local_d0;
  int local_cc;
  int local_c8;
  double *local_c4;
  int *local_a0;
  int *local_9c;
  double *local_98;
  int local_94;
  int local_90;
  double *local_8c;
  double local_68 [4];
  double local_48 [4];
  double local_28 [4];
  
  iVar9 = *(int *)((int)this + 4) + -1;
  *(int *)((int)this + 4) = iVar9;
  if (iVar9 < 0) {
    iVar9 = FUN_0053bcb0(this,1,(uint)param_1,1,(uint)param_2);
    if (iVar9 != 0) {
      return 2;
    }
  }
  pfVar2 = (float *)*param_3;
  pdVar1 = (double *)(param_3 + 2);
  fVar7 = (*pfVar2 - (float)*pdVar1) * (float)*(double *)(param_3 + 0x26) +
          (pfVar2[2] - (float)*(double *)(param_3 + 6)) * (float)*(double *)(param_3 + 0x2a) +
          (pfVar2[1] - (float)*(double *)(param_3 + 4)) * (float)*(double *)(param_3 + 0x28);
  uVar10 = (uint)fVar7 >> 0x1f;
  dVar8 = *(double *)(param_3 + 0x26) * *(double *)(param_3 + 0x26) +
          *(double *)(param_3 + 0x2a) * *(double *)(param_3 + 0x2a) +
          *(double *)(param_3 + 0x28) * *(double *)(param_3 + 0x28);
  iStack_20c = (int)((ulonglong)dVar8 >> 0x20);
  dVar8 = dVar8 * 0.5;
  local_200 = (double)((ulonglong)((0x7ff00000 - iStack_20c >> 1) + 0x1ff00000) << 0x20);
  local_200 = ((0.5 - dVar8 * local_200 * local_200) + 1.0) * local_200;
  local_200 = ((0.5 - local_200 * local_200 * dVar8) + 1.0) * local_200;
  local_200 = ((0.5 - local_200 * local_200 * dVar8) + 1.0) * local_200;
  local_200 = ((0.5 - local_200 * local_200 * dVar8) + 1.0) * local_200;
  local_200 = ((0.5 - local_200 * local_200 * dVar8) + 1.0) * local_200;
  local_188 = *(double *)(param_3 + 0x26);
  local_180 = *(undefined8 *)(param_3 + 0x28);
  local_178 = *(undefined8 *)(param_3 + 0x2a);
  FUN_004fe9e0(*(void **)(param_6 + 8),&local_188,&local_168);
  FUN_004fe900(*(void **)(param_5 + 8),&local_168,local_28);
  *(float *)(*(int *)this + 0x54) = ABS(fVar7 * (float)local_200);
  iVar9 = *(int *)this;
  *(float *)(iVar9 + 0x54) = *(float *)(iVar9 + 0x54) - *(float *)(iVar9 + 0x50);
  iVar9 = *(int *)this;
  fVar7 = (((float)uVar10 - 0.5) + ((float)uVar10 - 0.5)) * (float)local_200;
  *(float *)(iVar9 + 0x68) = (float)local_168 * fVar7;
  *(float *)(iVar9 + 0x6c) = (float)local_160 * fVar7;
  *(float *)(iVar9 + 0x70) = (float)local_158 * fVar7;
  iVar9 = *(int *)(param_6 + 8);
  iVar3 = *(int *)(param_5 + 8);
  iVar4 = *(int *)this;
  *(float *)(iVar4 + 0x58) =
       (float)(((float10)*(double *)(iVar3 + 0xb0) - (float10)*(double *)(iVar9 + 0xb0)) *
               (float10)*(float *)(iVar4 + 0x68) +
              ((float10)*(double *)(iVar3 + 0xc0) - (float10)*(double *)(iVar9 + 0xc0)) *
              (float10)*(float *)(iVar4 + 0x70) +
              ((float10)*(double *)(iVar3 + 0xb8) - (float10)*(double *)(iVar9 + 0xb8)) *
              (float10)*(float *)(iVar4 + 0x6c));
  FUN_00509300((float *)*param_3,param_6,param_5,local_68);
  FUN_00509300((float *)param_3[1],param_6,param_5,local_48);
  local_13c[1] = param_5;
  local_13c[0] = param_6;
  local_110 = param_1;
  local_148 = param_1 + ((*param_1 << 1) >> 0x11);
  local_144 = (int *)param_3[0x23];
  local_140 = local_68;
  local_134 = local_28;
  local_100 = param_5;
  local_104 = param_6;
  local_c8 = param_6;
  local_fc = local_28;
  local_10c = local_144 + ((*local_144 << 1) >> 0x11);
  local_108 = local_48;
  local_cc = param_5;
  local_a0 = param_2;
  local_d8 = param_2 + ((*param_2 << 1) >> 0x11);
  local_d4 = (int *)param_3[0x22];
  local_d0 = pdVar1;
  local_c4 = &local_188;
  local_90 = param_6;
  local_94 = param_5;
  local_9c = local_d4 + ((*local_d4 << 1) >> 0x11);
  local_98 = (double *)(param_3 + 10);
  local_8c = &local_188;
  local_218 = &local_198;
  local_220 = (uint *)0x0;
  pdVar14 = &local_130;
  do {
    puVar11 = (uint *)((uint)*(uint **)(pdVar14 + -3) & 0xfffffff0);
    FUN_00509c90(*(uint **)(pdVar14 + -3),(int *)(puVar11 + ((*puVar11 & 0xfff) + 1) * -4),pdVar14);
    pdVar5 = *(double **)((int)pdVar14 + -4);
    uVar13 = (int)local_220 >> 1;
    local_220 = (uint *)((int)local_220 + 1);
    *local_218 = (uint)(float)((float10)*pdVar5 * (float10)*pdVar14 +
                              (float10)pdVar5[1] * (float10)pdVar14[1] +
                              (float10)pdVar14[2] * (float10)pdVar5[2]) >> 0x1f ^ uVar13 ^ uVar10;
    local_218 = local_218 + 1;
    pdVar14 = pdVar14 + 7;
  } while ((int)local_220 < 4);
  local_220 = &local_198;
  local_200 = -4e-12;
  local_21c = (uint *)0x0;
  local_214 = (uint *)0x0;
  local_204 = (int *)0x0;
  local_224 = (int *)0x0;
  local_218 = (uint *)0x0;
  pdVar14 = local_128;
  do {
    uVar13 = *local_220 ^ (uint)local_218 ^ uVar10;
    pdVar5 = (double *)local_13c[((uint)local_218 ^ uVar10 ^ 1) * 0xe + -1];
    pdVar6 = (double *)local_13c[((uint)local_218 ^ uVar10) * 0xe + -1];
    local_1b8 = *pdVar6 - *pdVar5;
    local_1b0 = pdVar6[1] - pdVar5[1];
    local_1a8 = pdVar6[2] - pdVar5[2];
    dVar8 = local_1b8 * pdVar14[-1] + local_1a8 * pdVar14[1] + local_1b0 * *pdVar14;
    if (dVar8 < 0.0) {
      fVar15 = FUN_004f9200((float)((float10)*pdVar14 * (float10)*pdVar14 +
                                   (float10)pdVar14[1] * (float10)pdVar14[1] +
                                   (float10)pdVar14[-1] * (float10)pdVar14[-1]));
      fVar16 = FUN_004f9200((float)((float10)local_1b8 * (float10)local_1b8 +
                                   (float10)local_1b0 * (float10)local_1b0 +
                                   (float10)local_1a8 * (float10)local_1a8));
      fVar15 = fVar16 * (float10)dVar8 * (float10)(double)fVar15;
      if (fVar15 < (float10)local_200) {
        FUN_005094e0(*(int **)(*(int *)(pdVar14 + -2) + 4),*(uint *)(pdVar14 + -4),
                     (double *)local_13c[uVar13 * 0xe + -1],(int)&local_1c8);
        if (0.0 < local_1c8) {
          local_214 = *(uint **)(pdVar14 + -4);
          local_21c = (uint *)(&local_144)[uVar13 * 0xe];
          local_204 = (int *)local_13c[uVar13 * 0xe];
          local_224 = *(int **)(pdVar14 + -2);
          local_1e4 = local_1c8;
          local_1e0 = local_1c4;
          local_1dc = local_1c0;
          local_200 = (double)fVar15;
        }
      }
    }
    local_218 = (uint *)((int)local_218 + 1);
    local_220 = local_220 + 1;
    pdVar14 = pdVar14 + 7;
  } while ((int)local_218 < 4);
  if (local_21c == (uint *)0x0) {
    iVar9 = *(int *)(param_5 + 0x10);
    *(int **)(iVar9 + 0x14) = param_1;
    *(undefined2 *)(iVar9 + 0x1a) = 1;
    iVar9 = *(int *)(param_6 + 0x10);
    *(int **)(iVar9 + 0x14) = param_2;
    *(undefined2 *)(iVar9 + 0x1a) = 1;
    if (local_194 + local_198 == 2) {
      iVar9 = *(int *)(param_5 + 0x10);
      *(int **)(iVar9 + 0x14) = param_1;
      *(undefined2 *)(iVar9 + 0x1a) = 5;
      iVar9 = *(int *)(param_6 + 0x10);
      *(undefined2 *)(iVar9 + 0x1a) = 2;
      *(int **)(iVar9 + 0x14) = param_2;
      FUN_004f9360((void *)((int)this + 8),local_68,local_48,
                   (double)(param_4[2] / (param_4[2] + param_4[3])));
      return 3;
    }
    if (local_18c + local_190 == 2) {
      iVar9 = *(int *)(param_5 + 0x10);
      *(undefined2 *)(iVar9 + 0x1a) = 2;
      *(int **)(iVar9 + 0x14) = param_1;
      FUN_004f9360((void *)((int)this + 8),pdVar1,(double *)(param_3 + 10),
                   (double)(*param_4 / (*param_4 + param_4[1])));
      iVar9 = *(int *)(param_6 + 0x10);
      *(int **)(iVar9 + 0x14) = param_2;
      *(undefined2 *)(iVar9 + 0x1a) = 5;
      return 3;
    }
    return 1;
  }
  iVar9 = *(int *)this;
  if (local_204[4] != iVar9 + 0x18 + (*(uint *)(iVar9 + 0x14) >> 8 & 3) * 0x1c) {
    *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) ^ 0x100;
  }
  if ((((uint)local_1e0 | (uint)local_1dc | (uint)local_1e4) & 0x80000000) == 0) {
    FUN_00509120(local_21c,local_204,(int)local_224,&local_1b8);
    uVar12 = FUN_005468f0(this,local_21c,&local_1b8,local_214,local_204,local_224);
    return uVar12;
  }
  if (0.0 <= local_1dc) {
    uVar12 = FUN_00546db0(this,local_21c,
                          (uint *)(*(int *)(&DAT_005b99bc + ((uint)local_214 & 0xc)) +
                                  (int)local_214),local_204,local_224);
    return uVar12;
  }
  if (0.0 <= local_1e0) {
    uVar12 = FUN_00546db0(this,local_21c,
                          (uint *)(*(int *)(&DAT_005b99cc + ((uint)local_214 & 0xc)) +
                                  (int)local_214),local_204,local_224);
    return uVar12;
  }
  uVar10 = (uint)local_214 & 0xc;
  fVar15 = FUN_0050a140(local_21c,(uint *)(*(int *)(&DAT_005b99bc + uVar10) + (int)local_214),
                        local_204,local_224);
  fVar16 = FUN_0050a140(local_21c,
                        (uint *)((int *)((int)local_214 + *(int *)(&DAT_005b99cc + uVar10)) +
                                ((*(int *)((int)local_214 + *(int *)(&DAT_005b99cc + uVar10)) << 1)
                                >> 0x11)),local_204,local_224);
  if (fVar16 < (float10)(double)fVar15) {
    uVar12 = FUN_00546db0(this,local_21c,(uint *)((int)local_214 + *(int *)(&DAT_005b99cc + uVar10))
                          ,local_204,local_224);
    return uVar12;
  }
  uVar12 = FUN_00546db0(this,local_21c,(uint *)(*(int *)(&DAT_005b99bc + uVar10) + (int)local_214),
                        local_204,local_224);
  return uVar12;
}


