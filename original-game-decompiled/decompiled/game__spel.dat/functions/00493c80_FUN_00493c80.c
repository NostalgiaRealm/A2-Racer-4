
/* ==== FUN_00493c80 @ 00493c80 ==== 
 * signature: undefined __fastcall FUN_00493c80(int param_1)
 * body: 00493c80-00493cde
 */

void __fastcall FUN_00493c80(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(LPVOID *)(param_1 + 0x18) != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)(param_1 + 0x18));
  }
  iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1c))();
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + iVar2 * 4) != 0) {
        FUN_004928b0();
        FUN_0054b339(*(LPVOID *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + iVar2 * 4));
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 4) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


