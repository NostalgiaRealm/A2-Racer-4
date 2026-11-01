
/* ==== TDaviGraphicSlider.set_Position @ 0046af6c ==== 
 * signature: undefined __register TDaviGraphicSlider.set_Position(int * param_1, int param_2)
 * body: 0046af6c-0046afb9
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicSlider_set_Position(int *param_1,int param_2)

{
  if (param_2 != param_1[0x81]) {
    param_1[0x81] = param_2;
    if (param_1[0x80] < param_2) {
      param_1[0x81] = param_1[0x80];
    }
    if (param_1[0x81] < param_1[0x7f]) {
      param_1[0x81] = param_1[0x7f];
    }
    FUN_0046aeb8(param_1);
    (**(code **)(*param_1 + 0xb8))();
  }
  return;
}


