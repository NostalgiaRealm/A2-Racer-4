
/* ==== TScrollBox.set_BorderStyle @ 00445d50 ==== 
 * signature: undefined TScrollBox.set_BorderStyle(void)
 * body: 00445d50-00445d63
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TScrollBox_set_BorderStyle(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x208)) {
    *(char *)(param_1 + 0x208) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


