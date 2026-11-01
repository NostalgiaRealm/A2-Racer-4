
/* ==== FUN_10014d23 @ 10014d23 ==== 
 * signature: undefined FUN_10014d23(void)
 * body: 10014d23-10014d81
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

int FUN_10014d23(void)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
    *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
    *(undefined4 *)(iVar1 + -0x14) = 1;
    *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar2 = (undefined1 *)(iVar1 + -0x1c);
    *(undefined4 *)(iVar1 + -0x1c) = 0x10014d5a;
    iVar1 = MultiByteToWideChar(*(UINT *)(iVar1 + -0x18),*(DWORD *)(iVar1 + -0x14),
                                *(LPCSTR *)(iVar1 + -0x10),*(int *)(iVar1 + -0xc),
                                *(LPWSTR *)(iVar1 + -8),*(int *)(iVar1 + -4));
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(puVar2 + -4) = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined4 *)(puVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(puVar2 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
      *(undefined4 *)(puVar2 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(puVar2 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(puVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(puVar2 + -0x1c) = 0x10014d80;
      iVar1 = CompareStringW(*(LCID *)(puVar2 + -0x18),*(DWORD *)(puVar2 + -0x14),
                             *(PCNZWCH *)(puVar2 + -0x10),*(int *)(puVar2 + -0xc),
                             *(PCNZWCH *)(puVar2 + -8),*(int *)(puVar2 + -4));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar1;
}


