
/* ==== FUN_1000e22a @ 1000e22a ==== 
 * signature: undefined FUN_1000e22a(void)
 * body: 1000e22a-1000e285
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

BOOL FUN_1000e22a(void)

{
  BOOL BVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    BVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(iVar2 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar2 + -0x14) = 1;
    *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 0x18);
    puVar3 = (undefined1 *)(iVar2 + -0x1c);
    *(undefined4 *)(iVar2 + -0x1c) = 0x1000e261;
    iVar2 = MultiByteToWideChar(*(UINT *)(iVar2 + -0x18),*(DWORD *)(iVar2 + -0x14),
                                *(LPCSTR *)(iVar2 + -0x10),*(int *)(iVar2 + -0xc),
                                *(LPWSTR *)(iVar2 + -8),*(int *)(iVar2 + -4));
    *(int *)(unaff_EBP + -0x28) = iVar2;
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      BVar1 = 0;
    }
    else {
      *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined4 *)(puVar3 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 *)(puVar3 + -0xc) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(puVar3 + -0x10) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(puVar3 + -0x14) = 0x1000e284;
      BVar1 = GetStringTypeW(*(DWORD *)(puVar3 + -0x10),*(LPCWSTR *)(puVar3 + -0xc),
                             *(int *)(puVar3 + -8),*(LPWORD *)(puVar3 + -4));
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return BVar1;
}


