
/* ==== FUN_0043a87c @ 0043a87c ==== 
 * signature: undefined __register FUN_0043a87c(int param_1, int param_2)
 * body: 0043a87c-0043a892
 */

void FUN_0043a87c(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_0043ad98(*(int *)(param_1 + 4));
  return;
}


