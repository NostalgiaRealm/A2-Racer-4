
/* ==== FUN_00485b5c @ 00485b5c ==== 
 * signature: undefined __register FUN_00485b5c(int * param_1, int param_2, WPARAM param_3)
 * body: 00485b5c-00485bb0
 */

void FUN_00485b5c(int *param_1,int param_2,WPARAM param_3)

{
  int iVar1;
  
  iVar1 = param_1[0x91];
  (**(code **)(*(int *)param_1[0x84] + 0x44))((int *)param_1[0x84],param_3);
  if (param_2 == iVar1) {
    iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
    if (iVar1 <= (int)param_3) {
      iVar1 = (**(code **)(*(int *)param_1[0x84] + 0x14))();
      param_3 = iVar1 - 1;
    }
    FUN_00484e98(param_1,param_3);
  }
  (**(code **)(*param_1 + 0xc0))();
  return;
}


