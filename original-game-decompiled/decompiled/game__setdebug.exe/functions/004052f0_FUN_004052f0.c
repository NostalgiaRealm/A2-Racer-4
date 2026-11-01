
/* ==== FUN_004052f0 @ 004052f0 ==== 
 * signature: int * __register FUN_004052f0(int * param_1)
 * body: 004052f0-00405304
 */

int * FUN_004052f0(int *param_1)

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


