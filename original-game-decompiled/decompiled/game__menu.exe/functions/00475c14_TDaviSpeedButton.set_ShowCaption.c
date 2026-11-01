
/* ==== TDaviSpeedButton.set_ShowCaption @ 00475c14 ==== 
 * signature: undefined TDaviSpeedButton.set_ShowCaption(void)
 * body: 00475c14-00475c27
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviSpeedButton_set_ShowCaption(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x58]) {
    *(char *)(param_1 + 0x58) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


