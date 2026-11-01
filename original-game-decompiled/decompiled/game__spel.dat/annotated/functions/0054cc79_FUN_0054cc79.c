
/* ==== FUN_0054cc79 @ 0054cc79 ==== 
 * signature: undefined __stdcall FUN_0054cc79(void)
 * body: 0054cc79-0054ccf9
 */

void FUN_0054cc79(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *puVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_0055b39c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0057903c;
  iVar4 = extraout_ECX[3];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    uVar1 = *(uint *)(extraout_ECX[2] + iVar4 * 4);
    if (uVar1 != 0) {
      iVar2 = *(int *)(uVar1 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar1 + 4) = iVar2 + -1;
      }
      puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  FUN_00559d4e((LPVOID)extraout_ECX[2]);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004028f0(extraout_ECX + 6,'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_00579044;
  return;
}


