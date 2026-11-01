
/* ==== FUN_00436848 @ 00436848 ==== 
 * signature: undefined __register FUN_00436848(int param_1, int param_2)
 * body: 00436848-00436862
 */

void FUN_00436848(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00432ea4(*(int **)(param_1 + 0x28),*(int *)(param_2 + 0x28));
    return;
  }
  FUN_00432ea4(*(int **)(param_1 + 0x28),0);
  return;
}


