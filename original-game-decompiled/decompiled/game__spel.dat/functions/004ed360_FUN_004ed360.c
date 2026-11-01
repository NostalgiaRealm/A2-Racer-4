
/* ==== FUN_004ed360 @ 004ed360 ==== 
 * signature: undefined __fastcall FUN_004ed360(undefined4 * param_1)
 * body: 004ed360-004ed3ae
 */

void __fastcall FUN_004ed360(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005726b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00578228;
  local_4 = 0;
  FUN_0051ed40();
  local_4 = 0xffffffff;
  FUN_004f1b00(param_1);
  ExceptionList = local_c;
  return;
}


