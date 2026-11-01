
/* ==== FUN_0049f7e0 @ 0049f7e0 ==== 
 * signature: undefined __fastcall FUN_0049f7e0(undefined4 * param_1)
 * body: 0049f7e0-0049f87c
 */

void __fastcall FUN_0049f7e0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056ebec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005771b4;
  local_4 = 2;
  FUN_004c3fa0((byte *)s_____Exitting_CSndEngine______005aede0);
  FUN_0049f900((int)param_1);
  DAT_00712864 = DAT_00712864 + -1;
  FUN_004c3fa0((byte *)s_____CSndEngine_Exit_done_____005aedc0);
  local_4._0_1_ = 1;
  FUN_005586c5(param_1 + 8,0x10,0x20,FUN_004900b0);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_0049eea0(param_1 + 5);
  local_4 = 0xffffffff;
  thunk_FUN_0049eae0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


