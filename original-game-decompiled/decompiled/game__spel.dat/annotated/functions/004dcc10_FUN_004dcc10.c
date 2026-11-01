
/* ==== FUN_004dcc10 @ 004dcc10 ==== 
 * signature: undefined __cdecl FUN_004dcc10(int * param_1, undefined4 param_2, int param_3)
 * body: 004dcc10-004dcca5
 */

void __cdecl FUN_004dcc10(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 local_30 [18];
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00570b93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e2520(local_30,param_1);
  local_4 = 0;
  piVar1 = operator_new(0x2c);
  local_4._0_1_ = 1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    param_1 = piVar1;
    FUN_004e24e0(piVar1 + 1,local_30);
    *piVar1 = (int)&PTR_FUN_00577a40;
    piVar1[10] = param_2;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1 = piVar1;
  FUN_004a5620((void *)(param_3 + 4),*(undefined4 **)(param_3 + 0xc),1,&param_1);
  ExceptionList = local_c;
  return;
}


