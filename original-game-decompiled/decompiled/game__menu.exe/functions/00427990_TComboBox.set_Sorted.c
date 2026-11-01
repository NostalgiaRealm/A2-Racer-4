
/* ==== TComboBox.set_Sorted @ 00427990 ==== 
 * signature: undefined TComboBox.set_Sorted(void)
 * body: 00427990-004279a3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TComboBox_set_Sorted(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f9)) {
    *(char *)(param_1 + 0x1f9) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


