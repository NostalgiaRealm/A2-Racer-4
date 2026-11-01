
/* ==== FUN_10014c85 @ 10014c85 ==== 
 * signature: int __stdcall FUN_10014c85(void)
 * body: 10014c85-10014d1c
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

int FUN_10014c85(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar1 + -0x14) = 1;
    *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar2 = (undefined1 *)(iVar1 + -0x1c);
    *(undefined4 *)(iVar1 + -0x1c) = 0x10014cbf;
    iVar1 = MultiByteToWideChar(*(UINT *)(iVar1 + -0x18),*(DWORD *)(iVar1 + -0x14),
                                *(LPCSTR *)(iVar1 + -0x10),*(int *)(iVar1 + -0xc),
                                *(LPWSTR *)(iVar1 + -8),*(int *)(iVar1 + -4));
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(undefined4 *)(puVar2 + -8) = 0;
      *(undefined4 *)(puVar2 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
      *(undefined4 *)(puVar2 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
      *(undefined4 *)(puVar2 + -0x14) = 9;
      *(undefined4 *)(puVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      puVar3 = puVar2 + -0x1c;
      *(undefined4 *)(puVar2 + -0x1c) = 0x10014ce2;
      iVar1 = MultiByteToWideChar(*(UINT *)(puVar2 + -0x18),*(DWORD *)(puVar2 + -0x14),
                                  *(LPCSTR *)(puVar2 + -0x10),*(int *)(puVar2 + -0xc),
                                  *(LPWSTR *)(puVar2 + -8),*(int *)(puVar2 + -4));
      *(int *)(unaff_EBP + -0x20) = iVar1;
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        iVar1 = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -4) = 1;
        *(undefined4 *)(puVar3 + -4) = 0x10014d08;
        FUN_10008bb0();
        *(undefined1 **)(unaff_EBP + -0x48) = puVar3;
        *(undefined1 **)(unaff_EBP + -0x18) = puVar3;
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x48);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          iVar1 = 0;
        }
        else {
          *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(unaff_EBP + -0x20);
          *(undefined4 *)(puVar3 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
          *(undefined4 *)(puVar3 + -0xc) = *(undefined4 *)(unaff_EBP + 0x1c);
          *(undefined4 *)(puVar3 + -0x10) = *(undefined4 *)(unaff_EBP + 0x18);
          *(undefined4 *)(puVar3 + -0x14) = 1;
          *(undefined4 *)(puVar3 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
          puVar4 = puVar3 + -0x1c;
          *(undefined4 *)(puVar3 + -0x1c) = 0x10014d5a;
          iVar1 = MultiByteToWideChar(*(UINT *)(puVar3 + -0x18),*(DWORD *)(puVar3 + -0x14),
                                      *(LPCSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                                      *(LPWSTR *)(puVar3 + -8),*(int *)(puVar3 + -4));
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(unaff_EBP + -0x20);
            *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
            *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(unaff_EBP + -0x1c);
            *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
            *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
            *(undefined4 *)(puVar4 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
            *(undefined4 *)(puVar4 + -0x1c) = 0x10014d80;
            iVar1 = CompareStringW(*(LCID *)(puVar4 + -0x18),*(DWORD *)(puVar4 + -0x14),
                                   *(PCNZWCH *)(puVar4 + -0x10),*(int *)(puVar4 + -0xc),
                                   *(PCNZWCH *)(puVar4 + -8),*(int *)(puVar4 + -4));
          }
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar1;
}


