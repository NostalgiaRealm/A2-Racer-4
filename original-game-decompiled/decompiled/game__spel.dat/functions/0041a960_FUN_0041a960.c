
/* ==== FUN_0041a960 @ 0041a960 ==== 
 * signature: undefined __fastcall FUN_0041a960(undefined4 * param_1)
 * body: 0041a960-0041aa4b
 */

void __fastcall FUN_0041a960(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_00569cda;
  local_c = ExceptionList;
  local_4 = 8;
  ExceptionList = &local_c;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  FUN_005586c5(param_1 + 0x57,0x10,7,FUN_0041c540);
  local_4._0_1_ = 7;
  FUN_005586c5(param_1 + 0x3b,0x10,7,FUN_0041c540);
  local_4._0_1_ = 6;
  FUN_005586c5(param_1 + 0x1f,0x10,7,FUN_0041c540);
  local_4._0_1_ = 5;
  FUN_0041c540(param_1 + 0x18);
  local_4._0_1_ = 4;
  FUN_0041c540(param_1 + 0x14);
  local_4._0_1_ = 3;
  FUN_0041c540(param_1 + 0x10);
  local_4._0_1_ = 2;
  FUN_0041c540(param_1 + 0xc);
  local_4._0_1_ = 1;
  FUN_0041c540(param_1 + 8);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0041c540(param_1 + 4);
  local_4 = 0xffffffff;
  FUN_0041c540(param_1);
  ExceptionList = local_c;
  return;
}


