
/* ==== FUN_0055d5ca @ 0055d5ca ==== 
 * signature: undefined __stdcall FUN_0055d5ca(void)
 * body: 0055d5ca-0055d5f6
 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_0055d5ca(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  
  iVar2 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = *(int *)(unaff_EBP + 0x10);
  iVar4 = *(int *)(unaff_EBP + 8);
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  while( true ) {
    iVar5 = *(int *)(*(int *)(iVar3 + 8) + iVar5 * 8);
    *(int *)(unaff_EBP + -0x1c) = iVar5;
    if (iVar5 == *(int *)(unaff_EBP + 0x14)) break;
    if ((iVar5 < 0) || (*(int *)(iVar3 + 4) <= iVar5)) {
      *(undefined4 *)(iVar2 + -4) = 0x55d59f;
      FUN_0055dab2();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = *(int *)(*(int *)(iVar3 + 8) + 4 + iVar5 * 8);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar2 + -4) = 0x103;
      *(int *)(iVar2 + -8) = iVar4;
      *(int *)(iVar2 + -0xc) = iVar1;
      *(undefined4 *)(iVar2 + -0x10) = 0x55d5ba;
      __CallSettingFrame_12
                (*(undefined4 *)(iVar2 + -0xc),*(undefined4 *)(iVar2 + -8),*(int *)(iVar2 + -4));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  *(int *)(iVar4 + 8) = iVar5;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}


