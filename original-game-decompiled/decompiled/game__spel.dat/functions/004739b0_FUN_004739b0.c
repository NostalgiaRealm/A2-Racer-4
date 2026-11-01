
/* ==== FUN_004739b0 @ 004739b0 ==== 
 * signature: undefined __fastcall FUN_004739b0(int param_1)
 * body: 004739b0-004739e8
 */

void __fastcall FUN_004739b0(int param_1)

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
  return;
}


