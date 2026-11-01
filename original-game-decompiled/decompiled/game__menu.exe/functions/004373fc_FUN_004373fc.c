
/* ==== FUN_004373fc @ 004373fc ==== 
 * signature: undefined __register FUN_004373fc(int * param_1, undefined4 param_2, uint param_3, int param_4)
 * body: 004373fc-00437442
 */

void FUN_004373fc(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint local_8;
  
  local_8 = param_3;
  FUN_00403c5c(param_1);
  (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),&local_8,4);
  if (0 < (int)local_8) {
    FUN_00404210(param_1,local_8);
    (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),*param_1,local_8);
  }
  return;
}


