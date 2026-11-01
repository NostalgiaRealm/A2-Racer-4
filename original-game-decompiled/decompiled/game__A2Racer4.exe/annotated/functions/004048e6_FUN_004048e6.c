
/* ==== FUN_004048e6 @ 004048e6 ==== 
 * signature: LPCWSTR __stdcall FUN_004048e6(void)
 * body: 004048e6-00404933
 */

LPCWSTR FUN_004048e6(void)

{
  int iVar1;
  LPCWSTR pWVar2;
  LPCWSTR unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  LPCWSTR unaff_EDI;
  LPCWSTR cbMultiByte;
  
  if ((unaff_EBX != unaff_EDI) &&
     (iVar1 = LCMapStringW(*(LCID *)(unaff_EBP + 8),*(DWORD *)(unaff_EBP + 0xc),
                           *(LPCWSTR *)(unaff_EBP + -0x24),*(int *)(unaff_EBP + -0x1c),unaff_EBX,
                           unaff_ESI), iVar1 != 0)) {
    pWVar2 = unaff_EDI;
    cbMultiByte = unaff_EDI;
    if (*(LPCWSTR *)(unaff_EBP + 0x1c) != unaff_EDI) {
      pWVar2 = *(LPCWSTR *)(unaff_EBP + 0x18);
      cbMultiByte = *(LPCWSTR *)(unaff_EBP + 0x1c);
    }
    pWVar2 = (LPCWSTR)WideCharToMultiByte(*(UINT *)(unaff_EBP + 0x20),0x220,unaff_EBX,unaff_ESI,
                                          (LPSTR)pWVar2,(int)cbMultiByte,(LPCSTR)unaff_EDI,
                                          (LPBOOL)unaff_EDI);
    if (pWVar2 != unaff_EDI) goto LAB_004048a0;
  }
  pWVar2 = (LPCWSTR)0x0;
LAB_004048a0:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pWVar2;
}


