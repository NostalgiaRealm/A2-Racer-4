
/* ==== FUN_005018f0 @ 005018f0 ==== 
 * signature: undefined __fastcall FUN_005018f0(int param_1)
 * body: 005018f0-0050193f
 */

void __fastcall FUN_005018f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + iVar3 * 4);
      while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00559d4e(puVar2);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 4));
  }
  if (*(LPVOID *)(param_1 + 0xc) != (LPVOID)0x0) {
    FUN_00559d4e(*(LPVOID *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}


