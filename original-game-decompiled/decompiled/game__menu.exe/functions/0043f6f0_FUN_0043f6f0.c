
/* ==== FUN_0043f6f0 @ 0043f6f0 ==== 
 * signature: undefined4 __register FUN_0043f6f0(int param_1)
 * body: 0043f6f0-0043f70f
 */

undefined4 FUN_0043f6f0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


