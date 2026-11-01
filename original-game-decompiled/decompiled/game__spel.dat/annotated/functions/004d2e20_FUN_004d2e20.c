
/* ==== FUN_004d2e20 @ 004d2e20 ==== 
 * signature: undefined __cdecl FUN_004d2e20(void * param_1, int param_2)
 * body: 004d2e20-004d2e62
 */

void __cdecl FUN_004d2e20(void *param_1,int param_2)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056fc91;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004cef20(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


