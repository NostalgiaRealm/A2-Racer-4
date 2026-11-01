
/* ==== FUN_004350b0 @ 004350b0 ==== 
 * signature: undefined4 __register FUN_004350b0(int param_1)
 * body: 004350b0-004350cf
 */

undefined4 FUN_004350b0(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x38))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


