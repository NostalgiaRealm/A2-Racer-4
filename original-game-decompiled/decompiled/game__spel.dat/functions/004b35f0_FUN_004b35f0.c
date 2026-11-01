
/* ==== FUN_004b35f0 @ 004b35f0 ==== 
 * signature: undefined __cdecl FUN_004b35f0(LPCSTR param_1)
 * body: 004b35f0-004b3619;004b361d-004b370c;004b3710-004b376a;004b3771-004b3826
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b361a-004b361c 004b370d-004b370f 004b376b-004b3770
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004b35f0(LPCSTR param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  int iStack_40;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  pFVar1 = (FILE *)FUN_004c62c0(param_1);
  if (pFVar1 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____File_open_failed_for_fi_005b00b4);
  }
  FUN_00558b35((char *)&param_1,4,1,(int *)pFVar1);
  FUN_004b3850(&DAT_0073b088,(uint)param_1);
  iStack_40 = 0;
  if (0 < (int)param_1) {
    do {
      FUN_00558b35((char *)&uStack_24,4,1,(int *)pFVar1);
      FUN_00558b35((char *)&uStack_20,4,1,(int *)pFVar1);
      FUN_00558b35((char *)&uStack_1c,4,1,(int *)pFVar1);
      FUN_00558b35((char *)&fStack_30,4,1,(int *)pFVar1);
      FUN_00558b35((char *)&uStack_2c,4,1,(int *)pFVar1);
      FUN_00558b35((char *)&fStack_28,4,1,(int *)pFVar1);
      uStack_18 = uStack_24;
      uStack_14 = uStack_20;
      uStack_10 = uStack_1c;
      iVar2 = DAT_0073b090;
      if (DAT_0073b094 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
      }
      for (; iVar2 < DAT_0073b08c; iVar2 = iVar2 + 1) {
        if (*(char *)(DAT_0073b098 + iVar2) == '\0') goto LAB_004b3819;
      }
      iVar2 = 0;
      if (DAT_0073b090 < 1) {
LAB_004b374c:
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
      }
      while (*(char *)(DAT_0073b098 + iVar2) != '\0') {
        iVar2 = iVar2 + 1;
        if (DAT_0073b090 <= iVar2) goto LAB_004b374c;
      }
LAB_004b3819:
      *(undefined1 *)(DAT_0073b098 + iVar2) = 1;
      puVar3 = (undefined4 *)(iVar2 * 0x60 + DAT_0073b088);
      DAT_0073b090 = iVar2;
      *puVar3 = uStack_24;
      puVar3[1] = uStack_20;
      puVar3[2] = uStack_1c;
      puVar3[3] = fStack_30;
      puVar3[4] = uStack_2c;
      puVar3[5] = fStack_28;
      puVar3[0x17] = (float)SQRT((float10)fStack_30 * (float10)fStack_30 +
                                 (float10)fStack_28 * (float10)fStack_28);
      fVar4 = SQRT((float10)fStack_30 * (float10)fStack_30 + (float10)fStack_28 * (float10)fStack_28
                  );
      fStack_c = (float)((float10)fStack_30 / fVar4);
      fVar4 = (float10)fpatan((float10)fStack_28 / fVar4,(float10)fStack_c);
      puVar3[6] = (float)(((fVar4 - (float10)3.1415927 * (float10)0.5) * (float10)_DAT_005b23b8) /
                         (float10)6.2831855);
      iStack_40 = iStack_40 + 1;
    } while (iStack_40 < (int)param_1);
  }
  FUN_004c6430(pFVar1);
  return;
}


