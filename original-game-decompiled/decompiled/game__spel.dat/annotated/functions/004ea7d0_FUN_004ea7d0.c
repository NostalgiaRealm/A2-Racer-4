
/* ==== FUN_004ea7d0 @ 004ea7d0 ==== 
 * signature: undefined __fastcall FUN_004ea7d0(int param_1)
 * body: 004ea7d0-004ea809
 */

void __fastcall FUN_004ea7d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_004ec720(param_1);
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))();
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + iVar3 * 4);
      if ((char)piVar1[0x28] != '\0') {
        (**(code **)(*piVar1 + 0xc))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}


