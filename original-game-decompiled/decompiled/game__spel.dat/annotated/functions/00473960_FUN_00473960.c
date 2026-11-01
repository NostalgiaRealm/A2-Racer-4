
/* ==== FUN_00473960 @ 00473960 ==== 
 * signature: undefined __fastcall FUN_00473960(int param_1)
 * body: 00473960-004739ac
 */

void __fastcall FUN_00473960(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    FUN_0054b339(piVar3);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    piVar3 = piVar2;
  }
  FUN_0054b339(*(LPVOID *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


