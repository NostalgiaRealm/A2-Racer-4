
/* ==== FUN_0041c694 @ 0041c694 ==== 
 * signature: undefined __register FUN_0041c694(int * param_1, int param_2, undefined4 param_3)
 * body: 0041c694-0041c6cc
 */

void FUN_0041c694(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (param_1[8] == 0) {
    FUN_0041c1c8((int)param_1);
    param_3 = extraout_ECX;
  }
  iVar1 = param_1[8];
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (param_2 != *(int *)(iVar1 + 0xc)) {
    FUN_0041c7a8((int)param_1,0,param_3);
    *(int *)(param_1[8] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


