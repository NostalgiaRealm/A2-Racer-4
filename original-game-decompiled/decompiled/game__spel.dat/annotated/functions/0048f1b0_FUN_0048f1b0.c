
/* ==== FUN_0048f1b0 @ 0048f1b0 ==== 
 * signature: undefined __fastcall FUN_0048f1b0(int param_1)
 * body: 0048f1b0-0048f248
 */

void __fastcall FUN_0048f1b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x2b0))();
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2b4) + 4) + -4 + iVar3 * 4) = 0;
      iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x2b0))();
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x2a8))();
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x2ac) + 4) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2ac) + 4) + -4 + iVar3 * 4) = 0;
      iVar2 = (*(code *)**(undefined4 **)(param_1 + 0x2a8))();
    } while (iVar3 < iVar2);
  }
  return;
}


