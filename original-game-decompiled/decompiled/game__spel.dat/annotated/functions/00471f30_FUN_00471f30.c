
/* ==== FUN_00471f30 @ 00471f30 ==== 
 * signature: undefined __fastcall FUN_00471f30(undefined4 * param_1)
 * body: 00471f30-00471f9b
 */

void __fastcall FUN_00471f30(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  int local_4;
  
  pcStack_8 = FUN_0056b31e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005769f0;
  local_4 = 2;
  FUN_00473710(param_1 + 0x1e);
  local_4._0_1_ = 1;
  FUN_00473710(param_1 + 0x19);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00473710(param_1 + 0x14);
  local_4 = 0xffffffff;
  FUN_00470600(param_1);
  ExceptionList = local_c;
  return;
}


