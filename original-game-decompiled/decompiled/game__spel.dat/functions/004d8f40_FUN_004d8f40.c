
/* ==== FUN_004d8f40 @ 004d8f40 ==== 
 * signature: undefined __fastcall FUN_004d8f40(int param_1)
 * body: 004d8f40-004d8f83
 */

void __fastcall FUN_004d8f40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x60);
  iVar3 = 0;
  if (piVar2 != *(int **)(param_1 + 100)) {
    do {
      *(int *)(*piVar2 + 0x2c) = iVar3;
      iVar1 = FUN_004d9a70(*(int *)(*piVar2 + 0x20));
      iVar3 = iVar3 + iVar1;
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 100));
  }
  FUN_004da4a0(param_1 + 0x44);
  FUN_004da4a0(param_1 + 0x30);
  return;
}


