
/* ==== FUN_005479c0 @ 005479c0 ==== 
 * signature: undefined4 __thiscall FUN_005479c0(void * this, int * param_1, uint * param_2, int * param_3)
 * body: 005479c0-00547cbc
 */

undefined4 __thiscall FUN_005479c0(void *this,int *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  float *pfVar8;
  double *pdVar9;
  float *pfVar10;
  uint *puVar11;
  uint *puVar12;
  float10 fVar13;
  double local_b8;
  uint *local_a8;
  float local_a0;
  float local_9c;
  double local_98;
  double local_90;
  double local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  iVar4 = *(int *)((int)this + 4) + -1;
  *(int *)((int)this + 4) = iVar4;
  if ((iVar4 < 0) && (iVar4 = FUN_0053bcb0(this,3,0,0,(uint)param_2), iVar4 != 0)) {
    return 2;
  }
  FUN_0050a110(param_2,param_3,&local_28);
  iVar4 = *param_1;
  pdVar9 = (double *)(iVar4 + 0x90);
  FUN_004fe7e0((void *)param_3[2],pdVar9,&local_48);
  local_70 = *(double *)(iVar4 + 0x98) - local_20;
  local_68 = *(double *)(iVar4 + 0xa0) - local_18;
  local_78 = *pdVar9 - local_28;
  fVar13 = FUN_004f9580(&local_78);
  iVar1 = *(int *)this;
  *(float *)(iVar1 + 0x68) = (float)local_78;
  *(float *)(iVar1 + 0x6c) = (float)local_70;
  *(float *)(iVar1 + 0x70) = (float)local_68;
  local_b8 = 0.0;
  local_a8 = (uint *)0x0;
  *(float *)(*(int *)this + 0x54) = (float)(fVar13 - (float10)*(float *)(*(int *)this + 0x50));
  iVar1 = param_3[2];
  iVar2 = *(int *)this;
  *(float *)(iVar2 + 0x58) =
       (float)(((float10)*pdVar9 - (float10)*(double *)(iVar1 + 0xb0)) *
               (float10)*(float *)(iVar2 + 0x68) +
              ((float10)*(double *)(iVar4 + 0xa0) - (float10)*(double *)(iVar1 + 0xc0)) *
              (float10)*(float *)(iVar2 + 0x70) +
              ((float10)*(double *)(iVar4 + 0x98) - (float10)*(double *)(iVar1 + 0xb8)) *
              (float10)*(float *)(iVar2 + 0x6c));
  pfVar10 = (float *)((*param_2 & 0xffff) * 0x10 + *param_3);
  local_98 = (double)((float)local_48 - *pfVar10);
  puVar7 = (uint *)(*(int *)(&DAT_005b99cc + ((uint)param_2 & 0xc)) + (int)param_2);
  local_90 = (double)((float)local_40 - pfVar10[1]);
  local_88 = (double)((float)local_38 - pfVar10[2]);
  puVar5 = puVar7 + ((int)(*puVar7 << 1) >> 0x11);
  puVar11 = *(uint **)(&DAT_005b99cc + ((uint)puVar5 & 0xc));
  local_58 = (double)(pfVar10[1] * ((float)local_40 - pfVar10[1]) +
                     *pfVar10 * ((float)local_48 - *pfVar10) +
                     pfVar10[2] * ((float)local_38 - pfVar10[2]));
  while( true ) {
    puVar12 = (uint *)((int)puVar11 + (int)puVar5);
    pfVar8 = (float *)((*(uint *)((int)puVar11 + (int)puVar5) & 0xffff) * 0x10 + *param_3);
    fVar3 = (*pfVar8 * (float)local_98 + pfVar8[2] * (float)local_88 + pfVar8[1] * (float)local_90)
            - (float)local_58;
    local_50 = (double)fVar3;
    if (0.0 < fVar3) {
      fVar13 = FUN_004f9200((*pfVar8 - *pfVar10) * (*pfVar8 - *pfVar10) +
                            (pfVar8[1] - pfVar10[1]) * (pfVar8[1] - pfVar10[1]) +
                            (pfVar8[2] - pfVar10[2]) * (pfVar8[2] - pfVar10[2]));
      if ((float10)local_b8 < fVar13 * (float10)local_50) {
        local_b8 = (double)(fVar13 * (float10)local_50);
        local_a8 = puVar12;
      }
    }
    if (puVar12 == puVar7) break;
    puVar11 = puVar12 + ((int)(*puVar12 << 1) >> 0x11);
    puVar5 = *(uint **)(&DAT_005b99cc + ((uint)puVar11 & 0xc));
  }
  if (local_a8 != (uint *)0x0) {
    FUN_00509420((int *)param_3[1],local_a8,&local_48,&local_a0);
    if (0.0 < local_9c) {
      if (0.0 <= local_a0) {
        uVar6 = FUN_005481d0(this,param_1,local_a8,param_3);
        return uVar6;
      }
      uVar6 = FUN_005479c0(this,param_1,local_a8,param_3);
      return uVar6;
    }
  }
  iVar4 = param_3[4];
  *(uint **)(iVar4 + 0x14) = param_2;
  *(undefined2 *)(iVar4 + 0x1a) = 0;
  return 1;
}


