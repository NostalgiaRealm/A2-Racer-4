
/* ==== FUN_100133fc @ 100133fc ==== 
 * signature: undefined FUN_100133fc(void)
 * body: 100133fc-100134a6
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined4 FUN_100133fc(void)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  undefined1 *puVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(unaff_EBP + 0x1c) == 0) {
      *(undefined4 *)(unaff_EBP + 0x1c) = DAT_1003163c;
    }
    *(undefined2 *)(*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + 0x10) * 2) = 0xffff;
    *(undefined2 *)(*(int *)(unaff_EBP + -0x24) + -2 + *(int *)(unaff_EBP + 0x10) * 2) = 0xffff;
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)(iVar1 + -8) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(unaff_EBP + 0x1c);
    puVar4 = (undefined1 *)(iVar1 + -0x18);
    *(undefined4 *)(iVar1 + -0x18) = 0x1001345c;
    BVar3 = GetStringTypeA(*(LCID *)(iVar1 + -0x14),*(DWORD *)(iVar1 + -0x10),
                           *(LPCSTR *)(iVar1 + -0xc),*(int *)(iVar1 + -8),*(LPWORD *)(iVar1 + -4));
    *(BOOL *)(unaff_EBP + -0x20) = BVar3;
    if ((*(short *)(*(int *)(unaff_EBP + -0x24) + -2 + *(int *)(unaff_EBP + 0x10) * 2) == -1) ||
       (*(short *)(*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + 0x10) * 2) != -1)) {
      uVar2 = 0;
    }
    else {
      *(int *)(puVar4 + -4) = *(int *)(unaff_EBP + 0x10) << 1;
      *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(unaff_EBP + -0x24);
      *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined4 *)(puVar4 + -0x10) = 0x1001349f;
      FUN_1000dda0(*(undefined4 **)(puVar4 + -0xc),*(undefined4 **)(puVar4 + -8),
                   *(uint *)(puVar4 + -4));
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar2;
}


