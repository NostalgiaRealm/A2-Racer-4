
/* ==== FUN_00415b9c @ 00415b9c ==== 
 * signature: undefined4 __register FUN_00415b9c(int param_1)
 * body: 00415b9c-00415ba9
 */

undefined4 FUN_00415b9c(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  return 0;
}


