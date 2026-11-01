
/* ==== FUN_004882f0 @ 004882f0 ==== 
 * signature: undefined __fastcall FUN_004882f0(void * param_1)
 * body: 004882f0-00488336
 */

void __fastcall FUN_004882f0(void *param_1)

{
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056d4de;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00488ef0((int)param_1);
  FUN_00484fc0(param_1);
  ExceptionList = local_10;
  return;
}


