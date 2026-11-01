
/* ==== FUN_004c0b80 @ 004c0b80 ==== 
 * signature: int __stdcall FUN_004c0b80(void)
 * body: 004c0b80-004c0b99;004c0b9d-004c0bcb;004c0bcf-004c0c19;004c0c23-004c0c2c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0b9a-004c0b9c 004c0bcc-004c0bce 004c0c1a-004c0c22
 */

int FUN_004c0b80(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_0073b784;
  if (DAT_0073b788 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____viewport_array_not_init_005b2b88);
  }
  if (*(int *)(DAT_0073b784 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  iVar1 = *(int *)(DAT_0073b784 + 8);
  if (iVar1 < *(int *)(DAT_0073b784 + 4)) {
    iVar4 = *(int *)(DAT_0073b784 + 0x10);
    iVar3 = iVar1;
    do {
      if (*(char *)(iVar4 + iVar3) == '\0') goto LAB_004c0c23;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_0073b784 + 4));
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = *(int *)(DAT_0073b784 + 0x10);
    do {
      if (*(char *)(iVar4 + iVar3) == '\0') {
LAB_004c0c23:
        *(undefined1 *)(iVar4 + iVar3) = 1;
        *(int *)(iVar2 + 8) = iVar3;
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


