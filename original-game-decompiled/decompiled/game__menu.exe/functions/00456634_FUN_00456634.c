
/* ==== FUN_00456634 @ 00456634 ==== 
 * signature: undefined __register FUN_00456634(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00456634-00456653
 */

void FUN_00456634(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_00455f74(param_1,param_2,param_3);
  FUN_00457048((int)param_1,(int)piVar1);
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}


