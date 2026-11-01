
/* ==== FUN_0041b9ac @ 0041b9ac ==== 
 * signature: undefined4 __register FUN_0041b9ac(int param_1)
 * body: 0041b9ac-0041b9c0
 */

undefined4 FUN_0041b9ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  }
  return uVar1;
}


