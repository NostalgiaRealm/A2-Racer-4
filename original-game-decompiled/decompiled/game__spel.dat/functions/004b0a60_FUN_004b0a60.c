
/* ==== FUN_004b0a60 @ 004b0a60 ==== 
 * signature: int __stdcall FUN_004b0a60(void)
 * body: 004b0a60-004b0a8c;004b0a90-004b0ae3;004b0aea-004b0b1a
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b0a8d-004b0a8f 004b0ae4-004b0ae9
 */

int FUN_004b0a60(void)

{
  int iVar1;
  
  iVar1 = DAT_00719b58;
  if (DAT_00719b5c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_00719b54; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_00719b60 + iVar1) == '\0') goto LAB_004b0b0e;
  }
  iVar1 = 0;
  if (0 < DAT_00719b58) {
    do {
      if (*(char *)(DAT_00719b60 + iVar1) == '\0') {
LAB_004b0b0e:
        *(undefined1 *)(DAT_00719b60 + iVar1) = 1;
        DAT_00719b58 = iVar1;
        FUN_004c3fa0((byte *)s_Camera__d_added__This_pointer_____005b0808);
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00719b58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


