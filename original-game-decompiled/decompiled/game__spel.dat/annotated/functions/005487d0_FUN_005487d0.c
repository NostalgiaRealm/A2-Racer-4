
/* ==== FUN_005487d0 @ 005487d0 ==== 
 * signature: undefined4 __thiscall FUN_005487d0(void * this, uint * param_1, uint * param_2, int * param_3, int * param_4)
 * body: 005487d0-00548e7e
 */

undefined4 __thiscall FUN_005487d0(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  float *pfVar15;
  uint *puVar16;
  float *pfVar17;
  float10 fVar18;
  undefined8 local_220;
  undefined4 local_208;
  int iStack_204;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e0;
  double local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a0;
  double local_198;
  double local_190;
  double local_180;
  double local_178;
  double local_170;
  float local_160 [4];
  double local_150;
  double local_148;
  double local_140;
  double local_130;
  double local_128;
  double local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  float local_d0 [4];
  undefined4 local_c0 [47];
  
  iVar8 = *(int *)((int)this + 4) + -1;
  *(int *)((int)this + 4) = iVar8;
  if ((iVar8 < 0) && (iVar8 = FUN_0053bcb0(this,0,(uint)param_1,1,(uint)param_2), iVar8 != 0)) {
    return 2;
  }
  FUN_00509120(param_1,param_3,(int)param_4,&local_180);
  iVar8 = *param_4;
  iVar13 = (*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2) & 0xffff) *
           0x10;
  iVar9 = (*param_2 & 0xffff) * 0x10;
  pfVar10 = (float *)(iVar9 + iVar8);
  pfVar15 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc + ((uint)param_2 & 0xc)) + (int)param_2) &
                      0xffff) * 0x10 + iVar8);
  local_1b0 = (double)(*(float *)(iVar13 + 8 + iVar8) - pfVar10[2]);
  local_1c0 = (double)(*(float *)(iVar13 + iVar8) - *pfVar10);
  local_1b8 = (double)(*(float *)(iVar13 + 4 + iVar8) - *(float *)(iVar9 + 4 + iVar8));
  pfVar17 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc +
                                         ((uint)(param_2 + ((int)(*param_2 * 2) >> 0x11)) & 0xc)) +
                                (int)(param_2 + ((int)(*param_2 * 2) >> 0x11))) & 0xffff) * 0x10 +
                     *param_4);
  local_190 = (double)((float)local_170 - pfVar10[2]);
  local_1a0 = (double)((float)local_180 - *pfVar10);
  local_198 = (double)((float)local_178 - pfVar10[1]);
  local_120 = (double)(pfVar15[2] - pfVar10[2]);
  local_130 = (double)(*pfVar15 - *pfVar10);
  local_128 = (double)(pfVar15[1] - pfVar10[1]);
  local_140 = (double)(pfVar17[2] - pfVar10[2]);
  local_150 = (double)(*pfVar17 - *pfVar10);
  local_148 = (double)(pfVar17[1] - pfVar10[1]);
  FUN_004f99d0(&local_110,&local_1c0,&local_130);
  FUN_004f99d0(&local_f0,&local_150,&local_1c0);
  local_1e0 = local_1a0 * local_110 + local_198 * local_108 + local_190 * local_100;
  local_1d8 = local_f0 * local_1a0 + local_198 * local_e8 + local_190 * local_e0;
  FUN_005094e0((int *)param_4[1],(uint)param_2,&local_180,(int)local_d0);
  FUN_005094e0((int *)param_4[1],(uint)(param_2 + ((int)(*param_2 << 1) >> 0x11)),&local_180,
               (int)local_160);
  if (local_d0[0] <= 0.0) {
    if (local_160[0] <= 0.0) {
      if ((local_1e0 < 0.0) && (local_1d8 < 0.0)) {
        iVar8 = param_3[4];
        *(uint **)(iVar8 + 0x14) = param_1;
        *(undefined2 *)(iVar8 + 0x1a) = 0;
        iVar8 = param_4[4];
        *(uint **)(iVar8 + 0x14) = param_2;
        *(undefined2 *)(iVar8 + 0x1a) = 5;
        *(double *)((int)this + 8) = local_180;
        *(double *)((int)this + 0x10) = local_178;
        *(double *)((int)this + 0x18) = local_170;
        return 3;
      }
      FUN_004f99d0(&local_200,&local_1c0,&local_1a0);
      dVar1 = 1.0 / (local_1b8 * local_1b8 + local_1b0 * local_1b0 + local_1c0 * local_1c0);
      dVar2 = (local_200 * local_200 + local_1f8 * local_1f8 + local_1f0 * local_1f0) * dVar1;
      iStack_204 = (int)((ulonglong)dVar2 >> 0x20);
      if (dVar2 <= 1e-19) {
        *(float *)(*(int *)this + 0x54) = -*(float *)(*(int *)this + 0x50);
        FUN_004fb040(&local_1e0,&local_1c0);
        FUN_004f9870(&local_1e0);
        iVar8 = *(int *)this;
        pfVar10 = (float *)(iVar8 + 0x68);
        *pfVar10 = (float)local_1e0;
        local_220 = (double)CONCAT44(local_1cc,local_1d0);
        *(float *)(iVar8 + 0x6c) = (float)local_1d8;
      }
      else {
        local_208 = SUB84(dVar2,0);
        fVar18 = FUN_004f92a0(local_208,iStack_204);
        *(float *)(*(int *)this + 0x54) =
             (float)((float10)(double)fVar18 * (float10)dVar2 -
                    (float10)*(float *)(*(int *)this + 0x50));
        FUN_004f99d0(&local_200,&local_1c0,&local_200);
        FUN_004fe9e0((void *)param_4[2],&local_200,&local_200);
        iVar8 = *(int *)this;
        pfVar10 = (float *)(iVar8 + 0x68);
        fVar18 = -((float10)(double)fVar18 * (float10)dVar1);
        local_220 = (double)((float10)local_1f0 * fVar18);
        *pfVar10 = (float)(fVar18 * (float10)local_200);
        *(float *)(iVar8 + 0x6c) = (float)((float10)local_1f8 * fVar18);
      }
      pfVar10[2] = (float)local_220;
      iVar8 = param_3[2];
      iVar9 = param_4[2];
      iVar13 = *(int *)this;
      *(float *)(iVar13 + 0x58) =
           (float)(((float10)*(double *)(iVar8 + 0xb0) - (float10)*(double *)(iVar9 + 0xb0)) *
                   (float10)*(float *)(iVar13 + 0x68) +
                  ((float10)*(double *)(iVar8 + 0xc0) - (float10)*(double *)(iVar9 + 0xc0)) *
                  (float10)*(float *)(iVar13 + 0x70) +
                  ((float10)*(double *)(iVar8 + 0xb8) - (float10)*(double *)(iVar9 + 0xb8)) *
                  (float10)*(float *)(iVar13 + 0x6c));
      FUN_004fe900((void *)param_3[2],&local_200,&local_200);
      puVar7 = (uint *)0x0;
      pfVar10 = (float *)((*param_1 & 0xffff) * 0x10 + *param_3);
      local_220 = dVar2 * 1e-12;
      puVar14 = (uint *)(*(int *)(&DAT_005b99cc + ((uint)param_1 & 0xc)) + (int)param_1);
      puVar12 = puVar14 + ((int)(*puVar14 << 1) >> 0x11);
      puVar16 = *(uint **)(&DAT_005b99cc + ((uint)puVar12 & 0xc));
      while( true ) {
        puVar16 = (uint *)((int)puVar16 + (int)puVar12);
        pfVar15 = (float *)((*puVar16 & 0xffff) * 0x10 + *param_3);
        fVar3 = *pfVar15 - *pfVar10;
        fVar6 = pfVar15[1] - pfVar10[1];
        fVar4 = pfVar15[2] - pfVar10[2];
        fVar5 = fVar3 * (float)local_200 + fVar6 * (float)local_1f8 + fVar4 * (float)local_1f0;
        local_1e0 = (double)fVar5;
        if (0.0 < fVar5) {
          fVar18 = FUN_004f9200(fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3);
          if ((float10)local_220 < fVar18 * (float10)local_1e0) {
            local_220 = (double)(fVar18 * (float10)local_1e0);
            puVar7 = puVar16;
          }
        }
        if (puVar16 == puVar14) break;
        puVar16 = puVar16 + ((int)(*puVar16 << 1) >> 0x11);
        puVar12 = *(uint **)(&DAT_005b99cc + ((uint)puVar16 & 0xc));
      }
      if (puVar7 == (uint *)0x0) {
LAB_00548e50:
        iVar8 = param_3[4];
        *(uint **)(iVar8 + 0x14) = param_1;
        *(undefined2 *)(iVar8 + 0x1a) = 0;
        iVar8 = param_4[4];
        *(uint **)(iVar8 + 0x14) = param_2;
        *(undefined2 *)(iVar8 + 0x1a) = 1;
        return 1;
      }
      if (local_220 < 1e-08) {
        FUN_00509670(local_c0,param_2,puVar7,param_4,param_3);
        iVar8 = FUN_00509870(local_c0,(float *)&local_1e0);
        if ((iVar8 == 0) || (local_1d8._0_4_ < 0.0)) goto LAB_00548e50;
      }
      uVar11 = FUN_00546db0(this,puVar7,param_2,param_3,param_4);
      return uVar11;
    }
  }
  else if ((local_160[0] <= 0.0) || (local_1d8 <= 0.0)) {
    uVar11 = FUN_005465d0(this,param_1,param_2,param_3,param_4);
    return uVar11;
  }
  uVar11 = FUN_005465d0(this,param_1,param_2 + ((int)(*param_2 << 1) >> 0x11),param_3,param_4);
  return uVar11;
}


