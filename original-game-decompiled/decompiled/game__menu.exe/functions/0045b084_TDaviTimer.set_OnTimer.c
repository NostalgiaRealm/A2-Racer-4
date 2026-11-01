
/* ==== TDaviTimer.set_OnTimer @ 0045b084 ==== 
 * signature: undefined __register TDaviTimer.set_OnTimer(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0045b084-0045b09b
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviTimer_set_OnTimer
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  FUN_0045b010(param_1,param_5,param_3);
  return;
}


