
/* ==== FUN_004ef2b0 @ 004ef2b0 ==== 
 * signature: undefined4 * __fastcall FUN_004ef2b0(undefined4 * param_1)
 * body: 004ef2b0-004ef2fc
 */

undefined4 * __fastcall FUN_004ef2b0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005729b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f1a90(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00578268;
  param_1[0x55] = 0;
  FUN_004ef370(param_1);
  ExceptionList = local_c;
  return param_1;
}


