
/* ==== FUN_004a2590 @ 004a2590 ==== 
 * signature: undefined __thiscall FUN_004a2590(void * this, undefined4 * param_1, float * param_2)
 * body: 004a2590-004a2cae
 */

void __thiscall FUN_004a2590(void *this,undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  float unaff_EBX;
  float unaff_EBP;
  float unaff_ESI;
  char *pcVar18;
  char *pcVar19;
  short *psVar20;
  int *piVar21;
  float10 fVar22;
  float *local_38c;
  int local_388;
  float *local_384;
  int local_380;
  undefined1 local_36c [4];
  char *local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  int local_358;
  undefined4 local_354;
  undefined4 local_350;
  float local_34c [8];
  float fStack_32c;
  float local_31c [12];
  short local_2ec [12];
  undefined4 local_2d4;
  int local_2d0 [10];
  float local_2a8 [10];
  float local_280 [10];
  int local_258 [10];
  undefined4 uStack_230;
  float fStack_22c;
  undefined4 uStack_224;
  float local_218 [38];
  float local_180 [10];
  int local_158 [10];
  int local_130 [10];
  int local_108 [21];
  undefined4 auStack_b4 [5];
  float afStack_a0 [5];
  undefined4 local_8c [16];
  float local_4c [8];
  void *pvStack_2c;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056eea2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004a14f0(this,param_1,param_2);
  local_384 = (float *)(param_1 + 0x8a);
  local_38c = (float *)((int)this + 0x44);
  local_388 = 0;
  do {
    puVar7 = (undefined4 *)FUN_004a1e20(this,local_4c);
    puVar11 = local_8c;
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar11 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar11 = puVar11 + 1;
    }
    pfVar8 = (float *)FUN_004a5b30(&local_35c,local_384,(int)local_8c);
    fVar4 = pfVar8[1];
    fVar5 = pfVar8[2];
    fVar1 = param_2[1];
    *(float *)((int)local_31c + local_388) = *pfVar8 + *param_2;
    fVar2 = param_2[2];
    *(float *)((int)local_31c + local_388 + 4) = fVar4 + fVar1;
    *(float *)((int)local_31c + local_388 + 8) = fVar5 + fVar2;
    *local_38c = *local_384;
    local_38c[1] = local_384[1];
    local_38c[2] = local_384[2];
    *(float *)((int)local_34c + local_388) = *local_384;
    *(float *)((int)local_34c + local_388 + 4) = local_384[1];
    *(float *)((int)local_34c + local_388 + 8) = local_384[2];
    FUN_004a4180((float *)((int)local_34c + local_388));
    local_388 = local_388 + 0xc;
    local_38c = local_38c + 3;
    local_384 = local_384 + 3;
  } while (local_388 < 0x30);
  local_38c = local_31c;
  local_384 = (float *)((int)this + 0x34);
  local_388 = 0;
  do {
    if (local_388 < 2) {
      uVar14 = 0xffffffff;
      local_358 = 0;
      pcVar18 = s_RealObject_005af178;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar3 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar3 != '\0');
      local_354 = 0;
      local_350 = 0;
      FUN_00402940(&local_35c,(undefined4 *)s_RealObject_005af178,~uVar14 - 1);
      local_4 = 0;
      piVar9 = FUN_004a4400(*(void **)((int)this + 0x2c),(int)&local_35c,param_1 + 0x2e,local_38c);
      local_4 = 0xffffffff;
      *local_384 = (float)piVar9;
      if (local_358 != 0) {
        cVar3 = *(char *)(local_358 + -1);
        if ((cVar3 != '\0') && (cVar3 != -1)) {
          *(char *)(local_358 + -1) = cVar3 + -1;
          local_358 = 0;
          local_354 = 0;
          local_350 = 0;
          goto LAB_004a285b;
        }
        FUN_0054b339((char *)(local_358 + -1));
      }
      local_358 = 0;
      local_354 = 0;
      local_350 = 0;
    }
    else {
      uVar14 = 0xffffffff;
      pcVar18 = s_RealObject_005af178;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar3 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      } while (cVar3 != '\0');
      uVar14 = ~uVar14 - 1;
      local_368 = (char *)0x0;
      local_364 = 0;
      local_360 = 0;
      uVar10 = FUN_00402a00(local_36c,uVar14,'\x01');
      if ((char)uVar10 != '\0') {
        pcVar18 = s_RealObject_005af178;
        pcVar19 = local_368;
        for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar18;
          pcVar18 = pcVar18 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
          *pcVar19 = *pcVar18;
          pcVar18 = pcVar18 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_004029e0(local_36c,uVar14);
      }
      local_4 = 1;
      piVar9 = FUN_004a4400(*(void **)((int)this + 0x2c),(int)local_36c,param_1 + 0x5c,local_38c);
      local_4 = 0xffffffff;
      *local_384 = (float)piVar9;
      if (local_368 != (char *)0x0) {
        cVar3 = local_368[-1];
        if ((cVar3 == '\0') || (cVar3 == -1)) {
          FUN_0054b339(local_368 + -1);
        }
        else {
          local_368[-1] = cVar3 + -1;
        }
      }
      local_368 = (char *)0x0;
      local_364 = 0;
      local_360 = 0;
    }
