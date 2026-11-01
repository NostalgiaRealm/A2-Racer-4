
/* ==== FUN_004bd500 @ 004bd500 ==== 
 * signature: undefined4 * __fastcall FUN_004bd500(undefined4 * param_1)
 * body: 004bd500-004bd585
 */

undefined4 * __fastcall FUN_004bd500(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f70b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004bf5d0(param_1 + 3);
  local_4 = 0;
  FUN_004c1ab0(param_1 + 0x26);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


