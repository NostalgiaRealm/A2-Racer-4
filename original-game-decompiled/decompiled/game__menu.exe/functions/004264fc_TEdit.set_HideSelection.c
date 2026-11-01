
/* ==== TEdit.set_HideSelection @ 004264fc ==== 
 * signature: undefined TEdit.set_HideSelection(void)
 * body: 004264fc-0042650f
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TEdit_set_HideSelection(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1f9)) {
    *(char *)(param_1 + 0x1f9) = param_2;
    FUN_00431e04(param_1);
  }
  return;
}


