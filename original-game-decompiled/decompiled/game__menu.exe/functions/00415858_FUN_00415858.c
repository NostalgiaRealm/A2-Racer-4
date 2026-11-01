
/* ==== FUN_00415858 @ 00415858 ==== 
 * signature: undefined __register FUN_00415858(int param_1, int param_2)
 * body: 00415858-0041587b
 */

void FUN_00415858(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    FUN_00410448(*(int **)(param_1 + 0x14),param_2);
    if ((*(int **)(param_1 + 0x14))[2] == 0) {
      FUN_00402f9c(*(int **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}


