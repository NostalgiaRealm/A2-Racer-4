
/* ==== FUN_0040ab70 @ 0040ab70 ==== 
 * signature: undefined __cdecl FUN_0040ab70(int param_1)
 * body: 0040ab70-0040ac51;0040ac55-0040aef1;0040aef5-0040b01a;0040b01e-0040b2c0;0040b2c4-0040b32b;0040b32f-0040b353
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040ac52-0040ac54 0040aef2-0040aef4 0040b01b-0040b01d 0040b2c1-0040b2c3 0040b32c-0040b32e
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040ab70(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  int local_18c;
  float local_188 [78];
  undefined4 local_50;
  undefined4 local_4c [19];
  
  local_188[1] = (float)(param_1 * 0x994);
  local_188[0] = *(float *)((int)local_188[1] + 0xf4 + DAT_00715f00);
  if (0 < (int)local_188[0]) {
    local_18c = (int)local_188[1] + 0x134;
    do {
      iVar6 = *(int *)(local_18c + DAT_00715f00) * 0x50;
      pfVar9 = (float *)&DAT_0073b538;
      pfVar11 = local_188 + 0x42;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar11 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar11 = pfVar11 + 1;
      }
      puVar10 = (undefined4 *)(iVar6 + 8 + DAT_00715eb8);
      local_198 = *puVar10;
      local_50 = local_198;
      local_194 = puVar10[1];
      local_4c[0] = local_194;
      local_190 = puVar10[2];
      local_4c[1] = local_190;
      pfVar9 = local_188 + 0x42;
      pfVar11 = (float *)&DAT_0073b474;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar11 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar11 = pfVar11 + 1;
      }
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
      }
      iVar7 = 0;
      iVar5 = *(int *)(iVar6 + 0x14 + DAT_00715eb8);
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        local_18c = *piVar1;
        iVar7 = 2;
        local_188[1] = (float)piVar1[2];
        local_188[3] = -NAN;
        local_188[0] = (float)piVar1[1] + 5.0;
        puVar10 = (undefined4 *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        local_188[7] = (float)*puVar10;
        local_188[8] = (float)puVar10[1] + 5.0;
        local_188[9] = (float)puVar10[2];
        local_188[0xb] = -NAN;
      }
      iVar5 = *(int *)(iVar6 + 0x18 + DAT_00715eb8);
      iVar8 = iVar7;
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        pfVar9 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar8 = iVar7 + 2;
        (&local_18c)[iVar7 * 8] = *piVar1;
        local_188[iVar7 * 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 1] = fVar3;
        local_188[iVar7 * 8 + 3] = -NAN;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        local_188[iVar7 * 8 + 7] = *pfVar9;
        local_188[iVar7 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 9] = fVar3;
        local_188[iVar7 * 8 + 0xb] = -NAN;
      }
      iVar5 = *(int *)(iVar6 + 0x1c + DAT_00715eb8);
      iVar7 = iVar8;
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        pfVar9 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar7 = iVar8 + 2;
        (&local_18c)[iVar8 * 8] = *piVar1;
        local_188[iVar8 * 8] = fVar2 + 5.0;
        local_188[iVar8 * 8 + 1] = fVar3;
        local_188[iVar8 * 8 + 3] = -NAN;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        local_188[iVar8 * 8 + 7] = *pfVar9;
        local_188[iVar8 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar8 * 8 + 9] = fVar3;
        local_188[iVar8 * 8 + 0xb] = -NAN;
      }
      iVar5 = *(int *)(iVar6 + 0x20 + DAT_00715eb8);
      iVar8 = iVar7;
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        pfVar9 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar8 = iVar7 + 2;
        (&local_18c)[iVar7 * 8] = *piVar1;
        local_188[iVar7 * 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 1] = fVar3;
        local_188[iVar7 * 8 + 3] = -NAN;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        local_188[iVar7 * 8 + 7] = *pfVar9;
        local_188[iVar7 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 9] = fVar3;
        local_188[iVar7 * 8 + 0xb] = -NAN;
      }
      puVar10 = &DAT_0073b538;
      puVar12 = local_4c;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar10 = local_4c;
      puVar12 = &DAT_0073b474;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
      }
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,&local_198,iVar8,1);
      if (iVar5 != 0) {
        FUN_004c3f80(0,1);
        FUN_004bb290(iVar5);
        FUN_004c3fa0((byte *)s__s__d____D3DError_DrawPrimitive___00590d8c);
        FUN_004c3f80(0,0);
      }
      local_18c = local_18c + 4;
      local_188[0] = (float)((int)local_188[0] + -1);
    } while (local_188[0] != 0.0);
  }
  local_188[0] = *(float *)((int)local_188[1] + 0xf8 + DAT_00715f00);
  if (0 < (int)local_188[0]) {
    local_18c = (int)local_188[1] + 0x164;
    do {
      iVar6 = *(int *)(local_18c + DAT_00715f00) * 0x50;
      pfVar9 = (float *)&DAT_0073b538;
      pfVar11 = local_188 + 0x42;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar11 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar11 = pfVar11 + 1;
      }
      puVar10 = (undefined4 *)(iVar6 + 8 + DAT_00715eb8);
      local_198 = *puVar10;
      local_50 = local_198;
      local_194 = puVar10[1];
      local_4c[0] = local_194;
      local_190 = puVar10[2];
      local_4c[1] = local_190;
      pfVar9 = local_188 + 0x42;
      pfVar11 = (float *)&DAT_0073b474;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar11 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        pfVar11 = pfVar11 + 1;
      }
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
      }
      iVar7 = 0;
      iVar5 = *(int *)(iVar6 + 0x14 + DAT_00715eb8);
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        local_18c = *piVar1;
        iVar7 = 2;
        local_188[1] = (float)piVar1[2];
        local_188[3] = 2.3418052e-38;
        local_188[0] = (float)piVar1[1] + 5.0;
        puVar10 = (undefined4 *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        local_188[7] = (float)*puVar10;
        local_188[8] = (float)puVar10[1] + 5.0;
        local_188[9] = (float)puVar10[2];
        local_188[0xb] = 2.3418052e-38;
      }
      iVar5 = *(int *)(iVar6 + 0x18 + DAT_00715eb8);
      iVar8 = iVar7;
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        pfVar9 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar8 = iVar7 + 2;
        (&local_18c)[iVar7 * 8] = *piVar1;
        local_188[iVar7 * 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 1] = fVar3;
        local_188[iVar7 * 8 + 3] = 2.3418052e-38;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        local_188[iVar7 * 8 + 7] = *pfVar9;
        local_188[iVar7 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 9] = fVar3;
        local_188[iVar7 * 8 + 0xb] = 2.3418052e-38;
      }
      iVar5 = *(int *)(iVar6 + 0x1c + DAT_00715eb8);
      iVar7 = iVar8;
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        pfVar9 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar7 = iVar8 + 2;
        (&local_18c)[iVar8 * 8] = *piVar1;
        local_188[iVar8 * 8] = fVar2 + 5.0;
        local_188[iVar8 * 8 + 1] = fVar3;
        local_188[iVar8 * 8 + 3] = 2.3418052e-38;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        local_188[iVar8 * 8 + 7] = *pfVar9;
        local_188[iVar8 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar8 * 8 + 9] = fVar3;
        local_188[iVar8 * 8 + 0xb] = 2.3418052e-38;
      }
      iVar5 = *(int *)(iVar6 + 0x20 + DAT_00715eb8);
      iVar8 = iVar7;
      if (iVar5 != -1) {
        piVar1 = (int *)(iVar6 + 8 + DAT_00715eb8);
        pfVar9 = (float *)(iVar5 * 0x50 + 8 + DAT_00715eb8);
        fVar2 = (float)piVar1[1];
        fVar3 = (float)piVar1[2];
        iVar8 = iVar7 + 2;
        (&local_18c)[iVar7 * 8] = *piVar1;
        local_188[iVar7 * 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 1] = fVar3;
        local_188[iVar7 * 8 + 3] = 2.3418052e-38;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        local_188[iVar7 * 8 + 7] = *pfVar9;
        local_188[iVar7 * 8 + 8] = fVar2 + 5.0;
        local_188[iVar7 * 8 + 9] = fVar3;
        local_188[iVar7 * 8 + 0xb] = 2.3418052e-38;
      }
      puVar10 = &DAT_0073b538;
      puVar12 = local_4c;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar10 = local_4c;
      puVar12 = &DAT_0073b474;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
      }
      iVar5 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
      *(undefined4 *)(iVar5 + 0x60) = 0;
      uVar4 = *DAT_0073b1b0;
      *(undefined4 *)(iVar5 + 0x58) = 1;
      *(undefined4 *)(iVar5 + 0x48) = uVar4;
      if (*(int *)(iVar5 + 0x5c) == 1) {
        *(undefined4 *)(iVar5 + 0x58) = 0;
        (**(code **)(**(int **)(iVar5 + 0x54) + 0xc))(*(int **)(iVar5 + 0x54),iVar5);
      }
      iVar5 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,&local_198,iVar8,1);
      if (iVar5 != 0) {
        FUN_004bb290(iVar5);
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____D3DError_DrawPrimitive___00590dd8);
      }
      local_18c = local_18c + 4;
      local_188[0] = (float)((int)local_188[0] + -1);
    } while (local_188[0] != 0.0);
  }
  return;
}


