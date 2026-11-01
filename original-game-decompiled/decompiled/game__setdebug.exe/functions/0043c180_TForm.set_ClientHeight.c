
/* ==== TForm.set_ClientHeight @ 0043c180 ==== 
 * signature: undefined __register TForm.set_ClientHeight(int * param_1, int param_2)
 * body: 0043c180-0043c1aa
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
  FUN_004242b4(param_1,param_2);
  return;
}


