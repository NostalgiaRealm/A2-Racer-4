
/* ==== FUN_004103fc @ 004103fc ==== 
 * signature: undefined __register FUN_004103fc(int * param_1, int param_2, int param_3)
 * body: 004103fc-00410447
 */

void FUN_004103fc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_004101ec(*param_1,(undefined4 *)PTR_PTR_004ab930,param_2);
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


