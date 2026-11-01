
/* ==== FUN_1000e69c @ 1000e69c ==== 
 * signature: undefined4 __stdcall FUN_1000e69c(void)
 * body: 1000e69c-1000e78b
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_1000e69c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar2 + -0x14) = 1;
    *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar3 = (undefined1 *)(iVar2 + -0x1c);
    *(undefined4 *)(iVar2 + -0x1c) = 0x1000e6d6;
    iVar2 = MultiByteToWideChar(*(UINT *)(iVar2 + -0x18),*(DWORD *)(iVar2 + -0x14),
                                *(LPCSTR *)(iVar2 + -0x10),*(int *)(iVar2 + -0xc),
                                *(LPWSTR *)(iVar2 + -8),*(int *)(iVar2 + -4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(puVar3 + -4) = 0;
      *(undefined4 *)(puVar3 + -8) = 0;
      *(undefined4 *)(puVar3 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
      *(undefined4 *)(puVar3 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(puVar3 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(puVar3 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
      puVar4 = puVar3 + -0x1c;
      *(undefined4 *)(puVar3 + -0x1c) = 0x1000e6fb;
      iVar2 = LCMapStringW(*(LCID *)(puVar3 + -0x18),*(DWORD *)(puVar3 + -0x14),
                           *(LPCWSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                           *(LPWSTR *)(puVar3 + -8),*(int *)(puVar3 + -4));
      *(int *)(unaff_EBP + -0x28) = iVar2;
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        uVar1 = 0;
      }
      else if ((*(uint *)(unaff_EBP + 0xc) & 0x400) == 0) {
        *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x28);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        *(undefined4 *)(puVar4 + -4) = 0x1000e777;
        FUN_10008bb0();
        *(undefined1 **)(unaff_EBP + -0x34) = puVar4;
        *(undefined1 **)(unaff_EBP + -0x18) = puVar4;
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          uVar1 = 0;
        }
        else {
          *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(unaff_EBP + -0x2c);
          *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(unaff_EBP + -0x20);
          *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
          *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
          *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(puVar4 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
          puVar5 = puVar4 + -0x1c;
          *(undefined4 *)(puVar4 + -0x1c) = 0x1000e7ce;
          iVar2 = LCMapStringW(*(LCID *)(puVar4 + -0x18),*(DWORD *)(puVar4 + -0x14),
                               *(LPCWSTR *)(puVar4 + -0x10),*(int *)(puVar4 + -0xc),
                               *(LPWSTR *)(puVar4 + -8),*(int *)(puVar4 + -4));
          if (iVar2 == 0) {
            uVar1 = 0;
          }
          else if (*(int *)(unaff_EBP + 0x1c) == 0) {
            *(undefined4 *)(puVar5 + -4) = 0;
            *(undefined4 *)(puVar5 + -8) = 0;
            *(undefined4 *)(puVar5 + -0xc) = 0;
            *(undefined4 *)(puVar5 + -0x10) = 0;
            *(undefined4 *)(puVar5 + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
            *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
            *(undefined4 *)(puVar5 + -0x1c) = 0x220;
            *(undefined4 *)(puVar5 + -0x20) = *(undefined4 *)(unaff_EBP + 0x20);
            *(undefined4 *)(puVar5 + -0x24) = 0x1000e7fb;
            iVar2 = WideCharToMultiByte(*(UINT *)(puVar5 + -0x20),*(DWORD *)(puVar5 + -0x1c),
                                        *(LPCWSTR *)(puVar5 + -0x18),*(int *)(puVar5 + -0x14),
                                        *(LPSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                        *(LPCSTR *)(puVar5 + -8),*(LPBOOL *)(puVar5 + -4));
            *(int *)(unaff_EBP + -0x28) = iVar2;
            if (*(int *)(unaff_EBP + -0x28) != 0) {
              uVar1 = FUN_1000e83a();
              return uVar1;
            }
            uVar1 = 0;
          }
          else {
            *(undefined4 *)(puVar5 + -4) = 0;
            *(undefined4 *)(puVar5 + -8) = 0;
            *(undefined4 *)(puVar5 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
            *(undefined4 *)(puVar5 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
            *(undefined4 *)(puVar5 + -0x14) = *(undefined4 *)(unaff_EBP + -0x2c);
            *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
            *(undefined4 *)(puVar5 + -0x1c) = 0x220;
            *(undefined4 *)(puVar5 + -0x20) = *(undefined4 *)(unaff_EBP + 0x20);
            *(undefined4 *)(puVar5 + -0x24) = 0x1000e82d;
            iVar2 = WideCharToMultiByte(*(UINT *)(puVar5 + -0x20),*(DWORD *)(puVar5 + -0x1c),
                                        *(LPCWSTR *)(puVar5 + -0x18),*(int *)(puVar5 + -0x14),
                                        *(LPSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                        *(LPCSTR *)(puVar5 + -8),*(LPBOOL *)(puVar5 + -4));
            *(int *)(unaff_EBP + -0x28) = iVar2;
            if (*(int *)(unaff_EBP + -0x28) == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = *(undefined4 *)(unaff_EBP + -0x28);
            }
          }
        }
      }
      else {
        if (*(int *)(unaff_EBP + 0x1c) == 0) {
LAB_1000e756:
          uVar1 = FUN_1000e83a();
          return uVar1;
        }
        if (*(int *)(unaff_EBP + 0x1c) < *(int *)(unaff_EBP + -0x28)) {
          uVar1 = 0;
        }
        else {
          *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(unaff_EBP + 0x1c);
          *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(unaff_EBP + 0x18);
          *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
          *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
          *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(puVar4 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
          *(undefined4 *)(puVar4 + -0x1c) = 0x1000e74b;
          iVar2 = LCMapStringW(*(LCID *)(puVar4 + -0x18),*(DWORD *)(puVar4 + -0x14),
                               *(LPCWSTR *)(puVar4 + -0x10),*(int *)(puVar4 + -0xc),
                               *(LPWSTR *)(puVar4 + -8),*(int *)(puVar4 + -4));
          if (iVar2 != 0) goto LAB_1000e756;
          uVar1 = 0;
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar1;
}


