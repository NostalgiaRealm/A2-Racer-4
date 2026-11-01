
/* ==== TForm.set_ClientWidth @ 00446b00 ==== 
 * signature: undefined __register TForm.set_ClientWidth(int * param_1, int param_2)
 * body: 00446b00-00446b2a
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_ClientWidth(int *param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    param_1[0x94] = param_2;
    *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 4;
    return;
  }
  FUN_0042e1b0(param_1,param_2);
  return;
}


