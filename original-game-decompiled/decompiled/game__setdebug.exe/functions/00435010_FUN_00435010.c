
/* ==== FUN_00435010 @ 00435010 ==== 
 * signature: undefined4 __register FUN_00435010(int param_1)
 * body: 00435010-0043502f
 */

undefined4 FUN_00435010(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


