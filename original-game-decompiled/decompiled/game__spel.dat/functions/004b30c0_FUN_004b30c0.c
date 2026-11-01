
/* ==== FUN_004b30c0 @ 004b30c0 ==== 
 * signature: int __cdecl FUN_004b30c0(int * param_1)
 * body: 004b30c0-004b30ec;004b30f0-004b3143;004b314a-004b3178
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b30ed-004b30ef 004b3144-004b3149
 */

int __cdecl FUN_004b30c0(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0073b048;
  if (DAT_0073b04c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_0073b044; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_0073b050 + iVar1) == '\0') goto LAB_004b316c;
  }
  iVar1 = 0;
  if (0 < DAT_0073b048) {
    do {
      if (*(char *)(DAT_0073b050 + iVar1) == '\0') {
LAB_004b316c:
        *(undefined1 *)(DAT_0073b050 + iVar1) = 1;
        DAT_0073b048 = iVar1;
        FUN_004b31a0((void *)(DAT_0073b040 + iVar1 * 0x8c),param_1);
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_0073b048);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


