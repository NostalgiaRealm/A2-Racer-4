
/* ==== FUN_0043b2e4 @ 0043b2e4 ==== 
 * signature: undefined __register FUN_0043b2e4(int param_1, int param_2)
 * body: 0043b2e4-0043b2f5
 */

void FUN_0043b2e4(int param_1,int param_2)

{
  *(int *)(param_2 + 4) = param_1;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    FUN_00410104(*(int **)(param_1 + 0x40),param_2);
  }
  return;
}


