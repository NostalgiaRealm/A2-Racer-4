
/* ==== FUN_0049ba20 @ 0049ba20 ==== 
 * signature: undefined __fastcall FUN_0049ba20(undefined4 * param_1)
 * body: 0049ba20-0049ba6f
 */

void __fastcall FUN_0049ba20(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e93c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577164;
  local_4 = 0;
  FUN_00498ce0(param_1,param_1);
  local_4 = 0xffffffff;
  FUN_00498c10(param_1);
  ExceptionList = local_c;
  return;
}


