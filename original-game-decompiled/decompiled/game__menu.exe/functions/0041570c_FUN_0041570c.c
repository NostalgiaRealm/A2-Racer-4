
/* ==== FUN_0041570c @ 0041570c ==== 
 * signature: undefined __register FUN_0041570c(int param_1, int param_2)
 * body: 0041570c-00415730
 */

void FUN_0041570c(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_00410448(*(int **)(param_1 + 0x10),param_2);
  if ((*(int **)(param_1 + 0x10))[2] == 0) {
    FUN_00402f9c(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


