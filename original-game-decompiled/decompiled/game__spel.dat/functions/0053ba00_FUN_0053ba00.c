
/* ==== FUN_0053ba00 @ 0053ba00 ==== 
 * signature: undefined __fastcall FUN_0053ba00(int param_1)
 * body: 0053ba00-0053ba3c
 */

void __fastcall FUN_0053ba00(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[0x1f];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(1);
    }
  }
  piVar1 = *(int **)(param_1 + 0xc);
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[0x1f];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(1);
    }
  }
  return;
}


