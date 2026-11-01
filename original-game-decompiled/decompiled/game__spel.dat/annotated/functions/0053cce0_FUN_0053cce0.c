
/* ==== FUN_0053cce0 @ 0053cce0 ==== 
 * signature: undefined __fastcall FUN_0053cce0(int param_1)
 * body: 0053cce0-0053cd18
 */

void __fastcall FUN_0053cce0(int param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005742a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0050dfc0(param_1 + 0x20);
  ExceptionList = local_c;
  return;
}


