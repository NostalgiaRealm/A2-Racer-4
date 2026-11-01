
/* ==== FUN_00404a63 @ 00404a63 ==== 
 * signature: BOOL __stdcall FUN_00404a63(void)
 * body: 00404a63-00404aa7
 */

BOOL FUN_00404a63(void)

{
  LPCWSTR cchSrc;
  BOOL BVar1;
  LPCWSTR unaff_EBX;
  int unaff_EBP;
  LPCWSTR unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_ESI != unaff_EBX) {
    cchSrc = (LPCWSTR)MultiByteToWideChar(*(UINT *)(unaff_EBP + 0x18),1,*(LPCSTR *)(unaff_EBP + 0xc)
                                          ,*(int *)(unaff_EBP + 0x10),unaff_ESI,
                                          *(int *)(unaff_EBP + -0x20));
    if (cchSrc != unaff_EBX) {
      BVar1 = GetStringTypeW(*(DWORD *)(unaff_EBP + 8),unaff_ESI,(int)cchSrc,
                             *(LPWORD *)(unaff_EBP + 0x14));
      goto LAB_00404a96;
    }
  }
  BVar1 = 0;
LAB_00404a96:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return BVar1;
}


