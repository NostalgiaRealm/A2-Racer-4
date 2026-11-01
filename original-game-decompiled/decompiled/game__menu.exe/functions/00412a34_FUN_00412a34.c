
/* ==== FUN_00412a34 @ 00412a34 ==== 
 * signature: undefined __register FUN_00412a34(int * param_1, int param_2)
 * body: 00412a34-00412a58
 */

void FUN_00412a34(int *param_1,int param_2)

{
  undefined4 uVar1;
  int local_8;
  
  local_8 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,&local_8);
  FUN_0041298c((int)param_1,uVar1,param_1[2]);
  param_1[4] = local_8;
  return;
}


