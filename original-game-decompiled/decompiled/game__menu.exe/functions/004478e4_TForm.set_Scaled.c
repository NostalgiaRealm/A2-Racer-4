
/* ==== TForm.set_Scaled @ 004478e4 ==== 
 * signature: undefined TForm.set_Scaled(void)
 * body: 004478e4-00447911
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_Scaled(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = TForm_get_Scaled(param_1);
  if ((param_2 != cVar1) && (*(undefined4 *)(param_1 + 0x244) = 0, param_2 != '\0')) {
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(DAT_004ac7d8 + 0x34);
  }
  return;
}


