
/* ==== TDaviGraphicButton.set_Definition @ 00469830 ==== 
 * signature: undefined __register TDaviGraphicButton.set_Definition(int param_1, int param_2)
 * body: 00469830-00469860
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TDaviGraphicButton_set_Definition(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_0045dfd4(*(int *)(param_1 + 0x208),param_1);
  }
  *(int *)(param_1 + 0x208) = param_2;
  if (param_2 != 0) {
    FUN_0045df90(param_2,param_1);
  }
  return;
}


