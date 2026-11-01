
/* ==== FUN_0040f0a0 @ 0040f0a0 ==== 
 * signature: undefined __register FUN_0040f0a0(int * param_1, int param_2, int param_3)
 * body: 0040f0a0-0040f10a
 */

void FUN_0040f0a0(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[2] < param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  if (param_2 < param_1[2]) {
    FUN_004027d0((undefined4 *)(param_1[1] + param_2 * 4),
                 (undefined4 *)(param_1[1] + 4 + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  param_1[2] = param_1[2] + 1;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}


