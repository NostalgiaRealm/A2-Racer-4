
/* ==== FUN_00404824 @ 00404824 ==== 
 * signature: LPCWSTR __stdcall FUN_00404824(void)
 * body: 00404824-00404832
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

LPCWSTR FUN_00404824(void)

{
  undefined4 uVar1;
  int iVar2;
  LPCWSTR pWVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(undefined4 *)(iVar2 + -4) = uVar1;
    *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar2 + -0x14) = 1;
    *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar4 = (undefined1 *)(iVar2 + -0x1c);
    *(undefined4 *)(iVar2 + -0x1c) = 0x40484d;
    iVar2 = MultiByteToWideChar(*(UINT *)(iVar2 + -0x18),*(DWORD *)(iVar2 + -0x14),
                                *(LPCSTR *)(iVar2 + -0x10),*(int *)(iVar2 + -0xc),
                                *(LPWSTR *)(iVar2 + -8),*(int *)(iVar2 + -4));
    if (iVar2 != 0) {
      *(undefined4 *)(puVar4 + -4) = 0;
      *(undefined4 *)(puVar4 + -8) = 0;
      *(undefined4 *)(puVar4 + -0xc) = uVar1;
      *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(puVar4 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
      puVar5 = puVar4 + -0x1c;
      *(undefined4 *)(puVar4 + -0x1c) = 0x404863;
      pWVar3 = (LPCWSTR)LCMapStringW(*(LCID *)(puVar4 + -0x18),*(DWORD *)(puVar4 + -0x14),
                                     *(LPCWSTR *)(puVar4 + -0x10),*(int *)(puVar4 + -0xc),
                                     *(LPWSTR *)(puVar4 + -8),*(int *)(puVar4 + -4));
      *(LPCWSTR *)(unaff_EBP + -0x28) = pWVar3;
      if (pWVar3 != (LPCWSTR)0x0) {
        if ((*(byte *)(unaff_EBP + 0xd) & 4) == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 1;
          *(undefined4 *)(puVar5 + -4) = 0x4048c6;
          FUN_00404f20();
          *(undefined1 **)(unaff_EBP + -0x18) = puVar5;
          *(undefined1 **)(unaff_EBP + -0x20) = puVar5;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          pWVar3 = FUN_004048e6();
          return pWVar3;
        }
        if (*(int *)(unaff_EBP + 0x1c) == 0) goto LAB_004048a0;
        if ((int)pWVar3 <= *(int *)(unaff_EBP + 0x1c)) {
          *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(unaff_EBP + 0x1c);
          *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(unaff_EBP + 0x18);
          *(undefined4 *)(puVar5 + -0xc) = uVar1;
          *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
          *(undefined4 *)(puVar5 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
          *(undefined4 *)(puVar5 + -0x1c) = 0x404896;
          iVar2 = LCMapStringW(*(LCID *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                               *(LPCWSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                               *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
          if (iVar2 != 0) goto LAB_004048a0;
        }
      }
    }
  }
  pWVar3 = (LPCWSTR)0x0;
LAB_004048a0:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pWVar3;
}


