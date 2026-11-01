
/* ==== FUN_004beb10 @ 004beb10 ==== 
 * signature: undefined __fastcall FUN_004beb10(int * param_1)
 * body: 004beb10-004bec0d;004bec11-004bec52;004bec56-004bec94;004bec98-004becc0;004becc4-004becdd;004bece1-004bed05;004bed09-004bed3e;004bed42-004bed5b;004bed5f-004bed87;004bed8b-004bedbd;004bedc1-004bedda;004bedde-004bee06;004bee0a-004bee5d;004bee61-004bee7a;004bee7e-004beea6;004beeaa-004beedf;004beee3-004beefc;004bef00-004bef28;004bef2c-004bef5e;004bef62-004bef7b;004bef7f-004befa7;004befab-004beffe;004bf002-004bf01b;004bf01f-004bf047;004bf04b-004bf080;004bf084-004bf09d;004bf0a1-004bf0c9;004bf0cd-004bf416
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bec0e-004bec10 004bec53-004bec55 004bec95-004bec97 004becc1-004becc3 004becde-004bece0 004bed06-004bed08 004bed3f-004bed41 004bed5c-004bed5e 004bed88-004bed8a 004bedbe-004bedc0 004beddb-004beddd 004bee07-004bee09 004bee5e-004bee60 004bee7b-004bee7d 004beea7-004beea9 004beee0-004beee2 004beefd-004beeff 004bef29-004bef2b 004bef5f-004bef61 004bef7c-004bef7e 004befa8-004befaa 004befff-004bf001 004bf01c-004bf01e 004bf048-004bf04a 004bf081-004bf083 004bf09e-004bf0a0 004bf0ca-004bf0cc
 */

