
/* ==== FUN_0043f018 @ 0043f018 ==== 
 * signature: undefined4 __register FUN_0043f018(int param_1)
 * body: 0043f018-0043f025
 */

undefined4 FUN_0043f018(int param_1)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
}


