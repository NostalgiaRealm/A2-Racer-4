
/* ==== TGroupBox.set_TabOrder @ 00434bf4 ==== 
 * signature: undefined __register TGroupBox.set_TabOrder(int param_1, short param_2)
 * body: 00434bf4-00434c09
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_TabOrder(int param_1,short param_2)

{
  if ((*(byte *)(param_1 + 0x44) & 8) != 0) {
    *(int *)(param_1 + 0x170) = (int)param_2;
    return;
  }
  FUN_00434b98(param_1,param_2);
  return;
}


