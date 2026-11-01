
/* ==== FUN_0055391c @ 0055391c ==== 
 * signature: undefined __stdcall FUN_0055391c(void)
 * body: 0055391c-0055395f
 */

void FUN_0055391c(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  
  FUN_0055b39c();
  uVar3 = *(uint *)(unaff_EBP + 8) | 0x1f;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if (0x7ffffffd < uVar3) {
    uVar3 = *(uint *)(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = uVar3 + 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  pvVar2 = operator_new(iVar1 * 2);
  *(void **)(unaff_EBP + 8) = pvVar2;
  FUN_00553987();
  return;
}


