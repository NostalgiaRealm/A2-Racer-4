
/* ==== FUN_004dc720 @ 004dc720 ==== 
 * signature: undefined __fastcall FUN_004dc720(int param_1)
 * body: 004dc720-004dc759
 */

void __fastcall FUN_004dc720(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = *(int **)(param_1 + 0x34);
  if (piVar2 != *(int **)(param_1 + 0x30)) {
    do {
      piVar2 = piVar2 + -1;
      iVar1 = FUN_004d9a70(*(int *)(*piVar2 + 0x20));
      iVar3 = iVar3 - iVar1;
      *(int *)(*piVar2 + 0x2c) = iVar3;
    } while (piVar2 != *(int **)(param_1 + 0x30));
  }
  return;
}


