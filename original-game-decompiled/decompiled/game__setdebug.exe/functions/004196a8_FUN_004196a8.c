
/* ==== FUN_004196a8 @ 004196a8 ==== 
 * signature: undefined4 __register FUN_004196a8(int param_1)
 * body: 004196a8-004196bc
 */

undefined4 FUN_004196a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  return uVar1;
}


