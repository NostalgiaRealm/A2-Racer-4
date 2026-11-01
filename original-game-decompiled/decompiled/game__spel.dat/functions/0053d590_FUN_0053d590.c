
/* ==== FUN_0053d590 @ 0053d590 ==== 
 * signature: float10 __thiscall FUN_0053d590(int param_1, double * param_2)
 * body: 0053d590-0053dc90
 */

float10 __thiscall FUN_0053d590(int param_1,double *param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_360;
  float local_35c;
  double local_350;
  double local_348;
  double local_340;
  undefined8 local_338;
  float local_330;
  float local_32c;
  float local_328;
  float local_320;
  float local_31c;
  float local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2c8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  double local_2b0;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  undefined1 local_298 [116];
  undefined1 local_224 [48];
  undefined1 local_1f4 [52];
  double local_1c0;
  double local_1b8;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_160;
  float local_15c;
  undefined1 local_150 [164];
  undefined1 local_ac [52];
  double local_78 [14];
  
  pfVar1 = *(float **)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x44) * (float)*param_2;
  local_340 = (double)fVar2;
  if (fVar2 < 1e-06) {
    return (float10)0.0;
  }
  FUN_00402d00(local_224,0x10,3,FUN_0043e110);
  FUN_00402d00(local_1f4,0x10,3,FUN_0043e110);
  FUN_00402d00(&local_1c0,0x20,3,FUN_0043e110);
  fVar2 = pfVar1[0x1e];
  fVar9 = pfVar1[0x1f];
  local_348 = (double)CONCAT44(local_348._4_4_,fVar9);
  if (((fVar2 != 0.0) && (iVar3 = *(int *)((int)fVar2 + 0x10), iVar3 != 0)) && (fVar9 == 0.0)) {
    iVar4 = *(int *)(iVar3 + 4);
    local_350 = (double)CONCAT44(local_350._4_4_,iVar4);
    iVar5 = *(int *)(iVar4 + 0x80);
    local_2a8 = (float)*(double *)(iVar3 + 8 + iVar5 * 8);
    local_2a4 = (float)*(double *)(iVar3 + 0x28 + iVar5 * 8);
    local_2a0 = (float)*(double *)(iVar3 + 0x48 + iVar5 * 8);
    FUN_004fae60((void *)(*(int *)(**(int **)(iVar4 + 0x98) + 0xa4) + 0x128),&local_2a8,&local_2c0);
    FUN_004f9a10(&local_330,&local_2c0,pfVar1);
    if (0.001 <= local_32c * local_32c + local_328 * local_328 + local_330 * local_330) {
      FUN_004f9780(&local_330);
      FUN_004f9a10(&local_320,&local_330,pfVar1);
      fVar9 = local_330 * pfVar1[0x20] + local_32c * pfVar1[0x21] + local_328 * pfVar1[0x22];
      local_2f0 = (double)fVar9;
      fVar6 = local_320 * pfVar1[0x20] + local_31c * pfVar1[0x21] + local_318 * pfVar1[0x22];
      local_2f8 = (double)fVar6;
      fVar7 = local_330 * pfVar1[0x24] + local_32c * pfVar1[0x25] + local_328 * pfVar1[0x26];
      local_308 = (double)fVar7;
      fVar8 = local_320 * pfVar1[0x24] + local_31c * pfVar1[0x25] + local_318 * pfVar1[0x26];
      local_300 = (double)fVar8;
      local_310 = (double)(*(float *)(param_1 + 0x38) * fVar9 + *(float *)(param_1 + 0x3c) * fVar7);
      local_2c8 = (double)(*(float *)(param_1 + 0x38) * fVar6 + *(float *)(param_1 + 0x3c) * fVar8);
      FUN_00543430(local_298,(int)fVar2,0,(double *)(pfVar1 + 8),&local_330,(int)&local_320,0);
      local_348 = (double)local_15c;
      local_338 = (double)CONCAT44(uStack_194,local_198);
      FUN_00402d00(local_ac,0x10,3,FUN_0043e110);
      FUN_00402d00(local_78,0x20,3,FUN_0043e110);
      FUN_00543430(local_150,*(int *)(**(int **)(local_350._0_4_ + 0x98) + 0xa4),0,
                   (double *)(pfVar1 + 8),&local_320,0,0);
      fVar10 = (float10)local_310 * (float10)param_2[1] - (float10)local_160;
      fVar11 = (float10)local_2c8 * (float10)param_2[1] - (float10)local_348;
      fVar12 = (float10)local_1c0 * (float10)(double)CONCAT44(uStack_194,local_198) -
               (float10)local_1b8 * (float10)local_1b8;
      if (fVar12 * fVar12 < (float10)1e-38) goto LAB_0053dc7c;
      fVar12 = (float10)1.0 / fVar12;
      local_2e8 = (double)((float10)(double)CONCAT44(uStack_194,local_198) * fVar12);
      local_2e0 = (double)-((float10)local_1b8 * fVar12);
      local_2d8 = (double)-((float10)local_1b8 * fVar12);
      local_360 = (float)((float10)local_2e8 * fVar10 + (float10)local_2e0 * fVar11);
      local_35c = (float)((float10)local_2d8 * fVar10 + fVar12 * (float10)local_1c0 * fVar11);
      fVar9 = ((ABS(local_2bc * local_31c + local_2b8 * local_318 + local_2c0 * local_320) *
               (float)local_338) / (float)local_78[0] + 1.0) * 0.3;
      local_350 = (double)fVar9;
      fVar10 = (float10)local_360 * (float10)local_360;
      local_2b0 = (double)fVar10;
      fVar11 = (float10)local_35c * (float10)local_35c;
      if (*(int *)(*(int *)((int)fVar2 + 0x10) + 0x88) == 0) {
        fVar12 = fVar11 * (float10)fVar9 * (float10)fVar9 + fVar10;
        local_338 = (double)fVar12;
        local_348 = local_340 * local_340;
        if (fVar12 <= (float10)local_348) {
          local_35c = local_35c * fVar9;
        }
        else {
          if (fVar11 + fVar10 <= (float10)local_348) {
            fVar10 = SQRT((float10)local_348 - (float10)local_2b0);
            if (local_35c <= 0.0) {
              fVar10 = -fVar10;
            }
            *(float *)(param_1 + 0x38) =
                 (float)((float10)local_310 * (float10)local_2f0 +
                        (float10)local_2c8 * (float10)0.949999988079071 * (float10)local_2f8);
            *(float *)(param_1 + 0x3c) =
                 (float)((float10)local_310 * (float10)local_308 +
                        (float10)local_2c8 * (float10)0.949999988079071 * (float10)local_300);
          }
          else {
            fVar11 = FUN_004f9200((float)(fVar11 + fVar10));
            fVar11 = fVar11 * (float10)local_340;
            local_360 = (float)((float10)local_360 * fVar11);
            fVar10 = (float10)local_35c * fVar11;
            *(float *)(param_1 + 0x38) = (float)((float10)*(float *)(param_1 + 0x38) * fVar11);
            *(float *)(param_1 + 0x3c) = (float)((float10)*(float *)(param_1 + 0x3c) * fVar11);
          }
          local_35c = (float)fVar10;
          local_338 = local_348;
        }
      }
      else {
        fVar10 = (fVar11 + fVar10) * (float10)fVar9 * (float10)fVar9;
        local_338 = (double)fVar10;
        if (fVar10 <= (float10)local_340 * (float10)local_340) {
          local_360 = local_360 * fVar9 * 0.5;
          local_35c = local_35c * fVar9 * 0.5;
        }
        else {
          fVar10 = FUN_004f9200((float)fVar10);
          fVar10 = fVar10 * (float10)local_350 * (float10)local_340;
          local_360 = (float)((float10)local_360 * fVar10);
          local_35c = (float)((float10)local_35c * fVar10);
          *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * 0.9;
          *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * 0.9;
        }
      }
      FUN_00543550(local_298,(int)fVar2,0,&local_360);
      goto LAB_0053dc33;
    }
    fVar9 = local_348._0_4_;
  }
  FUN_00543430(local_298,(int)fVar2,(int)fVar9,(double *)(pfVar1 + 8),pfVar1 + 0x20,
               (int)(pfVar1 + 0x24),0);
  fVar10 = (float10)*(float *)(param_1 + 0x38) * (float10)param_2[1] - (float10)local_160;
  fVar11 = (float10)*(float *)(param_1 + 0x3c) * (float10)param_2[1] - (float10)local_15c;
  fVar12 = (float10)local_1c0 * (float10)(double)CONCAT44(uStack_194,local_198) -
           (float10)local_1b8 * (float10)local_1b8;
  if (fVar12 * fVar12 < (float10)1e-38) {
LAB_0053dc7c:
    return (float10)0.0;
  }
  fVar12 = (float10)1.0 / fVar12;
  local_2e8 = (double)((float10)(double)CONCAT44(uStack_194,local_198) * fVar12);
  local_2e0 = (double)-((float10)local_1b8 * fVar12);
  local_2d8 = (double)-((float10)local_1b8 * fVar12);
  local_360 = (float)((float10)local_2e8 * fVar10 + (float10)local_2e0 * fVar11);
  local_35c = (float)((float10)local_2d8 * fVar10 + fVar12 * (float10)local_1c0 * fVar11);
  fVar10 = (float10)local_360 * (float10)local_360 + (float10)local_35c * (float10)local_35c;
  local_338 = (double)fVar10;
  if ((float10)local_340 * (float10)local_340 < fVar10) {
    fVar10 = FUN_004f9200((float)fVar10);
    local_360 = (float)((float10)local_360 * fVar10 * (float10)local_340);
    local_35c = (float)((float10)local_35c * fVar10 * (float10)local_340);
  }
  FUN_00543550(local_298,(int)fVar2,(int)local_348._0_4_,&local_360);
LAB_0053dc33:
  fVar10 = SQRT((float10)*param_2 * (float10)*param_2 * (float10)local_338 *
                ((float10)*(float *)(param_1 + 0x3c) * (float10)*(float *)(param_1 + 0x3c) +
                (float10)*(float *)(param_1 + 0x38) * (float10)*(float *)(param_1 + 0x38))) *
           (float10)0.5;
  fVar2 = *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x50) = (float)fVar10;
  return (float10)(float)(fVar10 - (float10)fVar2);
}


