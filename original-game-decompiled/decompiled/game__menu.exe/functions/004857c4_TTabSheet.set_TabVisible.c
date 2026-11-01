
/* ==== TTabSheet.set_TabVisible @ 004857c4 ==== 
 * signature: undefined TTabSheet.set_TabVisible(void)
 * body: 004857c4-004857d7
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TTabSheet_set_TabVisible(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f8)) {
    *(char *)(param_1 + 0x1f8) = param_2;
    FUN_004857d8(param_1);
  }
  return;
}


