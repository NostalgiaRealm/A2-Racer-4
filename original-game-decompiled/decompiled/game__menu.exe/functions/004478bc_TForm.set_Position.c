
/* ==== TForm.set_Position @ 004478bc ==== 
 * signature: undefined __register TForm.set_Position(int param_1, char param_2)
 * body: 004478bc-004478d5
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_Position(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x218)) &&
     (*(char *)(param_1 + 0x218) = param_2, (*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    FUN_00431e04(param_1);
  }
  return;
}


