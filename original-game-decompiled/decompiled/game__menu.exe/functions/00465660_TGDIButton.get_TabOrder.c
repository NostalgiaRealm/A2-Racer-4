
/* ==== TGDIButton.get_TabOrder @ 00465660 ==== 
 * signature: undefined TGDIButton.get_TabOrder(void)
 * body: 00465660-00465688
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TGDIButton_get_TabOrder(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004656b4(param_1);
    iVar2 = TGroupBox_get_TabOrder(iVar1);
  }
  return iVar2;
}


