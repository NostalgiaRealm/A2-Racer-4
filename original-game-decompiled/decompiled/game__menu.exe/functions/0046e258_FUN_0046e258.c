
/* ==== FUN_0046e258 @ 0046e258 ==== 
 * signature: undefined4 __register FUN_0046e258(int param_1)
 * body: 0046e258-0046e272
 */

undefined4 FUN_0046e258(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  }
  return 0;
}


