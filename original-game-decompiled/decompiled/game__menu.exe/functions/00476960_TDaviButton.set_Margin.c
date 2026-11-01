
/* ==== TDaviButton.set_Margin @ 00476960 ==== 
 * signature: undefined TDaviButton.set_Margin(void)
 * body: 00476960-00476978
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviButton_set_Margin(int *param_1,int param_2)

{
  if ((param_2 != param_1[0x83]) && (-2 < param_2)) {
    param_1[0x83] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


