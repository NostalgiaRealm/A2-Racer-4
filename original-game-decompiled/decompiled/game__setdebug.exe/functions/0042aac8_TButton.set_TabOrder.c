
/* ==== TButton.set_TabOrder @ 0042aac8 ==== 
 * signature: undefined TButton.set_TabOrder(void)
 * body: 0042aac8-0042aadd
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TButton_set_TabOrder(int param_1,short param_2)

{
  if ((*(byte *)(param_1 + 0x44) & 8) != 0) {
    *(int *)(param_1 + 0x170) = (int)param_2;
    return;
  }
  FUN_0042aa6c(param_1,param_2);
  return;
}


