
/* ==== FUN_004cdfa0 @ 004cdfa0 ==== 
 * signature: undefined __stdcall FUN_004cdfa0(void)
 * body: 004cdfa0-004cdfcd
 */

void FUN_004cdfa0(void)

{
  if (DAT_00740ff4 != 0) {
    if (DAT_00740ff0 != (HMIXER)0x0) {
      mixerClose(DAT_00740ff0);
      DAT_00740ff0 = (HMIXER)0x0;
    }
    DAT_00740ff4 = 0;
  }
  return;
}


