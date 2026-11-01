
/* ==== TDaviGraphicSlider.set_Definition @ 0046af08 ==== 
 * signature: undefined __register TDaviGraphicSlider.set_Definition(int param_1, int param_2)
 * body: 0046af08-0046af21
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicSlider_set_Definition(int param_1,int param_2)

{
  *(int *)(param_1 + 0x20c) = param_2;
  TDaviGraphicButton_set_Definition(*(int *)(param_1 + 0x210),param_2);
  return;
}


