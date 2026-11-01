
/* ==== FUN_00447490 @ 00447490 ==== 
 * signature: undefined __cdecl FUN_00447490(int param_1)
 * body: 00447490-004474b1;004474b5-004474e1;004474e5-004474ec
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004474b2-004474b4 004474e2-004474e4
 */

void __cdecl FUN_00447490(int param_1)

{
  if (DAT_0059dbb0 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Function___s___Unable_t_0059def0);
  }
  if ((0 < param_1) && (param_1 < 3)) {
    DAT_0059db80 = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____Function___s___Illegal_m_0059df68);
}


