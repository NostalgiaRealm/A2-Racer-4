
/* ==== FUN_004c2d70 @ 004c2d70 ==== 
 * signature: undefined4 * __fastcall FUN_004c2d70(undefined4 * param_1)
 * body: 004c2d70-004c2dd8
 */

undefined4 * __fastcall FUN_004c2d70(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f7e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004c0fc0(param_1);
  local_4 = 0;
  FUN_004c1ab0(param_1 + 0x6b);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004c1ab0(param_1 + 0x6f);
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  ExceptionList = local_c;
  return param_1;
}


