
/* ==== TDaviSpeedButton.set_Layout @ 00475e20 ==== 
 * signature: undefined TDaviSpeedButton.set_Layout(void)
 * body: 00475e20-00475e33
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_Layout(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x13d)) {
    *(char *)((int)param_1 + 0x13d) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


