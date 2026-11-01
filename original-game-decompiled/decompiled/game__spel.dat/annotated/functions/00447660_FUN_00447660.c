
/* ==== FUN_00447660 @ 00447660 ==== 
 * signature: undefined __cdecl FUN_00447660(int param_1)
 * body: 00447660-00447681;00447685-004476b0;004476b4-004476bb
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00447682-00447684 004476b1-004476b3
 */

void __cdecl FUN_00447660(int param_1)

{
  if (DAT_0059dbb0 == 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Function___s___Unable_t_0059e214);
  }
  if ((-1 < param_1) && (param_1 < 2)) {
    DAT_0059dbac = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____Function___s___Illegal_s_0059e28c);
}


