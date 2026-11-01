
/* ==== FUN_00485e50 @ 00485e50 ==== 
 * signature: undefined __register FUN_00485e50(int param_1, int param_2)
 * body: 00485e50-00485e72
 */

void FUN_00485e50(int param_1,int param_2)

{
  FUN_00410104(*(int **)(param_1 + 0x240),param_2);
  *(int *)(param_2 + 500) = param_1;
  FUN_004857d8(param_2);
  return;
}


