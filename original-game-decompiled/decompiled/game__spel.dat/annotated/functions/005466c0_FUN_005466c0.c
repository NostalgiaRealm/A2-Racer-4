
/* ==== FUN_005466c0 @ 005466c0 ==== 
 * signature: undefined4 __thiscall FUN_005466c0(void * this, int * param_1, uint * param_2, int * param_3)
 * body: 005466c0-005468e8
 */

undefined4 __thiscall FUN_005466c0(void *this,int *param_1,uint *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  uint *local_84;
  undefined8 local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar8 = *param_1;
  FUN_004fe7e0((void *)param_3[2],(double *)(iVar8 + 0x90),&local_48);
  FUN_005094e0((int *)param_3[1],(uint)param_2,&local_48,(int)&local_78);
  if (((local_74 | local_70 | local_78) & 0x80000000) != 0) {
    local_80 = 1e+101;
    local_84 = (uint *)0x0;
    iVar8 = 3;
    do {
      fVar9 = (float10)FUN_0050a080(&local_48,(int *)param_3[1],param_2);
      if (fVar9 < (float10)local_80) {
        local_80 = (double)fVar9;
        local_84 = param_2;
      }
      param_2 = (uint *)((int)param_2 + *(int *)(&DAT_005b99bc + ((uint)param_2 & 0xc)));
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar6 = FUN_005481d0(this,param_1,local_84,param_3);
    return uVar6;
  }
  pfVar7 = (float *)((*param_2 & 0xffff) * 0x10 + *param_3);
  FUN_00509c90(param_2,(int *)param_3[1],&local_68);
  FUN_004f9870(&local_68);
  FUN_004fe9e0((void *)param_3[2],&local_68,&local_28);
  iVar4 = *(int *)this;
  *(float *)(iVar4 + 0x68) = (float)local_28;
  local_80 = (double)CONCAT44(local_14,local_18);
  *(float *)(iVar4 + 0x6c) = (float)local_20;
  *(float *)(iVar4 + 0x70) = (float)local_80;
  iVar4 = param_3[4];
  fVar1 = pfVar7[2];
  fVar2 = pfVar7[1];
  fVar3 = *pfVar7;
  *(uint **)(iVar4 + 0x14) = param_2;
  *(undefined2 *)(iVar4 + 0x1a) = 2;
  fVar9 = ((float10)local_68 * (float10)local_48 +
          (float10)local_40 * (float10)local_60 + (float10)local_38 * (float10)local_58) -
          ((float10)fVar3 * (float10)local_68 +
          (float10)fVar2 * (float10)local_60 + (float10)fVar1 * (float10)local_58);
  if ((float10)0.0 <= fVar9) {
    *(float *)(*(int *)this + 0x54) = (float)(fVar9 - (float10)*(float *)(*(int *)this + 0x50));
    iVar4 = param_3[2];
    iVar5 = *(int *)this;
    *(float *)(iVar5 + 0x58) =
         (float)(((float10)*(double *)(iVar8 + 0x90) - (float10)*(double *)(iVar4 + 0xb0)) *
                 (float10)*(float *)(iVar5 + 0x68) +
                ((float10)*(double *)(iVar8 + 0xa0) - (float10)*(double *)(iVar4 + 0xc0)) *
                (float10)*(float *)(iVar5 + 0x70) +
                ((float10)*(double *)(iVar8 + 0x98) - (float10)*(double *)(iVar4 + 0xb8)) *
                (float10)*(float *)(iVar5 + 0x6c));
    return 1;
  }
  iVar8 = param_3[4];
  *(uint **)(iVar8 + 0x14) = param_2;
  *(undefined2 *)(iVar8 + 0x1a) = 5;
  *(double *)((int)this + 8) = local_48;
  *(double *)((int)this + 0x10) = local_40;
  *(double *)((int)this + 0x18) = local_38;
  return 3;
}


