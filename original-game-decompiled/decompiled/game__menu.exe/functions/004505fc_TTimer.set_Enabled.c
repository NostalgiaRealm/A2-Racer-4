
/* ==== TTimer.set_Enabled @ 004505fc ==== 
 * signature: undefined __register TTimer.set_Enabled(int param_1, char param_2)
 * body: 004505fc-00450609
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TTimer_set_Enabled(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x38)) {
    *(char *)(param_1 + 0x38) = param_2;
    FUN_00450570(param_1);
  }
  return;
}


