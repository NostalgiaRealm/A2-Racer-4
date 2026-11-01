
/* ==== FUN_00436b5c @ 00436b5c ==== 
 * signature: undefined __register FUN_00436b5c(int param_1)
 * body: 00436b5c-00436b6f
 */

void FUN_00436b5c(int param_1)

{
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) < 1) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    FUN_0043833c(param_1);
  }
  return;
}


