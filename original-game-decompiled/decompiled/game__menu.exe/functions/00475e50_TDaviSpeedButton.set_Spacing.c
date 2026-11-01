
/* ==== TDaviSpeedButton.set_Spacing @ 00475e50 ==== 
 * signature: undefined TDaviSpeedButton.set_Spacing(void)
 * body: 00475e50-00475e63
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_Spacing(int *param_1,int param_2)

{
  if (param_2 != param_1[0x52]) {
    param_1[0x52] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


