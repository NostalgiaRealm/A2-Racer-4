
/* ==== FUN_004a1db0 @ 004a1db0 ==== 
 * signature: undefined FUN_004a1db0(void)
 * body: 004a1db0-004a1dd4
 */

void FUN_004a1db0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a1d88(param_1);
  TControl_set_Width(param_1,(param_1[0xa9] + -1) * iVar1 + 1);
  (**(code **)(*param_1 + 0x74))();
  return;
}


