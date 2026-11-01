
/* ==== FUN_0040ef14 @ 0040ef14 ==== 
 * signature: undefined __register FUN_0040ef14(int * param_1, int param_2)
 * body: 0040ef14-0040ef73
 */

void FUN_0040ef14(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  iVar1 = FUN_0040f024(param_1,param_2);
  param_1[2] = param_1[2] + -1;
  if (param_2 < param_1[2]) {
    FUN_004027d0((undefined4 *)(param_1[1] + 4 + param_2 * 4),
                 (undefined4 *)(param_1[1] + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,iVar1,2);
  }
  return;
}


