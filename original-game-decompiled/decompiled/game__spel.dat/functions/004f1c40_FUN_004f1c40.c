
/* ==== FUN_004f1c40 @ 004f1c40 ==== 
 * signature: undefined __fastcall FUN_004f1c40(int param_1)
 * body: 004f1c40-004f1c78
 */

void __fastcall FUN_004f1c40(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xa4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xa8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}


