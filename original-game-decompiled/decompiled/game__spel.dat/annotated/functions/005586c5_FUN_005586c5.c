
/* ==== FUN_005586c5 @ 005586c5 ==== 
 * signature: undefined __stdcall FUN_005586c5(undefined4 param_1, undefined4 param_2, int param_3, undefined * param_4)
 * body: 005586c5-0055872c
 */

void FUN_005586c5(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_005795b0;
  pcStack_10 = FUN_0055e3b4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_0055872d();
  ExceptionList = local_14;
  return;
}


