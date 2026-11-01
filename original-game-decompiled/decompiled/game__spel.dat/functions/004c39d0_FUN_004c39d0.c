
/* ==== FUN_004c39d0 @ 004c39d0 ==== 
 * signature: undefined __stdcall FUN_004c39d0(void)
 * body: 004c39d0-004c3a12;004c3a1b-004c3a50;004c3a59-004c3a78;004c3a81-004c3aa3;004c3aac-004c3b34
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c3a13-004c3a1a 004c3a51-004c3a58 004c3a79-004c3a80 004c3aa4-004c3aab
 */

void FUN_004c39d0(void)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  
  FUN_004c3fa0((byte *)s_exit_lights_005b3484);
  iVar3 = 0;
  iVar2 = DAT_0073b88c;
  if (0 < DAT_0073b88c) {
    do {
      if ((iVar3 < 0) || (iVar2 <= iVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_004c4150((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
      }
      if (*(char *)((int)DAT_0073b898 + iVar3) != '\0') {
        if (DAT_0073b894 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
        }
        if ((iVar3 < 0) || (iVar2 <= iVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)((int)DAT_0073b898 + iVar3) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        pvVar1 = *(LPVOID *)((int)DAT_0073b888 + iVar3 * 4);
        if (pvVar1 != (LPVOID)0x0) {
          FUN_004c3b40((int)pvVar1);
          FUN_0054b339(pvVar1);
          iVar2 = DAT_0073b88c;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (DAT_0073b894 == 1) {
    FUN_004c3fa0((byte *)s_T_ARRAY___deleting___16_16s___16_005af6ac);
    FUN_0054b339(DAT_0073b888);
  }
  if (DAT_0073b894 != 0) {
    FUN_0054b339(DAT_0073b898);
    DAT_0073b894 = 0;
  }
  FUN_004c3fa0((byte *)s___done_deleting_T_ARRAY_005af690);
  return;
}


