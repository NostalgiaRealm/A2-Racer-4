
/* ==== FUN_004bae70 @ 004bae70 ==== 
 * signature: int __stdcall FUN_004bae70(void)
 * body: 004bae70-004bae9c;004baea0-004baef3;004baefc-004baf06
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004bae9d-004bae9f 004baef4-004baefb
 */

int FUN_004bae70(void)

{
  int iVar1;
  
  iVar1 = DAT_0073b218;
  if (DAT_0073b21c == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_0073b214; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_0073b220 + iVar1) == '\0') goto LAB_004baefc;
  }
  iVar1 = 0;
  if (0 < DAT_0073b218) {
    do {
      if (*(char *)(DAT_0073b220 + iVar1) == '\0') {
LAB_004baefc:
        *(undefined1 *)(DAT_0073b220 + iVar1) = 1;
        DAT_0073b218 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0073b218);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


