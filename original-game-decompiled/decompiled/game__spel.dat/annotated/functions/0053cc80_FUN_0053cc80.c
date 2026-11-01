
/* ==== FUN_0053cc80 @ 0053cc80 ==== 
 * signature: undefined4 * __fastcall FUN_0053cc80(undefined4 * param_1)
 * body: 0053cc80-0053ccd7
 */

undefined4 * __fastcall FUN_0053cc80(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00574288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  local_4 = 0;
  FUN_0050df40(param_1 + 8,8);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = local_c;
  return param_1;
}


