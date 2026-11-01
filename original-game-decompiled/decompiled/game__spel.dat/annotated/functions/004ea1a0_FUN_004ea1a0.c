
/* ==== FUN_004ea1a0 @ 004ea1a0 ==== 
 * signature: undefined __fastcall FUN_004ea1a0(int param_1)
 * body: 004ea1a0-004ea1cf
 */

void __fastcall FUN_004ea1a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))();
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


