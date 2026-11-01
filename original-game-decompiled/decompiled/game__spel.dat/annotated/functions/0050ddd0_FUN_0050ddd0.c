
/* ==== FUN_0050ddd0 @ 0050ddd0 ==== 
 * signature: undefined __fastcall FUN_0050ddd0(undefined4 * param_1)
 * body: 0050ddd0-0050de30
 */

void __fastcall FUN_0050ddd0(undefined4 *param_1)

{
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_00573ba8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005789b8;
  local_4 = 0;
  if (param_1[1] != 0) {
    FUN_004f5b00(param_1[1]);
    param_1[1] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0050a3c0(param_1);
  ExceptionList = local_c;
  return;
}


