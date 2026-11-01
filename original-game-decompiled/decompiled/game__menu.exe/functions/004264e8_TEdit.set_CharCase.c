
/* ==== TEdit.set_CharCase @ 004264e8 ==== 
 * signature: undefined TEdit.set_CharCase(void)
 * body: 004264e8-004264fb
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_CharCase(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1fb)) {
    *(char *)(param_1 + 0x1fb) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


