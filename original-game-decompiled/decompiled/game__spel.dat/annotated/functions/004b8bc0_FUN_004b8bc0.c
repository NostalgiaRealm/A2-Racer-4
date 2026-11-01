
/* ==== FUN_004b8bc0 @ 004b8bc0 ==== 
 * signature: undefined4 __stdcall FUN_004b8bc0(void)
 * body: 004b8bc0-004b8bf7;004b8c00-004b8c38;004b8c41-004b8c63;004b8c6c-004b8c91;004b8c9a-004b8cd4;004b8cdd-004b8cff;004b8d03-004b8d28;004b8d2c-004b8d70;004b8d74-004b8d9b;004b8d9f-004b8dc3;004b8dc7-004b8dfb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b8bf8-004b8bff 004b8c39-004b8c40 004b8c64-004b8c6b 004b8c92-004b8c99 004b8cd5-004b8cdc 004b8d00-004b8d02 004b8d29-004b8d2b 004b8d71-004b8d73 004b8d9c-004b8d9e 004b8dc4-004b8dc6
 */

undefined4 FUN_004b8bc0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (DAT_0073b1b4 < 1) {
    return 0xffffffff;
  }
  iVar5 = 0;
  iVar3 = DAT_0073b1b4;
  do {
    if ((iVar5 < 0) || (iVar3 <= iVar4)) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____T_ARRAY__get_used___ill_0059133c);
    }
    if (*(char *)(DAT_0073b1c0 + iVar4) != '\0') {
      if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
      }
      if ((iVar5 < 0) || (iVar3 <= iVar4)) {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
      }
      if (*(char *)(DAT_0073b1c0 + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
        Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
      }
      if (*(int *)(iVar5 + 8 + DAT_0073b1b0) != 0) {
        if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
        }
        if ((iVar5 < 0) || (iVar3 <= iVar4)) {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
        }
        if (*(char *)(DAT_0073b1c0 + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
          Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
        }
        piVar1 = *(int **)(iVar5 + 8 + DAT_0073b1b0);
        iVar2 = (**(code **)(*piVar1 + 0x60))(piVar1);
        iVar3 = DAT_0073b1b4;
        if (iVar2 != 0) {
          if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
          }
          if ((iVar5 < 0) || (DAT_0073b1b4 <= iVar4)) {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
          }
          if (*(char *)(DAT_0073b1c0 + iVar4) == '\0') {
                    /* WARNING: Subroutine does not return */
            Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
          }
          piVar1 = *(int **)(iVar5 + 8 + DAT_0073b1b0);
          (**(code **)(*piVar1 + 0x6c))(piVar1);
          FUN_004ba4c0(iVar4);
          iVar3 = DAT_0073b1b4;
        }
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x48;
    if (iVar3 <= iVar4) {
      return 0xffffffff;
    }
  } while( true );
}


