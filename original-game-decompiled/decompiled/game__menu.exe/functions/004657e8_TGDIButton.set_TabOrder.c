
/* ==== TGDIButton.set_TabOrder @ 004657e8 ==== 
 * signature: undefined __register TGDIButton.set_TabOrder(int param_1, short param_2)
 * body: 004657e8-0046580d
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButton_set_TabOrder(int param_1,short param_2)

{
  int iVar1;
  
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004656b4(param_1);
    TGroupBox_set_TabOrder(iVar1,param_2);
  }
  return;
}


