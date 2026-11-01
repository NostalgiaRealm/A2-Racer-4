
/* ==== TGDIButton.set_TabStop @ 00465810 ==== 
 * signature: undefined __register TGDIButton.set_TabStop(int param_1, char param_2)
 * body: 00465810-00465835
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGDIButton_set_TabStop(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_004656b4(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_004656b4(param_1);
    TGroupBox_set_TabStop(iVar1,param_2);
  }
  return;
}


