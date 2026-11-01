
/* ==== FUN_00430c04 @ 00430c04 ==== 
 * signature: undefined __register FUN_00430c04(int param_1, int param_2)
 * body: 00430c04-00430c15
 */

void FUN_00430c04(int param_1,int param_2)

{
  *(int *)(param_2 + 4) = param_1;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    FUN_0040eec8(*(int **)(param_1 + 0x40),param_2);
  }
  return;
}


