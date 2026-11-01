
/* ==== TEdit.set_OEMConvert @ 00426540 ==== 
 * signature: undefined TEdit.set_OEMConvert(void)
 * body: 00426540-00426553
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_OEMConvert(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1fa)) {
    *(char *)(param_1 + 0x1fa) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


