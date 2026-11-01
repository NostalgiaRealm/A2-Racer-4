
/* ==== FUN_00415f6c @ 00415f6c ==== 
 * signature: undefined __register FUN_00415f6c(int param_1, int param_2)
 * body: 00415f6c-00415f77
 */

void FUN_00415f6c(int param_1,int param_2)

{
  *(int *)(param_2 + 0x10) = param_1;
  FUN_00410104(*(int **)(param_1 + 0x40),param_2);
  return;
}


