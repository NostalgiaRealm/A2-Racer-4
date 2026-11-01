
/* ==== TTimer.set_OnTimer @ 0045061c ==== 
 * signature: undefined __register TTimer.set_OnTimer(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0045061c-00450633
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TTimer_set_OnTimer(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_5;
  FUN_00450570(param_1);
  return;
}


