
/* ==== TForm.set_ClientHeight @ 00446b30 ==== 
 * signature: undefined __register TForm.set_ClientHeight(int * param_1, int param_2)
 * body: 00446b30-00446b5a
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_ClientHeight(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x95] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 8;
    return;
  }
  FUN_0042e1f4(param_1,param_2);
  return;
}


