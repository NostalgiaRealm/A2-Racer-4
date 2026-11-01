
/* ==== FUN_004dd7d0 @ 004dd7d0 ==== 
 * signature: undefined __fastcall FUN_004dd7d0(int param_1)
 * body: 004dd7d0-004dd808
 */

void __fastcall FUN_004dd7d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_004dc720(param_1);
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != *(int **)(param_1 + 0x4c)) {
    do {
      *(int *)(*piVar2 + 0x2c) = iVar3;
      iVar1 = FUN_004d9a70(*(int *)(*piVar2 + 0x20));
      iVar3 = iVar3 + iVar1;
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x4c));
  }
  return;
}


