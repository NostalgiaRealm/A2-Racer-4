
/* ==== FUN_00544f50 @ 00544f50 ==== 
 * signature: undefined __fastcall FUN_00544f50(int param_1)
 * body: 00544f50-00544fd5
 */

void __fastcall FUN_00544f50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      iVar1 = *(int *)(param_1 + 0x24);
      iVar3 = *(int *)(param_1 + 0x98);
      iVar2 = *(int *)(*(int *)(param_1 + 0x44) + iVar5 * 4);
      *(undefined4 *)(iVar3 + iVar5 * 8) = *(undefined4 *)(iVar1 + iVar2 * 8);
      *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = *(undefined4 *)(iVar1 + 4 + iVar2 * 8);
      iVar1 = *(int *)(param_1 + 0x20) + iVar2 * *(int *)(param_1 + 0x50) * 8;
      iVar3 = 0;
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x8c) + *(int *)(param_1 + 0xa8) * iVar5 * 8);
      if (0 < *(int *)(param_1 + 0x54)) {
        do {
          iVar3 = iVar3 + 1;
          iVar2 = *(int *)(*(int *)(param_1 + 0x44) + -4 + iVar3 * 4);
          *puVar4 = *(undefined4 *)(iVar1 + iVar2 * 8);
          puVar4[1] = *(undefined4 *)(iVar1 + 4 + iVar2 * 8);
          puVar4 = puVar4 + 2;
        } while (iVar3 < *(int *)(param_1 + 0x54));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x54));
  }
  FUN_00545fd0((void *)(param_1 + 0x80));
  return;
}


