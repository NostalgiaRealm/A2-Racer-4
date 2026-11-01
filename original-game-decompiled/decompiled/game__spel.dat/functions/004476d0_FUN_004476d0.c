
/* ==== FUN_004476d0 @ 004476d0 ==== 
 * signature: undefined __cdecl FUN_004476d0(int param_1)
 * body: 004476d0-004476f1;004476f5-00447720;00447724-0044772b
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004476f2-004476f4 00447721-00447723
 */

void __cdecl FUN_004476d0(int param_1)

{
  if (DAT_0059dbb0 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Function___s___Unable_t_0059e318);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____Function___s___Illegal_d_0059e390);
  }
  DAT_0059dbc4 = param_1;
  return;
}


