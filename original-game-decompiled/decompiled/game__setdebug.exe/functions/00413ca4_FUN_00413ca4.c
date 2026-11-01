
/* ==== FUN_00413ca4 @ 00413ca4 ==== 
 * signature: undefined __register FUN_00413ca4(int param_1, int param_2)
 * body: 00413ca4-00413cc7
 */

void FUN_00413ca4(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    FUN_0040f164(*(int **)(param_1 + 0x14),param_2);
    if ((*(int **)(param_1 + 0x14))[2] == 0) {
      FUN_00402d14(*(int **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}


