
/* ==== FUN_0040f118 @ 0040f118 ==== 
 * signature: undefined __register FUN_0040f118(int * param_1, int param_2, int param_3)
 * body: 0040f118-0040f163
 */

void FUN_0040f118(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_0040efb0(*param_1,(undefined4 *)PTR_PTR_00446cd8,param_2);
  }
  iVar1 = *(int *)(param_1[1] + param_2 * 4);
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,2);
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}


