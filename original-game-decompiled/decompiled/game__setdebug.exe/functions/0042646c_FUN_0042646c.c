
/* ==== FUN_0042646c @ 0042646c ==== 
 * signature: undefined4 __register FUN_0042646c(int param_1)
 * body: 0042646c-0042648b
 */

undefined4 FUN_0042646c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x3c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


