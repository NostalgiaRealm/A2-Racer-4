
/* ==== FUN_00469900 @ 00469900 ==== 
 * signature: undefined __fastcall FUN_00469900(int * param_1)
 * body: 00469900-00469953
 */

void __fastcall FUN_00469900(int *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056ace6;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00469a10(param_1);
  local_4 = 0xffffffff;
  FUN_005586c5(param_1 + 2,0x10,0x40,FUN_004695c0);
  ExceptionList = local_c;
  return;
}


