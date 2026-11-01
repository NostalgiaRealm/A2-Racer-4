
/* ==== FUN_00505cc0 @ 00505cc0 ==== 
 * signature: undefined __fastcall FUN_00505cc0(void * param_1)
 * body: 00505cc0-00506428
 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00505cc0(void *param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  float fVar7;
  float *pfVar8;
  double *pdVar9;
  byte *pbVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_b0;
  float local_ac;
  float local_a8;
  double local_a0;
  uint *local_94;
  double local_90;
  uint *local_88;
  float local_84;
  float local_80;
  float local_7c;
  int local_74;
  uint *local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  int local_5c;
  uint *local_58;
  int local_54;
  int local_50;
  int local_4c;
  double local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  double local_28 [4];
  
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x10) + 0x18);
  pfVar8 = (float *)FUN_004f5400(*(void **)(iVar4 + 0xb4),0xe0);
  iVar1 = (int)param_1 + 8;
  *(undefined2 *)((int)pfVar8 + 0x5a) = 0;
  local_b0 = 0.0;
  pfVar8[0x17] = (float)((uint)pfVar8[0x17] & 0xfffffc00);
  *(float **)((int)param_1 + 0x40) = pfVar8;
  local_ac = 0.0;
  *(int *)(iVar4 + 0x8c) = *(int *)(iVar4 + 0x8c) + 1;
  local_a8 = 0.0;
  local_a0 = (double)CONCAT44(local_a0._4_4_,
                              (int)(short)((ushort)*(byte *)((int)param_1 + 0x16) << 8) >> 8);
  local_90 = (double)CONCAT44(local_90._4_4_,
                              (int)(short)((ushort)*(byte *)((int)param_1 + 0x2a) << 8) >> 8);
  local_94 = *(uint **)((int)param_1 + 0x2c);
  local_88 = (uint *)((uint)local_94 & 0xfffffff0) +
             ((*(uint *)((uint)local_94 & 0xfffffff0) & 0xfff) + 1) * -4;
  iVar4 = *(int *)((int)param_1 + 0x24);
  local_70 = local_88;
  local_6c = FUN_00506590(iVar4);
  puVar5 = *(uint **)((int)param_1 + 0x18);
  local_74 = (int)local_88 + *local_88;
  local_88 = *(uint **)((int)param_1 + 0x10);
  local_60 = (uint *)((uint)puVar5 & 0xfffffff0) +
             ((*(uint *)((uint)puVar5 & 0xfffffff0) & 0xfff) + 1) * -4;
  local_68 = iVar4;
  local_64 = (int)param_1 + 0x1c;
  local_58 = local_60;
  local_54 = FUN_00506590((int)local_88);
  local_50 = (int)local_88;
  local_5c = *local_60 + (int)local_60;
  local_4c = iVar1;
  if (local_a0._0_4_ != 0) {
    if (local_a0._0_4_ == 1) {
      FUN_00505810(param_1,puVar5,local_94,&local_5c,&local_74,pfVar8,&local_b0);
      goto LAB_00505f33;
    }
    if (local_a0._0_4_ == 3) {
      local_40 = *(undefined8 *)(local_54 + 0x98);
      local_38 = *(undefined4 *)(local_54 + 0xa0);
      local_34 = *(undefined4 *)(local_54 + 0xa4);
      local_a0 = *(double *)(local_54 + 0xa0);
      local_48 = *(double *)(local_54 + 0x90);
      *(uint *)((int)param_1 + 0x60) = *(uint *)((int)param_1 + 0x60) & 0xffffff01 | 1;
      goto LAB_00505e89;
    }
switchD_00505e96_default:
    _DAT_00000000 = 0;
    goto LAB_00505f33;
  }
  FUN_0050a110(puVar5,&local_5c,&local_48);
LAB_00505e89:
  switch(local_90._0_4_) {
  case 0:
    FUN_0050a110(local_94,&local_74,local_28);
    pdVar9 = local_28;
    break;
  case 1:
    FUN_005055c0(param_1,&local_48,local_94,&local_74,pfVar8);
    goto LAB_00505f33;
  case 2:
    FUN_005052d0(param_1,&local_48,local_94,&local_74,pfVar8);
    goto LAB_00505f33;
  case 3:
    pdVar9 = (double *)(local_6c + 0x90);
    break;
  default:
    goto switchD_00505e96_default;
  }
  FUN_005054b0(param_1,&local_48,pdVar9,pfVar8);
LAB_00505f33:
  fVar3 = *(float *)(*(int *)((int)param_1 + 0x10) + 0xa0);
  local_90 = (double)(pfVar8[2] * fVar3 + (float)*(double *)(pfVar8 + 0xc));
  *(double *)(pfVar8 + 0xc) = local_90;
  *(double *)(pfVar8 + 8) = (double)(*pfVar8 * fVar3 + (float)*(double *)(pfVar8 + 8));
  *(double *)(pfVar8 + 10) = (double)(pfVar8[1] * fVar3 + (float)*(double *)(pfVar8 + 10));
  fVar3 = *(float *)((int)param_1 + 0x58) -
          (fVar3 + *(float *)(*(int *)((int)param_1 + 0x24) + 0xa0));
  *(float *)((int)param_1 + 0x58) = fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)((int)param_1 + 0x58) = 0;
  }
  pfVar2 = pfVar8 + 0x20;
  *(int *)(local_54 + 4) = *(int *)(local_54 + 4) + -1;
  *(int *)(local_6c + 4) = *(int *)(local_6c + 4) + -1;
  FUN_004f9780(pfVar2);
  pfVar8[0x24] = pfVar8[1] * pfVar8[0x22] - pfVar8[0x21] * pfVar8[2];
  pfVar8[0x25] = *pfVar2 * pfVar8[2] - *pfVar8 * pfVar8[0x22];
  pfVar8[0x26] = *pfVar8 * pfVar8[0x21] - *pfVar2 * pfVar8[1];
  pbVar10 = *(byte **)(*(int *)((int)param_1 + 0x10) + 0xa4);
  if ((*pbVar10 & 0xc) == 0) {
    fVar11 = (float10)*(double *)(pfVar8 + 8) - (float10)*(double *)(pbVar10 + 0x188);
    fVar12 = (float10)*(double *)(pfVar8 + 10) - (float10)*(double *)(pbVar10 + 400);
    fVar13 = (float10)*(double *)(pfVar8 + 0xc) - (float10)*(double *)(pbVar10 + 0x198);
    pfVar2 = pfVar8 + 0x28;
    *pfVar2 = (float)((float10)*(double *)(pbVar10 + 0x128) * fVar11 +
                     (float10)*(double *)(pbVar10 + 0x168) * fVar13 +
                     (float10)*(double *)(pbVar10 + 0x148) * fVar12);
    pfVar8[0x29] = (float)((float10)*(double *)(pbVar10 + 0x130) * fVar11 +
                          (float10)*(double *)(pbVar10 + 0x170) * fVar13 +
                          (float10)*(double *)(pbVar10 + 0x150) * fVar12);
    pfVar8[0x2a] = (float)((float10)*(double *)(pbVar10 + 0x138) * fVar11 +
                          (float10)*(double *)(pbVar10 + 0x178) * fVar13 +
                          (float10)*(double *)(pbVar10 + 0x158) * fVar12);
    fVar3 = (float)*(double *)(pbVar10 + 0x128) * *pfVar8 +
            pfVar8[1] * (float)*(double *)(pbVar10 + 0x148) +
            (float)*(double *)(pbVar10 + 0x168) * pfVar8[2];
    local_ac = (float)*(double *)(pbVar10 + 0x170) * pfVar8[2] +
               *pfVar8 * (float)*(double *)(pbVar10 + 0x130) +
               (float)*(double *)(pbVar10 + 0x150) * pfVar8[1];
    local_a8 = (float)*(double *)(pbVar10 + 0x178) * pfVar8[2] +
               *pfVar8 * (float)*(double *)(pbVar10 + 0x138) +
               (float)*(double *)(pbVar10 + 0x158) * pfVar8[1];
    local_90 = (double)(local_ac * *pfVar2);
    fVar7 = fVar3 * pfVar8[0x29];
    local_a0 = (double)fVar7;
    pfVar8[0x30] = local_a8 * pfVar8[0x29] - local_ac * pfVar8[0x2a];
    pfVar8[0x31] = fVar3 * pfVar8[0x2a] - local_a8 * *pfVar2;
    pfVar8[0x32] = local_ac * *pfVar2 - fVar7;
    FUN_004f3390(pbVar10,pfVar2,(float *)(pbVar10 + 0xa4),(float *)(pbVar10 + 0x94),&local_84);
    pfVar8[0x1d] = pfVar8[0x30] * *(float *)(pbVar10 + 0x34) * pfVar8[0x30] +
                   pfVar8[0x31] * *(float *)(pbVar10 + 0x38) * pfVar8[0x31] +
                   pfVar8[0x32] * *(float *)(pbVar10 + 0x3c) * pfVar8[0x32] +
                   *(float *)(pbVar10 + 0x40);
  }
  else {
    pbVar10 = (byte *)0x0;
    local_84 = 0.0;
    local_80 = 0.0;
    local_7c = 0.0;
    pfVar8[0x1d] = 0.0;
    pfVar8[0x28] = 0.0;
    pfVar8[0x29] = 0.0;
    pfVar8[0x2a] = 0.0;
    pfVar8[0x30] = 0.0;
    pfVar8[0x31] = 0.0;
    pfVar8[0x32] = 0.0;
  }
  pfVar8[0x1e] = (float)pbVar10;
  pbVar10 = *(byte **)(*(int *)((int)param_1 + 0x24) + 0xa4);
  if ((*pbVar10 & 0xc) == 0) {
    fVar11 = (float10)*(double *)(pfVar8 + 8) - (float10)*(double *)(pbVar10 + 0x188);
    fVar12 = (float10)*(double *)(pfVar8 + 10) - (float10)*(double *)(pbVar10 + 400);
    fVar13 = (float10)*(double *)(pfVar8 + 0xc) - (float10)*(double *)(pbVar10 + 0x198);
    pfVar2 = pfVar8 + 0x2c;
    *pfVar2 = (float)((float10)*(double *)(pbVar10 + 0x148) * fVar12 +
                     (float10)*(double *)(pbVar10 + 0x128) * fVar11 +
                     (float10)*(double *)(pbVar10 + 0x168) * fVar13);
    pfVar8[0x2d] = (float)((float10)*(double *)(pbVar10 + 0x170) * fVar13 +
                          (float10)*(double *)(pbVar10 + 0x150) * fVar12 +
                          (float10)*(double *)(pbVar10 + 0x130) * fVar11);
    pfVar8[0x2e] = (float)((float10)*(double *)(pbVar10 + 0x178) * fVar13 +
                          (float10)*(double *)(pbVar10 + 0x158) * fVar12 +
                          (float10)*(double *)(pbVar10 + 0x138) * fVar11);
    fVar3 = (float)*(double *)(pbVar10 + 0x168) * pfVar8[2] +
            pfVar8[1] * (float)*(double *)(pbVar10 + 0x148) +
            (float)*(double *)(pbVar10 + 0x128) * *pfVar8;
    local_ac = (float)*(double *)(pbVar10 + 0x170) * pfVar8[2] +
               (float)*(double *)(pbVar10 + 0x150) * pfVar8[1] +
               *pfVar8 * (float)*(double *)(pbVar10 + 0x130);
    local_a8 = (float)*(double *)(pbVar10 + 0x178) * pfVar8[2] +
               (float)*(double *)(pbVar10 + 0x158) * pfVar8[1] +
               *pfVar8 * (float)*(double *)(pbVar10 + 0x138);
    local_90 = (double)(local_ac * *pfVar2);
    fVar7 = fVar3 * pfVar8[0x2d];
    local_a0 = (double)fVar7;
    pfVar8[0x34] = local_a8 * pfVar8[0x2d] - local_ac * pfVar8[0x2e];
    pfVar8[0x35] = fVar3 * pfVar8[0x2e] - local_a8 * *pfVar2;
    pfVar8[0x36] = local_ac * *pfVar2 - fVar7;
    FUN_004f3390(pbVar10,pfVar2,(float *)(pbVar10 + 0xa4),(float *)(pbVar10 + 0x94),&local_b0);
    FUN_00506550(&local_84,&local_84,&local_b0);
    pfVar8[0x1d] = *(float *)(pbVar10 + 0x34) * pfVar8[0x34] * pfVar8[0x34] +
                   pfVar8[0x35] * *(float *)(pbVar10 + 0x38) * pfVar8[0x35] +
                   pfVar8[0x36] * *(float *)(pbVar10 + 0x3c) * pfVar8[0x36] +
                   *(float *)(pbVar10 + 0x40) + pfVar8[0x1d];
  }
  else {
    pfVar8[0x2c] = 0.0;
    pfVar8[0x2d] = 0.0;
    pfVar8[0x2e] = 0.0;
    pfVar8[0x34] = 0.0;
    pfVar8[0x35] = 0.0;
    pfVar8[0x36] = 0.0;
    pbVar10 = (byte *)0x0;
  }
  pfVar8[0x1f] = (float)pbVar10;
  pfVar8[0x1c] = 1.0 / pfVar8[0x1d];
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x10) + 0x18);
  fVar11 = (float10)*(double *)(iVar1 + 0x120) - (float10)*(double *)((int)param_1 + 0x68);
  uVar6 = *(undefined4 *)(iVar1 + 0x124);
  *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x120);
  *(undefined4 *)((int)param_1 + 0x6c) = uVar6;
  *(float *)((int)param_1 + 0x38) =
       (float)((float10)*(float *)((int)param_1 + 0x38) -
              ((float10)local_84 * (float10)pfVar8[0x20] +
              (float10)local_80 * (float10)pfVar8[0x21] + (float10)local_7c * (float10)pfVar8[0x22])
              * fVar11);
  *(float *)((int)param_1 + 0x3c) =
       (float)((float10)*(float *)((int)param_1 + 0x3c) -
              ((float10)local_84 * (float10)pfVar8[0x24] +
              (float10)local_80 * (float10)pfVar8[0x25] + (float10)local_7c * (float10)pfVar8[0x26])
              * fVar11);
  return;
}


