
/* ==== FUN_004c3b40 @ 004c3b40 ==== 
 * signature: undefined __fastcall FUN_004c3b40(int param_1)
 * body: 004c3b40-004c3b58
 */

void __fastcall FUN_004c3b40(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


