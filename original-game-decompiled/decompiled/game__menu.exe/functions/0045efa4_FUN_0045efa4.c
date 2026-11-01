
/* ==== FUN_0045efa4 @ 0045efa4 ==== 
 * signature: undefined __register FUN_0045efa4(int param_1, undefined4 * param_2, int * param_3)
 * body: 0045efa4-0045f014
 */

void FUN_0045efa4(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  int local_c;
  undefined4 *local_8;
  
  local_c = 0;
  pcStack_18 = (code *)0x45efc0;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  FUN_00403f28(&local_c,(undefined4 *)"subobject: ",local_8);
  (**(code **)(**(int **)(param_1 + 4) + 0x34))(*(int **)(param_1 + 4),local_c);
  uVar1 = (**(code **)(*param_3 + 8))();
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),uVar1);
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_0045f01c;
  pcStack_1c = (code *)0x45f014;
  FUN_00403c80(&local_c,2);
  return;
}


