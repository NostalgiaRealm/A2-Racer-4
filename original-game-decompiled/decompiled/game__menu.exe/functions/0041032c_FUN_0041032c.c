
/* ==== FUN_0041032c @ 0041032c ==== 
 * signature: undefined __register FUN_0041032c(int * param_1, int param_2, int param_3)
 * body: 0041032c-00410396
 */

void FUN_0041032c(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[2] < param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  if (param_2 < param_1[2]) {
    FUN_004028d8((undefined4 *)(param_1[1] + param_2 * 4),
                 (undefined4 *)(param_1[1] + 4 + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  param_1[2] = param_1[2] + 1;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}


