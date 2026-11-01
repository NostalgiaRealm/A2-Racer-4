
/* ==== TForm.set_BorderIcons @ 004472f4 ==== 
 * signature: undefined __register TForm.set_BorderIcons(int param_1, char param_2)
 * body: 004472f4-0044731e
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_BorderIcons(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x210)) &&
     (*(char *)(param_1 + 0x210) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00431e04(param_1);
  }
  return;
}


