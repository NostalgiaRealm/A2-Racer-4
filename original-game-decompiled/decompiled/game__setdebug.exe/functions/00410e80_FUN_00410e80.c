
/* ==== FUN_00410e80 @ 00410e80 ==== 
 * signature: undefined __register FUN_00410e80(int * param_1, int param_2)
 * body: 00410e80-00410ea4
 */

void FUN_00410e80(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_8);
  FUN_00410dd8((int)param_1,uVar1,param_1[2]);
  param_1[4] = local_8;
  return;
}


