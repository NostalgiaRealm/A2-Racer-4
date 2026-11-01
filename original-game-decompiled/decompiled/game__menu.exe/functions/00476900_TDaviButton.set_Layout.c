
/* ==== TDaviButton.set_Layout @ 00476900 ==== 
 * signature: undefined TDaviButton.set_Layout(void)
 * body: 00476900-00476913
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviButton_set_Layout(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x209)) {
    *(char *)((int)param_1 + 0x209) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


