
/* ==== FUN_0041a860 @ 0041a860 ==== 
 * signature: undefined4 * __fastcall FUN_0041a860(undefined4 * param_1)
 * body: 0041a860-0041a956
 */

undefined4 * __fastcall FUN_0041a860(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00569c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041c530(param_1);
  local_4 = 0;
  FUN_0041c530(param_1 + 4);
  local_4._0_1_ = 1;
  FUN_0041c530(param_1 + 8);
  local_4._0_1_ = 2;
  FUN_0041c530(param_1 + 0xc);
  local_4._0_1_ = 3;
  FUN_0041c530(param_1 + 0x10);
  local_4._0_1_ = 4;
  FUN_0041c530(param_1 + 0x14);
  local_4._0_1_ = 5;
  FUN_0041c530(param_1 + 0x18);
  local_4._0_1_ = 6;
  FUN_00558643(param_1 + 0x1f,0x10,7,FUN_0041c530);
  local_4._0_1_ = 7;
  FUN_00558643(param_1 + 0x3b,0x10,7,FUN_0041c530);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00558643(param_1 + 0x57,0x10,7,FUN_0041c530);
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  ExceptionList = local_c;
  return param_1;
}


