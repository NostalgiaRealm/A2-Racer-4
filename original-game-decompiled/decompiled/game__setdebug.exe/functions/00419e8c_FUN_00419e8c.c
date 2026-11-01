
/* ==== FUN_00419e8c @ 00419e8c ==== 
 * signature: undefined __register FUN_00419e8c(int * param_1, int param_2, undefined4 param_3)
 * body: 00419e8c-00419ec4
 */

void FUN_00419e8c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  
  if (param_1[8] == 0) {
    FUN_00419a50((int)param_1);
    param_3 = extraout_ECX;
  }
  iVar1 = param_1[8];
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  if (param_2 != *(int *)(iVar1 + 0xc)) {
    FUN_00419fa0((int)param_1,0,param_3);
    *(int *)(param_1[8] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


