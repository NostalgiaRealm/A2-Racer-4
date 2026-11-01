
/* ==== FUN_1001337d @ 1001337d ==== 
 * signature: undefined FUN_1001337d(void)
 * body: 1001337d-100133f5
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_1001337d(void)

{
  undefined4 uVar1;
  int iVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar2 + -4) = 0;
    *(undefined4 *)(iVar2 + -8) = 0;
    *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(iVar2 + -0x14) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(iVar2 + -0x1c) = 0x220;
    *(undefined4 *)(iVar2 + -0x20) = *(undefined4 *)(unaff_EBP + 0x18);
    puVar4 = (undefined1 *)(iVar2 + -0x24);
    *(undefined4 *)(iVar2 + -0x24) = 0x100133be;
    iVar2 = WideCharToMultiByte(*(UINT *)(iVar2 + -0x20),*(DWORD *)(iVar2 + -0x1c),
                                *(LPCWSTR *)(iVar2 + -0x18),*(int *)(iVar2 + -0x14),
                                *(LPSTR *)(iVar2 + -0x10),*(int *)(iVar2 + -0xc),
                                *(LPCSTR *)(iVar2 + -8),*(LPBOOL *)(iVar2 + -4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)(puVar4 + -4) = 0x100133e1;
      FUN_10008bb0();
      *(undefined1 **)(unaff_EBP + -0x34) = puVar4;
      *(undefined1 **)(unaff_EBP + -0x18) = puVar4;
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x34);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        uVar1 = 0;
      }
      else {
        if (*(int *)(unaff_EBP + 0x1c) == 0) {
          *(undefined4 *)(unaff_EBP + 0x1c) = DAT_1003163c;
        }
        *(undefined2 *)(*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + 0x10) * 2) = 0xffff;
        *(undefined2 *)(*(int *)(unaff_EBP + -0x24) + -2 + *(int *)(unaff_EBP + 0x10) * 2) = 0xffff;
        *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(unaff_EBP + -0x24);
        *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
        *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(unaff_EBP + -0x2c);
        *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + 8);
        *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0x1c);
        puVar5 = puVar4 + -0x18;
        *(undefined4 *)(puVar4 + -0x18) = 0x1001345c;
        BVar3 = GetStringTypeA(*(LCID *)(puVar4 + -0x14),*(DWORD *)(puVar4 + -0x10),
                               *(LPCSTR *)(puVar4 + -0xc),*(int *)(puVar4 + -8),
                               *(LPWORD *)(puVar4 + -4));
        *(BOOL *)(unaff_EBP + -0x20) = BVar3;
        if ((*(short *)(*(int *)(unaff_EBP + -0x24) + -2 + *(int *)(unaff_EBP + 0x10) * 2) == -1) ||
           (*(short *)(*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + 0x10) * 2) != -1)) {
          uVar1 = 0;
        }
        else {
          *(int *)(puVar5 + -4) = *(int *)(unaff_EBP + 0x10) << 1;
          *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
          *(undefined4 *)(puVar5 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
          *(undefined4 *)(puVar5 + -0x10) = 0x1001349f;
          FUN_1000dda0(*(undefined4 **)(puVar5 + -0xc),*(undefined4 **)(puVar5 + -8),
                       *(uint *)(puVar5 + -4));
          uVar1 = *(undefined4 *)(unaff_EBP + -0x20);
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar1;
}


