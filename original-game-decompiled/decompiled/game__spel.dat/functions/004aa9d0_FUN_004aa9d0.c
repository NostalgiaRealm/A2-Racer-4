
/* ==== FUN_004aa9d0 @ 004aa9d0 ==== 
 * signature: undefined __cdecl FUN_004aa9d0(LPCSTR param_1)
 * body: 004aa9d0-004aa9f9;004aa9fd-004aab30;004aab34-004aab8d;004aab94-004aac1e
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004aa9fa-004aa9fc 004aab31-004aab33 004aab8e-004aab93
 */

void __cdecl FUN_004aa9d0(LPCSTR param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FILE *pFVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pFVar3 = (FILE *)FUN_004c62c0(param_1);
  if (pFVar3 == (FILE *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____File_open_failed_for_fi_005b00b4);
  }
  FUN_00558b35((char *)&param_1,4,1,(int *)pFVar3);
  FUN_004ab200(&DAT_00715eb8,(uint)param_1);
  iStack_44 = 0;
  if (0 < (int)param_1) {
    do {
      FUN_00558b35((char *)&uStack_2c,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_30,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_18,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_14,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_10,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_34,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_40,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_3c,4,1,(int *)pFVar3);
      FUN_00558b35((char *)&uStack_38,4,1,(int *)pFVar3);
      uVar2 = uStack_2c;
      uVar1 = uStack_30;
      uStack_28 = uStack_3c;
      uStack_24 = uStack_40;
      uStack_c = uStack_18;
      uStack_20 = uStack_38;
      uStack_1c = uStack_34;
      uStack_8 = uStack_14;
      uStack_4 = uStack_10;
      iVar5 = DAT_00715ec0;
      if (DAT_00715ec4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
      }
      for (; iVar5 < DAT_00715ebc; iVar5 = iVar5 + 1) {
        if (*(char *)(DAT_00715ec8 + iVar5) == '\0') goto LAB_004aac10;
      }
      iVar5 = 0;
      if (DAT_00715ec0 < 1) {
LAB_004aab6f:
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
      }
      while (*(char *)(DAT_00715ec8 + iVar5) != '\0') {
        iVar5 = iVar5 + 1;
        if (DAT_00715ec0 <= iVar5) goto LAB_004aab6f;
      }
LAB_004aac10:
      *(undefined1 *)(DAT_00715ec8 + iVar5) = 1;
      DAT_00715ec0 = iVar5;
      FUN_004c3fa0((byte *)s_Loaded_type__d_and_trigger___d_o_005b0084);
      puVar4 = (undefined4 *)(iVar5 * 0x50 + DAT_00715eb8);
      *puVar4 = uVar2;
      puVar4[1] = uVar1;
      puVar4[2] = uStack_c;
      puVar4[3] = uStack_8;
      puVar4[4] = uStack_4;
      puVar4[6] = uStack_28;
      puVar4[7] = uStack_24;
      puVar4[8] = uStack_20;
      puVar4[5] = uStack_1c;
      iStack_44 = iStack_44 + 1;
    } while (iStack_44 < (int)param_1);
  }
  FUN_004c6430(pFVar3);
  return;
}


