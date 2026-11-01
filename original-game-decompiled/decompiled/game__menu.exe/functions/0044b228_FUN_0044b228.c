
/* ==== FUN_0044b228 @ 0044b228 ==== 
 * signature: undefined __register FUN_0044b228(int param_1, int param_2)
 * body: 0044b228-0044b26f
 */

void FUN_0044b228(int param_1,int param_2)

{
  FUN_00410448(*(int **)(param_1 + 0x44),param_2);
  FUN_00410448(*(int **)(param_1 + 0x40),param_2);
  FUN_0044dbd8(DAT_004ac7d4);
  if ((*(int *)(*(int *)(param_1 + 0x44) + 8) == 0) && (*(int *)(DAT_004ac7d4 + 0x74) != 0)) {
    FUN_00435df0(*(int **)(DAT_004ac7d4 + 0x74));
  }
  return;
}


