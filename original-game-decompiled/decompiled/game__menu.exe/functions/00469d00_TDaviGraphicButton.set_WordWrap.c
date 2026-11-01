
/* ==== TDaviGraphicButton.set_WordWrap @ 00469d00 ==== 
 * signature: undefined TDaviGraphicButton.set_WordWrap(void)
 * body: 00469d00-00469d1d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicButton_set_WordWrap(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x8e]) {
    *(char *)(param_1 + 0x8e) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