LAB_004a285b:
    local_388 = local_388 + 1;
    local_384 = local_384 + 1;
    local_38c = local_38c + 3;
  } while (local_388 < 4);
  iVar13 = 0;
  psVar20 = local_2ec;
  for (iVar16 = 0x98; iVar16 != 0; iVar16 = iVar16 + -1) {
    psVar20[0] = 0;
    psVar20[1] = 0;
    psVar20 = psVar20 + 2;
  }
  local_2ec[0] = 4;
  local_2ec[1] = 0;
  local_2ec[2] = 2;
  local_2ec[3] = 0;
  piVar9 = local_258;
  do {
    *piVar9 = 0x3f800000;
    iVar13 = iVar13 + 1;
    piVar9 = piVar9 + 1;
  } while (iVar13 < 4);
  local_2ec[8] = 2;
  local_2ec[9] = 0;
  local_2d4 = *(undefined4 *)((int)this + 8);
  pfVar8 = local_34c + 1;
  pfVar17 = local_218;
  local_384 = (float *)((int)this + 0x34);
  local_2ec[4] = 0;
  local_2ec[5] = 0;
  local_2ec[10] = 0;
  local_2ec[0xb] = 0;
  local_2ec[6] = 1;
  local_2ec[7] = 0;
  local_380 = 4;
  piVar9 = param_1 + 0xa8;
  piVar21 = local_2d0;
  do {
    fVar1 = pfVar8[1];
    fVar2 = *pfVar8;
    fVar4 = pfVar8[-1];
    *piVar21 = *(int *)((int)*local_384 + 8);
    piVar21[0x1e] = 0x3f800000;
    pfVar17[-1] = fVar2;
    pfVar17[-2] = fVar4;
    *pfVar17 = fVar1;
    fVar22 = (float10)(**(code **)**(undefined4 **)(*piVar21 + 0x98))();
    piVar21[10] = (int)(float)fVar22;
    fVar1 = *(float *)(*(int *)(*piVar21 + 0xa4) + 4);
    piVar21[0x14] = (int)fVar1;
    *(float *)((int)this + 0x74) = fVar1 + *(float *)((int)this + 0x74);
    iVar13 = *piVar9;
    iVar16 = piVar9[4];
    piVar21[0x54] = piVar9[-4];
    iVar6 = piVar9[8];
    piVar21[0x5e] = iVar13;
    piVar21[0x68] = iVar16;
    piVar21[0x72] = iVar6;
    local_384 = local_384 + 1;
    pfVar8 = pfVar8 + 3;
    pfVar17 = pfVar17 + 4;
    local_380 = local_380 + -1;
    piVar9 = piVar9 + 1;
    piVar21 = piVar21 + 1;
  } while (local_380 != 0);
  puVar7 = param_1 + 0xb4;
  pfVar8 = local_280;
  iVar13 = 2;
  *(float *)((int)this + 0x74) = *(float *)((int)this + 0x74) * 0.25;
  fVar1 = (float)param_1[0xbf];
  puVar11 = auStack_b4;
  do {
    fVar2 = *pfVar8;
    uVar10 = *puVar7;
    pfVar8 = pfVar8 + 2;
    puVar7 = puVar7 + 1;
    iVar13 = iVar13 + -1;
    puVar11[5] = (fVar1 * 0.2777778) / fVar2;
    *puVar11 = uVar10;
    puVar11 = puVar11 + 1;
  } while (iVar13 != 0);
  uStack_230 = param_1[0x97];
  uStack_224 = param_1[0x99];
  iVar13 = *(int *)(*(int *)((int)this + 0x2c) + 0x14);
  fStack_22c = (float)param_1[0x9a] * (float)*(double *)(param_1 + 6) *
               (float)*(double *)(iVar13 + 0xd8);
  if (*(char *)(param_1 + 0x96) == '\0') {
    pvVar12 = operator_new(0x140);
    local_4 = 3;
    if (pvVar12 != (void *)0x0) {
      piVar9 = FUN_004fc4f0(pvVar12,*(undefined4 *)(*(int *)((int)this + 0x2c) + 0x14),
                            (undefined4 *)local_2ec);
      goto LAB_004a2ac5;
    }
  }
  else {
    pvVar12 = operator_new(0x65c);
    local_4 = 2;
    if (pvVar12 != (void *)0x0) {
      piVar9 = FUN_004a5e70(pvVar12,*(int *)(*(int *)((int)this + 0x2c) + 0x14),local_2ec);
      goto LAB_004a2ac5;
    }
  }
  piVar9 = (int *)0x0;
