
/* ==== TForm.get_PixelsPerInch @ 0043cec4 ==== 
 * signature: int __register TForm.get_PixelsPerInch(int param_1)
 * body: 0043cec4-0043ced6
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TForm_get_PixelsPerInch(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x244);
  if (iVar1 == 0) {
    iVar1 = *(int *)(DAT_004477c8 + 0x34);
  }
  return iVar1;
}


