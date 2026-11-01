
/* ==== FUN_0041c06c @ 0041c06c ==== 
 * signature: undefined4 __register FUN_0041c06c(int param_1)
 * body: 0041c06c-0041c083
 */

undefined4 FUN_0041c06c(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_0041c1c8(param_1);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc);
}


