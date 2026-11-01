
/* ==== FUN_00419690 @ 00419690 ==== 
 * signature: undefined4 __register FUN_00419690(int param_1)
 * body: 00419690-004196a4
 */

undefined4 FUN_00419690(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  }
  return uVar1;
}


