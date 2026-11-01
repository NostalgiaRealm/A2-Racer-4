
/* ==== FUN_1000e792 @ 1000e792 ==== 
 * signature: undefined FUN_1000e792(void)
 * body: 1000e792-1000e839
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_1000e792(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar2 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
    puVar3 = (undefined1 *)(iVar2 + -0x1c);
    *(undefined4 *)(iVar2 + -0x1c) = 0x1000e7ce;
    iVar2 = LCMapStringW(*(LCID *)(iVar2 + -0x18),*(DWORD *)(iVar2 + -0x14),
                         *(LPCWSTR *)(iVar2 + -0x10),*(int *)(iVar2 + -0xc),*(LPWSTR *)(iVar2 + -8),
                         *(int *)(iVar2 + -4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else if (*(int *)(unaff_EBP + 0x1c) == 0) {
      *(undefined4 *)(puVar3 + -4) = 0;
      *(undefined4 *)(puVar3 + -8) = 0;
      *(undefined4 *)(puVar3 + -0xc) = 0;
      *(undefined4 *)(puVar3 + -0x10) = 0;
      *(undefined4 *)(puVar3 + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
      *(undefined4 *)(puVar3 + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined4 *)(puVar3 + -0x1c) = 0x220;
      *(undefined4 *)(puVar3 + -0x20) = *(undefined4 *)(unaff_EBP + 0x20);
      *(undefined4 *)(puVar3 + -0x24) = 0x1000e7fb;
      iVar2 = WideCharToMultiByte(*(UINT *)(puVar3 + -0x20),*(DWORD *)(puVar3 + -0x1c),
                                  *(LPCWSTR *)(puVar3 + -0x18),*(int *)(puVar3 + -0x14),
                                  *(LPSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                                  *(LPCSTR *)(puVar3 + -8),*(LPBOOL *)(puVar3 + -4));
      *(int *)(unaff_EBP + -0x28) = iVar2;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        uVar1 = FUN_1000e83a();
        return uVar1;
      }
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(puVar3 + -4) = 0;
      *(undefined4 *)(puVar3 + -8) = 0;
      *(undefined4 *)(puVar3 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
      *(undefined4 *)(puVar3 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
      *(undefined4 *)(puVar3 + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
      *(undefined4 *)(puVar3 + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined4 *)(puVar3 + -0x1c) = 0x220;
      *(undefined4 *)(puVar3 + -0x20) = *(undefined4 *)(unaff_EBP + 0x20);
      *(undefined4 *)(puVar3 + -0x24) = 0x1000e82d;
      iVar2 = WideCharToMultiByte(*(UINT *)(puVar3 + -0x20),*(DWORD *)(puVar3 + -0x1c),
                                  *(LPCWSTR *)(puVar3 + -0x18),*(int *)(puVar3 + -0x14),
                                  *(LPSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                                  *(LPCSTR *)(puVar3 + -8),*(LPBOOL *)(puVar3 + -4));
      *(int *)(unaff_EBP + -0x28) = iVar2;
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(unaff_EBP + -0x28);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar1;
}


