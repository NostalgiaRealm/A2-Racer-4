
/* ==== FUN_00544630 @ 00544630 ==== 
 * signature: undefined __fastcall FUN_00544630(int param_1)
 * body: 00544630-00544701
 */

void __fastcall FUN_00544630(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x44) + -4 + *(int *)(param_1 + 0x54) * 4);
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar5 = *(int *)(*(int *)(param_1 + 0x44) + iVar3 * 4) + *(int *)(param_1 + 0x50) * iVar4;
        iVar2 = *(int *)(param_1 + 0x8c);
        iVar6 = *(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0xac) + iVar3;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + iVar6 * 8) = *(undefined4 *)(iVar1 + iVar5 * 8);
        *(undefined4 *)(iVar2 + 4 + iVar6 * 8) = *(undefined4 *)(iVar1 + 4 + iVar5 * 8);
      } while (iVar3 < *(int *)(param_1 + 0x54));
    }
    iVar3 = 0;
    if (*(int *)(param_1 + 0x54) != 1 && -1 < *(int *)(param_1 + 0x54) + -1) {
      do {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x98);
        iVar5 = *(int *)(*(int *)(param_1 + 0x44) + iVar3 * 4) * *(int *)(param_1 + 0x50) + iVar4;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + -8 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar5 * 8);
        *(undefined4 *)(iVar2 + -4 + iVar3 * 8) = *(undefined4 *)(iVar1 + 4 + iVar5 * 8);
      } while (iVar3 < *(int *)(param_1 + 0x54) + -1);
    }
    iVar4 = FUN_005460f0((void *)(param_1 + 0x80));
    if (iVar4 != 1) {
      *(undefined4 *)(param_1 + 0x78) = 2;
      return;
    }
  }
  else {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  }
  return;
}


