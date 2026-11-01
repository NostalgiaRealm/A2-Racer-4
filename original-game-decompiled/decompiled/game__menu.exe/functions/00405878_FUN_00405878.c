
/* ==== FUN_00405878 @ 00405878 ==== 
 * signature: undefined __register FUN_00405878(int * param_1, int * param_2)
 * body: 00405878-00405892
 */

void FUN_00405878(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  *param_1 = (int)param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))();
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  return;
}


