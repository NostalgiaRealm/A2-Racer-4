
/* ==== FUN_005468f0 @ 005468f0 ==== 
 * signature: undefined4 __thiscall FUN_005468f0(void * this, uint * param_1, double * param_2, uint * param_3, int * param_4, int * param_5)
 * body: 005468f0-00546da0
 */

undefined4 __thiscall
FUN_005468f0(void *this,uint *param_1,double *param_2,uint *param_3,int *param_4,int *param_5)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  uint *local_bc;
  undefined8 local_b8;
  double local_b0;
  float local_a0;
  uint local_9c;
  uint local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  double local_70;
  double local_68;
  double local_60;
  double local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 local_34;
  double local_28 [4];
  
  iVar4 = *(int *)((int)this + 4) + -1;
  *(int *)((int)this + 4) = iVar4;
  if ((iVar4 < 0) && (iVar4 = FUN_0053bcb0(this,0,(uint)param_1,2,(uint)param_3), iVar4 != 0)) {
    return 2;
  }
  FUN_00509c90(param_3,(int *)param_5[1],&local_70);
  FUN_004f94a0(&local_70);
  FUN_004fe9e0((void *)param_5[2],&local_70,&local_48);
  FUN_004fe900((void *)param_4[2],&local_48,&local_90);
  pfVar5 = (float *)((*param_3 & 0xffff) * 0x10 + *param_5);
  *(float *)(*(int *)this + 0x54) =
       (float)(((float10)local_68 * (float10)param_2[1] +
               (float10)local_70 * (float10)*param_2 + (float10)local_60 * (float10)param_2[2]) -
              ((float10)*pfVar5 * (float10)local_70 +
              (float10)pfVar5[2] * (float10)local_60 + (float10)pfVar5[1] * (float10)local_68));
  iVar4 = *(int *)this;
  *(float *)(iVar4 + 0x68) = (float)local_48;
  local_b8 = (double)CONCAT44(local_34,local_38);
  *(float *)(iVar4 + 0x6c) = (float)local_40;
  *(float *)(iVar4 + 0x70) = (float)local_b8;
  iVar4 = *(int *)this;
  if (*(float *)(iVar4 + 0x54) < 0.0) {
    local_88 = local_88 * -1.0;
    local_80 = (double)CONCAT44(local_80._4_4_,(undefined4)local_80) * -1.0;
    local_90 = local_90 * -1.0;
  }
  local_b0 = 0.0;
  local_bc = (uint *)0x0;
  *(float *)(iVar4 + 0x54) = *(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x50);
  iVar4 = param_4[2];
  iVar8 = param_5[2];
  iVar2 = *(int *)this;
  *(float *)(iVar2 + 0x58) =
       (float)(((float10)*(double *)(iVar4 + 0xb0) - (float10)*(double *)(iVar8 + 0xb0)) *
               (float10)*(float *)(iVar2 + 0x68) +
              ((float10)*(double *)(iVar4 + 0xc0) - (float10)*(double *)(iVar8 + 0xc0)) *
              (float10)*(float *)(iVar2 + 0x70) +
              ((float10)*(double *)(iVar4 + 0xb8) - (float10)*(double *)(iVar8 + 0xb8)) *
              (float10)*(float *)(iVar2 + 0x6c));
  pfVar5 = (float *)((*param_1 & 0xffff) * 0x10 + *param_4);
  puVar9 = (uint *)(*(int *)(&DAT_005b99cc + ((uint)param_1 & 0xc)) + (int)param_1);
  puVar10 = (uint *)(*(int *)(&DAT_005b99cc + ((uint)(puVar9 + ((int)(*puVar9 << 1) >> 0x11)) & 0xc)
                             ) + (int)(puVar9 + ((int)(*puVar9 << 1) >> 0x11)));
  while( true ) {
    pfVar6 = (float *)((*puVar10 & 0xffff) * 0x10 + *param_4);
    fVar11 = (float10)*pfVar6 - (float10)*pfVar5;
    fVar12 = (float10)pfVar6[1] - (float10)pfVar5[1];
    fVar13 = fVar11 * (float10)local_90 +
             (float10)local_88 * fVar12 +
             (float10)local_80 * ((float10)pfVar6[2] - (float10)pfVar5[2]);
    local_50 = (double)fVar13;
    if (fVar13 < (float10)0.0) {
      dVar1 = (double)((float10)pfVar6[2] - (float10)pfVar5[2]);
      fVar11 = FUN_004f9200((float)((float10)dVar1 * (float10)dVar1 +
                                   fVar12 * fVar12 + fVar11 * fVar11));
      if (fVar11 * (float10)local_50 < (float10)local_b0) {
        local_b0 = (double)(fVar11 * (float10)local_50);
        local_bc = puVar10;
      }
    }
    if (puVar10 == puVar9) break;
    puVar10 = (uint *)((int)(puVar10 + ((int)(*puVar10 << 1) >> 0x11)) +
                      *(int *)(&DAT_005b99cc +
                              ((uint)(puVar10 + ((int)(*puVar10 << 1) >> 0x11)) & 0xc)));
  }
  iVar4 = 0;
  if (local_bc == (uint *)0x0) {
    iVar4 = param_4[4];
    *(uint **)(iVar4 + 0x14) = param_1;
    *(undefined2 *)(iVar4 + 0x1a) = 0;
    iVar4 = param_5[4];
    *(uint **)(iVar4 + 0x14) = param_3;
    *(undefined2 *)(iVar4 + 0x1a) = 2;
    if (0.0 <= *(float *)(*(int *)this + 0x54) + *(float *)(*(int *)this + 0x50)) {
      return 1;
    }
    dVar1 = param_2[1];
    uVar7 = *(undefined4 *)(param_2 + 2);
    uVar3 = *(undefined4 *)((int)param_2 + 0x14);
    *(double *)((int)this + 8) = *param_2;
    *(double *)((int)this + 0x10) = dVar1;
    *(undefined4 *)((int)this + 0x18) = uVar7;
    *(undefined4 *)((int)this + 0x1c) = uVar3;
    iVar4 = param_5[4];
    *(uint **)(iVar4 + 0x14) = param_3;
    *(undefined2 *)(iVar4 + 0x1a) = 5;
    return 3;
  }
  FUN_00509120(local_bc,param_4,(int)param_5,local_28);
  FUN_005094e0((int *)((uint *)((uint)param_3 & 0xfffffff0) +
                      ((*(uint *)((uint)param_3 & 0xfffffff0) & 0xfff) + 1) * -4),(uint)param_3,
               local_28,(int)&local_a0);
  if (((local_9c | local_98 | (uint)local_a0) & 0x80000000) == 0) {
    uVar7 = FUN_005468f0(this,local_bc,local_28,param_3,param_4,param_5);
    return uVar7;
  }
  pfVar5 = &local_a0;
  iVar8 = 3;
  do {
    if (*pfVar5 < 0.0) {
      iVar4 = iVar4 + 1;
    }
    pfVar5 = pfVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (iVar4 == 1) {
    iVar4 = 0;
    pfVar5 = &local_a0;
    puVar9 = param_3;
    do {
      if (*pfVar5 < 0.0) {
        uVar7 = FUN_00546db0(this,local_bc,puVar9,param_4,param_5);
        return uVar7;
      }
      pfVar5 = pfVar5 + 1;
      puVar9 = (uint *)((int)puVar9 + *(int *)(&DAT_005b99bc + ((uint)puVar9 & 0xc)));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  puVar9 = (uint *)0x0;
  local_b8 = 1e+101;
  pfVar5 = &local_a0;
  iVar4 = 3;
  do {
    if (*pfVar5 <= 0.0) {
      fVar11 = FUN_0050a140(local_bc,param_3,param_4,param_5);
      if (fVar11 < (float10)local_b8) {
        local_b8 = (double)fVar11;
        puVar9 = param_3;
      }
    }
    pfVar5 = pfVar5 + 1;
    param_3 = (uint *)((int)param_3 + *(int *)(&DAT_005b99bc + ((uint)param_3 & 0xc)));
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar7 = FUN_00546db0(this,local_bc,puVar9,param_4,param_5);
  return uVar7;
}


