
/* ==== FUN_0049b3f0 @ 0049b3f0 ==== 
 * signature: undefined __fastcall FUN_0049b3f0(undefined4 * param_1)
 * body: 0049b3f0-0049b43f
 */

void __fastcall FUN_0049b3f0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056e8bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0057714c;
  local_4 = 0;
  FUN_00498ce0(param_1,param_1);
  local_4 = 0xffffffff;
  FUN_00498c10(param_1);
  ExceptionList = local_c;
  return;
}


