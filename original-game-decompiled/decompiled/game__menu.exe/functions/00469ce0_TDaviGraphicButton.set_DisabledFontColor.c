
/* ==== TDaviGraphicButton.set_DisabledFontColor @ 00469ce0 ==== 
 * signature: undefined TDaviGraphicButton.set_DisabledFontColor(void)
 * body: 00469ce0-00469cfd
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicButton_set_DisabledFontColor(int *param_1,int param_2)

{
  if (param_2 != param_1[0x83]) {
    param_1[0x83] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


