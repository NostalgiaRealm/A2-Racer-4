
/* ==== FUN_00413bd8 @ 00413bd8 ==== 
 * signature: undefined __register FUN_00413bd8(int * param_1, int param_2)
 * body: 00413bd8-00413c0d
 */

void FUN_00413bd8(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_2,*(undefined4 *)(param_2 + 8),0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  FUN_0041409c(param_2,'\0');
  FUN_00413b58((int)param_1,param_2);
  return;
}


