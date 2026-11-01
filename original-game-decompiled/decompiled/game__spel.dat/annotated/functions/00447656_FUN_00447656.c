
/* ==== FUN_00447656 @ 00447656 ==== 
 * signature: undefined __stdcall FUN_00447656(int param_1)
 * body: 00447656-0044765f
 */

void FUN_00447656(int param_1)

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


