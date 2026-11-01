
/* ==== FUN_00447486 @ 00447486 ==== 
 * signature: undefined __stdcall FUN_00447486(int param_1)
 * body: 00447486-0044748f
 */

void FUN_00447486(int param_1)

{
  if (DAT_0059dbb0 == 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Function___s___Unable_t_0059def0);
  }
  if ((0 < param_1) && (param_1 < 3)) {
    DAT_0059db80 = param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d____Function___s___Illegal_m_0059df68);
}


