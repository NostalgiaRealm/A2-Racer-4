
/* ==== FUN_004b48e0 @ 004b48e0 ==== 
 * signature: int __cdecl FUN_004b48e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 004b48e0-004b4912;004b4916-004b493a;004b493e-004b4960;004b4964-004b49a9;004b49ad-004b49d1;004b49d5-004b49f7;004b49fb-004b4a36;004b4a3a-004b4a5e;004b4a62-004b4a83;004b4a87-004b4ac1;004b4ac5-004b4ae9;004b4aed-004b4b0f;004b4b13-004b4b4d;004b4b51-004b4b75;004b4b79-004b4b9b;004b4bb4-004b4bc9
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b4913-004b4915 004b493b-004b493d 004b4961-004b4963 004b49aa-004b49ac 004b49d2-004b49d4 004b49f8-004b49fa 004b4a37-004b4a39 004b4a5f-004b4a61 004b4a84-004b4a86 004b4ac2-004b4ac4 004b4aea-004b4aec 004b4b10-004b4b12 004b4b4e-004b4b50 004b4b76-004b4b78 004b4b9c-004b4bb3
 */

int __cdecl FUN_004b48e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004b4bd0();
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar1 = iVar2 * 0xa9;
  *(undefined4 *)(iVar1 + DAT_0073b0d0) = 1;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 0x99 + DAT_0073b0d0) = param_1;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 0x95 + DAT_0073b0d0) = param_2;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar2 < 0) || (DAT_0073b0d4 <= iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  *(undefined4 *)(iVar1 + 0x9d + DAT_0073b0d0) = param_3;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar2) && (iVar2 < DAT_0073b0d4)) {
    if (*(char *)(DAT_0073b0e0 + iVar2) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 *)(iVar1 + 0x91 + DAT_0073b0d0) = 1;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


