
/* ==== FUN_004fb980 @ 004fb980 ==== 
 * signature: undefined __fastcall FUN_004fb980(int * param_1)
 * body: 004fb980-004fb9e7
 */

void __fastcall FUN_004fb980(int *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_005784d4;
  param_1[0x1e] = (int)&PTR_FUN_005784d0;
  local_4 = 0;
  if ((void *)param_1[0x1f] != (void *)0x0) {
    FUN_0050d1a0((void *)param_1[0x1f],-(uint)(param_1 != (int *)0x0) & (uint)(param_1 + 0x1e));
  }
  local_4 = 0xffffffff;
  FUN_004fb970(param_1);
  ExceptionList = local_c;
  return;
}


