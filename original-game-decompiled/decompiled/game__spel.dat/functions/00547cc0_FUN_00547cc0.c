
/* ==== FUN_00547cc0 @ 00547cc0 ==== 
 * signature: undefined4 __thiscall FUN_00547cc0(void * this, uint * param_1, uint * param_2, int * param_3, int * param_4)
 * body: 00547cc0-005481c2
 */

undefined4 __thiscall FUN_00547cc0(void *this,uint *param_1,uint *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  uint *puVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int *local_100;
  uint *local_fc;
  int local_f8;
  uint *local_f4;
  int *local_f0 [2];
  double *local_e8;
  int *local_e4;
  double local_e0;
  int *local_d8;
  double *local_d4;
  double local_d0;
  int *local_c8;
  int local_c4;
  uint *local_c0 [2];
  float local_b8;
  float local_b4;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_90;
  double local_88;
  double local_80;
  double local_70;
  double local_68;
  double local_60;
  double local_50;
  double local_48 [4];
  double local_28 [4];
  
  iVar4 = *(int *)((int)this + 4) + -1;
  *(int *)((int)this + 4) = iVar4;
  local_d8 = this;
  if ((iVar4 < 0) && (iVar4 = FUN_0053bcb0(this,0,(uint)param_1,0,(uint)param_2), iVar4 != 0)) {
    return 2;
  }
  local_c0[0] = param_1;
  local_c0[1] = param_2;
  FUN_0050a110(param_1,param_3,&local_90);
  FUN_0050a110(param_2,param_4,&local_70);
  FUN_004fe7e0((void *)param_4[2],&local_90,local_48);
  FUN_004fe7e0((void *)param_3[2],&local_70,local_28);
  fVar12 = ((float10)local_90 - (float10)local_70) * ((float10)local_90 - (float10)local_70) +
           ((float10)local_88 - (float10)local_68) * ((float10)local_88 - (float10)local_68) +
           ((float10)local_80 - (float10)local_60) * ((float10)local_80 - (float10)local_60);
  if (fVar12 <= (float10)1e-12) {
    return 2;
  }
  local_f0[1] = (int *)((ulonglong)(double)fVar12 >> 0x20);
  fVar10 = fVar12 * (float10)0.5;
  local_e0 = (double)((ulonglong)((0x7ff00000 - (int)local_f0[1] >> 1) + 0x1ff00000) << 0x20);
  fVar11 = (float10)local_e0;
  fVar11 = (((float10)0.5 - fVar10 * fVar11 * fVar11) + (float10)1.0) * fVar11;
  fVar11 = (((float10)0.5 - fVar11 * fVar11 * fVar10) + (float10)1.0) * fVar11;
  fVar11 = (((float10)0.5 - fVar11 * fVar11 * fVar10) + (float10)1.0) * fVar11;
  fVar11 = (((float10)0.5 - fVar11 * fVar11 * fVar10) + (float10)1.0) * fVar11;
  fVar11 = (((float10)0.5 - fVar11 * fVar11 * fVar10) + (float10)1.0) * fVar11;
  *(float *)(*(int *)this + 0x54) =
       (float)(fVar11 * fVar12 - (float10)*(float *)(*(int *)this + 0x50));
  iVar4 = *(int *)this;
  *(float *)(iVar4 + 0x68) = (float)(((float10)local_90 - (float10)local_70) * fVar11);
  local_f0[1] = param_4;
  local_f0[0] = param_3;
  *(float *)(iVar4 + 0x6c) = (float)(((float10)local_88 - (float10)local_68) * fVar11);
  local_d0 = 0.0;
  *(float *)(iVar4 + 0x70) = (float)(((float10)local_80 - (float10)local_60) * fVar11);
  iVar4 = param_3[2];
  iVar1 = param_4[2];
  local_e8 = local_28;
  iVar2 = *(int *)this;
  *(float *)(iVar2 + 0x58) =
       (float)(((float10)*(double *)(iVar4 + 0xb0) - (float10)*(double *)(iVar1 + 0xb0)) *
               (float10)*(float *)(iVar2 + 0x68) +
              ((float10)*(double *)(iVar4 + 0xc0) - (float10)*(double *)(iVar1 + 0xc0)) *
              (float10)*(float *)(iVar2 + 0x70) +
              ((float10)*(double *)(iVar4 + 0xb8) - (float10)*(double *)(iVar1 + 0xb8)) *
              (float10)*(float *)(iVar2 + 0x6c));
  local_d4 = (double *)0x0;
  local_fc = (uint *)0x0;
  local_f4 = (uint *)0x0;
  local_100 = (int *)0x0;
  local_e4 = (int *)0x0;
  local_c4 = 0;
  local_f8 = 0;
  do {
    puVar7 = *(uint **)((int)local_c0 + local_c4);
    local_c8 = *(int **)((int)local_f0 + local_c4);
    pfVar8 = (float *)((*puVar7 & 0xffff) * 0x10 + **(int **)((int)local_f0 + local_c4));
    local_e0 = (double)CONCAT44(local_e0._4_4_,local_e8 + 2);
    local_b0 = (double)((float)*local_e8 - *pfVar8);
    local_a8 = (double)((float)local_e8[1] - pfVar8[1]);
    fVar3 = (float)local_e8[2] - pfVar8[2];
    puVar7 = (uint *)((int)puVar7 + *(int *)(&DAT_005b99cc + ((uint)puVar7 & 0xc)));
    local_a0 = (double)fVar3;
    local_e0 = (double)(*pfVar8 * ((float)*local_e8 - *pfVar8) +
                       pfVar8[1] * ((float)local_e8[1] - pfVar8[1]) + pfVar8[2] * fVar3);
    puVar9 = (uint *)(*(int *)(&DAT_005b99cc +
                              ((uint)(puVar7 + ((int)(*puVar7 << 1) >> 0x11)) & 0xc)) +
                     (int)(puVar7 + ((int)(*puVar7 << 1) >> 0x11)));
    while( true ) {
      pfVar6 = (float *)((*puVar9 & 0xffff) * 0x10 + *local_c8);
      fVar3 = (pfVar6[2] * (float)local_a0 + pfVar6[1] * (float)local_a8 + *pfVar6 * (float)local_b0
              ) - (float)local_e0;
      local_50 = (double)fVar3;
      if (0.0 < fVar3) {
        fVar12 = FUN_004f9200((*pfVar6 - *pfVar8) * (*pfVar6 - *pfVar8) +
                              (pfVar6[1] - pfVar8[1]) * (pfVar6[1] - pfVar8[1]) +
                              (pfVar6[2] - pfVar8[2]) * (pfVar6[2] - pfVar8[2]));
        if ((float10)local_d0 < fVar12 * (float10)local_50) {
          local_d0 = (double)(fVar12 * (float10)local_50);
          local_f4 = *(uint **)((int)local_c0 + local_f8 + 4);
          local_d4 = local_e8;
          local_100 = local_c8;
          local_e4 = *(int **)((int)local_f0 + local_f8 + 4);
          local_fc = puVar9;
        }
      }
      if (puVar9 == puVar7) break;
      puVar9 = (uint *)((int)(puVar9 + ((int)(*puVar9 << 1) >> 0x11)) +
                       *(int *)(&DAT_005b99cc +
                               ((uint)(puVar9 + ((int)(*puVar9 << 1) >> 0x11)) & 0xc)));
    }
    local_c4 = local_c4 + 4;
    local_e8 = local_e8 + -4;
    local_f8 = local_f8 + -4;
  } while (local_c4 < 5);
  if ((local_fc != (uint *)0x0) &&
     (FUN_00509420((int *)local_100[1],local_fc,local_d4,&local_b8), 0.0 < local_b4)) {
    iVar4 = *local_d8;
    if (0.0 <= local_b8) {
      if (local_e4[4] != iVar4 + 0x18 + (*(uint *)(iVar4 + 0x14) >> 8 & 3) * 0x1c) {
        *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) ^ 0x100;
      }
      uVar5 = FUN_005487d0(local_d8,local_f4,local_fc,local_e4,local_100);
      return uVar5;
    }
    if (local_100[4] != iVar4 + 0x18 + (*(uint *)(iVar4 + 0x14) >> 8 & 3) * 0x1c) {
      *(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) ^ 0x100;
    }
    uVar5 = FUN_00547cc0(local_d8,local_fc,local_f4,local_100,local_e4);
    return uVar5;
  }
  iVar4 = param_3[4];
  *(uint **)(iVar4 + 0x14) = param_1;
  *(undefined2 *)(iVar4 + 0x1a) = 0;
  iVar4 = param_4[4];
  *(uint **)(iVar4 + 0x14) = param_2;
  *(undefined2 *)(iVar4 + 0x1a) = 0;
  return 1;
}


