
/* ==== FUN_004b94e0 @ 004b94e0 ==== 
 * signature: int __cdecl FUN_004b94e0(char * param_1)
 * body: 004b94e0-004b9515;004b9519-004b9540;004b9544-004b9569;004b956d-004b95b4;004b95b8-004b95df;004b95e3-004b9608;004b961e-004b9630
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004b9516-004b9518 004b9541-004b9543 004b956a-004b956c 004b95b5-004b95b7 004b95e0-004b95e2 004b9609-004b961d
 */

int __cdecl FUN_004b94e0(char *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b9120();
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((iVar1 < 0) || (DAT_0073b1b4 <= iVar1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
  }
  if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
  }
  FUN_004b9fa0((void *)(iVar1 * 0x48 + DAT_0073b1b0),param_1,0);
  if (DAT_0073b1bc == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar1) && (iVar1 < DAT_0073b1b4)) {
    if (*(char *)(DAT_0073b1c0 + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 *)(iVar1 * 0x48 + 0x44 + DAT_0073b1b0) = 1;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


