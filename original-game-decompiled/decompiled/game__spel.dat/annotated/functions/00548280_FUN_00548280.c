
/* ==== FUN_00548280 @ 00548280 ==== 
 * signature: undefined4 __thiscall FUN_00548280(void * this, int * param_1, uint * param_2, int * param_3)
 * body: 00548280-00548703
 */

undefined4 __thiscall FUN_00548280(void *this,int *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  float *pfVar10;
  float *pfVar11;
  float10 fVar12;
  undefined4 local_140;
  int iStack_13c;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  float local_a8 [4];
  double local_98;
  double local_90;
  double local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  float local_38 [4];
  double local_28;
  double local_20;
  double local_18;
  
  iVar6 = *(int *)((int)this + 4) + -1;
  *(int *)((int)this + 4) = iVar6;
  if (iVar6 < 0) {
    iVar6 = FUN_0053bcb0(this,3,0,1,(uint)param_2);
    if (iVar6 != 0) {
      return 2;
    }
  }
  FUN_004fe7e0((void *)param_3[2],(double *)(*param_1 + 0x90),&local_c8);
  iVar6 = *param_3;
  iVar7 = (*param_2 & 0xffff) * 0x10;
  pfVar11 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc + ((uint)param_2 & 0xc)) + (int)param_2) &
                      0xffff) * 0x10 + iVar6);
  pfVar10 = (float *)((*(uint *)(*(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)) + (int)param_2) &
                      0xffff) * 0x10 + iVar6);
  pfVar8 = (float *)(iVar7 + iVar6);
  local_118 = (double)(pfVar10[2] - *(float *)(iVar7 + 8 + iVar6));
  local_128 = (double)(*pfVar10 - *pfVar8);
  local_120 = (double)(pfVar10[1] - *(float *)(iVar7 + 4 + iVar6));
  pfVar10 = (float *)((*(uint *)(*(int *)(&DAT_005b99cc +
                                         ((uint)(param_2 + ((int)(*param_2 * 2) >> 0x11)) & 0xc)) +
                                (int)(param_2 + ((int)(*param_2 * 2) >> 0x11))) & 0xffff) * 0x10 +
                     *param_3);
  local_d8 = (double)((float)local_b8 - pfVar8[2]);
  local_e8 = (double)((float)local_c8 - *pfVar8);
  local_e0 = (double)((float)local_c0 - pfVar8[1]);
  local_88 = (double)(pfVar11[2] - pfVar8[2]);
  local_98 = (double)(*pfVar11 - *pfVar8);
  local_90 = (double)(pfVar11[1] - pfVar8[1]);
  local_68 = (double)(pfVar10[2] - pfVar8[2]);
  local_78 = (double)(*pfVar10 - *pfVar8);
  local_70 = (double)(pfVar10[1] - pfVar8[1]);
  FUN_004f99d0(&local_58,&local_128,&local_98);
  FUN_004f99d0(&local_28,&local_78,&local_128);
  dVar2 = local_d8 * local_48;
  dVar4 = local_e0 * local_50;
  dVar3 = local_e8 * local_58;
  dVar5 = local_28 * local_e8 + local_e0 * local_20 + local_d8 * local_18;
  FUN_005094e0((int *)param_3[1],(uint)param_2,&local_c8,(int)local_38);
  FUN_005094e0((int *)param_3[1],(uint)(param_2 + ((int)(*param_2 << 1) >> 0x11)),&local_c8,
               (int)local_a8);
  if (local_38[0] <= 0.0) {
    if (local_a8[0] <= 0.0) {
      if ((dVar3 + dVar4 + dVar2 < -1e-19) && (dVar5 < -1e-19)) {
        *(double *)((int)this + 8) = local_c8;
        *(double *)((int)this + 0x10) = local_c0;
        *(double *)((int)this + 0x18) = local_b8;
        iVar6 = param_3[4];
        *(uint **)(iVar6 + 0x14) = param_2;
        *(undefined2 *)(iVar6 + 0x1a) = 5;
        return 3;
      }
      FUN_004f99d0(&local_108,&local_128,&local_e8);
      dVar2 = 1.0 / (local_128 * local_128 + local_120 * local_120 + local_118 * local_118);
      dVar3 = (local_108 * local_108 + local_100 * local_100 + local_f8 * local_f8) * dVar2;
      iStack_13c = (int)((ulonglong)dVar3 >> 0x20);
      local_140 = SUB84(dVar3,0);
      fVar12 = FUN_004f92a0(local_140,iStack_13c);
      *(float *)(*(int *)this + 0x54) =
           (float)((float10)(double)fVar12 * (float10)dVar3 -
                  (float10)*(float *)(*(int *)this + 0x50));
      FUN_004f99d0(&local_108,&local_128,&local_108);
      FUN_004fe9e0((void *)param_3[2],&local_108,&local_108);
      iVar6 = *(int *)this;
      fVar12 = -((float10)(double)fVar12 * (float10)dVar2);
      *(float *)(iVar6 + 0x68) = (float)(fVar12 * (float10)local_108);
      *(float *)(iVar6 + 0x6c) = (float)((float10)local_100 * fVar12);
      *(float *)(iVar6 + 0x70) = (float)((float10)local_f8 * fVar12);
      iVar6 = param_3[2];
      iVar7 = *param_1;
      iVar1 = *(int *)this;
      *(float *)(iVar1 + 0x58) =
           (float)(((float10)*(double *)(iVar7 + 0xb0) - (float10)*(double *)(iVar6 + 0xb0)) *
                   (float10)*(float *)(iVar1 + 0x68) +
                  ((float10)*(double *)(iVar7 + 0xc0) - (float10)*(double *)(iVar6 + 0xc0)) *
                  (float10)*(float *)(iVar1 + 0x70) +
                  ((float10)*(double *)(iVar7 + 0xb8) - (float10)*(double *)(iVar6 + 0xb8)) *
                  (float10)*(float *)(iVar1 + 0x6c));
      iVar6 = param_3[4];
      *(uint **)(iVar6 + 0x14) = param_2;
      *(undefined2 *)(iVar6 + 0x1a) = 1;
      return 1;
    }
  }
  else if ((local_a8[0] <= 0.0) || (dVar5 <= 0.0)) {
    uVar9 = FUN_005466c0(this,param_1,param_2,param_3);
    return uVar9;
  }
  uVar9 = FUN_005466c0(this,param_1,param_2 + ((int)(*param_2 << 1) >> 0x11),param_3);
  return uVar9;
}


