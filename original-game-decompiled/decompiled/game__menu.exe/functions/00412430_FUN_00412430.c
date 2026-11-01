
/* ==== FUN_00412430 @ 00412430 ==== 
 * signature: undefined __register FUN_00412430(int * param_1, int param_2, undefined4 * param_3)
 * body: 00412430-00412495
 */

void FUN_00412430(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x74))();
  if (param_1[4] == param_1[5]) {
    FUN_0041237c(param_1);
  }
  if (param_2 < param_1[4]) {
    FUN_004028d8((undefined4 *)(param_1[3] + param_2 * 8),
                 (undefined4 *)(param_1[3] + 8 + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  piVar1 = (int *)(param_1[3] + param_2 * 8);
  *piVar1 = 0;
  piVar1[1] = 0;
  FUN_00403cb0(piVar1,param_3);
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x70))();
  return;
}


