
/* ==== FUN_004dd3a0 @ 004dd3a0 ==== 
 * signature: undefined __fastcall FUN_004dd3a0(undefined4 * param_1)
 * body: 004dd3a0-004dd3ee
 */

void __fastcall FUN_004dd3a0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00570c38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00577aa8;
  local_4 = 0;
  param_1[2] = &PTR_FUN_005778c0;
  FUN_004cf650(param_1 + 2);
  *param_1 = &PTR_FUN_00577ad0;
  ExceptionList = local_c;
  return;
}


