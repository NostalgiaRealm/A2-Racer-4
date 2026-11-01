
/* ==== FUN_004ac310 @ 004ac310 ==== 
 * signature: undefined __thiscall FUN_004ac310(void * this, float * param_1, int * param_2, float * param_3, float * param_4, int * param_5, int param_6, int * param_7, int param_8)
 * body: 004ac310-004ad074
 */

void __thiscall
FUN_004ac310(void *this,float *param_1,int *param_2,float *param_3,float *param_4,int *param_5,
            int param_6,int *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  float *local_68;
  float *local_64;
  float *local_60;
  int *local_5c;
  undefined4 local_30 [4];
  undefined4 local_20 [8];
  
  local_5c = param_2;
  uVar9 = FUN_004ae030((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x10) = uVar9;
  if (0 < (int)param_2) {
    local_68 = (float *)((int)this + 0x314);
    param_2 = (int *)param_1;
    local_64 = (float *)((int)this + 0x19c);
    do {
      puVar16 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar17 = iVar10;
      do {
        puVar18 = (undefined4 *)(DAT_0073b040 + iVar17);
        puVar19 = local_20;
        for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        uVar9 = FUN_004ae2d0(DAT_00715f50,local_20);
        *puVar16 = uVar9;
        iVar17 = iVar17 + 0x20;
        puVar16 = puVar16 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = local_68;
      local_68 = local_68 + 2;
      pfVar15 = local_64 + 6;
      local_60 = (float *)0x2;
      do {
        iVar17 = FUN_004ae040(DAT_00715f50,(short)local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)]
                              ,(short)local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              (short)local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar17 = iVar17 + -3;
        pfVar11 = (float *)FUN_004ae2a0(DAT_00715f50,iVar17,1);
        pfVar12 = (float *)FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        iVar14 = FUN_004ae2a0(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar5 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae2a0(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar6 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae2a0(DAT_00715f50,iVar17,2);
        pfVar12 = (float *)FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        iVar14 = FUN_004ae2a0(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar7 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae2a0(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar8 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = local_64 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        local_64[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *local_64 = fVar1;
        fVar2 = SQRT(local_64[-1] * local_64[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        local_64[-1] = local_64[-1] / fVar2;
        *local_64 = fVar1 / fVar2;
        iVar14 = FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar1 = *(float *)(iVar14 + 8);
        fVar2 = *local_64;
        iVar14 = FUN_004ae2a0(DAT_00715f50,iVar17,0);
        fVar3 = *(float *)(iVar14 + 4);
        fVar4 = local_64[-1];
        pfVar12 = (float *)FUN_004ae2a0(DAT_00715f50,iVar17,0);
        local_64 = local_64 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        local_60 = (float *)((int)local_60 + -1);
      } while (local_60 != (float *)0x0);
      param_2 = param_2 + 1;
      local_5c = (int *)((int)local_5c + -1);
      local_64 = pfVar15;
    } while (local_5c != (int *)0x0);
  }
  uVar9 = FUN_004ae030((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x14) = uVar9;
  uVar9 = FUN_004ae090((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x18) = uVar9;
  FUN_004c3fa0((byte *)s_Start__d_005b04dc);
  if (0 < (int)param_4) {
    param_2 = (int *)param_3;
    local_60 = param_4;
    param_3 = (float *)((int)this + 0x39c);
    param_4 = (float *)((int)this + 0x5d4);
    do {
      puVar16 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar17 = iVar10;
      do {
        puVar18 = (undefined4 *)(DAT_0073b040 + iVar17);
        puVar19 = local_20;
        for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        uVar9 = FUN_004ae220(DAT_00715f50,local_20);
        *puVar16 = uVar9;
        iVar17 = iVar17 + 0x20;
        puVar16 = puVar16 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = param_4;
      param_4 = param_4 + 2;
      pfVar15 = param_3 + 6;
      local_5c = (int *)0x2;
      do {
        iVar17 = FUN_004ae0a0(DAT_00715f50,(short)local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)]
                              ,(short)local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              (short)local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar17 = iVar17 + -3;
        pfVar11 = (float *)FUN_004ae1f0(DAT_00715f50,iVar17,1);
        pfVar12 = (float *)FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        iVar14 = FUN_004ae1f0(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar5 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae1f0(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar6 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae1f0(DAT_00715f50,iVar17,2);
        pfVar12 = (float *)FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        iVar14 = FUN_004ae1f0(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar7 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae1f0(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar8 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = param_3 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        param_3[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *param_3 = fVar1;
        fVar2 = SQRT(param_3[-1] * param_3[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        param_3[-1] = param_3[-1] / fVar2;
        *param_3 = fVar1 / fVar2;
        iVar14 = FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar1 = *(float *)(iVar14 + 4);
        fVar2 = param_3[-1];
        iVar14 = FUN_004ae1f0(DAT_00715f50,iVar17,0);
        fVar3 = *(float *)(iVar14 + 8);
        fVar4 = *param_3;
        pfVar12 = (float *)FUN_004ae1f0(DAT_00715f50,iVar17,0);
        param_3 = param_3 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        local_5c = (int *)((int)local_5c + -1);
      } while (local_5c != (int *)0x0);
      param_2 = param_2 + 1;
      local_60 = (float *)((int)local_60 + -1);
      param_3 = pfVar15;
    } while (local_60 != (float *)0x0);
  }
  uVar9 = FUN_004ae090((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x1c) = uVar9;
  FUN_004c3fa0((byte *)s_End__d_005b04d4);
  uVar9 = FUN_004ae110((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x20) = uVar9;
  if (0 < param_8) {
    param_4 = (float *)((int)this + 0x7b4);
    param_2 = param_7;
    param_7 = (int *)param_8;
    param_3 = (float *)((int)this + 0x69c);
    do {
      puVar16 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar17 = iVar10;
      do {
        puVar18 = (undefined4 *)(DAT_0073b040 + iVar17);
        puVar19 = local_20;
        for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        uVar9 = FUN_004ae370(DAT_00715f50,local_20);
        *puVar16 = uVar9;
        iVar17 = iVar17 + 0x20;
        puVar16 = puVar16 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = param_4;
      param_4 = param_4 + 2;
      pfVar15 = param_3 + 6;
      param_8 = 2;
      do {
        iVar17 = FUN_004ae120(DAT_00715f50,(short)local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)]
                              ,(short)local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              (short)local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar17 = iVar17 + -3;
        pfVar11 = (float *)FUN_004ae340(DAT_00715f50,iVar17,1);
        pfVar12 = (float *)FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        iVar14 = FUN_004ae340(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar5 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae340(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar6 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae340(DAT_00715f50,iVar17,2);
        pfVar12 = (float *)FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        iVar14 = FUN_004ae340(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar7 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae340(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar8 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = param_3 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        param_3[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *param_3 = fVar1;
        fVar2 = SQRT(param_3[-1] * param_3[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        param_3[-1] = param_3[-1] / fVar2;
        *param_3 = fVar1 / fVar2;
        iVar14 = FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar1 = *(float *)(iVar14 + 8);
        fVar2 = *param_3;
        iVar14 = FUN_004ae340(DAT_00715f50,iVar17,0);
        fVar3 = *(float *)(iVar14 + 4);
        fVar4 = param_3[-1];
        pfVar12 = (float *)FUN_004ae340(DAT_00715f50,iVar17,0);
        param_3 = param_3 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
      param_2 = param_2 + 1;
      param_7 = (int *)((int)param_7 + -1);
      param_3 = pfVar15;
    } while (param_7 != (int *)0x0);
  }
  uVar9 = FUN_004ae110((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x24) = uVar9;
  uVar9 = FUN_004ae170((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x28) = uVar9;
  if (0 < param_6) {
    param_4 = (float *)((int)this + 0x934);
    param_2 = param_5;
    param_7 = (int *)param_6;
    param_3 = (float *)((int)this + 0x81c);
    do {
      puVar16 = local_30;
      param_1 = (float *)0x4;
      iVar10 = *param_2 * 0x8c;
      iVar17 = iVar10;
      do {
        puVar18 = (undefined4 *)(DAT_0073b040 + iVar17);
        puVar19 = local_20;
        for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar19 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        }
        uVar9 = FUN_004ae410(DAT_00715f50,local_20);
        *puVar16 = uVar9;
        iVar17 = iVar17 + 0x20;
        puVar16 = puVar16 + 1;
        param_1 = (float *)((int)param_1 + -1);
      } while (param_1 != (float *)0x0);
      param_1 = param_4;
      param_4 = param_4 + 2;
      pfVar15 = param_3 + 6;
      param_8 = 2;
      do {
        iVar17 = FUN_004ae180(DAT_00715f50,(short)local_30[*(short *)(DAT_0073b040 + 0x80 + iVar10)]
                              ,(short)local_30[*(short *)(DAT_0073b040 + 0x82 + iVar10)],
                              (short)local_30[*(short *)(DAT_0073b040 + 0x84 + iVar10)]);
        iVar17 = iVar17 + -3;
        pfVar11 = (float *)FUN_004ae3e0(DAT_00715f50,iVar17,1);
        pfVar12 = (float *)FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar1 = *pfVar11;
        fVar2 = *pfVar12;
        iVar14 = FUN_004ae3e0(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar5 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae3e0(DAT_00715f50,iVar17,1);
        iVar13 = FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar6 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = (float *)FUN_004ae3e0(DAT_00715f50,iVar17,2);
        pfVar12 = (float *)FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar3 = *pfVar11;
        fVar4 = *pfVar12;
        iVar14 = FUN_004ae3e0(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar7 = *(float *)(iVar14 + 4) - *(float *)(iVar13 + 4);
        iVar14 = FUN_004ae3e0(DAT_00715f50,iVar17,2);
        iVar13 = FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar8 = *(float *)(iVar14 + 8) - *(float *)(iVar13 + 8);
        pfVar11 = param_3 + -2;
        *pfVar11 = fVar8 * fVar5 - fVar7 * fVar6;
        param_3[-1] = (fVar3 - fVar4) * fVar6 - fVar8 * (fVar1 - fVar2);
        fVar1 = fVar7 * (fVar1 - fVar2) - (fVar3 - fVar4) * fVar5;
        *param_3 = fVar1;
        fVar2 = SQRT(param_3[-1] * param_3[-1] + *pfVar11 * *pfVar11 + fVar1 * fVar1);
        *pfVar11 = *pfVar11 / fVar2;
        param_3[-1] = param_3[-1] / fVar2;
        *param_3 = fVar1 / fVar2;
        iVar14 = FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar1 = *(float *)(iVar14 + 4);
        fVar2 = param_3[-1];
        iVar14 = FUN_004ae3e0(DAT_00715f50,iVar17,0);
        fVar3 = *(float *)(iVar14 + 8);
        fVar4 = *param_3;
        pfVar12 = (float *)FUN_004ae3e0(DAT_00715f50,iVar17,0);
        param_3 = param_3 + 3;
        iVar10 = iVar10 + 6;
        *param_1 = *pfVar12 * *pfVar11 + fVar3 * fVar4 + fVar1 * fVar2;
        param_1 = param_1 + 1;
        param_8 = param_8 + -1;
      } while (param_8 != 0);
      param_2 = param_2 + 1;
      param_7 = (int *)((int)param_7 + -1);
      param_3 = pfVar15;
    } while (param_7 != (int *)0x0);
  }
  uVar9 = FUN_004ae170((int)DAT_00715f50);
  *(undefined4 *)((int)this + 0x2c) = uVar9;
  return;
}


