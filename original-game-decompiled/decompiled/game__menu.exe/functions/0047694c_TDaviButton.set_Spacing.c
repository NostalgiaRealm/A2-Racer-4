
/* ==== TDaviButton.set_Spacing @ 0047694c ==== 
 * signature: undefined TDaviButton.set_Spacing(void)
 * body: 0047694c-0047695f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviButton_set_Spacing(int *param_1,int param_2)

{
  if (param_2 != param_1[0x85]) {
    param_1[0x85] = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


