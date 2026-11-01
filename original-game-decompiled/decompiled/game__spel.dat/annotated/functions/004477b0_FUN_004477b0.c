
/* ==== FUN_004477b0 @ 004477b0 ==== 
 * signature: undefined __cdecl FUN_004477b0(int param_1)
 * body: 004477b0-004477d1;004477d5-004477fc;00447801-00447816
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004477d2-004477d4 004477fd-00447800
 */

void __cdecl FUN_004477b0(int param_1)

{
  if (DAT_0059dbb0 == 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Function___s___Unable_t_0059e524);
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d____Function___s___Illegal_p_0059e59c);
    }
    DAT_0059dbb4 = 2;
    return;
  }
  DAT_0059dbb4 = 1;
  return;
}


