
/* ==== TDaviTimer.set_Interval @ 0045b070 ==== 
 * signature: undefined __register TDaviTimer.set_Interval(int param_1, int param_2, undefined4 param_3)
 * body: 0045b070-0045b081
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviTimer_set_Interval(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = param_2;
    FUN_0045b010(param_1,param_2,param_3);
  }
  return;
}


