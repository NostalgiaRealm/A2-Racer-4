
/* ==== FUN_004c2e40 @ 004c2e40 ==== 
 * signature: undefined4 __stdcall FUN_004c2e40(undefined4 * param_1, char * param_2, char * param_3, undefined4 * param_4, undefined4 * param_5, int * param_6)
 * body: 004c2e40-004c2eb7;004c2ebb-004c2f05;004c2f12-004c2f58;004c2f5c-004c2f81;004c2f85-004c2fa6;004c2faa-004c2feb;004c2fef-004c3014;004c3018-004c3039;004c303d-004c307b;004c307f-004c30a4;004c30a8-004c30c9;004c30cd-004c3118;004c311c-004c3141;004c3145-004c3166;004c316a-004c31e1
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c2eb8-004c2eba 004c2f06-004c2f11 004c2f59-004c2f5b 004c2f82-004c2f84 004c2fa7-004c2fa9 004c2fec-004c2fee 004c3015-004c3017 004c303a-004c303c 004c307c-004c307e 004c30a5-004c30a7 004c30ca-004c30cc 004c3119-004c311b 004c3142-004c3144 004c3167-004c3169
 */

undefined4
FUN_004c2e40(undefined4 *param_1,char *param_2,char *param_3,undefined4 *param_4,undefined4 *param_5
            ,int *param_6)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  FUN_004c3fa0((byte *)s_D3DDevice_Name___<_s>_005b33d8);
  FUN_004c3fa0((byte *)s_D3DDevice_Desc___<_s>_005b33c0);
  FUN_004c3fa0((byte *)s_D3DDevice_GUID____d_005b33a8);
  if (param_6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  iVar2 = param_6[2];
  if (iVar2 < param_6[1]) {
    iVar1 = param_6[4];
    iVar4 = iVar2;
    do {
      if (*(char *)(iVar1 + iVar4) == '\0') goto LAB_004c2f12;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_6[1]);
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar1 = param_6[4];
    do {
      if (*(char *)(iVar1 + iVar4) == '\0') {
LAB_004c2f12:
        *(undefined1 *)(iVar1 + iVar4) = 1;
        param_6[2] = iVar4;
        if (iVar4 == -1) {
          return 0;
        }
        if (*(int *)((int)param_6 + 0x46) != 0) {
          if (param_6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
          }
          if ((iVar4 < 0) || (param_6[1] <= iVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
          }
          if (*(char *)(param_6[4] + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
          }
          *(int *)(*param_6 + 0x1d0 + iVar4 * 0x1d8) = *(int *)((int)param_6 + 0x46);
          iVar2 = *(int *)((int)param_6 + 0x46);
          if (param_6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
          }
          if ((iVar2 < 0) || (param_6[1] <= iVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
          }
          if (*(char *)(param_6[4] + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
          }
          *(int *)(*param_6 + 0x1cc + iVar2 * 0x1d8) = iVar4;
        }
        if (param_6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((iVar4 < 0) || (param_6[1] <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(param_6[4] + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        FUN_004c1ae0((void *)(iVar4 * 0x1d8 + 0x1ac + *param_6),param_3);
        if (param_6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____T_ARRAY______s__d__of_t_005b1008);
        }
        if ((-1 < iVar4) && (iVar4 < param_6[1])) {
          if (*(char *)(param_6[4] + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
          }
          FUN_004c1ae0((void *)(iVar4 * 0x1d8 + 0x1bc + *param_6),param_2);
          iVar2 = FUN_004c3590(param_6,iVar4);
          *(undefined4 *)(iVar2 + 0x19c) = *param_1;
          *(undefined4 *)(iVar2 + 0x1a0) = param_1[1];
          *(undefined4 *)(iVar2 + 0x1a4) = param_1[2];
          *(undefined4 *)(iVar2 + 0x1a8) = param_1[3];
          pvVar3 = (void *)FUN_004c3590(param_6,iVar4);
          FUN_004c0ff0(pvVar3,param_4,param_5);
          pvVar3 = (void *)FUN_004c3590(param_6,iVar4);
          FUN_004c15f0(pvVar3);
          if (*(int *)((int)param_6 + 0x4a) == 0) {
            *(int *)((int)param_6 + 0x4a) = iVar4;
          }
          *(int *)((int)param_6 + 0x46) = iVar4;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


