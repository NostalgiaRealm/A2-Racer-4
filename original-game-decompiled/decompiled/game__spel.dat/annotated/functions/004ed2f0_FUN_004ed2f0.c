
/* ==== FUN_004ed2f0 @ 004ed2f0 ==== 
 * signature: undefined4 * __fastcall FUN_004ed2f0(undefined4 * param_1)
 * body: 004ed2f0-004ed33f
 */

undefined4 * __fastcall FUN_004ed2f0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f1a90(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00578228;
  FUN_0051ed40();
  FUN_004ed3b0(param_1);
  ExceptionList = local_c;
  return param_1;
}


