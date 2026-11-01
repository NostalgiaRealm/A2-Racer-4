
/* ==== FUN_004402a0 @ 004402a0 ==== 
 * signature: undefined __register FUN_004402a0(int param_1, int param_2)
 * body: 004402a0-004402e7
 */

void FUN_004402a0(int param_1,int param_2)

{
  FUN_0040f164(*(int **)(param_1 + 0x44),param_2);
  FUN_0040f164(*(int **)(param_1 + 0x40),param_2);
  FUN_00442a4c(DAT_004477c4);
  if ((*(int *)(*(int *)(param_1 + 0x44) + 8) == 0) && (*(int *)(DAT_004477c4 + 0x74) != 0)) {
    FUN_0042bc80(*(int **)(DAT_004477c4 + 0x74));
  }
  return;
}


