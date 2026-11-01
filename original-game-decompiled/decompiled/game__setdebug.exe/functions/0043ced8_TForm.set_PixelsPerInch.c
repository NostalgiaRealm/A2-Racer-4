
/* ==== TForm.set_PixelsPerInch @ 0043ced8 ==== 
 * signature: undefined TForm.set_PixelsPerInch(void)
 * body: 0043ced8-0043cf09
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_PixelsPerInch(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = TForm_get_PixelsPerInch(param_1);
  if (((param_2 != iVar1) && ((param_2 == 0 || (0x23 < param_2)))) &&
     (((*(byte *)(param_1 + 0x20) & 1) == 0 || (*(int *)(param_1 + 0x244) != 0)))) {
    *(int *)(param_1 + 0x244) = param_2;
  }
  return;
}


