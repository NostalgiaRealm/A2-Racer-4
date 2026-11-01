
/* ==== FUN_0042c9a8 @ 0042c9a8 ==== 
 * signature: undefined __register FUN_0042c9a8(int param_1)
 * body: 0042c9a8-0042c9bb
 */

void FUN_0042c9a8(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) < 1) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_0042e188(param_1);
  }
  return;
}


