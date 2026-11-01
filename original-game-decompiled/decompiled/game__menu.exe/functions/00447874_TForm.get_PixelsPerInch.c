
/* ==== TForm.get_PixelsPerInch @ 00447874 ==== 
 * signature: int __register TForm.get_PixelsPerInch(int param_1)
 * body: 00447874-00447886
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TForm_get_PixelsPerInch(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x244);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_004ac7d8 + 0x34);
  }
  return iVar1;
}


