
/* ==== FUN_004bb750 @ 004bb750 ==== 
 * signature: undefined __fastcall FUN_004bb750(int param_1)
 * body: 004bb750-004bb798
 */

void __fastcall FUN_004bb750(int param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056f6c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004bc040(param_1);
  local_4 = 0xffffffff;
  FUN_0051ed40();
  ExceptionList = local_c;
  return;
}


