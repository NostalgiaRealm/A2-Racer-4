
/* ==== FUN_0042fd40 @ 0042fd40 ==== 
 * signature: undefined4 __fastcall FUN_0042fd40(int * param_1)
 * body: 0042fd40-004304d9
 */

undefined4 __fastcall FUN_0042fd40(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  longlong lVar11;
  float local_2c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  if ((char)param_1[10] == '\0') {
    pfVar6 = (float *)(*param_1 * 0xf0 + 0xbc + DAT_00715e50);
    fVar10 = FUN_004a6800(0x7128b0);
    fVar10 = fVar10 * (float10)*(float *)(*param_1 * 0xf0 + 0xbc + DAT_00715e50);
    *pfVar6 = (float)((float10)*pfVar6 - (fVar10 + fVar10));
    pfVar6 = (float *)(*param_1 * 0xf0 + 0xc4 + DAT_00715e50);
    fVar10 = FUN_004a6800(0x7128b0);
    *pfVar6 = (float)((float10)*pfVar6 -
                     fVar10 * (float10)*(float *)(*param_1 * 0xf0 + 0xc4 + DAT_00715e50));
    pfVar6 = (float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50);
    fVar10 = FUN_004a6800(0x7128b0);
    *pfVar6 = (float)((float10)*pfVar6 -
                     fVar10 * (float10)*(float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50) *
                     (float10)5.0);
    if ((float)param_1[0xb] <= 2.0) {
      fVar10 = FUN_004a6800(0x7128b0);
      param_1[0xb] = (int)(float)(fVar10 + (float10)(float)param_1[0xb]);
    }
    else {
      FUN_004304e0(param_1,param_1[1]);
      *(uint *)(*param_1 * 0xf0 + 0x1c + DAT_00715e50) =
           *(uint *)(*param_1 * 0xf0 + 0x1c + DAT_00715e50) | 8;
      param_1[0xb] = 0;
    }
  }
  else {
    pfVar6 = (float *)FUN_004b42a0(&local_18,(float *)(param_1 + 7),
                                   DAT_0073b0d0 +
                                   *(int *)(*param_1 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    fVar3 = *pfVar6;
    fVar4 = pfVar6[2];
    iVar7 = *(int *)(*param_1 * 0xf0 + 0x24 + DAT_00715e50);
    fVar1 = *(float *)(iVar7 + DAT_0073b0d0 + 0x50 + iVar7 * 0xa8);
    fVar2 = *(float *)(iVar7 + DAT_0073b0d0 + iVar7 * 0xa8 + 0x58);
    pfVar6 = (float *)FUN_004b42a0(local_c,(float *)(param_1 + 4),
                                   DAT_0073b0d0 +
                                   *(int *)(param_1[1] * 0xf0 + 0x24 + DAT_00715e50) * 0xa9 + 0x10);
    iVar5 = *(int *)(param_1[1] * 0xf0 + 0x24 + DAT_00715e50);
    iVar7 = DAT_0073b0d0 + iVar5;
    fVar1 = (fVar3 + fVar1) - (*pfVar6 + *(float *)(iVar7 + 0x50 + iVar5 * 0xa8));
    fVar2 = (fVar4 + fVar2) - (pfVar6[2] + *(float *)(iVar7 + 0x58 + iVar5 * 0xa8));
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
    iVar8 = *param_1 * 0xf0;
    iVar9 = DAT_0073b0d0 + *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9;
    local_18 = *(float *)(iVar9 + 0x74);
    local_14 = *(float *)(iVar9 + 0x78);
    local_10 = *(float *)(iVar9 + 0x7c);
    local_2c = local_14 - *(float *)(iVar7 + iVar5 * 0xa8 + 0x78);
    if (local_2c < -2048.0) {
      local_2c = local_2c + 4096.0;
    }
    if (2048.0 < local_2c) {
      local_2c = local_2c - 4096.0;
    }
    if (15.0 < fVar1) {
      if (25.0 < fVar1) {
        *(undefined1 *)(param_1 + 10) = 0;
        *(uint *)(iVar8 + 0x1c + DAT_00715e50) = *(uint *)(iVar8 + 0x1c + DAT_00715e50) | 8;
        pfVar6 = (float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50);
        if (2.0 < *(float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50)) {
          *pfVar6 = 2.0;
          return 0;
        }
        if (-2.0 <= *pfVar6) {
          return 0;
        }
        *pfVar6 = -2.0;
        return 0;
      }
      *(uint *)(iVar8 + 0x1c + DAT_00715e50) = *(uint *)(iVar8 + 0x1c + DAT_00715e50) | 8;
    }
    if (1024.0 < ABS(local_2c)) {
      if (0.0 <= *(float *)(param_1[1] * 0xf0 + 0xc4 + DAT_00715e50)) {
        if (1024.0 < local_2c) {
          pfVar6 = (float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = FUN_004a6800(0x7128b0);
          *pfVar6 = (float)((float10)*pfVar6 -
                           ((float10)local_2c - (float10)1024.0) * fVar10 * (float10)0.05);
        }
        if (local_2c < -1024.0) {
          pfVar6 = (float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = FUN_004a6800(0x7128b0);
          *pfVar6 = (float)(ABS((float10)local_2c + (float10)1024.0) * fVar10 *
                            (float10)0.05000000074505806 + (float10)*pfVar6);
        }
      }
      else {
        if (1024.0 < local_2c) {
          pfVar6 = (float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = FUN_004a6800(0x7128b0);
          *pfVar6 = (float)((float10)*pfVar6 -
                           ((float10)local_2c - (float10)1024.0) * fVar10 * (float10)0.5);
        }
        if (local_2c < -1024.0) {
          pfVar6 = (float *)(*param_1 * 0xf0 + 0xcc + DAT_00715e50);
          fVar10 = FUN_004a6800(0x7128b0);
          *pfVar6 = (float)(ABS((float10)local_2c + (float10)1024.0) * fVar10 * (float10)0.5 +
                           (float10)*pfVar6);
        }
        local_18 = 0.0;
        local_14 = 0.0;
        iVar7 = param_1[1] * 0xf0 + DAT_00715e50;
        local_10 = -(*(float *)(iVar7 + 0xc4) * 2000.0);
        FUN_004a97f0(iVar7);
      }
    }
    iVar7 = *param_1 * 0xf0 + DAT_00715e50;
    if ((1.0 < ABS(*(float *)(*param_1 * 0xf0 + 0xc4 + DAT_00715e50))) &&
       (param_1[1] == DAT_006fba58)) {
      fVar1 = 1.0 / *(float *)(iVar7 + 0xb0);
      iVar5 = param_1[1] * 0xf0 + DAT_00715e50;
      if (*(float *)(iVar5 + 0xc4) < 0.0) {
        iVar7 = FUN_004308d0(param_1,local_c);
        fVar2 = *(float *)(iVar7 + 8);
        lVar11 = __ftol();
        local_14 = 0.0;
        local_18 = -(*(float *)(DAT_0073b530 + ((uint)lVar11 & DAT_005b23bc) * 4) * fVar1 * -0.49);
        local_10 = -fVar2;
        FUN_004a97f0(param_1[1] * 0xf0 + DAT_00715e50);
        FUN_004307f0(param_1);
        goto LAB_0043049d;
      }
      iVar7 = *(int *)(iVar7 + 0x24) * 0xa9 + DAT_0073b0d0;
      local_18 = *(float *)(iVar7 + 0x74);
      local_14 = *(float *)(iVar7 + 0x78);
      local_10 = *(float *)(iVar7 + 0x7c);
      lVar11 = __ftol();
      iVar7 = ((uint)lVar11 & DAT_005b23bc) * 4;
      local_14 = 0.0;
      local_18 = -(*(float *)(iVar7 + DAT_0073b530) * fVar1 * -0.98);
      local_10 = -(*(float *)(iVar7 + DAT_0073b578) * fVar1 * 1.96);
      FUN_004a97f0(iVar5);
    }
    FUN_004307f0(param_1);
  }
LAB_0043049d:
  if ((*(byte *)(*param_1 * 0xf0 + 0x1c + DAT_00715e50) & 4) == 0) {
    FUN_00430860(param_1);
  }
  FUN_00435410(*param_1,1);
  FUN_00430ea0(param_1);
  return 0;
}


