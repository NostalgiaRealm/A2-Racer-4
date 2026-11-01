
/* ==== TCheckBox.set_Alignment @ 00428d34 ==== 
 * signature: undefined TCheckBox.set_Alignment(void)
 * body: 00428d34-00428d47
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TCheckBox_set_Alignment(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


