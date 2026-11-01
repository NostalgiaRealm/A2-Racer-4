
/* ==== FUN_004b4bd0 @ 004b4bd0 ==== 
 * signature: int __stdcall FUN_004b4bd0(void)
 * body: 004b4bd0-004b4bfc;004b4c00-004b4c53;004b4c5c-004b4c66
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b4bfd-004b4bff 004b4c54-004b4c5b
 */

int FUN_004b4bd0(void)

{
  int iVar1;
  
  iVar1 = DAT_0073b0d8;
  if (DAT_0073b0dc == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_0073b0d4; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_0073b0e0 + iVar1) == '\0') goto LAB_004b4c5c;
  }
  iVar1 = 0;
  if (0 < DAT_0073b0d8) {
    do {
      if (*(char *)(DAT_0073b0e0 + iVar1) == '\0') {
LAB_004b4c5c:
        *(undefined1 *)(DAT_0073b0e0 + iVar1) = 1;
        DAT_0073b0d8 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0073b0d8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


