
/* ==== FUN_004303ec @ 004303ec ==== 
 * signature: undefined4 __register FUN_004303ec(int param_1)
 * body: 004303ec-0043040b
 */

undefined4 FUN_004303ec(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x30))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


