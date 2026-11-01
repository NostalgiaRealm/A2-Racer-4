
/* ==== FUN_10014333 @ 10014333 ==== 
 * signature: undefined4 __stdcall FUN_10014333(void)
 * body: 10014333-100143ae
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_10014333(void)

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
    *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + 8);
    puVar3 = (undefined1 *)(iVar2 + -0x14);
    *(undefined4 *)(iVar2 + -0x14) = 0x10014364;
    iVar2 = GetLocaleInfoA(*(LCID *)(iVar2 + -0x10),*(LCTYPE *)(iVar2 + -0xc),*(LPSTR *)(iVar2 + -8)
                           ,*(int *)(iVar2 + -4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        *(undefined4 *)(puVar3 + -4) = 0;
        *(undefined4 *)(puVar3 + -8) = 0;
        *(undefined4 *)(puVar3 + -0xc) = 0xffffffff;
        *(undefined4 *)(puVar3 + -0x10) = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined4 *)(puVar3 + -0x14) = 1;
        *(undefined4 *)(puVar3 + -0x18) = *(undefined4 *)(unaff_EBP + 0x18);
        *(undefined4 *)(puVar3 + -0x1c) = 0x10014388;
        iVar2 = MultiByteToWideChar(*(UINT *)(puVar3 + -0x18),*(DWORD *)(puVar3 + -0x14),
                                    *(LPCSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                                    *(LPWSTR *)(puVar3 + -8),*(int *)(puVar3 + -4));
        *(int *)(unaff_EBP + -0x24) = iVar2;
      }
      else {
        *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(unaff_EBP + 0x14);
        *(undefined4 *)(puVar3 + -8) = *(undefined4 *)(unaff_EBP + 0x10);
        *(undefined4 *)(puVar3 + -0xc) = 0xffffffff;
        *(undefined4 *)(puVar3 + -0x10) = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined4 *)(puVar3 + -0x14) = 1;
        *(undefined4 *)(puVar3 + -0x18) = *(undefined4 *)(unaff_EBP + 0x18);
        *(undefined4 *)(puVar3 + -0x1c) = 0x100143a7;
        iVar2 = MultiByteToWideChar(*(UINT *)(puVar3 + -0x18),*(DWORD *)(puVar3 + -0x14),
                                    *(LPCSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                                    *(LPWSTR *)(puVar3 + -8),*(int *)(puVar3 + -4));
        *(int *)(unaff_EBP + -0x24) = iVar2;
      }
      uVar1 = *(undefined4 *)(unaff_EBP + -0x24);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar1;
}


