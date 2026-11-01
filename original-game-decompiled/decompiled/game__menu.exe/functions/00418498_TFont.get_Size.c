
/* ==== TFont.get_Size @ 00418498 ==== 
 * signature: int __register TFont.get_Size(int param_1)
 * body: 00418498-004184b1
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

int TFont_get_Size(int param_1)

{
  int nNumber;
  int iVar1;
  int nNumerator;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  nNumerator = 0x48;
  nNumber = TFont_get_Height(param_1);
  iVar1 = MulDiv(nNumber,nNumerator,iVar1);
  return -iVar1;
}


