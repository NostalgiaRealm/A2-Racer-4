
/* ==== FUN_00442ca8 @ 00442ca8 ==== 
 * signature: undefined __register FUN_00442ca8(int param_1)
 * body: 00442ca8-00442cce
 */

void FUN_00442ca8(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00442c6c(param_1);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_00440e34();
    FUN_00442b0c(param_1);
  }
  return;
}


