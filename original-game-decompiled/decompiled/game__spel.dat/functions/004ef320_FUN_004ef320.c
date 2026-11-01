
/* ==== FUN_004ef320 @ 004ef320 ==== 
 * signature: undefined __fastcall FUN_004ef320(undefined4 * param_1)
 * body: 004ef320-004ef36e
 */

void __fastcall FUN_004ef320(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_005729d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00578268;
  local_4 = 0;
  FUN_004f0980((int)param_1);
  local_4 = 0xffffffff;
  FUN_004f1b00(param_1);
  ExceptionList = local_c;
  return;
}


