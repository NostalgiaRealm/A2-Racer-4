
/* ==== TTimer.set_Interval @ 0045060c ==== 
 * signature: undefined __register TTimer.set_Interval(int param_1, int param_2)
 * body: 0045060c-00450619
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TTimer_set_Interval(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = param_2;
    FUN_00450570(param_1);
  }
  return;
}


