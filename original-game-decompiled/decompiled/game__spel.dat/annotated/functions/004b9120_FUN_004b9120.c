
/* ==== FUN_004b9120 @ 004b9120 ==== 
 * signature: int __stdcall FUN_004b9120(void)
 * body: 004b9120-004b914c;004b9150-004b91a3;004b91ac-004b91b6
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b914d-004b914f 004b91a4-004b91ab
 */

int FUN_004b9120(void)

{
  int iVar1;
  
  iVar1 = DAT_0073b1b8;
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_0073b1b4; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') goto LAB_004b91ac;
  }
  iVar1 = 0;
  if (0 < DAT_0073b1b8) {
    do {
      if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
LAB_004b91ac:
        *(undefined1 *)(DAT_0073b1c0 + iVar1) = 1;
        DAT_0073b1b8 = iVar1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0073b1b8);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


