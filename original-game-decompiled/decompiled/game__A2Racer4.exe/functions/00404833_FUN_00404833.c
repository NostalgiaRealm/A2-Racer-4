
/* ==== FUN_00404833 @ 00404833 ==== 
 * signature: LPWSTR __stdcall FUN_00404833(void)
 * body: 00404833-004048d3
 */

LPWSTR FUN_00404833(void)

{
  int iVar1;
  LPWSTR pWVar2;
  LPCWSTR pWVar3;
  int unaff_EBX;
  int unaff_EBP;
  LPWSTR unaff_EDI;
  
  if ((*(LPWSTR *)(unaff_EBP + -0x24) != unaff_EDI) &&
     (iVar1 = MultiByteToWideChar(*(UINT *)(unaff_EBP + 0x20),1,*(LPCSTR *)(unaff_EBP + 0x10),
                                  *(int *)(unaff_EBP + 0x14),*(LPWSTR *)(unaff_EBP + -0x24),
                                  unaff_EBX), iVar1 != 0)) {
    pWVar2 = (LPWSTR)LCMapStringW(*(LCID *)(unaff_EBP + 8),*(DWORD *)(unaff_EBP + 0xc),
                                  *(LPCWSTR *)(unaff_EBP + -0x24),unaff_EBX,unaff_EDI,(int)unaff_EDI
                                 );
    *(LPWSTR *)(unaff_EBP + -0x28) = pWVar2;
    if (pWVar2 != unaff_EDI) {
      if ((*(byte *)(unaff_EBP + 0xd) & 4) == 0) {
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00404f20();
        *(BADSPACEBASE **)(unaff_EBP + -0x18) = register0x00000010;
        *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        pWVar3 = FUN_004048e6();
        return pWVar3;
      }
      if ((*(LPWSTR *)(unaff_EBP + 0x1c) == unaff_EDI) ||
         (((int)pWVar2 <= *(int *)(unaff_EBP + 0x1c) &&
          (iVar1 = LCMapStringW(*(LCID *)(unaff_EBP + 8),*(DWORD *)(unaff_EBP + 0xc),
                                *(LPCWSTR *)(unaff_EBP + -0x24),unaff_EBX,
                                *(LPWSTR *)(unaff_EBP + 0x18),*(int *)(unaff_EBP + 0x1c)),
          iVar1 != 0)))) goto LAB_004048a0;
    }
  }
  pWVar2 = (LPWSTR)0x0;
LAB_004048a0:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pWVar2;
}


