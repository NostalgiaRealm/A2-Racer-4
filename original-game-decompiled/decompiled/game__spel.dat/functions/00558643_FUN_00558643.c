
/* ==== FUN_00558643 @ 00558643 ==== 
 * signature: undefined __stdcall FUN_00558643(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * body: 00558643-005586ac
 */

void FUN_00558643(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  int local_20;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005795a0;
  pcStack_10 = FUN_0055e3b4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_005586ad();
  ExceptionList = local_14;
  return;
}


