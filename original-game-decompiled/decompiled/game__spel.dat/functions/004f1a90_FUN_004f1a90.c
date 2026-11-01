
/* ==== FUN_004f1a90 @ 004f1a90 ==== 
 * signature: undefined4 * __fastcall FUN_004f1a90(undefined4 * param_1)
 * body: 004f1a90-004f1ad8
 */

undefined4 * __fastcall FUN_004f1a90(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f0b00(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_005782a8;
  FUN_004f1b10((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


