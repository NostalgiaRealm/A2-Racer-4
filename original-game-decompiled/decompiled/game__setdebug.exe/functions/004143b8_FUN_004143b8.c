
/* ==== FUN_004143b8 @ 004143b8 ==== 
 * signature: undefined __register FUN_004143b8(int param_1, int param_2)
 * body: 004143b8-004143c3
 */

void FUN_004143b8(int param_1,int param_2)

{
  *(int *)(param_2 + 0x10) = param_1;
  FUN_0040eec8(*(int **)(param_1 + 0x40),param_2);
  return;
}


