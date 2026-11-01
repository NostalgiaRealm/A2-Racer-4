
/* ==== TDaviSpeedButton.set_AllowAllUp @ 00475e64 ==== 
 * signature: undefined TDaviSpeedButton.set_AllowAllUp(void)
 * body: 00475e64-00475e77
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_AllowAllUp(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x128)) {
    *(char *)(param_1 + 0x128) = param_2;
    FUN_00475d2c();
  }
  return;
}


