
/* ==== FUN_00410104 @ 00410104 ==== 
 * signature: int __register FUN_00410104(int * param_1, int param_2)
 * body: 00410104-00410136
 */

int FUN_00410104(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 == param_1[3]) {
    (**(code **)*param_1)();
  }
  *(int *)(param_1[1] + iVar1 * 4) = param_2;
  param_1[2] = param_1[2] + 1;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_2,0);
  }
  return iVar1;
}


