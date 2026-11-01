
/* ==== FUN_00437370 @ 00437370 ==== 
 * signature: undefined __cdecl FUN_00437370(int param_1)
 * body: 00437370-004373af;004373b3-00437604;00437608-0043763c;00437640-00437683;00437687-00437856
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004373b0-004373b2 00437605-00437607 0043763d-0043763f 00437684-00437686
 */

void __cdecl FUN_00437370(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iStack_e4;
  int iStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float *pfStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  int iStack_84;
  int local_80;
  float fStack_7c;
  float fStack_70;
  float afStack_64 [3];
  undefined1 auStack_58 [12];
  float afStack_4c [3];
  undefined4 auStack_40 [16];
  
  iVar8 = param_1 * 0xf0;
  local_80 = iVar8;
  if (*(int *)(iVar8 + 0xac + DAT_00715e50) < 9) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____object___d__doesn_t_hav_005996b0);
  }
  iStack_84 = FUN_004a8600((void *)(iVar8 + DAT_00715e50),8);
  iStack_84 = iStack_84 * 0xa9;
  if (*(int *)(iStack_84 + DAT_0073b0d0) == 1) {
    iStack_e4 = *(int *)(iStack_84 + 0x99 + DAT_0073b0d0);
  }
  else if (*(int *)(iStack_84 + DAT_0073b0d0) == 2) {
    iStack_e4 = *(int *)(*(int *)(*(int *)(*(int *)(iStack_84 + 4 + DAT_0073b0d0) * 9 + 4 +
                                          DAT_0073b168) + 8) * 0x10 + DAT_0073b120);
  }
  else {
    iStack_e4 = *(int *)(iStack_84 + 0x99 + DAT_0073b0d0);
  }
  iVar5 = FUN_004a8600((void *)(iVar8 + DAT_00715e50),8);
  piVar6 = (int *)(iVar5 * 0xa9 + DAT_0073b0d0);
  if (*piVar6 == 1) {
    iStack_e0 = *(int *)((int)piVar6 + 0x99);
  }
  else if (*piVar6 == 2) {
    iStack_e0 = *(int *)(*(int *)(*(int *)(piVar6[1] * 9 + 4 + DAT_0073b168) + 8) * 0x10 +
                        DAT_0073b120);
  }
  else {
    iStack_e0 = *(int *)((int)piVar6 + 0x99);
  }
  puVar10 = (undefined4 *)(*(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0 + 0x10);
  puVar11 = auStack_40;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar5 = *(int *)(iVar8 + 0x24 + DAT_00715e50) * 0xa9 + DAT_0073b0d0;
  fStack_9c = *(float *)(iVar5 + 0x50);
  fStack_98 = *(float *)(iVar5 + 0x54);
  fStack_94 = *(float *)(iVar5 + 0x58);
  pfVar7 = (float *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
  fStack_a8 = *pfVar7;
  fStack_a4 = pfVar7[1];
  fStack_a0 = pfVar7[2];
  if ((param_1 == DAT_006fba58) || (iStack_e4 != iStack_e0)) {
    iVar5 = 0;
    iVar12 = iStack_e4 * 0xac;
    if (0 < *(int *)(iVar12 + 0x84 + DAT_0073b5c8)) {
      iVar9 = 0;
      iStack_e4 = 0;
      do {
        iVar8 = *(int *)(iVar12 + 0x80 + DAT_0073b5c8);
        fStack_d4 = *(float *)(iVar8 + 8 + iVar9);
        fStack_d8 = *(float *)(iVar8 + 4 + iVar9);
        fStack_dc = *(float *)(iVar8 + iVar9);
        pfVar7 = (float *)FUN_004b42a0(afStack_4c,&fStack_dc,(int)auStack_40);
        fStack_dc = fStack_9c + *pfVar7;
        fStack_d8 = pfVar7[1] + fStack_98;
        piVar6 = (int *)(iVar12 + DAT_0073b5c8);
        fStack_d4 = pfVar7[2] + fStack_94;
        if ((piVar6[1] != 1) && (piVar6[1] != 2)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____vertices_were_not__yet__00597c44);
        }
        if (*piVar6 == 1) {
          if ((iStack_e4 < 0) || (piVar6[0x1f] <= iVar5)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____index__d_is_out_of_VERT_005996e4);
          }
          fStack_b4 = *(float *)(piVar6[0x1e] + 0xc + iVar9);
          iVar8 = piVar6[0x1e] + iVar9;
          fStack_b0 = *(float *)(iVar8 + 0x10);
          fStack_ac = *(float *)(iVar8 + 0x14);
          fStack_90 = fStack_b4;
          fStack_8c = fStack_b0;
          fStack_88 = fStack_ac;
LAB_004376b7:
          pfStack_d0 = &fStack_b4;
        }
        else if (*piVar6 == 2) {
          if ((iStack_e4 < 0) || (piVar6[0x21] <= iVar5)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____index__d_is_out_of_VERT_005996e4);
          }
          pfVar7 = (float *)(piVar6[0x22] + iStack_e4);
          fStack_b4 = *pfVar7;
          fStack_b0 = pfVar7[1];
          fStack_ac = pfVar7[2];
          goto LAB_004376b7;
        }
        pfVar7 = (float *)FUN_004b42a0(afStack_64,pfStack_d0,(int)auStack_40);
        fVar1 = fStack_dc - fStack_a8;
        fVar4 = fStack_d8 - fStack_a4;
        fVar3 = fStack_d4 - fStack_a0;
        fStack_c0 = *pfVar7;
        fStack_bc = pfVar7[1];
        fStack_b8 = pfVar7[2];
        fVar2 = SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3);
        pfVar7 = (float *)FUN_004066c0(auStack_58,fVar1 / fVar2,fVar4 / fVar2,fVar3 / fVar2);
        fStack_cc = *pfVar7;
        fStack_c8 = pfVar7[1];
        fStack_c4 = pfVar7[2];
        fVar1 = fStack_cc * fStack_c0 + fStack_c8 * fStack_bc + fStack_c4 * fStack_b8;
        fVar1 = fVar1 + fVar1;
        fStack_7c = fStack_c0 * fVar1;
        fStack_70 = fStack_cc - fStack_7c;
        *(float *)(*(int *)(iVar12 + 0x80 + DAT_0073b5c8) + 0x18 + iVar9) = fStack_70 * 0.5 + 0.5;
        iVar5 = iVar5 + 1;
        iStack_e4 = iStack_e4 + 0xc;
        iVar9 = iVar9 + 0x20;
        *(float *)(*(int *)(iVar12 + 0x80 + DAT_0073b5c8) + -4 + iVar9) =
             (fStack_c4 - fVar1 * fStack_b8) * 0.5 + 0.5;
        iVar8 = local_80;
      } while (iVar5 < *(int *)(iVar12 + 0x84 + DAT_0073b5c8));
    }
  }
  FUN_004b5770(iStack_84 + DAT_0073b0d0);
  if ((DAT_006fb940 == 0) || (DAT_006fb8d0 == 0)) {
    iVar8 = FUN_004a8600((void *)(DAT_00715e50 + iVar8),8);
    *(undefined1 *)(DAT_0073b0d0 + iVar8 * 0xa9 + 0x90) = 0;
  }
  return;
}


