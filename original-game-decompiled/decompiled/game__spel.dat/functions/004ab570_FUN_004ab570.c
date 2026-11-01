
/* ==== FUN_004ab570 @ 004ab570 ==== 
 * signature: int __cdecl FUN_004ab570(int * param_1, int * param_2)
 * body: 004ab570-004ab59c;004ab5a0-004ab5f7;004ab5fe-004ab651
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ab59d-004ab59f 004ab5f8-004ab5fd
 */

int __cdecl FUN_004ab570(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = DAT_00715f08;
  if (DAT_00715f0c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  for (; iVar1 < DAT_00715f04; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_00715f10 + iVar1) == '\0') goto LAB_004ab646;
  }
  iVar1 = 0;
  if (0 < DAT_00715f08) {
    do {
      if (*(char *)(DAT_00715f10 + iVar1) == '\0') {
LAB_004ab646:
        *(undefined1 *)(DAT_00715f10 + iVar1) = 1;
        DAT_00715f08 = iVar1;
        FUN_004c3fa0((byte *)s_loading_chunk___d_005b0344);
        FUN_004ab6d0((void *)(iVar1 * 0x994 + DAT_00715f00),param_1);
        FUN_004aba30((void *)(iVar1 * 0x994 + DAT_00715f00),param_2);
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00715f08);
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


