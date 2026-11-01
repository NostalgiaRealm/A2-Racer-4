
/* ==== FUN_004ee2b0 @ 004ee2b0 ==== 
 * signature: undefined4 * __fastcall FUN_004ee2b0(undefined4 * param_1)
 * body: 004ee2b0-004ee2ff
 */

undefined4 * __fastcall FUN_004ee2b0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_00572878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f1a90(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00578250;
  FUN_004ee510((int)param_1);
  FUN_004ee370(param_1);
  ExceptionList = local_c;
  return param_1;
}


