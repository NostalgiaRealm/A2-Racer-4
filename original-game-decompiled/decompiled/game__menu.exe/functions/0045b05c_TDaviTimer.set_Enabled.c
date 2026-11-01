
/* ==== TDaviTimer.set_Enabled @ 0045b05c ==== 
 * signature: undefined __register TDaviTimer.set_Enabled(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0045b05c-0045b06d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviTimer_set_Enabled(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((char)param_2 != *(char *)(param_1 + 0x24)) {
    *(char *)(param_1 + 0x24) = (char)param_2;
    FUN_0045b010(param_1,param_2,param_3);
  }
  return;
}


