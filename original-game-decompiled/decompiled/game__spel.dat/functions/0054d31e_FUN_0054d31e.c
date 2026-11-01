
/* ==== FUN_0054d31e @ 0054d31e ==== 
 * signature: undefined __stdcall FUN_0054d31e(void)
 * body: 0054d31e-0054d3cc
 */

void FUN_0054d31e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_0055b39c();
  uVar6 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(extraout_ECX + 0xc) <= uVar6) {
    uVar6 = uVar6 + 1;
    if (uVar6 < 0x20) {
      uVar6 = 0x20;
    }
    piVar4 = FUN_0055a9b4(*(int **)(extraout_ECX + 8),(uint *)(uVar6 << 2));
    if (piVar4 == (int *)0x0) {
      FUN_0054efbd();
    }
    *(int **)(extraout_ECX + 8) = piVar4;
    while (*(uint *)(extraout_ECX + 0xc) < uVar6) {
      *(undefined4 *)(*(int *)(extraout_ECX + 8) + *(int *)(extraout_ECX + 0xc) * 4) = 0;
      *(int *)(extraout_ECX + 0xc) = *(int *)(extraout_ECX + 0xc) + 1;
    }
    uVar6 = *(uint *)(unaff_EBP + 0xc);
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  uVar2 = *(uint *)(*(int *)(extraout_ECX + 8) + uVar6 * 4);
  if (uVar2 != 0) {
    iVar3 = *(int *)(uVar2 + 4);
    if ((iVar3 != 0) && (iVar3 != -1)) {
      *(int *)(uVar2 + 4) = iVar3 + -1;
    }
    puVar5 = (undefined4 *)(~-(uint)(*(int *)(uVar2 + 4) != 0) & uVar2);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(int *)(*(int *)(extraout_ECX + 8) + uVar6 * 4) = iVar1;
  return;
}