LAB_004a2ac5:
  *(int **)((int)this + 0x30) = piVar9;
  local_4 = 0xffffffff;
  fStack_32c = (float)param_1[0x29] + fStack_32c;
  fVar1 = (((float)*(double *)(iVar13 + 0xd8) / local_180[0]) * -fStack_32c * 0.5) /
          (fStack_32c - (local_34c[2] + (float)param_1[0x29]));
  (**(code **)(*piVar9 + 0x18))(0,fVar1);
  (**(code **)(**(int **)((int)this + 0x30) + 0x18))(1,fVar1);
  fVar1 = (unaff_EBP * unaff_EBX * 0.5) / unaff_ESI;
  (**(code **)(**(int **)((int)this + 0x30) + 0x18))(2,fVar1);
  (**(code **)(**(int **)((int)this + 0x30) + 0x18))(3,fVar1);
  *(undefined4 *)((int)this + 0x78) = param_1[0xb6];
  *(undefined4 *)((int)this + 0x7c) = param_1[0xb7];
  *(undefined4 *)((int)this + 0x80) = param_1[0xb8];
  *(undefined4 *)((int)this + 0x84) = param_1[0xb9];
  *(undefined4 *)((int)this + 0x88) = param_1[0xba];
  *(undefined4 *)((int)this + 0x8c) = param_1[0xbb];
  *(undefined4 *)((int)this + 0x90) = param_1[0xbc];
  *(undefined4 *)((int)this + 0x94) = param_1[0xbd];
  *(undefined4 *)((int)this + 0x98) = param_1[0xbe];
  *(undefined4 *)((int)this + 0x9c) = param_1[0xbf];
  *(undefined4 *)((int)this + 0xa0) = param_1[0xc0];
  *(undefined4 *)((int)this + 0xa4) = param_1[0xc2];
  *(undefined4 *)((int)this + 0xa8) = param_1[0xc3];
  *(undefined4 *)((int)this + 0xac) = param_1[0xc4];
  *(undefined4 *)((int)this + 0xb0) = param_1[0xc5];
  *(undefined4 *)((int)this + 0xb4) = param_1[0xc6];
  *(undefined4 *)((int)this + 0xc0) = param_1[0xc1];
  *(undefined4 *)((int)this + 0xc4) = param_1[200];
  *(undefined4 *)((int)this + 200) = param_1[0xc9];
  *(undefined4 *)((int)this + 0xcc) = param_1[0xca];
  *(undefined4 *)((int)this + 0xd0) = param_1[0xcb];
  *(undefined4 *)((int)this + 0xd4) = param_1[0xcc];
  *(undefined4 *)((int)this + 0xd8) = param_1[0xcd];
  *(undefined4 *)((int)this + 0xdc) = param_1[0xce];
  *(undefined4 *)((int)this + 0xe0) = param_1[0xcf];
  ExceptionList = pvStack_2c;
  return;
}


