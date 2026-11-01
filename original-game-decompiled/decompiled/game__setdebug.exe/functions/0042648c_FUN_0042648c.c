
/* ==== FUN_0042648c @ 0042648c ==== 
 * signature: undefined4 __register FUN_0042648c(int param_1)
 * body: 0042648c-004264ab
 */

undefined4 FUN_0042648c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 8))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


