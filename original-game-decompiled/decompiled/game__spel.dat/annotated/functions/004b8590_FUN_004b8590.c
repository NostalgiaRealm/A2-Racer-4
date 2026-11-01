
/* ==== FUN_004b8590 @ 004b8590 ==== 
 * signature: int __fastcall FUN_004b8590(int param_1)
 * body: 004b8590-004b85ba;004b85be-004b8608;004b8612-004b861b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b85bb-004b85bd 004b8609-004b8611
 */

int __fastcall FUN_004b8590(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_new__s__d__005afb8c);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < *(int *)(param_1 + 4)) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1;
    do {
      if (*(char *)(iVar3 + iVar2) == '\0') goto LAB_004b8612;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = *(int *)(param_1 + 0x10);
    do {
      if (*(char *)(iVar3 + iVar2) == '\0') {
LAB_004b8612:
        *(undefined1 *)(iVar3 + iVar2) = 1;
        *(int *)(param_1 + 8) = iVar2;
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____T_ARRAY__new_array__s_0_005afb40);
}