void __fastcall FUN_004beb10(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float10 fVar12;
  int local_20c;
  int *local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  int *local_1f4;
  int local_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float afStack_18c [3];
  float local_180 [3];
  undefined1 auStack_174 [12];
  float afStack_168 [3];
  float afStack_15c [3];
  float afStack_150 [3];
  float afStack_144 [3];
  float afStack_138 [3];
  undefined1 auStack_12c [12];
  undefined4 auStack_120 [8];
  undefined4 auStack_100 [8];
  undefined4 auStack_e0 [8];
  float afStack_c0 [8];
  undefined4 auStack_a0 [8];
  float afStack_80 [8];
  undefined4 auStack_60 [8];
  undefined4 auStack_40 [8];
  undefined4 auStack_20 [8];
  
  if ((param_1[0x22] != 0) && (param_1[0x23] == param_1[0x21])) {
    local_1f4 = operator_new(param_1[0x23] << 2);
    iVar2 = 0;
    if (0 < param_1[0x23]) {
      local_200 = 0.0;
      local_1fc = 0.0;
      local_1f8 = 0.0;
      iVar3 = 0;
      do {
        puVar10 = (undefined4 *)(iVar3 + param_1[0x22]);
        iVar2 = iVar2 + 1;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < param_1[0x23]);
    }
    iVar2 = 0;
    piVar6 = local_1f4;
    if (0 < param_1[0x23]) {
      do {
        *piVar6 = 0;
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar2 < param_1[0x23]);
    }
    if (0 < param_1[0x25]) {
      local_208 = (int *)0x2;
      local_20c = 4;
      do {
        FUN_004bf8c0((int)param_1);
        if (((int)local_208 + -2 < 0) || (param_1[0x25] <= (int)local_208 + -2)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____getting_index____d___is_005b24cc);
        }
        iVar2 = (int)*(short *)(param_1[0x24] + -4 + local_20c);
        local_1f0 = iVar2;
        FUN_004bf8c0((int)param_1);
        if (((int)local_208 + -1 < 0) || (param_1[0x25] <= (int)local_208 + -1)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____getting_index____d___is_005b24cc);
        }
        iVar3 = (int)*(short *)(param_1[0x24] + -2 + local_20c);
        FUN_004bf8c0((int)param_1);
        if (((int)local_208 < 0) || (param_1[0x25] <= (int)local_208)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____getting_index____d___is_005b24cc);
        }
        iVar4 = (int)*(short *)(param_1[0x24] + local_20c);
        if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((iVar2 < 0) || (param_1[0x21] <= iVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        iVar8 = *param_1;
        iVar2 = iVar2 * 0x20;
        puVar10 = (undefined4 *)(iVar2 + param_1[0x20]);
        puVar9 = auStack_120;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        if (iVar8 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((local_1f0 < 0) || (param_1[0x21] <= local_1f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        iVar8 = *param_1;
        puVar10 = (undefined4 *)(iVar2 + param_1[0x20]);
        puVar9 = auStack_60;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        if (iVar8 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((local_1f0 < 0) || (param_1[0x21] <= local_1f0)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        iVar8 = *param_1;
        pfVar5 = (float *)(iVar2 + param_1[0x20]);
        pfVar11 = afStack_80;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar11 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar11 = pfVar11 + 1;
        }
        fStack_1ec = afStack_80[0];
        uStack_1e8 = auStack_60[1];
        uStack_1e4 = auStack_120[2];
        if (iVar8 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((iVar3 < 0) || (param_1[0x21] <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        iVar2 = *param_1;
        iVar7 = iVar3 * 0x20;
        puVar10 = (undefined4 *)(iVar7 + param_1[0x20]);
        puVar9 = auStack_100;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((iVar3 < 0) || (param_1[0x21] <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        iVar2 = *param_1;
        puVar10 = (undefined4 *)(iVar7 + param_1[0x20]);
        puVar9 = auStack_40;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((iVar3 < 0) || (param_1[0x21] <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        iVar2 = *param_1;
        pfVar5 = (float *)(iVar7 + param_1[0x20]);
        pfVar11 = afStack_c0;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *pfVar11 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          pfVar11 = pfVar11 + 1;
        }
        fStack_1e0 = afStack_c0[0];
        uStack_1dc = auStack_40[1];
        uStack_1d8 = auStack_100[2];
        if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((iVar4 < 0) || (param_1[0x21] <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        iVar2 = *param_1;
        puVar10 = (undefined4 *)(iVar4 * 0x20 + param_1[0x20]);
        puVar9 = auStack_a0;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____mesh_is_not_of_requeste_00597c74);
        }
        if (param_1[1] != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if ((iVar4 < 0) || (param_1[0x21] <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____index__d_is_out_of_LVER_00597c0c);
        }
        puVar10 = (undefined4 *)(iVar4 * 0x20 + param_1[0x20]);
        puVar9 = auStack_e0;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        pfVar5 = (float *)FUN_004bfc00(param_1,auStack_20,iVar4);
        fStack_1d4 = *pfVar5;
        uStack_1d0 = auStack_e0[1];
        uStack_1cc = auStack_a0[2];
        pfVar5 = (float *)FUN_004bf480(afStack_138,&fStack_1e0,&fStack_1ec);
        fStack_1c8 = *pfVar5;
        fStack_1c4 = pfVar5[1];
        fStack_1c0 = pfVar5[2];
        pfVar5 = (float *)FUN_004bf480(afStack_15c,&fStack_1d4,&fStack_1ec);
        fStack_1bc = *pfVar5;
        fStack_1b8 = pfVar5[1];
        fStack_1b4 = pfVar5[2];
        puVar10 = (undefined4 *)FUN_004bf480(afStack_144,&fStack_1e0,&fStack_1d4);
        uStack_1b0 = *puVar10;
        uStack_1ac = puVar10[1];
        uStack_1a8 = puVar10[2];
        pfVar5 = (float *)FUN_004066c0(auStack_174,0,0,0);
        iVar2 = FUN_004bf4d0(&fStack_1c8,pfVar5);
        if (iVar2 == 0) {
          fVar12 = (float10)FUN_0041e120();
          pfVar5 = (float *)FUN_00467320(afStack_150,&fStack_1c8,(float)SQRT(fVar12));
          fStack_198 = *pfVar5;
          fStack_194 = pfVar5[1];
          fStack_190 = pfVar5[2];
          fVar12 = (float10)FUN_0041e120();
          pfVar5 = (float *)FUN_00467320(afStack_168,&fStack_1bc,(float)SQRT(fVar12));
          fStack_1a4 = *pfVar5;
          fStack_1a0 = pfVar5[1];
          fStack_19c = pfVar5[2];
          pfVar5 = (float *)FUN_004bf510(afStack_18c,&fStack_1a4,&fStack_198);
          fVar12 = (float10)FUN_0041e120();
          pfVar5 = (float *)FUN_00467320(local_180,pfVar5,(float)SQRT(fVar12));
        }
        else {
          pfVar5 = (float *)FUN_004066c0(auStack_12c,0,0x3f800000,0);
        }
        iVar2 = local_1f0;
        local_200 = *pfVar5;
        local_1fc = pfVar5[1];
        local_1f8 = pfVar5[2];
        FUN_004bf420((void *)(param_1[0x22] + local_1f0 * 0xc),&local_200);
        piVar6 = local_1f4;
        local_1f4[iVar2] = local_1f4[iVar2] + 1;
        FUN_004bf420((void *)(param_1[0x22] + iVar3 * 0xc),&local_200);
        piVar6[iVar3] = piVar6[iVar3] + 1;
        FUN_004bf420((void *)(param_1[0x22] + iVar4 * 0xc),&local_200);
        piVar6[iVar4] = piVar6[iVar4] + 1;
        iVar2 = (int)local_208 + 1;
        local_20c = local_20c + 6;
        local_208 = (int *)((int)local_208 + 3);
      } while (iVar2 < param_1[0x25]);
    }
    iVar2 = 0;
    if (0 < param_1[0x23]) {
      iVar3 = 0;
      local_208 = local_1f4;
      do {
        if (*local_208 != 0) {
          fVar1 = (float)*local_208;
          pfVar5 = (float *)FUN_004066c0(local_180,fVar1,fVar1,fVar1);
          FUN_004bf450((void *)(iVar3 + param_1[0x22]),pfVar5);
          iVar4 = param_1[0x22];
          fVar12 = (float10)FUN_0041e120();
          puVar10 = (undefined4 *)
                    FUN_00467320(afStack_18c,(float *)(iVar3 + iVar4),(float)SQRT(fVar12));
          puVar9 = (undefined4 *)(iVar3 + param_1[0x22]);
          *puVar9 = *puVar10;
          puVar9[1] = puVar10[1];
          puVar9[2] = puVar10[2];
        }
        iVar2 = iVar2 + 1;
        local_208 = local_208 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < param_1[0x23]);
    }
    FUN_0054b339(local_1f4);
  }
  return;
}


