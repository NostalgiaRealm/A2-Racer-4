
/* ==== TLabel.set_Anchors @ 00423c4c ==== 
 * signature: undefined __register TLabel.set_Anchors(int param_1, char param_2)
 * body: 00423c4c-00423c6a
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_Anchors(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x51)) {
    *(char *)(param_1 + 0x51) = param_2;
    FUN_00423f38(param_1);
  }
  return;
}


