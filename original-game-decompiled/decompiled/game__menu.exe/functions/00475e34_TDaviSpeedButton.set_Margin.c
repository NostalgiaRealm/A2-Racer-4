
/* ==== TDaviSpeedButton.set_Margin @ 00475e34 ==== 
 * signature: undefined TDaviSpeedButton.set_Margin(void)
 * body: 00475e34-00475e4c
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_Margin(int *param_1,int param_2)

{
  if ((param_2 != param_1[0x50]) && (-2 < param_2)) {
    param_1[0x50] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


