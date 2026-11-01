
/* ==== FUN_00410150 @ 00410150 ==== 
 * signature: undefined __register FUN_00410150(int * param_1, int param_2)
 * body: 00410150-004101af
 */

void FUN_00410150(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
  }
  iVar1 = FUN_004102b0(param_1,param_2);
  param_1[2] = param_1[2] + -1;
  if (param_2 < param_1[2]) {
    FUN_004028d8((undefined4 *)(param_1[1] + 4 + param_2 * 4),
                 (undefined4 *)(param_1[1] + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,iVar1,2);
  }
  return;
}


