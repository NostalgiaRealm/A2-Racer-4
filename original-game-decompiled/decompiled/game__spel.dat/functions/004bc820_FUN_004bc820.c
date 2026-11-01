
/* ==== FUN_004bc820 @ 004bc820 ==== 
 * signature: int __stdcall FUN_004bc820(void)
 * body: 004bc820-004bc84c;004bc850-004bc8a3;004bc8ac-004bc8b6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bc84d-004bc84f 004bc8a4-004bc8ab
 */

int FUN_004bc820(void)

{
  int iVar1;
  
  iVar1 = DAT_0073b5d0;
  if (DAT_0073b5d4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_0073b5cc; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') goto LAB_004bc8ac;
  }
  iVar1 = 0;
  if (0 < DAT_0073b5d0) {
    do {
      if (*(char *)(DAT_0073b5d8 + iVar1) == '\0') {
LAB_004bc8ac:
        *(undefined1 *)(DAT_0073b5d8 + iVar1) = 1;
        DAT_0073b5d0 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0073b5d0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


