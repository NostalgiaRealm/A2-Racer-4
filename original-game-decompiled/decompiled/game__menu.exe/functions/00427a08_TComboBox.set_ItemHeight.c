
/* ==== TComboBox.set_ItemHeight @ 00427a08 ==== 
 * signature: undefined TComboBox.set_ItemHeight(void)
 * body: 00427a08-00427a17
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TComboBox_set_ItemHeight(int param_1,int param_2)

{
  if (0 < param_2) {
    *(int *)(param_1 + 0x1fc) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


