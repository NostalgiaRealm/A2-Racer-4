
/* ==== FUN_0053bc00 @ 0053bc00 ==== 
 * signature: undefined __fastcall FUN_0053bc00(undefined4 * param_1)
 * body: 0053bc00-0053bc52
 */

void __fastcall FUN_0053bc00(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00574228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00578c40;
  local_4 = 0;
  FUN_005586c5(param_1 + 6,0x1c,2,FUN_0053bbb0);
  *param_1 = &PTR_FUN_00578ab4;
  ExceptionList = local_c;
  return;
}


