
/* ==== FUN_00405860 @ 00405860 ==== 
 * signature: int * __register FUN_00405860(int * param_1)
 * body: 00405860-00405874
 */

int * FUN_00405860(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = 0;
    (**(code **)(*piVar1 + 8))();
    param_1 = piVar1;
  }
  return param_1;
}


