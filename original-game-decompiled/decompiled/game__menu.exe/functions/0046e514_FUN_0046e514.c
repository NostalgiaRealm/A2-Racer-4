
/* ==== FUN_0046e514 @ 0046e514 ==== 
 * signature: undefined __register FUN_0046e514(void)
 * body: 0046e514-0046e58e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e514(void)

{
  if (DAT_004ad1d0 == (HMODULE)0x0) {
    DAT_004ad1d0 = (HMODULE)FUN_0040c978("olepro32.dll",0x8000);
    if (DAT_004ad1d0 != (HMODULE)0x0) {
      _DAT_004ad1d4 = GetProcAddress(DAT_004ad1d0,"OleCreatePropertyFrame");
      _DAT_004ad1d8 = GetProcAddress(DAT_004ad1d0,"OleCreateFontIndirect");
      _DAT_004ad1dc = GetProcAddress(DAT_004ad1d0,"OleCreatePictureIndirect");
      DAT_004ad1e0 = GetProcAddress(DAT_004ad1d0,"OleLoadPicture");
    }
  }
  return;
}


