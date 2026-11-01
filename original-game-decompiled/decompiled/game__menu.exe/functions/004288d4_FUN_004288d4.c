
/* ==== FUN_004288d4 @ 004288d4 ==== 
 * signature: undefined4 __register FUN_004288d4(int param_1)
 * body: 004288d4-004288f3
 */

undefined4 FUN_004288d4(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


