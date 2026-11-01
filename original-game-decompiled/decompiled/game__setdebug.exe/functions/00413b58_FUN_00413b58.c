
/* ==== FUN_00413b58 @ 00413b58 ==== 
 * signature: undefined __register FUN_00413b58(int param_1, int param_2)
 * body: 00413b58-00413b7c
 */

void FUN_00413b58(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_0040f164(*(int **)(param_1 + 0x10),param_2);
  if ((*(int **)(param_1 + 0x10))[2] == 0) {
    FUN_00402d14(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


