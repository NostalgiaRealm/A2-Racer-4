
/* ==== TRadioButton.set_Alignment @ 00428f90 ==== 
 * signature: undefined TRadioButton.set_Alignment(void)
 * body: 00428f90-00428fa3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TRadioButton_set_Alignment(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


