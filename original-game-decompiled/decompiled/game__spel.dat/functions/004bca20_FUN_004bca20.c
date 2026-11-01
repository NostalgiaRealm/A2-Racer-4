
/* ==== FUN_004bca20 @ 004bca20 ==== 
 * signature: int __cdecl FUN_004bca20(int param_1)
 * body: 004bca20-004bca54;004bca58-004bca81;004bca8b-004bcaad;004bcab7-004bcaf2;004bcafc-004bcb1b;004bcb1f-004bcb41;004bcb45-004bcb79;004bcb7d-004bcba6;004bcbaa-004bcbce;004bcbd2-004bcbf4;004bcbf8-004bcc30;004bcc34-004bcc58;004bcc5c-004bcc7e;004bcc82-004bcc9f
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bca55-004bca57 004bca82-004bca8a 004bcaae-004bcab6 004bcaf3-004bcafb 004bcb1c-004bcb1e 004bcb42-004bcb44 004bcb7a-004bcb7c 004bcba7-004bcba9 004bcbcf-004bcbd1 004bcbf5-004bcbf7 004bcc31-004bcc33 004bcc59-004bcc5b 004bcc7f-004bcc81
 */

int __cdecl FUN_004bca20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004bc820();
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((param_1 < 0) || (DAT_0073b5cc <= param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + param_1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b5cc <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  iVar2 = iVar1 * 0xac;
  if (*(int *)(iVar2 + 4 + DAT_0073b5c8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____illegal_change_of_mesh_t_005b2480);
  }
  *(undefined4 *)(iVar2 + DAT_0073b5c8) = *(undefined4 *)(DAT_0073b5c8 + param_1 * 0xac);
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b5cc <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  FUN_004bd840((void *)(iVar2 + DAT_0073b5c8),param_1);
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar1) && (iVar1 < DAT_0073b5cc)) {
    if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    FUN_004c1ae0((void *)(iVar2 + 0x98 + DAT_0073b5c8),s_copy_mesh_005b24b4);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


