
/* ==== FUN_004476c6 @ 004476c6 ==== 
 * signature: undefined __stdcall FUN_004476c6(int param_1)
 * body: 004476c6-004476cf
 */

void FUN_004476c6(int param_1)

{
  if (DAT_0059dbb0 == 1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Function___s___Unable_t_0059e318);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Function___s___Illegal_d_0059e390);
  }
  DAT_0059dbc4 = param_1;
  return;
}


