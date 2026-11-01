
/* ==== TDaviButton.set_Style @ 00476714 ==== 
 * signature: undefined TDaviButton.set_Style(void)
 * body: 00476714-00476727
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviButton_set_Style(int *param_1,char param_2)

{
  if (param_2 != (char)param_1[0x86]) {
    *(char *)(param_1 + 0x86) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


