
/* ==== FUN_004ae570 @ 004ae570 ==== 
 * signature: undefined __thiscall FUN_004ae570(void * this, LPCSTR param_1, LPCSTR param_2)
 * body: 004ae570-004ae5a0;004ae5a4-004ae5e1;004ae5e5-004ae5fd;004ae601-004ae67a;004ae682-004ae6c7;004ae6cb-004ae77a;004ae77e-004ae7cc;004ae7d0-004aeac7
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ae5a1-004ae5a3 004ae5e2-004ae5e4 004ae5fe-004ae600 004ae67b-004ae681 004ae6c8-004ae6ca 004ae77b-004ae77d 004ae7cd-004ae7cf
 */

void __thiscall FUN_004ae570(void *this,LPCSTR param_1,LPCSTR param_2)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  FILE *pFVar5;
  FILE *pFVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((*(int *)((int)this + 0x4c) == -1) || (*(int *)((int)this + 0x50) == -1)) ||
     (*(int *)((int)this + 0x54) == -1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Textures_not_set__Canno_005b0634);
  }
  pFVar5 = (FILE *)FUN_004c62c0(param_1);
  pFVar6 = (FILE *)FUN_004c62c0(param_2);
  if (pFVar5 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____File_open_failed_for_fi_005b00b4);
  }
  if (pFVar6 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d_____s___s_____File_open_fa_005b0600);
  }
  FUN_00558b35((char *)&DAT_00715f54,4,1,(int *)pFVar6);
  if (DAT_00715f54 < 0) {
    FUN_00558b35((char *)&iStack_20,4,1,(int *)pFVar6);
  }
  else {
    iStack_20 = DAT_00715f54;
  }
  FUN_00558b35((char *)&uStack_1c,4,1,(int *)pFVar6);
  FUN_00558b35((char *)&uStack_24,4,1,(int *)pFVar5);
  if (uStack_1c != uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Data_chunk_count_does_n_005b05ac);
  }
  FUN_004c3fa0((byte *)s_m_chunks_alloc__d_005b0598);
  uVar4 = uStack_24;
  piVar1 = (int *)((int)this + 4);
  iVar12 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    FUN_004b1e00(piVar1);
  }
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY_construction__i_005b0024);
  }
  pvVar7 = operator_new(uVar4 * 4);
  *piVar1 = (int)pvVar7;
  *(uint *)((int)this + 8) = uVar4;
  *(undefined4 *)((int)this + 0xc) = 0;
  pvVar7 = operator_new(uVar4);
  *(void **)((int)this + 0x14) = pvVar7;
  FUN_004c3fa0((byte *)s_T_ARRAY___alloc___16_16s___16_16_005af664);
  iVar8 = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  if (0 < (int)uVar4) {
    do {
      iVar8 = iVar8 + 1;
      *(undefined1 *)(*(int *)((int)this + 0x14) + -1 + iVar8) = 0;
    } while (iVar8 < (int)uVar4);
  }
  FUN_004adef0(this,uStack_24 << 4,uStack_24 * 0x18,uStack_24 * 0xc,uStack_24 * 0xc);
  FUN_004ab550(uStack_24);
  if (0 < (int)uStack_24) {
    do {
      if (*(int *)((int)this + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
      }
      iVar8 = *(int *)((int)this + 0xc);
      if (iVar8 < *(int *)((int)this + 8)) {
        iVar10 = *(int *)((int)this + 0x14);
        iVar9 = iVar8;
        do {
          if (*(char *)(iVar10 + iVar9) == '\0') goto LAB_004ae81a;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)((int)this + 8));
      }
      iVar9 = 0;
      if (iVar8 < 1) {
LAB_004ae7b0:
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
      }
      iVar10 = *(int *)((int)this + 0x14);
      while (*(char *)(iVar10 + iVar9) != '\0') {
        iVar9 = iVar9 + 1;
        if (iVar8 <= iVar9) goto LAB_004ae7b0;
      }
LAB_004ae81a:
      *(undefined1 *)(iVar10 + iVar9) = 1;
      *(int *)((int)this + 0xc) = iVar9;
      iVar8 = *piVar1;
      iVar10 = FUN_004ab570((int *)pFVar5,(int *)pFVar6);
      *(int *)(iVar8 + iVar12 * 4) = iVar10;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uStack_24);
  }
  FUN_004415e0();
  iVar12 = 0;
  if (uStack_24 != 1 && -1 < (int)(uStack_24 - 1)) {
    do {
      iVar8 = *piVar1;
      if (iVar12 == 0) {
        iVar10 = *(int *)(iVar8 + -4 + uStack_24 * 4);
      }
      else {
        iVar10 = *(int *)(iVar8 + -4 + iVar12 * 4);
      }
      pfVar3 = (float *)(DAT_00715f00 + 0x34 + iVar10 * 0x994);
      fStack_18 = *pfVar3;
      fStack_14 = pfVar3[1];
      fStack_10 = pfVar3[2];
      iVar10 = *(int *)(iVar8 + 4 + iVar12 * 4);
      iVar8 = DAT_00715f00 + 0x34 + iVar10 * 0x994;
      fStack_c = *(float *)(DAT_00715f00 + 0x34 + iVar10 * 0x994);
      uStack_8 = *(undefined4 *)(iVar8 + 4);
      uStack_4 = *(undefined4 *)(iVar8 + 8);
      FUN_004ad080((void *)(DAT_00715f00 + iVar12 * 0x994),&fStack_18,&fStack_c);
      FUN_004ab8a0(DAT_00715f00 + *(int *)(*piVar1 + iVar12 * 4) * 0x994);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(uStack_24 - 1));
  }
  pvVar7 = (void *)(DAT_00715f00 + iVar12 * 0x994);
  fStack_18 = *(float *)((int)pvVar7 + -0x960);
  fStack_14 = *(float *)((int)pvVar7 + -0x95c);
  fStack_10 = *(float *)((int)pvVar7 + -0x958);
  iVar8 = DAT_00715f00 + 0x34 + *(int *)*piVar1 * 0x994;
  fStack_c = *(float *)(DAT_00715f00 + 0x34 + *(int *)*piVar1 * 0x994);
  uStack_8 = *(undefined4 *)(iVar8 + 4);
  uStack_4 = *(undefined4 *)(iVar8 + 8);
  FUN_004ad080(pvVar7,&fStack_18,&fStack_c);
  FUN_004ab8a0(DAT_00715f00 + *(int *)(*piVar1 + iVar12 * 4) * 0x994);
  puVar11 = (undefined4 *)(DAT_00715f00 + 0x6c + *(int *)(*piVar1 + -4 + iVar12 * 4) * 0x994);
  puVar13 = (undefined4 *)(DAT_00715f00 + 0x6c + *(int *)(*piVar1 + iVar12 * 4) * 0x994);
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(DAT_00715f00 + 0xec + *(int *)(*piVar1 + iVar12 * 4) * 0x994) =
       *(undefined4 *)(DAT_00715f00 + 0xec + *(int *)(*piVar1 + -4 + iVar12 * 4) * 0x994);
  piVar2 = (int *)(*piVar1 + iVar12 * 4);
  puVar11 = (undefined4 *)(DAT_00715f00 + 0x40 + piVar2[-1] * 0x994);
  iVar10 = *piVar2;
  iVar8 = DAT_00715f00 + 0x40 + iVar10 * 0x994;
  *(undefined4 *)(DAT_00715f00 + 0x40 + iVar10 * 0x994) = *puVar11;
  *(undefined4 *)(iVar8 + 4) = puVar11[1];
  *(undefined4 *)(iVar8 + 8) = puVar11[2];
  puVar11 = (undefined4 *)(DAT_00715f00 + 0x4c + *(int *)(*piVar1 + -4 + iVar12 * 4) * 0x994);
  iVar10 = *(int *)(*piVar1 + iVar12 * 4);
  iVar8 = DAT_00715f00 + 0x4c + iVar10 * 0x994;
  *(undefined4 *)(DAT_00715f00 + 0x4c + iVar10 * 0x994) = *puVar11;
  *(undefined4 *)(iVar8 + 4) = puVar11[1];
  *(undefined4 *)(iVar8 + 8) = puVar11[2];
  puVar11 = (undefined4 *)(DAT_00715f00 + 0x58 + *(int *)(*piVar1 + -4 + iVar12 * 4) * 0x994);
  iVar8 = *(int *)(*piVar1 + iVar12 * 4);
  iVar12 = DAT_00715f00 + 0x58 + iVar8 * 0x994;
  *(undefined4 *)(DAT_00715f00 + 0x58 + iVar8 * 0x994) = *puVar11;
  *(undefined4 *)(iVar12 + 4) = puVar11[1];
  *(undefined4 *)(iVar12 + 8) = puVar11[2];
  FUN_004415e0();
  FUN_004c6430(pFVar5);
  FUN_004c6430(pFVar6);
  return;
}


